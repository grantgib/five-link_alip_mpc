/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 14:52:14 GMT-04:00
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
  double t37;
  double t33;
  double t34;
  double t38;
  double t21;
  double t36;
  double t41;
  double t42;
  double t44;
  double t45;
  double t46;
  double t47;
  double t22;
  double t26;
  double t31;
  double t32;
  double t48;
  double t51;
  double t59;
  double t60;
  double t61;
  t37 = Cos(var1[2]);
  t33 = Cos(var1[5]);
  t34 = Sin(var1[2]);
  t38 = Sin(var1[5]);
  t21 = Cos(var1[6]);
  t36 = t33*t34;
  t41 = t37*t38;
  t42 = t36 + t41;
  t44 = t37*t33;
  t45 = -1.*t34*t38;
  t46 = t44 + t45;
  t47 = Sin(var1[6]);
  t22 = -1.*t21;
  t26 = 1. + t22;
  t31 = 0.4*t26;
  t32 = 0. + t31;
  t48 = -0.4*t47;
  t51 = 0. + t48;
  t59 = -1.*t33*t34;
  t60 = -1.*t37*t38;
  t61 = t59 + t60;
  p_output1[0]=0. + t32*t42 + 0.8*(t21*t42 + t46*t47) + t46*t51 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t32*t46 + t51*t61 + 0.8*(t21*t46 + t47*t61) + var1[1];
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
