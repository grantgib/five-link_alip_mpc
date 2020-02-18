/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:21:25 GMT-05:00
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
  double t388;
  double t400;
  double t387;
  double t401;
  double t381;
  double t389;
  double t402;
  double t403;
  double t405;
  double t406;
  double t407;
  double t408;
  double t385;
  double t386;
  double t417;
  double t418;
  double t419;
  double t404;
  double t409;
  double t410;
  double t411;
  double t412;
  double t413;
  double t414;
  double t415;
  double t416;
  double t420;
  double t421;
  double t422;
  double t423;
  double t424;
  double t425;
  double t426;
  double t427;
  double t429;
  double t430;
  double t431;
  t388 = Cos(var1[3]);
  t400 = Sin(var1[2]);
  t387 = Cos(var1[2]);
  t401 = Sin(var1[3]);
  t381 = Cos(var1[4]);
  t389 = t387*t388;
  t402 = -1.*t400*t401;
  t403 = t389 + t402;
  t405 = -1.*t388*t400;
  t406 = -1.*t387*t401;
  t407 = t405 + t406;
  t408 = Sin(var1[4]);
  t385 = -1.*t381;
  t386 = 1. + t385;
  t417 = -1.*t387*t388;
  t418 = t400*t401;
  t419 = t417 + t418;
  t404 = 0.4*t386*t403;
  t409 = -0.4*t407*t408;
  t410 = t381*t403;
  t411 = t407*t408;
  t412 = t410 + t411;
  t413 = 0.8*t412;
  t414 = t404 + t409 + t413;
  t415 = var2[0]*t414;
  t416 = 0.4*t386*t407;
  t420 = -0.4*t419*t408;
  t421 = t381*t407;
  t422 = t419*t408;
  t423 = t421 + t422;
  t424 = 0.8*t423;
  t425 = t416 + t420 + t424;
  t426 = var2[2]*t425;
  t427 = t415 + t426;
  t429 = t388*t400;
  t430 = t387*t401;
  t431 = t429 + t430;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t427;
  p_output1[3]=t427;
  p_output1[4]=(-0.4*t381*t403 + 0.4*t408*t431 + 0.8*(t410 - 1.*t408*t431))*var2[0] + (-0.4*t381*t407 + 0.4*t403*t408 + 0.8*(-1.*t403*t408 + t421))*var2[2];
  p_output1[5]=0;
  p_output1[6]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_vec_RightStance.hh"

namespace SymFunction
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
