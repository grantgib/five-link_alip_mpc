/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 15:03:41 GMT-04:00
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
  double t3330;
  double t3274;
  double t3284;
  double t3322;
  double t3326;
  double t3328;
  double t3331;
  double t3332;
  double t3333;
  double t3334;
  double t3339;
  double t3340;
  double t3341;
  double t3344;
  double t3345;
  double t3346;
  double t3347;
  double t3348;
  double t3351;
  double t3352;
  double t3353;
  double t3356;
  double t3357;
  double t3360;
  double t3381;
  double t3383;
  double t3397;
  double t3398;
  double t3375;
  double t3376;
  double t3377;
  double t3378;
  double t3379;
  double t3380;
  double t3382;
  t3330 = -1.*var4[1];
  t3274 = -1. + var5[0];
  t3284 = -1. + var6[0];
  t3322 = 1/t3284;
  t3326 = -1.*t3274*t3322;
  t3328 = 1. + t3326;
  t3331 = var4[0] + t3330;
  t3332 = Power(t3331,-5);
  t3333 = -1.*var1[0];
  t3334 = t3333 + var1[1];
  t3339 = t3274*t3322*t3334;
  t3340 = t3330 + var1[0] + t3339;
  t3341 = Power(t3340,4);
  t3344 = Power(t3331,-4);
  t3345 = Power(t3340,3);
  t3346 = 1/t3331;
  t3347 = -1.*t3346*t3340;
  t3348 = 1. + t3347;
  t3351 = Power(t3331,-3);
  t3352 = Power(t3340,2);
  t3353 = Power(t3348,2);
  t3356 = Power(t3331,-2);
  t3357 = Power(t3348,3);
  t3360 = Power(t3348,4);
  t3381 = Power(t3340,5);
  t3383 = Power(t3331,-6);
  t3397 = -1.*t3356*t3340;
  t3398 = t3346 + t3397;
  t3375 = Power(t3348,5);
  t3376 = -1.*t3375;
  t3377 = -5.*t3346*t3340*t3360;
  t3378 = -10.*t3356*t3352*t3357;
  t3379 = -10.*t3351*t3345*t3353;
  t3380 = -5.*t3344*t3341*t3348;
  t3382 = -1.*t3332*t3381;
  p_output1[0]=5.*t3328*t3346*t3360*var3[0] + 20.*t3328*t3340*t3356*t3357*var3[4] - 5.*t3328*t3346*t3360*var3[4] + 30.*t3328*t3351*t3352*t3353*var3[8] - 20.*t3328*t3340*t3356*t3357*var3[8] + 20.*t3328*t3344*t3345*t3348*var3[12] - 30.*t3328*t3351*t3352*t3353*var3[12] + 5.*t3328*t3332*t3341*var3[16] - 20.*t3328*t3344*t3345*t3348*var3[16] - 5.*t3328*t3332*t3341*var3[20];
  p_output1[1]=5.*t3274*t3322*t3346*t3360*var3[0] + 20.*t3274*t3322*t3340*t3356*t3357*var3[4] - 5.*t3274*t3322*t3346*t3360*var3[4] + 30.*t3274*t3322*t3351*t3352*t3353*var3[8] - 20.*t3274*t3322*t3340*t3356*t3357*var3[8] + 20.*t3274*t3322*t3344*t3345*t3348*var3[12] - 30.*t3274*t3322*t3351*t3352*t3353*var3[12] + 5.*t3274*t3322*t3332*t3341*var3[16] - 20.*t3274*t3322*t3344*t3345*t3348*var3[16] - 5.*t3274*t3322*t3332*t3341*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t3376;
  p_output1[4]=t3377;
  p_output1[5]=t3378;
  p_output1[6]=t3379;
  p_output1[7]=t3380;
  p_output1[8]=t3382;
  p_output1[9]=-5.*t3340*t3356*t3360*var3[0] - 20.*t3351*t3352*t3357*var3[4] + 5.*t3340*t3356*t3360*var3[4] - 30.*t3344*t3345*t3353*var3[8] + 20.*t3351*t3352*t3357*var3[8] - 20.*t3332*t3341*t3348*var3[12] + 30.*t3344*t3345*t3353*var3[12] + 20.*t3332*t3341*t3348*var3[16] - 5.*t3381*t3383*var3[16] + 5.*t3381*t3383*var3[20];
  p_output1[10]=-5.*t3360*t3398*var3[0] + 5.*t3346*t3360*var3[4] - 5.*t3340*t3356*t3360*var3[4] - 20.*t3340*t3346*t3357*t3398*var3[4] - 20.*t3351*t3352*t3357*var3[8] + 20.*t3340*t3356*t3357*var3[8] - 30.*t3352*t3353*t3356*t3398*var3[8] - 30.*t3344*t3345*t3353*var3[12] + 30.*t3351*t3352*t3353*var3[12] - 20.*t3345*t3348*t3351*t3398*var3[12] - 20.*t3332*t3341*t3348*var3[16] + 20.*t3344*t3345*t3348*var3[16] - 5.*t3341*t3344*t3398*var3[16] + 5.*t3332*t3341*var3[20] - 5.*t3381*t3383*var3[20];
  p_output1[11]=5.*t3328*t3346*t3360*var3[1] + 20.*t3328*t3340*t3356*t3357*var3[5] - 5.*t3328*t3346*t3360*var3[5] + 30.*t3328*t3351*t3352*t3353*var3[9] - 20.*t3328*t3340*t3356*t3357*var3[9] + 20.*t3328*t3344*t3345*t3348*var3[13] - 30.*t3328*t3351*t3352*t3353*var3[13] + 5.*t3328*t3332*t3341*var3[17] - 20.*t3328*t3344*t3345*t3348*var3[17] - 5.*t3328*t3332*t3341*var3[21];
  p_output1[12]=5.*t3274*t3322*t3346*t3360*var3[1] + 20.*t3274*t3322*t3340*t3356*t3357*var3[5] - 5.*t3274*t3322*t3346*t3360*var3[5] + 30.*t3274*t3322*t3351*t3352*t3353*var3[9] - 20.*t3274*t3322*t3340*t3356*t3357*var3[9] + 20.*t3274*t3322*t3344*t3345*t3348*var3[13] - 30.*t3274*t3322*t3351*t3352*t3353*var3[13] + 5.*t3274*t3322*t3332*t3341*var3[17] - 20.*t3274*t3322*t3344*t3345*t3348*var3[17] - 5.*t3274*t3322*t3332*t3341*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t3376;
  p_output1[15]=t3377;
  p_output1[16]=t3378;
  p_output1[17]=t3379;
  p_output1[18]=t3380;
  p_output1[19]=t3382;
  p_output1[20]=-5.*t3340*t3356*t3360*var3[1] - 20.*t3351*t3352*t3357*var3[5] + 5.*t3340*t3356*t3360*var3[5] - 30.*t3344*t3345*t3353*var3[9] + 20.*t3351*t3352*t3357*var3[9] - 20.*t3332*t3341*t3348*var3[13] + 30.*t3344*t3345*t3353*var3[13] + 20.*t3332*t3341*t3348*var3[17] - 5.*t3381*t3383*var3[17] + 5.*t3381*t3383*var3[21];
  p_output1[21]=-5.*t3360*t3398*var3[1] + 5.*t3346*t3360*var3[5] - 5.*t3340*t3356*t3360*var3[5] - 20.*t3340*t3346*t3357*t3398*var3[5] - 20.*t3351*t3352*t3357*var3[9] + 20.*t3340*t3356*t3357*var3[9] - 30.*t3352*t3353*t3356*t3398*var3[9] - 30.*t3344*t3345*t3353*var3[13] + 30.*t3351*t3352*t3353*var3[13] - 20.*t3345*t3348*t3351*t3398*var3[13] - 20.*t3332*t3341*t3348*var3[17] + 20.*t3344*t3345*t3348*var3[17] - 5.*t3341*t3344*t3398*var3[17] + 5.*t3332*t3341*var3[21] - 5.*t3381*t3383*var3[21];
  p_output1[22]=5.*t3328*t3346*t3360*var3[2] + 20.*t3328*t3340*t3356*t3357*var3[6] - 5.*t3328*t3346*t3360*var3[6] + 30.*t3328*t3351*t3352*t3353*var3[10] - 20.*t3328*t3340*t3356*t3357*var3[10] + 20.*t3328*t3344*t3345*t3348*var3[14] - 30.*t3328*t3351*t3352*t3353*var3[14] + 5.*t3328*t3332*t3341*var3[18] - 20.*t3328*t3344*t3345*t3348*var3[18] - 5.*t3328*t3332*t3341*var3[22];
  p_output1[23]=5.*t3274*t3322*t3346*t3360*var3[2] + 20.*t3274*t3322*t3340*t3356*t3357*var3[6] - 5.*t3274*t3322*t3346*t3360*var3[6] + 30.*t3274*t3322*t3351*t3352*t3353*var3[10] - 20.*t3274*t3322*t3340*t3356*t3357*var3[10] + 20.*t3274*t3322*t3344*t3345*t3348*var3[14] - 30.*t3274*t3322*t3351*t3352*t3353*var3[14] + 5.*t3274*t3322*t3332*t3341*var3[18] - 20.*t3274*t3322*t3344*t3345*t3348*var3[18] - 5.*t3274*t3322*t3332*t3341*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t3376;
  p_output1[26]=t3377;
  p_output1[27]=t3378;
  p_output1[28]=t3379;
  p_output1[29]=t3380;
  p_output1[30]=t3382;
  p_output1[31]=-5.*t3340*t3356*t3360*var3[2] - 20.*t3351*t3352*t3357*var3[6] + 5.*t3340*t3356*t3360*var3[6] - 30.*t3344*t3345*t3353*var3[10] + 20.*t3351*t3352*t3357*var3[10] - 20.*t3332*t3341*t3348*var3[14] + 30.*t3344*t3345*t3353*var3[14] + 20.*t3332*t3341*t3348*var3[18] - 5.*t3381*t3383*var3[18] + 5.*t3381*t3383*var3[22];
  p_output1[32]=-5.*t3360*t3398*var3[2] + 5.*t3346*t3360*var3[6] - 5.*t3340*t3356*t3360*var3[6] - 20.*t3340*t3346*t3357*t3398*var3[6] - 20.*t3351*t3352*t3357*var3[10] + 20.*t3340*t3356*t3357*var3[10] - 30.*t3352*t3353*t3356*t3398*var3[10] - 30.*t3344*t3345*t3353*var3[14] + 30.*t3351*t3352*t3353*var3[14] - 20.*t3345*t3348*t3351*t3398*var3[14] - 20.*t3332*t3341*t3348*var3[18] + 20.*t3344*t3345*t3348*var3[18] - 5.*t3341*t3344*t3398*var3[18] + 5.*t3332*t3341*var3[22] - 5.*t3381*t3383*var3[22];
  p_output1[33]=5.*t3328*t3346*t3360*var3[3] + 20.*t3328*t3340*t3356*t3357*var3[7] - 5.*t3328*t3346*t3360*var3[7] + 30.*t3328*t3351*t3352*t3353*var3[11] - 20.*t3328*t3340*t3356*t3357*var3[11] + 20.*t3328*t3344*t3345*t3348*var3[15] - 30.*t3328*t3351*t3352*t3353*var3[15] + 5.*t3328*t3332*t3341*var3[19] - 20.*t3328*t3344*t3345*t3348*var3[19] - 5.*t3328*t3332*t3341*var3[23];
  p_output1[34]=5.*t3274*t3322*t3346*t3360*var3[3] + 20.*t3274*t3322*t3340*t3356*t3357*var3[7] - 5.*t3274*t3322*t3346*t3360*var3[7] + 30.*t3274*t3322*t3351*t3352*t3353*var3[11] - 20.*t3274*t3322*t3340*t3356*t3357*var3[11] + 20.*t3274*t3322*t3344*t3345*t3348*var3[15] - 30.*t3274*t3322*t3351*t3352*t3353*var3[15] + 5.*t3274*t3322*t3332*t3341*var3[19] - 20.*t3274*t3322*t3344*t3345*t3348*var3[19] - 5.*t3274*t3322*t3332*t3341*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t3376;
  p_output1[37]=t3377;
  p_output1[38]=t3378;
  p_output1[39]=t3379;
  p_output1[40]=t3380;
  p_output1[41]=t3382;
  p_output1[42]=-5.*t3340*t3356*t3360*var3[3] - 20.*t3351*t3352*t3357*var3[7] + 5.*t3340*t3356*t3360*var3[7] - 30.*t3344*t3345*t3353*var3[11] + 20.*t3351*t3352*t3357*var3[11] - 20.*t3332*t3341*t3348*var3[15] + 30.*t3344*t3345*t3353*var3[15] + 20.*t3332*t3341*t3348*var3[19] - 5.*t3381*t3383*var3[19] + 5.*t3381*t3383*var3[23];
  p_output1[43]=-5.*t3360*t3398*var3[3] + 5.*t3346*t3360*var3[7] - 5.*t3340*t3356*t3360*var3[7] - 20.*t3340*t3346*t3357*t3398*var3[7] - 20.*t3351*t3352*t3357*var3[11] + 20.*t3340*t3356*t3357*var3[11] - 30.*t3352*t3353*t3356*t3398*var3[11] - 30.*t3344*t3345*t3353*var3[15] + 30.*t3351*t3352*t3353*var3[15] - 20.*t3345*t3348*t3351*t3398*var3[15] - 20.*t3332*t3341*t3348*var3[19] + 20.*t3344*t3345*t3348*var3[19] - 5.*t3341*t3344*t3398*var3[19] + 5.*t3332*t3341*var3[23] - 5.*t3381*t3383*var3[23];
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
