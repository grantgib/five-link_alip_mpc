/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:02:56 GMT-05:00
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
  double t258;
  double t244;
  double t249;
  double t259;
  double t267;
  double t236;
  double t271;
  double t274;
  double t275;
  double t279;
  double t280;
  double t281;
  double t286;
  double t287;
  double t255;
  double t262;
  double t263;
  double t266;
  double t276;
  double t277;
  double t295;
  double t291;
  double t292;
  double t293;
  double t294;
  double t298;
  double t309;
  double t310;
  double t314;
  double t317;
  double t318;
  double t342;
  double t343;
  double t344;
  double t348;
  double t350;
  double t352;
  double t288;
  double t289;
  double t290;
  double t300;
  double t301;
  double t302;
  double t303;
  double t369;
  double t370;
  double t371;
  double t372;
  double t373;
  double t322;
  double t345;
  double t353;
  double t354;
  double t356;
  double t357;
  double t358;
  double t398;
  double t399;
  double t400;
  double t374;
  double t375;
  double t377;
  double t381;
  double t383;
  double t384;
  double t385;
  double t388;
  double t389;
  double t391;
  double t392;
  double t393;
  double t394;
  double t395;
  double t396;
  double t397;
  double t402;
  double t403;
  double t407;
  double t434;
  double t435;
  double t409;
  double t438;
  double t439;
  double t412;
  double t324;
  double t325;
  double t335;
  double t336;
  double t327;
  double t329;
  double t330;
  double t332;
  double t333;
  double t337;
  double t340;
  double t401;
  double t404;
  double t405;
  double t408;
  double t410;
  double t413;
  double t484;
  double t424;
  double t425;
  double t427;
  double t485;
  double t418;
  double t419;
  double t421;
  double t486;
  double t489;
  double t490;
  double t491;
  double t492;
  double t493;
  double t494;
  double t436;
  double t440;
  double t441;
  double t496;
  double t444;
  double t445;
  double t447;
  double t457;
  double t458;
  double t459;
  double t478;
  double t480;
  double t481;
  double t355;
  double t363;
  double t364;
  double t495;
  double t497;
  double t498;
  double t406;
  double t414;
  double t415;
  double t505;
  double t506;
  double t507;
  double t443;
  double t448;
  double t449;
  double t460;
  double t461;
  double t462;
  double t513;
  double t514;
  double t515;
  double t299;
  double t305;
  double t306;
  double t469;
  double t470;
  double t471;
  double t487;
  double t378;
  double t524;
  double t525;
  double t526;
  double t501;
  double t502;
  double t503;
  double t422;
  double t428;
  double t429;
  double t536;
  double t537;
  double t538;
  double t539;
  double t540;
  double t463;
  double t464;
  double t466;
  double t516;
  double t517;
  double t518;
  double t554;
  double t555;
  double t556;
  double t586;
  double t587;
  double t467;
  double t519;
  double t557;
  double t558;
  double t580;
  double t581;
  t258 = Cos(var1[5]);
  t244 = Cos(var1[6]);
  t249 = Sin(var1[5]);
  t259 = Sin(var1[6]);
  t267 = Sin(var1[2]);
  t236 = Cos(var1[2]);
  t271 = t258*t244;
  t274 = -1.*t249*t259;
  t275 = t271 + t274;
  t279 = -1.*t244;
  t280 = 1. + t279;
  t281 = 0.4*t280;
  t286 = 0.64*t244;
  t287 = t281 + t286;
  t255 = -1.*t244*t249;
  t262 = -1.*t258*t259;
  t263 = t255 + t262;
  t266 = t236*t263;
  t276 = -1.*t267*t275;
  t277 = t266 + t276;
  t295 = t236*t275;
  t291 = t244*t249;
  t292 = t258*t259;
  t293 = t291 + t292;
  t294 = -1.*t267*t293;
  t298 = t294 + t295;
  t309 = t267*t263;
  t310 = t309 + t295;
  t314 = t236*t293;
  t317 = t267*t275;
  t318 = t314 + t317;
  t342 = t287*t249;
  t343 = 0.24*t258*t259;
  t344 = t342 + t343;
  t348 = t258*t287;
  t350 = -0.24*t249*t259;
  t352 = t348 + t350;
  t288 = t287*t259;
  t289 = -0.24*t244*t259;
  t290 = t288 + t289;
  t300 = t287*t244;
  t301 = Power(t259,2);
  t302 = 0.24*t301;
  t303 = t300 + t302;
  t369 = -1.*t258*t244;
  t370 = t249*t259;
  t371 = t369 + t370;
  t372 = t267*t371;
  t373 = t266 + t372;
  t322 = -1.*t267*t263;
  t345 = -1.*t344*t275;
  t353 = -1.*t263*t352;
  t354 = t345 + t353;
  t356 = t344*t293;
  t357 = t275*t352;
  t358 = t356 + t357;
  t398 = -1.*t287*t249;
  t399 = -0.24*t258*t259;
  t400 = t398 + t399;
  t374 = -0.768*var2[6]*t373;
  t375 = 3.2*t290*t310;
  t377 = 3.2*t303*t373;
  t381 = 6.4*t310*t318;
  t383 = 6.4*t310*t373;
  t384 = t381 + t383;
  t385 = -1.*var2[0]*t384;
  t388 = 3.2*t310*t298;
  t389 = 3.2*t277*t318;
  t391 = t236*t371;
  t392 = t322 + t391;
  t393 = 3.2*t310*t392;
  t394 = 3.2*t277*t373;
  t395 = t388 + t389 + t393 + t394;
  t396 = -1.*var2[1]*t395;
  t397 = 3.2*t310*t354;
  t402 = t344*t275;
  t403 = t263*t352;
  t407 = 3.2*t358*t373;
  t434 = -0.24*t244*t249;
  t435 = t434 + t399;
  t409 = -1.*t263*t344;
  t438 = 0.24*t258*t244;
  t439 = t438 + t350;
  t412 = -1.*t352*t371;
  t324 = -1.*t236*t275;
  t325 = t322 + t324;
  t335 = -1.*t236*t293;
  t336 = t335 + t276;
  t327 = 3.2*t325*t310;
  t329 = Power(t298,2);
  t330 = 3.2*t329;
  t332 = Power(t277,2);
  t333 = 3.2*t332;
  t337 = 3.2*t336*t318;
  t340 = t327 + t330 + t333 + t337;
  t401 = t400*t275;
  t404 = t293*t352;
  t405 = t401 + t402 + t403 + t404;
  t408 = -1.*t263*t400;
  t410 = -1.*t275*t352;
  t413 = t408 + t409 + t410 + t412;
  t484 = -0.768*var2[6]*t392;
  t424 = Power(t244,2);
  t425 = -0.24*t424;
  t427 = 0. + t300 + t425;
  t485 = 3.2*t290*t277;
  t418 = -1.*t287*t259;
  t419 = 0.24*t244*t259;
  t421 = t418 + t419;
  t486 = 3.2*t303*t392;
  t489 = 6.4*t298*t277;
  t490 = 6.4*t277*t392;
  t491 = t489 + t490;
  t492 = -1.*var2[1]*t491;
  t493 = -1.*var2[0]*t395;
  t494 = 3.2*t277*t354;
  t436 = t435*t275;
  t440 = t293*t439;
  t441 = t436 + t402 + t403 + t440;
  t496 = 3.2*t358*t392;
  t444 = -1.*t263*t435;
  t445 = -1.*t275*t439;
  t447 = t444 + t409 + t445 + t412;
  t457 = -3.2*t310*t277;
  t458 = -3.2*t298*t318;
  t459 = t457 + t458;
  t478 = 3.2*t336*t354;
  t480 = 3.2*t325*t358;
  t481 = t478 + t480;
  t355 = 3.2*t298*t354;
  t363 = 3.2*t277*t358;
  t364 = t355 + t363;
  t495 = 3.2*t277*t405;
  t497 = 3.2*t298*t413;
  t498 = t494 + t495 + t496 + t497;
  t406 = 3.2*t310*t405;
  t414 = 3.2*t318*t413;
  t415 = t397 + t406 + t407 + t414;
  t505 = 3.2*t277*t441;
  t506 = 3.2*t298*t447;
  t507 = t494 + t505 + t496 + t506;
  t443 = 3.2*t310*t441;
  t448 = 3.2*t318*t447;
  t449 = t397 + t443 + t407 + t448;
  t460 = -3.2*t318*t354;
  t461 = -3.2*t310*t358;
  t462 = t460 + t461;
  t513 = -3.2*t298*t354;
  t514 = -3.2*t277*t358;
  t515 = t513 + t514;
  t299 = 3.2*t290*t298;
  t305 = 3.2*t303*t277;
  t306 = t299 + t305;
  t469 = 3.2*t303*t325;
  t470 = 3.2*t290*t336;
  t471 = t469 + t470;
  t487 = t485 + t486;
  t378 = t375 + t377;
  t524 = 3.2*t303*t405;
  t525 = 3.2*t290*t413;
  t526 = t524 + t525;
  t501 = 3.2*t427*t298;
  t502 = 3.2*t421*t277;
  t503 = t501 + t485 + t502 + t486;
  t422 = 3.2*t421*t310;
  t428 = 3.2*t427*t318;
  t429 = t375 + t422 + t428 + t377;
  t536 = 3.2*t427*t354;
  t537 = 3.2*t421*t358;
  t538 = 3.2*t303*t441;
  t539 = 3.2*t290*t447;
  t540 = t536 + t537 + t538 + t539;
  t463 = -3.2*t303*t310;
  t464 = -3.2*t290*t318;
  t466 = t463 + t464;
  t516 = -3.2*t290*t298;
  t517 = -3.2*t303*t277;
  t518 = t516 + t517;
  t554 = -3.2*t290*t354;
  t555 = -3.2*t303*t358;
  t556 = -0.2 + t554 + t555;
  t586 = -0.768*var2[1]*t392;
  t587 = -0.768*var2[0]*t373;
  t467 = -0.768*t310;
  t519 = -0.768*t277;
  t557 = -0.768*t358;
  t558 = -0.2 + t557;
  t580 = -0.768*t303;
  t581 = -0.2 + t580;
  p_output1[0]=-1.*(6.4*t277*t310 + 6.4*t298*t318)*var2[0] - 1.*t340*var2[1] - 1.*t364*var2[2] - 1.*t306*var2[5] - 0.768*t277*var2[6];
  p_output1[1]=t374 + t385 + t396 - 1.*t415*var2[2] - 1.*t378*var2[5];
  p_output1[2]=t374 + t385 + t396 - 1.*t449*var2[2] - 1.*t429*var2[5];
  p_output1[3]=-3.2*Power(t310,2) - 3.2*Power(t318,2);
  p_output1[4]=t459;
  p_output1[5]=t462;
  p_output1[6]=t466;
  p_output1[7]=t467;
  p_output1[8]=-1.*t340*var2[0] - 1.*(6.4*t277*t325 + 6.4*t298*t336)*var2[1] - 1.*t481*var2[2] - 1.*t471*var2[5] - 0.768*t325*var2[6];
  p_output1[9]=t484 + t492 + t493 - 1.*t498*var2[2] - 1.*t487*var2[5];
  p_output1[10]=t484 + t492 + t493 - 1.*t507*var2[2] - 1.*t503*var2[5];
  p_output1[11]=t459;
  p_output1[12]=-3.2*t329 - 3.2*t332;
  p_output1[13]=t515;
  p_output1[14]=t518;
  p_output1[15]=t519;
  p_output1[16]=-1.*t364*var2[0] - 1.*t481*var2[1];
  p_output1[17]=-1.*t415*var2[0] - 1.*t498*var2[1] - 1.*(6.4*t358*t405 + 6.4*t354*t413)*var2[2] - 1.*t526*var2[5] - 0.768*t405*var2[6];
  p_output1[18]=-1.*t449*var2[0] - 1.*t507*var2[1] - 1.*(6.4*t358*t441 + 6.4*t354*t447)*var2[2] - 1.*t540*var2[5] - 0.768*t441*var2[6];
  p_output1[19]=t462;
  p_output1[20]=t515;
  p_output1[21]=-0.2 - 3.2*Power(t354,2) - 3.2*Power(t358,2);
  p_output1[22]=t556;
  p_output1[23]=t558;
  p_output1[24]=-1.*t306*var2[0] - 1.*t471*var2[1];
  p_output1[25]=-1.*t378*var2[0] - 1.*t487*var2[1] - 1.*t526*var2[2];
  p_output1[26]=-1.*t429*var2[0] - 1.*t503*var2[1] - 1.*t540*var2[2] - 1.*(6.4*t303*t421 + 6.4*t290*t427)*var2[5] - 0.768*t421*var2[6];
  p_output1[27]=t466;
  p_output1[28]=t518;
  p_output1[29]=t556;
  p_output1[30]=-0.2 - 3.2*Power(t290,2) - 3.2*Power(t303,2);
  p_output1[31]=t581;
  p_output1[32]=-0.768*t277*var2[0] - 0.768*t325*var2[1];
  p_output1[33]=t586 + t587 - 0.768*t405*var2[2];
  p_output1[34]=t586 + t587 - 0.768*t441*var2[2] - 0.768*t421*var2[5];
  p_output1[35]=t467;
  p_output1[36]=t519;
  p_output1[37]=t558;
  p_output1[38]=t581;
  p_output1[39]=-0.38432;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx5_five_link_walker.hh"

namespace RightStance
{

void J_MmatDx5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
