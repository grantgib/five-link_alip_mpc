/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 21:07:13 GMT-04:00
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
  double t1679;
  double t1668;
  double t1675;
  double t1680;
  double t1598;
  double t1677;
  double t1683;
  double t1684;
  double t1738;
  double t1745;
  double t1760;
  double t1764;
  double t1599;
  double t1610;
  double t1660;
  double t1661;
  double t1770;
  double t1791;
  double t1820;
  double t1824;
  double t1828;
  t1679 = Cos(var1[2]);
  t1668 = Cos(var1[5]);
  t1675 = Sin(var1[2]);
  t1680 = Sin(var1[5]);
  t1598 = Cos(var1[6]);
  t1677 = t1668*t1675;
  t1683 = t1679*t1680;
  t1684 = t1677 + t1683;
  t1738 = t1679*t1668;
  t1745 = -1.*t1675*t1680;
  t1760 = t1738 + t1745;
  t1764 = Sin(var1[6]);
  t1599 = -1.*t1598;
  t1610 = 1. + t1599;
  t1660 = 0.4*t1610;
  t1661 = 0. + t1660;
  t1770 = -0.4*t1764;
  t1791 = 0. + t1770;
  t1820 = -1.*t1668*t1675;
  t1824 = -1.*t1679*t1680;
  t1828 = t1820 + t1824;
  p_output1[0]=0. + t1661*t1684 + 0.4*(t1598*t1684 + t1760*t1764) + t1760*t1791 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t1661*t1760 + t1791*t1828 + 0.4*(t1598*t1760 + t1764*t1828) + var1[1];
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

#include "p_q2_left.hh"

namespace SymExpression
{

void p_q2_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
