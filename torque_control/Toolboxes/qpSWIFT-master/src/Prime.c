/*********************************************************************************************************
* Main Program Module 
* 
* Solves a QP of the form 
* 
* min : 0.5*x'Px + c'x 
* s.t.  Gx <= h 
*       Ax = b 
* 
* P, G and A are to be supplied in Column Compressed Storage Format 
* No error checking is performed; It is assumed that the matrices supplied are consistent in size and data type 
* Permutation Matrix is supplied as a vector equal to the dimension of the kkt matrix
*
*
* Permutation Matrix matlab Syntax
*
* kkt = [P	A'	G']
*       [A	0	0]
*       [G	0	-I]
Permut = amd(kkt) - 1;

*********************************************************************************************************/


#include "Prime.h"

/* Setup Function
/* Allocates memory for all the variables
/* Solves for the initial condition [x0,y0,z0,s0]
/* Solves the result of LDL_symbolic and uses it for subsequent iterations */
QP* QP_SETUP(qp_int n, qp_int m, qp_int p, qp_int *Pjc, qp_int *Pir, qp_real *Ppr, qp_int*Ajc, qp_int *Air, qp_real *Apr, qp_int *Gjc, qp_int *Gir, qp_real *Gpr, qp_real *c, qp_real *h, qp_real *b, qp_real sigma_d, qp_int *Permut){
	timer tsetup;
	tic(&tsetup);
	qp_int kkt_nnz, kkt_m;
	QP *myQP;
	myQP = (QP*)MALLOC(sizeof(QP));
    
    /* Initialise Settings */
	myQP->options = (settings*)MALLOC(sizeof(settings));
	myQP->options->abstol = ABSTOL;
	myQP->options->reltol = RELTOL;
	myQP->options->maxit = MAXIT;
	myQP->options->sigma = SIGMA;
	myQP->options->verbose = VERBOSE;
	/* Initialise Settings */

 
	/* Initialise Stats */ 
	myQP->stats = (stats*)MALLOC(sizeof(stats));
	myQP->stats->Flag = QP_FATAL;
	myQP->stats->IterationCount = 0;
	myQP->stats->alpha_p = 0.0;
	myQP->stats->alpha_d = 0.0;
	/* Initialise Stats */
    
    
    
	/* Initalize Matrices */

	myQP->n = n;
	myQP->m = m;

	if (Apr && Ajc && Air && b && p != 0) {
		myQP->p = p;
        myQP->A = (smat*)MALLOC(sizeof(smat));
        myQP->b = b;
		SparseMatrixSetup(myQP->p, myQP->n, Ajc[myQP->n], Ajc, Air, Apr, myQP->A);
	}
	else{
		myQP->p = 0;
		myQP->A = NULL;
		myQP->At = NULL;
        myQP->b = NULL;
	}

	myQP->P = (smat*)MALLOC(sizeof(smat));SparseMatrixSetup(myQP->n, myQP->n, Pjc[myQP->n], Pjc, Pir, Ppr, myQP->P);
	myQP->G = (smat*)MALLOC(sizeof(smat));SparseMatrixSetup(myQP->m, myQP->n, Gjc[myQP->n], Gjc, Gir, Gpr, myQP->G);
	myQP->c = c;
	myQP->h = h;
	myQP->sigma_d = sigma_d;
    
    /* Allocate Memory for Transpose of Matrix */
    if (myQP->A) {
        myQP->At = (smat*)MALLOC(sizeof(smat));
        myQP->At->jc = (qp_int*)MALLOC((myQP->A->m + 1)*sizeof(qp_int));
        myQP->At->ir = (qp_int*)MALLOC(myQP->A->nnz*sizeof(qp_int));
        myQP->At->pr = (qp_real*)MALLOC(myQP->A->nnz*sizeof(qp_real));
        SparseMatrixSetup(myQP->A->n, myQP->A->m, myQP->A->nnz, myQP->At->jc, myQP->At->ir, myQP->At->pr, myQP->At);
        SparseMatrixTranspose(myQP->A,myQP->At);
    }
    
    myQP->Gt = (smat*)MALLOC(sizeof(smat));
    myQP->Gt->jc = (qp_int*)MALLOC((myQP->G->m + 1)*sizeof(qp_int));
	myQP->Gt->ir = (qp_int*)MALLOC(myQP->G->nnz*sizeof(qp_int));
	myQP->Gt->pr = (qp_real*)MALLOC(myQP->G->nnz*sizeof(qp_real));
    SparseMatrixSetup(myQP->G->n, myQP->G->m, myQP->G->nnz, myQP->Gt->jc, myQP->Gt->ir, myQP->Gt->pr,myQP->Gt);
    SparseMatrixTranspose(myQP->G,myQP->Gt);
    /* Allocate Memory for Transpose of Matrix */
    
	myQP->x = (qp_real*)MALLOC(myQP->n*sizeof(qp_real));
    if(myQP->A){
        myQP->y = (qp_real*)MALLOC(myQP->p*sizeof(qp_real));
    }
	myQP->z = (qp_real*)MALLOC(myQP->m*sizeof(qp_real));
	myQP->s = (qp_real*)MALLOC(myQP->m*sizeof(qp_real));


	myQP->rx = (qp_real*)MALLOC(myQP->n*sizeof(qp_real));
	
	if(myQP->A){
        myQP->ry = (qp_real*)MALLOC(myQP->p*sizeof(qp_real));
    }
	myQP->rz = (qp_real*)MALLOC(myQP->m*sizeof(qp_real));

	myQP->delta = (qp_real*)MALLOC((myQP->n + myQP->m + myQP->p)*sizeof(qp_real));
	myQP->delta_x = (qp_real*)MALLOC(myQP->n*sizeof(qp_real));
    
	if(myQP->A){
        myQP->delta_y = (qp_real*)MALLOC(myQP->p*sizeof(qp_real));
    }
	myQP->delta_z = (qp_real*)MALLOC(myQP->m*sizeof(qp_real));
	myQP->delta_s = (qp_real*)MALLOC(myQP->m*sizeof(qp_real));

	myQP->ds = (qp_real*)MALLOC(myQP->m*sizeof(qp_real));
	myQP->lambda = (qp_real*)MALLOC(myQP->m*sizeof(qp_real));

    myQP->temp = (qp_real*)MALLOC(myQP->n*sizeof(qp_real));

	/* Initialise KKT Matrix */
	if (myQP->A) {
		kkt_nnz = myQP->P->nnz + (2 * myQP->G->nnz) + myQP->G->m + (2 * myQP->A->nnz);
		kkt_m = myQP->P->n + myQP->A->m + myQP->G->m;
	}
	else {
		kkt_nnz = myQP->P->nnz + (2 * myQP->G->nnz) + myQP->G->m;
		kkt_m = myQP->P->n + myQP->G->m;
	}

    
	
    myQP->kkt = (kkt*)MALLOC(sizeof(kkt));
    
	myQP->kkt->kktmatrix = (smat*)MALLOC(sizeof(smat));
    myQP->kkt->kktmatrix->jc = (qp_int*)MALLOC((kkt_m+1)*sizeof(qp_int));
    myQP->kkt->kktmatrix->pr = (qp_real*)MALLOC(kkt_nnz*sizeof(qp_real));
    myQP->kkt->kktmatrix->ir = (qp_int*)MALLOC(kkt_nnz*sizeof(qp_int));
    
    SparseMatrixSetup(kkt_m, kkt_m, kkt_nnz, myQP->kkt->kktmatrix->jc, myQP->kkt->kktmatrix->ir, myQP->kkt->kktmatrix->pr, myQP->kkt->kktmatrix);
	/* Forms the full kkt Matrix  */
	/*	Kkt =  [P   A'	G']
	/* 	       [A   0	0 ]		with equality constraints included
	/*		   [G	0   -I]
	/*    kkt = [P	G']
	/*		    [G	-I]			with inequality constraints */
	formkktmatrix_full(myQP->P, myQP->G, myQP->A, myQP->Gt, myQP->At, myQP->kkt->kktmatrix);

	myQP->kkt->b = (qp_real*)MALLOC((myQP->m + myQP->n + myQP->p)*sizeof(qp_real));
    
    if (Permut)
   {
        myQP->kkt->P = Permut;
        myQP->stats->AMD_RESULT = -3;
   }
   else {
        /* AMD Ordering */
        myQP->kkt->P = (qp_int*)MALLOC((myQP->m + myQP->n + myQP->p)*sizeof(qp_int));
        double Control[AMD_CONTROL],Info[AMD_INFO];
        amd_l_defaults(Control);
        myQP->stats->AMD_RESULT = amd_l_order(myQP->kkt->kktmatrix->n, myQP->kkt->kktmatrix->jc, myQP->kkt->kktmatrix->ir, myQP->kkt->P, Control, Info);
        
        if (myQP->stats->AMD_RESULT < 0){
            #ifdef MATLAB_MEX_FILE
            PRINT("AMD is not succesful, Using a default permutation matrix \n");
            #endif
            for(qp_int i=0;i < n + m + p ;i++) myQP->kkt->P[i]=i;
        }
      	/* amd_l_info(Info); */
		/* AMD Ordering */
   }
    

	myQP->kkt->Pinv = (qp_int*)MALLOC((myQP->m + myQP->n + myQP->p)*sizeof(qp_int));

	
	
    
    /* Initialise the solver */
	if (!kkt_initialize(myQP)){
		myQP->stats->Flag = QP_KKTFAIL;
		PRINT("Status : %d", QP_KKTFAIL);
	}
	


	myQP->stats->ldl_numeric = 0.0;
	myQP->stats->tsetup = toc(&tsetup);
	return myQP;
}



