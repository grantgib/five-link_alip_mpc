/*
 * Automatically Generated from Mathematica.
 * Fri 27 Aug 2021 03:42:45 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t169;
  double t151;
  double t159;
  double t170;
  double t143;
  double t160;
  double t174;
  double t180;
  double t183;
  double t185;
  double t189;
  double t191;
  double t195;
  double t230;
  double t231;
  double t232;
  double t207;
  double t212;
  double t213;
  double t216;
  double t229;
  double t235;
  double t236;
  double t240;
  double t241;
  double t244;
  double t245;
  double t247;
  double t262;
  double t263;
  double t264;
  double t265;
  double t266;
  double t274;
  double t276;
  double t277;
  double t278;
  double t280;
  double t282;
  double t298;
  double t300;
  double t301;
  double t289;
  double t290;
  double t292;
  double t294;
  double t296;
  double t302;
  double t304;
  double t305;
  double t306;
  double t307;
  double t308;
  double t310;
  double t182;
  double t193;
  double t201;
  double t202;
  double t203;
  double t204;
  double t205;
  double t250;
  double t251;
  double t252;
  double t321;
  double t323;
  double t324;
  double t325;
  double t326;
  double t327;
  double t329;
  double t336;
  double t337;
  double t338;
  double t331;
  double t332;
  double t334;
  double t340;
  double t341;
  double t342;
  double t343;
  double t344;
  double t345;
  double t346;
  double t364;
  double t365;
  double t366;
  double t367;
  double t368;
  double t369;
  double t370;
  double t375;
  double t377;
  double t378;
  double t401;
  double t403;
  double t411;
  double t419;
  double t420;
  double t421;
  double t422;
  double t423;
  double t424;
  double t439;
  double t447;
  double t448;
  double t449;
  double t450;
  double t451;
  double t452;
  double t356;
  double t357;
  double t256;
  double t257;
  double t268;
  double t269;
  double t272;
  double t467;
  double t360;
  double t361;
  double t362;
  double t462;
  double t405;
  double t406;
  double t407;
  double t371;
  double t373;
  double t374;
  double t379;
  double t380;
  double t382;
  double t383;
  double t384;
  double t385;
  double t386;
  double t409;
  double t410;
  double t412;
  double t413;
  double t414;
  double t415;
  double t416;
  double t425;
  double t426;
  double t427;
  double t275;
  double t281;
  double t283;
  double t284;
  double t286;
  double t287;
  double t288;
  double t311;
  double t312;
  double t313;
  double t316;
  double t317;
  double t318;
  double t388;
  double t389;
  double t390;
  double t432;
  double t434;
  double t435;
  double t437;
  double t438;
  double t440;
  double t441;
  double t442;
  double t445;
  double t446;
  double t453;
  double t454;
  double t455;
  double t476;
  double t498;
  double t506;
  double t531;
  double t408;
  double t431;
  double t475;
  double t477;
  double t478;
  double t479;
  double t480;
  double t481;
  double t482;
  double t483;
  double t485;
  double t486;
  double t487;
  double t488;
  double t489;
  double t490;
  double t492;
  double t493;
  double t494;
  double t495;
  double t496;
  double t497;
  double t499;
  double t501;
  double t502;
  double t503;
  double t539;
  double t540;
  double t556;
  double t557;
  double t558;
  double t559;
  double t560;
  double t561;
  double t562;
  double t563;
  double t564;
  double t570;
  double t571;
  double t572;
  double t573;
  double t574;
  double t575;
  double t576;
  double t577;
  double t578;
  double t436;
  double t456;
  double t504;
  double t507;
  double t508;
  double t509;
  double t510;
  double t511;
  double t512;
  double t513;
  double t514;
  double t515;
  double t520;
  double t521;
  double t522;
  double t523;
  double t524;
  double t525;
  double t526;
  double t527;
  double t529;
  double t530;
  double t532;
  double t533;
  double t534;
  double t536;
  double t541;
  double t543;
  double t600;
  double t601;
  double t602;
  double t603;
  double t604;
  double t605;
  double t606;
  double t607;
  double t608;
  double t618;
  double t619;
  double t620;
  double t621;
  double t622;
  double t623;
  double t624;
  double t625;
  double t626;
  t169 = Cos(var1[2]);
  t151 = Cos(var1[5]);
  t159 = Sin(var1[2]);
  t170 = Sin(var1[5]);
  t143 = Cos(var1[6]);
  t160 = -1.*t151*t159;
  t174 = -1.*t169*t170;
  t180 = t160 + t174;
  t183 = t169*t151;
  t185 = -1.*t159*t170;
  t189 = t183 + t185;
  t191 = Sin(var1[6]);
  t195 = t143*t180;
  t230 = -1.*t169*t151;
  t231 = t159*t170;
  t232 = t230 + t231;
  t207 = -1.*t143;
  t212 = 1. + t207;
  t213 = 0.4*t212;
  t216 = 0. + t213;
  t229 = t216*t180;
  t235 = -0.4*t191;
  t236 = 0. + t235;
  t240 = t232*t236;
  t241 = t232*t191;
  t244 = t195 + t241;
  t245 = 0.64*t244;
  t247 = t229 + t240 + t245;
  t262 = Cos(var1[3]);
  t263 = -1.*t262*t159;
  t264 = Sin(var1[3]);
  t265 = -1.*t169*t264;
  t266 = t263 + t265;
  t274 = Cos(var1[4]);
  t276 = t169*t262;
  t277 = -1.*t159*t264;
  t278 = t276 + t277;
  t280 = Sin(var1[4]);
  t282 = t274*t266;
  t298 = -1.*t169*t262;
  t300 = t159*t264;
  t301 = t298 + t300;
  t289 = -1.*t274;
  t290 = 1. + t289;
  t292 = 0.4*t290;
  t294 = 0. + t292;
  t296 = t294*t266;
  t302 = -0.4*t280;
  t304 = 0. + t302;
  t305 = t301*t304;
  t306 = t301*t280;
  t307 = t282 + t306;
  t308 = 0.64*t307;
  t310 = t296 + t305 + t308;
  t182 = -0.4*t143*t180;
  t193 = 0.4*t189*t191;
  t201 = -1.*t189*t191;
  t202 = t195 + t201;
  t203 = 0.64*t202;
  t204 = t182 + t193 + t203;
  t205 = var2[6]*t204;
  t250 = var2[2]*t247;
  t251 = var2[5]*t247;
  t252 = var2[1] + t205 + t250 + t251;
  t321 = t216*t189;
  t323 = t180*t236;
  t324 = t143*t189;
  t325 = t180*t191;
  t326 = t324 + t325;
  t327 = 0.64*t326;
  t329 = t321 + t323 + t327;
  t336 = t151*t159;
  t337 = t169*t170;
  t338 = t336 + t337;
  t331 = var2[2]*t329;
  t332 = var2[5]*t329;
  t334 = -0.4*t143*t189;
  t340 = 0.4*t338*t191;
  t341 = -1.*t338*t191;
  t342 = t324 + t341;
  t343 = 0.64*t342;
  t344 = t334 + t340 + t343;
  t345 = var2[6]*t344;
  t346 = var2[0] + t331 + t332 + t345;
  t364 = t294*t278;
  t365 = t266*t304;
  t366 = t274*t278;
  t367 = t266*t280;
  t368 = t366 + t367;
  t369 = 0.64*t368;
  t370 = t364 + t365 + t369;
  t375 = t262*t159;
  t377 = t169*t264;
  t378 = t375 + t377;
  t401 = -1.*var3[1];
  t403 = 0. + t401;
  t411 = t274*t301;
  t419 = t294*t301;
  t420 = t378*t304;
  t421 = t378*t280;
  t422 = t411 + t421;
  t423 = 0.64*t422;
  t424 = t419 + t420 + t423;
  t439 = t143*t232;
  t447 = t216*t232;
  t448 = t338*t236;
  t449 = t338*t191;
  t450 = t439 + t449;
  t451 = 0.64*t450;
  t452 = t447 + t448 + t451;
  t356 = 0.24*var2[2]*t169;
  t357 = var2[0] + t356;
  t256 = -0.24*var2[2]*t159;
  t257 = var2[1] + t256;
  t268 = 0.11*var2[2]*t266;
  t269 = 0.11*var2[3]*t266;
  t272 = var2[1] + t268 + t269;
  t467 = -1.*var3[2];
  t360 = 0.11*var2[2]*t278;
  t361 = 0.11*var2[3]*t278;
  t362 = var2[0] + t360 + t361;
  t462 = -1.*var3[0];
  t405 = 0.11*var2[2]*t301;
  t406 = 0.11*var2[3]*t301;
  t407 = t405 + t406;
  t371 = var2[2]*t370;
  t373 = var2[3]*t370;
  t374 = -0.4*t274*t278;
  t379 = 0.4*t378*t280;
  t380 = -1.*t378*t280;
  t382 = t366 + t380;
  t383 = 0.64*t382;
  t384 = t374 + t379 + t383;
  t385 = var2[4]*t384;
  t386 = var2[0] + t371 + t373 + t385;
  t409 = -0.4*t274*t301;
  t410 = 0.4*t266*t280;
  t412 = -1.*t266*t280;
  t413 = t411 + t412;
  t414 = 0.64*t413;
  t415 = t409 + t410 + t414;
  t416 = var2[4]*t415;
  t425 = var2[2]*t424;
  t426 = var2[3]*t424;
  t427 = t416 + t425 + t426;
  t275 = -0.4*t274*t266;
  t281 = 0.4*t278*t280;
  t283 = -1.*t278*t280;
  t284 = t282 + t283;
  t286 = 0.64*t284;
  t287 = t275 + t281 + t286;
  t288 = var2[4]*t287;
  t311 = var2[2]*t310;
  t312 = var2[3]*t310;
  t313 = var2[1] + t288 + t311 + t312;
  t316 = 0.11*var2[2]*t180;
  t317 = 0.11*var2[5]*t180;
  t318 = var2[1] + t316 + t317;
  t388 = 0.11*var2[2]*t189;
  t389 = 0.11*var2[5]*t189;
  t390 = var2[0] + t388 + t389;
  t432 = 0.11*var2[2]*t232;
  t434 = 0.11*var2[5]*t232;
  t435 = t432 + t434;
  t437 = -0.4*t143*t232;
  t438 = 0.4*t180*t191;
  t440 = -1.*t180*t191;
  t441 = t439 + t440;
  t442 = 0.64*t441;
  t445 = t437 + t438 + t442;
  t446 = var2[6]*t445;
  t453 = var2[2]*t452;
  t454 = var2[5]*t452;
  t455 = t446 + t453 + t454;
  t476 = t268 + t269;
  t498 = t288 + t311 + t312;
  t506 = t316 + t317;
  t531 = t205 + t250 + t251;
  t408 = 6.8*t403*t407;
  t431 = 3.2*t403*t427;
  t475 = -0.11*t278*t272;
  t477 = 0.11*t278;
  t478 = t467 + var1[1] + t477;
  t479 = t476*t478;
  t480 = 0.11*t266*t362;
  t481 = 0.11*t378;
  t482 = t462 + var1[0] + t481;
  t483 = -1.*t482*t407;
  t485 = t475 + t479 + t480 + t483;
  t486 = 6.8*t485;
  t487 = t310*t386;
  t488 = t294*t378;
  t489 = t278*t304;
  t490 = t274*t378;
  t492 = t278*t280;
  t493 = t490 + t492;
  t494 = 0.64*t493;
  t495 = 0. + t462 + var1[0] + t488 + t489 + t494;
  t496 = -1.*t495*t427;
  t497 = 0. + t467 + var1[1] + t364 + t365 + t369;
  t499 = t497*t498;
  t501 = -1.*t370*t313;
  t502 = t487 + t496 + t499 + t501;
  t503 = 3.2*t502;
  t539 = -6.8*t403*t476;
  t540 = -3.2*t403*t498;
  t556 = 0.4*t274*t278;
  t557 = -1.*t274*t278;
  t558 = t557 + t412;
  t559 = 0.64*t558;
  t560 = t556 + t410 + t559;
  t561 = var2[4]*t560;
  t562 = var2[2]*t415;
  t563 = var2[3]*t415;
  t564 = t561 + t562 + t563;
  t570 = var2[2]*t287;
  t571 = var2[3]*t287;
  t572 = 0.4*t274*t378;
  t573 = -1.*t274*t378;
  t574 = t573 + t283;
  t575 = 0.64*t574;
  t576 = t572 + t281 + t575;
  t577 = var2[4]*t576;
  t578 = t570 + t571 + t577;
  t436 = 6.8*t403*t435;
  t456 = 3.2*t403*t455;
  t504 = -0.11*t189*t318;
  t507 = 0.11*t189;
  t508 = t467 + var1[1] + t507;
  t509 = t506*t508;
  t510 = 0.11*t180*t390;
  t511 = 0.11*t338;
  t512 = t462 + var1[0] + t511;
  t513 = -1.*t512*t435;
  t514 = t504 + t509 + t510 + t513;
  t515 = 6.8*t514;
  t520 = t247*t346;
  t521 = t216*t338;
  t522 = t189*t236;
  t523 = t143*t338;
  t524 = t189*t191;
  t525 = t523 + t524;
  t526 = 0.64*t525;
  t527 = 0. + t462 + var1[0] + t521 + t522 + t526;
  t529 = -1.*t527*t455;
  t530 = 0. + t467 + var1[1] + t321 + t323 + t327;
  t532 = t530*t531;
  t533 = -1.*t329*t252;
  t534 = t520 + t529 + t532 + t533;
  t536 = 3.2*t534;
  t541 = -6.8*t403*t506;
  t543 = -3.2*t403*t531;
  t600 = 0.4*t143*t189;
  t601 = -1.*t143*t189;
  t602 = t601 + t440;
  t603 = 0.64*t602;
  t604 = t600 + t438 + t603;
  t605 = var2[6]*t604;
  t606 = var2[2]*t445;
  t607 = var2[5]*t445;
  t608 = t605 + t606 + t607;
  t618 = var2[2]*t204;
  t619 = var2[5]*t204;
  t620 = 0.4*t143*t338;
  t621 = -1.*t143*t338;
  t622 = t621 + t201;
  t623 = 0.64*t622;
  t624 = t620 + t193 + t623;
  t625 = var2[6]*t624;
  t626 = t618 + t619 + t625;
  p_output1[0]=-3.2*t252*var4[1];
  p_output1[1]=-3.2*t252 - 12.*t257 - 6.8*t272 - 3.2*t313 - 6.8*t318 + 3.2*(t252*var4[0] - 1.*t346*var4[2]);
  p_output1[2]=3.2*t346*var4[1];
  p_output1[3]=-3.2*t252*var4[4];
  p_output1[4]=3.2*t346 + 12.*t357 + 6.8*t362 + 3.2*t386 + 6.8*t390 + 3.2*(t252*var4[3] - 1.*t346*var4[5]);
  p_output1[5]=3.2*t346*var4[4];
  p_output1[6]=t408 + t431 + t436 + t456 - 2.88*t169*t403*var2[2] - 3.2*t252*var4[7];
  p_output1[7]=t486 + t503 + t515 + t536 + 12.*(-0.24*t169*t257 - 0.24*t159*t357 + 0.24*t169*(0.24*t159 + t462 + var1[0])*var2[2] - 0.24*t159*(0.24*t169 + t467 + var1[1])*var2[2]) + 3.2*(t252*var4[6] - 1.*t346*var4[8]);
  p_output1[8]=t539 + t540 + t541 + t543 + 2.88*t159*t403*var2[2] + 3.2*t346*var4[7];
  p_output1[9]=t408 + t431 - 3.2*t252*var4[10];
  p_output1[10]=t486 + t503 + 3.2*(t252*var4[9] - 1.*t346*var4[11]);
  p_output1[11]=t539 + t540 + 3.2*t346*var4[10];
  p_output1[12]=3.2*t403*t564 - 3.2*t252*var4[13];
  p_output1[13]=3.2*(-1.*t313*t384 + t287*t386 - 1.*t495*t564 + t497*t578) + 3.2*(t252*var4[12] - 1.*t346*var4[14]);
  p_output1[14]=-3.2*t403*t578 + 3.2*t346*var4[13];
  p_output1[15]=t436 + t456 - 3.2*t252*var4[16];
  p_output1[16]=t515 + t536 + 3.2*(t252*var4[15] - 1.*t346*var4[17]);
  p_output1[17]=t541 + t543 + 3.2*t346*var4[16];
  p_output1[18]=3.2*t403*t608 - 3.2*t252*var4[19];
  p_output1[19]=3.2*(-1.*t252*t344 + t204*t346 - 1.*t527*t608 + t530*t626) + 3.2*(t252*var4[18] - 1.*t346*var4[20]);
  p_output1[20]=-3.2*t403*t626 + 3.2*t346*var4[19];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 7) && 
      !(mrows == 7 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_L_world_about_contact_point_src.hh"

namespace SymExpression
{

void J_L_world_about_contact_point_src_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
