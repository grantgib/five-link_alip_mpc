/*
 * Automatically Generated from Mathematica.
 * Fri 27 Aug 2021 03:42:44 GMT-04:00
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
  double t131;
  double t115;
  double t129;
  double t132;
  double t113;
  double t130;
  double t139;
  double t141;
  double t151;
  double t153;
  double t155;
  double t156;
  double t160;
  double t184;
  double t185;
  double t189;
  double t175;
  double t179;
  double t180;
  double t182;
  double t183;
  double t191;
  double t193;
  double t195;
  double t201;
  double t202;
  double t203;
  double t204;
  double t217;
  double t218;
  double t222;
  double t225;
  double t227;
  double t233;
  double t236;
  double t237;
  double t238;
  double t239;
  double t241;
  double t253;
  double t255;
  double t256;
  double t248;
  double t249;
  double t250;
  double t251;
  double t252;
  double t257;
  double t260;
  double t262;
  double t263;
  double t264;
  double t265;
  double t266;
  double t143;
  double t159;
  double t168;
  double t169;
  double t170;
  double t172;
  double t174;
  double t205;
  double t207;
  double t208;
  double t278;
  double t280;
  double t281;
  double t282;
  double t283;
  double t284;
  double t285;
  double t289;
  double t290;
  double t291;
  double t286;
  double t287;
  double t288;
  double t292;
  double t293;
  double t294;
  double t296;
  double t297;
  double t298;
  double t299;
  double t316;
  double t317;
  double t318;
  double t319;
  double t320;
  double t321;
  double t322;
  double t326;
  double t327;
  double t328;
  double t349;
  double t350;
  double t358;
  double t364;
  double t365;
  double t366;
  double t367;
  double t368;
  double t369;
  double t380;
  double t386;
  double t387;
  double t388;
  double t389;
  double t390;
  double t391;
  double t308;
  double t309;
  double t213;
  double t215;
  double t229;
  double t230;
  double t231;
  double t402;
  double t311;
  double t312;
  double t313;
  double t398;
  double t352;
  double t353;
  double t354;
  double t323;
  double t324;
  double t325;
  double t329;
  double t330;
  double t331;
  double t332;
  double t333;
  double t334;
  double t335;
  double t356;
  double t357;
  double t359;
  double t360;
  double t361;
  double t362;
  double t363;
  double t370;
  double t371;
  double t372;
  double t235;
  double t240;
  double t242;
  double t244;
  double t245;
  double t246;
  double t247;
  double t268;
  double t269;
  double t271;
  double t273;
  double t274;
  double t275;
  double t337;
  double t338;
  double t340;
  double t374;
  double t375;
  double t376;
  double t378;
  double t379;
  double t381;
  double t382;
  double t383;
  double t384;
  double t385;
  double t392;
  double t393;
  double t394;
  double t411;
  double t431;
  double t437;
  double t461;
  double t355;
  double t373;
  double t410;
  double t412;
  double t413;
  double t414;
  double t415;
  double t416;
  double t417;
  double t418;
  double t419;
  double t420;
  double t421;
  double t422;
  double t423;
  double t424;
  double t425;
  double t426;
  double t427;
  double t428;
  double t429;
  double t430;
  double t432;
  double t433;
  double t434;
  double t435;
  double t468;
  double t469;
  double t483;
  double t484;
  double t485;
  double t486;
  double t487;
  double t488;
  double t489;
  double t490;
  double t491;
  double t497;
  double t498;
  double t499;
  double t500;
  double t501;
  double t502;
  double t503;
  double t504;
  double t505;
  double t377;
  double t395;
  double t436;
  double t438;
  double t439;
  double t440;
  double t441;
  double t442;
  double t443;
  double t444;
  double t445;
  double t446;
  double t451;
  double t452;
  double t453;
  double t454;
  double t455;
  double t456;
  double t457;
  double t458;
  double t459;
  double t460;
  double t462;
  double t463;
  double t464;
  double t465;
  double t470;
  double t472;
  double t527;
  double t528;
  double t529;
  double t530;
  double t531;
  double t532;
  double t533;
  double t534;
  double t535;
  double t545;
  double t546;
  double t547;
  double t548;
  double t549;
  double t550;
  double t551;
  double t552;
  double t553;
  t131 = Cos(var1[2]);
  t115 = Cos(var1[5]);
  t129 = Sin(var1[2]);
  t132 = Sin(var1[5]);
  t113 = Cos(var1[6]);
  t130 = -1.*t115*t129;
  t139 = -1.*t131*t132;
  t141 = t130 + t139;
  t151 = t131*t115;
  t153 = -1.*t129*t132;
  t155 = t151 + t153;
  t156 = Sin(var1[6]);
  t160 = t113*t141;
  t184 = -1.*t131*t115;
  t185 = t129*t132;
  t189 = t184 + t185;
  t175 = -1.*t113;
  t179 = 1. + t175;
  t180 = 0.4*t179;
  t182 = 0. + t180;
  t183 = t182*t141;
  t191 = -0.4*t156;
  t193 = 0. + t191;
  t195 = t189*t193;
  t201 = t189*t156;
  t202 = t160 + t201;
  t203 = 0.64*t202;
  t204 = t183 + t195 + t203;
  t217 = Cos(var1[3]);
  t218 = -1.*t217*t129;
  t222 = Sin(var1[3]);
  t225 = -1.*t131*t222;
  t227 = t218 + t225;
  t233 = Cos(var1[4]);
  t236 = t131*t217;
  t237 = -1.*t129*t222;
  t238 = t236 + t237;
  t239 = Sin(var1[4]);
  t241 = t233*t227;
  t253 = -1.*t131*t217;
  t255 = t129*t222;
  t256 = t253 + t255;
  t248 = -1.*t233;
  t249 = 1. + t248;
  t250 = 0.4*t249;
  t251 = 0. + t250;
  t252 = t251*t227;
  t257 = -0.4*t239;
  t260 = 0. + t257;
  t262 = t256*t260;
  t263 = t256*t239;
  t264 = t241 + t263;
  t265 = 0.64*t264;
  t266 = t252 + t262 + t265;
  t143 = -0.4*t113*t141;
  t159 = 0.4*t155*t156;
  t168 = -1.*t155*t156;
  t169 = t160 + t168;
  t170 = 0.64*t169;
  t172 = t143 + t159 + t170;
  t174 = var2[6]*t172;
  t205 = var2[2]*t204;
  t207 = var2[5]*t204;
  t208 = var2[1] + t174 + t205 + t207;
  t278 = t182*t155;
  t280 = t141*t193;
  t281 = t113*t155;
  t282 = t141*t156;
  t283 = t281 + t282;
  t284 = 0.64*t283;
  t285 = t278 + t280 + t284;
  t289 = t115*t129;
  t290 = t131*t132;
  t291 = t289 + t290;
  t286 = var2[2]*t285;
  t287 = var2[5]*t285;
  t288 = -0.4*t113*t155;
  t292 = 0.4*t291*t156;
  t293 = -1.*t291*t156;
  t294 = t281 + t293;
  t296 = 0.64*t294;
  t297 = t288 + t292 + t296;
  t298 = var2[6]*t297;
  t299 = var2[0] + t286 + t287 + t298;
  t316 = t251*t238;
  t317 = t227*t260;
  t318 = t233*t238;
  t319 = t227*t239;
  t320 = t318 + t319;
  t321 = 0.64*t320;
  t322 = t316 + t317 + t321;
  t326 = t217*t129;
  t327 = t131*t222;
  t328 = t326 + t327;
  t349 = -1.*var3[1];
  t350 = 0. + t349;
  t358 = t233*t256;
  t364 = t251*t256;
  t365 = t328*t260;
  t366 = t328*t239;
  t367 = t358 + t366;
  t368 = 0.64*t367;
  t369 = t364 + t365 + t368;
  t380 = t113*t189;
  t386 = t182*t189;
  t387 = t291*t193;
  t388 = t291*t156;
  t389 = t380 + t388;
  t390 = 0.64*t389;
  t391 = t386 + t387 + t390;
  t308 = 0.24*var2[2]*t131;
  t309 = var2[0] + t308;
  t213 = -0.24*var2[2]*t129;
  t215 = var2[1] + t213;
  t229 = 0.11*var2[2]*t227;
  t230 = 0.11*var2[3]*t227;
  t231 = var2[1] + t229 + t230;
  t402 = -1.*var3[2];
  t311 = 0.11*var2[2]*t238;
  t312 = 0.11*var2[3]*t238;
  t313 = var2[0] + t311 + t312;
  t398 = -1.*var3[0];
  t352 = 0.11*var2[2]*t256;
  t353 = 0.11*var2[3]*t256;
  t354 = t352 + t353;
  t323 = var2[2]*t322;
  t324 = var2[3]*t322;
  t325 = -0.4*t233*t238;
  t329 = 0.4*t328*t239;
  t330 = -1.*t328*t239;
  t331 = t318 + t330;
  t332 = 0.64*t331;
  t333 = t325 + t329 + t332;
  t334 = var2[4]*t333;
  t335 = var2[0] + t323 + t324 + t334;
  t356 = -0.4*t233*t256;
  t357 = 0.4*t227*t239;
  t359 = -1.*t227*t239;
  t360 = t358 + t359;
  t361 = 0.64*t360;
  t362 = t356 + t357 + t361;
  t363 = var2[4]*t362;
  t370 = var2[2]*t369;
  t371 = var2[3]*t369;
  t372 = t363 + t370 + t371;
  t235 = -0.4*t233*t227;
  t240 = 0.4*t238*t239;
  t242 = -1.*t238*t239;
  t244 = t241 + t242;
  t245 = 0.64*t244;
  t246 = t235 + t240 + t245;
  t247 = var2[4]*t246;
  t268 = var2[2]*t266;
  t269 = var2[3]*t266;
  t271 = var2[1] + t247 + t268 + t269;
  t273 = 0.11*var2[2]*t141;
  t274 = 0.11*var2[5]*t141;
  t275 = var2[1] + t273 + t274;
  t337 = 0.11*var2[2]*t155;
  t338 = 0.11*var2[5]*t155;
  t340 = var2[0] + t337 + t338;
  t374 = 0.11*var2[2]*t189;
  t375 = 0.11*var2[5]*t189;
  t376 = t374 + t375;
  t378 = -0.4*t113*t189;
  t379 = 0.4*t141*t156;
  t381 = -1.*t141*t156;
  t382 = t380 + t381;
  t383 = 0.64*t382;
  t384 = t378 + t379 + t383;
  t385 = var2[6]*t384;
  t392 = var2[2]*t391;
  t393 = var2[5]*t391;
  t394 = t385 + t392 + t393;
  t411 = t229 + t230;
  t431 = t247 + t268 + t269;
  t437 = t273 + t274;
  t461 = t174 + t205 + t207;
  t355 = 6.8*t350*t354;
  t373 = 3.2*t350*t372;
  t410 = -0.11*t238*t231;
  t412 = 0.11*t238;
  t413 = t402 + var1[1] + t412;
  t414 = t411*t413;
  t415 = 0.11*t227*t313;
  t416 = 0.11*t328;
  t417 = t398 + var1[0] + t416;
  t418 = -1.*t417*t354;
  t419 = t410 + t414 + t415 + t418;
  t420 = 6.8*t419;
  t421 = t266*t335;
  t422 = t251*t328;
  t423 = t238*t260;
  t424 = t233*t328;
  t425 = t238*t239;
  t426 = t424 + t425;
  t427 = 0.64*t426;
  t428 = 0. + t398 + var1[0] + t422 + t423 + t427;
  t429 = -1.*t428*t372;
  t430 = 0. + t402 + var1[1] + t316 + t317 + t321;
  t432 = t430*t431;
  t433 = -1.*t322*t271;
  t434 = t421 + t429 + t432 + t433;
  t435 = 3.2*t434;
  t468 = -6.8*t350*t411;
  t469 = -3.2*t350*t431;
  t483 = 0.4*t233*t238;
  t484 = -1.*t233*t238;
  t485 = t484 + t359;
  t486 = 0.64*t485;
  t487 = t483 + t357 + t486;
  t488 = var2[4]*t487;
  t489 = var2[2]*t362;
  t490 = var2[3]*t362;
  t491 = t488 + t489 + t490;
  t497 = var2[2]*t246;
  t498 = var2[3]*t246;
  t499 = 0.4*t233*t328;
  t500 = -1.*t233*t328;
  t501 = t500 + t242;
  t502 = 0.64*t501;
  t503 = t499 + t240 + t502;
  t504 = var2[4]*t503;
  t505 = t497 + t498 + t504;
  t377 = 6.8*t350*t376;
  t395 = 3.2*t350*t394;
  t436 = -0.11*t155*t275;
  t438 = 0.11*t155;
  t439 = t402 + var1[1] + t438;
  t440 = t437*t439;
  t441 = 0.11*t141*t340;
  t442 = 0.11*t291;
  t443 = t398 + var1[0] + t442;
  t444 = -1.*t443*t376;
  t445 = t436 + t440 + t441 + t444;
  t446 = 6.8*t445;
  t451 = t204*t299;
  t452 = t182*t291;
  t453 = t155*t193;
  t454 = t113*t291;
  t455 = t155*t156;
  t456 = t454 + t455;
  t457 = 0.64*t456;
  t458 = 0. + t398 + var1[0] + t452 + t453 + t457;
  t459 = -1.*t458*t394;
  t460 = 0. + t402 + var1[1] + t278 + t280 + t284;
  t462 = t460*t461;
  t463 = -1.*t285*t208;
  t464 = t451 + t459 + t462 + t463;
  t465 = 3.2*t464;
  t470 = -6.8*t350*t437;
  t472 = -3.2*t350*t461;
  t527 = 0.4*t113*t155;
  t528 = -1.*t113*t155;
  t529 = t528 + t381;
  t530 = 0.64*t529;
  t531 = t527 + t379 + t530;
  t532 = var2[6]*t531;
  t533 = var2[2]*t384;
  t534 = var2[5]*t384;
  t535 = t532 + t533 + t534;
  t545 = var2[2]*t172;
  t546 = var2[5]*t172;
  t547 = 0.4*t113*t291;
  t548 = -1.*t113*t291;
  t549 = t548 + t168;
  t550 = 0.64*t549;
  t551 = t547 + t159 + t550;
  t552 = var2[6]*t551;
  t553 = t545 + t546 + t552;
  p_output1[0]=-3.2*t208*var4[1];
  p_output1[1]=-3.2*t208 - 12.*t215 - 6.8*t231 - 3.2*t271 - 6.8*t275 + 3.2*(t208*var4[0] - 1.*t299*var4[2]);
  p_output1[2]=3.2*t299*var4[1];
  p_output1[3]=-3.2*t208*var4[4];
  p_output1[4]=3.2*t299 + 12.*t309 + 6.8*t313 + 3.2*t335 + 6.8*t340 + 3.2*(t208*var4[3] - 1.*t299*var4[5]);
  p_output1[5]=3.2*t299*var4[4];
  p_output1[6]=t355 + t373 + t377 + t395 - 2.88*t131*t350*var2[2] - 3.2*t208*var4[7];
  p_output1[7]=t420 + t435 + t446 + t465 + 12.*(-0.24*t131*t215 - 0.24*t129*t309 + 0.24*t131*(0.24*t129 + t398 + var1[0])*var2[2] - 0.24*t129*(0.24*t131 + t402 + var1[1])*var2[2]) + 3.2*(t208*var4[6] - 1.*t299*var4[8]);
  p_output1[8]=t468 + t469 + t470 + t472 + 2.88*t129*t350*var2[2] + 3.2*t299*var4[7];
  p_output1[9]=t355 + t373 - 3.2*t208*var4[10];
  p_output1[10]=t420 + t435 + 3.2*(t208*var4[9] - 1.*t299*var4[11]);
  p_output1[11]=t468 + t469 + 3.2*t299*var4[10];
  p_output1[12]=3.2*t350*t491 - 3.2*t208*var4[13];
  p_output1[13]=3.2*(-1.*t271*t333 + t246*t335 - 1.*t428*t491 + t430*t505) + 3.2*(t208*var4[12] - 1.*t299*var4[14]);
  p_output1[14]=-3.2*t350*t505 + 3.2*t299*var4[13];
  p_output1[15]=t377 + t395 - 3.2*t208*var4[16];
  p_output1[16]=t446 + t465 + 3.2*(t208*var4[15] - 1.*t299*var4[17]);
  p_output1[17]=t470 + t472 + 3.2*t299*var4[16];
  p_output1[18]=3.2*t350*t535 - 3.2*t208*var4[19];
  p_output1[19]=3.2*(-1.*t208*t297 + t172*t299 - 1.*t458*t535 + t460*t553) + 3.2*(t208*var4[18] - 1.*t299*var4[20]);
  p_output1[20]=-3.2*t350*t553 + 3.2*t299*var4[19];
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

#include "J_L_world_about_contact_point_mex.hh"

namespace SymExpression
{

void J_L_world_about_contact_point_mex_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
