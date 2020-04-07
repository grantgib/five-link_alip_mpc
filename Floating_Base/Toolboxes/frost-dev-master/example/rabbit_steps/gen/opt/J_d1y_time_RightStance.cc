/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:52:37 GMT-04:00
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
  double t5252;
  double t2200;
  double t2335;
  double t2343;
  double t2443;
  double t5249;
  double t5257;
  double t5258;
  double t5261;
  double t5262;
  double t5264;
  double t5265;
  double t5266;
  double t5279;
  double t5280;
  double t5281;
  double t5282;
  double t5283;
  double t5287;
  double t5288;
  double t5294;
  double t5295;
  double t5313;
  double t5324;
  double t5329;
  double t5349;
  double t5350;
  double t5314;
  double t5315;
  double t5316;
  double t5317;
  double t5318;
  double t5319;
  double t5320;
  double t5321;
  double t5322;
  double t5323;
  double t5325;
  double t5326;
  double t5327;
  double t5328;
  t5252 = -1.*var5[1];
  t2200 = -1. + var6[0];
  t2335 = -1. + var7[0];
  t2343 = 1/t2335;
  t2443 = -1.*t2200*t2343;
  t5249 = 1. + t2443;
  t5257 = var5[0] + t5252;
  t5258 = Power(t5257,-5);
  t5261 = -1.*var1[0];
  t5262 = t5261 + var1[1];
  t5264 = t2200*t2343*t5262;
  t5265 = t5252 + var1[0] + t5264;
  t5266 = Power(t5265,3);
  t5279 = Power(t5257,-4);
  t5280 = Power(t5265,2);
  t5281 = 1/t5257;
  t5282 = -1.*t5281*t5265;
  t5283 = 1. + t5282;
  t5287 = Power(t5257,-3);
  t5288 = Power(t5283,2);
  t5294 = Power(t5257,-2);
  t5295 = Power(t5283,3);
  t5313 = Power(t5283,4);
  t5324 = Power(t5265,4);
  t5329 = Power(t5257,-6);
  t5349 = -1.*t5294*t5265;
  t5350 = t5281 + t5349;
  t5314 = 5.*t5281*t5313;
  t5315 = 20.*t5294*t5265*t5295;
  t5316 = -5.*t5281*t5313;
  t5317 = t5315 + t5316;
  t5318 = 30.*t5287*t5280*t5288;
  t5319 = -20.*t5294*t5265*t5295;
  t5320 = t5318 + t5319;
  t5321 = 20.*t5279*t5266*t5283;
  t5322 = -30.*t5287*t5280*t5288;
  t5323 = t5321 + t5322;
  t5325 = 5.*t5258*t5324;
  t5326 = -20.*t5279*t5266*t5283;
  t5327 = t5325 + t5326;
  t5328 = -5.*t5258*t5324;
  p_output1[0]=-20.*t5249*t5294*t5295*var4[0] - 60.*t5249*t5265*t5287*t5288*var4[4] + 40.*t5249*t5294*t5295*var4[4] - 60.*t5249*t5279*t5280*t5283*var4[8] + 120.*t5249*t5265*t5287*t5288*var4[8] - 20.*t5249*t5294*t5295*var4[8] - 20.*t5249*t5258*t5266*var4[12] + 120.*t5249*t5279*t5280*t5283*var4[12] - 60.*t5249*t5265*t5287*t5288*var4[12] + 40.*t5249*t5258*t5266*var4[16] - 60.*t5249*t5279*t5280*t5283*var4[16] - 20.*t5249*t5258*t5266*var4[20];
  p_output1[1]=-20.*t2200*t2343*t5294*t5295*var4[0] - 60.*t2200*t2343*t5265*t5287*t5288*var4[4] + 40.*t2200*t2343*t5294*t5295*var4[4] - 60.*t2200*t2343*t5279*t5280*t5283*var4[8] + 120.*t2200*t2343*t5265*t5287*t5288*var4[8] - 20.*t2200*t2343*t5294*t5295*var4[8] - 20.*t2200*t2343*t5258*t5266*var4[12] + 120.*t2200*t2343*t5279*t5280*t5283*var4[12] - 60.*t2200*t2343*t5265*t5287*t5288*var4[12] + 40.*t2200*t2343*t5258*t5266*var4[16] - 60.*t2200*t2343*t5279*t5280*t5283*var4[16] - 20.*t2200*t2343*t5258*t5266*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t5314;
  p_output1[4]=t5317;
  p_output1[5]=t5320;
  p_output1[6]=t5323;
  p_output1[7]=t5327;
  p_output1[8]=t5328;
  p_output1[9]=20.*t5265*t5287*t5295*var4[0] - 5.*t5294*t5313*var4[0] + 60.*t5279*t5280*t5288*var4[4] - 60.*t5265*t5287*t5295*var4[4] + 5.*t5294*t5313*var4[4] + 60.*t5258*t5266*t5283*var4[8] - 150.*t5279*t5280*t5288*var4[8] + 40.*t5265*t5287*t5295*var4[8] - 140.*t5258*t5266*t5283*var4[12] + 90.*t5279*t5280*t5288*var4[12] + 20.*t5324*t5329*var4[12] + 80.*t5258*t5266*t5283*var4[16] - 45.*t5324*t5329*var4[16] + 25.*t5324*t5329*var4[20];
  p_output1[10]=5.*t5294*t5313*var4[0] + 20.*t5281*t5295*t5350*var4[0] + 40.*t5265*t5287*t5295*var4[4] - 20.*t5294*t5295*var4[4] - 5.*t5294*t5313*var4[4] + 60.*t5265*t5288*t5294*t5350*var4[4] - 20.*t5281*t5295*t5350*var4[4] + 90.*t5279*t5280*t5288*var4[8] - 60.*t5265*t5287*t5288*var4[8] - 40.*t5265*t5287*t5295*var4[8] + 20.*t5294*t5295*var4[8] + 60.*t5280*t5283*t5287*t5350*var4[8] - 60.*t5265*t5288*t5294*t5350*var4[8] + 80.*t5258*t5266*t5283*var4[12] - 60.*t5279*t5280*t5283*var4[12] - 90.*t5279*t5280*t5288*var4[12] + 60.*t5265*t5287*t5288*var4[12] + 20.*t5266*t5279*t5350*var4[12] - 60.*t5280*t5283*t5287*t5350*var4[12] - 20.*t5258*t5266*var4[16] - 80.*t5258*t5266*t5283*var4[16] + 60.*t5279*t5280*t5283*var4[16] + 25.*t5324*t5329*var4[16] - 20.*t5266*t5279*t5350*var4[16] + 20.*t5258*t5266*var4[20] - 25.*t5324*t5329*var4[20];
  p_output1[11]=-20.*t5249*t5294*t5295*var4[1] - 60.*t5249*t5265*t5287*t5288*var4[5] + 40.*t5249*t5294*t5295*var4[5] - 60.*t5249*t5279*t5280*t5283*var4[9] + 120.*t5249*t5265*t5287*t5288*var4[9] - 20.*t5249*t5294*t5295*var4[9] - 20.*t5249*t5258*t5266*var4[13] + 120.*t5249*t5279*t5280*t5283*var4[13] - 60.*t5249*t5265*t5287*t5288*var4[13] + 40.*t5249*t5258*t5266*var4[17] - 60.*t5249*t5279*t5280*t5283*var4[17] - 20.*t5249*t5258*t5266*var4[21];
  p_output1[12]=-20.*t2200*t2343*t5294*t5295*var4[1] - 60.*t2200*t2343*t5265*t5287*t5288*var4[5] + 40.*t2200*t2343*t5294*t5295*var4[5] - 60.*t2200*t2343*t5279*t5280*t5283*var4[9] + 120.*t2200*t2343*t5265*t5287*t5288*var4[9] - 20.*t2200*t2343*t5294*t5295*var4[9] - 20.*t2200*t2343*t5258*t5266*var4[13] + 120.*t2200*t2343*t5279*t5280*t5283*var4[13] - 60.*t2200*t2343*t5265*t5287*t5288*var4[13] + 40.*t2200*t2343*t5258*t5266*var4[17] - 60.*t2200*t2343*t5279*t5280*t5283*var4[17] - 20.*t2200*t2343*t5258*t5266*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t5314;
  p_output1[15]=t5317;
  p_output1[16]=t5320;
  p_output1[17]=t5323;
  p_output1[18]=t5327;
  p_output1[19]=t5328;
  p_output1[20]=20.*t5265*t5287*t5295*var4[1] - 5.*t5294*t5313*var4[1] + 60.*t5279*t5280*t5288*var4[5] - 60.*t5265*t5287*t5295*var4[5] + 5.*t5294*t5313*var4[5] + 60.*t5258*t5266*t5283*var4[9] - 150.*t5279*t5280*t5288*var4[9] + 40.*t5265*t5287*t5295*var4[9] - 140.*t5258*t5266*t5283*var4[13] + 90.*t5279*t5280*t5288*var4[13] + 20.*t5324*t5329*var4[13] + 80.*t5258*t5266*t5283*var4[17] - 45.*t5324*t5329*var4[17] + 25.*t5324*t5329*var4[21];
  p_output1[21]=5.*t5294*t5313*var4[1] + 20.*t5281*t5295*t5350*var4[1] + 40.*t5265*t5287*t5295*var4[5] - 20.*t5294*t5295*var4[5] - 5.*t5294*t5313*var4[5] + 60.*t5265*t5288*t5294*t5350*var4[5] - 20.*t5281*t5295*t5350*var4[5] + 90.*t5279*t5280*t5288*var4[9] - 60.*t5265*t5287*t5288*var4[9] - 40.*t5265*t5287*t5295*var4[9] + 20.*t5294*t5295*var4[9] + 60.*t5280*t5283*t5287*t5350*var4[9] - 60.*t5265*t5288*t5294*t5350*var4[9] + 80.*t5258*t5266*t5283*var4[13] - 60.*t5279*t5280*t5283*var4[13] - 90.*t5279*t5280*t5288*var4[13] + 60.*t5265*t5287*t5288*var4[13] + 20.*t5266*t5279*t5350*var4[13] - 60.*t5280*t5283*t5287*t5350*var4[13] - 20.*t5258*t5266*var4[17] - 80.*t5258*t5266*t5283*var4[17] + 60.*t5279*t5280*t5283*var4[17] + 25.*t5324*t5329*var4[17] - 20.*t5266*t5279*t5350*var4[17] + 20.*t5258*t5266*var4[21] - 25.*t5324*t5329*var4[21];
  p_output1[22]=-20.*t5249*t5294*t5295*var4[2] - 60.*t5249*t5265*t5287*t5288*var4[6] + 40.*t5249*t5294*t5295*var4[6] - 60.*t5249*t5279*t5280*t5283*var4[10] + 120.*t5249*t5265*t5287*t5288*var4[10] - 20.*t5249*t5294*t5295*var4[10] - 20.*t5249*t5258*t5266*var4[14] + 120.*t5249*t5279*t5280*t5283*var4[14] - 60.*t5249*t5265*t5287*t5288*var4[14] + 40.*t5249*t5258*t5266*var4[18] - 60.*t5249*t5279*t5280*t5283*var4[18] - 20.*t5249*t5258*t5266*var4[22];
  p_output1[23]=-20.*t2200*t2343*t5294*t5295*var4[2] - 60.*t2200*t2343*t5265*t5287*t5288*var4[6] + 40.*t2200*t2343*t5294*t5295*var4[6] - 60.*t2200*t2343*t5279*t5280*t5283*var4[10] + 120.*t2200*t2343*t5265*t5287*t5288*var4[10] - 20.*t2200*t2343*t5294*t5295*var4[10] - 20.*t2200*t2343*t5258*t5266*var4[14] + 120.*t2200*t2343*t5279*t5280*t5283*var4[14] - 60.*t2200*t2343*t5265*t5287*t5288*var4[14] + 40.*t2200*t2343*t5258*t5266*var4[18] - 60.*t2200*t2343*t5279*t5280*t5283*var4[18] - 20.*t2200*t2343*t5258*t5266*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t5314;
  p_output1[26]=t5317;
  p_output1[27]=t5320;
  p_output1[28]=t5323;
  p_output1[29]=t5327;
  p_output1[30]=t5328;
  p_output1[31]=20.*t5265*t5287*t5295*var4[2] - 5.*t5294*t5313*var4[2] + 60.*t5279*t5280*t5288*var4[6] - 60.*t5265*t5287*t5295*var4[6] + 5.*t5294*t5313*var4[6] + 60.*t5258*t5266*t5283*var4[10] - 150.*t5279*t5280*t5288*var4[10] + 40.*t5265*t5287*t5295*var4[10] - 140.*t5258*t5266*t5283*var4[14] + 90.*t5279*t5280*t5288*var4[14] + 20.*t5324*t5329*var4[14] + 80.*t5258*t5266*t5283*var4[18] - 45.*t5324*t5329*var4[18] + 25.*t5324*t5329*var4[22];
  p_output1[32]=5.*t5294*t5313*var4[2] + 20.*t5281*t5295*t5350*var4[2] + 40.*t5265*t5287*t5295*var4[6] - 20.*t5294*t5295*var4[6] - 5.*t5294*t5313*var4[6] + 60.*t5265*t5288*t5294*t5350*var4[6] - 20.*t5281*t5295*t5350*var4[6] + 90.*t5279*t5280*t5288*var4[10] - 60.*t5265*t5287*t5288*var4[10] - 40.*t5265*t5287*t5295*var4[10] + 20.*t5294*t5295*var4[10] + 60.*t5280*t5283*t5287*t5350*var4[10] - 60.*t5265*t5288*t5294*t5350*var4[10] + 80.*t5258*t5266*t5283*var4[14] - 60.*t5279*t5280*t5283*var4[14] - 90.*t5279*t5280*t5288*var4[14] + 60.*t5265*t5287*t5288*var4[14] + 20.*t5266*t5279*t5350*var4[14] - 60.*t5280*t5283*t5287*t5350*var4[14] - 20.*t5258*t5266*var4[18] - 80.*t5258*t5266*t5283*var4[18] + 60.*t5279*t5280*t5283*var4[18] + 25.*t5324*t5329*var4[18] - 20.*t5266*t5279*t5350*var4[18] + 20.*t5258*t5266*var4[22] - 25.*t5324*t5329*var4[22];
  p_output1[33]=-20.*t5249*t5294*t5295*var4[3] - 60.*t5249*t5265*t5287*t5288*var4[7] + 40.*t5249*t5294*t5295*var4[7] - 60.*t5249*t5279*t5280*t5283*var4[11] + 120.*t5249*t5265*t5287*t5288*var4[11] - 20.*t5249*t5294*t5295*var4[11] - 20.*t5249*t5258*t5266*var4[15] + 120.*t5249*t5279*t5280*t5283*var4[15] - 60.*t5249*t5265*t5287*t5288*var4[15] + 40.*t5249*t5258*t5266*var4[19] - 60.*t5249*t5279*t5280*t5283*var4[19] - 20.*t5249*t5258*t5266*var4[23];
  p_output1[34]=-20.*t2200*t2343*t5294*t5295*var4[3] - 60.*t2200*t2343*t5265*t5287*t5288*var4[7] + 40.*t2200*t2343*t5294*t5295*var4[7] - 60.*t2200*t2343*t5279*t5280*t5283*var4[11] + 120.*t2200*t2343*t5265*t5287*t5288*var4[11] - 20.*t2200*t2343*t5294*t5295*var4[11] - 20.*t2200*t2343*t5258*t5266*var4[15] + 120.*t2200*t2343*t5279*t5280*t5283*var4[15] - 60.*t2200*t2343*t5265*t5287*t5288*var4[15] + 40.*t2200*t2343*t5258*t5266*var4[19] - 60.*t2200*t2343*t5279*t5280*t5283*var4[19] - 20.*t2200*t2343*t5258*t5266*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t5314;
  p_output1[37]=t5317;
  p_output1[38]=t5320;
  p_output1[39]=t5323;
  p_output1[40]=t5327;
  p_output1[41]=t5328;
  p_output1[42]=20.*t5265*t5287*t5295*var4[3] - 5.*t5294*t5313*var4[3] + 60.*t5279*t5280*t5288*var4[7] - 60.*t5265*t5287*t5295*var4[7] + 5.*t5294*t5313*var4[7] + 60.*t5258*t5266*t5283*var4[11] - 150.*t5279*t5280*t5288*var4[11] + 40.*t5265*t5287*t5295*var4[11] - 140.*t5258*t5266*t5283*var4[15] + 90.*t5279*t5280*t5288*var4[15] + 20.*t5324*t5329*var4[15] + 80.*t5258*t5266*t5283*var4[19] - 45.*t5324*t5329*var4[19] + 25.*t5324*t5329*var4[23];
  p_output1[43]=5.*t5294*t5313*var4[3] + 20.*t5281*t5295*t5350*var4[3] + 40.*t5265*t5287*t5295*var4[7] - 20.*t5294*t5295*var4[7] - 5.*t5294*t5313*var4[7] + 60.*t5265*t5288*t5294*t5350*var4[7] - 20.*t5281*t5295*t5350*var4[7] + 90.*t5279*t5280*t5288*var4[11] - 60.*t5265*t5287*t5288*var4[11] - 40.*t5265*t5287*t5295*var4[11] + 20.*t5294*t5295*var4[11] + 60.*t5280*t5283*t5287*t5350*var4[11] - 60.*t5265*t5288*t5294*t5350*var4[11] + 80.*t5258*t5266*t5283*var4[15] - 60.*t5279*t5280*t5283*var4[15] - 90.*t5279*t5280*t5288*var4[15] + 60.*t5265*t5287*t5288*var4[15] + 20.*t5266*t5279*t5350*var4[15] - 60.*t5280*t5283*t5287*t5350*var4[15] - 20.*t5258*t5266*var4[19] - 80.*t5258*t5266*t5283*var4[19] + 60.*t5279*t5280*t5283*var4[19] + 25.*t5324*t5329*var4[19] - 20.*t5266*t5279*t5350*var4[19] + 20.*t5258*t5266*var4[23] - 25.*t5324*t5329*var4[23];
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
