/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 15:03:09 GMT-04:00
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
  double t2447;
  double t2442;
  double t2445;
  double t2448;
  double t2416;
  double t2446;
  double t2449;
  double t2451;
  double t2453;
  double t2454;
  double t2455;
  double t2456;
  double t2418;
  double t2435;
  double t2452;
  double t2457;
  double t2458;
  double t2460;
  double t2461;
  double t2462;
  double t2463;
  double t2465;
  double t2466;
  double t2467;
  t2447 = Cos(var1[2]);
  t2442 = Cos(var1[5]);
  t2445 = Sin(var1[2]);
  t2448 = Sin(var1[5]);
  t2416 = Cos(var1[6]);
  t2446 = -1.*t2442*t2445;
  t2449 = -1.*t2447*t2448;
  t2451 = t2446 + t2449;
  t2453 = -1.*t2447*t2442;
  t2454 = t2445*t2448;
  t2455 = t2453 + t2454;
  t2456 = Sin(var1[6]);
  t2418 = -1.*t2416;
  t2435 = 1. + t2418;
  t2452 = 0.4*t2435*t2451;
  t2457 = -0.4*t2455*t2456;
  t2458 = t2416*t2451;
  t2460 = t2455*t2456;
  t2461 = t2458 + t2460;
  t2462 = 0.8*t2461;
  t2463 = t2452 + t2457 + t2462;
  t2465 = t2447*t2442;
  t2466 = -1.*t2445*t2448;
  t2467 = t2465 + t2466;
  p_output1[0]=1.;
  p_output1[1]=t2463;
  p_output1[2]=t2463;
  p_output1[3]=-0.4*t2416*t2451 + 0.4*t2456*t2467 + 0.8*(t2458 - 1.*t2456*t2467);
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

#include "J_swing_foot_height.hh"

namespace RightStance
{

void J_swing_foot_height_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
