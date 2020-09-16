/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 15:03:47 GMT-04:00
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
  double t3373;
  double t3359;
  double t3361;
  double t3367;
  double t3368;
  double t3372;
  double t3385;
  double t3386;
  double t3388;
  double t3389;
  double t3390;
  double t3391;
  double t3392;
  double t3396;
  double t3399;
  double t3400;
  double t3401;
  double t3402;
  double t3406;
  double t3407;
  double t3411;
  double t3412;
  double t3430;
  double t3441;
  double t3446;
  double t3466;
  double t3467;
  double t3431;
  double t3432;
  double t3433;
  double t3434;
  double t3435;
  double t3436;
  double t3437;
  double t3438;
  double t3439;
  double t3440;
  double t3442;
  double t3443;
  double t3444;
  double t3445;
  t3373 = -1.*var5[1];
  t3359 = -1. + var6[0];
  t3361 = -1. + var7[0];
  t3367 = 1/t3361;
  t3368 = -1.*t3359*t3367;
  t3372 = 1. + t3368;
  t3385 = var5[0] + t3373;
  t3386 = Power(t3385,-5);
  t3388 = -1.*var1[0];
  t3389 = t3388 + var1[1];
  t3390 = t3359*t3367*t3389;
  t3391 = t3373 + var1[0] + t3390;
  t3392 = Power(t3391,3);
  t3396 = Power(t3385,-4);
  t3399 = Power(t3391,2);
  t3400 = 1/t3385;
  t3401 = -1.*t3400*t3391;
  t3402 = 1. + t3401;
  t3406 = Power(t3385,-3);
  t3407 = Power(t3402,2);
  t3411 = Power(t3385,-2);
  t3412 = Power(t3402,3);
  t3430 = Power(t3402,4);
  t3441 = Power(t3391,4);
  t3446 = Power(t3385,-6);
  t3466 = -1.*t3411*t3391;
  t3467 = t3400 + t3466;
  t3431 = 5.*t3400*t3430;
  t3432 = 20.*t3411*t3391*t3412;
  t3433 = -5.*t3400*t3430;
  t3434 = t3432 + t3433;
  t3435 = 30.*t3406*t3399*t3407;
  t3436 = -20.*t3411*t3391*t3412;
  t3437 = t3435 + t3436;
  t3438 = 20.*t3396*t3392*t3402;
  t3439 = -30.*t3406*t3399*t3407;
  t3440 = t3438 + t3439;
  t3442 = 5.*t3386*t3441;
  t3443 = -20.*t3396*t3392*t3402;
  t3444 = t3442 + t3443;
  t3445 = -5.*t3386*t3441;
  p_output1[0]=-20.*t3372*t3411*t3412*var4[0] - 60.*t3372*t3391*t3406*t3407*var4[4] + 40.*t3372*t3411*t3412*var4[4] - 60.*t3372*t3396*t3399*t3402*var4[8] + 120.*t3372*t3391*t3406*t3407*var4[8] - 20.*t3372*t3411*t3412*var4[8] - 20.*t3372*t3386*t3392*var4[12] + 120.*t3372*t3396*t3399*t3402*var4[12] - 60.*t3372*t3391*t3406*t3407*var4[12] + 40.*t3372*t3386*t3392*var4[16] - 60.*t3372*t3396*t3399*t3402*var4[16] - 20.*t3372*t3386*t3392*var4[20];
  p_output1[1]=-20.*t3359*t3367*t3411*t3412*var4[0] - 60.*t3359*t3367*t3391*t3406*t3407*var4[4] + 40.*t3359*t3367*t3411*t3412*var4[4] - 60.*t3359*t3367*t3396*t3399*t3402*var4[8] + 120.*t3359*t3367*t3391*t3406*t3407*var4[8] - 20.*t3359*t3367*t3411*t3412*var4[8] - 20.*t3359*t3367*t3386*t3392*var4[12] + 120.*t3359*t3367*t3396*t3399*t3402*var4[12] - 60.*t3359*t3367*t3391*t3406*t3407*var4[12] + 40.*t3359*t3367*t3386*t3392*var4[16] - 60.*t3359*t3367*t3396*t3399*t3402*var4[16] - 20.*t3359*t3367*t3386*t3392*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t3431;
  p_output1[4]=t3434;
  p_output1[5]=t3437;
  p_output1[6]=t3440;
  p_output1[7]=t3444;
  p_output1[8]=t3445;
  p_output1[9]=20.*t3391*t3406*t3412*var4[0] - 5.*t3411*t3430*var4[0] + 60.*t3396*t3399*t3407*var4[4] - 60.*t3391*t3406*t3412*var4[4] + 5.*t3411*t3430*var4[4] + 60.*t3386*t3392*t3402*var4[8] - 150.*t3396*t3399*t3407*var4[8] + 40.*t3391*t3406*t3412*var4[8] - 140.*t3386*t3392*t3402*var4[12] + 90.*t3396*t3399*t3407*var4[12] + 20.*t3441*t3446*var4[12] + 80.*t3386*t3392*t3402*var4[16] - 45.*t3441*t3446*var4[16] + 25.*t3441*t3446*var4[20];
  p_output1[10]=5.*t3411*t3430*var4[0] + 20.*t3400*t3412*t3467*var4[0] + 40.*t3391*t3406*t3412*var4[4] - 20.*t3411*t3412*var4[4] - 5.*t3411*t3430*var4[4] + 60.*t3391*t3407*t3411*t3467*var4[4] - 20.*t3400*t3412*t3467*var4[4] + 90.*t3396*t3399*t3407*var4[8] - 60.*t3391*t3406*t3407*var4[8] - 40.*t3391*t3406*t3412*var4[8] + 20.*t3411*t3412*var4[8] + 60.*t3399*t3402*t3406*t3467*var4[8] - 60.*t3391*t3407*t3411*t3467*var4[8] + 80.*t3386*t3392*t3402*var4[12] - 60.*t3396*t3399*t3402*var4[12] - 90.*t3396*t3399*t3407*var4[12] + 60.*t3391*t3406*t3407*var4[12] + 20.*t3392*t3396*t3467*var4[12] - 60.*t3399*t3402*t3406*t3467*var4[12] - 20.*t3386*t3392*var4[16] - 80.*t3386*t3392*t3402*var4[16] + 60.*t3396*t3399*t3402*var4[16] + 25.*t3441*t3446*var4[16] - 20.*t3392*t3396*t3467*var4[16] + 20.*t3386*t3392*var4[20] - 25.*t3441*t3446*var4[20];
  p_output1[11]=-20.*t3372*t3411*t3412*var4[1] - 60.*t3372*t3391*t3406*t3407*var4[5] + 40.*t3372*t3411*t3412*var4[5] - 60.*t3372*t3396*t3399*t3402*var4[9] + 120.*t3372*t3391*t3406*t3407*var4[9] - 20.*t3372*t3411*t3412*var4[9] - 20.*t3372*t3386*t3392*var4[13] + 120.*t3372*t3396*t3399*t3402*var4[13] - 60.*t3372*t3391*t3406*t3407*var4[13] + 40.*t3372*t3386*t3392*var4[17] - 60.*t3372*t3396*t3399*t3402*var4[17] - 20.*t3372*t3386*t3392*var4[21];
  p_output1[12]=-20.*t3359*t3367*t3411*t3412*var4[1] - 60.*t3359*t3367*t3391*t3406*t3407*var4[5] + 40.*t3359*t3367*t3411*t3412*var4[5] - 60.*t3359*t3367*t3396*t3399*t3402*var4[9] + 120.*t3359*t3367*t3391*t3406*t3407*var4[9] - 20.*t3359*t3367*t3411*t3412*var4[9] - 20.*t3359*t3367*t3386*t3392*var4[13] + 120.*t3359*t3367*t3396*t3399*t3402*var4[13] - 60.*t3359*t3367*t3391*t3406*t3407*var4[13] + 40.*t3359*t3367*t3386*t3392*var4[17] - 60.*t3359*t3367*t3396*t3399*t3402*var4[17] - 20.*t3359*t3367*t3386*t3392*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t3431;
  p_output1[15]=t3434;
  p_output1[16]=t3437;
  p_output1[17]=t3440;
  p_output1[18]=t3444;
  p_output1[19]=t3445;
  p_output1[20]=20.*t3391*t3406*t3412*var4[1] - 5.*t3411*t3430*var4[1] + 60.*t3396*t3399*t3407*var4[5] - 60.*t3391*t3406*t3412*var4[5] + 5.*t3411*t3430*var4[5] + 60.*t3386*t3392*t3402*var4[9] - 150.*t3396*t3399*t3407*var4[9] + 40.*t3391*t3406*t3412*var4[9] - 140.*t3386*t3392*t3402*var4[13] + 90.*t3396*t3399*t3407*var4[13] + 20.*t3441*t3446*var4[13] + 80.*t3386*t3392*t3402*var4[17] - 45.*t3441*t3446*var4[17] + 25.*t3441*t3446*var4[21];
  p_output1[21]=5.*t3411*t3430*var4[1] + 20.*t3400*t3412*t3467*var4[1] + 40.*t3391*t3406*t3412*var4[5] - 20.*t3411*t3412*var4[5] - 5.*t3411*t3430*var4[5] + 60.*t3391*t3407*t3411*t3467*var4[5] - 20.*t3400*t3412*t3467*var4[5] + 90.*t3396*t3399*t3407*var4[9] - 60.*t3391*t3406*t3407*var4[9] - 40.*t3391*t3406*t3412*var4[9] + 20.*t3411*t3412*var4[9] + 60.*t3399*t3402*t3406*t3467*var4[9] - 60.*t3391*t3407*t3411*t3467*var4[9] + 80.*t3386*t3392*t3402*var4[13] - 60.*t3396*t3399*t3402*var4[13] - 90.*t3396*t3399*t3407*var4[13] + 60.*t3391*t3406*t3407*var4[13] + 20.*t3392*t3396*t3467*var4[13] - 60.*t3399*t3402*t3406*t3467*var4[13] - 20.*t3386*t3392*var4[17] - 80.*t3386*t3392*t3402*var4[17] + 60.*t3396*t3399*t3402*var4[17] + 25.*t3441*t3446*var4[17] - 20.*t3392*t3396*t3467*var4[17] + 20.*t3386*t3392*var4[21] - 25.*t3441*t3446*var4[21];
  p_output1[22]=-20.*t3372*t3411*t3412*var4[2] - 60.*t3372*t3391*t3406*t3407*var4[6] + 40.*t3372*t3411*t3412*var4[6] - 60.*t3372*t3396*t3399*t3402*var4[10] + 120.*t3372*t3391*t3406*t3407*var4[10] - 20.*t3372*t3411*t3412*var4[10] - 20.*t3372*t3386*t3392*var4[14] + 120.*t3372*t3396*t3399*t3402*var4[14] - 60.*t3372*t3391*t3406*t3407*var4[14] + 40.*t3372*t3386*t3392*var4[18] - 60.*t3372*t3396*t3399*t3402*var4[18] - 20.*t3372*t3386*t3392*var4[22];
  p_output1[23]=-20.*t3359*t3367*t3411*t3412*var4[2] - 60.*t3359*t3367*t3391*t3406*t3407*var4[6] + 40.*t3359*t3367*t3411*t3412*var4[6] - 60.*t3359*t3367*t3396*t3399*t3402*var4[10] + 120.*t3359*t3367*t3391*t3406*t3407*var4[10] - 20.*t3359*t3367*t3411*t3412*var4[10] - 20.*t3359*t3367*t3386*t3392*var4[14] + 120.*t3359*t3367*t3396*t3399*t3402*var4[14] - 60.*t3359*t3367*t3391*t3406*t3407*var4[14] + 40.*t3359*t3367*t3386*t3392*var4[18] - 60.*t3359*t3367*t3396*t3399*t3402*var4[18] - 20.*t3359*t3367*t3386*t3392*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t3431;
  p_output1[26]=t3434;
  p_output1[27]=t3437;
  p_output1[28]=t3440;
  p_output1[29]=t3444;
  p_output1[30]=t3445;
  p_output1[31]=20.*t3391*t3406*t3412*var4[2] - 5.*t3411*t3430*var4[2] + 60.*t3396*t3399*t3407*var4[6] - 60.*t3391*t3406*t3412*var4[6] + 5.*t3411*t3430*var4[6] + 60.*t3386*t3392*t3402*var4[10] - 150.*t3396*t3399*t3407*var4[10] + 40.*t3391*t3406*t3412*var4[10] - 140.*t3386*t3392*t3402*var4[14] + 90.*t3396*t3399*t3407*var4[14] + 20.*t3441*t3446*var4[14] + 80.*t3386*t3392*t3402*var4[18] - 45.*t3441*t3446*var4[18] + 25.*t3441*t3446*var4[22];
  p_output1[32]=5.*t3411*t3430*var4[2] + 20.*t3400*t3412*t3467*var4[2] + 40.*t3391*t3406*t3412*var4[6] - 20.*t3411*t3412*var4[6] - 5.*t3411*t3430*var4[6] + 60.*t3391*t3407*t3411*t3467*var4[6] - 20.*t3400*t3412*t3467*var4[6] + 90.*t3396*t3399*t3407*var4[10] - 60.*t3391*t3406*t3407*var4[10] - 40.*t3391*t3406*t3412*var4[10] + 20.*t3411*t3412*var4[10] + 60.*t3399*t3402*t3406*t3467*var4[10] - 60.*t3391*t3407*t3411*t3467*var4[10] + 80.*t3386*t3392*t3402*var4[14] - 60.*t3396*t3399*t3402*var4[14] - 90.*t3396*t3399*t3407*var4[14] + 60.*t3391*t3406*t3407*var4[14] + 20.*t3392*t3396*t3467*var4[14] - 60.*t3399*t3402*t3406*t3467*var4[14] - 20.*t3386*t3392*var4[18] - 80.*t3386*t3392*t3402*var4[18] + 60.*t3396*t3399*t3402*var4[18] + 25.*t3441*t3446*var4[18] - 20.*t3392*t3396*t3467*var4[18] + 20.*t3386*t3392*var4[22] - 25.*t3441*t3446*var4[22];
  p_output1[33]=-20.*t3372*t3411*t3412*var4[3] - 60.*t3372*t3391*t3406*t3407*var4[7] + 40.*t3372*t3411*t3412*var4[7] - 60.*t3372*t3396*t3399*t3402*var4[11] + 120.*t3372*t3391*t3406*t3407*var4[11] - 20.*t3372*t3411*t3412*var4[11] - 20.*t3372*t3386*t3392*var4[15] + 120.*t3372*t3396*t3399*t3402*var4[15] - 60.*t3372*t3391*t3406*t3407*var4[15] + 40.*t3372*t3386*t3392*var4[19] - 60.*t3372*t3396*t3399*t3402*var4[19] - 20.*t3372*t3386*t3392*var4[23];
  p_output1[34]=-20.*t3359*t3367*t3411*t3412*var4[3] - 60.*t3359*t3367*t3391*t3406*t3407*var4[7] + 40.*t3359*t3367*t3411*t3412*var4[7] - 60.*t3359*t3367*t3396*t3399*t3402*var4[11] + 120.*t3359*t3367*t3391*t3406*t3407*var4[11] - 20.*t3359*t3367*t3411*t3412*var4[11] - 20.*t3359*t3367*t3386*t3392*var4[15] + 120.*t3359*t3367*t3396*t3399*t3402*var4[15] - 60.*t3359*t3367*t3391*t3406*t3407*var4[15] + 40.*t3359*t3367*t3386*t3392*var4[19] - 60.*t3359*t3367*t3396*t3399*t3402*var4[19] - 20.*t3359*t3367*t3386*t3392*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t3431;
  p_output1[37]=t3434;
  p_output1[38]=t3437;
  p_output1[39]=t3440;
  p_output1[40]=t3444;
  p_output1[41]=t3445;
  p_output1[42]=20.*t3391*t3406*t3412*var4[3] - 5.*t3411*t3430*var4[3] + 60.*t3396*t3399*t3407*var4[7] - 60.*t3391*t3406*t3412*var4[7] + 5.*t3411*t3430*var4[7] + 60.*t3386*t3392*t3402*var4[11] - 150.*t3396*t3399*t3407*var4[11] + 40.*t3391*t3406*t3412*var4[11] - 140.*t3386*t3392*t3402*var4[15] + 90.*t3396*t3399*t3407*var4[15] + 20.*t3441*t3446*var4[15] + 80.*t3386*t3392*t3402*var4[19] - 45.*t3441*t3446*var4[19] + 25.*t3441*t3446*var4[23];
  p_output1[43]=5.*t3411*t3430*var4[3] + 20.*t3400*t3412*t3467*var4[3] + 40.*t3391*t3406*t3412*var4[7] - 20.*t3411*t3412*var4[7] - 5.*t3411*t3430*var4[7] + 60.*t3391*t3407*t3411*t3467*var4[7] - 20.*t3400*t3412*t3467*var4[7] + 90.*t3396*t3399*t3407*var4[11] - 60.*t3391*t3406*t3407*var4[11] - 40.*t3391*t3406*t3412*var4[11] + 20.*t3411*t3412*var4[11] + 60.*t3399*t3402*t3406*t3467*var4[11] - 60.*t3391*t3407*t3411*t3467*var4[11] + 80.*t3386*t3392*t3402*var4[15] - 60.*t3396*t3399*t3402*var4[15] - 90.*t3396*t3399*t3407*var4[15] + 60.*t3391*t3406*t3407*var4[15] + 20.*t3392*t3396*t3467*var4[15] - 60.*t3399*t3402*t3406*t3467*var4[15] - 20.*t3386*t3392*var4[19] - 80.*t3386*t3392*t3402*var4[19] + 60.*t3396*t3399*t3402*var4[19] + 25.*t3441*t3446*var4[19] - 20.*t3392*t3396*t3467*var4[19] + 20.*t3386*t3392*var4[23] - 25.*t3441*t3446*var4[23];
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
