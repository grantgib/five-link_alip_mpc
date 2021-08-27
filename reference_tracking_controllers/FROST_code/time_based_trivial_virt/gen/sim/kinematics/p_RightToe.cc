/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 15:18:23 GMT-04:00
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
  double t3027;
  double t3023;
  double t3024;
  double t3028;
  double t3013;
  double t3026;
  double t3031;
  double t3032;
  double t3034;
  double t3035;
  double t3036;
  double t3037;
  double t3014;
  double t3018;
  double t3021;
  double t3022;
  double t3038;
  double t3041;
  double t3049;
  double t3050;
  double t3051;
  t3027 = Cos(var1[2]);
  t3023 = Cos(var1[3]);
  t3024 = Sin(var1[2]);
  t3028 = Sin(var1[3]);
  t3013 = Cos(var1[4]);
  t3026 = t3023*t3024;
  t3031 = t3027*t3028;
  t3032 = t3026 + t3031;
  t3034 = t3027*t3023;
  t3035 = -1.*t3024*t3028;
  t3036 = t3034 + t3035;
  t3037 = Sin(var1[4]);
  t3014 = -1.*t3013;
  t3018 = 1. + t3014;
  t3021 = 0.4*t3018;
  t3022 = 0. + t3021;
  t3038 = -0.4*t3037;
  t3041 = 0. + t3038;
  t3049 = -1.*t3023*t3024;
  t3050 = -1.*t3027*t3028;
  t3051 = t3049 + t3050;
  p_output1[0]=0. + t3022*t3032 + 0.8*(t3013*t3032 + t3036*t3037) + t3036*t3041 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t3022*t3036 + t3041*t3051 + 0.8*(t3013*t3036 + t3037*t3051) + var1[1];
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
