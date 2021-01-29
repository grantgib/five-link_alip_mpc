/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:27:25 GMT-05:00
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
  double t635;
  double t632;
  double t633;
  double t636;
  double t624;
  double t634;
  double t637;
  double t638;
  double t640;
  double t641;
  double t642;
  double t643;
  double t628;
  double t629;
  double t630;
  double t631;
  double t644;
  double t645;
  double t653;
  double t654;
  double t655;
  t635 = Cos(var1[2]);
  t632 = Cos(var1[3]);
  t633 = Sin(var1[2]);
  t636 = Sin(var1[3]);
  t624 = Cos(var1[4]);
  t634 = t632*t633;
  t637 = t635*t636;
  t638 = t634 + t637;
  t640 = t635*t632;
  t641 = -1.*t633*t636;
  t642 = t640 + t641;
  t643 = Sin(var1[4]);
  t628 = -1.*t624;
  t629 = 1. + t628;
  t630 = 0.4*t629;
  t631 = 0. + t630;
  t644 = -0.4*t643;
  t645 = 0. + t644;
  t653 = -1.*t632*t633;
  t654 = -1.*t635*t636;
  t655 = t653 + t654;
  p_output1[0]=0. + t631*t638 + 0.4*(t624*t638 + t642*t643) + t642*t645 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t631*t642 + t645*t655 + 0.4*(t624*t642 + t643*t655) + var1[1];
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
