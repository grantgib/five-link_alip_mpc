/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:54 GMT-05:00
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
  double t3726;
  double t3663;
  double t3708;
  double t3727;
  double t825;
  double t3722;
  double t3731;
  double t3733;
  double t3738;
  double t3740;
  double t3742;
  double t3747;
  double t1212;
  double t2919;
  double t3735;
  double t3767;
  double t3769;
  double t3773;
  double t3779;
  double t3784;
  double t3787;
  double t3800;
  double t3802;
  double t3807;
  t3726 = Cos(var1[2]);
  t3663 = Cos(var1[5]);
  t3708 = Sin(var1[2]);
  t3727 = Sin(var1[5]);
  t825 = Cos(var1[6]);
  t3722 = -1.*t3663*t3708;
  t3731 = -1.*t3726*t3727;
  t3733 = t3722 + t3731;
  t3738 = -1.*t3726*t3663;
  t3740 = t3708*t3727;
  t3742 = t3738 + t3740;
  t3747 = Sin(var1[6]);
  t1212 = -1.*t825;
  t2919 = 1. + t1212;
  t3735 = 0.4*t2919*t3733;
  t3767 = -0.4*t3742*t3747;
  t3769 = t825*t3733;
  t3773 = t3742*t3747;
  t3779 = t3769 + t3773;
  t3784 = 0.8*t3779;
  t3787 = t3735 + t3767 + t3784;
  t3800 = t3726*t3663;
  t3802 = -1.*t3708*t3727;
  t3807 = t3800 + t3802;
  p_output1[0]=1.;
  p_output1[1]=t3787;
  p_output1[2]=t3787;
  p_output1[3]=0.4*t3747*t3807 + 0.8*(t3769 - 1.*t3747*t3807) - 0.4*t3733*t825;
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

#include "J_u_leftFootHeight_RightStance.hh"

namespace RightStance
{

void J_u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
