/*
 * Automatically Generated from Mathematica.
 * Sat 28 Mar 2020 23:49:17 GMT-04:00
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
  double t6940;
  double t6897;
  double t6898;
  double t6949;
  double t6808;
  double t6936;
  double t6956;
  double t6973;
  double t7053;
  double t7061;
  double t7071;
  double t7094;
  double t6814;
  double t6822;
  double t6874;
  double t6876;
  double t7109;
  double t7206;
  double t9095;
  double t9102;
  double t9154;
  t6940 = Cos(var1[2]);
  t6897 = Cos(var1[5]);
  t6898 = Sin(var1[2]);
  t6949 = Sin(var1[5]);
  t6808 = Cos(var1[6]);
  t6936 = t6897*t6898;
  t6956 = t6940*t6949;
  t6973 = t6936 + t6956;
  t7053 = t6940*t6897;
  t7061 = -1.*t6898*t6949;
  t7071 = t7053 + t7061;
  t7094 = Sin(var1[6]);
  t6814 = -1.*t6808;
  t6822 = 1. + t6814;
  t6874 = 0.4*t6822;
  t6876 = 0. + t6874;
  t7109 = -0.4*t7094;
  t7206 = 0. + t7109;
  t9095 = -1.*t6897*t6898;
  t9102 = -1.*t6940*t6949;
  t9154 = t9095 + t9102;
  p_output1[0]=0. + t6876*t6973 + 0.8*(t6808*t6973 + t7071*t7094) + t7071*t7206 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t6876*t7071 + t7206*t9154 + 0.8*(t6808*t7071 + t7094*t9154) + var1[1];
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
