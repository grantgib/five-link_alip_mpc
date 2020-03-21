/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:37:02 GMT-04:00
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
  double t8425;
  double t8413;
  double t8414;
  double t8807;
  double t4419;
  double t8424;
  double t8826;
  double t8832;
  double t8834;
  double t8838;
  double t8843;
  double t8989;
  double t4593;
  double t8211;
  double t8833;
  double t9315;
  double t9800;
  double t11518;
  double t11529;
  double t11537;
  double t11545;
  double t11570;
  double t11573;
  double t11601;
  t8425 = Cos(var1[2]);
  t8413 = Cos(var1[5]);
  t8414 = Sin(var1[2]);
  t8807 = Sin(var1[5]);
  t4419 = Cos(var1[6]);
  t8424 = -1.*t8413*t8414;
  t8826 = -1.*t8425*t8807;
  t8832 = t8424 + t8826;
  t8834 = -1.*t8425*t8413;
  t8838 = t8414*t8807;
  t8843 = t8834 + t8838;
  t8989 = Sin(var1[6]);
  t4593 = -1.*t4419;
  t8211 = 1. + t4593;
  t8833 = 0.4*t8211*t8832;
  t9315 = -0.4*t8843*t8989;
  t9800 = t4419*t8832;
  t11518 = t8843*t8989;
  t11529 = t9800 + t11518;
  t11537 = 0.8*t11529;
  t11545 = t8833 + t9315 + t11537;
  t11570 = t8425*t8413;
  t11573 = -1.*t8414*t8807;
  t11601 = t11570 + t11573;
  p_output1[0]=1.;
  p_output1[1]=t11545;
  p_output1[2]=t11545;
  p_output1[3]=-0.4*t4419*t8832 + 0.4*t11601*t8989 + 0.8*(-1.*t11601*t8989 + t9800);
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
