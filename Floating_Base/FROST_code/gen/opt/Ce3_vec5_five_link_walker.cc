/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:42 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t2435;
  double t2420;
  double t2421;
  double t2436;
  double t2440;
  double t2422;
  double t2437;
  double t2438;
  double t2396;
  double t2441;
  double t2445;
  double t2446;
  double t2516;
  double t2525;
  double t2527;
  double t2528;
  double t2529;
  double t2547;
  double t2548;
  double t2549;
  double t2439;
  double t2475;
  double t2557;
  double t2558;
  double t2559;
  double t2531;
  double t2543;
  double t2544;
  double t2545;
  double t2546;
  double t2550;
  double t2551;
  double t2552;
  double t2553;
  double t2560;
  double t2561;
  double t2562;
  double t2563;
  double t2564;
  double t2565;
  t2435 = Cos(var1[3]);
  t2420 = Cos(var1[4]);
  t2421 = Sin(var1[3]);
  t2436 = Sin(var1[4]);
  t2440 = Cos(var1[2]);
  t2422 = -1.*t2420*t2421;
  t2437 = -1.*t2435*t2436;
  t2438 = t2422 + t2437;
  t2396 = Sin(var1[2]);
  t2441 = t2435*t2420;
  t2445 = -1.*t2421*t2436;
  t2446 = t2441 + t2445;
  t2516 = -1.*t2420;
  t2525 = 1. + t2516;
  t2527 = 0.4*t2525;
  t2528 = 0.64*t2420;
  t2529 = t2527 + t2528;
  t2547 = t2435*t2529;
  t2548 = -0.24*t2421*t2436;
  t2549 = t2547 + t2548;
  t2439 = -1.*t2396*t2438;
  t2475 = t2440*t2438;
  t2557 = -1.*t2435*t2420;
  t2558 = t2421*t2436;
  t2559 = t2557 + t2558;
  t2531 = -0.24*t2435*t2436;
  t2543 = t2529*t2421;
  t2544 = 0.24*t2435*t2436;
  t2545 = t2543 + t2544;
  t2546 = t2545*t2446;
  t2550 = t2438*t2549;
  t2551 = t2420*t2421;
  t2552 = t2435*t2436;
  t2553 = t2551 + t2552;
  t2560 = t2440*t2559;
  t2561 = t2439 + t2560;
  t2562 = 0.384*var2[1]*t2561;
  t2563 = t2396*t2559;
  t2564 = t2475 + t2563;
  t2565 = 0.384*var2[0]*t2564;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(-1.*t2396*t2446 + t2475)*var2[0] + 0.384*(t2439 - 1.*t2440*t2446)*var2[1])*var2[4];
  p_output1[3]=(t2562 + t2565 + 0.384*(t2446*(-1.*t2421*t2529 + t2531) + t2546 + t2550 + t2549*t2553)*var2[2])*var2[4];
  p_output1[4]=(t2562 + t2565 + 0.384*(t2446*(-0.24*t2420*t2421 + t2531) + t2546 + t2550 + (0.24*t2420*t2435 + t2548)*t2553)*var2[2] + 0.384*(0.24*t2420*t2436 - 1.*t2436*t2529)*var2[3])*var2[4];
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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

#include "Ce3_vec5_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
