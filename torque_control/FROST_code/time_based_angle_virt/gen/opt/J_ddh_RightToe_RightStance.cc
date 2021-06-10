/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:19:45 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t3448;
  double t3450;
  double t3422;
  double t3451;
  double t286;
  double t3449;
  double t3452;
  double t3463;
  double t3465;
  double t3466;
  double t3473;
  double t3474;
  double t3487;
  double t3488;
  double t3489;
  double t3490;
  double t3491;
  double t3505;
  double t3506;
  double t287;
  double t3397;
  double t3510;
  double t3511;
  double t3512;
  double t3509;
  double t3513;
  double t3515;
  double t3517;
  double t3518;
  double t3519;
  double t3540;
  double t3542;
  double t3547;
  double t3548;
  double t3549;
  double t3550;
  double t3551;
  double t3558;
  double t3559;
  double t3560;
  double t3557;
  double t3561;
  double t3562;
  double t3563;
  double t3564;
  double t3565;
  double t3556;
  double t3566;
  double t3567;
  double t3568;
  double t3464;
  double t3482;
  double t3483;
  double t3484;
  double t3485;
  double t3486;
  double t3507;
  double t3508;
  double t3520;
  double t3526;
  double t3527;
  double t3528;
  double t3529;
  double t3541;
  double t3543;
  double t3544;
  double t3545;
  double t3546;
  double t3552;
  double t3553;
  double t3554;
  double t3555;
  double t3569;
  double t3570;
  double t3571;
  double t3581;
  double t3582;
  double t3583;
  double t3584;
  double t3585;
  double t3599;
  double t3600;
  double t3601;
  double t3602;
  double t3572;
  double t3573;
  double t3574;
  double t3575;
  double t3576;
  double t3607;
  double t3613;
  double t3615;
  double t3620;
  double t3621;
  double t3622;
  double t3623;
  double t3624;
  double t3629;
  double t3630;
  double t3631;
  double t3632;
  double t3633;
  double t3634;
  double t3635;
  double t3636;
  double t3637;
  double t3638;
  double t3609;
  double t3610;
  double t3611;
  double t3612;
  double t3614;
  double t3616;
  double t3617;
  double t3618;
  double t3619;
  double t3625;
  double t3626;
  double t3627;
  double t3628;
  double t3639;
  double t3640;
  double t3641;
  double t3656;
  double t3657;
  double t3658;
  double t3659;
  t3448 = Cos(var1[3]);
  t3450 = Sin(var1[2]);
  t3422 = Cos(var1[2]);
  t3451 = Sin(var1[3]);
  t286 = Cos(var1[4]);
  t3449 = t3422*t3448;
  t3452 = -1.*t3450*t3451;
  t3463 = t3449 + t3452;
  t3465 = -1.*t3448*t3450;
  t3466 = -1.*t3422*t3451;
  t3473 = t3465 + t3466;
  t3474 = Sin(var1[4]);
  t3487 = -0.4*t286*t3473;
  t3488 = 0.4*t3463*t3474;
  t3489 = t286*t3473;
  t3490 = -1.*t3463*t3474;
  t3491 = t3489 + t3490;
  t3505 = 0.8*t3491;
  t3506 = t3487 + t3488 + t3505;
  t287 = -1.*t286;
  t3397 = 1. + t287;
  t3510 = -1.*t3422*t3448;
  t3511 = t3450*t3451;
  t3512 = t3510 + t3511;
  t3509 = 0.4*t3397*t3473;
  t3513 = -0.4*t3512*t3474;
  t3515 = t3512*t3474;
  t3517 = t3489 + t3515;
  t3518 = 0.8*t3517;
  t3519 = t3509 + t3513 + t3518;
  t3540 = 0.4*t3473*t3474;
  t3542 = -1.*t3473*t3474;
  t3547 = -0.4*t286*t3512;
  t3548 = t286*t3512;
  t3549 = t3548 + t3542;
  t3550 = 0.8*t3549;
  t3551 = t3547 + t3540 + t3550;
  t3558 = t3448*t3450;
  t3559 = t3422*t3451;
  t3560 = t3558 + t3559;
  t3557 = 0.4*t3397*t3512;
  t3561 = -0.4*t3560*t3474;
  t3562 = t3560*t3474;
  t3563 = t3548 + t3562;
  t3564 = 0.8*t3563;
  t3565 = t3557 + t3561 + t3564;
  t3556 = var2[4]*t3551;
  t3566 = var2[2]*t3565;
  t3567 = var2[3]*t3565;
  t3568 = t3556 + t3566 + t3567;
  t3464 = 0.4*t3397*t3463;
  t3482 = -0.4*t3473*t3474;
  t3483 = t286*t3463;
  t3484 = t3473*t3474;
  t3485 = t3483 + t3484;
  t3486 = 0.8*t3485;
  t3507 = var3[4]*t3506;
  t3508 = var2[4]*t3506;
  t3520 = var3[2]*t3519;
  t3526 = var3[3]*t3519;
  t3527 = var2[2]*t3519;
  t3528 = var2[3]*t3519;
  t3529 = 0.4*t286*t3463;
  t3541 = -1.*t286*t3463;
  t3543 = t3541 + t3542;
  t3544 = 0.8*t3543;
  t3545 = t3529 + t3540 + t3544;
  t3546 = var2[4]*t3545;
  t3552 = var2[2]*t3551;
  t3553 = var2[3]*t3551;
  t3554 = t3546 + t3552 + t3553;
  t3555 = var2[4]*t3554;
  t3569 = var2[2]*t3568;
  t3570 = var2[3]*t3568;
  t3571 = t3464 + t3482 + t3486 + t3507 + t3508 + t3520 + t3526 + t3527 + t3528 + t3555 + t3569 + t3570;
  t3581 = 0.4*t286*t3560;
  t3582 = -1.*t286*t3560;
  t3583 = t3582 + t3490;
  t3584 = 0.8*t3583;
  t3585 = t3581 + t3488 + t3584;
  t3599 = 2.*var2[4]*t3506;
  t3600 = 2.*var2[2]*t3519;
  t3601 = 2.*var2[3]*t3519;
  t3602 = t3464 + t3482 + t3486 + t3599 + t3600 + t3601;
  t3572 = -0.4*t286*t3463;
  t3573 = 0.4*t3560*t3474;
  t3574 = -1.*t3560*t3474;
  t3575 = t3483 + t3574;
  t3576 = 0.8*t3575;
  t3607 = t3464 + t3482 + t3486;
  t3613 = 0.4*t3512*t3474;
  t3615 = -1.*t3512*t3474;
  t3620 = -0.4*t286*t3560;
  t3621 = t286*t3560;
  t3622 = t3621 + t3615;
  t3623 = 0.8*t3622;
  t3624 = t3620 + t3613 + t3623;
  t3629 = 0.4*t3397*t3560;
  t3630 = -0.4*t3463*t3474;
  t3631 = t3463*t3474;
  t3632 = t3621 + t3631;
  t3633 = 0.8*t3632;
  t3634 = t3629 + t3630 + t3633;
  t3635 = var2[2]*t3634;
  t3636 = var2[3]*t3634;
  t3637 = var2[4]*t3624;
  t3638 = t3635 + t3636 + t3637;
  t3609 = var3[4]*t3551;
  t3610 = var3[2]*t3565;
  t3611 = var3[3]*t3565;
  t3612 = 0.4*t286*t3473;
  t3614 = -1.*t286*t3473;
  t3616 = t3614 + t3615;
  t3617 = 0.8*t3616;
  t3618 = t3612 + t3613 + t3617;
  t3619 = var2[4]*t3618;
  t3625 = var2[2]*t3624;
  t3626 = var2[3]*t3624;
  t3627 = t3619 + t3625 + t3626;
  t3628 = var2[4]*t3627;
  t3639 = var2[2]*t3638;
  t3640 = var2[3]*t3638;
  t3641 = t3509 + t3513 + t3518 + t3609 + t3556 + t3610 + t3611 + t3566 + t3567 + t3628 + t3639 + t3640;
  t3656 = 2.*var2[4]*t3551;
  t3657 = 2.*var2[2]*t3565;
  t3658 = 2.*var2[3]*t3565;
  t3659 = t3509 + t3513 + t3518 + t3656 + t3657 + t3658;
  p_output1[0]=1.;
  p_output1[1]=t3571;
  p_output1[2]=t3571;
  p_output1[3]=t3572 + t3573 + t3576 + t3506*var2[2] + t3554*var2[2] + t3506*var2[3] + t3554*var2[3] + t3585*var2[4] + var2[4]*(t3545*var2[2] + t3545*var2[3] + (t3529 + t3561 + 0.8*(t3541 + t3562))*var2[4]) + t3506*var3[2] + t3506*var3[3] + t3585*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t3602;
  p_output1[6]=t3602;
  p_output1[7]=t3572 + t3573 + t3576 + 2.*t3506*var2[2] + 2.*t3506*var2[3] + 2.*t3585*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t3607;
  p_output1[10]=t3607;
  p_output1[11]=t3572 + t3573 + t3576;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t3641;
  p_output1[16]=t3641;
  p_output1[17]=t3487 + t3488 + t3505 + t3546 + t3552 + t3553 + t3627*var2[2] + t3627*var2[3] + var2[4]*(t3618*var2[2] + t3618*var2[3] + (t3612 + t3630 + 0.8*(t3614 + t3631))*var2[4]) + t3551*var3[2] + t3551*var3[3] + t3545*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t3659;
  p_output1[20]=t3659;
  p_output1[21]=t3487 + t3488 + t3505 + 2.*t3551*var2[2] + 2.*t3551*var2[3] + 2.*t3545*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t3519;
  p_output1[24]=t3519;
  p_output1[25]=t3506;
  p_output1[26]=-1.;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightToe_RightStance.hh"

namespace RightStance
{

void J_ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
