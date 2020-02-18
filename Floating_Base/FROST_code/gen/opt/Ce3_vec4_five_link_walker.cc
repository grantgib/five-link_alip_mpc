/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:41 GMT-05:00
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
  double t2284;
  double t2338;
  double t2152;
  double t2246;
  double t1958;
  double t2238;
  double t2324;
  double t2328;
  double t2329;
  double t2336;
  double t2337;
  double t2368;
  double t2369;
  double t2378;
  double t2397;
  double t2399;
  double t2403;
  double t2404;
  double t2405;
  double t2409;
  double t2416;
  double t2339;
  double t2347;
  double t2350;
  double t2362;
  double t2365;
  double t2366;
  double t2418;
  double t2423;
  double t2424;
  double t2432;
  double t2433;
  double t2417;
  double t2419;
  double t2434;
  double t2171;
  double t2251;
  double t2258;
  double t2277;
  double t2383;
  double t2449;
  double t2450;
  double t2451;
  double t2509;
  double t2510;
  double t2511;
  double t2488;
  double t2489;
  double t2491;
  double t2496;
  double t2497;
  double t2501;
  double t2533;
  double t2537;
  double t2538;
  double t2540;
  double t2541;
  double t2542;
  double t2367;
  double t2395;
  double t2448;
  double t2452;
  double t2453;
  double t2454;
  double t2457;
  double t2458;
  double t2459;
  double t2460;
  double t2461;
  double t2470;
  double t2508;
  double t2512;
  double t2566;
  double t2567;
  double t2524;
  double t2569;
  double t2570;
  double t2526;
  t2284 = Cos(var1[4]);
  t2338 = Sin(var1[4]);
  t2152 = Sin(var1[2]);
  t2246 = Sin(var1[3]);
  t1958 = Cos(var1[3]);
  t2238 = Cos(var1[2]);
  t2324 = -1.*t2284;
  t2328 = 1. + t2324;
  t2329 = 0.4*t2328;
  t2336 = 0.64*t2284;
  t2337 = t2329 + t2336;
  t2368 = t1958*t2284;
  t2369 = -1.*t2246*t2338;
  t2378 = t2368 + t2369;
  t2397 = t2337*t2284;
  t2399 = Power(t2338,2);
  t2403 = 0.24*t2399;
  t2404 = t2397 + t2403;
  t2405 = -1.*t2284*t2246;
  t2409 = -1.*t1958*t2338;
  t2416 = t2405 + t2409;
  t2339 = t2337*t2338;
  t2347 = -0.24*t2284*t2338;
  t2350 = t2339 + t2347;
  t2362 = t2284*t2246;
  t2365 = t1958*t2338;
  t2366 = t2362 + t2365;
  t2418 = -1.*t2152*t2378;
  t2423 = -1.*t2238*t1958;
  t2424 = t2152*t2246;
  t2432 = t2423 + t2424;
  t2433 = -0.748*t2432;
  t2417 = t2238*t2416;
  t2419 = t2417 + t2418;
  t2434 = -1.*t2152*t2416;
  t2171 = -1.*t1958*t2152;
  t2251 = -1.*t2238*t2246;
  t2258 = t2171 + t2251;
  t2277 = -0.748*t2258;
  t2383 = t2238*t2378;
  t2449 = -1.*t1958*t2284;
  t2450 = t2246*t2338;
  t2451 = t2449 + t2450;
  t2509 = t1958*t2337;
  t2510 = -0.24*t2246*t2338;
  t2511 = t2509 + t2510;
  t2488 = -1.*t2337*t2246;
  t2489 = -0.24*t1958*t2338;
  t2491 = t2488 + t2489;
  t2496 = t2337*t2246;
  t2497 = 0.24*t1958*t2338;
  t2501 = t2496 + t2497;
  t2533 = -1.*t2337*t2338;
  t2537 = 0.24*t2284*t2338;
  t2538 = t2533 + t2537;
  t2540 = Power(t2284,2);
  t2541 = -0.24*t2540;
  t2542 = t2397 + t2541;
  t2367 = -1.*t2152*t2366;
  t2395 = t2367 + t2383;
  t2448 = -3.2*t2350*t2419;
  t2452 = t2238*t2451;
  t2453 = t2434 + t2452;
  t2454 = -3.2*t2404*t2453;
  t2457 = t2152*t2416;
  t2458 = t2457 + t2383;
  t2459 = -3.2*t2350*t2458;
  t2460 = t2152*t2451;
  t2461 = t2417 + t2460;
  t2470 = -3.2*t2404*t2461;
  t2508 = t2501*t2378;
  t2512 = t2416*t2511;
  t2566 = -0.24*t2284*t2246;
  t2567 = t2566 + t2489;
  t2524 = -1.*t2416*t2501;
  t2569 = 0.24*t1958*t2284;
  t2570 = t2569 + t2510;
  t2526 = -1.*t2511*t2451;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t2277 - 3.2*t2350*t2395 - 3.2*t2404*t2419)*var2[0] - 0.5*(-3.2*t2350*(-1.*t2238*t2366 + t2418) + t2433 - 3.2*t2404*(-1.*t2238*t2378 + t2434))*var2[1])*var2[3];
  p_output1[3]=(-0.5*(t2277 + t2459 + t2470)*var2[0] - 0.5*(t2433 + t2448 + t2454)*var2[1] - 0.5*(-3.2*t2404*(t2378*t2491 + t2508 + t2366*t2511 + t2512) - 3.2*t2350*(-1.*t2416*t2491 - 1.*t2378*t2511 + t2524 + t2526))*var2[2])*var2[3];
  p_output1[4]=var2[3]*(-0.5*(t2459 + t2470 - 3.2*t2458*t2538 - 3.2*(t2238*t2366 + t2152*t2378)*t2542)*var2[0] - 0.5*(t2448 + t2454 - 3.2*t2419*t2538 - 3.2*t2395*t2542)*var2[1] - 0.5*(-3.2*(t2366*t2501 + t2378*t2511)*t2538 - 3.2*(-1.*t2378*t2501 - 1.*t2416*t2511)*t2542 - 3.2*t2404*(t2508 + t2512 + t2378*t2567 + t2366*t2570) - 3.2*t2350*(t2524 + t2526 - 1.*t2416*t2567 - 1.*t2378*t2570))*var2[2] - 0.5*(-6.4*t2404*t2538 - 6.4*t2350*t2542)*var2[3] + 0.384*t2538*var2[4]);
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

#include "Ce3_vec4_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
