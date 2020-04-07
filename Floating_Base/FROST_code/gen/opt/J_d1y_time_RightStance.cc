/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:03:13 GMT-04:00
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
  double t2532;
  double t1133;
  double t1149;
  double t1291;
  double t2241;
  double t2305;
  double t2533;
  double t3149;
  double t3155;
  double t3165;
  double t3179;
  double t3180;
  double t3185;
  double t3190;
  double t3191;
  double t3208;
  double t3209;
  double t3210;
  double t3218;
  double t3219;
  double t3282;
  double t3283;
  double t4813;
  double t6705;
  double t6712;
  double t6736;
  double t6737;
  double t6628;
  double t6634;
  double t6645;
  double t6649;
  double t6661;
  double t6666;
  double t6667;
  double t6668;
  double t6669;
  double t6671;
  double t6706;
  double t6707;
  double t6710;
  double t6711;
  t2532 = -1.*var5[1];
  t1133 = -1. + var6[0];
  t1149 = -1. + var7[0];
  t1291 = 1/t1149;
  t2241 = -1.*t1133*t1291;
  t2305 = 1. + t2241;
  t2533 = var5[0] + t2532;
  t3149 = Power(t2533,-5);
  t3155 = -1.*var1[0];
  t3165 = t3155 + var1[1];
  t3179 = t1133*t1291*t3165;
  t3180 = t2532 + var1[0] + t3179;
  t3185 = Power(t3180,3);
  t3190 = Power(t2533,-4);
  t3191 = Power(t3180,2);
  t3208 = 1/t2533;
  t3209 = -1.*t3208*t3180;
  t3210 = 1. + t3209;
  t3218 = Power(t2533,-3);
  t3219 = Power(t3210,2);
  t3282 = Power(t2533,-2);
  t3283 = Power(t3210,3);
  t4813 = Power(t3210,4);
  t6705 = Power(t3180,4);
  t6712 = Power(t2533,-6);
  t6736 = -1.*t3282*t3180;
  t6737 = t3208 + t6736;
  t6628 = 5.*t3208*t4813;
  t6634 = 20.*t3282*t3180*t3283;
  t6645 = -5.*t3208*t4813;
  t6649 = t6634 + t6645;
  t6661 = 30.*t3218*t3191*t3219;
  t6666 = -20.*t3282*t3180*t3283;
  t6667 = t6661 + t6666;
  t6668 = 20.*t3190*t3185*t3210;
  t6669 = -30.*t3218*t3191*t3219;
  t6671 = t6668 + t6669;
  t6706 = 5.*t3149*t6705;
  t6707 = -20.*t3190*t3185*t3210;
  t6710 = t6706 + t6707;
  t6711 = -5.*t3149*t6705;
  p_output1[0]=-20.*t2305*t3282*t3283*var4[0] - 60.*t2305*t3180*t3218*t3219*var4[4] + 40.*t2305*t3282*t3283*var4[4] - 60.*t2305*t3190*t3191*t3210*var4[8] + 120.*t2305*t3180*t3218*t3219*var4[8] - 20.*t2305*t3282*t3283*var4[8] - 20.*t2305*t3149*t3185*var4[12] + 120.*t2305*t3190*t3191*t3210*var4[12] - 60.*t2305*t3180*t3218*t3219*var4[12] + 40.*t2305*t3149*t3185*var4[16] - 60.*t2305*t3190*t3191*t3210*var4[16] - 20.*t2305*t3149*t3185*var4[20];
  p_output1[1]=-20.*t1133*t1291*t3282*t3283*var4[0] - 60.*t1133*t1291*t3180*t3218*t3219*var4[4] + 40.*t1133*t1291*t3282*t3283*var4[4] - 60.*t1133*t1291*t3190*t3191*t3210*var4[8] + 120.*t1133*t1291*t3180*t3218*t3219*var4[8] - 20.*t1133*t1291*t3282*t3283*var4[8] - 20.*t1133*t1291*t3149*t3185*var4[12] + 120.*t1133*t1291*t3190*t3191*t3210*var4[12] - 60.*t1133*t1291*t3180*t3218*t3219*var4[12] + 40.*t1133*t1291*t3149*t3185*var4[16] - 60.*t1133*t1291*t3190*t3191*t3210*var4[16] - 20.*t1133*t1291*t3149*t3185*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t6628;
  p_output1[4]=t6649;
  p_output1[5]=t6667;
  p_output1[6]=t6671;
  p_output1[7]=t6710;
  p_output1[8]=t6711;
  p_output1[9]=20.*t3180*t3218*t3283*var4[0] - 5.*t3282*t4813*var4[0] + 60.*t3190*t3191*t3219*var4[4] - 60.*t3180*t3218*t3283*var4[4] + 5.*t3282*t4813*var4[4] + 60.*t3149*t3185*t3210*var4[8] - 150.*t3190*t3191*t3219*var4[8] + 40.*t3180*t3218*t3283*var4[8] - 140.*t3149*t3185*t3210*var4[12] + 90.*t3190*t3191*t3219*var4[12] + 20.*t6705*t6712*var4[12] + 80.*t3149*t3185*t3210*var4[16] - 45.*t6705*t6712*var4[16] + 25.*t6705*t6712*var4[20];
  p_output1[10]=5.*t3282*t4813*var4[0] + 20.*t3208*t3283*t6737*var4[0] + 40.*t3180*t3218*t3283*var4[4] - 20.*t3282*t3283*var4[4] - 5.*t3282*t4813*var4[4] + 60.*t3180*t3219*t3282*t6737*var4[4] - 20.*t3208*t3283*t6737*var4[4] + 90.*t3190*t3191*t3219*var4[8] - 60.*t3180*t3218*t3219*var4[8] - 40.*t3180*t3218*t3283*var4[8] + 20.*t3282*t3283*var4[8] + 60.*t3191*t3210*t3218*t6737*var4[8] - 60.*t3180*t3219*t3282*t6737*var4[8] + 80.*t3149*t3185*t3210*var4[12] - 60.*t3190*t3191*t3210*var4[12] - 90.*t3190*t3191*t3219*var4[12] + 60.*t3180*t3218*t3219*var4[12] + 20.*t3185*t3190*t6737*var4[12] - 60.*t3191*t3210*t3218*t6737*var4[12] - 20.*t3149*t3185*var4[16] - 80.*t3149*t3185*t3210*var4[16] + 60.*t3190*t3191*t3210*var4[16] + 25.*t6705*t6712*var4[16] - 20.*t3185*t3190*t6737*var4[16] + 20.*t3149*t3185*var4[20] - 25.*t6705*t6712*var4[20];
  p_output1[11]=-20.*t2305*t3282*t3283*var4[1] - 60.*t2305*t3180*t3218*t3219*var4[5] + 40.*t2305*t3282*t3283*var4[5] - 60.*t2305*t3190*t3191*t3210*var4[9] + 120.*t2305*t3180*t3218*t3219*var4[9] - 20.*t2305*t3282*t3283*var4[9] - 20.*t2305*t3149*t3185*var4[13] + 120.*t2305*t3190*t3191*t3210*var4[13] - 60.*t2305*t3180*t3218*t3219*var4[13] + 40.*t2305*t3149*t3185*var4[17] - 60.*t2305*t3190*t3191*t3210*var4[17] - 20.*t2305*t3149*t3185*var4[21];
  p_output1[12]=-20.*t1133*t1291*t3282*t3283*var4[1] - 60.*t1133*t1291*t3180*t3218*t3219*var4[5] + 40.*t1133*t1291*t3282*t3283*var4[5] - 60.*t1133*t1291*t3190*t3191*t3210*var4[9] + 120.*t1133*t1291*t3180*t3218*t3219*var4[9] - 20.*t1133*t1291*t3282*t3283*var4[9] - 20.*t1133*t1291*t3149*t3185*var4[13] + 120.*t1133*t1291*t3190*t3191*t3210*var4[13] - 60.*t1133*t1291*t3180*t3218*t3219*var4[13] + 40.*t1133*t1291*t3149*t3185*var4[17] - 60.*t1133*t1291*t3190*t3191*t3210*var4[17] - 20.*t1133*t1291*t3149*t3185*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t6628;
  p_output1[15]=t6649;
  p_output1[16]=t6667;
  p_output1[17]=t6671;
  p_output1[18]=t6710;
  p_output1[19]=t6711;
  p_output1[20]=20.*t3180*t3218*t3283*var4[1] - 5.*t3282*t4813*var4[1] + 60.*t3190*t3191*t3219*var4[5] - 60.*t3180*t3218*t3283*var4[5] + 5.*t3282*t4813*var4[5] + 60.*t3149*t3185*t3210*var4[9] - 150.*t3190*t3191*t3219*var4[9] + 40.*t3180*t3218*t3283*var4[9] - 140.*t3149*t3185*t3210*var4[13] + 90.*t3190*t3191*t3219*var4[13] + 20.*t6705*t6712*var4[13] + 80.*t3149*t3185*t3210*var4[17] - 45.*t6705*t6712*var4[17] + 25.*t6705*t6712*var4[21];
  p_output1[21]=5.*t3282*t4813*var4[1] + 20.*t3208*t3283*t6737*var4[1] + 40.*t3180*t3218*t3283*var4[5] - 20.*t3282*t3283*var4[5] - 5.*t3282*t4813*var4[5] + 60.*t3180*t3219*t3282*t6737*var4[5] - 20.*t3208*t3283*t6737*var4[5] + 90.*t3190*t3191*t3219*var4[9] - 60.*t3180*t3218*t3219*var4[9] - 40.*t3180*t3218*t3283*var4[9] + 20.*t3282*t3283*var4[9] + 60.*t3191*t3210*t3218*t6737*var4[9] - 60.*t3180*t3219*t3282*t6737*var4[9] + 80.*t3149*t3185*t3210*var4[13] - 60.*t3190*t3191*t3210*var4[13] - 90.*t3190*t3191*t3219*var4[13] + 60.*t3180*t3218*t3219*var4[13] + 20.*t3185*t3190*t6737*var4[13] - 60.*t3191*t3210*t3218*t6737*var4[13] - 20.*t3149*t3185*var4[17] - 80.*t3149*t3185*t3210*var4[17] + 60.*t3190*t3191*t3210*var4[17] + 25.*t6705*t6712*var4[17] - 20.*t3185*t3190*t6737*var4[17] + 20.*t3149*t3185*var4[21] - 25.*t6705*t6712*var4[21];
  p_output1[22]=-20.*t2305*t3282*t3283*var4[2] - 60.*t2305*t3180*t3218*t3219*var4[6] + 40.*t2305*t3282*t3283*var4[6] - 60.*t2305*t3190*t3191*t3210*var4[10] + 120.*t2305*t3180*t3218*t3219*var4[10] - 20.*t2305*t3282*t3283*var4[10] - 20.*t2305*t3149*t3185*var4[14] + 120.*t2305*t3190*t3191*t3210*var4[14] - 60.*t2305*t3180*t3218*t3219*var4[14] + 40.*t2305*t3149*t3185*var4[18] - 60.*t2305*t3190*t3191*t3210*var4[18] - 20.*t2305*t3149*t3185*var4[22];
  p_output1[23]=-20.*t1133*t1291*t3282*t3283*var4[2] - 60.*t1133*t1291*t3180*t3218*t3219*var4[6] + 40.*t1133*t1291*t3282*t3283*var4[6] - 60.*t1133*t1291*t3190*t3191*t3210*var4[10] + 120.*t1133*t1291*t3180*t3218*t3219*var4[10] - 20.*t1133*t1291*t3282*t3283*var4[10] - 20.*t1133*t1291*t3149*t3185*var4[14] + 120.*t1133*t1291*t3190*t3191*t3210*var4[14] - 60.*t1133*t1291*t3180*t3218*t3219*var4[14] + 40.*t1133*t1291*t3149*t3185*var4[18] - 60.*t1133*t1291*t3190*t3191*t3210*var4[18] - 20.*t1133*t1291*t3149*t3185*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t6628;
  p_output1[26]=t6649;
  p_output1[27]=t6667;
  p_output1[28]=t6671;
  p_output1[29]=t6710;
  p_output1[30]=t6711;
  p_output1[31]=20.*t3180*t3218*t3283*var4[2] - 5.*t3282*t4813*var4[2] + 60.*t3190*t3191*t3219*var4[6] - 60.*t3180*t3218*t3283*var4[6] + 5.*t3282*t4813*var4[6] + 60.*t3149*t3185*t3210*var4[10] - 150.*t3190*t3191*t3219*var4[10] + 40.*t3180*t3218*t3283*var4[10] - 140.*t3149*t3185*t3210*var4[14] + 90.*t3190*t3191*t3219*var4[14] + 20.*t6705*t6712*var4[14] + 80.*t3149*t3185*t3210*var4[18] - 45.*t6705*t6712*var4[18] + 25.*t6705*t6712*var4[22];
  p_output1[32]=5.*t3282*t4813*var4[2] + 20.*t3208*t3283*t6737*var4[2] + 40.*t3180*t3218*t3283*var4[6] - 20.*t3282*t3283*var4[6] - 5.*t3282*t4813*var4[6] + 60.*t3180*t3219*t3282*t6737*var4[6] - 20.*t3208*t3283*t6737*var4[6] + 90.*t3190*t3191*t3219*var4[10] - 60.*t3180*t3218*t3219*var4[10] - 40.*t3180*t3218*t3283*var4[10] + 20.*t3282*t3283*var4[10] + 60.*t3191*t3210*t3218*t6737*var4[10] - 60.*t3180*t3219*t3282*t6737*var4[10] + 80.*t3149*t3185*t3210*var4[14] - 60.*t3190*t3191*t3210*var4[14] - 90.*t3190*t3191*t3219*var4[14] + 60.*t3180*t3218*t3219*var4[14] + 20.*t3185*t3190*t6737*var4[14] - 60.*t3191*t3210*t3218*t6737*var4[14] - 20.*t3149*t3185*var4[18] - 80.*t3149*t3185*t3210*var4[18] + 60.*t3190*t3191*t3210*var4[18] + 25.*t6705*t6712*var4[18] - 20.*t3185*t3190*t6737*var4[18] + 20.*t3149*t3185*var4[22] - 25.*t6705*t6712*var4[22];
  p_output1[33]=-20.*t2305*t3282*t3283*var4[3] - 60.*t2305*t3180*t3218*t3219*var4[7] + 40.*t2305*t3282*t3283*var4[7] - 60.*t2305*t3190*t3191*t3210*var4[11] + 120.*t2305*t3180*t3218*t3219*var4[11] - 20.*t2305*t3282*t3283*var4[11] - 20.*t2305*t3149*t3185*var4[15] + 120.*t2305*t3190*t3191*t3210*var4[15] - 60.*t2305*t3180*t3218*t3219*var4[15] + 40.*t2305*t3149*t3185*var4[19] - 60.*t2305*t3190*t3191*t3210*var4[19] - 20.*t2305*t3149*t3185*var4[23];
  p_output1[34]=-20.*t1133*t1291*t3282*t3283*var4[3] - 60.*t1133*t1291*t3180*t3218*t3219*var4[7] + 40.*t1133*t1291*t3282*t3283*var4[7] - 60.*t1133*t1291*t3190*t3191*t3210*var4[11] + 120.*t1133*t1291*t3180*t3218*t3219*var4[11] - 20.*t1133*t1291*t3282*t3283*var4[11] - 20.*t1133*t1291*t3149*t3185*var4[15] + 120.*t1133*t1291*t3190*t3191*t3210*var4[15] - 60.*t1133*t1291*t3180*t3218*t3219*var4[15] + 40.*t1133*t1291*t3149*t3185*var4[19] - 60.*t1133*t1291*t3190*t3191*t3210*var4[19] - 20.*t1133*t1291*t3149*t3185*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t6628;
  p_output1[37]=t6649;
  p_output1[38]=t6667;
  p_output1[39]=t6671;
  p_output1[40]=t6710;
  p_output1[41]=t6711;
  p_output1[42]=20.*t3180*t3218*t3283*var4[3] - 5.*t3282*t4813*var4[3] + 60.*t3190*t3191*t3219*var4[7] - 60.*t3180*t3218*t3283*var4[7] + 5.*t3282*t4813*var4[7] + 60.*t3149*t3185*t3210*var4[11] - 150.*t3190*t3191*t3219*var4[11] + 40.*t3180*t3218*t3283*var4[11] - 140.*t3149*t3185*t3210*var4[15] + 90.*t3190*t3191*t3219*var4[15] + 20.*t6705*t6712*var4[15] + 80.*t3149*t3185*t3210*var4[19] - 45.*t6705*t6712*var4[19] + 25.*t6705*t6712*var4[23];
  p_output1[43]=5.*t3282*t4813*var4[3] + 20.*t3208*t3283*t6737*var4[3] + 40.*t3180*t3218*t3283*var4[7] - 20.*t3282*t3283*var4[7] - 5.*t3282*t4813*var4[7] + 60.*t3180*t3219*t3282*t6737*var4[7] - 20.*t3208*t3283*t6737*var4[7] + 90.*t3190*t3191*t3219*var4[11] - 60.*t3180*t3218*t3219*var4[11] - 40.*t3180*t3218*t3283*var4[11] + 20.*t3282*t3283*var4[11] + 60.*t3191*t3210*t3218*t6737*var4[11] - 60.*t3180*t3219*t3282*t6737*var4[11] + 80.*t3149*t3185*t3210*var4[15] - 60.*t3190*t3191*t3210*var4[15] - 90.*t3190*t3191*t3219*var4[15] + 60.*t3180*t3218*t3219*var4[15] + 20.*t3185*t3190*t6737*var4[15] - 60.*t3191*t3210*t3218*t6737*var4[15] - 20.*t3149*t3185*var4[19] - 80.*t3149*t3185*t3210*var4[19] + 60.*t3190*t3191*t3210*var4[19] + 25.*t6705*t6712*var4[19] - 20.*t3185*t3190*t6737*var4[19] + 20.*t3149*t3185*var4[23] - 25.*t6705*t6712*var4[23];
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
