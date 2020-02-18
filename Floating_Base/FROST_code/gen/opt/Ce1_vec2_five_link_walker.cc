/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:18 GMT-05:00
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
  double t272;
  double t239;
  double t268;
  double t290;
  double t238;
  double t376;
  double t384;
  double t385;
  double t386;
  double t389;
  double t269;
  double t353;
  double t374;
  double t391;
  double t399;
  double t400;
  double t375;
  double t390;
  double t415;
  double t416;
  double t417;
  double t423;
  double t434;
  double t435;
  double t444;
  double t445;
  double t452;
  double t485;
  double t486;
  double t487;
  double t412;
  double t413;
  double t414;
  double t418;
  double t419;
  double t420;
  double t421;
  double t422;
  double t436;
  double t437;
  double t438;
  double t439;
  double t440;
  double t441;
  double t453;
  double t454;
  double t455;
  double t456;
  double t457;
  double t482;
  double t492;
  double t494;
  double t496;
  double t497;
  double t498;
  double t499;
  double t516;
  double t537;
  double t541;
  double t542;
  double t543;
  double t559;
  double t560;
  double t561;
  double t572;
  double t574;
  double t573;
  double t575;
  double t576;
  double t578;
  double t583;
  double t588;
  double t594;
  double t597;
  double t598;
  double t599;
  double t605;
  double t593;
  double t595;
  double t600;
  double t601;
  double t604;
  double t606;
  double t611;
  double t616;
  double t621;
  double t577;
  double t629;
  double t630;
  double t631;
  double t548;
  double t551;
  double t552;
  double t553;
  double t555;
  double t557;
  double t562;
  double t565;
  double t568;
  double t569;
  double t570;
  double t571;
  double t627;
  double t628;
  double t632;
  double t633;
  double t634;
  double t635;
  double t636;
  double t637;
  double t644;
  double t645;
  double t648;
  double t649;
  double t506;
  double t507;
  double t513;
  double t514;
  double t589;
  double t590;
  double t609;
  double t610;
  double t654;
  double t655;
  double t660;
  double t661;
  double t674;
  double t675;
  double t676;
  double t677;
  double t678;
  double t679;
  double t680;
  double t681;
  double t683;
  double t684;
  double t685;
  double t689;
  double t690;
  double t691;
  double t682;
  double t686;
  double t687;
  double t688;
  double t693;
  double t694;
  double t698;
  double t699;
  double t700;
  double t701;
  double t710;
  double t711;
  double t703;
  double t713;
  double t714;
  double t705;
  double t668;
  double t669;
  double t670;
  double t671;
  double t672;
  double t673;
  double t733;
  double t734;
  double t735;
  double t736;
  double t737;
  double t738;
  double t739;
  double t740;
  double t742;
  double t743;
  double t744;
  double t727;
  double t728;
  double t729;
  double t730;
  double t731;
  double t732;
  double t741;
  double t745;
  double t746;
  double t748;
  double t749;
  double t750;
  double t755;
  double t756;
  double t757;
  double t754;
  double t759;
  double t760;
  double t764;
  double t773;
  double t774;
  double t766;
  double t776;
  double t777;
  double t768;
  double t789;
  double t795;
  double t796;
  double t797;
  double t790;
  double t791;
  double t792;
  double t793;
  double t801;
  double t802;
  double t822;
  double t828;
  double t829;
  double t830;
  double t823;
  double t824;
  double t825;
  double t826;
  double t834;
  double t835;
  t272 = Cos(var1[3]);
  t239 = Cos(var1[4]);
  t268 = Sin(var1[3]);
  t290 = Sin(var1[4]);
  t238 = Sin(var1[2]);
  t376 = Cos(var1[2]);
  t384 = t272*t239;
  t385 = -1.*t268*t290;
  t386 = t384 + t385;
  t389 = t376*t386;
  t269 = -1.*t239*t268;
  t353 = -1.*t272*t290;
  t374 = t269 + t353;
  t391 = t239*t268;
  t399 = t272*t290;
  t400 = t391 + t399;
  t375 = t238*t374;
  t390 = t375 + t389;
  t415 = t376*t374;
  t416 = -1.*t238*t386;
  t417 = t415 + t416;
  t423 = -1.*t272*t239;
  t434 = t268*t290;
  t435 = t423 + t434;
  t444 = -1.*t272*t238;
  t445 = -1.*t376*t268;
  t452 = t444 + t445;
  t485 = t376*t272;
  t486 = -1.*t238*t268;
  t487 = t485 + t486;
  t412 = -1.*t238*t400;
  t413 = t412 + t389;
  t414 = 3.2*t390*t413;
  t418 = t376*t400;
  t419 = t238*t386;
  t420 = t418 + t419;
  t421 = 3.2*t417*t420;
  t422 = -1.*t238*t374;
  t436 = t376*t435;
  t437 = t422 + t436;
  t438 = 3.2*t390*t437;
  t439 = t238*t435;
  t440 = t415 + t439;
  t441 = 3.2*t417*t440;
  t453 = Power(t452,2);
  t454 = 6.8*t453;
  t455 = t272*t238;
  t456 = t376*t268;
  t457 = t455 + t456;
  t482 = 6.8*t452*t457;
  t492 = Power(t487,2);
  t494 = 6.8*t492;
  t496 = -1.*t376*t272;
  t497 = t238*t268;
  t498 = t496 + t497;
  t499 = 6.8*t487*t498;
  t516 = Cos(var1[5]);
  t537 = -1.*t516*t238;
  t541 = Sin(var1[5]);
  t542 = -1.*t376*t541;
  t543 = t537 + t542;
  t559 = t376*t516;
  t560 = -1.*t238*t541;
  t561 = t559 + t560;
  t572 = Cos(var1[6]);
  t574 = Sin(var1[6]);
  t573 = -1.*t572*t541;
  t575 = -1.*t516*t574;
  t576 = t573 + t575;
  t578 = t516*t572;
  t583 = -1.*t541*t574;
  t588 = t578 + t583;
  t594 = t376*t588;
  t597 = t572*t541;
  t598 = t516*t574;
  t599 = t597 + t598;
  t605 = -1.*t238*t588;
  t593 = t238*t576;
  t595 = t593 + t594;
  t600 = -1.*t238*t599;
  t601 = t600 + t594;
  t604 = t376*t576;
  t606 = t604 + t605;
  t611 = t376*t599;
  t616 = t238*t588;
  t621 = t611 + t616;
  t577 = -1.*t238*t576;
  t629 = -1.*t516*t572;
  t630 = t541*t574;
  t631 = t629 + t630;
  t548 = Power(t543,2);
  t551 = 6.8*t548;
  t552 = t516*t238;
  t553 = t376*t541;
  t555 = t552 + t553;
  t557 = 6.8*t543*t555;
  t562 = Power(t561,2);
  t565 = 6.8*t562;
  t568 = -1.*t376*t516;
  t569 = t238*t541;
  t570 = t568 + t569;
  t571 = 6.8*t561*t570;
  t627 = 3.2*t595*t601;
  t628 = 3.2*t606*t621;
  t632 = t376*t631;
  t633 = t577 + t632;
  t634 = 3.2*t595*t633;
  t635 = t238*t631;
  t636 = t604 + t635;
  t637 = 3.2*t606*t636;
  t644 = 6.4*t413*t417;
  t645 = 6.4*t417*t437;
  t648 = 13.6*t452*t487;
  t649 = 13.6*t452*t498;
  t506 = -1.*t376*t386;
  t507 = t422 + t506;
  t513 = -1.*t376*t400;
  t514 = t513 + t416;
  t589 = -1.*t376*t588;
  t590 = t577 + t589;
  t609 = -1.*t376*t599;
  t610 = t609 + t605;
  t654 = 13.6*t543*t561;
  t655 = 13.6*t543*t570;
  t660 = 6.4*t601*t606;
  t661 = 6.4*t606*t633;
  t674 = -1.*t239;
  t675 = 1. + t674;
  t676 = 0.4*t675;
  t677 = 0.64*t239;
  t678 = t676 + t677;
  t679 = t678*t268;
  t680 = 0.24*t272*t290;
  t681 = t679 + t680;
  t683 = t272*t678;
  t684 = -0.24*t268*t290;
  t685 = t683 + t684;
  t689 = -1.*t678*t268;
  t690 = -0.24*t272*t290;
  t691 = t689 + t690;
  t682 = -1.*t681*t386;
  t686 = -1.*t374*t685;
  t687 = t682 + t686;
  t688 = 3.2*t417*t687;
  t693 = t681*t386;
  t694 = t374*t685;
  t698 = t681*t400;
  t699 = t386*t685;
  t700 = t698 + t699;
  t701 = 3.2*t700*t437;
  t710 = -0.24*t239*t268;
  t711 = t710 + t690;
  t703 = -1.*t374*t681;
  t713 = 0.24*t272*t239;
  t714 = t713 + t684;
  t705 = -1.*t685*t435;
  t668 = Power(t272,2);
  t669 = 0.11*t668;
  t670 = Power(t268,2);
  t671 = 0.11*t670;
  t672 = t669 + t671;
  t673 = 6.8*t498*t672;
  t733 = -1.*t572;
  t734 = 1. + t733;
  t735 = 0.4*t734;
  t736 = 0.64*t572;
  t737 = t735 + t736;
  t738 = t737*t541;
  t739 = 0.24*t516*t574;
  t740 = t738 + t739;
  t742 = t516*t737;
  t743 = -0.24*t541*t574;
  t744 = t742 + t743;
  t727 = Power(t516,2);
  t728 = 0.11*t727;
  t729 = Power(t541,2);
  t730 = 0.11*t729;
  t731 = t728 + t730;
  t732 = 6.8*t570*t731;
  t741 = -1.*t740*t588;
  t745 = -1.*t576*t744;
  t746 = t741 + t745;
  t748 = t740*t599;
  t749 = t588*t744;
  t750 = t748 + t749;
  t755 = -1.*t737*t541;
  t756 = -0.24*t516*t574;
  t757 = t755 + t756;
  t754 = 3.2*t606*t746;
  t759 = t740*t588;
  t760 = t576*t744;
  t764 = 3.2*t750*t633;
  t773 = -0.24*t572*t541;
  t774 = t773 + t756;
  t766 = -1.*t576*t740;
  t776 = 0.24*t516*t572;
  t777 = t776 + t743;
  t768 = -1.*t744*t631;
  t789 = 0.748*t498;
  t795 = t678*t290;
  t796 = -0.24*t239*t290;
  t797 = t795 + t796;
  t790 = t678*t239;
  t791 = Power(t290,2);
  t792 = 0.24*t791;
  t793 = t790 + t792;
  t801 = 3.2*t797*t417;
  t802 = 3.2*t793*t437;
  t822 = 0.748*t570;
  t828 = t737*t574;
  t829 = -0.24*t572*t574;
  t830 = t828 + t829;
  t823 = t737*t572;
  t824 = Power(t574,2);
  t825 = 0.24*t824;
  t826 = t823 + t825;
  t834 = 3.2*t830*t606;
  t835 = 3.2*t826*t633;
  p_output1[0]=var2[1]*(-0.5*(3.2*Power(t413,2) + 3.2*Power(t417,2) + t454 + t482 + t494 + t499 + 3.2*t390*t507 + 3.2*t420*t514 + t551 + t557 + t565 + t571 + 3.2*t590*t595 + 3.2*Power(t601,2) + 3.2*Power(t606,2) + 3.2*t610*t621)*var2[2] - 0.5*(t414 + t421 + t438 + t441 + t454 + t482 + t494 + t499)*var2[3] - 0.5*(t414 + t421 + t438 + t441)*var2[4] - 0.5*(t551 + t557 + t565 + t571 + t627 + t628 + t634 + t637)*var2[5] - 0.5*(t627 + t628 + t634 + t637)*var2[6]);
  p_output1[1]=var2[1]*(-0.5*(6.4*t417*t507 + 6.4*t413*t514 + 6.4*t590*t606 + 6.4*t601*t610 + t648 + t649 + t654 + t655)*var2[2] - 0.5*(t644 + t645 + t648 + t649)*var2[3] - 0.5*(t644 + t645)*var2[4] - 0.5*(t654 + t655 + t660 + t661)*var2[5] - 0.5*(t660 + t661)*var2[6]);
  p_output1[2]=var2[1]*(-0.5*(-2.88*t376 + t673 + 3.2*t514*t687 + 3.2*t507*t700 + t732 + 3.2*t610*t746 + 3.2*t590*t750)*var2[2] - 0.5*(t673 + t688 + 3.2*t417*(t400*t685 + t386*t691 + t693 + t694) + t701 + 3.2*t413*(-1.*t386*t685 - 1.*t374*t691 + t703 + t705))*var2[3] - 0.5*(t688 + t701 + 3.2*t413*(t703 + t705 - 1.*t374*t711 - 1.*t386*t714) + 3.2*t417*(t693 + t694 + t386*t711 + t400*t714))*var2[4] - 0.5*(t732 + t754 + 3.2*t606*(t599*t744 + t588*t757 + t759 + t760) + t764 + 3.2*t601*(-1.*t588*t744 - 1.*t576*t757 + t766 + t768))*var2[5] - 0.5*(t754 + t764 + 3.2*t601*(t766 + t768 - 1.*t576*t774 - 1.*t588*t777) + 3.2*t606*(t759 + t760 + t588*t774 + t599*t777))*var2[6]);
  p_output1[3]=var2[1]*(-0.5*(t789 + 3.2*t507*t793 + 3.2*t514*t797)*var2[2] - 0.5*(t789 + t801 + t802)*var2[3] - 0.5*(3.2*t417*(0.24*t239*t290 - 1.*t290*t678) + 3.2*t413*(-0.24*Power(t239,2) + t790) + t801 + t802)*var2[4]);
  p_output1[4]=var2[1]*(-0.384*t507*var2[2] - 0.384*t437*var2[3] - 0.384*t437*var2[4]);
  p_output1[5]=var2[1]*(-0.5*(t822 + 3.2*t590*t826 + 3.2*t610*t830)*var2[2] - 0.5*(t822 + t834 + t835)*var2[5] - 0.5*(3.2*t606*(0.24*t572*t574 - 1.*t574*t737) + 3.2*t601*(-0.24*Power(t572,2) + t823) + t834 + t835)*var2[6]);
  p_output1[6]=var2[1]*(-0.384*t590*var2[2] - 0.384*t633*var2[5] - 0.384*t633*var2[6]);
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

#include "Ce1_vec2_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
