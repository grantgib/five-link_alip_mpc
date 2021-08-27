/*
 * Automatically Generated from Mathematica.
 * Fri 27 Aug 2021 03:42:46 GMT-04:00
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
  double t281;
  double t260;
  double t268;
  double t284;
  double t256;
  double t276;
  double t286;
  double t292;
  double t304;
  double t311;
  double t314;
  double t316;
  double t319;
  double t361;
  double t363;
  double t364;
  double t342;
  double t347;
  double t350;
  double t352;
  double t355;
  double t368;
  double t369;
  double t371;
  double t375;
  double t382;
  double t383;
  double t385;
  double t396;
  double t404;
  double t405;
  double t406;
  double t408;
  double t409;
  double t416;
  double t431;
  double t432;
  double t436;
  double t441;
  double t469;
  double t470;
  double t471;
  double t474;
  double t475;
  double t476;
  double t480;
  double t488;
  double t489;
  double t490;
  double t301;
  double t318;
  double t324;
  double t325;
  double t327;
  double t331;
  double t340;
  double t387;
  double t388;
  double t390;
  double t481;
  double t485;
  double t486;
  double t492;
  double t493;
  double t498;
  double t499;
  double t502;
  double t504;
  double t506;
  double t516;
  double t517;
  double t526;
  double t419;
  double t420;
  double t421;
  double t422;
  double t539;
  double t540;
  double t541;
  double t442;
  double t446;
  double t589;
  double t590;
  double t591;
  double t399;
  double t400;
  double t531;
  double t534;
  double t542;
  double t543;
  double t411;
  double t414;
  double t424;
  double t448;
  double t449;
  double t451;
  double t452;
  double t453;
  double t454;
  double t545;
  double t546;
  double t547;
  double t549;
  double t550;
  double t551;
  double t552;
  double t588;
  double t592;
  double t593;
  double t594;
  double t595;
  double t596;
  double t597;
  double t558;
  double t560;
  double t457;
  double t461;
  double t478;
  double t562;
  double t563;
  double t565;
  double t566;
  double t567;
  double t572;
  double t575;
  double t622;
  double t587;
  double t598;
  double t615;
  double t616;
  double t618;
  double t619;
  double t623;
  double t624;
  double t625;
  double t627;
  double t644;
  double t645;
  double t661;
  double t662;
  double t663;
  double t664;
  double t665;
  double t666;
  double t670;
  double t671;
  double t672;
  double t673;
  double t675;
  double t676;
  double t599;
  double t604;
  double t628;
  double t629;
  double t631;
  double t632;
  double t633;
  double t634;
  double t635;
  double t636;
  double t647;
  double t648;
  t281 = Cos(var1[2]);
  t260 = Cos(var1[5]);
  t268 = Sin(var1[2]);
  t284 = Sin(var1[5]);
  t256 = Cos(var1[6]);
  t276 = -1.*t260*t268;
  t286 = -1.*t281*t284;
  t292 = t276 + t286;
  t304 = t281*t260;
  t311 = -1.*t268*t284;
  t314 = t304 + t311;
  t316 = Sin(var1[6]);
  t319 = t256*t292;
  t361 = -1.*t281*t260;
  t363 = t268*t284;
  t364 = t361 + t363;
  t342 = -1.*t256;
  t347 = 1. + t342;
  t350 = 0.4*t347;
  t352 = 0. + t350;
  t355 = t352*t292;
  t368 = -0.4*t316;
  t369 = 0. + t368;
  t371 = t364*t369;
  t375 = t364*t316;
  t382 = t319 + t375;
  t383 = 0.64*t382;
  t385 = t355 + t371 + t383;
  t396 = -1.*var3[2];
  t404 = Cos(var1[3]);
  t405 = t281*t404;
  t406 = Sin(var1[3]);
  t408 = -1.*t268*t406;
  t409 = t405 + t408;
  t416 = Cos(var1[4]);
  t431 = -1.*t404*t268;
  t432 = -1.*t281*t406;
  t436 = t431 + t432;
  t441 = Sin(var1[4]);
  t469 = t352*t314;
  t470 = t292*t369;
  t471 = t256*t314;
  t474 = t292*t316;
  t475 = t471 + t474;
  t476 = 0.64*t475;
  t480 = t469 + t470 + t476;
  t488 = t260*t268;
  t489 = t281*t284;
  t490 = t488 + t489;
  t301 = -0.4*t256*t292;
  t318 = 0.4*t314*t316;
  t324 = -1.*t314*t316;
  t325 = t319 + t324;
  t327 = 0.64*t325;
  t331 = t301 + t318 + t327;
  t340 = var2[6]*t331;
  t387 = var2[2]*t385;
  t388 = var2[5]*t385;
  t390 = var2[1] + t340 + t387 + t388;
  t481 = var2[2]*t480;
  t485 = var2[5]*t480;
  t486 = -0.4*t256*t314;
  t492 = 0.4*t490*t316;
  t493 = -1.*t490*t316;
  t498 = t471 + t493;
  t499 = 0.64*t498;
  t502 = t486 + t492 + t499;
  t504 = var2[6]*t502;
  t506 = var2[0] + t481 + t485 + t504;
  t516 = -1.*var3[1];
  t517 = 0. + t516;
  t526 = -1.*var3[0];
  t419 = -1.*t416;
  t420 = 1. + t419;
  t421 = 0.4*t420;
  t422 = 0. + t421;
  t539 = t404*t268;
  t540 = t281*t406;
  t541 = t539 + t540;
  t442 = -0.4*t441;
  t446 = 0. + t442;
  t589 = -1.*t281*t404;
  t590 = t268*t406;
  t591 = t589 + t590;
  t399 = 0.24*t281;
  t400 = t396 + var1[1] + t399;
  t531 = 0.24*t268;
  t534 = t526 + var1[0] + t531;
  t542 = 0.11*t541;
  t543 = t526 + var1[0] + t542;
  t411 = 0.11*t409;
  t414 = t396 + var1[1] + t411;
  t424 = t422*t409;
  t448 = t436*t446;
  t449 = t416*t409;
  t451 = t436*t441;
  t452 = t449 + t451;
  t453 = 0.64*t452;
  t454 = 0. + t396 + var1[1] + t424 + t448 + t453;
  t545 = t422*t541;
  t546 = t409*t446;
  t547 = t416*t541;
  t549 = t409*t441;
  t550 = t547 + t549;
  t551 = 0.64*t550;
  t552 = 0. + t526 + var1[0] + t545 + t546 + t551;
  t588 = t422*t436;
  t592 = t591*t446;
  t593 = t416*t436;
  t594 = t591*t441;
  t595 = t593 + t594;
  t596 = 0.64*t595;
  t597 = t588 + t592 + t596;
  t558 = 0.11*t490;
  t560 = t526 + var1[0] + t558;
  t457 = 0.11*t314;
  t461 = t396 + var1[1] + t457;
  t478 = 0. + t396 + var1[1] + t469 + t470 + t476;
  t562 = t352*t490;
  t563 = t314*t369;
  t565 = t256*t490;
  t566 = t314*t316;
  t567 = t565 + t566;
  t572 = 0.64*t567;
  t575 = 0. + t526 + var1[0] + t562 + t563 + t572;
  t622 = t424 + t448 + t453;
  t587 = 0.748*t517*t436;
  t598 = 3.2*t517*t597;
  t615 = -0.11*t436*t543;
  t616 = 0.11*t409*t414;
  t618 = t615 + t616;
  t619 = 6.8*t618;
  t623 = t622*t454;
  t624 = -1.*t552*t597;
  t625 = t623 + t624;
  t627 = 3.2*t625;
  t644 = -0.748*t517*t409;
  t645 = -3.2*t517*t622;
  t661 = -0.4*t416*t436;
  t662 = 0.4*t409*t441;
  t663 = -1.*t409*t441;
  t664 = t593 + t663;
  t665 = 0.64*t664;
  t666 = t661 + t662 + t665;
  t670 = -0.4*t416*t409;
  t671 = 0.4*t541*t441;
  t672 = -1.*t541*t441;
  t673 = t449 + t672;
  t675 = 0.64*t673;
  t676 = t670 + t671 + t675;
  t599 = 0.748*t517*t292;
  t604 = 3.2*t517*t385;
  t628 = -0.11*t292*t560;
  t629 = 0.11*t314*t461;
  t631 = t628 + t629;
  t632 = 6.8*t631;
  t633 = t480*t478;
  t634 = -1.*t575*t385;
  t635 = t633 + t634;
  t636 = 3.2*t635;
  t647 = -0.748*t517*t314;
  t648 = -3.2*t517*t480;
  p_output1[0]=-3.2*t390*var4[1];
  p_output1[1]=12.*t400 + 6.8*t414 + 3.2*t454 + 6.8*t461 + 3.2*t478 + 3.2*(t390*var4[0] - 1.*t506*var4[2]);
  p_output1[2]=-32.*t517 + 3.2*t506*var4[1];
  p_output1[3]=32.*t517 - 3.2*t390*var4[4];
  p_output1[4]=-12.*t534 - 6.8*t543 - 3.2*t552 - 6.8*t560 - 3.2*t575 + 3.2*(t390*var4[3] - 1.*t506*var4[5]);
  p_output1[5]=3.2*t506*var4[4];
  p_output1[6]=-2.88*t268*t517 + t587 + t598 + t599 + t604 - 3.2*t390*var4[7];
  p_output1[7]=2.67 + 12.*(0.24*t281*t400 + 0.24*t268*t534) + t619 + t627 + t632 + t636 + 3.2*(t390*var4[6] - 1.*t506*var4[8]);
  p_output1[8]=-2.88*t281*t517 + t644 + t645 + t647 + t648 + 3.2*t506*var4[7];
  p_output1[9]=t587 + t598 - 3.2*t390*var4[10];
  p_output1[10]=0.6699999999999999 + t619 + t627 + 3.2*(t390*var4[9] - 1.*t506*var4[11]);
  p_output1[11]=t644 + t645 + 3.2*t506*var4[10];
  p_output1[12]=3.2*t517*t666 - 3.2*t390*var4[13];
  p_output1[13]=0.2 + 3.2*(-1.*t552*t666 + t454*t676) + 3.2*(t390*var4[12] - 1.*t506*var4[14]);
  p_output1[14]=-3.2*t517*t676 + 3.2*t506*var4[13];
  p_output1[15]=t599 + t604 - 3.2*t390*var4[16];
  p_output1[16]=0.6699999999999999 + t632 + t636 + 3.2*(t390*var4[15] - 1.*t506*var4[17]);
  p_output1[17]=t647 + t648 + 3.2*t506*var4[16];
  p_output1[18]=3.2*t331*t517 - 3.2*t390*var4[19];
  p_output1[19]=0.2 + 3.2*(t478*t502 - 1.*t331*t575) + 3.2*(t390*var4[18] - 1.*t506*var4[20]);
  p_output1[20]=-3.2*t502*t517 + 3.2*t506*var4[19];
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

#include "dLdqdot_world_reference_point_src.hh"

namespace SymExpression
{

void dLdqdot_world_reference_point_src_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
