/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:16:18 GMT-05:00
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
  double t2635;
  double t2599;
  double t2601;
  double t2638;
  double t2589;
  double t2616;
  double t2640;
  double t2646;
  double t2654;
  double t2711;
  double t2712;
  double t2730;
  double t2745;
  double t2985;
  double t2987;
  double t3004;
  double t2872;
  double t2880;
  double t2981;
  double t3013;
  double t3019;
  double t3020;
  double t3071;
  double t3076;
  double t2648;
  double t2731;
  double t2817;
  double t2818;
  double t2863;
  double t2865;
  double t2867;
  double t3084;
  double t3092;
  double t3093;
  double t3105;
  double t3132;
  double t3152;
  double t3373;
  double t3382;
  double t3429;
  double t3430;
  double t3465;
  double t3471;
  double t3505;
  t2635 = Cos(var1[2]);
  t2599 = Cos(var1[5]);
  t2601 = Sin(var1[2]);
  t2638 = Sin(var1[5]);
  t2589 = Cos(var1[6]);
  t2616 = -1.*t2599*t2601;
  t2640 = -1.*t2635*t2638;
  t2646 = t2616 + t2640;
  t2654 = t2635*t2599;
  t2711 = -1.*t2601*t2638;
  t2712 = t2654 + t2711;
  t2730 = Sin(var1[6]);
  t2745 = t2589*t2646;
  t2985 = -1.*t2635*t2599;
  t2987 = t2601*t2638;
  t3004 = t2985 + t2987;
  t2872 = -1.*t2589;
  t2880 = 1. + t2872;
  t2981 = 0.4*t2880*t2646;
  t3013 = -0.4*t3004*t2730;
  t3019 = t3004*t2730;
  t3020 = t2745 + t3019;
  t3071 = 0.8*t3020;
  t3076 = t2981 + t3013 + t3071;
  t2648 = -0.4*t2589*t2646;
  t2731 = 0.4*t2712*t2730;
  t2817 = -1.*t2712*t2730;
  t2818 = t2745 + t2817;
  t2863 = 0.8*t2818;
  t2865 = t2648 + t2731 + t2863;
  t2867 = var2[6]*t2865;
  t3084 = var2[2]*t3076;
  t3092 = var2[5]*t3076;
  t3093 = t2867 + t3084 + t3092;
  t3105 = t2599*t2601;
  t3132 = t2635*t2638;
  t3152 = t3105 + t3132;
  t3373 = 0.4*t2880*t2712;
  t3382 = -0.4*t2646*t2730;
  t3429 = t2589*t2712;
  t3430 = t2646*t2730;
  t3465 = t3429 + t3430;
  t3471 = 0.8*t3465;
  t3505 = t3373 + t3382 + t3471;
  p_output1[0]=t3093;
  p_output1[1]=t3093;
  p_output1[2]=t2865*var2[2] + t2865*var2[5] + (t2731 + 0.4*t2589*t3152 + 0.8*(t2817 - 1.*t2589*t3152))*var2[6];
  p_output1[3]=1.;
  p_output1[4]=t3505;
  p_output1[5]=t3505;
  p_output1[6]=-0.4*t2589*t2712 + 0.4*t2730*t3152 + 0.8*(-1.*t2730*t3152 + t3429);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_vel_swing_x.hh"

namespace RightStance
{

void J_vel_swing_x_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
