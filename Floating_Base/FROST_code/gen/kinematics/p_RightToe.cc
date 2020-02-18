/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:20:40 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t27;
  double t23;
  double t24;
  double t28;
  double t13;
  double t26;
  double t31;
  double t32;
  double t34;
  double t35;
  double t36;
  double t37;
  double t14;
  double t18;
  double t21;
  double t22;
  double t38;
  double t41;
  double t49;
  double t50;
  double t51;
  t27 = Cos(var1[2]);
  t23 = Cos(var1[3]);
  t24 = Sin(var1[2]);
  t28 = Sin(var1[3]);
  t13 = Cos(var1[4]);
  t26 = t23*t24;
  t31 = t27*t28;
  t32 = t26 + t31;
  t34 = t27*t23;
  t35 = -1.*t24*t28;
  t36 = t34 + t35;
  t37 = Sin(var1[4]);
  t14 = -1.*t13;
  t18 = 1. + t14;
  t21 = 0.4*t18;
  t22 = 0. + t21;
  t38 = -0.4*t37;
  t41 = 0. + t38;
  t49 = -1.*t23*t24;
  t50 = -1.*t27*t28;
  t51 = t49 + t50;
  p_output1[0]=0. + t22*t32 + 0.8*(t13*t32 + t36*t37) + t36*t41 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t22*t36 + t41*t51 + 0.8*(t13*t36 + t37*t51) + var1[1];
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
