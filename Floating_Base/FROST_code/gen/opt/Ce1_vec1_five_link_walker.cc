/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:44 GMT-04:00
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
  double t3869;
  double t3642;
  double t3841;
  double t4033;
  double t4375;
  double t194;
  double t4391;
  double t4425;
  double t4475;
  double t3856;
  double t4056;
  double t4112;
  double t4164;
  double t4512;
  double t4520;
  double t9578;
  double t9583;
  double t9584;
  double t4523;
  double t4549;
  double t4569;
  double t4594;
  double t4597;
  double t4606;
  double t4658;
  double t4663;
  double t4677;
  double t4737;
  double t9398;
  double t9430;
  double t9465;
  double t9485;
  double t9540;
  double t9566;
  double t9574;
  double t9595;
  double t9609;
  double t9613;
  double t9619;
  double t9623;
  double t9695;
  double t9704;
  double t9724;
  double t9727;
  double t9758;
  double t9770;
  double t9772;
  double t9771;
  double t9775;
  double t9776;
  double t9780;
  double t9781;
  double t9782;
  double t9793;
  double t9827;
  double t9828;
  double t9832;
  double t9779;
  double t9797;
  double t9843;
  double t9844;
  double t9849;
  double t9803;
  double t9703;
  double t9707;
  double t9723;
  double t9763;
  double t9764;
  double t9767;
  double t9768;
  double t9769;
  double t9853;
  double t9854;
  double t9855;
  double t9856;
  double t9857;
  double t9858;
  double t9859;
  double t9688;
  double t9690;
  double t9660;
  double t9665;
  double t9874;
  double t9877;
  double t9882;
  double t9885;
  double t9890;
  double t9891;
  double t9892;
  double t9895;
  double t9896;
  double t9897;
  double t9898;
  double t9899;
  double t9900;
  double t9901;
  double t9902;
  double t9903;
  double t9833;
  double t9834;
  double t9804;
  double t9817;
  double t9929;
  double t9918;
  double t9919;
  double t9920;
  double t9921;
  double t9922;
  double t9923;
  double t9924;
  double t9925;
  double t9926;
  double t9942;
  double t9943;
  double t9944;
  double t9945;
  double t9946;
  double t9947;
  double t9960;
  double t9961;
  double t9962;
  double t9963;
  double t9964;
  double t9965;
  double t9966;
  double t9967;
  double t9969;
  double t9970;
  double t9971;
  double t9975;
  double t9976;
  double t9977;
  double t9968;
  double t9972;
  double t9973;
  double t9974;
  double t9979;
  double t9980;
  double t9984;
  double t9985;
  double t9986;
  double t9987;
  double t9996;
  double t9997;
  double t9989;
  double t9999;
  double t10000;
  double t9991;
  double t9954;
  double t9955;
  double t9956;
  double t9957;
  double t9958;
  double t9959;
  double t10019;
  double t10020;
  double t10021;
  double t10022;
  double t10023;
  double t10024;
  double t10025;
  double t10026;
  double t10028;
  double t10029;
  double t10030;
  double t10013;
  double t10014;
  double t10015;
  double t10016;
  double t10017;
  double t10018;
  double t10027;
  double t10031;
  double t10032;
  double t10034;
  double t10035;
  double t10036;
  double t10041;
  double t10042;
  double t10043;
  double t10040;
  double t10045;
  double t10046;
  double t10050;
  double t10059;
  double t10060;
  double t10052;
  double t10062;
  double t10063;
  double t10054;
  double t10075;
  double t10076;
  double t10077;
  double t10078;
  double t10080;
  double t10081;
  double t10082;
  double t10083;
  double t10087;
  double t10088;
  double t10108;
  double t10109;
  double t10110;
  double t10111;
  double t10113;
  double t10114;
  double t10115;
  double t10116;
  double t10120;
  double t10121;
  t3869 = Cos(var1[3]);
  t3642 = Cos(var1[4]);
  t3841 = Sin(var1[3]);
  t4033 = Sin(var1[4]);
  t4375 = Cos(var1[2]);
  t194 = Sin(var1[2]);
  t4391 = t3869*t3642;
  t4425 = -1.*t3841*t4033;
  t4475 = t4391 + t4425;
  t3856 = -1.*t3642*t3841;
  t4056 = -1.*t3869*t4033;
  t4112 = t3856 + t4056;
  t4164 = t194*t4112;
  t4512 = t4375*t4475;
  t4520 = t4164 + t4512;
  t9578 = t4375*t3869;
  t9583 = -1.*t194*t3841;
  t9584 = t9578 + t9583;
  t4523 = t3642*t3841;
  t4549 = t3869*t4033;
  t4569 = t4523 + t4549;
  t4594 = t4375*t4569;
  t4597 = t194*t4475;
  t4606 = t4594 + t4597;
  t4658 = 6.4*t4520*t4606;
  t4663 = t4375*t4112;
  t4677 = -1.*t3869*t3642;
  t4737 = t3841*t4033;
  t9398 = t4677 + t4737;
  t9430 = t194*t9398;
  t9465 = t4663 + t9430;
  t9485 = 6.4*t4520*t9465;
  t9540 = -1.*t3869*t194;
  t9566 = -1.*t4375*t3841;
  t9574 = t9540 + t9566;
  t9595 = 13.6*t9574*t9584;
  t9609 = t3869*t194;
  t9613 = t4375*t3841;
  t9619 = t9609 + t9613;
  t9623 = 13.6*t9619*t9584;
  t9695 = Cos(var1[5]);
  t9704 = Sin(var1[5]);
  t9724 = t4375*t9695;
  t9727 = -1.*t194*t9704;
  t9758 = t9724 + t9727;
  t9770 = Cos(var1[6]);
  t9772 = Sin(var1[6]);
  t9771 = -1.*t9770*t9704;
  t9775 = -1.*t9695*t9772;
  t9776 = t9771 + t9775;
  t9780 = t9695*t9770;
  t9781 = -1.*t9704*t9772;
  t9782 = t9780 + t9781;
  t9793 = t4375*t9782;
  t9827 = t9770*t9704;
  t9828 = t9695*t9772;
  t9832 = t9827 + t9828;
  t9779 = t194*t9776;
  t9797 = t9779 + t9793;
  t9843 = t4375*t9832;
  t9844 = t194*t9782;
  t9849 = t9843 + t9844;
  t9803 = t4375*t9776;
  t9703 = -1.*t9695*t194;
  t9707 = -1.*t4375*t9704;
  t9723 = t9703 + t9707;
  t9763 = 13.6*t9723*t9758;
  t9764 = t9695*t194;
  t9767 = t4375*t9704;
  t9768 = t9764 + t9767;
  t9769 = 13.6*t9768*t9758;
  t9853 = 6.4*t9797*t9849;
  t9854 = -1.*t9695*t9770;
  t9855 = t9704*t9772;
  t9856 = t9854 + t9855;
  t9857 = t194*t9856;
  t9858 = t9803 + t9857;
  t9859 = 6.4*t9797*t9858;
  t9688 = -1.*t194*t4569;
  t9690 = t9688 + t4512;
  t9660 = -1.*t194*t4475;
  t9665 = t4663 + t9660;
  t9874 = 3.2*t4520*t9690;
  t9877 = 3.2*t9665*t4606;
  t9882 = -1.*t194*t4112;
  t9885 = t4375*t9398;
  t9890 = t9882 + t9885;
  t9891 = 3.2*t4520*t9890;
  t9892 = 3.2*t9665*t9465;
  t9895 = Power(t9574,2);
  t9896 = 6.8*t9895;
  t9897 = 6.8*t9574*t9619;
  t9898 = Power(t9584,2);
  t9899 = 6.8*t9898;
  t9900 = -1.*t4375*t3869;
  t9901 = t194*t3841;
  t9902 = t9900 + t9901;
  t9903 = 6.8*t9584*t9902;
  t9833 = -1.*t194*t9832;
  t9834 = t9833 + t9793;
  t9804 = -1.*t194*t9782;
  t9817 = t9803 + t9804;
  t9929 = -1.*t194*t9776;
  t9918 = Power(t9723,2);
  t9919 = 6.8*t9918;
  t9920 = 6.8*t9723*t9768;
  t9921 = Power(t9758,2);
  t9922 = 6.8*t9921;
  t9923 = -1.*t4375*t9695;
  t9924 = t194*t9704;
  t9925 = t9923 + t9924;
  t9926 = 6.8*t9758*t9925;
  t9942 = 3.2*t9797*t9834;
  t9943 = 3.2*t9817*t9849;
  t9944 = t4375*t9856;
  t9945 = t9929 + t9944;
  t9946 = 3.2*t9797*t9945;
  t9947 = 3.2*t9817*t9858;
  t9960 = -1.*t3642;
  t9961 = 1. + t9960;
  t9962 = 0.4*t9961;
  t9963 = 0.64*t3642;
  t9964 = t9962 + t9963;
  t9965 = t9964*t3841;
  t9966 = 0.24*t3869*t4033;
  t9967 = t9965 + t9966;
  t9969 = t3869*t9964;
  t9970 = -0.24*t3841*t4033;
  t9971 = t9969 + t9970;
  t9975 = -1.*t9964*t3841;
  t9976 = -0.24*t3869*t4033;
  t9977 = t9975 + t9976;
  t9968 = -1.*t9967*t4475;
  t9972 = -1.*t4112*t9971;
  t9973 = t9968 + t9972;
  t9974 = 3.2*t4520*t9973;
  t9979 = t9967*t4475;
  t9980 = t4112*t9971;
  t9984 = t9967*t4569;
  t9985 = t4475*t9971;
  t9986 = t9984 + t9985;
  t9987 = 3.2*t9986*t9465;
  t9996 = -0.24*t3642*t3841;
  t9997 = t9996 + t9976;
  t9989 = -1.*t4112*t9967;
  t9999 = 0.24*t3869*t3642;
  t10000 = t9999 + t9970;
  t9991 = -1.*t9971*t9398;
  t9954 = Power(t3869,2);
  t9955 = 0.11*t9954;
  t9956 = Power(t3841,2);
  t9957 = 0.11*t9956;
  t9958 = t9955 + t9957;
  t9959 = 6.8*t9574*t9958;
  t10019 = -1.*t9770;
  t10020 = 1. + t10019;
  t10021 = 0.4*t10020;
  t10022 = 0.64*t9770;
  t10023 = t10021 + t10022;
  t10024 = t10023*t9704;
  t10025 = 0.24*t9695*t9772;
  t10026 = t10024 + t10025;
  t10028 = t9695*t10023;
  t10029 = -0.24*t9704*t9772;
  t10030 = t10028 + t10029;
  t10013 = Power(t9695,2);
  t10014 = 0.11*t10013;
  t10015 = Power(t9704,2);
  t10016 = 0.11*t10015;
  t10017 = t10014 + t10016;
  t10018 = 6.8*t9723*t10017;
  t10027 = -1.*t10026*t9782;
  t10031 = -1.*t9776*t10030;
  t10032 = t10027 + t10031;
  t10034 = t10026*t9832;
  t10035 = t9782*t10030;
  t10036 = t10034 + t10035;
  t10041 = -1.*t10023*t9704;
  t10042 = -0.24*t9695*t9772;
  t10043 = t10041 + t10042;
  t10040 = 3.2*t9797*t10032;
  t10045 = t10026*t9782;
  t10046 = t9776*t10030;
  t10050 = 3.2*t10036*t9858;
  t10059 = -0.24*t9770*t9704;
  t10060 = t10059 + t10042;
  t10052 = -1.*t9776*t10026;
  t10062 = 0.24*t9695*t9770;
  t10063 = t10062 + t10029;
  t10054 = -1.*t10030*t9856;
  t10075 = 0.748*t9574;
  t10076 = t9964*t4033;
  t10077 = -0.24*t3642*t4033;
  t10078 = t10076 + t10077;
  t10080 = t9964*t3642;
  t10081 = Power(t4033,2);
  t10082 = 0.24*t10081;
  t10083 = t10080 + t10082;
  t10087 = 3.2*t10078*t4520;
  t10088 = 3.2*t10083*t9465;
  t10108 = 0.748*t9723;
  t10109 = t10023*t9772;
  t10110 = -0.24*t9770*t9772;
  t10111 = t10109 + t10110;
  t10113 = t10023*t9770;
  t10114 = Power(t9772,2);
  t10115 = 0.24*t10114;
  t10116 = t10113 + t10115;
  t10120 = 3.2*t10111*t9797;
  t10121 = 3.2*t10116*t9858;
  p_output1[0]=var2[0]*(-0.5*(t9595 + t9623 + 6.4*t4520*t9665 + 6.4*t4606*t9690 + t9763 + t9769 + 6.4*t9797*t9817 + 6.4*t9834*t9849)*var2[2] - 0.5*(t4658 + t9485 + t9595 + t9623)*var2[3] - 0.5*(t4658 + t9485)*var2[4] - 0.5*(t9763 + t9769 + t9853 + t9859)*var2[5] - 0.5*(t9853 + t9859)*var2[6]);
  p_output1[1]=var2[0]*(-0.5*(3.2*t4606*(-1.*t4375*t4569 + t9660) + 3.2*Power(t9665,2) + 3.2*Power(t9690,2) + 3.2*Power(t9817,2) + 3.2*Power(t9834,2) + 3.2*(t9804 - 1.*t4375*t9832)*t9849 + 3.2*t4520*(-1.*t4375*t4475 + t9882) + t9896 + t9897 + t9899 + t9903 + t9919 + t9920 + t9922 + t9926 + 3.2*t9797*(-1.*t4375*t9782 + t9929))*var2[2] - 0.5*(t9874 + t9877 + t9891 + t9892 + t9896 + t9897 + t9899 + t9903)*var2[3] - 0.5*(t9874 + t9877 + t9891 + t9892)*var2[4] - 0.5*(t9919 + t9920 + t9922 + t9926 + t9942 + t9943 + t9946 + t9947)*var2[5] - 0.5*(t9942 + t9943 + t9946 + t9947)*var2[6]);
  p_output1[2]=var2[0]*(-0.5*(t10018 - 2.88*t194 + 3.2*t10036*t9817 + 3.2*t10032*t9834 + t9959 + 3.2*t9690*t9973 + 3.2*t9665*t9986)*var2[2] - 0.5*(t9959 + t9974 + 3.2*t4520*(t4569*t9971 + t4475*t9977 + t9979 + t9980) + t9987 + 3.2*t4606*(-1.*t4475*t9971 - 1.*t4112*t9977 + t9989 + t9991))*var2[3] - 0.5*(t9974 + t9987 + 3.2*t4606*(-1.*t10000*t4475 + t9989 + t9991 - 1.*t4112*t9997) + 3.2*t4520*(t10000*t4569 + t9979 + t9980 + t4475*t9997))*var2[4] - 0.5*(t10018 + t10040 + t10050 + 3.2*t9797*(t10045 + t10046 + t10043*t9782 + t10030*t9832) + 3.2*(t10052 + t10054 - 1.*t10043*t9776 - 1.*t10030*t9782)*t9849)*var2[5] - 0.5*(t10040 + t10050 + 3.2*t9797*(t10045 + t10046 + t10060*t9782 + t10063*t9832) + 3.2*(t10052 + t10054 - 1.*t10060*t9776 - 1.*t10063*t9782)*t9849)*var2[6]);
  p_output1[3]=var2[0]*(-0.5*(t10075 + 3.2*t10083*t9665 + 3.2*t10078*t9690)*var2[2] - 0.5*(t10075 + t10087 + t10088)*var2[3] - 0.5*(t10087 + t10088 + 3.2*(t10080 - 0.24*Power(t3642,2))*t4606 + 3.2*t4520*(0.24*t3642*t4033 - 1.*t4033*t9964))*var2[4]);
  p_output1[4]=var2[0]*(-0.384*t9665*var2[2] - 0.384*t9465*var2[3] - 0.384*t9465*var2[4]);
  p_output1[5]=var2[0]*(-0.5*(t10108 + 3.2*t10116*t9817 + 3.2*t10111*t9834)*var2[2] - 0.5*(t10108 + t10120 + t10121)*var2[5] - 0.5*(t10120 + t10121 + 3.2*(-1.*t10023*t9772 + 0.24*t9770*t9772)*t9797 + 3.2*(t10113 - 0.24*Power(t9770,2))*t9849)*var2[6]);
  p_output1[6]=var2[0]*(-0.384*t9817*var2[2] - 0.384*t9858*var2[5] - 0.384*t9858*var2[6]);
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
