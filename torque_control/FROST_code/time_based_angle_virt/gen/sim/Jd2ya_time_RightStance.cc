/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:34:48 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t5574;
  double t839;
  double t840;
  double t5575;
  double t363;
  double t2659;
  double t5576;
  double t5580;
  double t5582;
  double t5583;
  double t5584;
  double t5585;
  double t5587;
  double t5606;
  double t5607;
  double t5608;
  double t5594;
  double t5604;
  double t5605;
  double t5609;
  double t5610;
  double t5611;
  double t5612;
  double t5613;
  double t5619;
  double t5626;
  double t5627;
  double t5628;
  double t5625;
  double t5629;
  double t5630;
  double t5631;
  double t5632;
  double t5633;
  double t5581;
  double t5586;
  double t5588;
  double t5590;
  double t5591;
  double t5592;
  double t5593;
  double t5614;
  double t5615;
  double t5616;
  double t5617;
  double t5618;
  double t5620;
  double t5621;
  double t5622;
  double t5623;
  double t5624;
  double t5634;
  double t5635;
  double t5636;
  double t5655;
  double t5656;
  double t5657;
  double t5658;
  double t5659;
  double t5660;
  double t5661;
  t5574 = Cos(var1[2]);
  t839 = Cos(var1[5]);
  t840 = Sin(var1[2]);
  t5575 = Sin(var1[5]);
  t363 = Cos(var1[6]);
  t2659 = -1.*t839*t840;
  t5576 = -1.*t5574*t5575;
  t5580 = t2659 + t5576;
  t5582 = t5574*t839;
  t5583 = -1.*t840*t5575;
  t5584 = t5582 + t5583;
  t5585 = Sin(var1[6]);
  t5587 = t363*t5580;
  t5606 = -1.*t5574*t839;
  t5607 = t840*t5575;
  t5608 = t5606 + t5607;
  t5594 = -1.*t363;
  t5604 = 1. + t5594;
  t5605 = 0.4*t5604*t5580;
  t5609 = -0.4*t5608*t5585;
  t5610 = t5608*t5585;
  t5611 = t5587 + t5610;
  t5612 = 0.8*t5611;
  t5613 = t5605 + t5609 + t5612;
  t5619 = t363*t5608;
  t5626 = t839*t840;
  t5627 = t5574*t5575;
  t5628 = t5626 + t5627;
  t5625 = 0.4*t5604*t5608;
  t5629 = -0.4*t5628*t5585;
  t5630 = t5628*t5585;
  t5631 = t5619 + t5630;
  t5632 = 0.8*t5631;
  t5633 = t5625 + t5629 + t5632;
  t5581 = -0.4*t363*t5580;
  t5586 = 0.4*t5584*t5585;
  t5588 = -1.*t5584*t5585;
  t5590 = t5587 + t5588;
  t5591 = 0.8*t5590;
  t5592 = t5581 + t5586 + t5591;
  t5593 = var2[6]*t5592;
  t5614 = var2[2]*t5613;
  t5615 = var2[5]*t5613;
  t5616 = t5593 + t5614 + t5615;
  t5617 = -0.4*t363*t5608;
  t5618 = 0.4*t5580*t5585;
  t5620 = -1.*t5580*t5585;
  t5621 = t5619 + t5620;
  t5622 = 0.8*t5621;
  t5623 = t5617 + t5618 + t5622;
  t5624 = var2[6]*t5623;
  t5634 = var2[2]*t5633;
  t5635 = var2[5]*t5633;
  t5636 = t5624 + t5634 + t5635;
  t5655 = 0.4*t5604*t5584;
  t5656 = -0.4*t5580*t5585;
  t5657 = t363*t5584;
  t5658 = t5580*t5585;
  t5659 = t5657 + t5658;
  t5660 = 0.8*t5659;
  t5661 = t5655 + t5656 + t5660;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=t5616;
  p_output1[11]=t5636;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=t5616;
  p_output1[23]=t5636;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=t5592*var2[2] + t5592*var2[5] + (t5586 + 0.4*t363*t5628 + 0.8*(t5588 - 1.*t363*t5628))*var2[6];
  p_output1[27]=t5623*var2[2] + t5623*var2[5] + (0.4*t363*t5584 + t5618 + 0.8*(-1.*t363*t5584 + t5620))*var2[6];
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=1.;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=1.;
  p_output1[34]=0;
  p_output1[35]=1.;
  p_output1[36]=1.;
  p_output1[37]=0;
  p_output1[38]=t5661;
  p_output1[39]=t5613;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=t5661;
  p_output1[51]=t5613;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=-0.4*t363*t5584 + 0.4*t5585*t5628 + 0.8*(-1.*t5585*t5628 + t5657);
  p_output1[55]=t5592;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jd2ya_time_RightStance.hh"

namespace SymFunction
{

void Jd2ya_time_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
