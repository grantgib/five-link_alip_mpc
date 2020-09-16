/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 21:08:22 GMT-04:00
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
  double t2116;
  double t2135;
  double t2149;
  double t2161;
  double t2196;
  double t2197;
  double t2212;
  double t2219;
  double t2261;
  double t2262;
  double t2284;
  double t2286;
  double t2316;
  double t2320;
  double t2341;
  double t2345;
  double t2350;
  double t2364;
  double t2386;
  double t2389;
  double t2390;
  double t2391;
  double t2218;
  double t2235;
  double t2242;
  double t2250;
  double t2287;
  double t2298;
  double t2299;
  double t2309;
  double t2312;
  double t2313;
  double t2315;
  double t2418;
  double t2424;
  double t2425;
  double t2363;
  double t2367;
  double t2377;
  double t2385;
  double t2392;
  double t2393;
  double t2394;
  double t2397;
  double t2398;
  double t2399;
  double t2400;
  double t2461;
  double t2466;
  double t2467;
  t2116 = Sin(var1[2]);
  t2135 = Cos(var1[3]);
  t2149 = -1.*t2135*t2116;
  t2161 = Cos(var1[2]);
  t2196 = Sin(var1[3]);
  t2197 = -1.*t2161*t2196;
  t2212 = t2149 + t2197;
  t2219 = Cos(var1[4]);
  t2261 = -1.*t2161*t2135;
  t2262 = t2116*t2196;
  t2284 = t2261 + t2262;
  t2286 = Sin(var1[4]);
  t2316 = Cos(var1[5]);
  t2320 = -1.*t2316*t2116;
  t2341 = Sin(var1[5]);
  t2345 = -1.*t2161*t2341;
  t2350 = t2320 + t2345;
  t2364 = Cos(var1[6]);
  t2386 = -1.*t2161*t2316;
  t2389 = t2116*t2341;
  t2390 = t2386 + t2389;
  t2391 = Sin(var1[6]);
  t2218 = -7.33788*t2212;
  t2235 = -1.*t2219;
  t2242 = 1. + t2235;
  t2250 = 0.4*t2242*t2212;
  t2287 = -0.4*t2284*t2286;
  t2298 = t2219*t2212;
  t2299 = t2284*t2286;
  t2309 = t2298 + t2299;
  t2312 = 0.64*t2309;
  t2313 = t2250 + t2287 + t2312;
  t2315 = -31.392000000000003*t2313;
  t2418 = t2161*t2135;
  t2424 = -1.*t2116*t2196;
  t2425 = t2418 + t2424;
  t2363 = -7.33788*t2350;
  t2367 = -1.*t2364;
  t2377 = 1. + t2367;
  t2385 = 0.4*t2377*t2350;
  t2392 = -0.4*t2390*t2391;
  t2393 = t2364*t2350;
  t2394 = t2390*t2391;
  t2397 = t2393 + t2394;
  t2398 = 0.64*t2397;
  t2399 = t2385 + t2392 + t2398;
  t2400 = -31.392000000000003*t2399;
  t2461 = t2161*t2316;
  t2466 = -1.*t2116*t2341;
  t2467 = t2461 + t2466;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=28.252799999999997*t2116 + t2218 + t2315 + t2363 + t2400;
  p_output1[3]=t2218 + t2315;
  p_output1[4]=-31.392000000000003*(-0.4*t2212*t2219 + 0.4*t2286*t2425 + 0.64*(t2298 - 1.*t2286*t2425));
  p_output1[5]=t2363 + t2400;
  p_output1[6]=-31.392000000000003*(-0.4*t2350*t2364 + 0.4*t2391*t2467 + 0.64*(t2393 - 1.*t2391*t2467));
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

#include "Ge_vec_five_link_walker.hh"

namespace RightStance
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
