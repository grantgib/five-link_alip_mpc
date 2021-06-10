/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 16:39:01 GMT-05:00
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
  double t2250;
  double t2246;
  double t2248;
  double t2252;
  double t2263;
  double t2242;
  double t2269;
  double t2270;
  double t2271;
  double t2249;
  double t2258;
  double t2259;
  double t2262;
  double t2272;
  double t2278;
  double t2283;
  double t2287;
  double t2288;
  double t2290;
  double t2293;
  double t2294;
  double t2320;
  double t2322;
  double t2323;
  double t2324;
  double t2325;
  double t2327;
  double t2328;
  double t2330;
  double t2332;
  double t2335;
  double t2336;
  double t2302;
  double t2303;
  double t2305;
  double t2313;
  double t2314;
  double t2316;
  double t2317;
  double t2319;
  double t2331;
  double t2337;
  double t2339;
  double t2342;
  double t2343;
  double t2344;
  double t2356;
  double t2358;
  double t2359;
  double t2347;
  double t2352;
  double t2353;
  double t2354;
  double t2341;
  double t2345;
  double t2346;
  double t2369;
  double t2370;
  double t2372;
  double t2355;
  double t2360;
  double t2361;
  double t2373;
  double t2374;
  double t2377;
  double t2384;
  double t2385;
  double t2386;
  double t2362;
  double t2378;
  double t2387;
  double t2388;
  double t2394;
  double t2395;
  t2250 = Cos(var1[3]);
  t2246 = Cos(var1[4]);
  t2248 = Sin(var1[3]);
  t2252 = Sin(var1[4]);
  t2263 = Cos(var1[2]);
  t2242 = Sin(var1[2]);
  t2269 = t2250*t2246;
  t2270 = -1.*t2248*t2252;
  t2271 = t2269 + t2270;
  t2249 = -1.*t2246*t2248;
  t2258 = -1.*t2250*t2252;
  t2259 = t2249 + t2258;
  t2262 = t2242*t2259;
  t2272 = t2263*t2271;
  t2278 = t2262 + t2272;
  t2283 = t2246*t2248;
  t2287 = t2250*t2252;
  t2288 = t2283 + t2287;
  t2290 = t2263*t2288;
  t2293 = t2242*t2271;
  t2294 = t2290 + t2293;
  t2320 = -1.*t2246;
  t2322 = 1. + t2320;
  t2323 = 0.4*t2322;
  t2324 = 0.64*t2246;
  t2325 = t2323 + t2324;
  t2327 = t2325*t2248;
  t2328 = 0.24*t2250*t2252;
  t2330 = t2327 + t2328;
  t2332 = t2250*t2325;
  t2335 = -0.24*t2248*t2252;
  t2336 = t2332 + t2335;
  t2302 = t2263*t2259;
  t2303 = -1.*t2242*t2271;
  t2305 = t2302 + t2303;
  t2313 = 3.2*t2278*t2305;
  t2314 = -1.*t2242*t2288;
  t2316 = t2314 + t2272;
  t2317 = 3.2*t2316*t2294;
  t2319 = t2313 + t2317;
  t2331 = -1.*t2330*t2271;
  t2337 = -1.*t2259*t2336;
  t2339 = t2331 + t2337;
  t2342 = t2330*t2288;
  t2343 = t2271*t2336;
  t2344 = t2342 + t2343;
  t2356 = t2325*t2252;
  t2358 = -0.24*t2246*t2252;
  t2359 = t2356 + t2358;
  t2347 = t2325*t2246;
  t2352 = Power(t2252,2);
  t2353 = 0.24*t2352;
  t2354 = t2347 + t2353;
  t2341 = 3.2*t2294*t2339;
  t2345 = 3.2*t2278*t2344;
  t2346 = t2341 + t2345;
  t2369 = 3.2*t2316*t2339;
  t2370 = 3.2*t2305*t2344;
  t2372 = t2369 + t2370;
  t2355 = 3.2*t2354*t2278;
  t2360 = 3.2*t2359*t2294;
  t2361 = t2355 + t2360;
  t2373 = 3.2*t2359*t2316;
  t2374 = 3.2*t2354*t2305;
  t2377 = t2373 + t2374;
  t2384 = 3.2*t2359*t2339;
  t2385 = 3.2*t2354*t2344;
  t2386 = 0.2 + t2384 + t2385;
  t2362 = 0.768*t2278;
  t2378 = 0.768*t2305;
  t2387 = 0.768*t2344;
  t2388 = 0.2 + t2387;
  t2394 = 0.768*t2354;
  t2395 = 0.2 + t2394;
  p_output1[0]=3.2*Power(t2278,2) + 3.2*Power(t2294,2);
  p_output1[1]=t2319;
  p_output1[2]=t2346;
  p_output1[3]=t2361;
  p_output1[4]=t2362;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=t2319;
  p_output1[8]=3.2*Power(t2305,2) + 3.2*Power(t2316,2);
  p_output1[9]=t2372;
  p_output1[10]=t2377;
  p_output1[11]=t2378;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=t2346;
  p_output1[15]=t2372;
  p_output1[16]=0.2 + 3.2*Power(t2339,2) + 3.2*Power(t2344,2);
  p_output1[17]=t2386;
  p_output1[18]=t2388;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=t2361;
  p_output1[22]=t2377;
  p_output1[23]=t2386;
  p_output1[24]=0.2 + 3.2*Power(t2354,2) + 3.2*Power(t2359,2);
  p_output1[25]=t2395;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t2362;
  p_output1[29]=t2378;
  p_output1[30]=t2388;
  p_output1[31]=t2395;
  p_output1[32]=0.38432;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
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

#include "Mmat4_five_link_walker.hh"

namespace SymFunction
{

void Mmat4_five_link_walker_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
