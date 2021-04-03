/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:04:52 GMT-05:00
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
  double t986;
  double t980;
  double t982;
  double t990;
  double t1006;
  double t974;
  double t1011;
  double t1014;
  double t1015;
  double t985;
  double t1001;
  double t1003;
  double t1004;
  double t1018;
  double t1020;
  double t1024;
  double t1026;
  double t1027;
  double t1028;
  double t1030;
  double t1032;
  double t1048;
  double t1050;
  double t1051;
  double t1052;
  double t1053;
  double t1054;
  double t1055;
  double t1056;
  double t1058;
  double t1059;
  double t1060;
  double t1039;
  double t1040;
  double t1041;
  double t1074;
  double t1075;
  double t1076;
  double t1044;
  double t1045;
  double t1069;
  double t1070;
  double t1071;
  double t1072;
  double t1057;
  double t1061;
  double t1062;
  double t1064;
  double t1065;
  double t1066;
  double t1080;
  double t1081;
  double t1083;
  double t1084;
  double t1117;
  double t1118;
  double t1119;
  double t1120;
  double t1121;
  double t1089;
  double t1090;
  double t1095;
  double t1096;
  double t1097;
  double t1110;
  double t1111;
  double t1140;
  double t1141;
  double t1142;
  double t1122;
  double t1123;
  double t1124;
  double t1127;
  double t1128;
  double t1129;
  double t1130;
  double t1131;
  double t1132;
  double t1133;
  double t1134;
  double t1135;
  double t1136;
  double t1137;
  double t1138;
  double t1139;
  double t1144;
  double t1145;
  double t1149;
  double t1169;
  double t1170;
  double t1151;
  double t1172;
  double t1173;
  double t1153;
  double t1021;
  double t1034;
  double t1042;
  double t1046;
  double t1047;
  double t1101;
  double t1103;
  double t1098;
  double t1099;
  double t1105;
  double t1106;
  double t1100;
  double t1102;
  double t1104;
  double t1107;
  double t1108;
  double t1143;
  double t1146;
  double t1147;
  double t1150;
  double t1152;
  double t1154;
  double t1222;
  double t1163;
  double t1164;
  double t1165;
  double t1223;
  double t1159;
  double t1160;
  double t1161;
  double t1224;
  double t1227;
  double t1228;
  double t1229;
  double t1230;
  double t1231;
  double t1232;
  double t1171;
  double t1174;
  double t1175;
  double t1234;
  double t1177;
  double t1178;
  double t1179;
  double t1187;
  double t1188;
  double t1189;
  double t1112;
  double t1113;
  double t1114;
  double t1085;
  double t1086;
  double t1087;
  double t1063;
  double t1067;
  double t1068;
  double t1200;
  double t1201;
  double t1202;
  double t1217;
  double t1218;
  double t1219;
  double t1233;
  double t1235;
  double t1236;
  double t1148;
  double t1155;
  double t1156;
  double t1243;
  double t1244;
  double t1245;
  double t1176;
  double t1180;
  double t1181;
  double t1190;
  double t1191;
  double t1192;
  double t1250;
  double t1252;
  double t1073;
  double t1077;
  double t1078;
  double t1203;
  double t1204;
  double t1205;
  double t1255;
  double t1256;
  double t1257;
  double t1208;
  double t1209;
  double t1210;
  double t1225;
  double t1125;
  double t1264;
  double t1265;
  double t1266;
  double t1239;
  double t1240;
  double t1241;
  double t1162;
  double t1166;
  double t1167;
  double t1276;
  double t1277;
  double t1278;
  double t1279;
  double t1280;
  double t1193;
  double t1194;
  double t1195;
  double t1292;
  double t1293;
  double t1294;
  double t1297;
  double t1299;
  double t1079;
  double t1206;
  double t1258;
  double t1259;
  double t1307;
  double t1312;
  double t1350;
  double t1351;
  double t1196;
  double t1249;
  double t1295;
  double t1296;
  double t1341;
  double t1342;
  t986 = Cos(var2[3]);
  t980 = Cos(var2[4]);
  t982 = Sin(var2[3]);
  t990 = Sin(var2[4]);
  t1006 = Cos(var2[2]);
  t974 = Sin(var2[2]);
  t1011 = t986*t980;
  t1014 = -1.*t982*t990;
  t1015 = t1011 + t1014;
  t985 = -1.*t980*t982;
  t1001 = -1.*t986*t990;
  t1003 = t985 + t1001;
  t1004 = t974*t1003;
  t1018 = t1006*t1015;
  t1020 = t1004 + t1018;
  t1024 = t980*t982;
  t1026 = t986*t990;
  t1027 = t1024 + t1026;
  t1028 = t1006*t1027;
  t1030 = t974*t1015;
  t1032 = t1028 + t1030;
  t1048 = -1.*t980;
  t1050 = 1. + t1048;
  t1051 = 0.4*t1050;
  t1052 = 0.64*t980;
  t1053 = t1051 + t1052;
  t1054 = t1053*t982;
  t1055 = 0.24*t986*t990;
  t1056 = t1054 + t1055;
  t1058 = t986*t1053;
  t1059 = -0.24*t982*t990;
  t1060 = t1058 + t1059;
  t1039 = t1006*t1003;
  t1040 = -1.*t974*t1015;
  t1041 = t1039 + t1040;
  t1074 = t1053*t990;
  t1075 = -0.24*t980*t990;
  t1076 = t1074 + t1075;
  t1044 = -1.*t974*t1027;
  t1045 = t1044 + t1018;
  t1069 = t1053*t980;
  t1070 = Power(t990,2);
  t1071 = 0.24*t1070;
  t1072 = t1069 + t1071;
  t1057 = -1.*t1056*t1015;
  t1061 = -1.*t1003*t1060;
  t1062 = t1057 + t1061;
  t1064 = t1056*t1027;
  t1065 = t1015*t1060;
  t1066 = t1064 + t1065;
  t1080 = -1.*var1[4];
  t1081 = var3[4] + t1080;
  t1083 = -1.*var1[3];
  t1084 = var3[3] + t1083;
  t1117 = -1.*t986*t980;
  t1118 = t982*t990;
  t1119 = t1117 + t1118;
  t1120 = t974*t1119;
  t1121 = t1039 + t1120;
  t1089 = -1.*var1[0];
  t1090 = var3[0] + t1089;
  t1095 = -1.*var1[1];
  t1096 = var3[1] + t1095;
  t1097 = -1.*t974*t1003;
  t1110 = -1.*var1[2];
  t1111 = var3[2] + t1110;
  t1140 = -1.*t1053*t982;
  t1141 = -0.24*t986*t990;
  t1142 = t1140 + t1141;
  t1122 = 0.768*t1081*t1121;
  t1123 = 3.2*t1076*t1020;
  t1124 = 3.2*t1072*t1121;
  t1127 = 6.4*t1020*t1032;
  t1128 = 6.4*t1020*t1121;
  t1129 = t1127 + t1128;
  t1130 = t1090*t1129;
  t1131 = 3.2*t1020*t1045;
  t1132 = 3.2*t1041*t1032;
  t1133 = t1006*t1119;
  t1134 = t1097 + t1133;
  t1135 = 3.2*t1020*t1134;
  t1136 = 3.2*t1041*t1121;
  t1137 = t1131 + t1132 + t1135 + t1136;
  t1138 = t1096*t1137;
  t1139 = 3.2*t1020*t1062;
  t1144 = t1056*t1015;
  t1145 = t1003*t1060;
  t1149 = 3.2*t1066*t1121;
  t1169 = -0.24*t980*t982;
  t1170 = t1169 + t1141;
  t1151 = -1.*t1003*t1056;
  t1172 = 0.24*t986*t980;
  t1173 = t1172 + t1059;
  t1153 = -1.*t1060*t1119;
  t1021 = Power(t1020,2);
  t1034 = Power(t1032,2);
  t1042 = -3.2*t1020*t1041;
  t1046 = -3.2*t1045*t1032;
  t1047 = t1042 + t1046;
  t1101 = Power(t1045,2);
  t1103 = Power(t1041,2);
  t1098 = -1.*t1006*t1015;
  t1099 = t1097 + t1098;
  t1105 = -1.*t1006*t1027;
  t1106 = t1105 + t1040;
  t1100 = 3.2*t1099*t1020;
  t1102 = 3.2*t1101;
  t1104 = 3.2*t1103;
  t1107 = 3.2*t1106*t1032;
  t1108 = t1100 + t1102 + t1104 + t1107;
  t1143 = t1142*t1015;
  t1146 = t1027*t1060;
  t1147 = t1143 + t1144 + t1145 + t1146;
  t1150 = -1.*t1003*t1142;
  t1152 = -1.*t1015*t1060;
  t1154 = t1150 + t1151 + t1152 + t1153;
  t1222 = 0.768*t1081*t1134;
  t1163 = Power(t980,2);
  t1164 = -0.24*t1163;
  t1165 = 0. + t1069 + t1164;
  t1223 = 3.2*t1076*t1041;
  t1159 = -1.*t1053*t990;
  t1160 = 0.24*t980*t990;
  t1161 = t1159 + t1160;
  t1224 = 3.2*t1072*t1134;
  t1227 = 6.4*t1045*t1041;
  t1228 = 6.4*t1041*t1134;
  t1229 = t1227 + t1228;
  t1230 = t1096*t1229;
  t1231 = t1090*t1137;
  t1232 = 3.2*t1041*t1062;
  t1171 = t1170*t1015;
  t1174 = t1027*t1173;
  t1175 = t1171 + t1144 + t1145 + t1174;
  t1234 = 3.2*t1066*t1134;
  t1177 = -1.*t1003*t1170;
  t1178 = -1.*t1015*t1173;
  t1179 = t1177 + t1151 + t1178 + t1153;
  t1187 = 3.2*t1020*t1041;
  t1188 = 3.2*t1045*t1032;
  t1189 = t1187 + t1188;
  t1112 = 3.2*t1045*t1062;
  t1113 = 3.2*t1041*t1066;
  t1114 = t1112 + t1113;
  t1085 = 3.2*t1076*t1045;
  t1086 = 3.2*t1072*t1041;
  t1087 = t1085 + t1086;
  t1063 = -3.2*t1032*t1062;
  t1067 = -3.2*t1020*t1066;
  t1068 = t1063 + t1067;
  t1200 = -3.2*t1045*t1062;
  t1201 = -3.2*t1041*t1066;
  t1202 = t1200 + t1201;
  t1217 = 3.2*t1106*t1062;
  t1218 = 3.2*t1099*t1066;
  t1219 = t1217 + t1218;
  t1233 = 3.2*t1041*t1147;
  t1235 = 3.2*t1045*t1154;
  t1236 = t1232 + t1233 + t1234 + t1235;
  t1148 = 3.2*t1020*t1147;
  t1155 = 3.2*t1032*t1154;
  t1156 = t1139 + t1148 + t1149 + t1155;
  t1243 = 3.2*t1041*t1175;
  t1244 = 3.2*t1045*t1179;
  t1245 = t1232 + t1243 + t1234 + t1244;
  t1176 = 3.2*t1020*t1175;
  t1180 = 3.2*t1032*t1179;
  t1181 = t1139 + t1176 + t1149 + t1180;
  t1190 = 3.2*t1032*t1062;
  t1191 = 3.2*t1020*t1066;
  t1192 = t1190 + t1191;
  t1250 = Power(t1062,2);
  t1252 = Power(t1066,2);
  t1073 = -3.2*t1072*t1020;
  t1077 = -3.2*t1076*t1032;
  t1078 = t1073 + t1077;
  t1203 = -3.2*t1076*t1045;
  t1204 = -3.2*t1072*t1041;
  t1205 = t1203 + t1204;
  t1255 = -3.2*t1076*t1062;
  t1256 = -3.2*t1072*t1066;
  t1257 = -0.2 + t1255 + t1256;
  t1208 = 3.2*t1072*t1099;
  t1209 = 3.2*t1076*t1106;
  t1210 = t1208 + t1209;
  t1225 = t1223 + t1224;
  t1125 = t1123 + t1124;
  t1264 = 3.2*t1072*t1147;
  t1265 = 3.2*t1076*t1154;
  t1266 = t1264 + t1265;
  t1239 = 3.2*t1165*t1045;
  t1240 = 3.2*t1161*t1041;
  t1241 = t1239 + t1223 + t1240 + t1224;
  t1162 = 3.2*t1161*t1020;
  t1166 = 3.2*t1165*t1032;
  t1167 = t1123 + t1162 + t1166 + t1124;
  t1276 = 3.2*t1165*t1062;
  t1277 = 3.2*t1161*t1066;
  t1278 = 3.2*t1072*t1175;
  t1279 = 3.2*t1076*t1179;
  t1280 = t1276 + t1277 + t1278 + t1279;
  t1193 = 3.2*t1072*t1020;
  t1194 = 3.2*t1076*t1032;
  t1195 = t1193 + t1194;
  t1292 = 3.2*t1076*t1062;
  t1293 = 3.2*t1072*t1066;
  t1294 = 0.2 + t1292 + t1293;
  t1297 = Power(t1076,2);
  t1299 = Power(t1072,2);
  t1079 = -0.768*t1020;
  t1206 = -0.768*t1041;
  t1258 = -0.768*t1066;
  t1259 = -0.2 + t1258;
  t1307 = -0.768*t1072;
  t1312 = -0.2 + t1307;
  t1350 = 0.768*t1096*t1134;
  t1351 = 0.768*t1090*t1121;
  t1196 = 0.768*t1020;
  t1249 = 0.768*t1041;
  t1295 = 0.768*t1066;
  t1296 = 0.2 + t1295;
  t1341 = 0.768*t1072;
  t1342 = 0.2 + t1341;
  p_output1[0]=-3.2*t1021 - 3.2*t1034;
  p_output1[1]=t1047;
  p_output1[2]=t1068;
  p_output1[3]=t1078;
  p_output1[4]=t1079;
  p_output1[5]=0.768*t1041*t1081 + t1084*t1087 + (6.4*t1020*t1041 + 6.4*t1032*t1045)*t1090 + t1096*t1108 + t1111*t1114;
  p_output1[6]=t1122 + t1084*t1125 + t1130 + t1138 + t1111*t1156;
  p_output1[7]=t1122 + t1130 + t1138 + t1084*t1167 + t1111*t1181;
  p_output1[8]=3.2*t1021 + 3.2*t1034;
  p_output1[9]=t1189;
  p_output1[10]=t1192;
  p_output1[11]=t1195;
  p_output1[12]=t1196;
  p_output1[13]=t1047;
  p_output1[14]=-3.2*t1101 - 3.2*t1103;
  p_output1[15]=t1202;
  p_output1[16]=t1205;
  p_output1[17]=t1206;
  p_output1[18]=0.768*t1081*t1099 + t1096*(6.4*t1041*t1099 + 6.4*t1045*t1106) + t1090*t1108 + t1084*t1210 + t1111*t1219;
  p_output1[19]=t1222 + t1084*t1225 + t1230 + t1231 + t1111*t1236;
  p_output1[20]=t1222 + t1230 + t1231 + t1084*t1241 + t1111*t1245;
  p_output1[21]=t1189;
  p_output1[22]=t1102 + t1104;
  p_output1[23]=t1114;
  p_output1[24]=t1087;
  p_output1[25]=t1249;
  p_output1[26]=t1068;
  p_output1[27]=t1202;
  p_output1[28]=-0.2 - 3.2*t1250 - 3.2*t1252;
  p_output1[29]=t1257;
  p_output1[30]=t1259;
  p_output1[31]=t1090*t1114 + t1096*t1219;
  p_output1[32]=0.768*t1081*t1147 + t1111*(6.4*t1066*t1147 + 6.4*t1062*t1154) + t1090*t1156 + t1096*t1236 + t1084*t1266;
  p_output1[33]=0.768*t1081*t1175 + t1111*(6.4*t1066*t1175 + 6.4*t1062*t1179) + t1090*t1181 + t1096*t1245 + t1084*t1280;
  p_output1[34]=t1192;
  p_output1[35]=t1114;
  p_output1[36]=0.2 + 3.2*t1250 + 3.2*t1252;
  p_output1[37]=t1294;
  p_output1[38]=t1296;
  p_output1[39]=t1078;
  p_output1[40]=t1205;
  p_output1[41]=t1257;
  p_output1[42]=-0.2 - 3.2*t1297 - 3.2*t1299;
  p_output1[43]=t1312;
  p_output1[44]=t1087*t1090 + t1096*t1210;
  p_output1[45]=t1090*t1125 + t1096*t1225 + t1111*t1266;
  p_output1[46]=0.768*t1081*t1161 + t1084*(6.4*t1072*t1161 + 6.4*t1076*t1165) + t1090*t1167 + t1096*t1241 + t1111*t1280;
  p_output1[47]=t1195;
  p_output1[48]=t1087;
  p_output1[49]=t1294;
  p_output1[50]=0.2 + 3.2*t1297 + 3.2*t1299;
  p_output1[51]=t1342;
  p_output1[52]=t1079;
  p_output1[53]=t1206;
  p_output1[54]=t1259;
  p_output1[55]=t1312;
  p_output1[56]=-0.38432;
  p_output1[57]=0.768*t1041*t1090 + 0.768*t1096*t1099;
  p_output1[58]=0.768*t1111*t1147 + t1350 + t1351;
  p_output1[59]=0.768*t1084*t1161 + 0.768*t1111*t1175 + t1350 + t1351;
  p_output1[60]=t1196;
  p_output1[61]=t1249;
  p_output1[62]=t1296;
  p_output1[63]=t1342;
  p_output1[64]=0.38432;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 65, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMap4_RightImpact.hh"

namespace RightImpact
{

void J_dxDiscreteMap4_RightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
