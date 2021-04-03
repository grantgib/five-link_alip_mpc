/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:40 GMT-05:00
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
  double t1717;
  double t1706;
  double t1713;
  double t1724;
  double t1686;
  double t1716;
  double t1725;
  double t1730;
  double t1825;
  double t1842;
  double t1843;
  double t1849;
  double t1862;
  double t2012;
  double t2015;
  double t2025;
  double t1959;
  double t2000;
  double t2011;
  double t2027;
  double t2028;
  double t2061;
  double t2063;
  double t2066;
  t1717 = Cos(var1[2]);
  t1706 = Cos(var1[5]);
  t1713 = Sin(var1[2]);
  t1724 = Sin(var1[5]);
  t1686 = Cos(var1[6]);
  t1716 = -1.*t1706*t1713;
  t1725 = -1.*t1717*t1724;
  t1730 = t1716 + t1725;
  t1825 = t1717*t1706;
  t1842 = -1.*t1713*t1724;
  t1843 = t1825 + t1842;
  t1849 = Sin(var1[6]);
  t1862 = t1686*t1730;
  t2012 = -1.*t1717*t1706;
  t2015 = t1713*t1724;
  t2025 = t2012 + t2015;
  t1959 = -1.*t1686;
  t2000 = 1. + t1959;
  t2011 = 0.4*t2000*t1730;
  t2027 = -0.4*t2025*t1849;
  t2028 = t2025*t1849;
  t2061 = t1862 + t2028;
  t2063 = 0.8*t2061;
  t2066 = t2011 + t2027 + t2063;
  p_output1[0]=var2[1] + t2066*var2[2] + t2066*var2[5] + (-0.4*t1686*t1730 + 0.4*t1843*t1849 + 0.8*(-1.*t1843*t1849 + t1862))*var2[6];
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
