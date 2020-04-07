/*
 * Automatically Generated from Mathematica.
 * Mon 6 Apr 2020 23:57:07 GMT-04:00
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
  double t436;
  double t453;
  double t435;
  double t459;
  double t373;
  double t449;
  double t460;
  double t468;
  double t479;
  double t480;
  double t530;
  double t534;
  double t397;
  double t408;
  double t620;
  double t621;
  double t622;
  double t472;
  double t550;
  double t554;
  double t560;
  double t561;
  double t583;
  double t587;
  double t588;
  double t636;
  double t637;
  double t639;
  double t641;
  double t646;
  double t647;
  double t650;
  double t658;
  double t659;
  double t691;
  double t692;
  double t693;
  double t664;
  double t665;
  double t666;
  double t667;
  double t678;
  double t679;
  double t689;
  double t690;
  double t696;
  double t699;
  double t707;
  double t708;
  double t713;
  double t714;
  double t715;
  double t716;
  double t717;
  double t718;
  double t719;
  double t720;
  double t721;
  double t722;
  t436 = Cos(var1[3]);
  t453 = Sin(var1[2]);
  t435 = Cos(var1[2]);
  t459 = Sin(var1[3]);
  t373 = Cos(var1[4]);
  t449 = -1.*t435*t436;
  t460 = t453*t459;
  t468 = t449 + t460;
  t479 = t436*t453;
  t480 = t435*t459;
  t530 = t479 + t480;
  t534 = Sin(var1[4]);
  t397 = -1.*t373;
  t408 = 1. + t397;
  t620 = -1.*t436*t453;
  t621 = -1.*t435*t459;
  t622 = t620 + t621;
  t472 = 0.4*t408*t468;
  t550 = -0.4*t530*t534;
  t554 = t373*t468;
  t560 = t530*t534;
  t561 = t554 + t560;
  t583 = 0.8*t561;
  t587 = t472 + t550 + t583;
  t588 = var2[2]*t587;
  t636 = 0.4*t408*t622;
  t637 = -0.4*t468*t534;
  t639 = t373*t622;
  t641 = t468*t534;
  t646 = t639 + t641;
  t647 = 0.8*t646;
  t650 = t636 + t637 + t647;
  t658 = var2[0]*t650;
  t659 = t588 + t658;
  t691 = t435*t436;
  t692 = -1.*t453*t459;
  t693 = t691 + t692;
  t664 = -0.4*t373*t468;
  t665 = 0.4*t622*t534;
  t666 = -1.*t622*t534;
  t667 = t554 + t666;
  t678 = 0.8*t667;
  t679 = t664 + t665 + t678;
  t689 = var2[2]*t679;
  t690 = -0.4*t373*t622;
  t696 = 0.4*t693*t534;
  t699 = -1.*t693*t534;
  t707 = t639 + t699;
  t708 = 0.8*t707;
  t713 = t690 + t696 + t708;
  t714 = var2[0]*t713;
  t715 = t689 + t714;
  t716 = 0.4*t408*t693;
  t717 = -0.4*t622*t534;
  t718 = t373*t693;
  t719 = t622*t534;
  t720 = t718 + t719;
  t721 = 0.8*t720;
  t722 = t716 + t717 + t721;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t659;
  p_output1[3]=t659;
  p_output1[4]=t715;
  p_output1[5]=t722;
  p_output1[6]=t650;
  p_output1[7]=t659;
  p_output1[8]=t659;
  p_output1[9]=t715;
  p_output1[10]=t722;
  p_output1[11]=t650;
  p_output1[12]=t715;
  p_output1[13]=t715;
  p_output1[14]=(0.4*t373*t530 + t696 + 0.8*(-1.*t373*t530 + t699))*var2[0] + (t665 + 0.4*t373*t693 + 0.8*(t666 - 1.*t373*t693))*var2[2];
  p_output1[15]=0.4*t530*t534 - 0.4*t373*t693 + 0.8*(-1.*t530*t534 + t718);
  p_output1[16]=t713;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightToe_vec_RightStance.hh"

namespace RightStance
{

void J_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
