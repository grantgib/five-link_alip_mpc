/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:16:15 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t2374;
  double t2390;
  double t2363;
  double t2392;
  double t194;
  double t2384;
  double t2394;
  double t2402;
  double t2420;
  double t2423;
  double t2430;
  double t2438;
  double t290;
  double t2278;
  double t2405;
  double t2444;
  double t2445;
  double t2446;
  double t2448;
  double t2452;
  double t2453;
  double t2465;
  double t2470;
  double t2471;
  t2374 = Cos(var1[5]);
  t2390 = Sin(var1[2]);
  t2363 = Cos(var1[2]);
  t2392 = Sin(var1[5]);
  t194 = Cos(var1[6]);
  t2384 = t2363*t2374;
  t2394 = -1.*t2390*t2392;
  t2402 = t2384 + t2394;
  t2420 = -1.*t2374*t2390;
  t2423 = -1.*t2363*t2392;
  t2430 = t2420 + t2423;
  t2438 = Sin(var1[6]);
  t290 = -1.*t194;
  t2278 = 1. + t290;
  t2405 = 0.4*t2278*t2402;
  t2444 = -0.4*t2430*t2438;
  t2445 = t194*t2402;
  t2446 = t2430*t2438;
  t2448 = t2445 + t2446;
  t2452 = 0.8*t2448;
  t2453 = t2405 + t2444 + t2452;
  t2465 = t2374*t2390;
  t2470 = t2363*t2392;
  t2471 = t2465 + t2470;
  p_output1[0]=1.;
  p_output1[1]=t2453;
  p_output1[2]=t2453;
  p_output1[3]=-0.4*t194*t2402 + 0.4*t2438*t2471 + 0.8*(t2445 - 1.*t2438*t2471);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_pos_swing_x.hh"

namespace RightStance
{

void J_pos_swing_x_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
