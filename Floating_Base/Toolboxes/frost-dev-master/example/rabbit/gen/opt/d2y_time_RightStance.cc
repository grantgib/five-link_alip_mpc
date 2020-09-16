/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 15:03:51 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t374;
  double t1881;
  double t3393;
  double t3394;
  double t3395;
  double t3403;
  double t3404;
  double t3405;
  double t3408;
  double t3409;
  double t3410;
  double t3416;
  double t3417;
  double t3418;
  double t3419;
  double t3420;
  double t3424;
  double t3425;
  double t3429;
  double t3447;
  double t3451;
  double t3460;
  double t3465;
  double t3473;
  t374 = -1.*var6[1];
  t1881 = var6[0] + t374;
  t3393 = Power(t1881,-5);
  t3394 = -1. + var7[0];
  t3395 = -1. + var8[0];
  t3403 = 1/t3395;
  t3404 = -1.*var1[0];
  t3405 = t3404 + var1[1];
  t3408 = t3394*t3403*t3405;
  t3409 = t374 + var1[0] + t3408;
  t3410 = Power(t3409,3);
  t3416 = Power(t1881,-4);
  t3417 = Power(t3409,2);
  t3418 = 1/t1881;
  t3419 = -1.*t3418*t3409;
  t3420 = 1. + t3419;
  t3424 = Power(t1881,-3);
  t3425 = Power(t3420,2);
  t3429 = Power(t1881,-2);
  t3447 = Power(t3420,3);
  t3451 = Power(t3409,4);
  t3460 = Power(t3420,4);
  t3465 = Power(t3409,5);
  t3473 = Power(t3420,5);
  p_output1[0]=var4[2] - 20.*t3429*t3447*var5[0] - 60.*t3409*t3424*t3425*var5[4] + 40.*t3429*t3447*var5[4] - 60.*t3416*t3417*t3420*var5[8] + 120.*t3409*t3424*t3425*var5[8] - 20.*t3429*t3447*var5[8] - 20.*t3393*t3410*var5[12] + 120.*t3416*t3417*t3420*var5[12] - 60.*t3409*t3424*t3425*var5[12] + 40.*t3393*t3410*var5[16] - 60.*t3416*t3417*t3420*var5[16] - 20.*t3393*t3410*var5[20] + (var2[2] - 1.*t3473*var5[0] - 5.*t3409*t3418*t3460*var5[4] - 10.*t3417*t3429*t3447*var5[8] - 10.*t3410*t3424*t3425*var5[12] - 5.*t3416*t3420*t3451*var5[16] - 1.*t3393*t3465*var5[20])*var9[0] + (var3[2] + 5.*t3418*t3460*var5[0] + 20.*t3409*t3429*t3447*var5[4] - 5.*t3418*t3460*var5[4] + 30.*t3417*t3424*t3425*var5[8] - 20.*t3409*t3429*t3447*var5[8] + 20.*t3410*t3416*t3420*var5[12] - 30.*t3417*t3424*t3425*var5[12] - 20.*t3410*t3416*t3420*var5[16] + 5.*t3393*t3451*var5[16] - 5.*t3393*t3451*var5[20])*var9[1];
  p_output1[1]=var4[4] - 20.*t3429*t3447*var5[1] - 60.*t3409*t3424*t3425*var5[5] + 40.*t3429*t3447*var5[5] - 60.*t3416*t3417*t3420*var5[9] + 120.*t3409*t3424*t3425*var5[9] - 20.*t3429*t3447*var5[9] - 20.*t3393*t3410*var5[13] + 120.*t3416*t3417*t3420*var5[13] - 60.*t3409*t3424*t3425*var5[13] + 40.*t3393*t3410*var5[17] - 60.*t3416*t3417*t3420*var5[17] - 20.*t3393*t3410*var5[21] + (var2[4] - 1.*t3473*var5[1] - 5.*t3409*t3418*t3460*var5[5] - 10.*t3417*t3429*t3447*var5[9] - 10.*t3410*t3424*t3425*var5[13] - 5.*t3416*t3420*t3451*var5[17] - 1.*t3393*t3465*var5[21])*var9[0] + (var3[4] + 5.*t3418*t3460*var5[1] + 20.*t3409*t3429*t3447*var5[5] - 5.*t3418*t3460*var5[5] + 30.*t3417*t3424*t3425*var5[9] - 20.*t3409*t3429*t3447*var5[9] + 20.*t3410*t3416*t3420*var5[13] - 30.*t3417*t3424*t3425*var5[13] - 20.*t3410*t3416*t3420*var5[17] + 5.*t3393*t3451*var5[17] - 5.*t3393*t3451*var5[21])*var9[1];
  p_output1[2]=var4[5] - 20.*t3429*t3447*var5[2] - 60.*t3409*t3424*t3425*var5[6] + 40.*t3429*t3447*var5[6] - 60.*t3416*t3417*t3420*var5[10] + 120.*t3409*t3424*t3425*var5[10] - 20.*t3429*t3447*var5[10] - 20.*t3393*t3410*var5[14] + 120.*t3416*t3417*t3420*var5[14] - 60.*t3409*t3424*t3425*var5[14] + 40.*t3393*t3410*var5[18] - 60.*t3416*t3417*t3420*var5[18] - 20.*t3393*t3410*var5[22] + (var2[5] - 1.*t3473*var5[2] - 5.*t3409*t3418*t3460*var5[6] - 10.*t3417*t3429*t3447*var5[10] - 10.*t3410*t3424*t3425*var5[14] - 5.*t3416*t3420*t3451*var5[18] - 1.*t3393*t3465*var5[22])*var9[0] + (var3[5] + 5.*t3418*t3460*var5[2] + 20.*t3409*t3429*t3447*var5[6] - 5.*t3418*t3460*var5[6] + 30.*t3417*t3424*t3425*var5[10] - 20.*t3409*t3429*t3447*var5[10] + 20.*t3410*t3416*t3420*var5[14] - 30.*t3417*t3424*t3425*var5[14] - 20.*t3410*t3416*t3420*var5[18] + 5.*t3393*t3451*var5[18] - 5.*t3393*t3451*var5[22])*var9[1];
  p_output1[3]=var4[6] - 20.*t3429*t3447*var5[3] - 60.*t3409*t3424*t3425*var5[7] + 40.*t3429*t3447*var5[7] - 60.*t3416*t3417*t3420*var5[11] + 120.*t3409*t3424*t3425*var5[11] - 20.*t3429*t3447*var5[11] - 20.*t3393*t3410*var5[15] + 120.*t3416*t3417*t3420*var5[15] - 60.*t3409*t3424*t3425*var5[15] + 40.*t3393*t3410*var5[19] - 60.*t3416*t3417*t3420*var5[19] - 20.*t3393*t3410*var5[23] + (var2[6] - 1.*t3473*var5[3] - 5.*t3409*t3418*t3460*var5[7] - 10.*t3417*t3429*t3447*var5[11] - 10.*t3410*t3424*t3425*var5[15] - 5.*t3416*t3420*t3451*var5[19] - 1.*t3393*t3465*var5[23])*var9[0] + (var3[6] + 5.*t3418*t3460*var5[3] + 20.*t3409*t3429*t3447*var5[7] - 5.*t3418*t3460*var5[7] + 30.*t3417*t3424*t3425*var5[11] - 20.*t3409*t3429*t3447*var5[11] + 20.*t3410*t3416*t3420*var5[15] - 30.*t3417*t3424*t3425*var5[15] - 20.*t3410*t3416*t3420*var5[19] + 5.*t3393*t3451*var5[19] - 5.*t3393*t3451*var5[23])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "d2y_time_RightStance.hh"

namespace RightStance
{

void d2y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
