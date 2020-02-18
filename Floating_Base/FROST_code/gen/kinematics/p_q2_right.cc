/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:20:36 GMT-05:00
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
  double t11;
  double t8;
  double t9;
  double t12;
  double t3;
  double t10;
  double t13;
  double t14;
  double t16;
  double t17;
  double t18;
  double t19;
  double t4;
  double t5;
  double t6;
  double t7;
  double t20;
  double t21;
  double t29;
  double t30;
  double t31;
  t11 = Cos(var1[2]);
  t8 = Cos(var1[3]);
  t9 = Sin(var1[2]);
  t12 = Sin(var1[3]);
  t3 = Cos(var1[4]);
  t10 = t8*t9;
  t13 = t11*t12;
  t14 = t10 + t13;
  t16 = t11*t8;
  t17 = -1.*t9*t12;
  t18 = t16 + t17;
  t19 = Sin(var1[4]);
  t4 = -1.*t3;
  t5 = 1. + t4;
  t6 = 0.4*t5;
  t7 = 0. + t6;
  t20 = -0.4*t19;
  t21 = 0. + t20;
  t29 = -1.*t8*t9;
  t30 = -1.*t11*t12;
  t31 = t29 + t30;
  p_output1[0]=0. + t18*t21 + 0.4*(t18*t19 + t14*t3) + t14*t7 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t21*t31 + 0.4*(t18*t3 + t19*t31) + t18*t7 + var1[1];
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

#include "p_q2_right.hh"

namespace SymExpression
{

void p_q2_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
