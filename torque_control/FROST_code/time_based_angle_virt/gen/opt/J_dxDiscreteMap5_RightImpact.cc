/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:04:55 GMT-05:00
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
  double t1021;
  double t1011;
  double t1018;
  double t1023;
  double t1030;
  double t1004;
  double t1032;
  double t1034;
  double t1035;
  double t1020;
  double t1024;
  double t1026;
  double t1028;
  double t1038;
  double t1039;
  double t1045;
  double t1046;
  double t1047;
  double t1051;
  double t1052;
  double t1054;
  double t1070;
  double t1071;
  double t1072;
  double t1073;
  double t1074;
  double t1075;
  double t1076;
  double t1077;
  double t1079;
  double t1081;
  double t1082;
  double t1062;
  double t1063;
  double t1064;
  double t1101;
  double t1102;
  double t1103;
  double t1066;
  double t1067;
  double t1093;
  double t1094;
  double t1096;
  double t1099;
  double t1078;
  double t1084;
  double t1085;
  double t1087;
  double t1088;
  double t1090;
  double t1108;
  double t1109;
  double t1112;
  double t1113;
  double t1154;
  double t1155;
  double t1156;
  double t1157;
  double t1158;
  double t1120;
  double t1121;
  double t1126;
  double t1127;
  double t1128;
  double t1143;
  double t1144;
  double t1182;
  double t1183;
  double t1184;
  double t1160;
  double t1161;
  double t1162;
  double t1165;
  double t1166;
  double t1167;
  double t1168;
  double t1169;
  double t1171;
  double t1172;
  double t1174;
  double t1175;
  double t1176;
  double t1179;
  double t1180;
  double t1181;
  double t1186;
  double t1187;
  double t1191;
  double t1211;
  double t1212;
  double t1193;
  double t1214;
  double t1215;
  double t1195;
  double t1041;
  double t1055;
  double t1065;
  double t1068;
  double t1069;
  double t1132;
  double t1134;
  double t1129;
  double t1130;
  double t1136;
  double t1137;
  double t1131;
  double t1133;
  double t1135;
  double t1138;
  double t1139;
  double t1185;
  double t1188;
  double t1189;
  double t1192;
  double t1194;
  double t1196;
  double t1264;
  double t1205;
  double t1206;
  double t1207;
  double t1265;
  double t1201;
  double t1202;
  double t1203;
  double t1266;
  double t1269;
  double t1270;
  double t1271;
  double t1272;
  double t1273;
  double t1274;
  double t1213;
  double t1216;
  double t1217;
  double t1276;
  double t1219;
  double t1220;
  double t1221;
  double t1229;
  double t1230;
  double t1231;
  double t1145;
  double t1146;
  double t1147;
  double t1114;
  double t1115;
  double t1116;
  double t1086;
  double t1091;
  double t1092;
  double t1242;
  double t1243;
  double t1244;
  double t1259;
  double t1260;
  double t1261;
  double t1275;
  double t1277;
  double t1278;
  double t1190;
  double t1197;
  double t1198;
  double t1285;
  double t1286;
  double t1287;
  double t1218;
  double t1222;
  double t1223;
  double t1232;
  double t1233;
  double t1234;
  double t1292;
  double t1294;
  double t1100;
  double t1104;
  double t1106;
  double t1245;
  double t1246;
  double t1247;
  double t1297;
  double t1298;
  double t1299;
  double t1250;
  double t1251;
  double t1252;
  double t1267;
  double t1163;
  double t1319;
  double t1320;
  double t1321;
  double t1281;
  double t1282;
  double t1283;
  double t1204;
  double t1208;
  double t1209;
  double t1334;
  double t1336;
  double t1337;
  double t1338;
  double t1339;
  double t1235;
  double t1236;
  double t1237;
  double t1356;
  double t1357;
  double t1358;
  double t1361;
  double t1363;
  double t1107;
  double t1248;
  double t1300;
  double t1301;
  double t1367;
  double t1368;
  double t1399;
  double t1400;
  double t1238;
  double t1291;
  double t1359;
  double t1360;
  double t1392;
  double t1393;
  t1021 = Cos(var2[5]);
  t1011 = Cos(var2[6]);
  t1018 = Sin(var2[5]);
  t1023 = Sin(var2[6]);
  t1030 = Cos(var2[2]);
  t1004 = Sin(var2[2]);
  t1032 = t1021*t1011;
  t1034 = -1.*t1018*t1023;
  t1035 = t1032 + t1034;
  t1020 = -1.*t1011*t1018;
  t1024 = -1.*t1021*t1023;
  t1026 = t1020 + t1024;
  t1028 = t1004*t1026;
  t1038 = t1030*t1035;
  t1039 = t1028 + t1038;
  t1045 = t1011*t1018;
  t1046 = t1021*t1023;
  t1047 = t1045 + t1046;
  t1051 = t1030*t1047;
  t1052 = t1004*t1035;
  t1054 = t1051 + t1052;
  t1070 = -1.*t1011;
  t1071 = 1. + t1070;
  t1072 = 0.4*t1071;
  t1073 = 0.64*t1011;
  t1074 = t1072 + t1073;
  t1075 = t1074*t1018;
  t1076 = 0.24*t1021*t1023;
  t1077 = t1075 + t1076;
  t1079 = t1021*t1074;
  t1081 = -0.24*t1018*t1023;
  t1082 = t1079 + t1081;
  t1062 = t1030*t1026;
  t1063 = -1.*t1004*t1035;
  t1064 = t1062 + t1063;
  t1101 = t1074*t1023;
  t1102 = -0.24*t1011*t1023;
  t1103 = t1101 + t1102;
  t1066 = -1.*t1004*t1047;
  t1067 = t1066 + t1038;
  t1093 = t1074*t1011;
  t1094 = Power(t1023,2);
  t1096 = 0.24*t1094;
  t1099 = t1093 + t1096;
  t1078 = -1.*t1077*t1035;
  t1084 = -1.*t1026*t1082;
  t1085 = t1078 + t1084;
  t1087 = t1077*t1047;
  t1088 = t1035*t1082;
  t1090 = t1087 + t1088;
  t1108 = -1.*var1[6];
  t1109 = var3[6] + t1108;
  t1112 = -1.*var1[5];
  t1113 = var3[5] + t1112;
  t1154 = -1.*t1021*t1011;
  t1155 = t1018*t1023;
  t1156 = t1154 + t1155;
  t1157 = t1004*t1156;
  t1158 = t1062 + t1157;
  t1120 = -1.*var1[0];
  t1121 = var3[0] + t1120;
  t1126 = -1.*var1[1];
  t1127 = var3[1] + t1126;
  t1128 = -1.*t1004*t1026;
  t1143 = -1.*var1[2];
  t1144 = var3[2] + t1143;
  t1182 = -1.*t1074*t1018;
  t1183 = -0.24*t1021*t1023;
  t1184 = t1182 + t1183;
  t1160 = 0.768*t1109*t1158;
  t1161 = 3.2*t1103*t1039;
  t1162 = 3.2*t1099*t1158;
  t1165 = 6.4*t1039*t1054;
  t1166 = 6.4*t1039*t1158;
  t1167 = t1165 + t1166;
  t1168 = t1121*t1167;
  t1169 = 3.2*t1039*t1067;
  t1171 = 3.2*t1064*t1054;
  t1172 = t1030*t1156;
  t1174 = t1128 + t1172;
  t1175 = 3.2*t1039*t1174;
  t1176 = 3.2*t1064*t1158;
  t1179 = t1169 + t1171 + t1175 + t1176;
  t1180 = t1127*t1179;
  t1181 = 3.2*t1039*t1085;
  t1186 = t1077*t1035;
  t1187 = t1026*t1082;
  t1191 = 3.2*t1090*t1158;
  t1211 = -0.24*t1011*t1018;
  t1212 = t1211 + t1183;
  t1193 = -1.*t1026*t1077;
  t1214 = 0.24*t1021*t1011;
  t1215 = t1214 + t1081;
  t1195 = -1.*t1082*t1156;
  t1041 = Power(t1039,2);
  t1055 = Power(t1054,2);
  t1065 = -3.2*t1039*t1064;
  t1068 = -3.2*t1067*t1054;
  t1069 = t1065 + t1068;
  t1132 = Power(t1067,2);
  t1134 = Power(t1064,2);
  t1129 = -1.*t1030*t1035;
  t1130 = t1128 + t1129;
  t1136 = -1.*t1030*t1047;
  t1137 = t1136 + t1063;
  t1131 = 3.2*t1130*t1039;
  t1133 = 3.2*t1132;
  t1135 = 3.2*t1134;
  t1138 = 3.2*t1137*t1054;
  t1139 = t1131 + t1133 + t1135 + t1138;
  t1185 = t1184*t1035;
  t1188 = t1047*t1082;
  t1189 = t1185 + t1186 + t1187 + t1188;
  t1192 = -1.*t1026*t1184;
  t1194 = -1.*t1035*t1082;
  t1196 = t1192 + t1193 + t1194 + t1195;
  t1264 = 0.768*t1109*t1174;
  t1205 = Power(t1011,2);
  t1206 = -0.24*t1205;
  t1207 = 0. + t1093 + t1206;
  t1265 = 3.2*t1103*t1064;
  t1201 = -1.*t1074*t1023;
  t1202 = 0.24*t1011*t1023;
  t1203 = t1201 + t1202;
  t1266 = 3.2*t1099*t1174;
  t1269 = 6.4*t1067*t1064;
  t1270 = 6.4*t1064*t1174;
  t1271 = t1269 + t1270;
  t1272 = t1127*t1271;
  t1273 = t1121*t1179;
  t1274 = 3.2*t1064*t1085;
  t1213 = t1212*t1035;
  t1216 = t1047*t1215;
  t1217 = t1213 + t1186 + t1187 + t1216;
  t1276 = 3.2*t1090*t1174;
  t1219 = -1.*t1026*t1212;
  t1220 = -1.*t1035*t1215;
  t1221 = t1219 + t1193 + t1220 + t1195;
  t1229 = 3.2*t1039*t1064;
  t1230 = 3.2*t1067*t1054;
  t1231 = t1229 + t1230;
  t1145 = 3.2*t1067*t1085;
  t1146 = 3.2*t1064*t1090;
  t1147 = t1145 + t1146;
  t1114 = 3.2*t1103*t1067;
  t1115 = 3.2*t1099*t1064;
  t1116 = t1114 + t1115;
  t1086 = -3.2*t1054*t1085;
  t1091 = -3.2*t1039*t1090;
  t1092 = t1086 + t1091;
  t1242 = -3.2*t1067*t1085;
  t1243 = -3.2*t1064*t1090;
  t1244 = t1242 + t1243;
  t1259 = 3.2*t1137*t1085;
  t1260 = 3.2*t1130*t1090;
  t1261 = t1259 + t1260;
  t1275 = 3.2*t1064*t1189;
  t1277 = 3.2*t1067*t1196;
  t1278 = t1274 + t1275 + t1276 + t1277;
  t1190 = 3.2*t1039*t1189;
  t1197 = 3.2*t1054*t1196;
  t1198 = t1181 + t1190 + t1191 + t1197;
  t1285 = 3.2*t1064*t1217;
  t1286 = 3.2*t1067*t1221;
  t1287 = t1274 + t1285 + t1276 + t1286;
  t1218 = 3.2*t1039*t1217;
  t1222 = 3.2*t1054*t1221;
  t1223 = t1181 + t1218 + t1191 + t1222;
  t1232 = 3.2*t1054*t1085;
  t1233 = 3.2*t1039*t1090;
  t1234 = t1232 + t1233;
  t1292 = Power(t1085,2);
  t1294 = Power(t1090,2);
  t1100 = -3.2*t1099*t1039;
  t1104 = -3.2*t1103*t1054;
  t1106 = t1100 + t1104;
  t1245 = -3.2*t1103*t1067;
  t1246 = -3.2*t1099*t1064;
  t1247 = t1245 + t1246;
  t1297 = -3.2*t1103*t1085;
  t1298 = -3.2*t1099*t1090;
  t1299 = -0.2 + t1297 + t1298;
  t1250 = 3.2*t1099*t1130;
  t1251 = 3.2*t1103*t1137;
  t1252 = t1250 + t1251;
  t1267 = t1265 + t1266;
  t1163 = t1161 + t1162;
  t1319 = 3.2*t1099*t1189;
  t1320 = 3.2*t1103*t1196;
  t1321 = t1319 + t1320;
  t1281 = 3.2*t1207*t1067;
  t1282 = 3.2*t1203*t1064;
  t1283 = t1281 + t1265 + t1282 + t1266;
  t1204 = 3.2*t1203*t1039;
  t1208 = 3.2*t1207*t1054;
  t1209 = t1161 + t1204 + t1208 + t1162;
  t1334 = 3.2*t1207*t1085;
  t1336 = 3.2*t1203*t1090;
  t1337 = 3.2*t1099*t1217;
  t1338 = 3.2*t1103*t1221;
  t1339 = t1334 + t1336 + t1337 + t1338;
  t1235 = 3.2*t1099*t1039;
  t1236 = 3.2*t1103*t1054;
  t1237 = t1235 + t1236;
  t1356 = 3.2*t1103*t1085;
  t1357 = 3.2*t1099*t1090;
  t1358 = 0.2 + t1356 + t1357;
  t1361 = Power(t1103,2);
  t1363 = Power(t1099,2);
  t1107 = -0.768*t1039;
  t1248 = -0.768*t1064;
  t1300 = -0.768*t1090;
  t1301 = -0.2 + t1300;
  t1367 = -0.768*t1099;
  t1368 = -0.2 + t1367;
  t1399 = 0.768*t1127*t1174;
  t1400 = 0.768*t1121*t1158;
  t1238 = 0.768*t1039;
  t1291 = 0.768*t1064;
  t1359 = 0.768*t1090;
  t1360 = 0.2 + t1359;
  t1392 = 0.768*t1099;
  t1393 = 0.2 + t1392;
  p_output1[0]=-3.2*t1041 - 3.2*t1055;
  p_output1[1]=t1069;
  p_output1[2]=t1092;
  p_output1[3]=t1106;
  p_output1[4]=t1107;
  p_output1[5]=0.768*t1064*t1109 + t1113*t1116 + (6.4*t1039*t1064 + 6.4*t1054*t1067)*t1121 + t1127*t1139 + t1144*t1147;
  p_output1[6]=t1160 + t1113*t1163 + t1168 + t1180 + t1144*t1198;
  p_output1[7]=t1160 + t1168 + t1180 + t1113*t1209 + t1144*t1223;
  p_output1[8]=3.2*t1041 + 3.2*t1055;
  p_output1[9]=t1231;
  p_output1[10]=t1234;
  p_output1[11]=t1237;
  p_output1[12]=t1238;
  p_output1[13]=t1069;
  p_output1[14]=-3.2*t1132 - 3.2*t1134;
  p_output1[15]=t1244;
  p_output1[16]=t1247;
  p_output1[17]=t1248;
  p_output1[18]=0.768*t1109*t1130 + t1127*(6.4*t1064*t1130 + 6.4*t1067*t1137) + t1121*t1139 + t1113*t1252 + t1144*t1261;
  p_output1[19]=t1264 + t1113*t1267 + t1272 + t1273 + t1144*t1278;
  p_output1[20]=t1264 + t1272 + t1273 + t1113*t1283 + t1144*t1287;
  p_output1[21]=t1231;
  p_output1[22]=t1133 + t1135;
  p_output1[23]=t1147;
  p_output1[24]=t1116;
  p_output1[25]=t1291;
  p_output1[26]=t1092;
  p_output1[27]=t1244;
  p_output1[28]=-0.2 - 3.2*t1292 - 3.2*t1294;
  p_output1[29]=t1299;
  p_output1[30]=t1301;
  p_output1[31]=t1121*t1147 + t1127*t1261;
  p_output1[32]=0.768*t1109*t1189 + t1144*(6.4*t1090*t1189 + 6.4*t1085*t1196) + t1121*t1198 + t1127*t1278 + t1113*t1321;
  p_output1[33]=0.768*t1109*t1217 + t1144*(6.4*t1090*t1217 + 6.4*t1085*t1221) + t1121*t1223 + t1127*t1287 + t1113*t1339;
  p_output1[34]=t1234;
  p_output1[35]=t1147;
  p_output1[36]=0.2 + 3.2*t1292 + 3.2*t1294;
  p_output1[37]=t1358;
  p_output1[38]=t1360;
  p_output1[39]=t1106;
  p_output1[40]=t1247;
  p_output1[41]=t1299;
  p_output1[42]=-0.2 - 3.2*t1361 - 3.2*t1363;
  p_output1[43]=t1368;
  p_output1[44]=t1116*t1121 + t1127*t1252;
  p_output1[45]=t1121*t1163 + t1127*t1267 + t1144*t1321;
  p_output1[46]=0.768*t1109*t1203 + t1113*(6.4*t1099*t1203 + 6.4*t1103*t1207) + t1121*t1209 + t1127*t1283 + t1144*t1339;
  p_output1[47]=t1237;
  p_output1[48]=t1116;
  p_output1[49]=t1358;
  p_output1[50]=0.2 + 3.2*t1361 + 3.2*t1363;
  p_output1[51]=t1393;
  p_output1[52]=t1107;
  p_output1[53]=t1248;
  p_output1[54]=t1301;
  p_output1[55]=t1368;
  p_output1[56]=-0.38432;
  p_output1[57]=0.768*t1064*t1121 + 0.768*t1127*t1130;
  p_output1[58]=0.768*t1144*t1189 + t1399 + t1400;
  p_output1[59]=0.768*t1113*t1203 + 0.768*t1144*t1217 + t1399 + t1400;
  p_output1[60]=t1238;
  p_output1[61]=t1291;
  p_output1[62]=t1360;
  p_output1[63]=t1393;
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

#include "J_dxDiscreteMap5_RightImpact.hh"

namespace RightImpact
{

void J_dxDiscreteMap5_RightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
