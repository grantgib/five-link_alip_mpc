/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 12:05:25 GMT-05:00
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
  double t3326;
  double t3155;
  double t3197;
  double t3335;
  double t2577;
  double t3292;
  double t3684;
  double t4802;
  double t4818;
  double t4827;
  double t4828;
  double t4830;
  double t2589;
  double t2871;
  double t3010;
  double t3095;
  double t4835;
  double t4862;
  double t5053;
  double t5054;
  double t5056;
  t3326 = Cos(var1[2]);
  t3155 = Cos(var1[5]);
  t3197 = Sin(var1[2]);
  t3335 = Sin(var1[5]);
  t2577 = Cos(var1[6]);
  t3292 = t3155*t3197;
  t3684 = t3326*t3335;
  t4802 = t3292 + t3684;
  t4818 = t3326*t3155;
  t4827 = -1.*t3197*t3335;
  t4828 = t4818 + t4827;
  t4830 = Sin(var1[6]);
  t2589 = -1.*t2577;
  t2871 = 1. + t2589;
  t3010 = 0.4*t2871;
  t3095 = 0. + t3010;
  t4835 = -0.4*t4830;
  t4862 = 0. + t4835;
  t5053 = -1.*t3155*t3197;
  t5054 = -1.*t3326*t3335;
  t5056 = t5053 + t5054;
  p_output1[0]=0. + t3095*t4802 + 0.8*(t2577*t4802 + t4828*t4830) + t4828*t4862 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t3095*t4828 + t4862*t5056 + 0.8*(t2577*t4828 + t4830*t5056) + var1[1];
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
