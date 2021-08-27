/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:02:53 GMT-05:00
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
  double t225;
  double t220;
  double t221;
  double t228;
  double t243;
  double t216;
  double t244;
  double t245;
  double t246;
  double t256;
  double t257;
  double t258;
  double t259;
  double t261;
  double t223;
  double t229;
  double t234;
  double t236;
  double t248;
  double t249;
  double t274;
  double t267;
  double t271;
  double t272;
  double t273;
  double t275;
  double t287;
  double t288;
  double t290;
  double t291;
  double t292;
  double t309;
  double t310;
  double t311;
  double t313;
  double t314;
  double t315;
  double t262;
  double t263;
  double t266;
  double t277;
  double t278;
  double t279;
  double t280;
  double t326;
  double t327;
  double t328;
  double t329;
  double t330;
  double t296;
  double t312;
  double t316;
  double t317;
  double t319;
  double t320;
  double t321;
  double t349;
  double t350;
  double t351;
  double t331;
  double t332;
  double t333;
  double t336;
  double t337;
  double t338;
  double t339;
  double t340;
  double t341;
  double t342;
  double t343;
  double t344;
  double t345;
  double t346;
  double t347;
  double t348;
  double t353;
  double t354;
  double t358;
  double t378;
  double t379;
  double t360;
  double t381;
  double t382;
  double t362;
  double t297;
  double t298;
  double t304;
  double t305;
  double t299;
  double t300;
  double t301;
  double t302;
  double t303;
  double t306;
  double t307;
  double t352;
  double t355;
  double t356;
  double t359;
  double t361;
  double t363;
  double t423;
  double t372;
  double t373;
  double t374;
  double t424;
  double t368;
  double t369;
  double t370;
  double t425;
  double t428;
  double t429;
  double t430;
  double t431;
  double t432;
  double t433;
  double t380;
  double t383;
  double t384;
  double t435;
  double t386;
  double t387;
  double t388;
  double t398;
  double t399;
  double t400;
  double t418;
  double t419;
  double t420;
  double t318;
  double t322;
  double t323;
  double t434;
  double t436;
  double t437;
  double t357;
  double t364;
  double t365;
  double t444;
  double t445;
  double t446;
  double t385;
  double t389;
  double t390;
  double t401;
  double t402;
  double t403;
  double t452;
  double t453;
  double t454;
  double t276;
  double t281;
  double t282;
  double t409;
  double t410;
  double t411;
  double t426;
  double t334;
  double t463;
  double t464;
  double t465;
  double t440;
  double t441;
  double t442;
  double t371;
  double t375;
  double t376;
  double t475;
  double t476;
  double t477;
  double t478;
  double t479;
  double t404;
  double t405;
  double t406;
  double t455;
  double t456;
  double t457;
  double t493;
  double t494;
  double t495;
  double t525;
  double t526;
  double t407;
  double t458;
  double t496;
  double t497;
  double t519;
  double t520;
  t225 = Cos(var1[3]);
  t220 = Cos(var1[4]);
  t221 = Sin(var1[3]);
  t228 = Sin(var1[4]);
  t243 = Sin(var1[2]);
  t216 = Cos(var1[2]);
  t244 = t225*t220;
  t245 = -1.*t221*t228;
  t246 = t244 + t245;
  t256 = -1.*t220;
  t257 = 1. + t256;
  t258 = 0.4*t257;
  t259 = 0.64*t220;
  t261 = t258 + t259;
  t223 = -1.*t220*t221;
  t229 = -1.*t225*t228;
  t234 = t223 + t229;
  t236 = t216*t234;
  t248 = -1.*t243*t246;
  t249 = t236 + t248;
  t274 = t216*t246;
  t267 = t220*t221;
  t271 = t225*t228;
  t272 = t267 + t271;
  t273 = -1.*t243*t272;
  t275 = t273 + t274;
  t287 = t243*t234;
  t288 = t287 + t274;
  t290 = t216*t272;
  t291 = t243*t246;
  t292 = t290 + t291;
  t309 = t261*t221;
  t310 = 0.24*t225*t228;
  t311 = t309 + t310;
  t313 = t225*t261;
  t314 = -0.24*t221*t228;
  t315 = t313 + t314;
  t262 = t261*t228;
  t263 = -0.24*t220*t228;
  t266 = t262 + t263;
  t277 = t261*t220;
  t278 = Power(t228,2);
  t279 = 0.24*t278;
  t280 = t277 + t279;
  t326 = -1.*t225*t220;
  t327 = t221*t228;
  t328 = t326 + t327;
  t329 = t243*t328;
  t330 = t236 + t329;
  t296 = -1.*t243*t234;
  t312 = -1.*t311*t246;
  t316 = -1.*t234*t315;
  t317 = t312 + t316;
  t319 = t311*t272;
  t320 = t246*t315;
  t321 = t319 + t320;
  t349 = -1.*t261*t221;
  t350 = -0.24*t225*t228;
  t351 = t349 + t350;
  t331 = -0.768*var2[4]*t330;
  t332 = 3.2*t266*t288;
  t333 = 3.2*t280*t330;
  t336 = 6.4*t288*t292;
  t337 = 6.4*t288*t330;
  t338 = t336 + t337;
  t339 = -1.*var2[0]*t338;
  t340 = 3.2*t288*t275;
  t341 = 3.2*t249*t292;
  t342 = t216*t328;
  t343 = t296 + t342;
  t344 = 3.2*t288*t343;
  t345 = 3.2*t249*t330;
  t346 = t340 + t341 + t344 + t345;
  t347 = -1.*var2[1]*t346;
  t348 = 3.2*t288*t317;
  t353 = t311*t246;
  t354 = t234*t315;
  t358 = 3.2*t321*t330;
  t378 = -0.24*t220*t221;
  t379 = t378 + t350;
  t360 = -1.*t234*t311;
  t381 = 0.24*t225*t220;
  t382 = t381 + t314;
  t362 = -1.*t315*t328;
  t297 = -1.*t216*t246;
  t298 = t296 + t297;
  t304 = -1.*t216*t272;
  t305 = t304 + t248;
  t299 = 3.2*t298*t288;
  t300 = Power(t275,2);
  t301 = 3.2*t300;
  t302 = Power(t249,2);
  t303 = 3.2*t302;
  t306 = 3.2*t305*t292;
  t307 = t299 + t301 + t303 + t306;
  t352 = t351*t246;
  t355 = t272*t315;
  t356 = t352 + t353 + t354 + t355;
  t359 = -1.*t234*t351;
  t361 = -1.*t246*t315;
  t363 = t359 + t360 + t361 + t362;
  t423 = -0.768*var2[4]*t343;
  t372 = Power(t220,2);
  t373 = -0.24*t372;
  t374 = 0. + t277 + t373;
  t424 = 3.2*t266*t249;
  t368 = -1.*t261*t228;
  t369 = 0.24*t220*t228;
  t370 = t368 + t369;
  t425 = 3.2*t280*t343;
  t428 = 6.4*t275*t249;
  t429 = 6.4*t249*t343;
  t430 = t428 + t429;
  t431 = -1.*var2[1]*t430;
  t432 = -1.*var2[0]*t346;
  t433 = 3.2*t249*t317;
  t380 = t379*t246;
  t383 = t272*t382;
  t384 = t380 + t353 + t354 + t383;
  t435 = 3.2*t321*t343;
  t386 = -1.*t234*t379;
  t387 = -1.*t246*t382;
  t388 = t386 + t360 + t387 + t362;
  t398 = -3.2*t288*t249;
  t399 = -3.2*t275*t292;
  t400 = t398 + t399;
  t418 = 3.2*t305*t317;
  t419 = 3.2*t298*t321;
  t420 = t418 + t419;
  t318 = 3.2*t275*t317;
  t322 = 3.2*t249*t321;
  t323 = t318 + t322;
  t434 = 3.2*t249*t356;
  t436 = 3.2*t275*t363;
  t437 = t433 + t434 + t435 + t436;
  t357 = 3.2*t288*t356;
  t364 = 3.2*t292*t363;
  t365 = t348 + t357 + t358 + t364;
  t444 = 3.2*t249*t384;
  t445 = 3.2*t275*t388;
  t446 = t433 + t444 + t435 + t445;
  t385 = 3.2*t288*t384;
  t389 = 3.2*t292*t388;
  t390 = t348 + t385 + t358 + t389;
  t401 = -3.2*t292*t317;
  t402 = -3.2*t288*t321;
  t403 = t401 + t402;
  t452 = -3.2*t275*t317;
  t453 = -3.2*t249*t321;
  t454 = t452 + t453;
  t276 = 3.2*t266*t275;
  t281 = 3.2*t280*t249;
  t282 = t276 + t281;
  t409 = 3.2*t280*t298;
  t410 = 3.2*t266*t305;
  t411 = t409 + t410;
  t426 = t424 + t425;
  t334 = t332 + t333;
  t463 = 3.2*t280*t356;
  t464 = 3.2*t266*t363;
  t465 = t463 + t464;
  t440 = 3.2*t374*t275;
  t441 = 3.2*t370*t249;
  t442 = t440 + t424 + t441 + t425;
  t371 = 3.2*t370*t288;
  t375 = 3.2*t374*t292;
  t376 = t332 + t371 + t375 + t333;
  t475 = 3.2*t374*t317;
  t476 = 3.2*t370*t321;
  t477 = 3.2*t280*t384;
  t478 = 3.2*t266*t388;
  t479 = t475 + t476 + t477 + t478;
  t404 = -3.2*t280*t288;
  t405 = -3.2*t266*t292;
  t406 = t404 + t405;
  t455 = -3.2*t266*t275;
  t456 = -3.2*t280*t249;
  t457 = t455 + t456;
  t493 = -3.2*t266*t317;
  t494 = -3.2*t280*t321;
  t495 = -0.2 + t493 + t494;
  t525 = -0.768*var2[1]*t343;
  t526 = -0.768*var2[0]*t330;
  t407 = -0.768*t288;
  t458 = -0.768*t249;
  t496 = -0.768*t321;
  t497 = -0.2 + t496;
  t519 = -0.768*t280;
  t520 = -0.2 + t519;
  p_output1[0]=-1.*(6.4*t249*t288 + 6.4*t275*t292)*var2[0] - 1.*t307*var2[1] - 1.*t323*var2[2] - 1.*t282*var2[3] - 0.768*t249*var2[4];
  p_output1[1]=t331 + t339 + t347 - 1.*t365*var2[2] - 1.*t334*var2[3];
  p_output1[2]=t331 + t339 + t347 - 1.*t390*var2[2] - 1.*t376*var2[3];
  p_output1[3]=-3.2*Power(t288,2) - 3.2*Power(t292,2);
  p_output1[4]=t400;
  p_output1[5]=t403;
  p_output1[6]=t406;
  p_output1[7]=t407;
  p_output1[8]=-1.*t307*var2[0] - 1.*(6.4*t249*t298 + 6.4*t275*t305)*var2[1] - 1.*t420*var2[2] - 1.*t411*var2[3] - 0.768*t298*var2[4];
  p_output1[9]=t423 + t431 + t432 - 1.*t437*var2[2] - 1.*t426*var2[3];
  p_output1[10]=t423 + t431 + t432 - 1.*t446*var2[2] - 1.*t442*var2[3];
  p_output1[11]=t400;
  p_output1[12]=-3.2*t300 - 3.2*t302;
  p_output1[13]=t454;
  p_output1[14]=t457;
  p_output1[15]=t458;
  p_output1[16]=-1.*t323*var2[0] - 1.*t420*var2[1];
  p_output1[17]=-1.*t365*var2[0] - 1.*t437*var2[1] - 1.*(6.4*t321*t356 + 6.4*t317*t363)*var2[2] - 1.*t465*var2[3] - 0.768*t356*var2[4];
  p_output1[18]=-1.*t390*var2[0] - 1.*t446*var2[1] - 1.*(6.4*t321*t384 + 6.4*t317*t388)*var2[2] - 1.*t479*var2[3] - 0.768*t384*var2[4];
  p_output1[19]=t403;
  p_output1[20]=t454;
  p_output1[21]=-0.2 - 3.2*Power(t317,2) - 3.2*Power(t321,2);
  p_output1[22]=t495;
  p_output1[23]=t497;
  p_output1[24]=-1.*t282*var2[0] - 1.*t411*var2[1];
  p_output1[25]=-1.*t334*var2[0] - 1.*t426*var2[1] - 1.*t465*var2[2];
  p_output1[26]=-1.*t376*var2[0] - 1.*t442*var2[1] - 1.*t479*var2[2] - 1.*(6.4*t280*t370 + 6.4*t266*t374)*var2[3] - 0.768*t370*var2[4];
  p_output1[27]=t406;
  p_output1[28]=t457;
  p_output1[29]=t495;
  p_output1[30]=-0.2 - 3.2*Power(t266,2) - 3.2*Power(t280,2);
  p_output1[31]=t520;
  p_output1[32]=-0.768*t249*var2[0] - 0.768*t298*var2[1];
  p_output1[33]=t525 + t526 - 0.768*t356*var2[2];
  p_output1[34]=t525 + t526 - 0.768*t384*var2[2] - 0.768*t370*var2[3];
  p_output1[35]=t407;
  p_output1[36]=t458;
  p_output1[37]=t497;
  p_output1[38]=t520;
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

#include "J_MmatDx4_five_link_walker.hh"

namespace RightStance
{

void J_MmatDx4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
