/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:16:21 GMT-05:00
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
  double t3261;
  double t3098;
  double t3154;
  double t3264;
  double t3094;
  double t3259;
  double t3291;
  double t3343;
  double t3514;
  double t3528;
  double t3544;
  double t3582;
  double t3590;
  double t3804;
  double t3811;
  double t3812;
  double t3770;
  double t3785;
  double t3792;
  double t3860;
  double t3872;
  double t3890;
  double t3929;
  double t3935;
  t3261 = Cos(var1[2]);
  t3098 = Cos(var1[5]);
  t3154 = Sin(var1[2]);
  t3264 = Sin(var1[5]);
  t3094 = Cos(var1[6]);
  t3259 = -1.*t3098*t3154;
  t3291 = -1.*t3261*t3264;
  t3343 = t3259 + t3291;
  t3514 = t3261*t3098;
  t3528 = -1.*t3154*t3264;
  t3544 = t3514 + t3528;
  t3582 = Sin(var1[6]);
  t3590 = t3094*t3343;
  t3804 = -1.*t3261*t3098;
  t3811 = t3154*t3264;
  t3812 = t3804 + t3811;
  t3770 = -1.*t3094;
  t3785 = 1. + t3770;
  t3792 = 0.4*t3785*t3343;
  t3860 = -0.4*t3812*t3582;
  t3872 = t3812*t3582;
  t3890 = t3590 + t3872;
  t3929 = 0.8*t3890;
  t3935 = t3792 + t3860 + t3929;
  p_output1[0]=var2[1] + t3935*var2[2] + t3935*var2[5] + (-0.4*t3094*t3343 + 0.4*t3544*t3582 + 0.8*(-1.*t3544*t3582 + t3590))*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "vel_swing_z.hh"

namespace RightStance
{

void vel_swing_z_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
