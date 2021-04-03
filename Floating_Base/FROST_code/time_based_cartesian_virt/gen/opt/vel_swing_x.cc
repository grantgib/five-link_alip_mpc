/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:16:17 GMT-05:00
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
  double t2491;
  double t2507;
  double t2490;
  double t2513;
  double t2455;
  double t2504;
  double t2520;
  double t2524;
  double t2549;
  double t2553;
  double t2556;
  double t2557;
  double t2485;
  double t2488;
  double t2530;
  double t2558;
  double t2559;
  double t2562;
  double t2567;
  double t2577;
  double t2578;
  double t2606;
  double t2609;
  double t2615;
  t2491 = Cos(var1[5]);
  t2507 = Sin(var1[2]);
  t2490 = Cos(var1[2]);
  t2513 = Sin(var1[5]);
  t2455 = Cos(var1[6]);
  t2504 = t2490*t2491;
  t2520 = -1.*t2507*t2513;
  t2524 = t2504 + t2520;
  t2549 = -1.*t2491*t2507;
  t2553 = -1.*t2490*t2513;
  t2556 = t2549 + t2553;
  t2557 = Sin(var1[6]);
  t2485 = -1.*t2455;
  t2488 = 1. + t2485;
  t2530 = 0.4*t2488*t2524;
  t2558 = -0.4*t2556*t2557;
  t2559 = t2455*t2524;
  t2562 = t2556*t2557;
  t2567 = t2559 + t2562;
  t2577 = 0.8*t2567;
  t2578 = t2530 + t2558 + t2577;
  t2606 = t2491*t2507;
  t2609 = t2490*t2513;
  t2615 = t2606 + t2609;
  p_output1[0]=var2[0] + t2578*var2[2] + t2578*var2[5] + (-0.4*t2455*t2524 + 0.4*t2557*t2615 + 0.8*(t2559 - 1.*t2557*t2615))*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "vel_swing_x.hh"

namespace RightStance
{

void vel_swing_x_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
