/*
 * Automatically Generated from Mathematica.
 * Sat 28 Mar 2020 23:49:06 GMT-04:00
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
  double t6782;
  double t6771;
  double t6772;
  double t6794;
  double t1937;
  double t6775;
  double t6796;
  double t6797;
  double t6803;
  double t6812;
  double t6814;
  double t6815;
  double t2079;
  double t6691;
  double t6765;
  double t6766;
  double t6816;
  double t6819;
  double t6877;
  double t6893;
  double t6897;
  t6782 = Cos(var1[2]);
  t6771 = Cos(var1[3]);
  t6772 = Sin(var1[2]);
  t6794 = Sin(var1[3]);
  t1937 = Cos(var1[4]);
  t6775 = t6771*t6772;
  t6796 = t6782*t6794;
  t6797 = t6775 + t6796;
  t6803 = t6782*t6771;
  t6812 = -1.*t6772*t6794;
  t6814 = t6803 + t6812;
  t6815 = Sin(var1[4]);
  t2079 = -1.*t1937;
  t6691 = 1. + t2079;
  t6765 = 0.4*t6691;
  t6766 = 0. + t6765;
  t6816 = -0.4*t6815;
  t6819 = 0. + t6816;
  t6877 = -1.*t6771*t6772;
  t6893 = -1.*t6782*t6794;
  t6897 = t6877 + t6893;
  p_output1[0]=0. + t6766*t6797 + 0.4*(t1937*t6797 + t6814*t6815) + t6814*t6819 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t6766*t6814 + t6819*t6897 + 0.4*(t1937*t6814 + t6815*t6897) + var1[1];
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
