/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:20 GMT-05:00
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
  double t442;
  double t508;
  double t443;
  double t505;
  double t607;
  double t622;
  double t639;
  double t640;
  double t641;
  double t608;
  double t623;
  double t626;
  double t646;
  double t647;
  double t650;
  double t651;
  double t652;
  double t638;
  double t642;
  double t643;
  double t653;
  double t656;
  double t657;
  double t659;
  double t662;
  double t663;
  double t704;
  double t706;
  double t707;
  double t667;
  double t692;
  double t695;
  double t719;
  double t720;
  double t721;
  double t658;
  double t664;
  double t665;
  double t666;
  double t697;
  double t702;
  double t715;
  double t716;
  double t717;
  double t718;
  double t722;
  double t723;
  double t724;
  double t725;
  double t726;
  double t747;
  double t767;
  double t769;
  double t752;
  double t771;
  double t772;
  double t758;
  double t502;
  double t509;
  double t510;
  double t511;
  double t512;
  double t515;
  double t596;
  double t602;
  double t603;
  double t803;
  double t805;
  double t814;
  double t816;
  double t820;
  double t821;
  double t827;
  double t833;
  double t836;
  double t837;
  double t838;
  double t839;
  double t844;
  double t845;
  double t846;
  double t840;
  double t841;
  double t842;
  double t815;
  double t817;
  double t818;
  double t847;
  double t848;
  double t849;
  double t804;
  double t806;
  double t807;
  double t808;
  double t809;
  double t810;
  double t811;
  double t812;
  double t813;
  double t831;
  double t843;
  double t850;
  double t851;
  double t862;
  double t863;
  double t856;
  double t857;
  double t858;
  double t853;
  double t865;
  double t866;
  double t867;
  double t874;
  double t875;
  double t876;
  double t864;
  double t869;
  double t870;
  double t877;
  double t878;
  double t879;
  double t880;
  double t881;
  double t882;
  double t891;
  double t892;
  double t884;
  double t894;
  double t895;
  double t886;
  double t798;
  double t799;
  double t696;
  double t708;
  double t709;
  double t787;
  double t788;
  double t751;
  double t753;
  double t761;
  double t911;
  double t770;
  double t775;
  double t778;
  double t913;
  double t914;
  double t915;
  double t916;
  double t780;
  double t781;
  double t782;
  double t907;
  double t908;
  double t909;
  double t910;
  double t854;
  double t931;
  double t932;
  double t933;
  double t934;
  double t855;
  double t868;
  double t871;
  double t872;
  double t938;
  double t819;
  double t832;
  double t883;
  double t885;
  double t887;
  double t944;
  double t893;
  double t896;
  double t897;
  double t946;
  double t947;
  double t948;
  double t899;
  double t900;
  double t901;
  double t976;
  double t977;
  double t978;
  double t979;
  double t981;
  double t982;
  double t983;
  double t1005;
  double t1006;
  double t1007;
  double t1008;
  double t1010;
  double t1011;
  double t1012;
  t442 = Cos(var1[3]);
  t508 = Sin(var1[3]);
  t443 = Sin(var1[2]);
  t505 = Cos(var1[2]);
  t607 = Cos(var1[4]);
  t622 = Sin(var1[4]);
  t639 = t442*t607;
  t640 = -1.*t508*t622;
  t641 = t639 + t640;
  t608 = -1.*t607*t508;
  t623 = -1.*t442*t622;
  t626 = t608 + t623;
  t646 = -1.*t607;
  t647 = 1. + t646;
  t650 = 0.4*t647;
  t651 = 0.64*t607;
  t652 = t650 + t651;
  t638 = t443*t626;
  t642 = t505*t641;
  t643 = t638 + t642;
  t653 = t652*t508;
  t656 = 0.24*t442*t622;
  t657 = t653 + t656;
  t659 = t442*t652;
  t662 = -0.24*t508*t622;
  t663 = t659 + t662;
  t704 = t607*t508;
  t706 = t442*t622;
  t707 = t704 + t706;
  t667 = -1.*t652*t508;
  t692 = -0.24*t442*t622;
  t695 = t667 + t692;
  t719 = -1.*t442*t607;
  t720 = t508*t622;
  t721 = t719 + t720;
  t658 = -1.*t657*t641;
  t664 = -1.*t626*t663;
  t665 = t658 + t664;
  t666 = 3.2*t643*t665;
  t697 = t657*t641;
  t702 = t626*t663;
  t715 = t657*t707;
  t716 = t641*t663;
  t717 = t715 + t716;
  t718 = t505*t626;
  t722 = t443*t721;
  t723 = t718 + t722;
  t724 = 3.2*t717*t723;
  t725 = t505*t707;
  t726 = t443*t641;
  t747 = t725 + t726;
  t767 = -0.24*t607*t508;
  t769 = t767 + t692;
  t752 = -1.*t626*t657;
  t771 = 0.24*t442*t607;
  t772 = t771 + t662;
  t758 = -1.*t663*t721;
  t502 = -1.*t442*t443;
  t509 = -1.*t505*t508;
  t510 = t502 + t509;
  t511 = Power(t442,2);
  t512 = 0.11*t511;
  t515 = Power(t508,2);
  t596 = 0.11*t515;
  t602 = t512 + t596;
  t603 = 6.8*t510*t602;
  t803 = Cos(var1[5]);
  t805 = Sin(var1[5]);
  t814 = Cos(var1[6]);
  t816 = Sin(var1[6]);
  t820 = t803*t814;
  t821 = -1.*t805*t816;
  t827 = t820 + t821;
  t833 = -1.*t814;
  t836 = 1. + t833;
  t837 = 0.4*t836;
  t838 = 0.64*t814;
  t839 = t837 + t838;
  t844 = -1.*t814*t805;
  t845 = -1.*t803*t816;
  t846 = t844 + t845;
  t840 = t839*t805;
  t841 = 0.24*t803*t816;
  t842 = t840 + t841;
  t815 = t814*t805;
  t817 = t803*t816;
  t818 = t815 + t817;
  t847 = t803*t839;
  t848 = -0.24*t805*t816;
  t849 = t847 + t848;
  t804 = -1.*t803*t443;
  t806 = -1.*t505*t805;
  t807 = t804 + t806;
  t808 = Power(t803,2);
  t809 = 0.11*t808;
  t810 = Power(t805,2);
  t811 = 0.11*t810;
  t812 = t809 + t811;
  t813 = 6.8*t807*t812;
  t831 = t505*t827;
  t843 = -1.*t842*t827;
  t850 = -1.*t846*t849;
  t851 = t843 + t850;
  t862 = t443*t846;
  t863 = t862 + t831;
  t856 = t842*t818;
  t857 = t827*t849;
  t858 = t856 + t857;
  t853 = t505*t846;
  t865 = -1.*t839*t805;
  t866 = -0.24*t803*t816;
  t867 = t865 + t866;
  t874 = -1.*t803*t814;
  t875 = t805*t816;
  t876 = t874 + t875;
  t864 = 3.2*t863*t851;
  t869 = t842*t827;
  t870 = t846*t849;
  t877 = t443*t876;
  t878 = t853 + t877;
  t879 = 3.2*t858*t878;
  t880 = t505*t818;
  t881 = t443*t827;
  t882 = t880 + t881;
  t891 = -0.24*t814*t805;
  t892 = t891 + t866;
  t884 = -1.*t846*t842;
  t894 = 0.24*t803*t814;
  t895 = t894 + t848;
  t886 = -1.*t849*t876;
  t798 = -1.*t443*t641;
  t799 = t718 + t798;
  t696 = t695*t641;
  t708 = t707*t663;
  t709 = t696 + t697 + t702 + t708;
  t787 = -1.*t443*t707;
  t788 = t787 + t642;
  t751 = -1.*t626*t695;
  t753 = -1.*t641*t663;
  t761 = t751 + t752 + t753 + t758;
  t911 = 3.2*t799*t665;
  t770 = t769*t641;
  t775 = t707*t772;
  t778 = t770 + t697 + t702 + t775;
  t913 = -1.*t443*t626;
  t914 = t505*t721;
  t915 = t913 + t914;
  t916 = 3.2*t717*t915;
  t780 = -1.*t626*t769;
  t781 = -1.*t641*t772;
  t782 = t780 + t752 + t781 + t758;
  t907 = -1.*t505*t442;
  t908 = t443*t508;
  t909 = t907 + t908;
  t910 = 6.8*t909*t602;
  t854 = -1.*t443*t827;
  t931 = -1.*t505*t803;
  t932 = t443*t805;
  t933 = t931 + t932;
  t934 = 6.8*t933*t812;
  t855 = t853 + t854;
  t868 = t867*t827;
  t871 = t818*t849;
  t872 = t868 + t869 + t870 + t871;
  t938 = -1.*t443*t846;
  t819 = -1.*t443*t818;
  t832 = t819 + t831;
  t883 = -1.*t846*t867;
  t885 = -1.*t827*t849;
  t887 = t883 + t884 + t885 + t886;
  t944 = 3.2*t855*t851;
  t893 = t892*t827;
  t896 = t818*t895;
  t897 = t893 + t869 + t870 + t896;
  t946 = t505*t876;
  t947 = t938 + t946;
  t948 = 3.2*t858*t947;
  t899 = -1.*t846*t892;
  t900 = -1.*t827*t895;
  t901 = t899 + t884 + t900 + t886;
  t976 = t652*t607;
  t977 = Power(t622,2);
  t978 = 0.24*t977;
  t979 = t976 + t978;
  t981 = t652*t622;
  t982 = -0.24*t607*t622;
  t983 = t981 + t982;
  t1005 = t839*t814;
  t1006 = Power(t816,2);
  t1007 = 0.24*t1006;
  t1008 = t1005 + t1007;
  t1010 = t839*t816;
  t1011 = -0.24*t814*t816;
  t1012 = t1010 + t1011;
  p_output1[0]=var2[2]*(-0.5*(-2.88*t443 + t603 + 3.2*t665*t788 + 3.2*t717*t799 + t813 + 3.2*t832*t851 + 3.2*t855*t858)*var2[2] - 0.5*(t603 + t666 + 3.2*t643*t709 + t724 + 3.2*t747*t761)*var2[3] - 0.5*(t666 + t724 + 3.2*t643*t778 + 3.2*t747*t782)*var2[4] - 0.5*(t813 + t864 + 3.2*t863*t872 + t879 + 3.2*t882*t887)*var2[5] - 0.5*(t864 + t879 + 3.2*t863*t897 + 3.2*t882*t901)*var2[6]);
  p_output1[1]=var2[2]*(-0.5*(-2.88*t505 + 3.2*t665*(-1.*t505*t707 + t798) + 3.2*t851*(-1.*t505*t818 + t854) + t910 + 3.2*t717*(-1.*t505*t641 + t913) + t934 + 3.2*t858*(-1.*t505*t827 + t938))*var2[2] - 0.5*(3.2*t761*t788 + 3.2*t709*t799 + t910 + t911 + t916)*var2[3] - 0.5*(3.2*t782*t788 + 3.2*t778*t799 + t911 + t916)*var2[4] - 0.5*(3.2*t855*t872 + 3.2*t832*t887 + t934 + t944 + t948)*var2[5] - 0.5*(3.2*t855*t897 + 3.2*t832*t901 + t944 + t948)*var2[6]);
  p_output1[2]=var2[2]*(-0.5*(6.4*t709*t717 + 6.4*t665*t761)*var2[3] - 0.5*(6.4*t717*t778 + 6.4*t665*t782)*var2[4] - 0.5*(6.4*t858*t872 + 6.4*t851*t887)*var2[5] - 0.5*(6.4*t858*t897 + 6.4*t851*t901)*var2[6]);
  p_output1[3]=var2[2]*(-0.5*(3.2*t709*t979 + 3.2*t761*t983)*var2[3] - 0.5*(3.2*(0.24*t607*t622 - 1.*t622*t652)*t717 + 3.2*t665*(-0.24*Power(t607,2) + t976) + 3.2*t778*t979 + 3.2*t782*t983)*var2[4]);
  p_output1[4]=var2[2]*(-0.384*t709*var2[3] - 0.384*t778*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(3.2*t1008*t872 + 3.2*t1012*t887)*var2[5] - 0.5*(3.2*(t1005 - 0.24*Power(t814,2))*t851 + 3.2*(0.24*t814*t816 - 1.*t816*t839)*t858 + 3.2*t1008*t897 + 3.2*t1012*t901)*var2[6]);
  p_output1[6]=var2[2]*(-0.384*t872*var2[5] - 0.384*t897*var2[6]);
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

#include "Ce1_vec3_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
