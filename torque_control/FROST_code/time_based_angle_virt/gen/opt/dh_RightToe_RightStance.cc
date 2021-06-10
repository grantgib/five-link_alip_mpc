/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:19:40 GMT-05:00
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
  double t3290;
  double t3310;
  double t3289;
  double t3311;
  double t3275;
  double t3294;
  double t3312;
  double t3313;
  double t3320;
  double t3321;
  double t3322;
  double t3323;
  double t3287;
  double t3288;
  double t3314;
  double t3324;
  double t3325;
  double t3326;
  double t3327;
  double t3328;
  double t3332;
  double t3336;
  double t3337;
  double t3338;
  double t3353;
  double t3360;
  double t3361;
  double t3362;
  double t3359;
  double t3363;
  double t3364;
  double t3365;
  double t3366;
  double t3379;
  t3290 = Cos(var1[3]);
  t3310 = Sin(var1[2]);
  t3289 = Cos(var1[2]);
  t3311 = Sin(var1[3]);
  t3275 = Cos(var1[4]);
  t3294 = t3289*t3290;
  t3312 = -1.*t3310*t3311;
  t3313 = t3294 + t3312;
  t3320 = -1.*t3290*t3310;
  t3321 = -1.*t3289*t3311;
  t3322 = t3320 + t3321;
  t3323 = Sin(var1[4]);
  t3287 = -1.*t3275;
  t3288 = 1. + t3287;
  t3314 = 0.4*t3288*t3313;
  t3324 = -0.4*t3322*t3323;
  t3325 = t3275*t3313;
  t3326 = t3322*t3323;
  t3327 = t3325 + t3326;
  t3328 = 0.8*t3327;
  t3332 = t3314 + t3324 + t3328;
  t3336 = t3290*t3310;
  t3337 = t3289*t3311;
  t3338 = t3336 + t3337;
  t3353 = t3275*t3322;
  t3360 = -1.*t3289*t3290;
  t3361 = t3310*t3311;
  t3362 = t3360 + t3361;
  t3359 = 0.4*t3288*t3322;
  t3363 = -0.4*t3362*t3323;
  t3364 = t3362*t3323;
  t3365 = t3353 + t3364;
  t3366 = 0.8*t3365;
  t3379 = t3359 + t3363 + t3366;
  p_output1[0]=var2[0] + t3332*var2[2] + t3332*var2[3] + (-0.4*t3275*t3313 + 0.4*t3323*t3338 + 0.8*(t3325 - 1.*t3323*t3338))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t3379*var2[2] + t3379*var2[3] + (-0.4*t3275*t3322 + 0.4*t3313*t3323 + 0.8*(-1.*t3313*t3323 + t3353))*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightToe_RightStance.hh"

namespace RightStance
{

void dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
