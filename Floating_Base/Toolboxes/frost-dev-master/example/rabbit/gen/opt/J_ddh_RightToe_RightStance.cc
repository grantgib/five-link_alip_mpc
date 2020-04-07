/*
 * Automatically Generated from Mathematica.
 * Mon 6 Apr 2020 23:57:23 GMT-04:00
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
  double t998;
  double t1000;
  double t997;
  double t1011;
  double t945;
  double t999;
  double t1012;
  double t1013;
  double t1021;
  double t1022;
  double t1030;
  double t1031;
  double t1037;
  double t1038;
  double t1039;
  double t1053;
  double t1054;
  double t1055;
  double t1056;
  double t970;
  double t996;
  double t1060;
  double t1061;
  double t1063;
  double t1059;
  double t1065;
  double t1066;
  double t1067;
  double t1068;
  double t1074;
  double t1090;
  double t1092;
  double t1097;
  double t1098;
  double t1099;
  double t1100;
  double t1101;
  double t1108;
  double t1109;
  double t1110;
  double t1107;
  double t1111;
  double t1112;
  double t1113;
  double t1114;
  double t1115;
  double t1106;
  double t1116;
  double t1117;
  double t1118;
  double t1014;
  double t1032;
  double t1033;
  double t1034;
  double t1035;
  double t1036;
  double t1057;
  double t1058;
  double t1075;
  double t1076;
  double t1077;
  double t1088;
  double t1089;
  double t1091;
  double t1093;
  double t1094;
  double t1095;
  double t1096;
  double t1102;
  double t1103;
  double t1104;
  double t1105;
  double t1119;
  double t1120;
  double t1121;
  double t1131;
  double t1132;
  double t1133;
  double t1134;
  double t1135;
  double t1149;
  double t1150;
  double t1151;
  double t1152;
  double t1122;
  double t1123;
  double t1124;
  double t1125;
  double t1126;
  double t1157;
  double t1163;
  double t1165;
  double t1170;
  double t1171;
  double t1172;
  double t1173;
  double t1174;
  double t1179;
  double t1180;
  double t1181;
  double t1182;
  double t1183;
  double t1184;
  double t1185;
  double t1186;
  double t1187;
  double t1188;
  double t1159;
  double t1160;
  double t1161;
  double t1162;
  double t1164;
  double t1166;
  double t1167;
  double t1168;
  double t1169;
  double t1175;
  double t1176;
  double t1177;
  double t1178;
  double t1189;
  double t1190;
  double t1191;
  double t1206;
  double t1207;
  double t1208;
  double t1209;
  t998 = Cos(var1[3]);
  t1000 = Sin(var1[2]);
  t997 = Cos(var1[2]);
  t1011 = Sin(var1[3]);
  t945 = Cos(var1[4]);
  t999 = t997*t998;
  t1012 = -1.*t1000*t1011;
  t1013 = t999 + t1012;
  t1021 = -1.*t998*t1000;
  t1022 = -1.*t997*t1011;
  t1030 = t1021 + t1022;
  t1031 = Sin(var1[4]);
  t1037 = -0.4*t945*t1030;
  t1038 = 0.4*t1013*t1031;
  t1039 = t945*t1030;
  t1053 = -1.*t1013*t1031;
  t1054 = t1039 + t1053;
  t1055 = 0.8*t1054;
  t1056 = t1037 + t1038 + t1055;
  t970 = -1.*t945;
  t996 = 1. + t970;
  t1060 = -1.*t997*t998;
  t1061 = t1000*t1011;
  t1063 = t1060 + t1061;
  t1059 = 0.4*t996*t1030;
  t1065 = -0.4*t1063*t1031;
  t1066 = t1063*t1031;
  t1067 = t1039 + t1066;
  t1068 = 0.8*t1067;
  t1074 = t1059 + t1065 + t1068;
  t1090 = 0.4*t1030*t1031;
  t1092 = -1.*t1030*t1031;
  t1097 = -0.4*t945*t1063;
  t1098 = t945*t1063;
  t1099 = t1098 + t1092;
  t1100 = 0.8*t1099;
  t1101 = t1097 + t1090 + t1100;
  t1108 = t998*t1000;
  t1109 = t997*t1011;
  t1110 = t1108 + t1109;
  t1107 = 0.4*t996*t1063;
  t1111 = -0.4*t1110*t1031;
  t1112 = t1110*t1031;
  t1113 = t1098 + t1112;
  t1114 = 0.8*t1113;
  t1115 = t1107 + t1111 + t1114;
  t1106 = var2[4]*t1101;
  t1116 = var2[2]*t1115;
  t1117 = var2[3]*t1115;
  t1118 = t1106 + t1116 + t1117;
  t1014 = 0.4*t996*t1013;
  t1032 = -0.4*t1030*t1031;
  t1033 = t945*t1013;
  t1034 = t1030*t1031;
  t1035 = t1033 + t1034;
  t1036 = 0.8*t1035;
  t1057 = var3[4]*t1056;
  t1058 = var2[4]*t1056;
  t1075 = var3[2]*t1074;
  t1076 = var3[3]*t1074;
  t1077 = var2[2]*t1074;
  t1088 = var2[3]*t1074;
  t1089 = 0.4*t945*t1013;
  t1091 = -1.*t945*t1013;
  t1093 = t1091 + t1092;
  t1094 = 0.8*t1093;
  t1095 = t1089 + t1090 + t1094;
  t1096 = var2[4]*t1095;
  t1102 = var2[2]*t1101;
  t1103 = var2[3]*t1101;
  t1104 = t1096 + t1102 + t1103;
  t1105 = var2[4]*t1104;
  t1119 = var2[2]*t1118;
  t1120 = var2[3]*t1118;
  t1121 = t1014 + t1032 + t1036 + t1057 + t1058 + t1075 + t1076 + t1077 + t1088 + t1105 + t1119 + t1120;
  t1131 = 0.4*t945*t1110;
  t1132 = -1.*t945*t1110;
  t1133 = t1132 + t1053;
  t1134 = 0.8*t1133;
  t1135 = t1131 + t1038 + t1134;
  t1149 = 2.*var2[4]*t1056;
  t1150 = 2.*var2[2]*t1074;
  t1151 = 2.*var2[3]*t1074;
  t1152 = t1014 + t1032 + t1036 + t1149 + t1150 + t1151;
  t1122 = -0.4*t945*t1013;
  t1123 = 0.4*t1110*t1031;
  t1124 = -1.*t1110*t1031;
  t1125 = t1033 + t1124;
  t1126 = 0.8*t1125;
  t1157 = t1014 + t1032 + t1036;
  t1163 = 0.4*t1063*t1031;
  t1165 = -1.*t1063*t1031;
  t1170 = -0.4*t945*t1110;
  t1171 = t945*t1110;
  t1172 = t1171 + t1165;
  t1173 = 0.8*t1172;
  t1174 = t1170 + t1163 + t1173;
  t1179 = 0.4*t996*t1110;
  t1180 = -0.4*t1013*t1031;
  t1181 = t1013*t1031;
  t1182 = t1171 + t1181;
  t1183 = 0.8*t1182;
  t1184 = t1179 + t1180 + t1183;
  t1185 = var2[2]*t1184;
  t1186 = var2[3]*t1184;
  t1187 = var2[4]*t1174;
  t1188 = t1185 + t1186 + t1187;
  t1159 = var3[4]*t1101;
  t1160 = var3[2]*t1115;
  t1161 = var3[3]*t1115;
  t1162 = 0.4*t945*t1030;
  t1164 = -1.*t945*t1030;
  t1166 = t1164 + t1165;
  t1167 = 0.8*t1166;
  t1168 = t1162 + t1163 + t1167;
  t1169 = var2[4]*t1168;
  t1175 = var2[2]*t1174;
  t1176 = var2[3]*t1174;
  t1177 = t1169 + t1175 + t1176;
  t1178 = var2[4]*t1177;
  t1189 = var2[2]*t1188;
  t1190 = var2[3]*t1188;
  t1191 = t1059 + t1065 + t1068 + t1159 + t1106 + t1160 + t1161 + t1116 + t1117 + t1178 + t1189 + t1190;
  t1206 = 2.*var2[4]*t1101;
  t1207 = 2.*var2[2]*t1115;
  t1208 = 2.*var2[3]*t1115;
  t1209 = t1059 + t1065 + t1068 + t1206 + t1207 + t1208;
  p_output1[0]=1.;
  p_output1[1]=t1121;
  p_output1[2]=t1121;
  p_output1[3]=t1122 + t1123 + t1126 + t1056*var2[2] + t1104*var2[2] + t1056*var2[3] + t1104*var2[3] + t1135*var2[4] + var2[4]*(t1095*var2[2] + t1095*var2[3] + (t1089 + t1111 + 0.8*(t1091 + t1112))*var2[4]) + t1056*var3[2] + t1056*var3[3] + t1135*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t1152;
  p_output1[6]=t1152;
  p_output1[7]=t1122 + t1123 + t1126 + 2.*t1056*var2[2] + 2.*t1056*var2[3] + 2.*t1135*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t1157;
  p_output1[10]=t1157;
  p_output1[11]=t1122 + t1123 + t1126;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t1191;
  p_output1[16]=t1191;
  p_output1[17]=t1037 + t1038 + t1055 + t1096 + t1102 + t1103 + t1177*var2[2] + t1177*var2[3] + var2[4]*(t1168*var2[2] + t1168*var2[3] + (t1162 + t1180 + 0.8*(t1164 + t1181))*var2[4]) + t1101*var3[2] + t1101*var3[3] + t1095*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t1209;
  p_output1[20]=t1209;
  p_output1[21]=t1037 + t1038 + t1055 + 2.*t1101*var2[2] + 2.*t1101*var2[3] + 2.*t1095*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t1074;
  p_output1[24]=t1074;
  p_output1[25]=t1056;
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
