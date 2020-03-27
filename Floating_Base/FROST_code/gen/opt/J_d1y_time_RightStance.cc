/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:54:01 GMT-04:00
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
  double t11829;
  double t5300;
  double t5302;
  double t7383;
  double t10289;
  double t11819;
  double t11976;
  double t11977;
  double t12003;
  double t12008;
  double t12009;
  double t12444;
  double t14857;
  double t14873;
  double t14875;
  double t14911;
  double t14912;
  double t14914;
  double t14918;
  double t14919;
  double t14927;
  double t14928;
  double t14957;
  double t14968;
  double t14973;
  double t14993;
  double t14994;
  double t14958;
  double t14959;
  double t14960;
  double t14961;
  double t14962;
  double t14963;
  double t14964;
  double t14965;
  double t14966;
  double t14967;
  double t14969;
  double t14970;
  double t14971;
  double t14972;
  t11829 = -1.*var5[1];
  t5300 = -1. + var6[0];
  t5302 = -1. + var7[0];
  t7383 = 1/t5302;
  t10289 = -1.*t5300*t7383;
  t11819 = 1. + t10289;
  t11976 = var5[0] + t11829;
  t11977 = Power(t11976,-5);
  t12003 = -1.*var1[0];
  t12008 = t12003 + var1[1];
  t12009 = t5300*t7383*t12008;
  t12444 = t11829 + var1[0] + t12009;
  t14857 = Power(t12444,3);
  t14873 = Power(t11976,-4);
  t14875 = Power(t12444,2);
  t14911 = 1/t11976;
  t14912 = -1.*t14911*t12444;
  t14914 = 1. + t14912;
  t14918 = Power(t11976,-3);
  t14919 = Power(t14914,2);
  t14927 = Power(t11976,-2);
  t14928 = Power(t14914,3);
  t14957 = Power(t14914,4);
  t14968 = Power(t12444,4);
  t14973 = Power(t11976,-6);
  t14993 = -1.*t14927*t12444;
  t14994 = t14911 + t14993;
  t14958 = 5.*t14911*t14957;
  t14959 = 20.*t14927*t12444*t14928;
  t14960 = -5.*t14911*t14957;
  t14961 = t14959 + t14960;
  t14962 = 30.*t14918*t14875*t14919;
  t14963 = -20.*t14927*t12444*t14928;
  t14964 = t14962 + t14963;
  t14965 = 20.*t14873*t14857*t14914;
  t14966 = -30.*t14918*t14875*t14919;
  t14967 = t14965 + t14966;
  t14969 = 5.*t11977*t14968;
  t14970 = -20.*t14873*t14857*t14914;
  t14971 = t14969 + t14970;
  t14972 = -5.*t11977*t14968;
  p_output1[0]=-20.*t11819*t14927*t14928*var4[0] - 60.*t11819*t12444*t14918*t14919*var4[4] + 40.*t11819*t14927*t14928*var4[4] - 60.*t11819*t14873*t14875*t14914*var4[8] + 120.*t11819*t12444*t14918*t14919*var4[8] - 20.*t11819*t14927*t14928*var4[8] - 20.*t11819*t11977*t14857*var4[12] + 120.*t11819*t14873*t14875*t14914*var4[12] - 60.*t11819*t12444*t14918*t14919*var4[12] + 40.*t11819*t11977*t14857*var4[16] - 60.*t11819*t14873*t14875*t14914*var4[16] - 20.*t11819*t11977*t14857*var4[20];
  p_output1[1]=-20.*t14927*t14928*t5300*t7383*var4[0] - 60.*t12444*t14918*t14919*t5300*t7383*var4[4] + 40.*t14927*t14928*t5300*t7383*var4[4] - 60.*t14873*t14875*t14914*t5300*t7383*var4[8] + 120.*t12444*t14918*t14919*t5300*t7383*var4[8] - 20.*t14927*t14928*t5300*t7383*var4[8] - 20.*t11977*t14857*t5300*t7383*var4[12] + 120.*t14873*t14875*t14914*t5300*t7383*var4[12] - 60.*t12444*t14918*t14919*t5300*t7383*var4[12] + 40.*t11977*t14857*t5300*t7383*var4[16] - 60.*t14873*t14875*t14914*t5300*t7383*var4[16] - 20.*t11977*t14857*t5300*t7383*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t14958;
  p_output1[4]=t14961;
  p_output1[5]=t14964;
  p_output1[6]=t14967;
  p_output1[7]=t14971;
  p_output1[8]=t14972;
  p_output1[9]=20.*t12444*t14918*t14928*var4[0] - 5.*t14927*t14957*var4[0] + 60.*t14873*t14875*t14919*var4[4] - 60.*t12444*t14918*t14928*var4[4] + 5.*t14927*t14957*var4[4] + 60.*t11977*t14857*t14914*var4[8] - 150.*t14873*t14875*t14919*var4[8] + 40.*t12444*t14918*t14928*var4[8] - 140.*t11977*t14857*t14914*var4[12] + 90.*t14873*t14875*t14919*var4[12] + 20.*t14968*t14973*var4[12] + 80.*t11977*t14857*t14914*var4[16] - 45.*t14968*t14973*var4[16] + 25.*t14968*t14973*var4[20];
  p_output1[10]=5.*t14927*t14957*var4[0] + 20.*t14911*t14928*t14994*var4[0] + 40.*t12444*t14918*t14928*var4[4] - 20.*t14927*t14928*var4[4] - 5.*t14927*t14957*var4[4] + 60.*t12444*t14919*t14927*t14994*var4[4] - 20.*t14911*t14928*t14994*var4[4] + 90.*t14873*t14875*t14919*var4[8] - 60.*t12444*t14918*t14919*var4[8] - 40.*t12444*t14918*t14928*var4[8] + 20.*t14927*t14928*var4[8] + 60.*t14875*t14914*t14918*t14994*var4[8] - 60.*t12444*t14919*t14927*t14994*var4[8] + 80.*t11977*t14857*t14914*var4[12] - 60.*t14873*t14875*t14914*var4[12] - 90.*t14873*t14875*t14919*var4[12] + 60.*t12444*t14918*t14919*var4[12] + 20.*t14857*t14873*t14994*var4[12] - 60.*t14875*t14914*t14918*t14994*var4[12] - 20.*t11977*t14857*var4[16] - 80.*t11977*t14857*t14914*var4[16] + 60.*t14873*t14875*t14914*var4[16] + 25.*t14968*t14973*var4[16] - 20.*t14857*t14873*t14994*var4[16] + 20.*t11977*t14857*var4[20] - 25.*t14968*t14973*var4[20];
  p_output1[11]=-20.*t11819*t14927*t14928*var4[1] - 60.*t11819*t12444*t14918*t14919*var4[5] + 40.*t11819*t14927*t14928*var4[5] - 60.*t11819*t14873*t14875*t14914*var4[9] + 120.*t11819*t12444*t14918*t14919*var4[9] - 20.*t11819*t14927*t14928*var4[9] - 20.*t11819*t11977*t14857*var4[13] + 120.*t11819*t14873*t14875*t14914*var4[13] - 60.*t11819*t12444*t14918*t14919*var4[13] + 40.*t11819*t11977*t14857*var4[17] - 60.*t11819*t14873*t14875*t14914*var4[17] - 20.*t11819*t11977*t14857*var4[21];
  p_output1[12]=-20.*t14927*t14928*t5300*t7383*var4[1] - 60.*t12444*t14918*t14919*t5300*t7383*var4[5] + 40.*t14927*t14928*t5300*t7383*var4[5] - 60.*t14873*t14875*t14914*t5300*t7383*var4[9] + 120.*t12444*t14918*t14919*t5300*t7383*var4[9] - 20.*t14927*t14928*t5300*t7383*var4[9] - 20.*t11977*t14857*t5300*t7383*var4[13] + 120.*t14873*t14875*t14914*t5300*t7383*var4[13] - 60.*t12444*t14918*t14919*t5300*t7383*var4[13] + 40.*t11977*t14857*t5300*t7383*var4[17] - 60.*t14873*t14875*t14914*t5300*t7383*var4[17] - 20.*t11977*t14857*t5300*t7383*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t14958;
  p_output1[15]=t14961;
  p_output1[16]=t14964;
  p_output1[17]=t14967;
  p_output1[18]=t14971;
  p_output1[19]=t14972;
  p_output1[20]=20.*t12444*t14918*t14928*var4[1] - 5.*t14927*t14957*var4[1] + 60.*t14873*t14875*t14919*var4[5] - 60.*t12444*t14918*t14928*var4[5] + 5.*t14927*t14957*var4[5] + 60.*t11977*t14857*t14914*var4[9] - 150.*t14873*t14875*t14919*var4[9] + 40.*t12444*t14918*t14928*var4[9] - 140.*t11977*t14857*t14914*var4[13] + 90.*t14873*t14875*t14919*var4[13] + 20.*t14968*t14973*var4[13] + 80.*t11977*t14857*t14914*var4[17] - 45.*t14968*t14973*var4[17] + 25.*t14968*t14973*var4[21];
  p_output1[21]=5.*t14927*t14957*var4[1] + 20.*t14911*t14928*t14994*var4[1] + 40.*t12444*t14918*t14928*var4[5] - 20.*t14927*t14928*var4[5] - 5.*t14927*t14957*var4[5] + 60.*t12444*t14919*t14927*t14994*var4[5] - 20.*t14911*t14928*t14994*var4[5] + 90.*t14873*t14875*t14919*var4[9] - 60.*t12444*t14918*t14919*var4[9] - 40.*t12444*t14918*t14928*var4[9] + 20.*t14927*t14928*var4[9] + 60.*t14875*t14914*t14918*t14994*var4[9] - 60.*t12444*t14919*t14927*t14994*var4[9] + 80.*t11977*t14857*t14914*var4[13] - 60.*t14873*t14875*t14914*var4[13] - 90.*t14873*t14875*t14919*var4[13] + 60.*t12444*t14918*t14919*var4[13] + 20.*t14857*t14873*t14994*var4[13] - 60.*t14875*t14914*t14918*t14994*var4[13] - 20.*t11977*t14857*var4[17] - 80.*t11977*t14857*t14914*var4[17] + 60.*t14873*t14875*t14914*var4[17] + 25.*t14968*t14973*var4[17] - 20.*t14857*t14873*t14994*var4[17] + 20.*t11977*t14857*var4[21] - 25.*t14968*t14973*var4[21];
  p_output1[22]=-20.*t11819*t14927*t14928*var4[2] - 60.*t11819*t12444*t14918*t14919*var4[6] + 40.*t11819*t14927*t14928*var4[6] - 60.*t11819*t14873*t14875*t14914*var4[10] + 120.*t11819*t12444*t14918*t14919*var4[10] - 20.*t11819*t14927*t14928*var4[10] - 20.*t11819*t11977*t14857*var4[14] + 120.*t11819*t14873*t14875*t14914*var4[14] - 60.*t11819*t12444*t14918*t14919*var4[14] + 40.*t11819*t11977*t14857*var4[18] - 60.*t11819*t14873*t14875*t14914*var4[18] - 20.*t11819*t11977*t14857*var4[22];
  p_output1[23]=-20.*t14927*t14928*t5300*t7383*var4[2] - 60.*t12444*t14918*t14919*t5300*t7383*var4[6] + 40.*t14927*t14928*t5300*t7383*var4[6] - 60.*t14873*t14875*t14914*t5300*t7383*var4[10] + 120.*t12444*t14918*t14919*t5300*t7383*var4[10] - 20.*t14927*t14928*t5300*t7383*var4[10] - 20.*t11977*t14857*t5300*t7383*var4[14] + 120.*t14873*t14875*t14914*t5300*t7383*var4[14] - 60.*t12444*t14918*t14919*t5300*t7383*var4[14] + 40.*t11977*t14857*t5300*t7383*var4[18] - 60.*t14873*t14875*t14914*t5300*t7383*var4[18] - 20.*t11977*t14857*t5300*t7383*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t14958;
  p_output1[26]=t14961;
  p_output1[27]=t14964;
  p_output1[28]=t14967;
  p_output1[29]=t14971;
  p_output1[30]=t14972;
  p_output1[31]=20.*t12444*t14918*t14928*var4[2] - 5.*t14927*t14957*var4[2] + 60.*t14873*t14875*t14919*var4[6] - 60.*t12444*t14918*t14928*var4[6] + 5.*t14927*t14957*var4[6] + 60.*t11977*t14857*t14914*var4[10] - 150.*t14873*t14875*t14919*var4[10] + 40.*t12444*t14918*t14928*var4[10] - 140.*t11977*t14857*t14914*var4[14] + 90.*t14873*t14875*t14919*var4[14] + 20.*t14968*t14973*var4[14] + 80.*t11977*t14857*t14914*var4[18] - 45.*t14968*t14973*var4[18] + 25.*t14968*t14973*var4[22];
  p_output1[32]=5.*t14927*t14957*var4[2] + 20.*t14911*t14928*t14994*var4[2] + 40.*t12444*t14918*t14928*var4[6] - 20.*t14927*t14928*var4[6] - 5.*t14927*t14957*var4[6] + 60.*t12444*t14919*t14927*t14994*var4[6] - 20.*t14911*t14928*t14994*var4[6] + 90.*t14873*t14875*t14919*var4[10] - 60.*t12444*t14918*t14919*var4[10] - 40.*t12444*t14918*t14928*var4[10] + 20.*t14927*t14928*var4[10] + 60.*t14875*t14914*t14918*t14994*var4[10] - 60.*t12444*t14919*t14927*t14994*var4[10] + 80.*t11977*t14857*t14914*var4[14] - 60.*t14873*t14875*t14914*var4[14] - 90.*t14873*t14875*t14919*var4[14] + 60.*t12444*t14918*t14919*var4[14] + 20.*t14857*t14873*t14994*var4[14] - 60.*t14875*t14914*t14918*t14994*var4[14] - 20.*t11977*t14857*var4[18] - 80.*t11977*t14857*t14914*var4[18] + 60.*t14873*t14875*t14914*var4[18] + 25.*t14968*t14973*var4[18] - 20.*t14857*t14873*t14994*var4[18] + 20.*t11977*t14857*var4[22] - 25.*t14968*t14973*var4[22];
  p_output1[33]=-20.*t11819*t14927*t14928*var4[3] - 60.*t11819*t12444*t14918*t14919*var4[7] + 40.*t11819*t14927*t14928*var4[7] - 60.*t11819*t14873*t14875*t14914*var4[11] + 120.*t11819*t12444*t14918*t14919*var4[11] - 20.*t11819*t14927*t14928*var4[11] - 20.*t11819*t11977*t14857*var4[15] + 120.*t11819*t14873*t14875*t14914*var4[15] - 60.*t11819*t12444*t14918*t14919*var4[15] + 40.*t11819*t11977*t14857*var4[19] - 60.*t11819*t14873*t14875*t14914*var4[19] - 20.*t11819*t11977*t14857*var4[23];
  p_output1[34]=-20.*t14927*t14928*t5300*t7383*var4[3] - 60.*t12444*t14918*t14919*t5300*t7383*var4[7] + 40.*t14927*t14928*t5300*t7383*var4[7] - 60.*t14873*t14875*t14914*t5300*t7383*var4[11] + 120.*t12444*t14918*t14919*t5300*t7383*var4[11] - 20.*t14927*t14928*t5300*t7383*var4[11] - 20.*t11977*t14857*t5300*t7383*var4[15] + 120.*t14873*t14875*t14914*t5300*t7383*var4[15] - 60.*t12444*t14918*t14919*t5300*t7383*var4[15] + 40.*t11977*t14857*t5300*t7383*var4[19] - 60.*t14873*t14875*t14914*t5300*t7383*var4[19] - 20.*t11977*t14857*t5300*t7383*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t14958;
  p_output1[37]=t14961;
  p_output1[38]=t14964;
  p_output1[39]=t14967;
  p_output1[40]=t14971;
  p_output1[41]=t14972;
  p_output1[42]=20.*t12444*t14918*t14928*var4[3] - 5.*t14927*t14957*var4[3] + 60.*t14873*t14875*t14919*var4[7] - 60.*t12444*t14918*t14928*var4[7] + 5.*t14927*t14957*var4[7] + 60.*t11977*t14857*t14914*var4[11] - 150.*t14873*t14875*t14919*var4[11] + 40.*t12444*t14918*t14928*var4[11] - 140.*t11977*t14857*t14914*var4[15] + 90.*t14873*t14875*t14919*var4[15] + 20.*t14968*t14973*var4[15] + 80.*t11977*t14857*t14914*var4[19] - 45.*t14968*t14973*var4[19] + 25.*t14968*t14973*var4[23];
  p_output1[43]=5.*t14927*t14957*var4[3] + 20.*t14911*t14928*t14994*var4[3] + 40.*t12444*t14918*t14928*var4[7] - 20.*t14927*t14928*var4[7] - 5.*t14927*t14957*var4[7] + 60.*t12444*t14919*t14927*t14994*var4[7] - 20.*t14911*t14928*t14994*var4[7] + 90.*t14873*t14875*t14919*var4[11] - 60.*t12444*t14918*t14919*var4[11] - 40.*t12444*t14918*t14928*var4[11] + 20.*t14927*t14928*var4[11] + 60.*t14875*t14914*t14918*t14994*var4[11] - 60.*t12444*t14919*t14927*t14994*var4[11] + 80.*t11977*t14857*t14914*var4[15] - 60.*t14873*t14875*t14914*var4[15] - 90.*t14873*t14875*t14919*var4[15] + 60.*t12444*t14918*t14919*var4[15] + 20.*t14857*t14873*t14994*var4[15] - 60.*t14875*t14914*t14918*t14994*var4[15] - 20.*t11977*t14857*var4[19] - 80.*t11977*t14857*t14914*var4[19] + 60.*t14873*t14875*t14914*var4[19] + 25.*t14968*t14973*var4[19] - 20.*t14857*t14873*t14994*var4[19] + 20.*t11977*t14857*var4[23] - 25.*t14968*t14973*var4[23];
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
