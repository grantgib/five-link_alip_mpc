/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:19:41 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t3340;
  double t3334;
  double t3335;
  double t3346;
  double t3333;
  double t3339;
  double t3347;
  double t3348;
  double t3350;
  double t3351;
  double t3352;
  double t3354;
  double t3356;
  double t3386;
  double t3387;
  double t3388;
  double t3383;
  double t3384;
  double t3385;
  double t3389;
  double t3390;
  double t3391;
  double t3392;
  double t3393;
  double t3349;
  double t3355;
  double t3357;
  double t3358;
  double t3380;
  double t3381;
  double t3382;
  double t3394;
  double t3395;
  double t3396;
  double t3399;
  double t3402;
  double t3403;
  double t3413;
  double t3414;
  double t3415;
  double t3416;
  double t3417;
  double t3418;
  double t3419;
  double t3428;
  double t3436;
  double t3437;
  double t3438;
  double t3441;
  double t3442;
  double t3443;
  double t3426;
  double t3427;
  double t3429;
  double t3430;
  double t3431;
  double t3432;
  double t3435;
  double t3444;
  double t3445;
  double t3446;
  t3340 = Cos(var1[2]);
  t3334 = Cos(var1[3]);
  t3335 = Sin(var1[2]);
  t3346 = Sin(var1[3]);
  t3333 = Cos(var1[4]);
  t3339 = -1.*t3334*t3335;
  t3347 = -1.*t3340*t3346;
  t3348 = t3339 + t3347;
  t3350 = t3340*t3334;
  t3351 = -1.*t3335*t3346;
  t3352 = t3350 + t3351;
  t3354 = Sin(var1[4]);
  t3356 = t3333*t3348;
  t3386 = -1.*t3340*t3334;
  t3387 = t3335*t3346;
  t3388 = t3386 + t3387;
  t3383 = -1.*t3333;
  t3384 = 1. + t3383;
  t3385 = 0.4*t3384*t3348;
  t3389 = -0.4*t3388*t3354;
  t3390 = t3388*t3354;
  t3391 = t3356 + t3390;
  t3392 = 0.8*t3391;
  t3393 = t3385 + t3389 + t3392;
  t3349 = -0.4*t3333*t3348;
  t3355 = 0.4*t3352*t3354;
  t3357 = -1.*t3352*t3354;
  t3358 = t3356 + t3357;
  t3380 = 0.8*t3358;
  t3381 = t3349 + t3355 + t3380;
  t3382 = var2[4]*t3381;
  t3394 = var2[2]*t3393;
  t3395 = var2[3]*t3393;
  t3396 = t3382 + t3394 + t3395;
  t3399 = t3334*t3335;
  t3402 = t3340*t3346;
  t3403 = t3399 + t3402;
  t3413 = 0.4*t3384*t3352;
  t3414 = -0.4*t3348*t3354;
  t3415 = t3333*t3352;
  t3416 = t3348*t3354;
  t3417 = t3415 + t3416;
  t3418 = 0.8*t3417;
  t3419 = t3413 + t3414 + t3418;
  t3428 = t3333*t3388;
  t3436 = 0.4*t3384*t3388;
  t3437 = -0.4*t3403*t3354;
  t3438 = t3403*t3354;
  t3441 = t3428 + t3438;
  t3442 = 0.8*t3441;
  t3443 = t3436 + t3437 + t3442;
  t3426 = -0.4*t3333*t3388;
  t3427 = 0.4*t3348*t3354;
  t3429 = -1.*t3348*t3354;
  t3430 = t3428 + t3429;
  t3431 = 0.8*t3430;
  t3432 = t3426 + t3427 + t3431;
  t3435 = var2[4]*t3432;
  t3444 = var2[2]*t3443;
  t3445 = var2[3]*t3443;
  t3446 = t3435 + t3444 + t3445;
  p_output1[0]=t3396;
  p_output1[1]=t3396;
  p_output1[2]=t3381*var2[2] + t3381*var2[3] + (t3355 + 0.4*t3333*t3403 + 0.8*(t3357 - 1.*t3333*t3403))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t3419;
  p_output1[5]=t3419;
  p_output1[6]=-0.4*t3333*t3352 + 0.4*t3354*t3403 + 0.8*(-1.*t3354*t3403 + t3415);
  p_output1[7]=t3446;
  p_output1[8]=t3446;
  p_output1[9]=t3432*var2[2] + t3432*var2[3] + (0.4*t3333*t3352 + t3427 + 0.8*(-1.*t3333*t3352 + t3429))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t3393;
  p_output1[12]=t3393;
  p_output1[13]=t3381;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RightToe_RightStance.hh"

namespace RightStance
{

void J_dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
