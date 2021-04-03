/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 17:11:38 GMT-05:00
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
  double t7006;
  double t5901;
  double t5942;
  double t7008;
  double t235;
  double t6932;
  double t7051;
  double t7054;
  double t7136;
  double t7145;
  double t7151;
  double t7160;
  double t935;
  double t5409;
  double t5410;
  double t5428;
  double t7162;
  double t7163;
  double t8556;
  double t8565;
  double t8603;
  t7006 = Cos(var1[2]);
  t5901 = Cos(var1[3]);
  t5942 = Sin(var1[2]);
  t7008 = Sin(var1[3]);
  t235 = Cos(var1[4]);
  t6932 = t5901*t5942;
  t7051 = t7006*t7008;
  t7054 = t6932 + t7051;
  t7136 = t7006*t5901;
  t7145 = -1.*t5942*t7008;
  t7151 = t7136 + t7145;
  t7160 = Sin(var1[4]);
  t935 = -1.*t235;
  t5409 = 1. + t935;
  t5410 = 0.4*t5409;
  t5428 = 0. + t5410;
  t7162 = -0.4*t7160;
  t7163 = 0. + t7162;
  t8556 = -1.*t5901*t5942;
  t8565 = -1.*t7006*t7008;
  t8603 = t8556 + t8565;
  p_output1[0]=0. + t5428*t7054 + 0.4*(t235*t7054 + t7151*t7160) + t7151*t7163 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t5428*t7151 + t7163*t8603 + 0.4*(t235*t7151 + t7160*t8603) + var1[1];
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
