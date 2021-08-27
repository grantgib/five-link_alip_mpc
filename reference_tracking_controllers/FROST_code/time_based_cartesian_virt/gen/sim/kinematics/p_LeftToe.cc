/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 15:59:31 GMT-05:00
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
  double t4558;
  double t4554;
  double t4555;
  double t4559;
  double t4542;
  double t4557;
  double t4562;
  double t4563;
  double t4565;
  double t4566;
  double t4567;
  double t4568;
  double t4543;
  double t4547;
  double t4552;
  double t4553;
  double t4569;
  double t4572;
  double t4580;
  double t4581;
  double t4582;
  t4558 = Cos(var1[2]);
  t4554 = Cos(var1[5]);
  t4555 = Sin(var1[2]);
  t4559 = Sin(var1[5]);
  t4542 = Cos(var1[6]);
  t4557 = t4554*t4555;
  t4562 = t4558*t4559;
  t4563 = t4557 + t4562;
  t4565 = t4558*t4554;
  t4566 = -1.*t4555*t4559;
  t4567 = t4565 + t4566;
  t4568 = Sin(var1[6]);
  t4543 = -1.*t4542;
  t4547 = 1. + t4543;
  t4552 = 0.4*t4547;
  t4553 = 0. + t4552;
  t4569 = -0.4*t4568;
  t4572 = 0. + t4569;
  t4580 = -1.*t4554*t4555;
  t4581 = -1.*t4558*t4559;
  t4582 = t4580 + t4581;
  p_output1[0]=0. + t4553*t4563 + 0.8*(t4542*t4563 + t4567*t4568) + t4567*t4572 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t4553*t4567 + t4572*t4582 + 0.8*(t4542*t4567 + t4568*t4582) + var1[1];
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
