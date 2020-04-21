/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:51:40 GMT-04:00
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
  double t1815;
  double t1653;
  double t1654;
  double t1905;
  double t1493;
  double t1773;
  double t1921;
  double t2114;
  double t2154;
  double t2158;
  double t2239;
  double t2241;
  double t1507;
  double t1536;
  double t1580;
  double t1652;
  double t2280;
  double t2401;
  double t2605;
  double t2623;
  double t2631;
  t1815 = Cos(var1[2]);
  t1653 = Cos(var1[5]);
  t1654 = Sin(var1[2]);
  t1905 = Sin(var1[5]);
  t1493 = Cos(var1[6]);
  t1773 = t1653*t1654;
  t1921 = t1815*t1905;
  t2114 = t1773 + t1921;
  t2154 = t1815*t1653;
  t2158 = -1.*t1654*t1905;
  t2239 = t2154 + t2158;
  t2241 = Sin(var1[6]);
  t1507 = -1.*t1493;
  t1536 = 1. + t1507;
  t1580 = 0.4*t1536;
  t1652 = 0. + t1580;
  t2280 = -0.4*t2241;
  t2401 = 0. + t2280;
  t2605 = -1.*t1653*t1654;
  t2623 = -1.*t1815*t1905;
  t2631 = t2605 + t2623;
  p_output1[0]=0. + t1652*t2114 + 0.8*(t1493*t2114 + t2239*t2241) + t2239*t2401 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t1652*t2239 + t2401*t2631 + 0.8*(t1493*t2239 + t2241*t2631) + var1[1];
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
