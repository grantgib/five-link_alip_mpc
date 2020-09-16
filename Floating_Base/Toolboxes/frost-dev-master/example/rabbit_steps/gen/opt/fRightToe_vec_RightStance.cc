/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 21:08:26 GMT-04:00
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
  double t2313;
  double t2363;
  double t2299;
  double t2389;
  double t2129;
  double t2315;
  double t2394;
  double t2399;
  double t2401;
  double t2402;
  double t2414;
  double t2418;
  double t2218;
  double t2262;
  double t2461;
  double t2468;
  double t2469;
  double t2400;
  double t2438;
  double t2442;
  double t2448;
  double t2449;
  double t2453;
  double t2454;
  double t2455;
  double t2460;
  double t2470;
  double t2471;
  double t2472;
  double t2473;
  double t2474;
  double t2475;
  double t2476;
  double t2477;
  double t2479;
  double t2480;
  double t2481;
  t2313 = Cos(var1[3]);
  t2363 = Sin(var1[2]);
  t2299 = Cos(var1[2]);
  t2389 = Sin(var1[3]);
  t2129 = Cos(var1[4]);
  t2315 = t2299*t2313;
  t2394 = -1.*t2363*t2389;
  t2399 = t2315 + t2394;
  t2401 = -1.*t2313*t2363;
  t2402 = -1.*t2299*t2389;
  t2414 = t2401 + t2402;
  t2418 = Sin(var1[4]);
  t2218 = -1.*t2129;
  t2262 = 1. + t2218;
  t2461 = -1.*t2299*t2313;
  t2468 = t2363*t2389;
  t2469 = t2461 + t2468;
  t2400 = 0.4*t2262*t2399;
  t2438 = -0.4*t2414*t2418;
  t2442 = t2129*t2399;
  t2448 = t2414*t2418;
  t2449 = t2442 + t2448;
  t2453 = 0.8*t2449;
  t2454 = t2400 + t2438 + t2453;
  t2455 = var2[0]*t2454;
  t2460 = 0.4*t2262*t2414;
  t2470 = -0.4*t2469*t2418;
  t2471 = t2129*t2414;
  t2472 = t2469*t2418;
  t2473 = t2471 + t2472;
  t2474 = 0.8*t2473;
  t2475 = t2460 + t2470 + t2474;
  t2476 = var2[2]*t2475;
  t2477 = t2455 + t2476;
  t2479 = t2313*t2363;
  t2480 = t2299*t2389;
  t2481 = t2479 + t2480;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t2477;
  p_output1[3]=t2477;
  p_output1[4]=(-0.4*t2129*t2399 + 0.4*t2418*t2481 + 0.8*(t2442 - 1.*t2418*t2481))*var2[0] + (-0.4*t2129*t2414 + 0.4*t2399*t2418 + 0.8*(-1.*t2399*t2418 + t2471))*var2[2];
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

namespace RightStance
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
