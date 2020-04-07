/*
 * Automatically Generated from Mathematica.
 * Mon 6 Apr 2020 23:57:40 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t1257;
  double t1235;
  double t1236;
  double t1242;
  double t1243;
  double t1256;
  double t1260;
  double t1261;
  double t1263;
  double t1264;
  double t1265;
  double t1266;
  double t1267;
  double t1273;
  double t1274;
  double t1275;
  double t1276;
  double t1277;
  double t1281;
  double t1282;
  double t1286;
  double t1287;
  double t1305;
  double t1316;
  double t1321;
  double t1341;
  double t1342;
  double t1306;
  double t1307;
  double t1308;
  double t1309;
  double t1310;
  double t1311;
  double t1312;
  double t1313;
  double t1314;
  double t1315;
  double t1317;
  double t1318;
  double t1319;
  double t1320;
  t1257 = -1.*var5[1];
  t1235 = -1. + var6[0];
  t1236 = -1. + var7[0];
  t1242 = 1/t1236;
  t1243 = -1.*t1235*t1242;
  t1256 = 1. + t1243;
  t1260 = var5[0] + t1257;
  t1261 = Power(t1260,-5);
  t1263 = -1.*var1[0];
  t1264 = t1263 + var1[1];
  t1265 = t1235*t1242*t1264;
  t1266 = t1257 + var1[0] + t1265;
  t1267 = Power(t1266,3);
  t1273 = Power(t1260,-4);
  t1274 = Power(t1266,2);
  t1275 = 1/t1260;
  t1276 = -1.*t1275*t1266;
  t1277 = 1. + t1276;
  t1281 = Power(t1260,-3);
  t1282 = Power(t1277,2);
  t1286 = Power(t1260,-2);
  t1287 = Power(t1277,3);
  t1305 = Power(t1277,4);
  t1316 = Power(t1266,4);
  t1321 = Power(t1260,-6);
  t1341 = -1.*t1286*t1266;
  t1342 = t1275 + t1341;
  t1306 = 5.*t1275*t1305;
  t1307 = 20.*t1286*t1266*t1287;
  t1308 = -5.*t1275*t1305;
  t1309 = t1307 + t1308;
  t1310 = 30.*t1281*t1274*t1282;
  t1311 = -20.*t1286*t1266*t1287;
  t1312 = t1310 + t1311;
  t1313 = 20.*t1273*t1267*t1277;
  t1314 = -30.*t1281*t1274*t1282;
  t1315 = t1313 + t1314;
  t1317 = 5.*t1261*t1316;
  t1318 = -20.*t1273*t1267*t1277;
  t1319 = t1317 + t1318;
  t1320 = -5.*t1261*t1316;
  p_output1[0]=-20.*t1256*t1286*t1287*var4[0] - 60.*t1256*t1266*t1281*t1282*var4[4] + 40.*t1256*t1286*t1287*var4[4] - 60.*t1256*t1273*t1274*t1277*var4[8] + 120.*t1256*t1266*t1281*t1282*var4[8] - 20.*t1256*t1286*t1287*var4[8] - 20.*t1256*t1261*t1267*var4[12] + 120.*t1256*t1273*t1274*t1277*var4[12] - 60.*t1256*t1266*t1281*t1282*var4[12] + 40.*t1256*t1261*t1267*var4[16] - 60.*t1256*t1273*t1274*t1277*var4[16] - 20.*t1256*t1261*t1267*var4[20];
  p_output1[1]=-20.*t1235*t1242*t1286*t1287*var4[0] - 60.*t1235*t1242*t1266*t1281*t1282*var4[4] + 40.*t1235*t1242*t1286*t1287*var4[4] - 60.*t1235*t1242*t1273*t1274*t1277*var4[8] + 120.*t1235*t1242*t1266*t1281*t1282*var4[8] - 20.*t1235*t1242*t1286*t1287*var4[8] - 20.*t1235*t1242*t1261*t1267*var4[12] + 120.*t1235*t1242*t1273*t1274*t1277*var4[12] - 60.*t1235*t1242*t1266*t1281*t1282*var4[12] + 40.*t1235*t1242*t1261*t1267*var4[16] - 60.*t1235*t1242*t1273*t1274*t1277*var4[16] - 20.*t1235*t1242*t1261*t1267*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t1306;
  p_output1[4]=t1309;
  p_output1[5]=t1312;
  p_output1[6]=t1315;
  p_output1[7]=t1319;
  p_output1[8]=t1320;
  p_output1[9]=20.*t1266*t1281*t1287*var4[0] - 5.*t1286*t1305*var4[0] + 60.*t1273*t1274*t1282*var4[4] - 60.*t1266*t1281*t1287*var4[4] + 5.*t1286*t1305*var4[4] + 60.*t1261*t1267*t1277*var4[8] - 150.*t1273*t1274*t1282*var4[8] + 40.*t1266*t1281*t1287*var4[8] - 140.*t1261*t1267*t1277*var4[12] + 90.*t1273*t1274*t1282*var4[12] + 20.*t1316*t1321*var4[12] + 80.*t1261*t1267*t1277*var4[16] - 45.*t1316*t1321*var4[16] + 25.*t1316*t1321*var4[20];
  p_output1[10]=5.*t1286*t1305*var4[0] + 20.*t1275*t1287*t1342*var4[0] + 40.*t1266*t1281*t1287*var4[4] - 20.*t1286*t1287*var4[4] - 5.*t1286*t1305*var4[4] + 60.*t1266*t1282*t1286*t1342*var4[4] - 20.*t1275*t1287*t1342*var4[4] + 90.*t1273*t1274*t1282*var4[8] - 60.*t1266*t1281*t1282*var4[8] - 40.*t1266*t1281*t1287*var4[8] + 20.*t1286*t1287*var4[8] + 60.*t1274*t1277*t1281*t1342*var4[8] - 60.*t1266*t1282*t1286*t1342*var4[8] + 80.*t1261*t1267*t1277*var4[12] - 60.*t1273*t1274*t1277*var4[12] - 90.*t1273*t1274*t1282*var4[12] + 60.*t1266*t1281*t1282*var4[12] + 20.*t1267*t1273*t1342*var4[12] - 60.*t1274*t1277*t1281*t1342*var4[12] - 20.*t1261*t1267*var4[16] - 80.*t1261*t1267*t1277*var4[16] + 60.*t1273*t1274*t1277*var4[16] + 25.*t1316*t1321*var4[16] - 20.*t1267*t1273*t1342*var4[16] + 20.*t1261*t1267*var4[20] - 25.*t1316*t1321*var4[20];
  p_output1[11]=-20.*t1256*t1286*t1287*var4[1] - 60.*t1256*t1266*t1281*t1282*var4[5] + 40.*t1256*t1286*t1287*var4[5] - 60.*t1256*t1273*t1274*t1277*var4[9] + 120.*t1256*t1266*t1281*t1282*var4[9] - 20.*t1256*t1286*t1287*var4[9] - 20.*t1256*t1261*t1267*var4[13] + 120.*t1256*t1273*t1274*t1277*var4[13] - 60.*t1256*t1266*t1281*t1282*var4[13] + 40.*t1256*t1261*t1267*var4[17] - 60.*t1256*t1273*t1274*t1277*var4[17] - 20.*t1256*t1261*t1267*var4[21];
  p_output1[12]=-20.*t1235*t1242*t1286*t1287*var4[1] - 60.*t1235*t1242*t1266*t1281*t1282*var4[5] + 40.*t1235*t1242*t1286*t1287*var4[5] - 60.*t1235*t1242*t1273*t1274*t1277*var4[9] + 120.*t1235*t1242*t1266*t1281*t1282*var4[9] - 20.*t1235*t1242*t1286*t1287*var4[9] - 20.*t1235*t1242*t1261*t1267*var4[13] + 120.*t1235*t1242*t1273*t1274*t1277*var4[13] - 60.*t1235*t1242*t1266*t1281*t1282*var4[13] + 40.*t1235*t1242*t1261*t1267*var4[17] - 60.*t1235*t1242*t1273*t1274*t1277*var4[17] - 20.*t1235*t1242*t1261*t1267*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t1306;
  p_output1[15]=t1309;
  p_output1[16]=t1312;
  p_output1[17]=t1315;
  p_output1[18]=t1319;
  p_output1[19]=t1320;
  p_output1[20]=20.*t1266*t1281*t1287*var4[1] - 5.*t1286*t1305*var4[1] + 60.*t1273*t1274*t1282*var4[5] - 60.*t1266*t1281*t1287*var4[5] + 5.*t1286*t1305*var4[5] + 60.*t1261*t1267*t1277*var4[9] - 150.*t1273*t1274*t1282*var4[9] + 40.*t1266*t1281*t1287*var4[9] - 140.*t1261*t1267*t1277*var4[13] + 90.*t1273*t1274*t1282*var4[13] + 20.*t1316*t1321*var4[13] + 80.*t1261*t1267*t1277*var4[17] - 45.*t1316*t1321*var4[17] + 25.*t1316*t1321*var4[21];
  p_output1[21]=5.*t1286*t1305*var4[1] + 20.*t1275*t1287*t1342*var4[1] + 40.*t1266*t1281*t1287*var4[5] - 20.*t1286*t1287*var4[5] - 5.*t1286*t1305*var4[5] + 60.*t1266*t1282*t1286*t1342*var4[5] - 20.*t1275*t1287*t1342*var4[5] + 90.*t1273*t1274*t1282*var4[9] - 60.*t1266*t1281*t1282*var4[9] - 40.*t1266*t1281*t1287*var4[9] + 20.*t1286*t1287*var4[9] + 60.*t1274*t1277*t1281*t1342*var4[9] - 60.*t1266*t1282*t1286*t1342*var4[9] + 80.*t1261*t1267*t1277*var4[13] - 60.*t1273*t1274*t1277*var4[13] - 90.*t1273*t1274*t1282*var4[13] + 60.*t1266*t1281*t1282*var4[13] + 20.*t1267*t1273*t1342*var4[13] - 60.*t1274*t1277*t1281*t1342*var4[13] - 20.*t1261*t1267*var4[17] - 80.*t1261*t1267*t1277*var4[17] + 60.*t1273*t1274*t1277*var4[17] + 25.*t1316*t1321*var4[17] - 20.*t1267*t1273*t1342*var4[17] + 20.*t1261*t1267*var4[21] - 25.*t1316*t1321*var4[21];
  p_output1[22]=-20.*t1256*t1286*t1287*var4[2] - 60.*t1256*t1266*t1281*t1282*var4[6] + 40.*t1256*t1286*t1287*var4[6] - 60.*t1256*t1273*t1274*t1277*var4[10] + 120.*t1256*t1266*t1281*t1282*var4[10] - 20.*t1256*t1286*t1287*var4[10] - 20.*t1256*t1261*t1267*var4[14] + 120.*t1256*t1273*t1274*t1277*var4[14] - 60.*t1256*t1266*t1281*t1282*var4[14] + 40.*t1256*t1261*t1267*var4[18] - 60.*t1256*t1273*t1274*t1277*var4[18] - 20.*t1256*t1261*t1267*var4[22];
  p_output1[23]=-20.*t1235*t1242*t1286*t1287*var4[2] - 60.*t1235*t1242*t1266*t1281*t1282*var4[6] + 40.*t1235*t1242*t1286*t1287*var4[6] - 60.*t1235*t1242*t1273*t1274*t1277*var4[10] + 120.*t1235*t1242*t1266*t1281*t1282*var4[10] - 20.*t1235*t1242*t1286*t1287*var4[10] - 20.*t1235*t1242*t1261*t1267*var4[14] + 120.*t1235*t1242*t1273*t1274*t1277*var4[14] - 60.*t1235*t1242*t1266*t1281*t1282*var4[14] + 40.*t1235*t1242*t1261*t1267*var4[18] - 60.*t1235*t1242*t1273*t1274*t1277*var4[18] - 20.*t1235*t1242*t1261*t1267*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t1306;
  p_output1[26]=t1309;
  p_output1[27]=t1312;
  p_output1[28]=t1315;
  p_output1[29]=t1319;
  p_output1[30]=t1320;
  p_output1[31]=20.*t1266*t1281*t1287*var4[2] - 5.*t1286*t1305*var4[2] + 60.*t1273*t1274*t1282*var4[6] - 60.*t1266*t1281*t1287*var4[6] + 5.*t1286*t1305*var4[6] + 60.*t1261*t1267*t1277*var4[10] - 150.*t1273*t1274*t1282*var4[10] + 40.*t1266*t1281*t1287*var4[10] - 140.*t1261*t1267*t1277*var4[14] + 90.*t1273*t1274*t1282*var4[14] + 20.*t1316*t1321*var4[14] + 80.*t1261*t1267*t1277*var4[18] - 45.*t1316*t1321*var4[18] + 25.*t1316*t1321*var4[22];
  p_output1[32]=5.*t1286*t1305*var4[2] + 20.*t1275*t1287*t1342*var4[2] + 40.*t1266*t1281*t1287*var4[6] - 20.*t1286*t1287*var4[6] - 5.*t1286*t1305*var4[6] + 60.*t1266*t1282*t1286*t1342*var4[6] - 20.*t1275*t1287*t1342*var4[6] + 90.*t1273*t1274*t1282*var4[10] - 60.*t1266*t1281*t1282*var4[10] - 40.*t1266*t1281*t1287*var4[10] + 20.*t1286*t1287*var4[10] + 60.*t1274*t1277*t1281*t1342*var4[10] - 60.*t1266*t1282*t1286*t1342*var4[10] + 80.*t1261*t1267*t1277*var4[14] - 60.*t1273*t1274*t1277*var4[14] - 90.*t1273*t1274*t1282*var4[14] + 60.*t1266*t1281*t1282*var4[14] + 20.*t1267*t1273*t1342*var4[14] - 60.*t1274*t1277*t1281*t1342*var4[14] - 20.*t1261*t1267*var4[18] - 80.*t1261*t1267*t1277*var4[18] + 60.*t1273*t1274*t1277*var4[18] + 25.*t1316*t1321*var4[18] - 20.*t1267*t1273*t1342*var4[18] + 20.*t1261*t1267*var4[22] - 25.*t1316*t1321*var4[22];
  p_output1[33]=-20.*t1256*t1286*t1287*var4[3] - 60.*t1256*t1266*t1281*t1282*var4[7] + 40.*t1256*t1286*t1287*var4[7] - 60.*t1256*t1273*t1274*t1277*var4[11] + 120.*t1256*t1266*t1281*t1282*var4[11] - 20.*t1256*t1286*t1287*var4[11] - 20.*t1256*t1261*t1267*var4[15] + 120.*t1256*t1273*t1274*t1277*var4[15] - 60.*t1256*t1266*t1281*t1282*var4[15] + 40.*t1256*t1261*t1267*var4[19] - 60.*t1256*t1273*t1274*t1277*var4[19] - 20.*t1256*t1261*t1267*var4[23];
  p_output1[34]=-20.*t1235*t1242*t1286*t1287*var4[3] - 60.*t1235*t1242*t1266*t1281*t1282*var4[7] + 40.*t1235*t1242*t1286*t1287*var4[7] - 60.*t1235*t1242*t1273*t1274*t1277*var4[11] + 120.*t1235*t1242*t1266*t1281*t1282*var4[11] - 20.*t1235*t1242*t1286*t1287*var4[11] - 20.*t1235*t1242*t1261*t1267*var4[15] + 120.*t1235*t1242*t1273*t1274*t1277*var4[15] - 60.*t1235*t1242*t1266*t1281*t1282*var4[15] + 40.*t1235*t1242*t1261*t1267*var4[19] - 60.*t1235*t1242*t1273*t1274*t1277*var4[19] - 20.*t1235*t1242*t1261*t1267*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t1306;
  p_output1[37]=t1309;
  p_output1[38]=t1312;
  p_output1[39]=t1315;
  p_output1[40]=t1319;
  p_output1[41]=t1320;
  p_output1[42]=20.*t1266*t1281*t1287*var4[3] - 5.*t1286*t1305*var4[3] + 60.*t1273*t1274*t1282*var4[7] - 60.*t1266*t1281*t1287*var4[7] + 5.*t1286*t1305*var4[7] + 60.*t1261*t1267*t1277*var4[11] - 150.*t1273*t1274*t1282*var4[11] + 40.*t1266*t1281*t1287*var4[11] - 140.*t1261*t1267*t1277*var4[15] + 90.*t1273*t1274*t1282*var4[15] + 20.*t1316*t1321*var4[15] + 80.*t1261*t1267*t1277*var4[19] - 45.*t1316*t1321*var4[19] + 25.*t1316*t1321*var4[23];
  p_output1[43]=5.*t1286*t1305*var4[3] + 20.*t1275*t1287*t1342*var4[3] + 40.*t1266*t1281*t1287*var4[7] - 20.*t1286*t1287*var4[7] - 5.*t1286*t1305*var4[7] + 60.*t1266*t1282*t1286*t1342*var4[7] - 20.*t1275*t1287*t1342*var4[7] + 90.*t1273*t1274*t1282*var4[11] - 60.*t1266*t1281*t1282*var4[11] - 40.*t1266*t1281*t1287*var4[11] + 20.*t1286*t1287*var4[11] + 60.*t1274*t1277*t1281*t1342*var4[11] - 60.*t1266*t1282*t1286*t1342*var4[11] + 80.*t1261*t1267*t1277*var4[15] - 60.*t1273*t1274*t1277*var4[15] - 90.*t1273*t1274*t1282*var4[15] + 60.*t1266*t1281*t1282*var4[15] + 20.*t1267*t1273*t1342*var4[15] - 60.*t1274*t1277*t1281*t1342*var4[15] - 20.*t1261*t1267*var4[19] - 80.*t1261*t1267*t1277*var4[19] + 60.*t1273*t1274*t1277*var4[19] + 25.*t1316*t1321*var4[19] - 20.*t1267*t1273*t1342*var4[19] + 20.*t1261*t1267*var4[23] - 25.*t1316*t1321*var4[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_time_RightStance.hh"

namespace RightStance
{

void J_d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
