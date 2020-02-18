/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:39 GMT-05:00
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
  double t1924;
  double t1983;
  double t2043;
  double t2004;
  double t2132;
  double t2149;
  double t2153;
  double t2157;
  double t2169;
  double t2172;
  double t2173;
  double t2177;
  double t2178;
  double t2179;
  double t2220;
  double t2221;
  double t2222;
  double t2180;
  double t2196;
  double t2200;
  double t2133;
  double t2150;
  double t2151;
  double t2223;
  double t2224;
  double t2233;
  double t2260;
  double t2263;
  double t2272;
  double t2274;
  double t2278;
  double t2279;
  double t2280;
  double t2287;
  double t2288;
  double t2289;
  double t2290;
  double t2291;
  double t2296;
  double t2297;
  double t2306;
  double t2292;
  double t2293;
  double t2294;
  double t2273;
  double t2275;
  double t2276;
  double t2307;
  double t2310;
  double t2311;
  double t2075;
  double t2076;
  double t2095;
  double t2107;
  double t2127;
  double t2216;
  double t2234;
  double t2237;
  double t2170;
  double t2254;
  double t2255;
  double t2256;
  double t2266;
  double t2267;
  double t2268;
  double t2269;
  double t2270;
  double t2295;
  double t2318;
  double t2319;
  double t2281;
  double t2331;
  double t2333;
  double t2335;
  double t2370;
  double t2371;
  double t2372;
  double t2373;
  double t2374;
  double t2375;
  double t2376;
  double t2377;
  double t1987;
  double t2060;
  double t2072;
  double t2131;
  double t2348;
  double t2349;
  double t2245;
  double t2390;
  double t2391;
  double t2392;
  double t2344;
  double t2345;
  double t2346;
  double t2387;
  double t2388;
  double t2389;
  double t2393;
  double t2394;
  double t2340;
  double t2341;
  double t2342;
  double t2343;
  double t2406;
  double t2407;
  double t2379;
  double t2380;
  double t2381;
  double t2382;
  double t2425;
  double t2426;
  double t2427;
  double t2428;
  double t2429;
  double t2430;
  double t2431;
  double t2384;
  double t2385;
  double t2386;
  double t2398;
  double t2400;
  double t2401;
  double t2402;
  double t2442;
  double t2443;
  double t2444;
  double t2408;
  double t2410;
  double t2411;
  double t2412;
  double t2413;
  double t2414;
  double t2415;
  double t2462;
  double t2463;
  double t2464;
  double t2465;
  double t2466;
  double t2467;
  double t2468;
  double t2469;
  double t2262;
  double t2264;
  double t2265;
  double t2271;
  double t2363;
  double t2364;
  double t2327;
  double t2482;
  double t2483;
  double t2484;
  double t2357;
  double t2360;
  double t2361;
  double t2479;
  double t2480;
  double t2481;
  double t2485;
  double t2486;
  double t2351;
  double t2352;
  double t2353;
  double t2354;
  double t2498;
  double t2499;
  double t2471;
  double t2472;
  double t2473;
  double t2474;
  double t2517;
  double t2518;
  double t2519;
  double t2520;
  double t2521;
  double t2522;
  double t2523;
  double t2476;
  double t2477;
  double t2478;
  double t2490;
  double t2492;
  double t2493;
  double t2494;
  double t2534;
  double t2535;
  double t2536;
  double t2500;
  double t2502;
  double t2503;
  double t2504;
  double t2505;
  double t2506;
  double t2507;
  t1924 = Cos(var1[2]);
  t1983 = Cos(var1[3]);
  t2043 = Sin(var1[3]);
  t2004 = Sin(var1[2]);
  t2132 = Cos(var1[4]);
  t2149 = Sin(var1[4]);
  t2153 = t1983*t2132;
  t2157 = -1.*t2043*t2149;
  t2169 = t2153 + t2157;
  t2172 = -1.*t2132;
  t2173 = 1. + t2172;
  t2177 = 0.4*t2173;
  t2178 = 0.64*t2132;
  t2179 = t2177 + t2178;
  t2220 = -1.*t2132*t2043;
  t2221 = -1.*t1983*t2149;
  t2222 = t2220 + t2221;
  t2180 = t2179*t2043;
  t2196 = 0.24*t1983*t2149;
  t2200 = t2180 + t2196;
  t2133 = t2132*t2043;
  t2150 = t1983*t2149;
  t2151 = t2133 + t2150;
  t2223 = t1983*t2179;
  t2224 = -0.24*t2043*t2149;
  t2233 = t2223 + t2224;
  t2260 = Cos(var1[5]);
  t2263 = Sin(var1[5]);
  t2272 = Cos(var1[6]);
  t2274 = Sin(var1[6]);
  t2278 = t2260*t2272;
  t2279 = -1.*t2263*t2274;
  t2280 = t2278 + t2279;
  t2287 = -1.*t2272;
  t2288 = 1. + t2287;
  t2289 = 0.4*t2288;
  t2290 = 0.64*t2272;
  t2291 = t2289 + t2290;
  t2296 = -1.*t2272*t2263;
  t2297 = -1.*t2260*t2274;
  t2306 = t2296 + t2297;
  t2292 = t2291*t2263;
  t2293 = 0.24*t2260*t2274;
  t2294 = t2292 + t2293;
  t2273 = t2272*t2263;
  t2275 = t2260*t2274;
  t2276 = t2273 + t2275;
  t2307 = t2260*t2291;
  t2310 = -0.24*t2263*t2274;
  t2311 = t2307 + t2310;
  t2075 = Power(t1983,2);
  t2076 = 0.11*t2075;
  t2095 = Power(t2043,2);
  t2107 = 0.11*t2095;
  t2127 = t2076 + t2107;
  t2216 = -1.*t2200*t2169;
  t2234 = -1.*t2222*t2233;
  t2237 = t2216 + t2234;
  t2170 = -1.*t2004*t2169;
  t2254 = t2200*t2151;
  t2255 = t2169*t2233;
  t2256 = t2254 + t2255;
  t2266 = Power(t2260,2);
  t2267 = 0.11*t2266;
  t2268 = Power(t2263,2);
  t2269 = 0.11*t2268;
  t2270 = t2267 + t2269;
  t2295 = -1.*t2294*t2280;
  t2318 = -1.*t2306*t2311;
  t2319 = t2295 + t2318;
  t2281 = -1.*t2004*t2280;
  t2331 = t2294*t2276;
  t2333 = t2280*t2311;
  t2335 = t2331 + t2333;
  t2370 = -1.*t2179*t2043;
  t2371 = -0.24*t1983*t2149;
  t2372 = t2370 + t2371;
  t2373 = t2372*t2169;
  t2374 = t2200*t2169;
  t2375 = t2222*t2233;
  t2376 = t2151*t2233;
  t2377 = t2373 + t2374 + t2375 + t2376;
  t1987 = -1.*t1924*t1983;
  t2060 = t2004*t2043;
  t2072 = t1987 + t2060;
  t2131 = -6.8*t2072*t2127;
  t2348 = t1924*t2222;
  t2349 = t2348 + t2170;
  t2245 = -1.*t2004*t2222;
  t2390 = -1.*t1983*t2132;
  t2391 = t2043*t2149;
  t2392 = t2390 + t2391;
  t2344 = -1.*t2004*t2151;
  t2345 = t1924*t2169;
  t2346 = t2344 + t2345;
  t2387 = -1.*t2222*t2372;
  t2388 = -1.*t2222*t2200;
  t2389 = -1.*t2169*t2233;
  t2393 = -1.*t2233*t2392;
  t2394 = t2387 + t2388 + t2389 + t2393;
  t2340 = -1.*t1983*t2004;
  t2341 = -1.*t1924*t2043;
  t2342 = t2340 + t2341;
  t2343 = -6.8*t2342*t2127;
  t2406 = t2004*t2222;
  t2407 = t2406 + t2345;
  t2379 = t2179*t2132;
  t2380 = Power(t2149,2);
  t2381 = 0.24*t2380;
  t2382 = t2379 + t2381;
  t2425 = -0.24*t2132*t2043;
  t2426 = t2425 + t2371;
  t2427 = t2426*t2169;
  t2428 = 0.24*t1983*t2132;
  t2429 = t2428 + t2224;
  t2430 = t2151*t2429;
  t2431 = t2427 + t2374 + t2375 + t2430;
  t2384 = t2179*t2149;
  t2385 = -0.24*t2132*t2149;
  t2386 = t2384 + t2385;
  t2398 = -3.2*t2349*t2237;
  t2400 = t1924*t2392;
  t2401 = t2245 + t2400;
  t2402 = -3.2*t2256*t2401;
  t2442 = -1.*t2222*t2426;
  t2443 = -1.*t2169*t2429;
  t2444 = t2442 + t2388 + t2443 + t2393;
  t2408 = -3.2*t2407*t2237;
  t2410 = t2004*t2392;
  t2411 = t2348 + t2410;
  t2412 = -3.2*t2256*t2411;
  t2413 = t1924*t2151;
  t2414 = t2004*t2169;
  t2415 = t2413 + t2414;
  t2462 = -1.*t2291*t2263;
  t2463 = -0.24*t2260*t2274;
  t2464 = t2462 + t2463;
  t2465 = t2464*t2280;
  t2466 = t2294*t2280;
  t2467 = t2306*t2311;
  t2468 = t2276*t2311;
  t2469 = t2465 + t2466 + t2467 + t2468;
  t2262 = -1.*t1924*t2260;
  t2264 = t2004*t2263;
  t2265 = t2262 + t2264;
  t2271 = -6.8*t2265*t2270;
  t2363 = t1924*t2306;
  t2364 = t2363 + t2281;
  t2327 = -1.*t2004*t2306;
  t2482 = -1.*t2260*t2272;
  t2483 = t2263*t2274;
  t2484 = t2482 + t2483;
  t2357 = -1.*t2004*t2276;
  t2360 = t1924*t2280;
  t2361 = t2357 + t2360;
  t2479 = -1.*t2306*t2464;
  t2480 = -1.*t2306*t2294;
  t2481 = -1.*t2280*t2311;
  t2485 = -1.*t2311*t2484;
  t2486 = t2479 + t2480 + t2481 + t2485;
  t2351 = -1.*t2260*t2004;
  t2352 = -1.*t1924*t2263;
  t2353 = t2351 + t2352;
  t2354 = -6.8*t2353*t2270;
  t2498 = t2004*t2306;
  t2499 = t2498 + t2360;
  t2471 = t2291*t2272;
  t2472 = Power(t2274,2);
  t2473 = 0.24*t2472;
  t2474 = t2471 + t2473;
  t2517 = -0.24*t2272*t2263;
  t2518 = t2517 + t2463;
  t2519 = t2518*t2280;
  t2520 = 0.24*t2260*t2272;
  t2521 = t2520 + t2310;
  t2522 = t2276*t2521;
  t2523 = t2519 + t2466 + t2467 + t2522;
  t2476 = t2291*t2274;
  t2477 = -0.24*t2272*t2274;
  t2478 = t2476 + t2477;
  t2490 = -3.2*t2364*t2319;
  t2492 = t1924*t2484;
  t2493 = t2327 + t2492;
  t2494 = -3.2*t2335*t2493;
  t2534 = -1.*t2306*t2518;
  t2535 = -1.*t2280*t2521;
  t2536 = t2534 + t2480 + t2535 + t2485;
  t2500 = -3.2*t2499*t2319;
  t2502 = t2004*t2484;
  t2503 = t2363 + t2502;
  t2504 = -3.2*t2335*t2503;
  t2505 = t1924*t2276;
  t2506 = t2004*t2280;
  t2507 = t2505 + t2506;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(2.88*t2004 + t2343 - 3.2*t2237*t2346 - 3.2*t2256*t2349 + t2354 - 3.2*t2319*t2361 - 3.2*t2335*t2364)*var2[0] - 0.5*(2.88*t1924 + t2131 - 3.2*(-1.*t1924*t2151 + t2170)*t2237 - 3.2*(-1.*t1924*t2169 + t2245)*t2256 + t2271 - 3.2*(-1.*t1924*t2276 + t2281)*t2319 - 3.2*(-1.*t1924*t2280 + t2327)*t2335)*var2[1])*var2[2];
  p_output1[3]=var2[2]*(-0.5*(t2343 - 3.2*t2377*t2407 + t2408 + t2412 - 3.2*t2394*t2415)*var2[0] - 0.5*(t2131 - 3.2*t2349*t2377 - 3.2*t2346*t2394 + t2398 + t2402)*var2[1] - 0.5*(-6.4*t2256*t2377 - 6.4*t2237*t2394)*var2[2] - 0.5*(-3.2*t2377*t2382 - 3.2*t2386*t2394)*var2[3] + 0.384*t2377*var2[4]);
  p_output1[4]=var2[2]*(-0.5*(t2408 + t2412 - 3.2*t2407*t2431 - 3.2*t2415*t2444)*var2[0] - 0.5*(t2398 + t2402 - 3.2*t2349*t2431 - 3.2*t2346*t2444)*var2[1] - 0.5*(-6.4*t2256*t2431 - 6.4*t2237*t2444)*var2[2] - 0.5*(-3.2*(0.24*t2132*t2149 - 1.*t2149*t2179)*t2256 - 3.2*t2237*(-0.24*Power(t2132,2) + t2379) - 3.2*t2382*t2431 - 3.2*t2386*t2444)*var2[3] + 0.384*t2431*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(t2354 - 3.2*t2469*t2499 + t2500 + t2504 - 3.2*t2486*t2507)*var2[0] - 0.5*(t2271 - 3.2*t2364*t2469 - 3.2*t2361*t2486 + t2490 + t2494)*var2[1] - 0.5*(-6.4*t2335*t2469 - 6.4*t2319*t2486)*var2[2] - 0.5*(-3.2*t2469*t2474 - 3.2*t2478*t2486)*var2[5] + 0.384*t2469*var2[6]);
  p_output1[6]=var2[2]*(-0.5*(t2500 + t2504 - 3.2*t2499*t2523 - 3.2*t2507*t2536)*var2[0] - 0.5*(t2490 + t2494 - 3.2*t2364*t2523 - 3.2*t2361*t2536)*var2[1] - 0.5*(-6.4*t2335*t2523 - 6.4*t2319*t2536)*var2[2] - 0.5*(-3.2*(0.24*t2272*t2274 - 1.*t2274*t2291)*t2335 - 3.2*t2319*(-0.24*Power(t2272,2) + t2471) - 3.2*t2474*t2523 - 3.2*t2478*t2536)*var2[5] + 0.384*t2523*var2[6]);
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

#include "Ce3_vec3_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
