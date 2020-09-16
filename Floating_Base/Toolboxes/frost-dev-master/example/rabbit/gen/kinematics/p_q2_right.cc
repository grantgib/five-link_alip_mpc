/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 15:05:37 GMT-04:00
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
  double t3491;
  double t3488;
  double t3489;
  double t3492;
  double t606;
  double t3490;
  double t3494;
  double t3495;
  double t3497;
  double t3498;
  double t3499;
  double t3500;
  double t798;
  double t851;
  double t3481;
  double t3485;
  double t3501;
  double t3503;
  double t3511;
  double t3512;
  double t3513;
  t3491 = Cos(var1[2]);
  t3488 = Cos(var1[3]);
  t3489 = Sin(var1[2]);
  t3492 = Sin(var1[3]);
  t606 = Cos(var1[4]);
  t3490 = t3488*t3489;
  t3494 = t3491*t3492;
  t3495 = t3490 + t3494;
  t3497 = t3491*t3488;
  t3498 = -1.*t3489*t3492;
  t3499 = t3497 + t3498;
  t3500 = Sin(var1[4]);
  t798 = -1.*t606;
  t851 = 1. + t798;
  t3481 = 0.4*t851;
  t3485 = 0. + t3481;
  t3501 = -0.4*t3500;
  t3503 = 0. + t3501;
  t3511 = -1.*t3488*t3489;
  t3512 = -1.*t3491*t3492;
  t3513 = t3511 + t3512;
  p_output1[0]=0. + t3485*t3495 + t3499*t3503 + 0.4*(t3499*t3500 + t3495*t606) + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t3485*t3499 + t3503*t3513 + 0.4*(t3500*t3513 + t3499*t606) + var1[1];
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
