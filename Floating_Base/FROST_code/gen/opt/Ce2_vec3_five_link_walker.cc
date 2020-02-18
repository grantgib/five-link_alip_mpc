/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:29 GMT-05:00
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
  double t1109;
  double t1096;
  double t1102;
  double t1114;
  double t1119;
  double t1095;
  double t1125;
  double t1134;
  double t1135;
  double t1166;
  double t1167;
  double t1168;
  double t1169;
  double t1170;
  double t1108;
  double t1115;
  double t1117;
  double t1118;
  double t1136;
  double t1144;
  double t1191;
  double t1188;
  double t1189;
  double t1192;
  double t1196;
  double t1197;
  double t1198;
  double t1206;
  double t1207;
  double t1208;
  double t1209;
  double t1210;
  double t1190;
  double t1193;
  double t1194;
  double t1195;
  double t1199;
  double t1200;
  double t1147;
  double t1163;
  double t1164;
  double t1228;
  double t1229;
  double t1230;
  double t1178;
  double t1174;
  double t1175;
  double t1176;
  double t1177;
  double t1179;
  double t1202;
  double t1203;
  double t1204;
  double t1243;
  double t1244;
  double t1245;
  double t1218;
  double t1214;
  double t1215;
  double t1216;
  double t1217;
  double t1219;
  double t1232;
  double t1233;
  double t1234;
  double t1236;
  double t1237;
  double t1239;
  double t1240;
  double t1241;
  double t1247;
  double t1248;
  double t1249;
  double t1251;
  double t1252;
  double t1254;
  double t1255;
  double t1256;
  double t1309;
  double t1310;
  double t1311;
  double t1313;
  double t1314;
  double t1315;
  double t1329;
  double t1330;
  double t1331;
  double t1333;
  double t1334;
  double t1335;
  double t1269;
  double t1270;
  double t1271;
  double t1265;
  double t1266;
  double t1267;
  double t1181;
  double t1182;
  double t1183;
  double t1184;
  double t1171;
  double t1172;
  double t1173;
  double t1277;
  double t1278;
  double t1289;
  double t1290;
  double t1291;
  double t1285;
  double t1286;
  double t1287;
  double t1221;
  double t1222;
  double t1223;
  double t1224;
  double t1211;
  double t1212;
  double t1213;
  double t1297;
  double t1298;
  double t1231;
  double t1246;
  double t1260;
  double t1261;
  double t1262;
  double t1263;
  double t1264;
  double t1268;
  double t1272;
  double t1273;
  double t1274;
  double t1275;
  double t1276;
  double t1279;
  double t1280;
  double t1281;
  double t1282;
  double t1283;
  double t1284;
  double t1288;
  double t1292;
  double t1293;
  double t1294;
  double t1295;
  double t1296;
  double t1299;
  double t1300;
  double t1303;
  double t1304;
  double t1305;
  double t1306;
  double t1307;
  double t1312;
  double t1316;
  double t1317;
  double t1319;
  double t1320;
  double t1321;
  double t1323;
  double t1324;
  double t1325;
  double t1326;
  double t1327;
  double t1332;
  double t1336;
  double t1337;
  double t1339;
  double t1340;
  double t1341;
  double t1368;
  double t1369;
  double t1370;
  double t1371;
  double t1372;
  double t1373;
  double t1374;
  double t1375;
  double t1302;
  double t1308;
  double t1318;
  double t1322;
  double t1328;
  double t1338;
  double t1342;
  double t1343;
  double t1165;
  double t1180;
  double t1185;
  double t1186;
  double t1348;
  double t1349;
  double t1350;
  double t1351;
  double t1205;
  double t1220;
  double t1225;
  double t1226;
  double t1354;
  double t1355;
  double t1356;
  double t1357;
  t1109 = Cos(var1[3]);
  t1096 = Cos(var1[4]);
  t1102 = Sin(var1[3]);
  t1114 = Sin(var1[4]);
  t1119 = Sin(var1[2]);
  t1095 = Cos(var1[2]);
  t1125 = t1109*t1096;
  t1134 = -1.*t1102*t1114;
  t1135 = t1125 + t1134;
  t1166 = -1.*t1096;
  t1167 = 1. + t1166;
  t1168 = 0.4*t1167;
  t1169 = 0.64*t1096;
  t1170 = t1168 + t1169;
  t1108 = -1.*t1096*t1102;
  t1115 = -1.*t1109*t1114;
  t1117 = t1108 + t1115;
  t1118 = t1095*t1117;
  t1136 = -1.*t1119*t1135;
  t1144 = t1118 + t1136;
  t1191 = Cos(var1[5]);
  t1188 = Cos(var1[6]);
  t1189 = Sin(var1[5]);
  t1192 = Sin(var1[6]);
  t1196 = t1191*t1188;
  t1197 = -1.*t1189*t1192;
  t1198 = t1196 + t1197;
  t1206 = -1.*t1188;
  t1207 = 1. + t1206;
  t1208 = 0.4*t1207;
  t1209 = 0.64*t1188;
  t1210 = t1208 + t1209;
  t1190 = -1.*t1188*t1189;
  t1193 = -1.*t1191*t1192;
  t1194 = t1190 + t1193;
  t1195 = t1095*t1194;
  t1199 = -1.*t1119*t1198;
  t1200 = t1195 + t1199;
  t1147 = -1.*t1109*t1119;
  t1163 = -1.*t1095*t1102;
  t1164 = t1147 + t1163;
  t1228 = t1095*t1109;
  t1229 = -1.*t1119*t1102;
  t1230 = t1228 + t1229;
  t1178 = t1095*t1135;
  t1174 = t1096*t1102;
  t1175 = t1109*t1114;
  t1176 = t1174 + t1175;
  t1177 = -1.*t1119*t1176;
  t1179 = t1177 + t1178;
  t1202 = -1.*t1191*t1119;
  t1203 = -1.*t1095*t1189;
  t1204 = t1202 + t1203;
  t1243 = t1095*t1191;
  t1244 = -1.*t1119*t1189;
  t1245 = t1243 + t1244;
  t1218 = t1095*t1198;
  t1214 = t1188*t1189;
  t1215 = t1191*t1192;
  t1216 = t1214 + t1215;
  t1217 = -1.*t1119*t1216;
  t1219 = t1217 + t1218;
  t1232 = t1109*t1119;
  t1233 = t1095*t1102;
  t1234 = t1232 + t1233;
  t1236 = t1119*t1117;
  t1237 = t1236 + t1178;
  t1239 = t1095*t1176;
  t1240 = t1119*t1135;
  t1241 = t1239 + t1240;
  t1247 = t1191*t1119;
  t1248 = t1095*t1189;
  t1249 = t1247 + t1248;
  t1251 = t1119*t1194;
  t1252 = t1251 + t1218;
  t1254 = t1095*t1216;
  t1255 = t1119*t1198;
  t1256 = t1254 + t1255;
  t1309 = t1170*t1102;
  t1310 = 0.24*t1109*t1114;
  t1311 = t1309 + t1310;
  t1313 = t1109*t1170;
  t1314 = -0.24*t1102*t1114;
  t1315 = t1313 + t1314;
  t1329 = t1210*t1189;
  t1330 = 0.24*t1191*t1192;
  t1331 = t1329 + t1330;
  t1333 = t1191*t1210;
  t1334 = -0.24*t1189*t1192;
  t1335 = t1333 + t1334;
  t1269 = -1.*t1119*t1117;
  t1270 = -1.*t1095*t1135;
  t1271 = t1269 + t1270;
  t1265 = -1.*t1095*t1109;
  t1266 = t1119*t1102;
  t1267 = t1265 + t1266;
  t1181 = t1170*t1096;
  t1182 = Power(t1114,2);
  t1183 = 0.24*t1182;
  t1184 = t1181 + t1183;
  t1171 = t1170*t1114;
  t1172 = -0.24*t1096*t1114;
  t1173 = t1171 + t1172;
  t1277 = -1.*t1095*t1176;
  t1278 = t1277 + t1136;
  t1289 = -1.*t1119*t1194;
  t1290 = -1.*t1095*t1198;
  t1291 = t1289 + t1290;
  t1285 = -1.*t1095*t1191;
  t1286 = t1119*t1189;
  t1287 = t1285 + t1286;
  t1221 = t1210*t1188;
  t1222 = Power(t1192,2);
  t1223 = 0.24*t1222;
  t1224 = t1221 + t1223;
  t1211 = t1210*t1192;
  t1212 = -0.24*t1188*t1192;
  t1213 = t1211 + t1212;
  t1297 = -1.*t1095*t1216;
  t1298 = t1297 + t1199;
  t1231 = 13.6*t1164*t1230;
  t1246 = 13.6*t1204*t1245;
  t1260 = Power(t1164,2);
  t1261 = 6.8*t1260;
  t1262 = 6.8*t1164*t1234;
  t1263 = Power(t1230,2);
  t1264 = 6.8*t1263;
  t1268 = 6.8*t1230*t1267;
  t1272 = 3.2*t1271*t1237;
  t1273 = Power(t1179,2);
  t1274 = 3.2*t1273;
  t1275 = Power(t1144,2);
  t1276 = 3.2*t1275;
  t1279 = 3.2*t1278*t1241;
  t1280 = Power(t1204,2);
  t1281 = 6.8*t1280;
  t1282 = 6.8*t1204*t1249;
  t1283 = Power(t1245,2);
  t1284 = 6.8*t1283;
  t1288 = 6.8*t1245*t1287;
  t1292 = 3.2*t1291*t1252;
  t1293 = Power(t1219,2);
  t1294 = 3.2*t1293;
  t1295 = Power(t1200,2);
  t1296 = 3.2*t1295;
  t1299 = 3.2*t1298*t1256;
  t1300 = t1261 + t1262 + t1264 + t1268 + t1272 + t1274 + t1276 + t1279 + t1281 + t1282 + t1284 + t1288 + t1292 + t1294 + t1296 + t1299;
  t1303 = Power(t1109,2);
  t1304 = 0.11*t1303;
  t1305 = Power(t1102,2);
  t1306 = 0.11*t1305;
  t1307 = t1304 + t1306;
  t1312 = -1.*t1311*t1135;
  t1316 = -1.*t1117*t1315;
  t1317 = t1312 + t1316;
  t1319 = t1311*t1176;
  t1320 = t1135*t1315;
  t1321 = t1319 + t1320;
  t1323 = Power(t1191,2);
  t1324 = 0.11*t1323;
  t1325 = Power(t1189,2);
  t1326 = 0.11*t1325;
  t1327 = t1324 + t1326;
  t1332 = -1.*t1331*t1198;
  t1336 = -1.*t1194*t1335;
  t1337 = t1332 + t1336;
  t1339 = t1331*t1216;
  t1340 = t1198*t1335;
  t1341 = t1339 + t1340;
  t1368 = -2.88*t1095;
  t1369 = 6.8*t1267*t1307;
  t1370 = 3.2*t1278*t1317;
  t1371 = 3.2*t1271*t1321;
  t1372 = 6.8*t1287*t1327;
  t1373 = 3.2*t1298*t1337;
  t1374 = 3.2*t1291*t1341;
  t1375 = t1368 + t1369 + t1370 + t1371 + t1372 + t1373 + t1374;
  t1302 = -2.88*t1119;
  t1308 = 6.8*t1164*t1307;
  t1318 = 3.2*t1179*t1317;
  t1322 = 3.2*t1144*t1321;
  t1328 = 6.8*t1204*t1327;
  t1338 = 3.2*t1219*t1337;
  t1342 = 3.2*t1200*t1341;
  t1343 = t1302 + t1308 + t1318 + t1322 + t1328 + t1338 + t1342;
  t1165 = 0.748*t1164;
  t1180 = 3.2*t1173*t1179;
  t1185 = 3.2*t1184*t1144;
  t1186 = t1165 + t1180 + t1185;
  t1348 = 0.748*t1267;
  t1349 = 3.2*t1184*t1271;
  t1350 = 3.2*t1173*t1278;
  t1351 = t1348 + t1349 + t1350;
  t1205 = 0.748*t1204;
  t1220 = 3.2*t1213*t1219;
  t1225 = 3.2*t1224*t1200;
  t1226 = t1205 + t1220 + t1225;
  t1354 = 0.748*t1287;
  t1355 = 3.2*t1224*t1291;
  t1356 = 3.2*t1213*t1298;
  t1357 = t1354 + t1355 + t1356;
  p_output1[0]=var2[2]*(-0.5*(t1231 + 13.6*t1230*t1234 + 6.4*t1144*t1237 + 6.4*t1179*t1241 + t1246 + 13.6*t1245*t1249 + 6.4*t1200*t1252 + 6.4*t1219*t1256)*var2[0] - 0.5*t1300*var2[1] - 0.5*t1343*var2[2] - 0.5*t1186*var2[3] - 0.384*t1144*var2[4] - 0.5*t1226*var2[5] - 0.384*t1200*var2[6]);
  p_output1[1]=var2[2]*(-0.5*t1300*var2[0] - 0.5*(t1231 + t1246 + 13.6*t1164*t1267 + 6.4*t1144*t1271 + 6.4*t1179*t1278 + 13.6*t1204*t1287 + 6.4*t1200*t1291 + 6.4*t1219*t1298)*var2[1] - 0.5*t1375*var2[2] - 0.5*t1351*var2[3] - 0.384*t1271*var2[4] - 0.5*t1357*var2[5] - 0.384*t1291*var2[6]);
  p_output1[2]=(-0.5*t1343*var2[0] - 0.5*t1375*var2[1])*var2[2];
  p_output1[3]=(-0.5*t1186*var2[0] - 0.5*t1351*var2[1])*var2[2];
  p_output1[4]=(-0.384*t1144*var2[0] - 0.384*t1271*var2[1])*var2[2];
  p_output1[5]=(-0.5*t1226*var2[0] - 0.5*t1357*var2[1])*var2[2];
  p_output1[6]=(-0.384*t1200*var2[0] - 0.384*t1291*var2[1])*var2[2];
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

#include "Ce2_vec3_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
