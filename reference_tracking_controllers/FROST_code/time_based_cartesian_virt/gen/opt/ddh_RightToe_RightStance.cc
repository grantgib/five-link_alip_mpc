/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:36 GMT-05:00
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
  double t807;
  double t597;
  double t600;
  double t1069;
  double t413;
  double t710;
  double t1272;
  double t1473;
  double t2200;
  double t2237;
  double t2257;
  double t2899;
  double t422;
  double t558;
  double t3234;
  double t3242;
  double t3251;
  double t3230;
  double t3262;
  double t3265;
  double t3272;
  double t3274;
  double t3275;
  double t3284;
  double t3362;
  double t3365;
  double t3371;
  double t3374;
  double t3389;
  double t3400;
  double t3428;
  double t3459;
  double t3463;
  double t3473;
  double t3579;
  double t3615;
  double t3616;
  double t3679;
  double t3681;
  double t3688;
  double t3676;
  double t3691;
  double t3695;
  double t3696;
  double t3697;
  double t3700;
  double t3671;
  double t3716;
  double t3717;
  double t3725;
  double t3921;
  double t3939;
  double t3996;
  double t4007;
  double t4015;
  double t4023;
  double t4106;
  double t4185;
  double t4186;
  double t4190;
  double t4191;
  double t4195;
  double t4200;
  double t4179;
  double t4213;
  double t4215;
  double t4223;
  t807 = Cos(var1[2]);
  t597 = Cos(var1[3]);
  t600 = Sin(var1[2]);
  t1069 = Sin(var1[3]);
  t413 = Cos(var1[4]);
  t710 = t597*t600;
  t1272 = t807*t1069;
  t1473 = t710 + t1272;
  t2200 = t807*t597;
  t2237 = -1.*t600*t1069;
  t2257 = t2200 + t2237;
  t2899 = Sin(var1[4]);
  t422 = -1.*t413;
  t558 = 1. + t422;
  t3234 = -1.*t597*t600;
  t3242 = -1.*t807*t1069;
  t3251 = t3234 + t3242;
  t3230 = 0.4*t558*t2257;
  t3262 = -0.4*t3251*t2899;
  t3265 = t413*t2257;
  t3272 = t3251*t2899;
  t3274 = t3265 + t3272;
  t3275 = 0.8*t3274;
  t3284 = t3230 + t3262 + t3275;
  t3362 = -0.4*t413*t2257;
  t3365 = 0.4*t1473*t2899;
  t3371 = -1.*t1473*t2899;
  t3374 = t3265 + t3371;
  t3389 = 0.8*t3374;
  t3400 = t3362 + t3365 + t3389;
  t3428 = -0.4*t413*t3251;
  t3459 = 0.4*t2257*t2899;
  t3463 = t413*t3251;
  t3473 = -1.*t2257*t2899;
  t3579 = t3463 + t3473;
  t3615 = 0.8*t3579;
  t3616 = t3428 + t3459 + t3615;
  t3679 = -1.*t807*t597;
  t3681 = t600*t1069;
  t3688 = t3679 + t3681;
  t3676 = 0.4*t558*t3251;
  t3691 = -0.4*t3688*t2899;
  t3695 = t3688*t2899;
  t3696 = t3463 + t3695;
  t3697 = 0.8*t3696;
  t3700 = t3676 + t3691 + t3697;
  t3671 = var2[4]*t3616;
  t3716 = var2[2]*t3700;
  t3717 = var2[3]*t3700;
  t3725 = t3671 + t3716 + t3717;
  t3921 = 0.4*t3251*t2899;
  t3939 = -1.*t3251*t2899;
  t3996 = -0.4*t413*t3688;
  t4007 = t413*t3688;
  t4015 = t4007 + t3939;
  t4023 = 0.8*t4015;
  t4106 = t3996 + t3921 + t4023;
  t4185 = 0.4*t558*t3688;
  t4186 = -0.4*t1473*t2899;
  t4190 = t1473*t2899;
  t4191 = t4007 + t4190;
  t4195 = 0.8*t4191;
  t4200 = t4185 + t4186 + t4195;
  t4179 = var2[4]*t4106;
  t4213 = var2[2]*t4200;
  t4215 = var2[3]*t4200;
  t4223 = t4179 + t4213 + t4215;
  p_output1[0]=-0.4*t2257*t2899 + 0.8*(t2257*t2899 + t1473*t413) + 0.4*t1473*t558 + var1[0] + var2[0] + t3284*var2[2] + t3725*var2[2] + t3284*var2[3] + t3725*var2[3] + t3400*var2[4] + var2[4]*(t3616*var2[2] + t3616*var2[3] + (t3459 + 0.4*t1473*t413 + 0.8*(t3473 - 1.*t1473*t413))*var2[4]) + var3[0] + t3284*var3[2] + t3284*var3[3] + t3400*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t3230 + t3262 + t3275 + t3671 + t3716 + t3717 + var1[1] + var2[1] + t4223*var2[2] + t4223*var2[3] + var2[4]*(t4106*var2[2] + t4106*var2[3] + (t3921 + 0.4*t2257*t413 + 0.8*(t3939 - 1.*t2257*t413))*var2[4]) + var3[1] + t3700*var3[2] + t3700*var3[3] + t3616*var3[4] - 1.*var4[2];
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
