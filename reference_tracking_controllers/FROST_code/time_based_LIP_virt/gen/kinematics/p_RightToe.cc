/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 12:05:23 GMT-05:00
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
  double t2911;
  double t2750;
  double t2759;
  double t3006;
  double t2160;
  double t2871;
  double t3010;
  double t3095;
  double t3197;
  double t3223;
  double t3292;
  double t3326;
  double t2161;
  double t2251;
  double t2577;
  double t2589;
  double t3335;
  double t3684;
  double t4845;
  double t4851;
  double t4862;
  t2911 = Cos(var1[2]);
  t2750 = Cos(var1[3]);
  t2759 = Sin(var1[2]);
  t3006 = Sin(var1[3]);
  t2160 = Cos(var1[4]);
  t2871 = t2750*t2759;
  t3010 = t2911*t3006;
  t3095 = t2871 + t3010;
  t3197 = t2911*t2750;
  t3223 = -1.*t2759*t3006;
  t3292 = t3197 + t3223;
  t3326 = Sin(var1[4]);
  t2161 = -1.*t2160;
  t2251 = 1. + t2161;
  t2577 = 0.4*t2251;
  t2589 = 0. + t2577;
  t3335 = -0.4*t3326;
  t3684 = 0. + t3335;
  t4845 = -1.*t2750*t2759;
  t4851 = -1.*t2911*t3006;
  t4862 = t4845 + t4851;
  p_output1[0]=0. + t2589*t3095 + 0.8*(t2160*t3095 + t3292*t3326) + t3292*t3684 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t2589*t3292 + t3684*t4862 + 0.8*(t2160*t3292 + t3326*t4862) + var1[1];
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
