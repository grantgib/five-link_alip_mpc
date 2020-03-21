/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:37:16 GMT-04:00
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
  double t15817;
  double t12711;
  double t12712;
  double t15819;
  double t15828;
  double t12709;
  double t15816;
  double t15820;
  double t15825;
  double t15826;
  double t15829;
  double t15833;
  double t15836;
  double t15837;
  double t15838;
  double t15848;
  double t15849;
  double t15852;
  double t15853;
  double t15854;
  double t15879;
  double t15876;
  double t15877;
  double t15880;
  double t15878;
  double t15881;
  double t15882;
  double t15883;
  double t15884;
  double t15885;
  double t15886;
  double t15887;
  double t15888;
  double t15896;
  double t15897;
  double t15898;
  double t15899;
  double t15900;
  double t15844;
  double t15845;
  double t15846;
  double t15864;
  double t15865;
  double t15867;
  double t15868;
  double t15869;
  double t15870;
  double t15892;
  double t15893;
  double t15894;
  double t15909;
  double t15910;
  double t15952;
  double t15953;
  double t15954;
  double t15955;
  double t15965;
  double t15966;
  double t15967;
  double t15980;
  double t15981;
  double t15982;
  double t16028;
  double t16029;
  double t16030;
  double t16032;
  double t16033;
  double t16034;
  double t16048;
  double t16049;
  double t16050;
  double t16052;
  double t16053;
  double t16054;
  double t12673;
  double t12708;
  double t15969;
  double t15970;
  double t15971;
  double t15842;
  double t15843;
  double t15961;
  double t15962;
  double t15963;
  double t15861;
  double t15862;
  double t15863;
  double t15973;
  double t15974;
  double t15855;
  double t15856;
  double t15858;
  double t15859;
  double t15874;
  double t15875;
  double t15984;
  double t15985;
  double t15986;
  double t15890;
  double t15891;
  double t15976;
  double t15977;
  double t15978;
  double t15906;
  double t15907;
  double t15908;
  double t15988;
  double t15989;
  double t15901;
  double t15902;
  double t15903;
  double t15904;
  double t15959;
  double t15960;
  double t15995;
  double t15996;
  double t15997;
  double t15998;
  double t16001;
  double t16004;
  double t16011;
  double t16012;
  double t15993;
  double t15994;
  double t15964;
  double t15968;
  double t15972;
  double t15975;
  double t15979;
  double t15983;
  double t15987;
  double t15990;
  double t15991;
  double t16019;
  double t16020;
  double t16022;
  double t16023;
  double t16024;
  double t16025;
  double t16026;
  double t16031;
  double t16035;
  double t16036;
  double t16038;
  double t16039;
  double t16040;
  double t16042;
  double t16043;
  double t16044;
  double t16045;
  double t16046;
  double t16051;
  double t16055;
  double t16056;
  double t16058;
  double t16059;
  double t16060;
  double t16112;
  double t16113;
  double t16114;
  double t16021;
  double t16027;
  double t16037;
  double t16041;
  double t16047;
  double t16057;
  double t16061;
  double t16062;
  double t16093;
  double t16094;
  double t16095;
  double t16096;
  double t16097;
  double t16098;
  double t16099;
  double t16100;
  double t16103;
  double t16104;
  double t16105;
  double t16106;
  double t16107;
  double t16108;
  double t16109;
  double t16110;
  double t16111;
  double t16115;
  double t16116;
  double t16117;
  double t16118;
  double t16119;
  double t16120;
  double t16121;
  double t16067;
  double t16068;
  double t16069;
  double t16070;
  double t15847;
  double t15860;
  double t15871;
  double t15872;
  double t16125;
  double t16126;
  double t16127;
  double t16128;
  double t16155;
  double t16156;
  double t16122;
  double t16123;
  double t16073;
  double t16074;
  double t16075;
  double t16076;
  double t15895;
  double t15905;
  double t15956;
  double t15957;
  double t16133;
  double t16134;
  double t16135;
  double t16136;
  double t16188;
  double t16189;
  double t16130;
  double t16131;
  t15817 = Cos(var2[3]);
  t12711 = Cos(var2[4]);
  t12712 = Sin(var2[3]);
  t15819 = Sin(var2[4]);
  t15828 = Cos(var2[2]);
  t12709 = Sin(var2[2]);
  t15816 = -1.*t12711*t12712;
  t15820 = -1.*t15817*t15819;
  t15825 = t15816 + t15820;
  t15826 = t12709*t15825;
  t15829 = t15817*t12711;
  t15833 = -1.*t12712*t15819;
  t15836 = t15829 + t15833;
  t15837 = t15828*t15836;
  t15838 = t15826 + t15837;
  t15848 = -1.*t12711;
  t15849 = 1. + t15848;
  t15852 = 0.4*t15849;
  t15853 = 0.64*t12711;
  t15854 = t15852 + t15853;
  t15879 = Cos(var2[5]);
  t15876 = Cos(var2[6]);
  t15877 = Sin(var2[5]);
  t15880 = Sin(var2[6]);
  t15878 = -1.*t15876*t15877;
  t15881 = -1.*t15879*t15880;
  t15882 = t15878 + t15881;
  t15883 = t12709*t15882;
  t15884 = t15879*t15876;
  t15885 = -1.*t15877*t15880;
  t15886 = t15884 + t15885;
  t15887 = t15828*t15886;
  t15888 = t15883 + t15887;
  t15896 = -1.*t15876;
  t15897 = 1. + t15896;
  t15898 = 0.4*t15897;
  t15899 = 0.64*t15876;
  t15900 = t15898 + t15899;
  t15844 = t15828*t15817;
  t15845 = -1.*t12709*t12712;
  t15846 = t15844 + t15845;
  t15864 = t12711*t12712;
  t15865 = t15817*t15819;
  t15867 = t15864 + t15865;
  t15868 = t15828*t15867;
  t15869 = t12709*t15836;
  t15870 = t15868 + t15869;
  t15892 = t15828*t15879;
  t15893 = -1.*t12709*t15877;
  t15894 = t15892 + t15893;
  t15909 = t15876*t15877;
  t15910 = t15879*t15880;
  t15952 = t15909 + t15910;
  t15953 = t15828*t15952;
  t15954 = t12709*t15886;
  t15955 = t15953 + t15954;
  t15965 = t15817*t12709;
  t15966 = t15828*t12712;
  t15967 = t15965 + t15966;
  t15980 = t15879*t12709;
  t15981 = t15828*t15877;
  t15982 = t15980 + t15981;
  t16028 = t15854*t12712;
  t16029 = 0.24*t15817*t15819;
  t16030 = t16028 + t16029;
  t16032 = t15817*t15854;
  t16033 = -0.24*t12712*t15819;
  t16034 = t16032 + t16033;
  t16048 = t15900*t15877;
  t16049 = 0.24*t15879*t15880;
  t16050 = t16048 + t16049;
  t16052 = t15879*t15900;
  t16053 = -0.24*t15877*t15880;
  t16054 = t16052 + t16053;
  t12673 = -1.*var1[6];
  t12708 = var3[4] + t12673;
  t15969 = t15828*t15825;
  t15970 = -1.*t12709*t15836;
  t15971 = t15969 + t15970;
  t15842 = -1.*var1[5];
  t15843 = var3[3] + t15842;
  t15961 = -1.*t15817*t12709;
  t15962 = -1.*t15828*t12712;
  t15963 = t15961 + t15962;
  t15861 = t15854*t15819;
  t15862 = -0.24*t12711*t15819;
  t15863 = t15861 + t15862;
  t15973 = -1.*t12709*t15867;
  t15974 = t15973 + t15837;
  t15855 = t15854*t12711;
  t15856 = Power(t15819,2);
  t15858 = 0.24*t15856;
  t15859 = t15855 + t15858;
  t15874 = -1.*var1[4];
  t15875 = var3[6] + t15874;
  t15984 = t15828*t15882;
  t15985 = -1.*t12709*t15886;
  t15986 = t15984 + t15985;
  t15890 = -1.*var1[3];
  t15891 = var3[5] + t15890;
  t15976 = -1.*t15879*t12709;
  t15977 = -1.*t15828*t15877;
  t15978 = t15976 + t15977;
  t15906 = t15900*t15880;
  t15907 = -0.24*t15876*t15880;
  t15908 = t15906 + t15907;
  t15988 = -1.*t12709*t15952;
  t15989 = t15988 + t15887;
  t15901 = t15900*t15876;
  t15902 = Power(t15880,2);
  t15903 = 0.24*t15902;
  t15904 = t15901 + t15903;
  t15959 = -1.*var1[1];
  t15960 = var3[1] + t15959;
  t15995 = Power(t15828,2);
  t15996 = 12.*t15995;
  t15997 = Power(t12709,2);
  t15998 = 12.*t15997;
  t16001 = Power(t15846,2);
  t16004 = 6.8*t16001;
  t16011 = Power(t15894,2);
  t16012 = 6.8*t16011;
  t15993 = -1.*var1[0];
  t15994 = var3[0] + t15993;
  t15964 = 6.8*t15963*t15846;
  t15968 = 6.8*t15967*t15846;
  t15972 = 3.2*t15838*t15971;
  t15975 = 3.2*t15974*t15870;
  t15979 = 6.8*t15978*t15894;
  t15983 = 6.8*t15982*t15894;
  t15987 = 3.2*t15888*t15986;
  t15990 = 3.2*t15989*t15955;
  t15991 = t15964 + t15968 + t15972 + t15975 + t15979 + t15983 + t15987 + t15990;
  t16019 = -1.*var1[2];
  t16020 = var3[2] + t16019;
  t16022 = Power(t15817,2);
  t16023 = 0.11*t16022;
  t16024 = Power(t12712,2);
  t16025 = 0.11*t16024;
  t16026 = t16023 + t16025;
  t16031 = -1.*t16030*t15836;
  t16035 = -1.*t15825*t16034;
  t16036 = t16031 + t16035;
  t16038 = t16030*t15867;
  t16039 = t15836*t16034;
  t16040 = t16038 + t16039;
  t16042 = Power(t15879,2);
  t16043 = 0.11*t16042;
  t16044 = Power(t15877,2);
  t16045 = 0.11*t16044;
  t16046 = t16043 + t16045;
  t16051 = -1.*t16050*t15886;
  t16055 = -1.*t15882*t16054;
  t16056 = t16051 + t16055;
  t16058 = t16050*t15952;
  t16059 = t15886*t16054;
  t16060 = t16058 + t16059;
  t16112 = -1.*t15828*t15817;
  t16113 = t12709*t12712;
  t16114 = t16112 + t16113;
  t16021 = 2.88*t15828;
  t16027 = 6.8*t15846*t16026;
  t16037 = 3.2*t15870*t16036;
  t16041 = 3.2*t15838*t16040;
  t16047 = 6.8*t15894*t16046;
  t16057 = 3.2*t15955*t16056;
  t16061 = 3.2*t15888*t16060;
  t16062 = t16021 + t16027 + t16037 + t16041 + t16047 + t16057 + t16061;
  t16093 = -2.88*t12709;
  t16094 = 6.8*t15963*t16026;
  t16095 = 3.2*t15974*t16036;
  t16096 = 3.2*t15971*t16040;
  t16097 = 6.8*t15978*t16046;
  t16098 = 3.2*t15989*t16056;
  t16099 = 3.2*t15986*t16060;
  t16100 = t16093 + t16094 + t16095 + t16096 + t16097 + t16098 + t16099;
  t16103 = 0.4*t15849*t15846;
  t16104 = -0.4*t15963*t15819;
  t16105 = t12711*t15846;
  t16106 = t15963*t15819;
  t16107 = t16105 + t16106;
  t16108 = 0.8*t16107;
  t16109 = t16103 + t16104 + t16108;
  t16110 = -1.*var4[0]*t16109;
  t16111 = 0.4*t15849*t15963;
  t16115 = -0.4*t16114*t15819;
  t16116 = t12711*t15963;
  t16117 = t16114*t15819;
  t16118 = t16116 + t16117;
  t16119 = 0.8*t16118;
  t16120 = t16111 + t16115 + t16119;
  t16121 = -1.*var4[2]*t16120;
  t16067 = 0.748*t15963;
  t16068 = 3.2*t15863*t15974;
  t16069 = 3.2*t15859*t15971;
  t16070 = t16067 + t16068 + t16069;
  t15847 = 0.748*t15846;
  t15860 = 3.2*t15859*t15838;
  t15871 = 3.2*t15863*t15870;
  t15872 = t15847 + t15860 + t15871;
  t16125 = 0.748*t16026;
  t16126 = 3.2*t15863*t16036;
  t16127 = 3.2*t15859*t16040;
  t16128 = 0.67 + t16125 + t16126 + t16127;
  t16155 = 0.768*t15859;
  t16156 = 0.2 + t16155;
  t16122 = 0.768*t16040;
  t16123 = 0.2 + t16122;
  t16073 = 0.748*t15978;
  t16074 = 3.2*t15908*t15989;
  t16075 = 3.2*t15904*t15986;
  t16076 = t16073 + t16074 + t16075;
  t15895 = 0.748*t15894;
  t15905 = 3.2*t15904*t15888;
  t15956 = 3.2*t15908*t15955;
  t15957 = t15895 + t15905 + t15956;
  t16133 = 0.748*t16046;
  t16134 = 3.2*t15908*t16056;
  t16135 = 3.2*t15904*t16060;
  t16136 = 0.67 + t16133 + t16134 + t16135;
  t16188 = 0.768*t15904;
  t16189 = 0.2 + t16188;
  t16130 = 0.768*t16060;
  t16131 = 0.2 + t16130;
  p_output1[0]=0.768*t12708*t15838 + t15843*t15872 + 0.768*t15875*t15888 + t15891*t15957 + t15960*t15991 + t15994*(3.2*Power(t15838,2) + 3.2*Power(t15870,2) + 3.2*Power(t15888,2) + 3.2*Power(t15955,2) + 6.8*Power(t15967,2) + 6.8*Power(t15982,2) + t15996 + t15998 + t16004 + t16012) + t16020*t16062 - 1.*var4[0];
  p_output1[1]=0.768*t12708*t15971 + 0.768*t15875*t15986 + t15991*t15994 + t15960*(6.8*Power(t15963,2) + 3.2*Power(t15971,2) + 3.2*Power(t15974,2) + 6.8*Power(t15978,2) + 3.2*Power(t15986,2) + 3.2*Power(t15989,2) + t15996 + t15998 + t16004 + t16012) + t15843*t16070 + t15891*t16076 + t16020*t16100 - 1.*var4[2];
  p_output1[2]=t16020*(3.3612 + 6.8*Power(t16026,2) + 3.2*Power(t16036,2) + 3.2*Power(t16040,2) + 6.8*Power(t16046,2) + 3.2*Power(t16056,2) + 3.2*Power(t16060,2)) + t15994*t16062 + t15960*t16100 + t16110 + t16121 + t12708*t16123 + t15843*t16128 + t15875*t16131 + t15891*t16136;
  p_output1[3]=t15843*(1.58228 + 3.2*Power(t15859,2) + 3.2*Power(t15863,2)) + t15872*t15994 + t15960*t16070 + t16110 + t16121 + t16020*t16128 + t12708*t16156;
  p_output1[4]=1.2143199999999998*t12708 + 0.768*t15960*t15971 + 0.768*t15838*t15994 + t16020*t16123 + t15843*t16156 - 1.*(-0.4*t12711*t15846 + 0.4*t15819*t15967 + 0.8*(-1.*t15819*t15967 + t16105))*var4[0] - 1.*(0.4*t15819*t15846 - 0.4*t12711*t15963 + 0.8*(-1.*t15819*t15846 + t16116))*var4[2];
  p_output1[5]=t15891*(1.58228 + 3.2*Power(t15904,2) + 3.2*Power(t15908,2)) + t15957*t15994 + t15960*t16076 + t16020*t16136 + t15875*t16189;
  p_output1[6]=1.2143199999999998*t15875 + 0.768*t15960*t15986 + 0.768*t15888*t15994 + t16020*t16131 + t15891*t16189;
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMapRightImpact.hh"

namespace RightImpact
{

void dxDiscreteMapRightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
