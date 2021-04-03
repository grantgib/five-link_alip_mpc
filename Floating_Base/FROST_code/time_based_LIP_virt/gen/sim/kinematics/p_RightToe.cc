/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 17:11:43 GMT-05:00
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
  double t7861;
  double t7187;
  double t7282;
  double t8242;
  double t7051;
  double t7679;
  double t8597;
  double t8603;
  double t8738;
  double t9097;
  double t9099;
  double t9128;
  double t7054;
  double t7151;
  double t7163;
  double t7167;
  double t9541;
  double t9949;
  double t10761;
  double t10762;
  double t10766;
  t7861 = Cos(var1[2]);
  t7187 = Cos(var1[3]);
  t7282 = Sin(var1[2]);
  t8242 = Sin(var1[3]);
  t7051 = Cos(var1[4]);
  t7679 = t7187*t7282;
  t8597 = t7861*t8242;
  t8603 = t7679 + t8597;
  t8738 = t7861*t7187;
  t9097 = -1.*t7282*t8242;
  t9099 = t8738 + t9097;
  t9128 = Sin(var1[4]);
  t7054 = -1.*t7051;
  t7151 = 1. + t7054;
  t7163 = 0.4*t7151;
  t7167 = 0. + t7163;
  t9541 = -0.4*t9128;
  t9949 = 0. + t9541;
  t10761 = -1.*t7187*t7282;
  t10762 = -1.*t7861*t8242;
  t10766 = t10761 + t10762;
  p_output1[0]=0. + t7167*t8603 + 0.8*(t7051*t8603 + t9099*t9128) + t9099*t9949 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t7167*t9099 + 0.8*(t7051*t9099 + t10766*t9128) + t10766*t9949 + var1[1];
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
