/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 16:39:03 GMT-05:00
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
  double t2278;
  double t2263;
  double t2269;
  double t2279;
  double t2290;
  double t2262;
  double t2293;
  double t2294;
  double t2295;
  double t2272;
  double t2281;
  double t2283;
  double t2287;
  double t2300;
  double t2301;
  double t2313;
  double t2316;
  double t2317;
  double t2319;
  double t2323;
  double t2324;
  double t2346;
  double t2347;
  double t2352;
  double t2353;
  double t2354;
  double t2355;
  double t2356;
  double t2358;
  double t2360;
  double t2361;
  double t2362;
  double t2332;
  double t2335;
  double t2339;
  double t2341;
  double t2342;
  double t2343;
  double t2344;
  double t2345;
  double t2359;
  double t2363;
  double t2364;
  double t2366;
  double t2367;
  double t2369;
  double t2380;
  double t2381;
  double t2382;
  double t2373;
  double t2374;
  double t2377;
  double t2378;
  double t2365;
  double t2370;
  double t2372;
  double t2391;
  double t2392;
  double t2393;
  double t2379;
  double t2383;
  double t2384;
  double t2394;
  double t2395;
  double t2396;
  double t2403;
  double t2404;
  double t2405;
  double t2385;
  double t2397;
  double t2406;
  double t2407;
  double t2413;
  double t2414;
  t2278 = Cos(var1[5]);
  t2263 = Cos(var1[6]);
  t2269 = Sin(var1[5]);
  t2279 = Sin(var1[6]);
  t2290 = Cos(var1[2]);
  t2262 = Sin(var1[2]);
  t2293 = t2278*t2263;
  t2294 = -1.*t2269*t2279;
  t2295 = t2293 + t2294;
  t2272 = -1.*t2263*t2269;
  t2281 = -1.*t2278*t2279;
  t2283 = t2272 + t2281;
  t2287 = t2262*t2283;
  t2300 = t2290*t2295;
  t2301 = t2287 + t2300;
  t2313 = t2263*t2269;
  t2316 = t2278*t2279;
  t2317 = t2313 + t2316;
  t2319 = t2290*t2317;
  t2323 = t2262*t2295;
  t2324 = t2319 + t2323;
  t2346 = -1.*t2263;
  t2347 = 1. + t2346;
  t2352 = 0.4*t2347;
  t2353 = 0.64*t2263;
  t2354 = t2352 + t2353;
  t2355 = t2354*t2269;
  t2356 = 0.24*t2278*t2279;
  t2358 = t2355 + t2356;
  t2360 = t2278*t2354;
  t2361 = -0.24*t2269*t2279;
  t2362 = t2360 + t2361;
  t2332 = t2290*t2283;
  t2335 = -1.*t2262*t2295;
  t2339 = t2332 + t2335;
  t2341 = 3.2*t2301*t2339;
  t2342 = -1.*t2262*t2317;
  t2343 = t2342 + t2300;
  t2344 = 3.2*t2343*t2324;
  t2345 = t2341 + t2344;
  t2359 = -1.*t2358*t2295;
  t2363 = -1.*t2283*t2362;
  t2364 = t2359 + t2363;
  t2366 = t2358*t2317;
  t2367 = t2295*t2362;
  t2369 = t2366 + t2367;
  t2380 = t2354*t2279;
  t2381 = -0.24*t2263*t2279;
  t2382 = t2380 + t2381;
  t2373 = t2354*t2263;
  t2374 = Power(t2279,2);
  t2377 = 0.24*t2374;
  t2378 = t2373 + t2377;
  t2365 = 3.2*t2324*t2364;
  t2370 = 3.2*t2301*t2369;
  t2372 = t2365 + t2370;
  t2391 = 3.2*t2343*t2364;
  t2392 = 3.2*t2339*t2369;
  t2393 = t2391 + t2392;
  t2379 = 3.2*t2378*t2301;
  t2383 = 3.2*t2382*t2324;
  t2384 = t2379 + t2383;
  t2394 = 3.2*t2382*t2343;
  t2395 = 3.2*t2378*t2339;
  t2396 = t2394 + t2395;
  t2403 = 3.2*t2382*t2364;
  t2404 = 3.2*t2378*t2369;
  t2405 = 0.2 + t2403 + t2404;
  t2385 = 0.768*t2301;
  t2397 = 0.768*t2339;
  t2406 = 0.768*t2369;
  t2407 = 0.2 + t2406;
  t2413 = 0.768*t2378;
  t2414 = 0.2 + t2413;
  p_output1[0]=3.2*Power(t2301,2) + 3.2*Power(t2324,2);
  p_output1[1]=t2345;
  p_output1[2]=t2372;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t2384;
  p_output1[6]=t2385;
  p_output1[7]=t2345;
  p_output1[8]=3.2*Power(t2339,2) + 3.2*Power(t2343,2);
  p_output1[9]=t2393;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2396;
  p_output1[13]=t2397;
  p_output1[14]=t2372;
  p_output1[15]=t2393;
  p_output1[16]=0.2 + 3.2*Power(t2364,2) + 3.2*Power(t2369,2);
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=t2405;
  p_output1[20]=t2407;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t2384;
  p_output1[36]=t2396;
  p_output1[37]=t2405;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0.2 + 3.2*Power(t2378,2) + 3.2*Power(t2382,2);
  p_output1[41]=t2414;
  p_output1[42]=t2385;
  p_output1[43]=t2397;
  p_output1[44]=t2407;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=t2414;
  p_output1[48]=0.38432;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Mmat5_five_link_walker.hh"

namespace SymFunction
{

void Mmat5_five_link_walker_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
