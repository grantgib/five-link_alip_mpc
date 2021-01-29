/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:08:27 GMT-05:00
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
  double t1834;
  double t1847;
  double t1830;
  double t1855;
  double t1647;
  double t1843;
  double t1857;
  double t1861;
  double t1882;
  double t1892;
  double t1912;
  double t1929;
  double t1673;
  double t1798;
  double t1865;
  double t1933;
  double t1935;
  double t1943;
  double t1948;
  double t1951;
  double t1957;
  double t1989;
  double t1998;
  double t2000;
  t1834 = Cos(var1[5]);
  t1847 = Sin(var1[2]);
  t1830 = Cos(var1[2]);
  t1855 = Sin(var1[5]);
  t1647 = Cos(var1[6]);
  t1843 = t1830*t1834;
  t1857 = -1.*t1847*t1855;
  t1861 = t1843 + t1857;
  t1882 = -1.*t1834*t1847;
  t1892 = -1.*t1830*t1855;
  t1912 = t1882 + t1892;
  t1929 = Sin(var1[6]);
  t1673 = -1.*t1647;
  t1798 = 1. + t1673;
  t1865 = 0.4*t1798*t1861;
  t1933 = -0.4*t1912*t1929;
  t1935 = t1647*t1861;
  t1943 = t1912*t1929;
  t1948 = t1935 + t1943;
  t1951 = 0.8*t1948;
  t1957 = t1865 + t1933 + t1951;
  t1989 = t1834*t1847;
  t1998 = t1830*t1855;
  t2000 = t1989 + t1998;
  p_output1[0]=1.;
  p_output1[1]=t1957;
  p_output1[2]=t1957;
  p_output1[3]=-0.4*t1647*t1861 + 0.4*t1929*t2000 + 0.8*(t1935 - 1.*t1929*t2000);
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

#include "J_swing_foot_length.hh"

namespace RightStance
{

void J_swing_foot_length_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE