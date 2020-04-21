/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:58:00 GMT-04:00
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
  double t1161;
  double t1105;
  double t1115;
  double t1153;
  double t1157;
  double t1159;
  double t1162;
  double t1163;
  double t1164;
  double t1165;
  double t1170;
  double t1171;
  double t1172;
  double t1175;
  double t1176;
  double t1177;
  double t1178;
  double t1179;
  double t1182;
  double t1183;
  double t1184;
  double t1187;
  double t1188;
  double t1191;
  double t1212;
  double t1214;
  double t1228;
  double t1229;
  double t1206;
  double t1207;
  double t1208;
  double t1209;
  double t1210;
  double t1211;
  double t1213;
  t1161 = -1.*var4[1];
  t1105 = -1. + var5[0];
  t1115 = -1. + var6[0];
  t1153 = 1/t1115;
  t1157 = -1.*t1105*t1153;
  t1159 = 1. + t1157;
  t1162 = var4[0] + t1161;
  t1163 = Power(t1162,-5);
  t1164 = -1.*var1[0];
  t1165 = t1164 + var1[1];
  t1170 = t1105*t1153*t1165;
  t1171 = t1161 + var1[0] + t1170;
  t1172 = Power(t1171,4);
  t1175 = Power(t1162,-4);
  t1176 = Power(t1171,3);
  t1177 = 1/t1162;
  t1178 = -1.*t1177*t1171;
  t1179 = 1. + t1178;
  t1182 = Power(t1162,-3);
  t1183 = Power(t1171,2);
  t1184 = Power(t1179,2);
  t1187 = Power(t1162,-2);
  t1188 = Power(t1179,3);
  t1191 = Power(t1179,4);
  t1212 = Power(t1171,5);
  t1214 = Power(t1162,-6);
  t1228 = -1.*t1187*t1171;
  t1229 = t1177 + t1228;
  t1206 = Power(t1179,5);
  t1207 = -1.*t1206;
  t1208 = -5.*t1177*t1171*t1191;
  t1209 = -10.*t1187*t1183*t1188;
  t1210 = -10.*t1182*t1176*t1184;
  t1211 = -5.*t1175*t1172*t1179;
  t1213 = -1.*t1163*t1212;
  p_output1[0]=5.*t1159*t1177*t1191*var3[0] + 20.*t1159*t1171*t1187*t1188*var3[4] - 5.*t1159*t1177*t1191*var3[4] + 30.*t1159*t1182*t1183*t1184*var3[8] - 20.*t1159*t1171*t1187*t1188*var3[8] + 20.*t1159*t1175*t1176*t1179*var3[12] - 30.*t1159*t1182*t1183*t1184*var3[12] + 5.*t1159*t1163*t1172*var3[16] - 20.*t1159*t1175*t1176*t1179*var3[16] - 5.*t1159*t1163*t1172*var3[20];
  p_output1[1]=5.*t1105*t1153*t1177*t1191*var3[0] + 20.*t1105*t1153*t1171*t1187*t1188*var3[4] - 5.*t1105*t1153*t1177*t1191*var3[4] + 30.*t1105*t1153*t1182*t1183*t1184*var3[8] - 20.*t1105*t1153*t1171*t1187*t1188*var3[8] + 20.*t1105*t1153*t1175*t1176*t1179*var3[12] - 30.*t1105*t1153*t1182*t1183*t1184*var3[12] + 5.*t1105*t1153*t1163*t1172*var3[16] - 20.*t1105*t1153*t1175*t1176*t1179*var3[16] - 5.*t1105*t1153*t1163*t1172*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t1207;
  p_output1[4]=t1208;
  p_output1[5]=t1209;
  p_output1[6]=t1210;
  p_output1[7]=t1211;
  p_output1[8]=t1213;
  p_output1[9]=-5.*t1171*t1187*t1191*var3[0] - 20.*t1182*t1183*t1188*var3[4] + 5.*t1171*t1187*t1191*var3[4] - 30.*t1175*t1176*t1184*var3[8] + 20.*t1182*t1183*t1188*var3[8] - 20.*t1163*t1172*t1179*var3[12] + 30.*t1175*t1176*t1184*var3[12] + 20.*t1163*t1172*t1179*var3[16] - 5.*t1212*t1214*var3[16] + 5.*t1212*t1214*var3[20];
  p_output1[10]=-5.*t1191*t1229*var3[0] + 5.*t1177*t1191*var3[4] - 5.*t1171*t1187*t1191*var3[4] - 20.*t1171*t1177*t1188*t1229*var3[4] - 20.*t1182*t1183*t1188*var3[8] + 20.*t1171*t1187*t1188*var3[8] - 30.*t1183*t1184*t1187*t1229*var3[8] - 30.*t1175*t1176*t1184*var3[12] + 30.*t1182*t1183*t1184*var3[12] - 20.*t1176*t1179*t1182*t1229*var3[12] - 20.*t1163*t1172*t1179*var3[16] + 20.*t1175*t1176*t1179*var3[16] - 5.*t1172*t1175*t1229*var3[16] + 5.*t1163*t1172*var3[20] - 5.*t1212*t1214*var3[20];
  p_output1[11]=5.*t1159*t1177*t1191*var3[1] + 20.*t1159*t1171*t1187*t1188*var3[5] - 5.*t1159*t1177*t1191*var3[5] + 30.*t1159*t1182*t1183*t1184*var3[9] - 20.*t1159*t1171*t1187*t1188*var3[9] + 20.*t1159*t1175*t1176*t1179*var3[13] - 30.*t1159*t1182*t1183*t1184*var3[13] + 5.*t1159*t1163*t1172*var3[17] - 20.*t1159*t1175*t1176*t1179*var3[17] - 5.*t1159*t1163*t1172*var3[21];
  p_output1[12]=5.*t1105*t1153*t1177*t1191*var3[1] + 20.*t1105*t1153*t1171*t1187*t1188*var3[5] - 5.*t1105*t1153*t1177*t1191*var3[5] + 30.*t1105*t1153*t1182*t1183*t1184*var3[9] - 20.*t1105*t1153*t1171*t1187*t1188*var3[9] + 20.*t1105*t1153*t1175*t1176*t1179*var3[13] - 30.*t1105*t1153*t1182*t1183*t1184*var3[13] + 5.*t1105*t1153*t1163*t1172*var3[17] - 20.*t1105*t1153*t1175*t1176*t1179*var3[17] - 5.*t1105*t1153*t1163*t1172*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t1207;
  p_output1[15]=t1208;
  p_output1[16]=t1209;
  p_output1[17]=t1210;
  p_output1[18]=t1211;
  p_output1[19]=t1213;
  p_output1[20]=-5.*t1171*t1187*t1191*var3[1] - 20.*t1182*t1183*t1188*var3[5] + 5.*t1171*t1187*t1191*var3[5] - 30.*t1175*t1176*t1184*var3[9] + 20.*t1182*t1183*t1188*var3[9] - 20.*t1163*t1172*t1179*var3[13] + 30.*t1175*t1176*t1184*var3[13] + 20.*t1163*t1172*t1179*var3[17] - 5.*t1212*t1214*var3[17] + 5.*t1212*t1214*var3[21];
  p_output1[21]=-5.*t1191*t1229*var3[1] + 5.*t1177*t1191*var3[5] - 5.*t1171*t1187*t1191*var3[5] - 20.*t1171*t1177*t1188*t1229*var3[5] - 20.*t1182*t1183*t1188*var3[9] + 20.*t1171*t1187*t1188*var3[9] - 30.*t1183*t1184*t1187*t1229*var3[9] - 30.*t1175*t1176*t1184*var3[13] + 30.*t1182*t1183*t1184*var3[13] - 20.*t1176*t1179*t1182*t1229*var3[13] - 20.*t1163*t1172*t1179*var3[17] + 20.*t1175*t1176*t1179*var3[17] - 5.*t1172*t1175*t1229*var3[17] + 5.*t1163*t1172*var3[21] - 5.*t1212*t1214*var3[21];
  p_output1[22]=5.*t1159*t1177*t1191*var3[2] + 20.*t1159*t1171*t1187*t1188*var3[6] - 5.*t1159*t1177*t1191*var3[6] + 30.*t1159*t1182*t1183*t1184*var3[10] - 20.*t1159*t1171*t1187*t1188*var3[10] + 20.*t1159*t1175*t1176*t1179*var3[14] - 30.*t1159*t1182*t1183*t1184*var3[14] + 5.*t1159*t1163*t1172*var3[18] - 20.*t1159*t1175*t1176*t1179*var3[18] - 5.*t1159*t1163*t1172*var3[22];
  p_output1[23]=5.*t1105*t1153*t1177*t1191*var3[2] + 20.*t1105*t1153*t1171*t1187*t1188*var3[6] - 5.*t1105*t1153*t1177*t1191*var3[6] + 30.*t1105*t1153*t1182*t1183*t1184*var3[10] - 20.*t1105*t1153*t1171*t1187*t1188*var3[10] + 20.*t1105*t1153*t1175*t1176*t1179*var3[14] - 30.*t1105*t1153*t1182*t1183*t1184*var3[14] + 5.*t1105*t1153*t1163*t1172*var3[18] - 20.*t1105*t1153*t1175*t1176*t1179*var3[18] - 5.*t1105*t1153*t1163*t1172*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t1207;
  p_output1[26]=t1208;
  p_output1[27]=t1209;
  p_output1[28]=t1210;
  p_output1[29]=t1211;
  p_output1[30]=t1213;
  p_output1[31]=-5.*t1171*t1187*t1191*var3[2] - 20.*t1182*t1183*t1188*var3[6] + 5.*t1171*t1187*t1191*var3[6] - 30.*t1175*t1176*t1184*var3[10] + 20.*t1182*t1183*t1188*var3[10] - 20.*t1163*t1172*t1179*var3[14] + 30.*t1175*t1176*t1184*var3[14] + 20.*t1163*t1172*t1179*var3[18] - 5.*t1212*t1214*var3[18] + 5.*t1212*t1214*var3[22];
  p_output1[32]=-5.*t1191*t1229*var3[2] + 5.*t1177*t1191*var3[6] - 5.*t1171*t1187*t1191*var3[6] - 20.*t1171*t1177*t1188*t1229*var3[6] - 20.*t1182*t1183*t1188*var3[10] + 20.*t1171*t1187*t1188*var3[10] - 30.*t1183*t1184*t1187*t1229*var3[10] - 30.*t1175*t1176*t1184*var3[14] + 30.*t1182*t1183*t1184*var3[14] - 20.*t1176*t1179*t1182*t1229*var3[14] - 20.*t1163*t1172*t1179*var3[18] + 20.*t1175*t1176*t1179*var3[18] - 5.*t1172*t1175*t1229*var3[18] + 5.*t1163*t1172*var3[22] - 5.*t1212*t1214*var3[22];
  p_output1[33]=5.*t1159*t1177*t1191*var3[3] + 20.*t1159*t1171*t1187*t1188*var3[7] - 5.*t1159*t1177*t1191*var3[7] + 30.*t1159*t1182*t1183*t1184*var3[11] - 20.*t1159*t1171*t1187*t1188*var3[11] + 20.*t1159*t1175*t1176*t1179*var3[15] - 30.*t1159*t1182*t1183*t1184*var3[15] + 5.*t1159*t1163*t1172*var3[19] - 20.*t1159*t1175*t1176*t1179*var3[19] - 5.*t1159*t1163*t1172*var3[23];
  p_output1[34]=5.*t1105*t1153*t1177*t1191*var3[3] + 20.*t1105*t1153*t1171*t1187*t1188*var3[7] - 5.*t1105*t1153*t1177*t1191*var3[7] + 30.*t1105*t1153*t1182*t1183*t1184*var3[11] - 20.*t1105*t1153*t1171*t1187*t1188*var3[11] + 20.*t1105*t1153*t1175*t1176*t1179*var3[15] - 30.*t1105*t1153*t1182*t1183*t1184*var3[15] + 5.*t1105*t1153*t1163*t1172*var3[19] - 20.*t1105*t1153*t1175*t1176*t1179*var3[19] - 5.*t1105*t1153*t1163*t1172*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t1207;
  p_output1[37]=t1208;
  p_output1[38]=t1209;
  p_output1[39]=t1210;
  p_output1[40]=t1211;
  p_output1[41]=t1213;
  p_output1[42]=-5.*t1171*t1187*t1191*var3[3] - 20.*t1182*t1183*t1188*var3[7] + 5.*t1171*t1187*t1191*var3[7] - 30.*t1175*t1176*t1184*var3[11] + 20.*t1182*t1183*t1188*var3[11] - 20.*t1163*t1172*t1179*var3[15] + 30.*t1175*t1176*t1184*var3[15] + 20.*t1163*t1172*t1179*var3[19] - 5.*t1212*t1214*var3[19] + 5.*t1212*t1214*var3[23];
  p_output1[43]=-5.*t1191*t1229*var3[3] + 5.*t1177*t1191*var3[7] - 5.*t1171*t1187*t1191*var3[7] - 20.*t1171*t1177*t1188*t1229*var3[7] - 20.*t1182*t1183*t1188*var3[11] + 20.*t1171*t1187*t1188*var3[11] - 30.*t1183*t1184*t1187*t1229*var3[11] - 30.*t1175*t1176*t1184*var3[15] + 30.*t1182*t1183*t1184*var3[15] - 20.*t1176*t1179*t1182*t1229*var3[15] - 20.*t1163*t1172*t1179*var3[19] + 20.*t1175*t1176*t1179*var3[19] - 5.*t1172*t1175*t1229*var3[19] + 5.*t1163*t1172*var3[23] - 5.*t1212*t1214*var3[23];
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
