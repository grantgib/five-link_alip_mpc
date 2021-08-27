/*
 * Automatically Generated from Mathematica.
 * Fri 27 Aug 2021 01:58:44 GMT-04:00
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
  double t107;
  double t103;
  double t104;
  double t108;
  double t91;
  double t106;
  double t111;
  double t112;
  double t114;
  double t115;
  double t116;
  double t117;
  double t92;
  double t96;
  double t101;
  double t102;
  double t118;
  double t121;
  double t129;
  double t130;
  double t131;
  t107 = Cos(var1[2]);
  t103 = Cos(var1[3]);
  t104 = Sin(var1[2]);
  t108 = Sin(var1[3]);
  t91 = Cos(var1[4]);
  t106 = t103*t104;
  t111 = t107*t108;
  t112 = t106 + t111;
  t114 = t107*t103;
  t115 = -1.*t104*t108;
  t116 = t114 + t115;
  t117 = Sin(var1[4]);
  t92 = -1.*t91;
  t96 = 1. + t92;
  t101 = 0.4*t96;
  t102 = 0. + t101;
  t118 = -0.4*t117;
  t121 = 0. + t118;
  t129 = -1.*t103*t104;
  t130 = -1.*t107*t108;
  t131 = t129 + t130;
  p_output1[0]=0. + t102*t112 + t116*t121 + 0.8*(t116*t117 + t112*t91) + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t102*t116 + t121*t131 + 0.8*(t117*t131 + t116*t91) + var1[1];
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
