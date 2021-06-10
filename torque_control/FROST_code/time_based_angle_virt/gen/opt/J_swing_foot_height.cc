/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:20:18 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t3779;
  double t1905;
  double t2865;
  double t3780;
  double t819;
  double t3778;
  double t3781;
  double t3787;
  double t3789;
  double t3793;
  double t3796;
  double t3797;
  double t1464;
  double t1567;
  double t3788;
  double t3799;
  double t3800;
  double t3802;
  double t3803;
  double t3804;
  double t3805;
  double t3807;
  double t3808;
  double t3809;
  t3779 = Cos(var1[2]);
  t1905 = Cos(var1[5]);
  t2865 = Sin(var1[2]);
  t3780 = Sin(var1[5]);
  t819 = Cos(var1[6]);
  t3778 = -1.*t1905*t2865;
  t3781 = -1.*t3779*t3780;
  t3787 = t3778 + t3781;
  t3789 = -1.*t3779*t1905;
  t3793 = t2865*t3780;
  t3796 = t3789 + t3793;
  t3797 = Sin(var1[6]);
  t1464 = -1.*t819;
  t1567 = 1. + t1464;
  t3788 = 0.4*t1567*t3787;
  t3799 = -0.4*t3796*t3797;
  t3800 = t819*t3787;
  t3802 = t3796*t3797;
  t3803 = t3800 + t3802;
  t3804 = 0.8*t3803;
  t3805 = t3788 + t3799 + t3804;
  t3807 = t3779*t1905;
  t3808 = -1.*t2865*t3780;
  t3809 = t3807 + t3808;
  p_output1[0]=1.;
  p_output1[1]=t3805;
  p_output1[2]=t3805;
  p_output1[3]=0.4*t3797*t3809 + 0.8*(t3800 - 1.*t3797*t3809) - 0.4*t3787*t819;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swing_foot_height.hh"

namespace RightStance
{

void J_swing_foot_height_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
