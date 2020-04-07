/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 21:42:26 GMT-04:00
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
  double t1801;
  double t1787;
  double t1791;
  double t1803;
  double t1680;
  double t1798;
  double t1815;
  double t1820;
  double t1828;
  double t1835;
  double t1838;
  double t1845;
  double t1683;
  double t1745;
  double t1770;
  double t1771;
  double t1850;
  double t1855;
  double t1913;
  double t1915;
  double t1920;
  t1801 = Cos(var1[2]);
  t1787 = Cos(var1[3]);
  t1791 = Sin(var1[2]);
  t1803 = Sin(var1[3]);
  t1680 = Cos(var1[4]);
  t1798 = t1787*t1791;
  t1815 = t1801*t1803;
  t1820 = t1798 + t1815;
  t1828 = t1801*t1787;
  t1835 = -1.*t1791*t1803;
  t1838 = t1828 + t1835;
  t1845 = Sin(var1[4]);
  t1683 = -1.*t1680;
  t1745 = 1. + t1683;
  t1770 = 0.4*t1745;
  t1771 = 0. + t1770;
  t1850 = -0.4*t1845;
  t1855 = 0. + t1850;
  t1913 = -1.*t1787*t1791;
  t1915 = -1.*t1801*t1803;
  t1920 = t1913 + t1915;
  p_output1[0]=0. + t1771*t1820 + 0.8*(t1680*t1820 + t1838*t1845) + t1838*t1855 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t1771*t1838 + t1855*t1920 + 0.8*(t1680*t1838 + t1845*t1920) + var1[1];
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

#include "p_RightToe.hh"

namespace SymExpression
{

void p_RightToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
