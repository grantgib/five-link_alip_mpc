/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 17:11:44 GMT-05:00
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
  double t9099;
  double t8603;
  double t8616;
  double t9128;
  double t2487;
  double t8738;
  double t9541;
  double t9949;
  double t10539;
  double t10600;
  double t10648;
  double t10739;
  double t7163;
  double t7167;
  double t7679;
  double t8597;
  double t10759;
  double t10760;
  double t10793;
  double t10794;
  double t10798;
  t9099 = Cos(var1[2]);
  t8603 = Cos(var1[5]);
  t8616 = Sin(var1[2]);
  t9128 = Sin(var1[5]);
  t2487 = Cos(var1[6]);
  t8738 = t8603*t8616;
  t9541 = t9099*t9128;
  t9949 = t8738 + t9541;
  t10539 = t9099*t8603;
  t10600 = -1.*t8616*t9128;
  t10648 = t10539 + t10600;
  t10739 = Sin(var1[6]);
  t7163 = -1.*t2487;
  t7167 = 1. + t7163;
  t7679 = 0.4*t7167;
  t8597 = 0. + t7679;
  t10759 = -0.4*t10739;
  t10760 = 0. + t10759;
  t10793 = -1.*t8603*t8616;
  t10794 = -1.*t9099*t9128;
  t10798 = t10793 + t10794;
  p_output1[0]=0. + t10648*t10760 + t8597*t9949 + 0.8*(t10648*t10739 + t2487*t9949) + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t10760*t10798 + 0.8*(t10739*t10798 + t10648*t2487) + t10648*t8597 + var1[1];
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
