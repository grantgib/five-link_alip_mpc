/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 15:59:25 GMT-05:00
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
  double t4532;
  double t4529;
  double t4530;
  double t4533;
  double t4521;
  double t4531;
  double t4534;
  double t4535;
  double t4537;
  double t4538;
  double t4539;
  double t4540;
  double t4525;
  double t4526;
  double t4527;
  double t4528;
  double t4541;
  double t4542;
  double t4550;
  double t4551;
  double t4552;
  t4532 = Cos(var1[2]);
  t4529 = Cos(var1[3]);
  t4530 = Sin(var1[2]);
  t4533 = Sin(var1[3]);
  t4521 = Cos(var1[4]);
  t4531 = t4529*t4530;
  t4534 = t4532*t4533;
  t4535 = t4531 + t4534;
  t4537 = t4532*t4529;
  t4538 = -1.*t4530*t4533;
  t4539 = t4537 + t4538;
  t4540 = Sin(var1[4]);
  t4525 = -1.*t4521;
  t4526 = 1. + t4525;
  t4527 = 0.4*t4526;
  t4528 = 0. + t4527;
  t4541 = -0.4*t4540;
  t4542 = 0. + t4541;
  t4550 = -1.*t4529*t4530;
  t4551 = -1.*t4532*t4533;
  t4552 = t4550 + t4551;
  p_output1[0]=0. + t4528*t4535 + 0.4*(t4521*t4535 + t4539*t4540) + t4539*t4542 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t4528*t4539 + t4542*t4552 + 0.4*(t4521*t4539 + t4540*t4552) + var1[1];
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
