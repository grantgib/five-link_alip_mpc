/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 21:08:19 GMT-04:00
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
  double t2084;
  double t1992;
  double t2057;
  double t2092;
  double t2121;
  double t1991;
  double t2058;
  double t2096;
  double t2097;
  double t2116;
  double t2129;
  double t2130;
  double t2134;
  double t2135;
  double t2145;
  double t2178;
  double t2179;
  double t2184;
  double t2190;
  double t2196;
  double t2257;
  double t2251;
  double t2255;
  double t2258;
  double t2256;
  double t2259;
  double t2260;
  double t2261;
  double t2262;
  double t2263;
  double t2283;
  double t2284;
  double t2285;
  double t2291;
  double t2295;
  double t2296;
  double t2297;
  double t2298;
  double t2161;
  double t2162;
  double t2168;
  double t2218;
  double t2219;
  double t2234;
  double t2235;
  double t2242;
  double t2243;
  double t2287;
  double t2288;
  double t2289;
  double t2312;
  double t2313;
  double t2314;
  double t2315;
  double t2316;
  double t2317;
  double t2341;
  double t2345;
  double t2347;
  double t2363;
  double t2364;
  double t2365;
  double t2414;
  double t2415;
  double t2416;
  double t2418;
  double t2419;
  double t2420;
  double t2438;
  double t2439;
  double t2440;
  double t2442;
  double t2443;
  double t2444;
  double t2350;
  double t2353;
  double t2354;
  double t2321;
  double t2322;
  double t2323;
  double t2212;
  double t2214;
  double t2216;
  double t2356;
  double t2357;
  double t2197;
  double t2203;
  double t2204;
  double t2208;
  double t2367;
  double t2368;
  double t2369;
  double t2359;
  double t2360;
  double t2361;
  double t2309;
  double t2310;
  double t2311;
  double t2371;
  double t2374;
  double t2299;
  double t2300;
  double t2301;
  double t2302;
  double t2380;
  double t2381;
  double t2382;
  double t2384;
  double t2387;
  double t2388;
  double t2395;
  double t2396;
  double t2338;
  double t2349;
  double t2355;
  double t2358;
  double t2362;
  double t2366;
  double t2370;
  double t2375;
  double t2376;
  double t2405;
  double t2407;
  double t2408;
  double t2411;
  double t2412;
  double t2417;
  double t2421;
  double t2422;
  double t2424;
  double t2425;
  double t2426;
  double t2428;
  double t2429;
  double t2432;
  double t2433;
  double t2434;
  double t2441;
  double t2445;
  double t2446;
  double t2448;
  double t2449;
  double t2450;
  double t2403;
  double t2413;
  double t2423;
  double t2427;
  double t2435;
  double t2447;
  double t2451;
  double t2452;
  double t2482;
  double t2483;
  double t2484;
  double t2485;
  double t2486;
  double t2487;
  double t2488;
  double t2489;
  double t2456;
  double t2457;
  double t2458;
  double t2459;
  double t2169;
  double t2210;
  double t2248;
  double t2249;
  double t2495;
  double t2496;
  double t2497;
  double t2498;
  double t2525;
  double t2526;
  double t2492;
  double t2493;
  double t2462;
  double t2463;
  double t2464;
  double t2465;
  double t2290;
  double t2303;
  double t2318;
  double t2319;
  double t2503;
  double t2504;
  double t2505;
  double t2506;
  double t2544;
  double t2545;
  double t2500;
  double t2501;
  t2084 = Cos(var1[3]);
  t1992 = Cos(var1[4]);
  t2057 = Sin(var1[3]);
  t2092 = Sin(var1[4]);
  t2121 = Cos(var1[2]);
  t1991 = Sin(var1[2]);
  t2058 = -1.*t1992*t2057;
  t2096 = -1.*t2084*t2092;
  t2097 = t2058 + t2096;
  t2116 = t1991*t2097;
  t2129 = t2084*t1992;
  t2130 = -1.*t2057*t2092;
  t2134 = t2129 + t2130;
  t2135 = t2121*t2134;
  t2145 = t2116 + t2135;
  t2178 = -1.*t1992;
  t2179 = 1. + t2178;
  t2184 = 0.4*t2179;
  t2190 = 0.64*t1992;
  t2196 = t2184 + t2190;
  t2257 = Cos(var1[5]);
  t2251 = Cos(var1[6]);
  t2255 = Sin(var1[5]);
  t2258 = Sin(var1[6]);
  t2256 = -1.*t2251*t2255;
  t2259 = -1.*t2257*t2258;
  t2260 = t2256 + t2259;
  t2261 = t1991*t2260;
  t2262 = t2257*t2251;
  t2263 = -1.*t2255*t2258;
  t2283 = t2262 + t2263;
  t2284 = t2121*t2283;
  t2285 = t2261 + t2284;
  t2291 = -1.*t2251;
  t2295 = 1. + t2291;
  t2296 = 0.4*t2295;
  t2297 = 0.64*t2251;
  t2298 = t2296 + t2297;
  t2161 = t2121*t2084;
  t2162 = -1.*t1991*t2057;
  t2168 = t2161 + t2162;
  t2218 = t1992*t2057;
  t2219 = t2084*t2092;
  t2234 = t2218 + t2219;
  t2235 = t2121*t2234;
  t2242 = t1991*t2134;
  t2243 = t2235 + t2242;
  t2287 = t2121*t2257;
  t2288 = -1.*t1991*t2255;
  t2289 = t2287 + t2288;
  t2312 = t2251*t2255;
  t2313 = t2257*t2258;
  t2314 = t2312 + t2313;
  t2315 = t2121*t2314;
  t2316 = t1991*t2283;
  t2317 = t2315 + t2316;
  t2341 = t2084*t1991;
  t2345 = t2121*t2057;
  t2347 = t2341 + t2345;
  t2363 = t2257*t1991;
  t2364 = t2121*t2255;
  t2365 = t2363 + t2364;
  t2414 = t2196*t2057;
  t2415 = 0.24*t2084*t2092;
  t2416 = t2414 + t2415;
  t2418 = t2084*t2196;
  t2419 = -0.24*t2057*t2092;
  t2420 = t2418 + t2419;
  t2438 = t2298*t2255;
  t2439 = 0.24*t2257*t2258;
  t2440 = t2438 + t2439;
  t2442 = t2257*t2298;
  t2443 = -0.24*t2255*t2258;
  t2444 = t2442 + t2443;
  t2350 = t2121*t2097;
  t2353 = -1.*t1991*t2134;
  t2354 = t2350 + t2353;
  t2321 = -1.*t2084*t1991;
  t2322 = -1.*t2121*t2057;
  t2323 = t2321 + t2322;
  t2212 = t2196*t2092;
  t2214 = -0.24*t1992*t2092;
  t2216 = t2212 + t2214;
  t2356 = -1.*t1991*t2234;
  t2357 = t2356 + t2135;
  t2197 = t2196*t1992;
  t2203 = Power(t2092,2);
  t2204 = 0.24*t2203;
  t2208 = t2197 + t2204;
  t2367 = t2121*t2260;
  t2368 = -1.*t1991*t2283;
  t2369 = t2367 + t2368;
  t2359 = -1.*t2257*t1991;
  t2360 = -1.*t2121*t2255;
  t2361 = t2359 + t2360;
  t2309 = t2298*t2258;
  t2310 = -0.24*t2251*t2258;
  t2311 = t2309 + t2310;
  t2371 = -1.*t1991*t2314;
  t2374 = t2371 + t2284;
  t2299 = t2298*t2251;
  t2300 = Power(t2258,2);
  t2301 = 0.24*t2300;
  t2302 = t2299 + t2301;
  t2380 = Power(t2121,2);
  t2381 = -12.*t2380;
  t2382 = Power(t1991,2);
  t2384 = -12.*t2382;
  t2387 = Power(t2168,2);
  t2388 = -6.8*t2387;
  t2395 = Power(t2289,2);
  t2396 = -6.8*t2395;
  t2338 = -6.8*t2323*t2168;
  t2349 = -6.8*t2347*t2168;
  t2355 = -3.2*t2145*t2354;
  t2358 = -3.2*t2357*t2243;
  t2362 = -6.8*t2361*t2289;
  t2366 = -6.8*t2365*t2289;
  t2370 = -3.2*t2285*t2369;
  t2375 = -3.2*t2374*t2317;
  t2376 = t2338 + t2349 + t2355 + t2358 + t2362 + t2366 + t2370 + t2375;
  t2405 = Power(t2084,2);
  t2407 = 0.11*t2405;
  t2408 = Power(t2057,2);
  t2411 = 0.11*t2408;
  t2412 = t2407 + t2411;
  t2417 = -1.*t2416*t2134;
  t2421 = -1.*t2097*t2420;
  t2422 = t2417 + t2421;
  t2424 = t2416*t2234;
  t2425 = t2134*t2420;
  t2426 = t2424 + t2425;
  t2428 = Power(t2257,2);
  t2429 = 0.11*t2428;
  t2432 = Power(t2255,2);
  t2433 = 0.11*t2432;
  t2434 = t2429 + t2433;
  t2441 = -1.*t2440*t2283;
  t2445 = -1.*t2260*t2444;
  t2446 = t2441 + t2445;
  t2448 = t2440*t2314;
  t2449 = t2283*t2444;
  t2450 = t2448 + t2449;
  t2403 = -2.88*t2121;
  t2413 = -6.8*t2168*t2412;
  t2423 = -3.2*t2243*t2422;
  t2427 = -3.2*t2145*t2426;
  t2435 = -6.8*t2289*t2434;
  t2447 = -3.2*t2317*t2446;
  t2451 = -3.2*t2285*t2450;
  t2452 = t2403 + t2413 + t2423 + t2427 + t2435 + t2447 + t2451;
  t2482 = 2.88*t1991;
  t2483 = -6.8*t2323*t2412;
  t2484 = -3.2*t2357*t2422;
  t2485 = -3.2*t2354*t2426;
  t2486 = -6.8*t2361*t2434;
  t2487 = -3.2*t2374*t2446;
  t2488 = -3.2*t2369*t2450;
  t2489 = t2482 + t2483 + t2484 + t2485 + t2486 + t2487 + t2488;
  t2456 = -0.748*t2323;
  t2457 = -3.2*t2216*t2357;
  t2458 = -3.2*t2208*t2354;
  t2459 = t2456 + t2457 + t2458;
  t2169 = -0.748*t2168;
  t2210 = -3.2*t2208*t2145;
  t2248 = -3.2*t2216*t2243;
  t2249 = t2169 + t2210 + t2248;
  t2495 = -0.748*t2412;
  t2496 = -3.2*t2216*t2422;
  t2497 = -3.2*t2208*t2426;
  t2498 = -0.67 + t2495 + t2496 + t2497;
  t2525 = -0.768*t2208;
  t2526 = -0.2 + t2525;
  t2492 = -0.768*t2426;
  t2493 = -0.2 + t2492;
  t2462 = -0.748*t2361;
  t2463 = -3.2*t2311*t2374;
  t2464 = -3.2*t2302*t2369;
  t2465 = t2462 + t2463 + t2464;
  t2290 = -0.748*t2289;
  t2303 = -3.2*t2302*t2285;
  t2318 = -3.2*t2311*t2317;
  t2319 = t2290 + t2303 + t2318;
  t2503 = -0.748*t2434;
  t2504 = -3.2*t2311*t2446;
  t2505 = -3.2*t2302*t2450;
  t2506 = -0.67 + t2503 + t2504 + t2505;
  t2544 = -0.768*t2302;
  t2545 = -0.2 + t2544;
  t2500 = -0.768*t2450;
  t2501 = -0.2 + t2500;
  p_output1[0]=(-3.2*Power(t2145,2) - 3.2*Power(t2243,2) - 3.2*Power(t2285,2) - 3.2*Power(t2317,2) - 6.8*Power(t2347,2) - 6.8*Power(t2365,2) + t2381 + t2384 + t2388 + t2396)*var2[0] + t2376*var2[1] + t2452*var2[2] + t2249*var2[3] - 0.768*t2145*var2[4] + t2319*var2[5] - 0.768*t2285*var2[6];
  p_output1[1]=t2376*var2[0] + (-6.8*Power(t2323,2) - 3.2*Power(t2354,2) - 3.2*Power(t2357,2) - 6.8*Power(t2361,2) - 3.2*Power(t2369,2) - 3.2*Power(t2374,2) + t2381 + t2384 + t2388 + t2396)*var2[1] + t2489*var2[2] + t2459*var2[3] - 0.768*t2354*var2[4] + t2465*var2[5] - 0.768*t2369*var2[6];
  p_output1[2]=t2452*var2[0] + t2489*var2[1] + (-3.3612 - 6.8*Power(t2412,2) - 3.2*Power(t2422,2) - 3.2*Power(t2426,2) - 6.8*Power(t2434,2) - 3.2*Power(t2446,2) - 3.2*Power(t2450,2))*var2[2] + t2498*var2[3] + t2493*var2[4] + t2506*var2[5] + t2501*var2[6];
  p_output1[3]=t2249*var2[0] + t2459*var2[1] + t2498*var2[2] + (-1.58228 - 3.2*Power(t2208,2) - 3.2*Power(t2216,2))*var2[3] + t2526*var2[4];
  p_output1[4]=-0.768*t2145*var2[0] - 0.768*t2354*var2[1] + t2493*var2[2] + t2526*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t2319*var2[0] + t2465*var2[1] + t2506*var2[2] + (-1.58228 - 3.2*Power(t2302,2) - 3.2*Power(t2311,2))*var2[5] + t2545*var2[6];
  p_output1[6]=-0.768*t2285*var2[0] - 0.768*t2369*var2[1] + t2501*var2[2] + t2545*var2[5] - 1.2143199999999998*var2[6];
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

#include "MmatDx_five_link_walker.hh"

namespace RightStance
{

void MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
