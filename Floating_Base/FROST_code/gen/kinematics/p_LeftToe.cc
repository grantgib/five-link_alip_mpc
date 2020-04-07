/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 21:42:28 GMT-04:00
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
  double t1845;
  double t1824;
  double t1828;
  double t1850;
  double t1770;
  double t1838;
  double t1855;
  double t1856;
  double t1865;
  double t1884;
  double t1899;
  double t1910;
  double t1771;
  double t1798;
  double t1815;
  double t1820;
  double t1911;
  double t1920;
  double t1939;
  double t1940;
  double t1941;
  t1845 = Cos(var1[2]);
  t1824 = Cos(var1[5]);
  t1828 = Sin(var1[2]);
  t1850 = Sin(var1[5]);
  t1770 = Cos(var1[6]);
  t1838 = t1824*t1828;
  t1855 = t1845*t1850;
  t1856 = t1838 + t1855;
  t1865 = t1845*t1824;
  t1884 = -1.*t1828*t1850;
  t1899 = t1865 + t1884;
  t1910 = Sin(var1[6]);
  t1771 = -1.*t1770;
  t1798 = 1. + t1771;
  t1815 = 0.4*t1798;
  t1820 = 0. + t1815;
  t1911 = -0.4*t1910;
  t1920 = 0. + t1911;
  t1939 = -1.*t1824*t1828;
  t1940 = -1.*t1845*t1850;
  t1941 = t1939 + t1940;
  p_output1[0]=0. + t1820*t1856 + 0.8*(t1770*t1856 + t1899*t1910) + t1899*t1920 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t1820*t1899 + t1920*t1941 + 0.8*(t1770*t1899 + t1910*t1941) + var1[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_LeftToe.hh"

namespace SymExpression
{

void p_LeftToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
