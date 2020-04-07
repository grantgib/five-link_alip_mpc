/*
 * Automatically Generated from Mathematica.
 * Mon 6 Apr 2020 23:57:34 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t1201;
  double t1145;
  double t1155;
  double t1193;
  double t1197;
  double t1199;
  double t1202;
  double t1203;
  double t1204;
  double t1205;
  double t1210;
  double t1211;
  double t1212;
  double t1215;
  double t1216;
  double t1217;
  double t1218;
  double t1219;
  double t1222;
  double t1223;
  double t1224;
  double t1227;
  double t1228;
  double t1231;
  double t1252;
  double t1254;
  double t1268;
  double t1269;
  double t1246;
  double t1247;
  double t1248;
  double t1249;
  double t1250;
  double t1251;
  double t1253;
  t1201 = -1.*var4[1];
  t1145 = -1. + var5[0];
  t1155 = -1. + var6[0];
  t1193 = 1/t1155;
  t1197 = -1.*t1145*t1193;
  t1199 = 1. + t1197;
  t1202 = var4[0] + t1201;
  t1203 = Power(t1202,-5);
  t1204 = -1.*var1[0];
  t1205 = t1204 + var1[1];
  t1210 = t1145*t1193*t1205;
  t1211 = t1201 + var1[0] + t1210;
  t1212 = Power(t1211,4);
  t1215 = Power(t1202,-4);
  t1216 = Power(t1211,3);
  t1217 = 1/t1202;
  t1218 = -1.*t1217*t1211;
  t1219 = 1. + t1218;
  t1222 = Power(t1202,-3);
  t1223 = Power(t1211,2);
  t1224 = Power(t1219,2);
  t1227 = Power(t1202,-2);
  t1228 = Power(t1219,3);
  t1231 = Power(t1219,4);
  t1252 = Power(t1211,5);
  t1254 = Power(t1202,-6);
  t1268 = -1.*t1227*t1211;
  t1269 = t1217 + t1268;
  t1246 = Power(t1219,5);
  t1247 = -1.*t1246;
  t1248 = -5.*t1217*t1211*t1231;
  t1249 = -10.*t1227*t1223*t1228;
  t1250 = -10.*t1222*t1216*t1224;
  t1251 = -5.*t1215*t1212*t1219;
  t1253 = -1.*t1203*t1252;
  p_output1[0]=5.*t1199*t1217*t1231*var3[0] + 20.*t1199*t1211*t1227*t1228*var3[4] - 5.*t1199*t1217*t1231*var3[4] + 30.*t1199*t1222*t1223*t1224*var3[8] - 20.*t1199*t1211*t1227*t1228*var3[8] + 20.*t1199*t1215*t1216*t1219*var3[12] - 30.*t1199*t1222*t1223*t1224*var3[12] + 5.*t1199*t1203*t1212*var3[16] - 20.*t1199*t1215*t1216*t1219*var3[16] - 5.*t1199*t1203*t1212*var3[20];
  p_output1[1]=5.*t1145*t1193*t1217*t1231*var3[0] + 20.*t1145*t1193*t1211*t1227*t1228*var3[4] - 5.*t1145*t1193*t1217*t1231*var3[4] + 30.*t1145*t1193*t1222*t1223*t1224*var3[8] - 20.*t1145*t1193*t1211*t1227*t1228*var3[8] + 20.*t1145*t1193*t1215*t1216*t1219*var3[12] - 30.*t1145*t1193*t1222*t1223*t1224*var3[12] + 5.*t1145*t1193*t1203*t1212*var3[16] - 20.*t1145*t1193*t1215*t1216*t1219*var3[16] - 5.*t1145*t1193*t1203*t1212*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t1247;
  p_output1[4]=t1248;
  p_output1[5]=t1249;
  p_output1[6]=t1250;
  p_output1[7]=t1251;
  p_output1[8]=t1253;
  p_output1[9]=-5.*t1211*t1227*t1231*var3[0] - 20.*t1222*t1223*t1228*var3[4] + 5.*t1211*t1227*t1231*var3[4] - 30.*t1215*t1216*t1224*var3[8] + 20.*t1222*t1223*t1228*var3[8] - 20.*t1203*t1212*t1219*var3[12] + 30.*t1215*t1216*t1224*var3[12] + 20.*t1203*t1212*t1219*var3[16] - 5.*t1252*t1254*var3[16] + 5.*t1252*t1254*var3[20];
  p_output1[10]=-5.*t1231*t1269*var3[0] + 5.*t1217*t1231*var3[4] - 5.*t1211*t1227*t1231*var3[4] - 20.*t1211*t1217*t1228*t1269*var3[4] - 20.*t1222*t1223*t1228*var3[8] + 20.*t1211*t1227*t1228*var3[8] - 30.*t1223*t1224*t1227*t1269*var3[8] - 30.*t1215*t1216*t1224*var3[12] + 30.*t1222*t1223*t1224*var3[12] - 20.*t1216*t1219*t1222*t1269*var3[12] - 20.*t1203*t1212*t1219*var3[16] + 20.*t1215*t1216*t1219*var3[16] - 5.*t1212*t1215*t1269*var3[16] + 5.*t1203*t1212*var3[20] - 5.*t1252*t1254*var3[20];
  p_output1[11]=5.*t1199*t1217*t1231*var3[1] + 20.*t1199*t1211*t1227*t1228*var3[5] - 5.*t1199*t1217*t1231*var3[5] + 30.*t1199*t1222*t1223*t1224*var3[9] - 20.*t1199*t1211*t1227*t1228*var3[9] + 20.*t1199*t1215*t1216*t1219*var3[13] - 30.*t1199*t1222*t1223*t1224*var3[13] + 5.*t1199*t1203*t1212*var3[17] - 20.*t1199*t1215*t1216*t1219*var3[17] - 5.*t1199*t1203*t1212*var3[21];
  p_output1[12]=5.*t1145*t1193*t1217*t1231*var3[1] + 20.*t1145*t1193*t1211*t1227*t1228*var3[5] - 5.*t1145*t1193*t1217*t1231*var3[5] + 30.*t1145*t1193*t1222*t1223*t1224*var3[9] - 20.*t1145*t1193*t1211*t1227*t1228*var3[9] + 20.*t1145*t1193*t1215*t1216*t1219*var3[13] - 30.*t1145*t1193*t1222*t1223*t1224*var3[13] + 5.*t1145*t1193*t1203*t1212*var3[17] - 20.*t1145*t1193*t1215*t1216*t1219*var3[17] - 5.*t1145*t1193*t1203*t1212*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t1247;
  p_output1[15]=t1248;
  p_output1[16]=t1249;
  p_output1[17]=t1250;
  p_output1[18]=t1251;
  p_output1[19]=t1253;
  p_output1[20]=-5.*t1211*t1227*t1231*var3[1] - 20.*t1222*t1223*t1228*var3[5] + 5.*t1211*t1227*t1231*var3[5] - 30.*t1215*t1216*t1224*var3[9] + 20.*t1222*t1223*t1228*var3[9] - 20.*t1203*t1212*t1219*var3[13] + 30.*t1215*t1216*t1224*var3[13] + 20.*t1203*t1212*t1219*var3[17] - 5.*t1252*t1254*var3[17] + 5.*t1252*t1254*var3[21];
  p_output1[21]=-5.*t1231*t1269*var3[1] + 5.*t1217*t1231*var3[5] - 5.*t1211*t1227*t1231*var3[5] - 20.*t1211*t1217*t1228*t1269*var3[5] - 20.*t1222*t1223*t1228*var3[9] + 20.*t1211*t1227*t1228*var3[9] - 30.*t1223*t1224*t1227*t1269*var3[9] - 30.*t1215*t1216*t1224*var3[13] + 30.*t1222*t1223*t1224*var3[13] - 20.*t1216*t1219*t1222*t1269*var3[13] - 20.*t1203*t1212*t1219*var3[17] + 20.*t1215*t1216*t1219*var3[17] - 5.*t1212*t1215*t1269*var3[17] + 5.*t1203*t1212*var3[21] - 5.*t1252*t1254*var3[21];
  p_output1[22]=5.*t1199*t1217*t1231*var3[2] + 20.*t1199*t1211*t1227*t1228*var3[6] - 5.*t1199*t1217*t1231*var3[6] + 30.*t1199*t1222*t1223*t1224*var3[10] - 20.*t1199*t1211*t1227*t1228*var3[10] + 20.*t1199*t1215*t1216*t1219*var3[14] - 30.*t1199*t1222*t1223*t1224*var3[14] + 5.*t1199*t1203*t1212*var3[18] - 20.*t1199*t1215*t1216*t1219*var3[18] - 5.*t1199*t1203*t1212*var3[22];
  p_output1[23]=5.*t1145*t1193*t1217*t1231*var3[2] + 20.*t1145*t1193*t1211*t1227*t1228*var3[6] - 5.*t1145*t1193*t1217*t1231*var3[6] + 30.*t1145*t1193*t1222*t1223*t1224*var3[10] - 20.*t1145*t1193*t1211*t1227*t1228*var3[10] + 20.*t1145*t1193*t1215*t1216*t1219*var3[14] - 30.*t1145*t1193*t1222*t1223*t1224*var3[14] + 5.*t1145*t1193*t1203*t1212*var3[18] - 20.*t1145*t1193*t1215*t1216*t1219*var3[18] - 5.*t1145*t1193*t1203*t1212*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t1247;
  p_output1[26]=t1248;
  p_output1[27]=t1249;
  p_output1[28]=t1250;
  p_output1[29]=t1251;
  p_output1[30]=t1253;
  p_output1[31]=-5.*t1211*t1227*t1231*var3[2] - 20.*t1222*t1223*t1228*var3[6] + 5.*t1211*t1227*t1231*var3[6] - 30.*t1215*t1216*t1224*var3[10] + 20.*t1222*t1223*t1228*var3[10] - 20.*t1203*t1212*t1219*var3[14] + 30.*t1215*t1216*t1224*var3[14] + 20.*t1203*t1212*t1219*var3[18] - 5.*t1252*t1254*var3[18] + 5.*t1252*t1254*var3[22];
  p_output1[32]=-5.*t1231*t1269*var3[2] + 5.*t1217*t1231*var3[6] - 5.*t1211*t1227*t1231*var3[6] - 20.*t1211*t1217*t1228*t1269*var3[6] - 20.*t1222*t1223*t1228*var3[10] + 20.*t1211*t1227*t1228*var3[10] - 30.*t1223*t1224*t1227*t1269*var3[10] - 30.*t1215*t1216*t1224*var3[14] + 30.*t1222*t1223*t1224*var3[14] - 20.*t1216*t1219*t1222*t1269*var3[14] - 20.*t1203*t1212*t1219*var3[18] + 20.*t1215*t1216*t1219*var3[18] - 5.*t1212*t1215*t1269*var3[18] + 5.*t1203*t1212*var3[22] - 5.*t1252*t1254*var3[22];
  p_output1[33]=5.*t1199*t1217*t1231*var3[3] + 20.*t1199*t1211*t1227*t1228*var3[7] - 5.*t1199*t1217*t1231*var3[7] + 30.*t1199*t1222*t1223*t1224*var3[11] - 20.*t1199*t1211*t1227*t1228*var3[11] + 20.*t1199*t1215*t1216*t1219*var3[15] - 30.*t1199*t1222*t1223*t1224*var3[15] + 5.*t1199*t1203*t1212*var3[19] - 20.*t1199*t1215*t1216*t1219*var3[19] - 5.*t1199*t1203*t1212*var3[23];
  p_output1[34]=5.*t1145*t1193*t1217*t1231*var3[3] + 20.*t1145*t1193*t1211*t1227*t1228*var3[7] - 5.*t1145*t1193*t1217*t1231*var3[7] + 30.*t1145*t1193*t1222*t1223*t1224*var3[11] - 20.*t1145*t1193*t1211*t1227*t1228*var3[11] + 20.*t1145*t1193*t1215*t1216*t1219*var3[15] - 30.*t1145*t1193*t1222*t1223*t1224*var3[15] + 5.*t1145*t1193*t1203*t1212*var3[19] - 20.*t1145*t1193*t1215*t1216*t1219*var3[19] - 5.*t1145*t1193*t1203*t1212*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t1247;
  p_output1[37]=t1248;
  p_output1[38]=t1249;
  p_output1[39]=t1250;
  p_output1[40]=t1251;
  p_output1[41]=t1253;
  p_output1[42]=-5.*t1211*t1227*t1231*var3[3] - 20.*t1222*t1223*t1228*var3[7] + 5.*t1211*t1227*t1231*var3[7] - 30.*t1215*t1216*t1224*var3[11] + 20.*t1222*t1223*t1228*var3[11] - 20.*t1203*t1212*t1219*var3[15] + 30.*t1215*t1216*t1224*var3[15] + 20.*t1203*t1212*t1219*var3[19] - 5.*t1252*t1254*var3[19] + 5.*t1252*t1254*var3[23];
  p_output1[43]=-5.*t1231*t1269*var3[3] + 5.*t1217*t1231*var3[7] - 5.*t1211*t1227*t1231*var3[7] - 20.*t1211*t1217*t1228*t1269*var3[7] - 20.*t1222*t1223*t1228*var3[11] + 20.*t1211*t1227*t1228*var3[11] - 30.*t1223*t1224*t1227*t1269*var3[11] - 30.*t1215*t1216*t1224*var3[15] + 30.*t1222*t1223*t1224*var3[15] - 20.*t1216*t1219*t1222*t1269*var3[15] - 20.*t1203*t1212*t1219*var3[19] + 20.*t1215*t1216*t1219*var3[19] - 5.*t1212*t1215*t1269*var3[19] + 5.*t1203*t1212*var3[23] - 5.*t1252*t1254*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_RightStance.hh"

namespace RightStance
{

void J_y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
