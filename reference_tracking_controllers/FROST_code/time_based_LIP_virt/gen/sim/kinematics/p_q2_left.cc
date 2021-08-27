/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 17:11:41 GMT-05:00
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
  double t7160;
  double t7118;
  double t7136;
  double t7162;
  double t5410;
  double t7151;
  double t7163;
  double t7167;
  double t7282;
  double t7661;
  double t7679;
  double t7861;
  double t5428;
  double t6932;
  double t7051;
  double t7054;
  double t8242;
  double t8597;
  double t9630;
  double t9862;
  double t9949;
  t7160 = Cos(var1[2]);
  t7118 = Cos(var1[5]);
  t7136 = Sin(var1[2]);
  t7162 = Sin(var1[5]);
  t5410 = Cos(var1[6]);
  t7151 = t7118*t7136;
  t7163 = t7160*t7162;
  t7167 = t7151 + t7163;
  t7282 = t7160*t7118;
  t7661 = -1.*t7136*t7162;
  t7679 = t7282 + t7661;
  t7861 = Sin(var1[6]);
  t5428 = -1.*t5410;
  t6932 = 1. + t5428;
  t7051 = 0.4*t6932;
  t7054 = 0. + t7051;
  t8242 = -0.4*t7861;
  t8597 = 0. + t8242;
  t9630 = -1.*t7118*t7136;
  t9862 = -1.*t7160*t7162;
  t9949 = t9630 + t9862;
  p_output1[0]=0. + t7054*t7167 + 0.4*(t5410*t7167 + t7679*t7861) + t7679*t8597 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t7054*t7679 + t8597*t9949 + 0.4*(t5410*t7679 + t7861*t9949) + var1[1];
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

#include "p_q2_left.hh"

namespace SymExpression
{

void p_q2_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
