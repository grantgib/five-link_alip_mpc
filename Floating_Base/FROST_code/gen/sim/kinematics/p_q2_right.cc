/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 15:18:14 GMT-04:00
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
  double t3011;
  double t3008;
  double t3009;
  double t3012;
  double t3000;
  double t3010;
  double t3013;
  double t3014;
  double t3016;
  double t3017;
  double t3018;
  double t3019;
  double t3004;
  double t3005;
  double t3006;
  double t3007;
  double t3020;
  double t3021;
  double t3029;
  double t3030;
  double t3031;
  t3011 = Cos(var1[2]);
  t3008 = Cos(var1[3]);
  t3009 = Sin(var1[2]);
  t3012 = Sin(var1[3]);
  t3000 = Cos(var1[4]);
  t3010 = t3008*t3009;
  t3013 = t3011*t3012;
  t3014 = t3010 + t3013;
  t3016 = t3011*t3008;
  t3017 = -1.*t3009*t3012;
  t3018 = t3016 + t3017;
  t3019 = Sin(var1[4]);
  t3004 = -1.*t3000;
  t3005 = 1. + t3004;
  t3006 = 0.4*t3005;
  t3007 = 0. + t3006;
  t3020 = -0.4*t3019;
  t3021 = 0. + t3020;
  t3029 = -1.*t3008*t3009;
  t3030 = -1.*t3011*t3012;
  t3031 = t3029 + t3030;
  p_output1[0]=0. + t3007*t3014 + 0.4*(t3000*t3014 + t3018*t3019) + t3018*t3021 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t3007*t3018 + t3021*t3031 + 0.4*(t3000*t3018 + t3019*t3031) + var1[1];
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
