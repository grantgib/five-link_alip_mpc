/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:19:44 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t3411;
  double t3408;
  double t3409;
  double t3412;
  double t3398;
  double t3410;
  double t3420;
  double t3421;
  double t3423;
  double t3424;
  double t3425;
  double t3447;
  double t3404;
  double t3405;
  double t3454;
  double t3455;
  double t3456;
  double t3453;
  double t3457;
  double t3458;
  double t3459;
  double t3460;
  double t3461;
  double t3462;
  double t3467;
  double t3468;
  double t3469;
  double t3470;
  double t3471;
  double t3472;
  double t3475;
  double t3476;
  double t3477;
  double t3478;
  double t3479;
  double t3480;
  double t3481;
  double t3494;
  double t3495;
  double t3496;
  double t3493;
  double t3497;
  double t3498;
  double t3499;
  double t3500;
  double t3501;
  double t3492;
  double t3502;
  double t3503;
  double t3504;
  double t3514;
  double t3516;
  double t3521;
  double t3522;
  double t3523;
  double t3524;
  double t3525;
  double t3531;
  double t3532;
  double t3533;
  double t3534;
  double t3535;
  double t3536;
  double t3530;
  double t3537;
  double t3538;
  double t3539;
  t3411 = Cos(var1[2]);
  t3408 = Cos(var1[3]);
  t3409 = Sin(var1[2]);
  t3412 = Sin(var1[3]);
  t3398 = Cos(var1[4]);
  t3410 = t3408*t3409;
  t3420 = t3411*t3412;
  t3421 = t3410 + t3420;
  t3423 = t3411*t3408;
  t3424 = -1.*t3409*t3412;
  t3425 = t3423 + t3424;
  t3447 = Sin(var1[4]);
  t3404 = -1.*t3398;
  t3405 = 1. + t3404;
  t3454 = -1.*t3408*t3409;
  t3455 = -1.*t3411*t3412;
  t3456 = t3454 + t3455;
  t3453 = 0.4*t3405*t3425;
  t3457 = -0.4*t3456*t3447;
  t3458 = t3398*t3425;
  t3459 = t3456*t3447;
  t3460 = t3458 + t3459;
  t3461 = 0.8*t3460;
  t3462 = t3453 + t3457 + t3461;
  t3467 = -0.4*t3398*t3425;
  t3468 = 0.4*t3421*t3447;
  t3469 = -1.*t3421*t3447;
  t3470 = t3458 + t3469;
  t3471 = 0.8*t3470;
  t3472 = t3467 + t3468 + t3471;
  t3475 = -0.4*t3398*t3456;
  t3476 = 0.4*t3425*t3447;
  t3477 = t3398*t3456;
  t3478 = -1.*t3425*t3447;
  t3479 = t3477 + t3478;
  t3480 = 0.8*t3479;
  t3481 = t3475 + t3476 + t3480;
  t3494 = -1.*t3411*t3408;
  t3495 = t3409*t3412;
  t3496 = t3494 + t3495;
  t3493 = 0.4*t3405*t3456;
  t3497 = -0.4*t3496*t3447;
  t3498 = t3496*t3447;
  t3499 = t3477 + t3498;
  t3500 = 0.8*t3499;
  t3501 = t3493 + t3497 + t3500;
  t3492 = var2[4]*t3481;
  t3502 = var2[2]*t3501;
  t3503 = var2[3]*t3501;
  t3504 = t3492 + t3502 + t3503;
  t3514 = 0.4*t3456*t3447;
  t3516 = -1.*t3456*t3447;
  t3521 = -0.4*t3398*t3496;
  t3522 = t3398*t3496;
  t3523 = t3522 + t3516;
  t3524 = 0.8*t3523;
  t3525 = t3521 + t3514 + t3524;
  t3531 = 0.4*t3405*t3496;
  t3532 = -0.4*t3421*t3447;
  t3533 = t3421*t3447;
  t3534 = t3522 + t3533;
  t3535 = 0.8*t3534;
  t3536 = t3531 + t3532 + t3535;
  t3530 = var2[4]*t3525;
  t3537 = var2[2]*t3536;
  t3538 = var2[3]*t3536;
  t3539 = t3530 + t3537 + t3538;
  p_output1[0]=0.4*t3405*t3421 - 0.4*t3425*t3447 + 0.8*(t3398*t3421 + t3425*t3447) + var1[0] + var2[0] + t3462*var2[2] + t3504*var2[2] + t3462*var2[3] + t3504*var2[3] + t3472*var2[4] + var2[4]*(t3481*var2[2] + t3481*var2[3] + (0.4*t3398*t3421 + t3476 + 0.8*(-1.*t3398*t3421 + t3478))*var2[4]) + var3[0] + t3462*var3[2] + t3462*var3[3] + t3472*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t3453 + t3457 + t3461 + t3492 + t3502 + t3503 + var1[1] + var2[1] + t3539*var2[2] + t3539*var2[3] + var2[4]*(t3525*var2[2] + t3525*var2[3] + (0.4*t3398*t3425 + t3514 + 0.8*(-1.*t3398*t3425 + t3516))*var2[4]) + var3[1] + t3501*var3[2] + t3501*var3[3] + t3481*var3[4] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightToe_RightStance.hh"

namespace RightStance
{

void ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
