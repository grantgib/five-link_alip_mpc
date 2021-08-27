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
  double t319;
  double t301;
  double t304;
  double t325;
  double t292;
  double t318;
  double t327;
  double t340;
  double t352;
  double t355;
  double t363;
  double t364;
  double t369;
  double t411;
  double t414;
  double t415;
  double t388;
  double t392;
  double t399;
  double t403;
  double t405;
  double t421;
  double t422;
  double t424;
  double t436;
  double t442;
  double t446;
  double t448;
  double t456;
  double t469;
  double t470;
  double t471;
  double t474;
  double t475;
  double t481;
  double t498;
  double t499;
  double t504;
  double t508;
  double t536;
  double t539;
  double t540;
  double t542;
  double t543;
  double t544;
  double t547;
  double t554;
  double t558;
  double t560;
  double t350;
  double t368;
  double t371;
  double t375;
  double t382;
  double t383;
  double t387;
  double t449;
  double t451;
  double t452;
  double t549;
  double t550;
  double t551;
  double t561;
  double t562;
  double t563;
  double t565;
  double t566;
  double t567;
  double t572;
  double t582;
  double t583;
  double t593;
  double t485;
  double t486;
  double t488;
  double t489;
  double t598;
  double t599;
  double t604;
  double t510;
  double t511;
  double t649;
  double t650;
  double t652;
  double t457;
  double t461;
  double t594;
  double t595;
  double t605;
  double t609;
  double t476;
  double t479;
  double t492;
  double t514;
  double t515;
  double t517;
  double t518;
  double t519;
  double t520;
  double t612;
  double t613;
  double t614;
  double t615;
  double t616;
  double t618;
  double t619;
  double t648;
  double t653;
  double t654;
  double t655;
  double t656;
  double t657;
  double t658;
  double t623;
  double t625;
  double t523;
  double t525;
  double t545;
  double t628;
  double t629;
  double t631;
  double t632;
  double t633;
  double t635;
  double t636;
  double t677;
  double t647;
  double t659;
  double t670;
  double t671;
  double t673;
  double t675;
  double t678;
  double t679;
  double t680;
  double t682;
  double t698;
  double t700;
  double t714;
  double t715;
  double t716;
  double t717;
  double t718;
  double t719;
  double t723;
  double t724;
  double t725;
  double t726;
  double t727;
  double t728;
  double t660;
  double t661;
  double t683;
  double t684;
  double t685;
  double t686;
  double t687;
  double t688;
  double t689;
  double t690;
  double t701;
  double t702;
  t319 = Cos(var1[2]);
  t301 = Cos(var1[5]);
  t304 = Sin(var1[2]);
  t325 = Sin(var1[5]);
  t292 = Cos(var1[6]);
  t318 = -1.*t301*t304;
  t327 = -1.*t319*t325;
  t340 = t318 + t327;
  t352 = t319*t301;
  t355 = -1.*t304*t325;
  t363 = t352 + t355;
  t364 = Sin(var1[6]);
  t369 = t292*t340;
  t411 = -1.*t319*t301;
  t414 = t304*t325;
  t415 = t411 + t414;
  t388 = -1.*t292;
  t392 = 1. + t388;
  t399 = 0.4*t392;
  t403 = 0. + t399;
  t405 = t403*t340;
  t421 = -0.4*t364;
  t422 = 0. + t421;
  t424 = t415*t422;
  t436 = t415*t364;
  t442 = t369 + t436;
  t446 = 0.64*t442;
  t448 = t405 + t424 + t446;
  t456 = -1.*var3[2];
  t469 = Cos(var1[3]);
  t470 = t319*t469;
  t471 = Sin(var1[3]);
  t474 = -1.*t304*t471;
  t475 = t470 + t474;
  t481 = Cos(var1[4]);
  t498 = -1.*t469*t304;
  t499 = -1.*t319*t471;
  t504 = t498 + t499;
  t508 = Sin(var1[4]);
  t536 = t403*t363;
  t539 = t340*t422;
  t540 = t292*t363;
  t542 = t340*t364;
  t543 = t540 + t542;
  t544 = 0.64*t543;
  t547 = t536 + t539 + t544;
  t554 = t301*t304;
  t558 = t319*t325;
  t560 = t554 + t558;
  t350 = -0.4*t292*t340;
  t368 = 0.4*t363*t364;
  t371 = -1.*t363*t364;
  t375 = t369 + t371;
  t382 = 0.64*t375;
  t383 = t350 + t368 + t382;
  t387 = var2[6]*t383;
  t449 = var2[2]*t448;
  t451 = var2[5]*t448;
  t452 = var2[1] + t387 + t449 + t451;
  t549 = var2[2]*t547;
  t550 = var2[5]*t547;
  t551 = -0.4*t292*t363;
  t561 = 0.4*t560*t364;
  t562 = -1.*t560*t364;
  t563 = t540 + t562;
  t565 = 0.64*t563;
  t566 = t551 + t561 + t565;
  t567 = var2[6]*t566;
  t572 = var2[0] + t549 + t550 + t567;
  t582 = -1.*var3[1];
  t583 = 0. + t582;
  t593 = -1.*var3[0];
  t485 = -1.*t481;
  t486 = 1. + t485;
  t488 = 0.4*t486;
  t489 = 0. + t488;
  t598 = t469*t304;
  t599 = t319*t471;
  t604 = t598 + t599;
  t510 = -0.4*t508;
  t511 = 0. + t510;
  t649 = -1.*t319*t469;
  t650 = t304*t471;
  t652 = t649 + t650;
  t457 = 0.24*t319;
  t461 = t456 + var1[1] + t457;
  t594 = 0.24*t304;
  t595 = t593 + var1[0] + t594;
  t605 = 0.11*t604;
  t609 = t593 + var1[0] + t605;
  t476 = 0.11*t475;
  t479 = t456 + var1[1] + t476;
  t492 = t489*t475;
  t514 = t504*t511;
  t515 = t481*t475;
  t517 = t504*t508;
  t518 = t515 + t517;
  t519 = 0.64*t518;
  t520 = 0. + t456 + var1[1] + t492 + t514 + t519;
  t612 = t489*t604;
  t613 = t475*t511;
  t614 = t481*t604;
  t615 = t475*t508;
  t616 = t614 + t615;
  t618 = 0.64*t616;
  t619 = 0. + t593 + var1[0] + t612 + t613 + t618;
  t648 = t489*t504;
  t653 = t652*t511;
  t654 = t481*t504;
  t655 = t652*t508;
  t656 = t654 + t655;
  t657 = 0.64*t656;
  t658 = t648 + t653 + t657;
  t623 = 0.11*t560;
  t625 = t593 + var1[0] + t623;
  t523 = 0.11*t363;
  t525 = t456 + var1[1] + t523;
  t545 = 0. + t456 + var1[1] + t536 + t539 + t544;
  t628 = t403*t560;
  t629 = t363*t422;
  t631 = t292*t560;
  t632 = t363*t364;
  t633 = t631 + t632;
  t635 = 0.64*t633;
  t636 = 0. + t593 + var1[0] + t628 + t629 + t635;
  t677 = t492 + t514 + t519;
  t647 = 0.748*t583*t504;
  t659 = 3.2*t583*t658;
  t670 = -0.11*t504*t609;
  t671 = 0.11*t475*t479;
  t673 = t670 + t671;
  t675 = 6.8*t673;
  t678 = t677*t520;
  t679 = -1.*t619*t658;
  t680 = t678 + t679;
  t682 = 3.2*t680;
  t698 = -0.748*t583*t475;
  t700 = -3.2*t583*t677;
  t714 = -0.4*t481*t504;
  t715 = 0.4*t475*t508;
  t716 = -1.*t475*t508;
  t717 = t654 + t716;
  t718 = 0.64*t717;
  t719 = t714 + t715 + t718;
  t723 = -0.4*t481*t475;
  t724 = 0.4*t604*t508;
  t725 = -1.*t604*t508;
  t726 = t515 + t725;
  t727 = 0.64*t726;
  t728 = t723 + t724 + t727;
  t660 = 0.748*t583*t340;
  t661 = 3.2*t583*t448;
  t683 = -0.11*t340*t625;
  t684 = 0.11*t363*t525;
  t685 = t683 + t684;
  t686 = 6.8*t685;
  t687 = t547*t545;
  t688 = -1.*t636*t448;
  t689 = t687 + t688;
  t690 = 3.2*t689;
  t701 = -0.748*t583*t363;
  t702 = -3.2*t583*t547;
  p_output1[0]=-3.2*t452*var4[1];
  p_output1[1]=12.*t461 + 6.8*t479 + 3.2*t520 + 6.8*t525 + 3.2*t545 + 3.2*(t452*var4[0] - 1.*t572*var4[2]);
  p_output1[2]=-32.*t583 + 3.2*t572*var4[1];
  p_output1[3]=32.*t583 - 3.2*t452*var4[4];
  p_output1[4]=-12.*t595 - 6.8*t609 - 3.2*t619 - 6.8*t625 - 3.2*t636 + 3.2*(t452*var4[3] - 1.*t572*var4[5]);
  p_output1[5]=3.2*t572*var4[4];
  p_output1[6]=-2.88*t304*t583 + t647 + t659 + t660 + t661 - 3.2*t452*var4[7];
  p_output1[7]=2.67 + 12.*(0.24*t319*t461 + 0.24*t304*t595) + t675 + t682 + t686 + t690 + 3.2*(t452*var4[6] - 1.*t572*var4[8]);
  p_output1[8]=-2.88*t319*t583 + t698 + t700 + t701 + t702 + 3.2*t572*var4[7];
  p_output1[9]=t647 + t659 - 3.2*t452*var4[10];
  p_output1[10]=0.6699999999999999 + t675 + t682 + 3.2*(t452*var4[9] - 1.*t572*var4[11]);
  p_output1[11]=t698 + t700 + 3.2*t572*var4[10];
  p_output1[12]=3.2*t583*t719 - 3.2*t452*var4[13];
  p_output1[13]=0.2 + 3.2*(-1.*t619*t719 + t520*t728) + 3.2*(t452*var4[12] - 1.*t572*var4[14]);
  p_output1[14]=-3.2*t583*t728 + 3.2*t572*var4[13];
  p_output1[15]=t660 + t661 - 3.2*t452*var4[16];
  p_output1[16]=0.6699999999999999 + t686 + t690 + 3.2*(t452*var4[15] - 1.*t572*var4[17]);
  p_output1[17]=t701 + t702 + 3.2*t572*var4[16];
  p_output1[18]=3.2*t383*t583 - 3.2*t452*var4[19];
  p_output1[19]=0.2 + 3.2*(t545*t566 - 1.*t383*t636) + 3.2*(t452*var4[18] - 1.*t572*var4[20]);
  p_output1[20]=-3.2*t566*t583 + 3.2*t572*var4[19];
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

#include "dLdqdot_world_reference_point.hh"

namespace SymExpression
{

void dLdqdot_world_reference_point_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
