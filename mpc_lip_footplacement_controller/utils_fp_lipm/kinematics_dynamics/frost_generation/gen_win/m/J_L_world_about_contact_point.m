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
  double t202;
  double t183;
  double t193;
  double t203;
  double t182;
  double t195;
  double t205;
  double t213;
  double t229;
  double t231;
  double t232;
  double t235;
  double t240;
  double t269;
  double t272;
  double t273;
  double t251;
  double t255;
  double t256;
  double t260;
  double t268;
  double t275;
  double t276;
  double t281;
  double t282;
  double t284;
  double t286;
  double t288;
  double t305;
  double t306;
  double t307;
  double t308;
  double t310;
  double t317;
  double t319;
  double t320;
  double t321;
  double t323;
  double t325;
  double t345;
  double t347;
  double t348;
  double t336;
  double t337;
  double t340;
  double t342;
  double t343;
  double t350;
  double t351;
  double t352;
  double t353;
  double t355;
  double t356;
  double t358;
  double t216;
  double t236;
  double t241;
  double t244;
  double t245;
  double t247;
  double t250;
  double t292;
  double t294;
  double t296;
  double t369;
  double t371;
  double t373;
  double t374;
  double t375;
  double t377;
  double t379;
  double t387;
  double t388;
  double t389;
  double t382;
  double t383;
  double t385;
  double t390;
  double t391;
  double t392;
  double t393;
  double t395;
  double t396;
  double t397;
  double t419;
  double t420;
  double t421;
  double t422;
  double t423;
  double t424;
  double t425;
  double t434;
  double t436;
  double t437;
  double t466;
  double t468;
  double t476;
  double t485;
  double t486;
  double t487;
  double t488;
  double t489;
  double t490;
  double t508;
  double t516;
  double t517;
  double t518;
  double t519;
  double t520;
  double t521;
  double t409;
  double t410;
  double t301;
  double t302;
  double t311;
  double t312;
  double t314;
  double t538;
  double t413;
  double t414;
  double t415;
  double t532;
  double t470;
  double t471;
  double t472;
  double t426;
  double t431;
  double t432;
  double t438;
  double t439;
  double t441;
  double t442;
  double t445;
  double t446;
  double t447;
  double t474;
  double t475;
  double t477;
  double t478;
  double t479;
  double t480;
  double t481;
  double t492;
  double t493;
  double t494;
  double t318;
  double t324;
  double t326;
  double t327;
  double t331;
  double t332;
  double t334;
  double t360;
  double t361;
  double t362;
  double t364;
  double t365;
  double t366;
  double t449;
  double t450;
  double t451;
  double t499;
  double t502;
  double t503;
  double t506;
  double t507;
  double t509;
  double t510;
  double t511;
  double t514;
  double t515;
  double t522;
  double t523;
  double t524;
  double t547;
  double t571;
  double t579;
  double t604;
  double t473;
  double t498;
  double t546;
  double t549;
  double t550;
  double t551;
  double t552;
  double t554;
  double t555;
  double t556;
  double t558;
  double t559;
  double t560;
  double t561;
  double t562;
  double t563;
  double t565;
  double t566;
  double t567;
  double t568;
  double t569;
  double t570;
  double t572;
  double t574;
  double t575;
  double t576;
  double t612;
  double t613;
  double t629;
  double t630;
  double t631;
  double t632;
  double t633;
  double t634;
  double t635;
  double t636;
  double t637;
  double t643;
  double t644;
  double t645;
  double t646;
  double t647;
  double t648;
  double t649;
  double t650;
  double t651;
  double t504;
  double t525;
  double t577;
  double t580;
  double t581;
  double t582;
  double t583;
  double t584;
  double t585;
  double t586;
  double t587;
  double t588;
  double t593;
  double t594;
  double t595;
  double t596;
  double t597;
  double t598;
  double t599;
  double t600;
  double t602;
  double t603;
  double t605;
  double t606;
  double t607;
  double t609;
  double t614;
  double t616;
  double t673;
  double t674;
  double t675;
  double t676;
  double t677;
  double t678;
  double t679;
  double t680;
  double t681;
  double t691;
  double t692;
  double t693;
  double t694;
  double t695;
  double t696;
  double t697;
  double t698;
  double t699;
  t202 = Cos(var1[2]);
  t183 = Cos(var1[5]);
  t193 = Sin(var1[2]);
  t203 = Sin(var1[5]);
  t182 = Cos(var1[6]);
  t195 = -1.*t183*t193;
  t205 = -1.*t202*t203;
  t213 = t195 + t205;
  t229 = t202*t183;
  t231 = -1.*t193*t203;
  t232 = t229 + t231;
  t235 = Sin(var1[6]);
  t240 = t182*t213;
  t269 = -1.*t202*t183;
  t272 = t193*t203;
  t273 = t269 + t272;
  t251 = -1.*t182;
  t255 = 1. + t251;
  t256 = 0.4*t255;
  t260 = 0. + t256;
  t268 = t260*t213;
  t275 = -0.4*t235;
  t276 = 0. + t275;
  t281 = t273*t276;
  t282 = t273*t235;
  t284 = t240 + t282;
  t286 = 0.64*t284;
  t288 = t268 + t281 + t286;
  t305 = Cos(var1[3]);
  t306 = -1.*t305*t193;
  t307 = Sin(var1[3]);
  t308 = -1.*t202*t307;
  t310 = t306 + t308;
  t317 = Cos(var1[4]);
  t319 = t202*t305;
  t320 = -1.*t193*t307;
  t321 = t319 + t320;
  t323 = Sin(var1[4]);
  t325 = t317*t310;
  t345 = -1.*t202*t305;
  t347 = t193*t307;
  t348 = t345 + t347;
  t336 = -1.*t317;
  t337 = 1. + t336;
  t340 = 0.4*t337;
  t342 = 0. + t340;
  t343 = t342*t310;
  t350 = -0.4*t323;
  t351 = 0. + t350;
  t352 = t348*t351;
  t353 = t348*t323;
  t355 = t325 + t353;
  t356 = 0.64*t355;
  t358 = t343 + t352 + t356;
  t216 = -0.4*t182*t213;
  t236 = 0.4*t232*t235;
  t241 = -1.*t232*t235;
  t244 = t240 + t241;
  t245 = 0.64*t244;
  t247 = t216 + t236 + t245;
  t250 = var2[6]*t247;
  t292 = var2[2]*t288;
  t294 = var2[5]*t288;
  t296 = var2[1] + t250 + t292 + t294;
  t369 = t260*t232;
  t371 = t213*t276;
  t373 = t182*t232;
  t374 = t213*t235;
  t375 = t373 + t374;
  t377 = 0.64*t375;
  t379 = t369 + t371 + t377;
  t387 = t183*t193;
  t388 = t202*t203;
  t389 = t387 + t388;
  t382 = var2[2]*t379;
  t383 = var2[5]*t379;
  t385 = -0.4*t182*t232;
  t390 = 0.4*t389*t235;
  t391 = -1.*t389*t235;
  t392 = t373 + t391;
  t393 = 0.64*t392;
  t395 = t385 + t390 + t393;
  t396 = var2[6]*t395;
  t397 = var2[0] + t382 + t383 + t396;
  t419 = t342*t321;
  t420 = t310*t351;
  t421 = t317*t321;
  t422 = t310*t323;
  t423 = t421 + t422;
  t424 = 0.64*t423;
  t425 = t419 + t420 + t424;
  t434 = t305*t193;
  t436 = t202*t307;
  t437 = t434 + t436;
  t466 = -1.*var3[1];
  t468 = 0. + t466;
  t476 = t317*t348;
  t485 = t342*t348;
  t486 = t437*t351;
  t487 = t437*t323;
  t488 = t476 + t487;
  t489 = 0.64*t488;
  t490 = t485 + t486 + t489;
  t508 = t182*t273;
  t516 = t260*t273;
  t517 = t389*t276;
  t518 = t389*t235;
  t519 = t508 + t518;
  t520 = 0.64*t519;
  t521 = t516 + t517 + t520;
  t409 = 0.24*var2[2]*t202;
  t410 = var2[0] + t409;
  t301 = -0.24*var2[2]*t193;
  t302 = var2[1] + t301;
  t311 = 0.11*var2[2]*t310;
  t312 = 0.11*var2[3]*t310;
  t314 = var2[1] + t311 + t312;
  t538 = -1.*var3[2];
  t413 = 0.11*var2[2]*t321;
  t414 = 0.11*var2[3]*t321;
  t415 = var2[0] + t413 + t414;
  t532 = -1.*var3[0];
  t470 = 0.11*var2[2]*t348;
  t471 = 0.11*var2[3]*t348;
  t472 = t470 + t471;
  t426 = var2[2]*t425;
  t431 = var2[3]*t425;
  t432 = -0.4*t317*t321;
  t438 = 0.4*t437*t323;
  t439 = -1.*t437*t323;
  t441 = t421 + t439;
  t442 = 0.64*t441;
  t445 = t432 + t438 + t442;
  t446 = var2[4]*t445;
  t447 = var2[0] + t426 + t431 + t446;
  t474 = -0.4*t317*t348;
  t475 = 0.4*t310*t323;
  t477 = -1.*t310*t323;
  t478 = t476 + t477;
  t479 = 0.64*t478;
  t480 = t474 + t475 + t479;
  t481 = var2[4]*t480;
  t492 = var2[2]*t490;
  t493 = var2[3]*t490;
  t494 = t481 + t492 + t493;
  t318 = -0.4*t317*t310;
  t324 = 0.4*t321*t323;
  t326 = -1.*t321*t323;
  t327 = t325 + t326;
  t331 = 0.64*t327;
  t332 = t318 + t324 + t331;
  t334 = var2[4]*t332;
  t360 = var2[2]*t358;
  t361 = var2[3]*t358;
  t362 = var2[1] + t334 + t360 + t361;
  t364 = 0.11*var2[2]*t213;
  t365 = 0.11*var2[5]*t213;
  t366 = var2[1] + t364 + t365;
  t449 = 0.11*var2[2]*t232;
  t450 = 0.11*var2[5]*t232;
  t451 = var2[0] + t449 + t450;
  t499 = 0.11*var2[2]*t273;
  t502 = 0.11*var2[5]*t273;
  t503 = t499 + t502;
  t506 = -0.4*t182*t273;
  t507 = 0.4*t213*t235;
  t509 = -1.*t213*t235;
  t510 = t508 + t509;
  t511 = 0.64*t510;
  t514 = t506 + t507 + t511;
  t515 = var2[6]*t514;
  t522 = var2[2]*t521;
  t523 = var2[5]*t521;
  t524 = t515 + t522 + t523;
  t547 = t311 + t312;
  t571 = t334 + t360 + t361;
  t579 = t364 + t365;
  t604 = t250 + t292 + t294;
  t473 = 6.8*t468*t472;
  t498 = 3.2*t468*t494;
  t546 = -0.11*t321*t314;
  t549 = 0.11*t321;
  t550 = t538 + var1[1] + t549;
  t551 = t547*t550;
  t552 = 0.11*t310*t415;
  t554 = 0.11*t437;
  t555 = t532 + var1[0] + t554;
  t556 = -1.*t555*t472;
  t558 = t546 + t551 + t552 + t556;
  t559 = 6.8*t558;
  t560 = t358*t447;
  t561 = t342*t437;
  t562 = t321*t351;
  t563 = t317*t437;
  t565 = t321*t323;
  t566 = t563 + t565;
  t567 = 0.64*t566;
  t568 = 0. + t532 + var1[0] + t561 + t562 + t567;
  t569 = -1.*t568*t494;
  t570 = 0. + t538 + var1[1] + t419 + t420 + t424;
  t572 = t570*t571;
  t574 = -1.*t425*t362;
  t575 = t560 + t569 + t572 + t574;
  t576 = 3.2*t575;
  t612 = -6.8*t468*t547;
  t613 = -3.2*t468*t571;
  t629 = 0.4*t317*t321;
  t630 = -1.*t317*t321;
  t631 = t630 + t477;
  t632 = 0.64*t631;
  t633 = t629 + t475 + t632;
  t634 = var2[4]*t633;
  t635 = var2[2]*t480;
  t636 = var2[3]*t480;
  t637 = t634 + t635 + t636;
  t643 = var2[2]*t332;
  t644 = var2[3]*t332;
  t645 = 0.4*t317*t437;
  t646 = -1.*t317*t437;
  t647 = t646 + t326;
  t648 = 0.64*t647;
  t649 = t645 + t324 + t648;
  t650 = var2[4]*t649;
  t651 = t643 + t644 + t650;
  t504 = 6.8*t468*t503;
  t525 = 3.2*t468*t524;
  t577 = -0.11*t232*t366;
  t580 = 0.11*t232;
  t581 = t538 + var1[1] + t580;
  t582 = t579*t581;
  t583 = 0.11*t213*t451;
  t584 = 0.11*t389;
  t585 = t532 + var1[0] + t584;
  t586 = -1.*t585*t503;
  t587 = t577 + t582 + t583 + t586;
  t588 = 6.8*t587;
  t593 = t288*t397;
  t594 = t260*t389;
  t595 = t232*t276;
  t596 = t182*t389;
  t597 = t232*t235;
  t598 = t596 + t597;
  t599 = 0.64*t598;
  t600 = 0. + t532 + var1[0] + t594 + t595 + t599;
  t602 = -1.*t600*t524;
  t603 = 0. + t538 + var1[1] + t369 + t371 + t377;
  t605 = t603*t604;
  t606 = -1.*t379*t296;
  t607 = t593 + t602 + t605 + t606;
  t609 = 3.2*t607;
  t614 = -6.8*t468*t579;
  t616 = -3.2*t468*t604;
  t673 = 0.4*t182*t232;
  t674 = -1.*t182*t232;
  t675 = t674 + t509;
  t676 = 0.64*t675;
  t677 = t673 + t507 + t676;
  t678 = var2[6]*t677;
  t679 = var2[2]*t514;
  t680 = var2[5]*t514;
  t681 = t678 + t679 + t680;
  t691 = var2[2]*t247;
  t692 = var2[5]*t247;
  t693 = 0.4*t182*t389;
  t694 = -1.*t182*t389;
  t695 = t694 + t241;
  t696 = 0.64*t695;
  t697 = t693 + t236 + t696;
  t698 = var2[6]*t697;
  t699 = t691 + t692 + t698;
  p_output1[0]=-3.2*t296*var4[1];
  p_output1[1]=-3.2*t296 - 12.*t302 - 6.8*t314 - 3.2*t362 - 6.8*t366 + 3.2*(t296*var4[0] - 1.*t397*var4[2]);
  p_output1[2]=3.2*t397*var4[1];
  p_output1[3]=-3.2*t296*var4[4];
  p_output1[4]=3.2*t397 + 12.*t410 + 6.8*t415 + 3.2*t447 + 6.8*t451 + 3.2*(t296*var4[3] - 1.*t397*var4[5]);
  p_output1[5]=3.2*t397*var4[4];
  p_output1[6]=t473 + t498 + t504 + t525 - 2.88*t202*t468*var2[2] - 3.2*t296*var4[7];
  p_output1[7]=t559 + t576 + t588 + t609 + 12.*(-0.24*t202*t302 - 0.24*t193*t410 + 0.24*t202*(0.24*t193 + t532 + var1[0])*var2[2] - 0.24*t193*(0.24*t202 + t538 + var1[1])*var2[2]) + 3.2*(t296*var4[6] - 1.*t397*var4[8]);
  p_output1[8]=t612 + t613 + t614 + t616 + 2.88*t193*t468*var2[2] + 3.2*t397*var4[7];
  p_output1[9]=t473 + t498 - 3.2*t296*var4[10];
  p_output1[10]=t559 + t576 + 3.2*(t296*var4[9] - 1.*t397*var4[11]);
  p_output1[11]=t612 + t613 + 3.2*t397*var4[10];
  p_output1[12]=3.2*t468*t637 - 3.2*t296*var4[13];
  p_output1[13]=3.2*(-1.*t362*t445 + t332*t447 - 1.*t568*t637 + t570*t651) + 3.2*(t296*var4[12] - 1.*t397*var4[14]);
  p_output1[14]=-3.2*t468*t651 + 3.2*t397*var4[13];
  p_output1[15]=t504 + t525 - 3.2*t296*var4[16];
  p_output1[16]=t588 + t609 + 3.2*(t296*var4[15] - 1.*t397*var4[17]);
  p_output1[17]=t614 + t616 + 3.2*t397*var4[16];
  p_output1[18]=3.2*t468*t681 - 3.2*t296*var4[19];
  p_output1[19]=3.2*(-1.*t296*t395 + t247*t397 - 1.*t600*t681 + t603*t699) + 3.2*(t296*var4[18] - 1.*t397*var4[20]);
  p_output1[20]=-3.2*t468*t699 + 3.2*t397*var4[19];
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

#include "J_L_world_about_contact_point.hh"

namespace SymExpression
{

void J_L_world_about_contact_point_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
