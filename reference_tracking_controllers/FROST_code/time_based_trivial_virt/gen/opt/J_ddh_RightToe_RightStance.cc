/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:57:47 GMT-04:00
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
  double t958;
  double t960;
  double t957;
  double t971;
  double t905;
  double t959;
  double t972;
  double t973;
  double t981;
  double t982;
  double t990;
  double t991;
  double t997;
  double t998;
  double t999;
  double t1013;
  double t1014;
  double t1015;
  double t1016;
  double t930;
  double t956;
  double t1020;
  double t1021;
  double t1023;
  double t1019;
  double t1025;
  double t1026;
  double t1027;
  double t1028;
  double t1034;
  double t1050;
  double t1052;
  double t1057;
  double t1058;
  double t1059;
  double t1060;
  double t1061;
  double t1068;
  double t1069;
  double t1070;
  double t1067;
  double t1071;
  double t1072;
  double t1073;
  double t1074;
  double t1075;
  double t1066;
  double t1076;
  double t1077;
  double t1078;
  double t974;
  double t992;
  double t993;
  double t994;
  double t995;
  double t996;
  double t1017;
  double t1018;
  double t1035;
  double t1036;
  double t1037;
  double t1048;
  double t1049;
  double t1051;
  double t1053;
  double t1054;
  double t1055;
  double t1056;
  double t1062;
  double t1063;
  double t1064;
  double t1065;
  double t1079;
  double t1080;
  double t1081;
  double t1091;
  double t1092;
  double t1093;
  double t1094;
  double t1095;
  double t1109;
  double t1110;
  double t1111;
  double t1112;
  double t1082;
  double t1083;
  double t1084;
  double t1085;
  double t1086;
  double t1117;
  double t1123;
  double t1125;
  double t1130;
  double t1131;
  double t1132;
  double t1133;
  double t1134;
  double t1139;
  double t1140;
  double t1141;
  double t1142;
  double t1143;
  double t1144;
  double t1145;
  double t1146;
  double t1147;
  double t1148;
  double t1119;
  double t1120;
  double t1121;
  double t1122;
  double t1124;
  double t1126;
  double t1127;
  double t1128;
  double t1129;
  double t1135;
  double t1136;
  double t1137;
  double t1138;
  double t1149;
  double t1150;
  double t1151;
  double t1166;
  double t1167;
  double t1168;
  double t1169;
  t958 = Cos(var1[3]);
  t960 = Sin(var1[2]);
  t957 = Cos(var1[2]);
  t971 = Sin(var1[3]);
  t905 = Cos(var1[4]);
  t959 = t957*t958;
  t972 = -1.*t960*t971;
  t973 = t959 + t972;
  t981 = -1.*t958*t960;
  t982 = -1.*t957*t971;
  t990 = t981 + t982;
  t991 = Sin(var1[4]);
  t997 = -0.4*t905*t990;
  t998 = 0.4*t973*t991;
  t999 = t905*t990;
  t1013 = -1.*t973*t991;
  t1014 = t999 + t1013;
  t1015 = 0.8*t1014;
  t1016 = t997 + t998 + t1015;
  t930 = -1.*t905;
  t956 = 1. + t930;
  t1020 = -1.*t957*t958;
  t1021 = t960*t971;
  t1023 = t1020 + t1021;
  t1019 = 0.4*t956*t990;
  t1025 = -0.4*t1023*t991;
  t1026 = t1023*t991;
  t1027 = t999 + t1026;
  t1028 = 0.8*t1027;
  t1034 = t1019 + t1025 + t1028;
  t1050 = 0.4*t990*t991;
  t1052 = -1.*t990*t991;
  t1057 = -0.4*t905*t1023;
  t1058 = t905*t1023;
  t1059 = t1058 + t1052;
  t1060 = 0.8*t1059;
  t1061 = t1057 + t1050 + t1060;
  t1068 = t958*t960;
  t1069 = t957*t971;
  t1070 = t1068 + t1069;
  t1067 = 0.4*t956*t1023;
  t1071 = -0.4*t1070*t991;
  t1072 = t1070*t991;
  t1073 = t1058 + t1072;
  t1074 = 0.8*t1073;
  t1075 = t1067 + t1071 + t1074;
  t1066 = var2[4]*t1061;
  t1076 = var2[2]*t1075;
  t1077 = var2[3]*t1075;
  t1078 = t1066 + t1076 + t1077;
  t974 = 0.4*t956*t973;
  t992 = -0.4*t990*t991;
  t993 = t905*t973;
  t994 = t990*t991;
  t995 = t993 + t994;
  t996 = 0.8*t995;
  t1017 = var3[4]*t1016;
  t1018 = var2[4]*t1016;
  t1035 = var3[2]*t1034;
  t1036 = var3[3]*t1034;
  t1037 = var2[2]*t1034;
  t1048 = var2[3]*t1034;
  t1049 = 0.4*t905*t973;
  t1051 = -1.*t905*t973;
  t1053 = t1051 + t1052;
  t1054 = 0.8*t1053;
  t1055 = t1049 + t1050 + t1054;
  t1056 = var2[4]*t1055;
  t1062 = var2[2]*t1061;
  t1063 = var2[3]*t1061;
  t1064 = t1056 + t1062 + t1063;
  t1065 = var2[4]*t1064;
  t1079 = var2[2]*t1078;
  t1080 = var2[3]*t1078;
  t1081 = t974 + t992 + t996 + t1017 + t1018 + t1035 + t1036 + t1037 + t1048 + t1065 + t1079 + t1080;
  t1091 = 0.4*t905*t1070;
  t1092 = -1.*t905*t1070;
  t1093 = t1092 + t1013;
  t1094 = 0.8*t1093;
  t1095 = t1091 + t998 + t1094;
  t1109 = 2.*var2[4]*t1016;
  t1110 = 2.*var2[2]*t1034;
  t1111 = 2.*var2[3]*t1034;
  t1112 = t974 + t992 + t996 + t1109 + t1110 + t1111;
  t1082 = -0.4*t905*t973;
  t1083 = 0.4*t1070*t991;
  t1084 = -1.*t1070*t991;
  t1085 = t993 + t1084;
  t1086 = 0.8*t1085;
  t1117 = t974 + t992 + t996;
  t1123 = 0.4*t1023*t991;
  t1125 = -1.*t1023*t991;
  t1130 = -0.4*t905*t1070;
  t1131 = t905*t1070;
  t1132 = t1131 + t1125;
  t1133 = 0.8*t1132;
  t1134 = t1130 + t1123 + t1133;
  t1139 = 0.4*t956*t1070;
  t1140 = -0.4*t973*t991;
  t1141 = t973*t991;
  t1142 = t1131 + t1141;
  t1143 = 0.8*t1142;
  t1144 = t1139 + t1140 + t1143;
  t1145 = var2[2]*t1144;
  t1146 = var2[3]*t1144;
  t1147 = var2[4]*t1134;
  t1148 = t1145 + t1146 + t1147;
  t1119 = var3[4]*t1061;
  t1120 = var3[2]*t1075;
  t1121 = var3[3]*t1075;
  t1122 = 0.4*t905*t990;
  t1124 = -1.*t905*t990;
  t1126 = t1124 + t1125;
  t1127 = 0.8*t1126;
  t1128 = t1122 + t1123 + t1127;
  t1129 = var2[4]*t1128;
  t1135 = var2[2]*t1134;
  t1136 = var2[3]*t1134;
  t1137 = t1129 + t1135 + t1136;
  t1138 = var2[4]*t1137;
  t1149 = var2[2]*t1148;
  t1150 = var2[3]*t1148;
  t1151 = t1019 + t1025 + t1028 + t1119 + t1066 + t1120 + t1121 + t1076 + t1077 + t1138 + t1149 + t1150;
  t1166 = 2.*var2[4]*t1061;
  t1167 = 2.*var2[2]*t1075;
  t1168 = 2.*var2[3]*t1075;
  t1169 = t1019 + t1025 + t1028 + t1166 + t1167 + t1168;
  p_output1[0]=1.;
  p_output1[1]=t1081;
  p_output1[2]=t1081;
  p_output1[3]=t1082 + t1083 + t1086 + t1016*var2[2] + t1064*var2[2] + t1016*var2[3] + t1064*var2[3] + t1095*var2[4] + var2[4]*(t1055*var2[2] + t1055*var2[3] + (t1049 + t1071 + 0.8*(t1051 + t1072))*var2[4]) + t1016*var3[2] + t1016*var3[3] + t1095*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t1112;
  p_output1[6]=t1112;
  p_output1[7]=t1082 + t1083 + t1086 + 2.*t1016*var2[2] + 2.*t1016*var2[3] + 2.*t1095*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t1117;
  p_output1[10]=t1117;
  p_output1[11]=t1082 + t1083 + t1086;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t1151;
  p_output1[16]=t1151;
  p_output1[17]=t1015 + t1056 + t1062 + t1063 + t997 + t998 + t1137*var2[2] + t1137*var2[3] + var2[4]*(t1128*var2[2] + t1128*var2[3] + (t1122 + t1140 + 0.8*(t1124 + t1141))*var2[4]) + t1061*var3[2] + t1061*var3[3] + t1055*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t1169;
  p_output1[20]=t1169;
  p_output1[21]=t1015 + t997 + t998 + 2.*t1061*var2[2] + 2.*t1061*var2[3] + 2.*t1055*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t1034;
  p_output1[24]=t1034;
  p_output1[25]=t1016;
  p_output1[26]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightToe_RightStance.hh"

namespace RightStance
{

void J_ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
