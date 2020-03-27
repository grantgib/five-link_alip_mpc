/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:46:26 GMT-04:00
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
  double t3904;
  double t3080;
  double t3601;
  double t4099;
  double t4320;
  double t2825;
  double t4440;
  double t4606;
  double t4621;
  double t3872;
  double t4159;
  double t4197;
  double t4319;
  double t4658;
  double t4746;
  double t9418;
  double t9430;
  double t9440;
  double t4786;
  double t8862;
  double t9164;
  double t9175;
  double t9230;
  double t9260;
  double t9261;
  double t9290;
  double t9317;
  double t9327;
  double t9346;
  double t9347;
  double t9369;
  double t9371;
  double t9398;
  double t9410;
  double t9417;
  double t9444;
  double t9462;
  double t9463;
  double t9466;
  double t9500;
  double t9566;
  double t9571;
  double t9579;
  double t9583;
  double t9584;
  double t9661;
  double t9690;
  double t9665;
  double t9691;
  double t9695;
  double t9700;
  double t9705;
  double t9706;
  double t9716;
  double t9722;
  double t9723;
  double t9724;
  double t9696;
  double t9717;
  double t9727;
  double t9728;
  double t9743;
  double t9718;
  double t9567;
  double t9574;
  double t9578;
  double t9587;
  double t9603;
  double t9613;
  double t9624;
  double t9639;
  double t9764;
  double t9767;
  double t9772;
  double t9775;
  double t9782;
  double t9785;
  double t9786;
  double t9558;
  double t9559;
  double t9537;
  double t9549;
  double t9794;
  double t9795;
  double t9796;
  double t9797;
  double t9798;
  double t9799;
  double t9800;
  double t9805;
  double t9806;
  double t9807;
  double t9808;
  double t9810;
  double t9812;
  double t9813;
  double t9816;
  double t9817;
  double t9725;
  double t9726;
  double t9719;
  double t9720;
  double t9845;
  double t9832;
  double t9833;
  double t9834;
  double t9837;
  double t9838;
  double t9839;
  double t9840;
  double t9843;
  double t9844;
  double t9858;
  double t9859;
  double t9860;
  double t9861;
  double t9862;
  double t9863;
  double t9876;
  double t9877;
  double t9878;
  double t9879;
  double t9880;
  double t9881;
  double t9882;
  double t9883;
  double t9885;
  double t9886;
  double t9887;
  double t9891;
  double t9892;
  double t9893;
  double t9884;
  double t9888;
  double t9889;
  double t9890;
  double t9895;
  double t9896;
  double t9900;
  double t9901;
  double t9902;
  double t9903;
  double t9912;
  double t9913;
  double t9905;
  double t9915;
  double t9916;
  double t9907;
  double t9870;
  double t9871;
  double t9872;
  double t9873;
  double t9874;
  double t9875;
  double t9935;
  double t9936;
  double t9937;
  double t9938;
  double t9939;
  double t9940;
  double t9941;
  double t9942;
  double t9944;
  double t9945;
  double t9946;
  double t9929;
  double t9930;
  double t9931;
  double t9932;
  double t9933;
  double t9934;
  double t9943;
  double t9947;
  double t9948;
  double t9950;
  double t9951;
  double t9952;
  double t9957;
  double t9958;
  double t9959;
  double t9956;
  double t9961;
  double t9962;
  double t9966;
  double t9975;
  double t9976;
  double t9968;
  double t9978;
  double t9979;
  double t9970;
  double t9991;
  double t9992;
  double t9993;
  double t9994;
  double t9996;
  double t9997;
  double t9998;
  double t9999;
  double t10003;
  double t10004;
  double t10024;
  double t10025;
  double t10026;
  double t10027;
  double t10029;
  double t10030;
  double t10031;
  double t10032;
  double t10036;
  double t10037;
  t3904 = Cos(var1[3]);
  t3080 = Cos(var1[4]);
  t3601 = Sin(var1[3]);
  t4099 = Sin(var1[4]);
  t4320 = Cos(var1[2]);
  t2825 = Sin(var1[2]);
  t4440 = t3904*t3080;
  t4606 = -1.*t3601*t4099;
  t4621 = t4440 + t4606;
  t3872 = -1.*t3080*t3601;
  t4159 = -1.*t3904*t4099;
  t4197 = t3872 + t4159;
  t4319 = t2825*t4197;
  t4658 = t4320*t4621;
  t4746 = t4319 + t4658;
  t9418 = t4320*t3904;
  t9430 = -1.*t2825*t3601;
  t9440 = t9418 + t9430;
  t4786 = t3080*t3601;
  t8862 = t3904*t4099;
  t9164 = t4786 + t8862;
  t9175 = t4320*t9164;
  t9230 = t2825*t4621;
  t9260 = t9175 + t9230;
  t9261 = 6.4*t4746*t9260;
  t9290 = t4320*t4197;
  t9317 = -1.*t3904*t3080;
  t9327 = t3601*t4099;
  t9346 = t9317 + t9327;
  t9347 = t2825*t9346;
  t9369 = t9290 + t9347;
  t9371 = 6.4*t4746*t9369;
  t9398 = -1.*t3904*t2825;
  t9410 = -1.*t4320*t3601;
  t9417 = t9398 + t9410;
  t9444 = 13.6*t9417*t9440;
  t9462 = t3904*t2825;
  t9463 = t4320*t3601;
  t9466 = t9462 + t9463;
  t9500 = 13.6*t9466*t9440;
  t9566 = Cos(var1[5]);
  t9571 = Sin(var1[5]);
  t9579 = t4320*t9566;
  t9583 = -1.*t2825*t9571;
  t9584 = t9579 + t9583;
  t9661 = Cos(var1[6]);
  t9690 = Sin(var1[6]);
  t9665 = -1.*t9661*t9571;
  t9691 = -1.*t9566*t9690;
  t9695 = t9665 + t9691;
  t9700 = t9566*t9661;
  t9705 = -1.*t9571*t9690;
  t9706 = t9700 + t9705;
  t9716 = t4320*t9706;
  t9722 = t9661*t9571;
  t9723 = t9566*t9690;
  t9724 = t9722 + t9723;
  t9696 = t2825*t9695;
  t9717 = t9696 + t9716;
  t9727 = t4320*t9724;
  t9728 = t2825*t9706;
  t9743 = t9727 + t9728;
  t9718 = t4320*t9695;
  t9567 = -1.*t9566*t2825;
  t9574 = -1.*t4320*t9571;
  t9578 = t9567 + t9574;
  t9587 = 13.6*t9578*t9584;
  t9603 = t9566*t2825;
  t9613 = t4320*t9571;
  t9624 = t9603 + t9613;
  t9639 = 13.6*t9624*t9584;
  t9764 = 6.4*t9717*t9743;
  t9767 = -1.*t9566*t9661;
  t9772 = t9571*t9690;
  t9775 = t9767 + t9772;
  t9782 = t2825*t9775;
  t9785 = t9718 + t9782;
  t9786 = 6.4*t9717*t9785;
  t9558 = -1.*t2825*t9164;
  t9559 = t9558 + t4658;
  t9537 = -1.*t2825*t4621;
  t9549 = t9290 + t9537;
  t9794 = 3.2*t4746*t9559;
  t9795 = 3.2*t9549*t9260;
  t9796 = -1.*t2825*t4197;
  t9797 = t4320*t9346;
  t9798 = t9796 + t9797;
  t9799 = 3.2*t4746*t9798;
  t9800 = 3.2*t9549*t9369;
  t9805 = Power(t9417,2);
  t9806 = 6.8*t9805;
  t9807 = 6.8*t9417*t9466;
  t9808 = Power(t9440,2);
  t9810 = 6.8*t9808;
  t9812 = -1.*t4320*t3904;
  t9813 = t2825*t3601;
  t9816 = t9812 + t9813;
  t9817 = 6.8*t9440*t9816;
  t9725 = -1.*t2825*t9724;
  t9726 = t9725 + t9716;
  t9719 = -1.*t2825*t9706;
  t9720 = t9718 + t9719;
  t9845 = -1.*t2825*t9695;
  t9832 = Power(t9578,2);
  t9833 = 6.8*t9832;
  t9834 = 6.8*t9578*t9624;
  t9837 = Power(t9584,2);
  t9838 = 6.8*t9837;
  t9839 = -1.*t4320*t9566;
  t9840 = t2825*t9571;
  t9843 = t9839 + t9840;
  t9844 = 6.8*t9584*t9843;
  t9858 = 3.2*t9717*t9726;
  t9859 = 3.2*t9720*t9743;
  t9860 = t4320*t9775;
  t9861 = t9845 + t9860;
  t9862 = 3.2*t9717*t9861;
  t9863 = 3.2*t9720*t9785;
  t9876 = -1.*t3080;
  t9877 = 1. + t9876;
  t9878 = 0.4*t9877;
  t9879 = 0.64*t3080;
  t9880 = t9878 + t9879;
  t9881 = t9880*t3601;
  t9882 = 0.24*t3904*t4099;
  t9883 = t9881 + t9882;
  t9885 = t3904*t9880;
  t9886 = -0.24*t3601*t4099;
  t9887 = t9885 + t9886;
  t9891 = -1.*t9880*t3601;
  t9892 = -0.24*t3904*t4099;
  t9893 = t9891 + t9892;
  t9884 = -1.*t9883*t4621;
  t9888 = -1.*t4197*t9887;
  t9889 = t9884 + t9888;
  t9890 = 3.2*t4746*t9889;
  t9895 = t9883*t4621;
  t9896 = t4197*t9887;
  t9900 = t9883*t9164;
  t9901 = t4621*t9887;
  t9902 = t9900 + t9901;
  t9903 = 3.2*t9902*t9369;
  t9912 = -0.24*t3080*t3601;
  t9913 = t9912 + t9892;
  t9905 = -1.*t4197*t9883;
  t9915 = 0.24*t3904*t3080;
  t9916 = t9915 + t9886;
  t9907 = -1.*t9887*t9346;
  t9870 = Power(t3904,2);
  t9871 = 0.11*t9870;
  t9872 = Power(t3601,2);
  t9873 = 0.11*t9872;
  t9874 = t9871 + t9873;
  t9875 = 6.8*t9417*t9874;
  t9935 = -1.*t9661;
  t9936 = 1. + t9935;
  t9937 = 0.4*t9936;
  t9938 = 0.64*t9661;
  t9939 = t9937 + t9938;
  t9940 = t9939*t9571;
  t9941 = 0.24*t9566*t9690;
  t9942 = t9940 + t9941;
  t9944 = t9566*t9939;
  t9945 = -0.24*t9571*t9690;
  t9946 = t9944 + t9945;
  t9929 = Power(t9566,2);
  t9930 = 0.11*t9929;
  t9931 = Power(t9571,2);
  t9932 = 0.11*t9931;
  t9933 = t9930 + t9932;
  t9934 = 6.8*t9578*t9933;
  t9943 = -1.*t9942*t9706;
  t9947 = -1.*t9695*t9946;
  t9948 = t9943 + t9947;
  t9950 = t9942*t9724;
  t9951 = t9706*t9946;
  t9952 = t9950 + t9951;
  t9957 = -1.*t9939*t9571;
  t9958 = -0.24*t9566*t9690;
  t9959 = t9957 + t9958;
  t9956 = 3.2*t9717*t9948;
  t9961 = t9942*t9706;
  t9962 = t9695*t9946;
  t9966 = 3.2*t9952*t9785;
  t9975 = -0.24*t9661*t9571;
  t9976 = t9975 + t9958;
  t9968 = -1.*t9695*t9942;
  t9978 = 0.24*t9566*t9661;
  t9979 = t9978 + t9945;
  t9970 = -1.*t9946*t9775;
  t9991 = 0.748*t9417;
  t9992 = t9880*t4099;
  t9993 = -0.24*t3080*t4099;
  t9994 = t9992 + t9993;
  t9996 = t9880*t3080;
  t9997 = Power(t4099,2);
  t9998 = 0.24*t9997;
  t9999 = t9996 + t9998;
  t10003 = 3.2*t9994*t4746;
  t10004 = 3.2*t9999*t9369;
  t10024 = 0.748*t9578;
  t10025 = t9939*t9690;
  t10026 = -0.24*t9661*t9690;
  t10027 = t10025 + t10026;
  t10029 = t9939*t9661;
  t10030 = Power(t9690,2);
  t10031 = 0.24*t10030;
  t10032 = t10029 + t10031;
  t10036 = 3.2*t10027*t9717;
  t10037 = 3.2*t10032*t9785;
  p_output1[0]=var2[0]*(-0.5*(t9444 + t9500 + 6.4*t4746*t9549 + 6.4*t9260*t9559 + t9587 + t9639 + 6.4*t9717*t9720 + 6.4*t9726*t9743)*var2[2] - 0.5*(t9261 + t9371 + t9444 + t9500)*var2[3] - 0.5*(t9261 + t9371)*var2[4] - 0.5*(t9587 + t9639 + t9764 + t9786)*var2[5] - 0.5*(t9764 + t9786)*var2[6]);
  p_output1[1]=var2[0]*(-0.5*(3.2*t9260*(-1.*t4320*t9164 + t9537) + 3.2*Power(t9549,2) + 3.2*Power(t9559,2) + 3.2*Power(t9720,2) + 3.2*Power(t9726,2) + 3.2*(t9719 - 1.*t4320*t9724)*t9743 + 3.2*t4746*(-1.*t4320*t4621 + t9796) + t9806 + t9807 + t9810 + t9817 + t9833 + t9834 + t9838 + t9844 + 3.2*t9717*(-1.*t4320*t9706 + t9845))*var2[2] - 0.5*(t9794 + t9795 + t9799 + t9800 + t9806 + t9807 + t9810 + t9817)*var2[3] - 0.5*(t9794 + t9795 + t9799 + t9800)*var2[4] - 0.5*(t9833 + t9834 + t9838 + t9844 + t9858 + t9859 + t9862 + t9863)*var2[5] - 0.5*(t9858 + t9859 + t9862 + t9863)*var2[6]);
  p_output1[2]=var2[0]*(-0.5*(-2.88*t2825 + t9875 + 3.2*t9559*t9889 + 3.2*t9549*t9902 + t9934 + 3.2*t9726*t9948 + 3.2*t9720*t9952)*var2[2] - 0.5*(t9875 + t9890 + 3.2*t4746*(t9164*t9887 + t4621*t9893 + t9895 + t9896) + t9903 + 3.2*t9260*(-1.*t4621*t9887 - 1.*t4197*t9893 + t9905 + t9907))*var2[3] - 0.5*(t9890 + t9903 + 3.2*t9260*(t9905 + t9907 - 1.*t4197*t9913 - 1.*t4621*t9916) + 3.2*t4746*(t9895 + t9896 + t4621*t9913 + t9164*t9916))*var2[4] - 0.5*(t9934 + t9956 + 3.2*t9717*(t9724*t9946 + t9706*t9959 + t9961 + t9962) + t9966 + 3.2*t9743*(-1.*t9706*t9946 - 1.*t9695*t9959 + t9968 + t9970))*var2[5] - 0.5*(t9956 + t9966 + 3.2*t9743*(t9968 + t9970 - 1.*t9695*t9976 - 1.*t9706*t9979) + 3.2*t9717*(t9961 + t9962 + t9706*t9976 + t9724*t9979))*var2[6]);
  p_output1[3]=var2[0]*(-0.5*(t9991 + 3.2*t9559*t9994 + 3.2*t9549*t9999)*var2[2] - 0.5*(t10003 + t10004 + t9991)*var2[3] - 0.5*(t10003 + t10004 + 3.2*t4746*(0.24*t3080*t4099 - 1.*t4099*t9880) + 3.2*t9260*(-0.24*Power(t3080,2) + t9996))*var2[4]);
  p_output1[4]=var2[0]*(-0.384*t9549*var2[2] - 0.384*t9369*var2[3] - 0.384*t9369*var2[4]);
  p_output1[5]=var2[0]*(-0.5*(t10024 + 3.2*t10032*t9720 + 3.2*t10027*t9726)*var2[2] - 0.5*(t10024 + t10036 + t10037)*var2[5] - 0.5*(t10036 + t10037 + 3.2*(t10029 - 0.24*Power(t9661,2))*t9743 + 3.2*t9717*(0.24*t9661*t9690 - 1.*t9690*t9939))*var2[6]);
  p_output1[6]=var2[0]*(-0.384*t9720*var2[2] - 0.384*t9785*var2[5] - 0.384*t9785*var2[6]);
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
