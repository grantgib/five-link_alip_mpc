/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:53:37 GMT-04:00
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
  double t1859;
  double t1795;
  double t1799;
  double t1837;
  double t1840;
  double t1847;
  double t2012;
  double t2046;
  double t2050;
  double t2052;
  double t2139;
  double t2179;
  double t2201;
  double t2313;
  double t2659;
  double t2674;
  double t2727;
  double t2730;
  double t2903;
  double t2941;
  double t3058;
  double t3059;
  double t3978;
  double t5145;
  double t5321;
  double t7096;
  double t7101;
  double t4162;
  double t4227;
  double t4329;
  double t4413;
  double t4414;
  double t4700;
  double t5071;
  double t5074;
  double t5102;
  double t5131;
  double t5146;
  double t5208;
  double t5287;
  double t5315;
  t1859 = -1.*var5[1];
  t1795 = -1. + var6[0];
  t1799 = -1. + var7[0];
  t1837 = 1/t1799;
  t1840 = -1.*t1795*t1837;
  t1847 = 1. + t1840;
  t2012 = var5[0] + t1859;
  t2046 = Power(t2012,-5);
  t2050 = -1.*var1[0];
  t2052 = t2050 + var1[1];
  t2139 = t1795*t1837*t2052;
  t2179 = t1859 + var1[0] + t2139;
  t2201 = Power(t2179,3);
  t2313 = Power(t2012,-4);
  t2659 = Power(t2179,2);
  t2674 = 1/t2012;
  t2727 = -1.*t2674*t2179;
  t2730 = 1. + t2727;
  t2903 = Power(t2012,-3);
  t2941 = Power(t2730,2);
  t3058 = Power(t2012,-2);
  t3059 = Power(t2730,3);
  t3978 = Power(t2730,4);
  t5145 = Power(t2179,4);
  t5321 = Power(t2012,-6);
  t7096 = -1.*t3058*t2179;
  t7101 = t2674 + t7096;
  t4162 = 5.*t2674*t3978;
  t4227 = 20.*t3058*t2179*t3059;
  t4329 = -5.*t2674*t3978;
  t4413 = t4227 + t4329;
  t4414 = 30.*t2903*t2659*t2941;
  t4700 = -20.*t3058*t2179*t3059;
  t5071 = t4414 + t4700;
  t5074 = 20.*t2313*t2201*t2730;
  t5102 = -30.*t2903*t2659*t2941;
  t5131 = t5074 + t5102;
  t5146 = 5.*t2046*t5145;
  t5208 = -20.*t2313*t2201*t2730;
  t5287 = t5146 + t5208;
  t5315 = -5.*t2046*t5145;
  p_output1[0]=-20.*t1847*t3058*t3059*var4[0] - 60.*t1847*t2179*t2903*t2941*var4[4] + 40.*t1847*t3058*t3059*var4[4] - 60.*t1847*t2313*t2659*t2730*var4[8] + 120.*t1847*t2179*t2903*t2941*var4[8] - 20.*t1847*t3058*t3059*var4[8] - 20.*t1847*t2046*t2201*var4[12] + 120.*t1847*t2313*t2659*t2730*var4[12] - 60.*t1847*t2179*t2903*t2941*var4[12] + 40.*t1847*t2046*t2201*var4[16] - 60.*t1847*t2313*t2659*t2730*var4[16] - 20.*t1847*t2046*t2201*var4[20];
  p_output1[1]=-20.*t1795*t1837*t3058*t3059*var4[0] - 60.*t1795*t1837*t2179*t2903*t2941*var4[4] + 40.*t1795*t1837*t3058*t3059*var4[4] - 60.*t1795*t1837*t2313*t2659*t2730*var4[8] + 120.*t1795*t1837*t2179*t2903*t2941*var4[8] - 20.*t1795*t1837*t3058*t3059*var4[8] - 20.*t1795*t1837*t2046*t2201*var4[12] + 120.*t1795*t1837*t2313*t2659*t2730*var4[12] - 60.*t1795*t1837*t2179*t2903*t2941*var4[12] + 40.*t1795*t1837*t2046*t2201*var4[16] - 60.*t1795*t1837*t2313*t2659*t2730*var4[16] - 20.*t1795*t1837*t2046*t2201*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t4162;
  p_output1[4]=t4413;
  p_output1[5]=t5071;
  p_output1[6]=t5131;
  p_output1[7]=t5287;
  p_output1[8]=t5315;
  p_output1[9]=20.*t2179*t2903*t3059*var4[0] - 5.*t3058*t3978*var4[0] + 60.*t2313*t2659*t2941*var4[4] - 60.*t2179*t2903*t3059*var4[4] + 5.*t3058*t3978*var4[4] + 60.*t2046*t2201*t2730*var4[8] - 150.*t2313*t2659*t2941*var4[8] + 40.*t2179*t2903*t3059*var4[8] - 140.*t2046*t2201*t2730*var4[12] + 90.*t2313*t2659*t2941*var4[12] + 20.*t5145*t5321*var4[12] + 80.*t2046*t2201*t2730*var4[16] - 45.*t5145*t5321*var4[16] + 25.*t5145*t5321*var4[20];
  p_output1[10]=5.*t3058*t3978*var4[0] + 20.*t2674*t3059*t7101*var4[0] + 40.*t2179*t2903*t3059*var4[4] - 20.*t3058*t3059*var4[4] - 5.*t3058*t3978*var4[4] + 60.*t2179*t2941*t3058*t7101*var4[4] - 20.*t2674*t3059*t7101*var4[4] + 90.*t2313*t2659*t2941*var4[8] - 60.*t2179*t2903*t2941*var4[8] - 40.*t2179*t2903*t3059*var4[8] + 20.*t3058*t3059*var4[8] + 60.*t2659*t2730*t2903*t7101*var4[8] - 60.*t2179*t2941*t3058*t7101*var4[8] + 80.*t2046*t2201*t2730*var4[12] - 60.*t2313*t2659*t2730*var4[12] - 90.*t2313*t2659*t2941*var4[12] + 60.*t2179*t2903*t2941*var4[12] + 20.*t2201*t2313*t7101*var4[12] - 60.*t2659*t2730*t2903*t7101*var4[12] - 20.*t2046*t2201*var4[16] - 80.*t2046*t2201*t2730*var4[16] + 60.*t2313*t2659*t2730*var4[16] + 25.*t5145*t5321*var4[16] - 20.*t2201*t2313*t7101*var4[16] + 20.*t2046*t2201*var4[20] - 25.*t5145*t5321*var4[20];
  p_output1[11]=-20.*t1847*t3058*t3059*var4[1] - 60.*t1847*t2179*t2903*t2941*var4[5] + 40.*t1847*t3058*t3059*var4[5] - 60.*t1847*t2313*t2659*t2730*var4[9] + 120.*t1847*t2179*t2903*t2941*var4[9] - 20.*t1847*t3058*t3059*var4[9] - 20.*t1847*t2046*t2201*var4[13] + 120.*t1847*t2313*t2659*t2730*var4[13] - 60.*t1847*t2179*t2903*t2941*var4[13] + 40.*t1847*t2046*t2201*var4[17] - 60.*t1847*t2313*t2659*t2730*var4[17] - 20.*t1847*t2046*t2201*var4[21];
  p_output1[12]=-20.*t1795*t1837*t3058*t3059*var4[1] - 60.*t1795*t1837*t2179*t2903*t2941*var4[5] + 40.*t1795*t1837*t3058*t3059*var4[5] - 60.*t1795*t1837*t2313*t2659*t2730*var4[9] + 120.*t1795*t1837*t2179*t2903*t2941*var4[9] - 20.*t1795*t1837*t3058*t3059*var4[9] - 20.*t1795*t1837*t2046*t2201*var4[13] + 120.*t1795*t1837*t2313*t2659*t2730*var4[13] - 60.*t1795*t1837*t2179*t2903*t2941*var4[13] + 40.*t1795*t1837*t2046*t2201*var4[17] - 60.*t1795*t1837*t2313*t2659*t2730*var4[17] - 20.*t1795*t1837*t2046*t2201*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t4162;
  p_output1[15]=t4413;
  p_output1[16]=t5071;
  p_output1[17]=t5131;
  p_output1[18]=t5287;
  p_output1[19]=t5315;
  p_output1[20]=20.*t2179*t2903*t3059*var4[1] - 5.*t3058*t3978*var4[1] + 60.*t2313*t2659*t2941*var4[5] - 60.*t2179*t2903*t3059*var4[5] + 5.*t3058*t3978*var4[5] + 60.*t2046*t2201*t2730*var4[9] - 150.*t2313*t2659*t2941*var4[9] + 40.*t2179*t2903*t3059*var4[9] - 140.*t2046*t2201*t2730*var4[13] + 90.*t2313*t2659*t2941*var4[13] + 20.*t5145*t5321*var4[13] + 80.*t2046*t2201*t2730*var4[17] - 45.*t5145*t5321*var4[17] + 25.*t5145*t5321*var4[21];
  p_output1[21]=5.*t3058*t3978*var4[1] + 20.*t2674*t3059*t7101*var4[1] + 40.*t2179*t2903*t3059*var4[5] - 20.*t3058*t3059*var4[5] - 5.*t3058*t3978*var4[5] + 60.*t2179*t2941*t3058*t7101*var4[5] - 20.*t2674*t3059*t7101*var4[5] + 90.*t2313*t2659*t2941*var4[9] - 60.*t2179*t2903*t2941*var4[9] - 40.*t2179*t2903*t3059*var4[9] + 20.*t3058*t3059*var4[9] + 60.*t2659*t2730*t2903*t7101*var4[9] - 60.*t2179*t2941*t3058*t7101*var4[9] + 80.*t2046*t2201*t2730*var4[13] - 60.*t2313*t2659*t2730*var4[13] - 90.*t2313*t2659*t2941*var4[13] + 60.*t2179*t2903*t2941*var4[13] + 20.*t2201*t2313*t7101*var4[13] - 60.*t2659*t2730*t2903*t7101*var4[13] - 20.*t2046*t2201*var4[17] - 80.*t2046*t2201*t2730*var4[17] + 60.*t2313*t2659*t2730*var4[17] + 25.*t5145*t5321*var4[17] - 20.*t2201*t2313*t7101*var4[17] + 20.*t2046*t2201*var4[21] - 25.*t5145*t5321*var4[21];
  p_output1[22]=-20.*t1847*t3058*t3059*var4[2] - 60.*t1847*t2179*t2903*t2941*var4[6] + 40.*t1847*t3058*t3059*var4[6] - 60.*t1847*t2313*t2659*t2730*var4[10] + 120.*t1847*t2179*t2903*t2941*var4[10] - 20.*t1847*t3058*t3059*var4[10] - 20.*t1847*t2046*t2201*var4[14] + 120.*t1847*t2313*t2659*t2730*var4[14] - 60.*t1847*t2179*t2903*t2941*var4[14] + 40.*t1847*t2046*t2201*var4[18] - 60.*t1847*t2313*t2659*t2730*var4[18] - 20.*t1847*t2046*t2201*var4[22];
  p_output1[23]=-20.*t1795*t1837*t3058*t3059*var4[2] - 60.*t1795*t1837*t2179*t2903*t2941*var4[6] + 40.*t1795*t1837*t3058*t3059*var4[6] - 60.*t1795*t1837*t2313*t2659*t2730*var4[10] + 120.*t1795*t1837*t2179*t2903*t2941*var4[10] - 20.*t1795*t1837*t3058*t3059*var4[10] - 20.*t1795*t1837*t2046*t2201*var4[14] + 120.*t1795*t1837*t2313*t2659*t2730*var4[14] - 60.*t1795*t1837*t2179*t2903*t2941*var4[14] + 40.*t1795*t1837*t2046*t2201*var4[18] - 60.*t1795*t1837*t2313*t2659*t2730*var4[18] - 20.*t1795*t1837*t2046*t2201*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t4162;
  p_output1[26]=t4413;
  p_output1[27]=t5071;
  p_output1[28]=t5131;
  p_output1[29]=t5287;
  p_output1[30]=t5315;
  p_output1[31]=20.*t2179*t2903*t3059*var4[2] - 5.*t3058*t3978*var4[2] + 60.*t2313*t2659*t2941*var4[6] - 60.*t2179*t2903*t3059*var4[6] + 5.*t3058*t3978*var4[6] + 60.*t2046*t2201*t2730*var4[10] - 150.*t2313*t2659*t2941*var4[10] + 40.*t2179*t2903*t3059*var4[10] - 140.*t2046*t2201*t2730*var4[14] + 90.*t2313*t2659*t2941*var4[14] + 20.*t5145*t5321*var4[14] + 80.*t2046*t2201*t2730*var4[18] - 45.*t5145*t5321*var4[18] + 25.*t5145*t5321*var4[22];
  p_output1[32]=5.*t3058*t3978*var4[2] + 20.*t2674*t3059*t7101*var4[2] + 40.*t2179*t2903*t3059*var4[6] - 20.*t3058*t3059*var4[6] - 5.*t3058*t3978*var4[6] + 60.*t2179*t2941*t3058*t7101*var4[6] - 20.*t2674*t3059*t7101*var4[6] + 90.*t2313*t2659*t2941*var4[10] - 60.*t2179*t2903*t2941*var4[10] - 40.*t2179*t2903*t3059*var4[10] + 20.*t3058*t3059*var4[10] + 60.*t2659*t2730*t2903*t7101*var4[10] - 60.*t2179*t2941*t3058*t7101*var4[10] + 80.*t2046*t2201*t2730*var4[14] - 60.*t2313*t2659*t2730*var4[14] - 90.*t2313*t2659*t2941*var4[14] + 60.*t2179*t2903*t2941*var4[14] + 20.*t2201*t2313*t7101*var4[14] - 60.*t2659*t2730*t2903*t7101*var4[14] - 20.*t2046*t2201*var4[18] - 80.*t2046*t2201*t2730*var4[18] + 60.*t2313*t2659*t2730*var4[18] + 25.*t5145*t5321*var4[18] - 20.*t2201*t2313*t7101*var4[18] + 20.*t2046*t2201*var4[22] - 25.*t5145*t5321*var4[22];
  p_output1[33]=-20.*t1847*t3058*t3059*var4[3] - 60.*t1847*t2179*t2903*t2941*var4[7] + 40.*t1847*t3058*t3059*var4[7] - 60.*t1847*t2313*t2659*t2730*var4[11] + 120.*t1847*t2179*t2903*t2941*var4[11] - 20.*t1847*t3058*t3059*var4[11] - 20.*t1847*t2046*t2201*var4[15] + 120.*t1847*t2313*t2659*t2730*var4[15] - 60.*t1847*t2179*t2903*t2941*var4[15] + 40.*t1847*t2046*t2201*var4[19] - 60.*t1847*t2313*t2659*t2730*var4[19] - 20.*t1847*t2046*t2201*var4[23];
  p_output1[34]=-20.*t1795*t1837*t3058*t3059*var4[3] - 60.*t1795*t1837*t2179*t2903*t2941*var4[7] + 40.*t1795*t1837*t3058*t3059*var4[7] - 60.*t1795*t1837*t2313*t2659*t2730*var4[11] + 120.*t1795*t1837*t2179*t2903*t2941*var4[11] - 20.*t1795*t1837*t3058*t3059*var4[11] - 20.*t1795*t1837*t2046*t2201*var4[15] + 120.*t1795*t1837*t2313*t2659*t2730*var4[15] - 60.*t1795*t1837*t2179*t2903*t2941*var4[15] + 40.*t1795*t1837*t2046*t2201*var4[19] - 60.*t1795*t1837*t2313*t2659*t2730*var4[19] - 20.*t1795*t1837*t2046*t2201*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t4162;
  p_output1[37]=t4413;
  p_output1[38]=t5071;
  p_output1[39]=t5131;
  p_output1[40]=t5287;
  p_output1[41]=t5315;
  p_output1[42]=20.*t2179*t2903*t3059*var4[3] - 5.*t3058*t3978*var4[3] + 60.*t2313*t2659*t2941*var4[7] - 60.*t2179*t2903*t3059*var4[7] + 5.*t3058*t3978*var4[7] + 60.*t2046*t2201*t2730*var4[11] - 150.*t2313*t2659*t2941*var4[11] + 40.*t2179*t2903*t3059*var4[11] - 140.*t2046*t2201*t2730*var4[15] + 90.*t2313*t2659*t2941*var4[15] + 20.*t5145*t5321*var4[15] + 80.*t2046*t2201*t2730*var4[19] - 45.*t5145*t5321*var4[19] + 25.*t5145*t5321*var4[23];
  p_output1[43]=5.*t3058*t3978*var4[3] + 20.*t2674*t3059*t7101*var4[3] + 40.*t2179*t2903*t3059*var4[7] - 20.*t3058*t3059*var4[7] - 5.*t3058*t3978*var4[7] + 60.*t2179*t2941*t3058*t7101*var4[7] - 20.*t2674*t3059*t7101*var4[7] + 90.*t2313*t2659*t2941*var4[11] - 60.*t2179*t2903*t2941*var4[11] - 40.*t2179*t2903*t3059*var4[11] + 20.*t3058*t3059*var4[11] + 60.*t2659*t2730*t2903*t7101*var4[11] - 60.*t2179*t2941*t3058*t7101*var4[11] + 80.*t2046*t2201*t2730*var4[15] - 60.*t2313*t2659*t2730*var4[15] - 90.*t2313*t2659*t2941*var4[15] + 60.*t2179*t2903*t2941*var4[15] + 20.*t2201*t2313*t7101*var4[15] - 60.*t2659*t2730*t2903*t7101*var4[15] - 20.*t2046*t2201*var4[19] - 80.*t2046*t2201*t2730*var4[19] + 60.*t2313*t2659*t2730*var4[19] + 25.*t5145*t5321*var4[19] - 20.*t2201*t2313*t7101*var4[19] + 20.*t2046*t2201*var4[23] - 25.*t5145*t5321*var4[23];
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
