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
  double t244;
  double t229;
  double t236;
  double t245;
  double t216;
  double t240;
  double t250;
  double t256;
  double t268;
  double t272;
  double t273;
  double t275;
  double t281;
  double t312;
  double t314;
  double t316;
  double t294;
  double t300;
  double t301;
  double t304;
  double t311;
  double t318;
  double t319;
  double t324;
  double t325;
  double t327;
  double t331;
  double t334;
  double t348;
  double t353;
  double t355;
  double t356;
  double t358;
  double t360;
  double t365;
  double t373;
  double t374;
  double t375;
  double t377;
  double t404;
  double t405;
  double t406;
  double t408;
  double t409;
  double t411;
  double t415;
  double t421;
  double t422;
  double t423;
  double t260;
  double t276;
  double t282;
  double t284;
  double t286;
  double t288;
  double t292;
  double t340;
  double t342;
  double t343;
  double t416;
  double t419;
  double t420;
  double t424;
  double t426;
  double t431;
  double t432;
  double t434;
  double t436;
  double t438;
  double t450;
  double t451;
  double t464;
  double t366;
  double t367;
  double t368;
  double t369;
  double t470;
  double t471;
  double t473;
  double t382;
  double t383;
  double t521;
  double t522;
  double t523;
  double t350;
  double t351;
  double t465;
  double t468;
  double t474;
  double t475;
  double t361;
  double t363;
  double t371;
  double t385;
  double t387;
  double t388;
  double t390;
  double t392;
  double t393;
  double t478;
  double t479;
  double t480;
  double t481;
  double t485;
  double t486;
  double t487;
  double t520;
  double t525;
  double t526;
  double t531;
  double t534;
  double t536;
  double t537;
  double t489;
  double t490;
  double t399;
  double t400;
  double t413;
  double t493;
  double t498;
  double t499;
  double t502;
  double t504;
  double t506;
  double t507;
  double t554;
  double t519;
  double t539;
  double t549;
  double t550;
  double t551;
  double t552;
  double t558;
  double t559;
  double t560;
  double t561;
  double t583;
  double t584;
  double t604;
  double t605;
  double t607;
  double t609;
  double t610;
  double t611;
  double t615;
  double t616;
  double t617;
  double t618;
  double t619;
  double t620;
  double t540;
  double t541;
  double t562;
  double t563;
  double t565;
  double t566;
  double t567;
  double t571;
  double t572;
  double t575;
  double t587;
  double t588;
  t244 = Cos(var1[2]);
  t229 = Cos(var1[5]);
  t236 = Sin(var1[2]);
  t245 = Sin(var1[5]);
  t216 = Cos(var1[6]);
  t240 = -1.*t229*t236;
  t250 = -1.*t244*t245;
  t256 = t240 + t250;
  t268 = t244*t229;
  t272 = -1.*t236*t245;
  t273 = t268 + t272;
  t275 = Sin(var1[6]);
  t281 = t216*t256;
  t312 = -1.*t244*t229;
  t314 = t236*t245;
  t316 = t312 + t314;
  t294 = -1.*t216;
  t300 = 1. + t294;
  t301 = 0.4*t300;
  t304 = 0. + t301;
  t311 = t304*t256;
  t318 = -0.4*t275;
  t319 = 0. + t318;
  t324 = t316*t319;
  t325 = t316*t275;
  t327 = t281 + t325;
  t331 = 0.64*t327;
  t334 = t311 + t324 + t331;
  t348 = -1.*var3[2];
  t353 = Cos(var1[3]);
  t355 = t244*t353;
  t356 = Sin(var1[3]);
  t358 = -1.*t236*t356;
  t360 = t355 + t358;
  t365 = Cos(var1[4]);
  t373 = -1.*t353*t236;
  t374 = -1.*t244*t356;
  t375 = t373 + t374;
  t377 = Sin(var1[4]);
  t404 = t304*t273;
  t405 = t256*t319;
  t406 = t216*t273;
  t408 = t256*t275;
  t409 = t406 + t408;
  t411 = 0.64*t409;
  t415 = t404 + t405 + t411;
  t421 = t229*t236;
  t422 = t244*t245;
  t423 = t421 + t422;
  t260 = -0.4*t216*t256;
  t276 = 0.4*t273*t275;
  t282 = -1.*t273*t275;
  t284 = t281 + t282;
  t286 = 0.64*t284;
  t288 = t260 + t276 + t286;
  t292 = var2[6]*t288;
  t340 = var2[2]*t334;
  t342 = var2[5]*t334;
  t343 = var2[1] + t292 + t340 + t342;
  t416 = var2[2]*t415;
  t419 = var2[5]*t415;
  t420 = -0.4*t216*t273;
  t424 = 0.4*t423*t275;
  t426 = -1.*t423*t275;
  t431 = t406 + t426;
  t432 = 0.64*t431;
  t434 = t420 + t424 + t432;
  t436 = var2[6]*t434;
  t438 = var2[0] + t416 + t419 + t436;
  t450 = -1.*var3[1];
  t451 = 0. + t450;
  t464 = -1.*var3[0];
  t366 = -1.*t365;
  t367 = 1. + t366;
  t368 = 0.4*t367;
  t369 = 0. + t368;
  t470 = t353*t236;
  t471 = t244*t356;
  t473 = t470 + t471;
  t382 = -0.4*t377;
  t383 = 0. + t382;
  t521 = -1.*t244*t353;
  t522 = t236*t356;
  t523 = t521 + t522;
  t350 = 0.24*t244;
  t351 = t348 + var1[1] + t350;
  t465 = 0.24*t236;
  t468 = t464 + var1[0] + t465;
  t474 = 0.11*t473;
  t475 = t464 + var1[0] + t474;
  t361 = 0.11*t360;
  t363 = t348 + var1[1] + t361;
  t371 = t369*t360;
  t385 = t375*t383;
  t387 = t365*t360;
  t388 = t375*t377;
  t390 = t387 + t388;
  t392 = 0.64*t390;
  t393 = 0. + t348 + var1[1] + t371 + t385 + t392;
  t478 = t369*t473;
  t479 = t360*t383;
  t480 = t365*t473;
  t481 = t360*t377;
  t485 = t480 + t481;
  t486 = 0.64*t485;
  t487 = 0. + t464 + var1[0] + t478 + t479 + t486;
  t520 = t369*t375;
  t525 = t523*t383;
  t526 = t365*t375;
  t531 = t523*t377;
  t534 = t526 + t531;
  t536 = 0.64*t534;
  t537 = t520 + t525 + t536;
  t489 = 0.11*t423;
  t490 = t464 + var1[0] + t489;
  t399 = 0.11*t273;
  t400 = t348 + var1[1] + t399;
  t413 = 0. + t348 + var1[1] + t404 + t405 + t411;
  t493 = t304*t423;
  t498 = t273*t319;
  t499 = t216*t423;
  t502 = t273*t275;
  t504 = t499 + t502;
  t506 = 0.64*t504;
  t507 = 0. + t464 + var1[0] + t493 + t498 + t506;
  t554 = t371 + t385 + t392;
  t519 = 0.748*t451*t375;
  t539 = 3.2*t451*t537;
  t549 = -0.11*t375*t475;
  t550 = 0.11*t360*t363;
  t551 = t549 + t550;
  t552 = 6.8*t551;
  t558 = t554*t393;
  t559 = -1.*t487*t537;
  t560 = t558 + t559;
  t561 = 3.2*t560;
  t583 = -0.748*t451*t360;
  t584 = -3.2*t451*t554;
  t604 = -0.4*t365*t375;
  t605 = 0.4*t360*t377;
  t607 = -1.*t360*t377;
  t609 = t526 + t607;
  t610 = 0.64*t609;
  t611 = t604 + t605 + t610;
  t615 = -0.4*t365*t360;
  t616 = 0.4*t473*t377;
  t617 = -1.*t473*t377;
  t618 = t387 + t617;
  t619 = 0.64*t618;
  t620 = t615 + t616 + t619;
  t540 = 0.748*t451*t256;
  t541 = 3.2*t451*t334;
  t562 = -0.11*t256*t490;
  t563 = 0.11*t273*t400;
  t565 = t562 + t563;
  t566 = 6.8*t565;
  t567 = t415*t413;
  t571 = -1.*t507*t334;
  t572 = t567 + t571;
  t575 = 3.2*t572;
  t587 = -0.748*t451*t273;
  t588 = -3.2*t451*t415;
  p_output1[0]=-3.2*t343*var4[1];
  p_output1[1]=12.*t351 + 6.8*t363 + 3.2*t393 + 6.8*t400 + 3.2*t413 + 3.2*(t343*var4[0] - 1.*t438*var4[2]);
  p_output1[2]=-32.*t451 + 3.2*t438*var4[1];
  p_output1[3]=32.*t451 - 3.2*t343*var4[4];
  p_output1[4]=-12.*t468 - 6.8*t475 - 3.2*t487 - 6.8*t490 - 3.2*t507 + 3.2*(t343*var4[3] - 1.*t438*var4[5]);
  p_output1[5]=3.2*t438*var4[4];
  p_output1[6]=-2.88*t236*t451 + t519 + t539 + t540 + t541 - 3.2*t343*var4[7];
  p_output1[7]=2.67 + 12.*(0.24*t244*t351 + 0.24*t236*t468) + t552 + t561 + t566 + t575 + 3.2*(t343*var4[6] - 1.*t438*var4[8]);
  p_output1[8]=-2.88*t244*t451 + t583 + t584 + t587 + t588 + 3.2*t438*var4[7];
  p_output1[9]=t519 + t539 - 3.2*t343*var4[10];
  p_output1[10]=0.6699999999999999 + t552 + t561 + 3.2*(t343*var4[9] - 1.*t438*var4[11]);
  p_output1[11]=t583 + t584 + 3.2*t438*var4[10];
  p_output1[12]=3.2*t451*t611 - 3.2*t343*var4[13];
  p_output1[13]=0.2 + 3.2*(-1.*t487*t611 + t393*t620) + 3.2*(t343*var4[12] - 1.*t438*var4[14]);
  p_output1[14]=-3.2*t451*t620 + 3.2*t438*var4[13];
  p_output1[15]=t540 + t541 - 3.2*t343*var4[16];
  p_output1[16]=0.6699999999999999 + t566 + t575 + 3.2*(t343*var4[15] - 1.*t438*var4[17]);
  p_output1[17]=t587 + t588 + 3.2*t438*var4[16];
  p_output1[18]=3.2*t288*t451 - 3.2*t343*var4[19];
  p_output1[19]=0.2 + 3.2*(t413*t434 - 1.*t288*t507) + 3.2*(t343*var4[18] - 1.*t438*var4[20]);
  p_output1[20]=-3.2*t434*t451 + 3.2*t438*var4[19];
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

#include "dLdqdot_world_reference_point_mex.hh"

namespace SymExpression
{

void dLdqdot_world_reference_point_mex_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
