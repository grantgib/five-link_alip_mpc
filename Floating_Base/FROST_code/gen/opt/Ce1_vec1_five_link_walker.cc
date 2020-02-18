/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:17 GMT-05:00
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
  double t143;
  double t129;
  double t134;
  double t159;
  double t171;
  double t125;
  double t173;
  double t174;
  double t178;
  double t138;
  double t160;
  double t167;
  double t170;
  double t186;
  double t187;
  double t256;
  double t259;
  double t260;
  double t190;
  double t192;
  double t193;
  double t201;
  double t202;
  double t207;
  double t210;
  double t211;
  double t213;
  double t214;
  double t218;
  double t223;
  double t224;
  double t227;
  double t242;
  double t250;
  double t255;
  double t261;
  double t262;
  double t263;
  double t264;
  double t267;
  double t291;
  double t304;
  double t315;
  double t316;
  double t317;
  double t331;
  double t333;
  double t332;
  double t334;
  double t335;
  double t337;
  double t338;
  double t339;
  double t340;
  double t356;
  double t361;
  double t364;
  double t336;
  double t341;
  double t371;
  double t372;
  double t373;
  double t342;
  double t300;
  double t310;
  double t311;
  double t322;
  double t323;
  double t328;
  double t329;
  double t330;
  double t377;
  double t378;
  double t379;
  double t380;
  double t381;
  double t382;
  double t383;
  double t280;
  double t284;
  double t270;
  double t271;
  double t392;
  double t393;
  double t394;
  double t395;
  double t396;
  double t397;
  double t398;
  double t401;
  double t402;
  double t403;
  double t404;
  double t405;
  double t408;
  double t409;
  double t410;
  double t411;
  double t369;
  double t370;
  double t343;
  double t352;
  double t433;
  double t424;
  double t425;
  double t426;
  double t427;
  double t428;
  double t429;
  double t430;
  double t431;
  double t432;
  double t446;
  double t447;
  double t448;
  double t449;
  double t450;
  double t451;
  double t464;
  double t465;
  double t466;
  double t467;
  double t468;
  double t469;
  double t470;
  double t471;
  double t473;
  double t474;
  double t475;
  double t479;
  double t480;
  double t481;
  double t472;
  double t476;
  double t477;
  double t478;
  double t483;
  double t484;
  double t488;
  double t489;
  double t490;
  double t491;
  double t500;
  double t501;
  double t493;
  double t503;
  double t504;
  double t495;
  double t458;
  double t459;
  double t460;
  double t461;
  double t462;
  double t463;
  double t523;
  double t524;
  double t525;
  double t526;
  double t527;
  double t528;
  double t529;
  double t530;
  double t532;
  double t533;
  double t534;
  double t517;
  double t518;
  double t519;
  double t520;
  double t521;
  double t522;
  double t531;
  double t535;
  double t536;
  double t538;
  double t539;
  double t540;
  double t545;
  double t546;
  double t547;
  double t544;
  double t549;
  double t550;
  double t554;
  double t563;
  double t564;
  double t556;
  double t566;
  double t567;
  double t558;
  double t579;
  double t580;
  double t581;
  double t582;
  double t584;
  double t585;
  double t586;
  double t587;
  double t591;
  double t592;
  double t612;
  double t613;
  double t614;
  double t615;
  double t617;
  double t618;
  double t619;
  double t620;
  double t624;
  double t625;
  t143 = Cos(var1[3]);
  t129 = Cos(var1[4]);
  t134 = Sin(var1[3]);
  t159 = Sin(var1[4]);
  t171 = Cos(var1[2]);
  t125 = Sin(var1[2]);
  t173 = t143*t129;
  t174 = -1.*t134*t159;
  t178 = t173 + t174;
  t138 = -1.*t129*t134;
  t160 = -1.*t143*t159;
  t167 = t138 + t160;
  t170 = t125*t167;
  t186 = t171*t178;
  t187 = t170 + t186;
  t256 = t171*t143;
  t259 = -1.*t125*t134;
  t260 = t256 + t259;
  t190 = t129*t134;
  t192 = t143*t159;
  t193 = t190 + t192;
  t201 = t171*t193;
  t202 = t125*t178;
  t207 = t201 + t202;
  t210 = 6.4*t187*t207;
  t211 = t171*t167;
  t213 = -1.*t143*t129;
  t214 = t134*t159;
  t218 = t213 + t214;
  t223 = t125*t218;
  t224 = t211 + t223;
  t227 = 6.4*t187*t224;
  t242 = -1.*t143*t125;
  t250 = -1.*t171*t134;
  t255 = t242 + t250;
  t261 = 13.6*t255*t260;
  t262 = t143*t125;
  t263 = t171*t134;
  t264 = t262 + t263;
  t267 = 13.6*t264*t260;
  t291 = Cos(var1[5]);
  t304 = Sin(var1[5]);
  t315 = t171*t291;
  t316 = -1.*t125*t304;
  t317 = t315 + t316;
  t331 = Cos(var1[6]);
  t333 = Sin(var1[6]);
  t332 = -1.*t331*t304;
  t334 = -1.*t291*t333;
  t335 = t332 + t334;
  t337 = t291*t331;
  t338 = -1.*t304*t333;
  t339 = t337 + t338;
  t340 = t171*t339;
  t356 = t331*t304;
  t361 = t291*t333;
  t364 = t356 + t361;
  t336 = t125*t335;
  t341 = t336 + t340;
  t371 = t171*t364;
  t372 = t125*t339;
  t373 = t371 + t372;
  t342 = t171*t335;
  t300 = -1.*t291*t125;
  t310 = -1.*t171*t304;
  t311 = t300 + t310;
  t322 = 13.6*t311*t317;
  t323 = t291*t125;
  t328 = t171*t304;
  t329 = t323 + t328;
  t330 = 13.6*t329*t317;
  t377 = 6.4*t341*t373;
  t378 = -1.*t291*t331;
  t379 = t304*t333;
  t380 = t378 + t379;
  t381 = t125*t380;
  t382 = t342 + t381;
  t383 = 6.4*t341*t382;
  t280 = -1.*t125*t193;
  t284 = t280 + t186;
  t270 = -1.*t125*t178;
  t271 = t211 + t270;
  t392 = 3.2*t187*t284;
  t393 = 3.2*t271*t207;
  t394 = -1.*t125*t167;
  t395 = t171*t218;
  t396 = t394 + t395;
  t397 = 3.2*t187*t396;
  t398 = 3.2*t271*t224;
  t401 = Power(t255,2);
  t402 = 6.8*t401;
  t403 = 6.8*t255*t264;
  t404 = Power(t260,2);
  t405 = 6.8*t404;
  t408 = -1.*t171*t143;
  t409 = t125*t134;
  t410 = t408 + t409;
  t411 = 6.8*t260*t410;
  t369 = -1.*t125*t364;
  t370 = t369 + t340;
  t343 = -1.*t125*t339;
  t352 = t342 + t343;
  t433 = -1.*t125*t335;
  t424 = Power(t311,2);
  t425 = 6.8*t424;
  t426 = 6.8*t311*t329;
  t427 = Power(t317,2);
  t428 = 6.8*t427;
  t429 = -1.*t171*t291;
  t430 = t125*t304;
  t431 = t429 + t430;
  t432 = 6.8*t317*t431;
  t446 = 3.2*t341*t370;
  t447 = 3.2*t352*t373;
  t448 = t171*t380;
  t449 = t433 + t448;
  t450 = 3.2*t341*t449;
  t451 = 3.2*t352*t382;
  t464 = -1.*t129;
  t465 = 1. + t464;
  t466 = 0.4*t465;
  t467 = 0.64*t129;
  t468 = t466 + t467;
  t469 = t468*t134;
  t470 = 0.24*t143*t159;
  t471 = t469 + t470;
  t473 = t143*t468;
  t474 = -0.24*t134*t159;
  t475 = t473 + t474;
  t479 = -1.*t468*t134;
  t480 = -0.24*t143*t159;
  t481 = t479 + t480;
  t472 = -1.*t471*t178;
  t476 = -1.*t167*t475;
  t477 = t472 + t476;
  t478 = 3.2*t187*t477;
  t483 = t471*t178;
  t484 = t167*t475;
  t488 = t471*t193;
  t489 = t178*t475;
  t490 = t488 + t489;
  t491 = 3.2*t490*t224;
  t500 = -0.24*t129*t134;
  t501 = t500 + t480;
  t493 = -1.*t167*t471;
  t503 = 0.24*t143*t129;
  t504 = t503 + t474;
  t495 = -1.*t475*t218;
  t458 = Power(t143,2);
  t459 = 0.11*t458;
  t460 = Power(t134,2);
  t461 = 0.11*t460;
  t462 = t459 + t461;
  t463 = 6.8*t255*t462;
  t523 = -1.*t331;
  t524 = 1. + t523;
  t525 = 0.4*t524;
  t526 = 0.64*t331;
  t527 = t525 + t526;
  t528 = t527*t304;
  t529 = 0.24*t291*t333;
  t530 = t528 + t529;
  t532 = t291*t527;
  t533 = -0.24*t304*t333;
  t534 = t532 + t533;
  t517 = Power(t291,2);
  t518 = 0.11*t517;
  t519 = Power(t304,2);
  t520 = 0.11*t519;
  t521 = t518 + t520;
  t522 = 6.8*t311*t521;
  t531 = -1.*t530*t339;
  t535 = -1.*t335*t534;
  t536 = t531 + t535;
  t538 = t530*t364;
  t539 = t339*t534;
  t540 = t538 + t539;
  t545 = -1.*t527*t304;
  t546 = -0.24*t291*t333;
  t547 = t545 + t546;
  t544 = 3.2*t341*t536;
  t549 = t530*t339;
  t550 = t335*t534;
  t554 = 3.2*t540*t382;
  t563 = -0.24*t331*t304;
  t564 = t563 + t546;
  t556 = -1.*t335*t530;
  t566 = 0.24*t291*t331;
  t567 = t566 + t533;
  t558 = -1.*t534*t380;
  t579 = 0.748*t255;
  t580 = t468*t159;
  t581 = -0.24*t129*t159;
  t582 = t580 + t581;
  t584 = t468*t129;
  t585 = Power(t159,2);
  t586 = 0.24*t585;
  t587 = t584 + t586;
  t591 = 3.2*t582*t187;
  t592 = 3.2*t587*t224;
  t612 = 0.748*t311;
  t613 = t527*t333;
  t614 = -0.24*t331*t333;
  t615 = t613 + t614;
  t617 = t527*t331;
  t618 = Power(t333,2);
  t619 = 0.24*t618;
  t620 = t617 + t619;
  t624 = 3.2*t615*t341;
  t625 = 3.2*t620*t382;
  p_output1[0]=var2[0]*(-0.5*(t261 + t267 + 6.4*t187*t271 + 6.4*t207*t284 + t322 + t330 + 6.4*t341*t352 + 6.4*t370*t373)*var2[2] - 0.5*(t210 + t227 + t261 + t267)*var2[3] - 0.5*(t210 + t227)*var2[4] - 0.5*(t322 + t330 + t377 + t383)*var2[5] - 0.5*(t377 + t383)*var2[6]);
  p_output1[1]=var2[0]*(-0.5*(3.2*t207*(-1.*t171*t193 + t270) + 3.2*Power(t271,2) + 3.2*Power(t284,2) + 3.2*Power(t352,2) + 3.2*Power(t370,2) + 3.2*(t343 - 1.*t171*t364)*t373 + 3.2*t187*(-1.*t171*t178 + t394) + t402 + t403 + t405 + t411 + t425 + t426 + t428 + t432 + 3.2*t341*(-1.*t171*t339 + t433))*var2[2] - 0.5*(t392 + t393 + t397 + t398 + t402 + t403 + t405 + t411)*var2[3] - 0.5*(t392 + t393 + t397 + t398)*var2[4] - 0.5*(t425 + t426 + t428 + t432 + t446 + t447 + t450 + t451)*var2[5] - 0.5*(t446 + t447 + t450 + t451)*var2[6]);
  p_output1[2]=var2[0]*(-0.5*(-2.88*t125 + t463 + 3.2*t284*t477 + 3.2*t271*t490 + t522 + 3.2*t370*t536 + 3.2*t352*t540)*var2[2] - 0.5*(t463 + t478 + 3.2*t187*(t193*t475 + t178*t481 + t483 + t484) + t491 + 3.2*t207*(-1.*t178*t475 - 1.*t167*t481 + t493 + t495))*var2[3] - 0.5*(t478 + t491 + 3.2*t207*(t493 + t495 - 1.*t167*t501 - 1.*t178*t504) + 3.2*t187*(t483 + t484 + t178*t501 + t193*t504))*var2[4] - 0.5*(t522 + t544 + 3.2*t341*(t364*t534 + t339*t547 + t549 + t550) + t554 + 3.2*t373*(-1.*t339*t534 - 1.*t335*t547 + t556 + t558))*var2[5] - 0.5*(t544 + t554 + 3.2*t373*(t556 + t558 - 1.*t335*t564 - 1.*t339*t567) + 3.2*t341*(t549 + t550 + t339*t564 + t364*t567))*var2[6]);
  p_output1[3]=var2[0]*(-0.5*(t579 + 3.2*t284*t582 + 3.2*t271*t587)*var2[2] - 0.5*(t579 + t591 + t592)*var2[3] - 0.5*(3.2*t187*(0.24*t129*t159 - 1.*t159*t468) + 3.2*t207*(-0.24*Power(t129,2) + t584) + t591 + t592)*var2[4]);
  p_output1[4]=var2[0]*(-0.384*t271*var2[2] - 0.384*t224*var2[3] - 0.384*t224*var2[4]);
  p_output1[5]=var2[0]*(-0.5*(t612 + 3.2*t370*t615 + 3.2*t352*t620)*var2[2] - 0.5*(t612 + t624 + t625)*var2[5] - 0.5*(3.2*t341*(0.24*t331*t333 - 1.*t333*t527) + 3.2*t373*(-0.24*Power(t331,2) + t617) + t624 + t625)*var2[6]);
  p_output1[6]=var2[0]*(-0.384*t352*var2[2] - 0.384*t382*var2[5] - 0.384*t382*var2[6]);
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

#include "Ce1_vec1_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