/* Main Solver Function */
qp_int QP_SOLVE(QP *myQP){
	timer tsolve;
	tic(&tsolve);
	timer kkt_t;
	qp_real kkt_time = 0;

	qp_int Flag_kkt;

    #ifndef MATLAB_MEX_FILE
	if( myQP->options->verbose > 0)
        PRINT("****qpSWIFT : Sparse Quadratic Programming Solver****\n\n");
        PRINT("================Data Statistics======================\n");
    #endif

	if (myQP->stats->Flag != QP_KKTFAIL){

		for (qp_int i = 0; i < myQP->options->maxit; i++){

			
			/* Computes the residuals [rx;rz] */
			
			computeresiduals(myQP);
			
			/* Evaluate Objective Value Function */

            myQP->stats->fval = obj_value(myQP->P, myQP->c, myQP->x, myQP->temp);

			if( myQP->options->verbose > 0){
				PRINT("It: %d || pcost : %e || rx:%e   ||  ry:%e ||  rz:%e || mu:%e\n", myQP->stats->IterationCount,myQP->stats->fval,myQP->stats->n_rx,myQP->stats->n_ry,myQP->stats->n_rz,myQP->stats->n_mu);
			}
			/* Checks Exit condition if rx < ABSTOL rz < FEASTOl and s'z/m < 1e-6 */
			if (myQP->p){
				if ( myQP->stats->n_rx < myQP->options->reltol / sqrt(3.0) && myQP->stats->n_rz < myQP->options->reltol / sqrt(3.0) && myQP->stats->n_ry < myQP->options->reltol / sqrt(3.0) && myQP->stats->n_mu < myQP->options->abstol) {
					myQP->stats->Flag = QP_OPTIMAL;
					break;
				}
			}
			else{
				if ( myQP->stats->n_rx  < myQP->options->reltol / sqrt(3.0) && myQP->stats->n_rz < myQP->options->reltol / sqrt(3.0) && myQP->stats->n_mu < myQP->options->abstol) {
					myQP->stats->Flag = QP_OPTIMAL;
					break;
				}
			}


			/* Updates lambda and mu */
			formlambda(myQP->lambda, myQP->s, myQP->z, myQP->m);
			myQP->mu = innerproduct(myQP->lambda, myQP->lambda, myQP->m) / myQP->m;

			if (myQP->options->sigma > myQP->sigma_d){
				form_ds(myQP->ds, myQP->lambda, myQP->delta_s, myQP->delta_z, myQP->options->sigma, myQP->mu, myQP->m, 0);

				if (myQP->stats->IterationCount == 0){
					updatekktmatrix(myQP->kkt->kktmatrix, myQP->s, myQP->z, myQP->delta_s, myQP->delta_z, myQP->stats->alpha_p, myQP->stats->alpha_d, myQP->m, myQP->n, myQP->p, 0);
				}
				else{
					updatekktmatrix(myQP->kkt->kktmatrix, myQP->s, myQP->z, myQP->delta_s, myQP->delta_z, myQP->stats->alpha_p, myQP->stats->alpha_d, myQP->m, myQP->n, myQP->p, 0);
				}
				updatekktmatrix_b(myQP->kkt->b, myQP->rx, myQP->ry, myQP->rz, myQP->ds, myQP->z, myQP->n, myQP->m, myQP->p);

				tic(&kkt_t);
				Flag_kkt = kktsolve_1(myQP);
				if (!Flag_kkt){
					myQP->stats->Flag = QP_KKTFAIL;
					break;
				}

				kkt_time += toc(&kkt_t);


				findsteplength(myQP->s, myQP->delta_s, myQP->z, myQP->delta_z, myQP->m, &(myQP->stats->alpha_p), &(myQP->stats->alpha_d));

				

				myQP->rho = formrho(myQP->s, myQP->delta_s, myQP->z, myQP->delta_z, myQP->stats->alpha_p, myQP->stats->alpha_d, myQP->m);
				myQP->options->sigma = MAX(myQP->sigma_d, MIN(1, myQP->rho)*(MIN(1, myQP->rho))*(MIN(1, myQP->rho)));
				form_ds(myQP->ds, myQP->lambda, myQP->delta_s, myQP->delta_z, myQP->options->sigma, myQP->mu, myQP->m, 1);

			}
			else{
				myQP->options->sigma = myQP->sigma_d;
				form_ds(myQP->ds, myQP->lambda, myQP->delta_s, myQP->delta_z, myQP->options->sigma, myQP->mu, myQP->m, 2);
			}

			/* updatekktmatrix(myQP->kkt->kktmatrix, myQP->s, myQP->z, myQP->m, myQP->n, myQP->p); */
			updatekktmatrix_b(myQP->kkt->b, myQP->rx, myQP->ry, myQP->rz, myQP->ds, myQP->z, myQP->n, myQP->m, myQP->p);


			tic(&kkt_t);
			kktsolve_2(myQP);

			kkt_time += toc(&kkt_t);

			findsteplength(myQP->s, myQP->delta_s, myQP->z, myQP->delta_z, myQP->m, &(myQP->stats->alpha_p), &(myQP->stats->alpha_d));
			myQP->stats->alpha_p = MIN(0.99*myQP->stats->alpha_p, 1.0);
			myQP->stats->alpha_d = MIN(0.99*myQP->stats->alpha_d, 1.0);



			updatevariables(myQP->x, myQP->delta_x, myQP->stats->alpha_p, myQP->n);
			updatevariables(myQP->y, myQP->delta_y, myQP->stats->alpha_d, myQP->p);
			updatevariables(myQP->s, myQP->delta_s, myQP->stats->alpha_p, myQP->m);
			updatevariables(myQP->z, myQP->delta_z, myQP->stats->alpha_d, myQP->m);
			myQP->stats->IterationCount++;

			if( myQP->options->verbose > 0){
					PRINT("      || Primal Step Size : %f || Dual Step Size   : %f\n",myQP->stats->alpha_p,myQP->stats->alpha_d);
			}
		}

		

		if (myQP->stats->IterationCount == myQP->options->maxit){
			myQP->stats->Flag = QP_MAXIT;
		}

	}


	myQP->stats->tsolve = toc(&tsolve);
	myQP->stats->kkt_time = kkt_time;

	if (myQP->options->verbose > 0){
		if (myQP->stats->Flag == QP_OPTIMAL){
			    PRINT("\nOptimal Solution Found\n");
				PRINT("Solve Time     : %f ms\n", (myQP->stats->tsolve + myQP->stats->tsetup)*1000.0);
				PRINT("KKT_Solve Time : %f ms\n", myQP->stats->kkt_time*1000.0);
				PRINT("LDL Time       : %f ms\n", myQP->stats->ldl_numeric*1000.0);
				PRINT("Iterations     : %d\n\n", myQP->stats->IterationCount);
			
		}
		if (myQP->stats->Flag == QP_MAXIT){
			    PRINT("\nMaximum Iterations reached\n");
				PRINT("Solve Time     : %f ms\n", myQP->stats->tsolve*1000.0);
				PRINT("KKT_Solve Time : %f ms\n", myQP->stats->kkt_time*1000.0);
				PRINT("LDL Time       : %f ms\n", myQP->stats->ldl_numeric*1000.0);
				PRINT("Iterations     : %d\n\n", myQP->stats->IterationCount);
		}

		if (myQP->stats->Flag == QP_FATAL){
			PRINT("\nUnknown Error Detected\n\n");
		}

		if (myQP->stats->Flag == QP_KKTFAIL){
			PRINT("\nLDL Factorization fail\n\n");
			}
	}

	return myQP->stats->Flag;
}


