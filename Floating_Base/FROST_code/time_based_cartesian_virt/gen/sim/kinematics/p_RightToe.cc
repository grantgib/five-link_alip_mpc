/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:27:29 GMT-05:00
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
  double t651;
  double t647;
  double t648;
  double t652;
  double t637;
  double t650;
  double t655;
  double t656;
  double t658;
  double t659;
  double t660;
  double t661;
  double t638;
  double t642;
  double t645;
  double t646;
  double t662;
  double t665;
  double t673;
  double t674;
  double t675;
  t651 = Cos(var1[2]);
  t647 = Cos(var1[3]);
  t648 = Sin(var1[2]);
  t652 = Sin(var1[3]);
  t637 = Cos(var1[4]);
  t650 = t647*t648;
  t655 = t651*t652;
  t656 = t650 + t655;
  t658 = t651*t647;
  t659 = -1.*t648*t652;
  t660 = t658 + t659;
  t661 = Sin(var1[4]);
  t638 = -1.*t637;
  t642 = 1. + t638;
  t645 = 0.4*t642;
  t646 = 0. + t645;
  t662 = -0.4*t661;
  t665 = 0. + t662;
  t673 = -1.*t647*t648;
  t674 = -1.*t651*t652;
  t675 = t673 + t674;
  p_output1[0]=0. + t646*t656 + 0.8*(t637*t656 + t660*t661) + t660*t665 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t646*t660 + t665*t675 + 0.8*(t637*t660 + t661*t675) + var1[1];
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
