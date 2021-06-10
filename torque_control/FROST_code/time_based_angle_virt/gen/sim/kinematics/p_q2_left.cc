/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:35:26 GMT-05:00
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
  double t5823;
  double t5818;
  double t5821;
  double t5824;
  double t1975;
  double t5822;
  double t5826;
  double t5827;
  double t5829;
  double t5830;
  double t5831;
  double t5832;
  double t2096;
  double t2538;
  double t5811;
  double t5815;
  double t5833;
  double t5834;
  double t5844;
  double t5845;
  double t5846;
  t5823 = Cos(var1[2]);
  t5818 = Cos(var1[5]);
  t5821 = Sin(var1[2]);
  t5824 = Sin(var1[5]);
  t1975 = Cos(var1[6]);
  t5822 = t5818*t5821;
  t5826 = t5823*t5824;
  t5827 = t5822 + t5826;
  t5829 = t5823*t5818;
  t5830 = -1.*t5821*t5824;
  t5831 = t5829 + t5830;
  t5832 = Sin(var1[6]);
  t2096 = -1.*t1975;
  t2538 = 1. + t2096;
  t5811 = 0.4*t2538;
  t5815 = 0. + t5811;
  t5833 = -0.4*t5832;
  t5834 = 0. + t5833;
  t5844 = -1.*t5818*t5821;
  t5845 = -1.*t5823*t5824;
  t5846 = t5844 + t5845;
  p_output1[0]=0. + t5815*t5827 + 0.4*(t1975*t5827 + t5831*t5832) + t5831*t5834 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t5815*t5831 + t5834*t5846 + 0.4*(t1975*t5831 + t5832*t5846) + var1[1];
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
