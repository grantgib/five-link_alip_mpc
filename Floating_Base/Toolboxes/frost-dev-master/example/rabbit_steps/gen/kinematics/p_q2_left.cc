/*
 * Automatically Generated from Mathematica.
 * Mon 6 Apr 2020 23:55:55 GMT-04:00
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
  double t19;
  double t15;
  double t16;
  double t20;
  double t6;
  double t18;
  double t21;
  double t22;
  double t24;
  double t25;
  double t26;
  double t27;
  double t7;
  double t10;
  double t13;
  double t14;
  double t28;
  double t31;
  double t39;
  double t40;
  double t41;
  t19 = Cos(var1[2]);
  t15 = Cos(var1[5]);
  t16 = Sin(var1[2]);
  t20 = Sin(var1[5]);
  t6 = Cos(var1[6]);
  t18 = t15*t16;
  t21 = t19*t20;
  t22 = t18 + t21;
  t24 = t19*t15;
  t25 = -1.*t16*t20;
  t26 = t24 + t25;
  t27 = Sin(var1[6]);
  t7 = -1.*t6;
  t10 = 1. + t7;
  t13 = 0.4*t10;
  t14 = 0. + t13;
  t28 = -0.4*t27;
  t31 = 0. + t28;
  t39 = -1.*t15*t16;
  t40 = -1.*t19*t20;
  t41 = t39 + t40;
  p_output1[0]=0. + t14*t22 + t26*t31 + 0.4*(t26*t27 + t22*t6) + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t14*t26 + t31*t41 + 0.4*(t27*t41 + t26*t6) + var1[1];
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