/* Solver Clean Up Routine
/* Clears all the memory except the input arguments of QP_SETUP function
/* Cannot Access Solution once this function is invoked */
void QP_CLEANUP(QP *myQP){

	/* FREE myQP Vectors */
	FREE(myQP->x);
	FREE(myQP->z);
	FREE(myQP->s);
	FREE(myQP->delta);
	FREE(myQP->delta_x);
	FREE(myQP->delta_z);
	FREE(myQP->delta_s);
	FREE(myQP->rx);
	FREE(myQP->rz);
	FREE(myQP->ds);
	FREE(myQP->lambda);
	FREE(myQP->temp);
    
    /* Free myQP Matrices */
	FREE(myQP->P);
	FREE(myQP->G);
	if (myQP->A) {
		FREE(myQP->A);
		FREE(myQP->At->ir);
		FREE(myQP->At->jc);
		FREE(myQP->At->pr);
		FREE(myQP->At);
        FREE(myQP->y);
        FREE(myQP->delta_y);
        FREE(myQP->ry);
	}
    
    FREE(myQP->Gt->ir);
    FREE(myQP->Gt->jc);
    FREE(myQP->Gt->pr);
    FREE(myQP->Gt);
    
	/* FREE myQP->kkt Structure */
	FREE(myQP->kkt->kktmatrix->ir);
	FREE(myQP->kkt->kktmatrix->jc);
	FREE(myQP->kkt->kktmatrix->pr);
	FREE(myQP->kkt->kktmatrix);
    
    /* Free myQP->kkt vectors */
	FREE(myQP->kkt->b);
	FREE(myQP->kkt->Parent);
	FREE(myQP->kkt->Flag);
	FREE(myQP->kkt->Lnz);
	FREE(myQP->kkt->Li);
	FREE(myQP->kkt->Lp);
	FREE(myQP->kkt->Lti);
	FREE(myQP->kkt->Ltp);
	FREE(myQP->kkt->Pattern);
	FREE(myQP->kkt->UPattern);
	FREE(myQP->kkt->Y);
	FREE(myQP->kkt->Lx);
	FREE(myQP->kkt->D);
	FREE(myQP->kkt->Pinv);
	FREE(myQP->kkt);

    /* FREE Permutation Matrix */
    if(myQP->stats->AMD_RESULT != -3)
        FREE(myQP->kkt->P);
         
	/* FREE Settings */
	FREE(myQP->options);

	/* FREE Statistics */
	FREE(myQP->stats);
    
	/* FREE myQP structure */
	FREE(myQP);

}


/*! @file */
