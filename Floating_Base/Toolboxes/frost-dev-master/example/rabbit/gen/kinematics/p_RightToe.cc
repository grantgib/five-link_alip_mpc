/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 15:05:44 GMT-04:00
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
  double t3509;
  double t3505;
  double t3506;
  double t3510;
  double t3494;
  double t3508;
  double t3513;
  double t3514;
  double t3516;
  double t3517;
  double t3518;
  double t3519;
  double t3495;
  double t3499;
  double t3503;
  double t3504;
  double t3520;
  double t3523;
  double t3531;
  double t3532;
  double t3533;
  t3509 = Cos(var1[2]);
  t3505 = Cos(var1[3]);
  t3506 = Sin(var1[2]);
  t3510 = Sin(var1[3]);
  t3494 = Cos(var1[4]);
  t3508 = t3505*t3506;
  t3513 = t3509*t3510;
  t3514 = t3508 + t3513;
  t3516 = t3509*t3505;
  t3517 = -1.*t3506*t3510;
  t3518 = t3516 + t3517;
  t3519 = Sin(var1[4]);
  t3495 = -1.*t3494;
  t3499 = 1. + t3495;
  t3503 = 0.4*t3499;
  t3504 = 0. + t3503;
  t3520 = -0.4*t3519;
  t3523 = 0. + t3520;
  t3531 = -1.*t3505*t3506;
  t3532 = -1.*t3509*t3510;
  t3533 = t3531 + t3532;
  p_output1[0]=0. + t3504*t3514 + 0.8*(t3494*t3514 + t3518*t3519) + t3518*t3523 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t3504*t3518 + t3523*t3533 + 0.8*(t3494*t3518 + t3519*t3533) + var1[1];
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
