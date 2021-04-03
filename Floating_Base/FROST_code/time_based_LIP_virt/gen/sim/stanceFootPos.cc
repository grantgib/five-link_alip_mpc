/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:35:34 GMT-05:00
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
  double t5849;
  double t5846;
  double t5847;
  double t5851;
  double t5834;
  double t5848;
  double t5852;
  double t5853;
  double t5857;
  double t5858;
  double t5859;
  double t5860;
  double t5835;
  double t5841;
  double t5870;
  double t5871;
  double t5872;
  t5849 = Cos(var1[2]);
  t5846 = Cos(var1[3]);
  t5847 = Sin(var1[2]);
  t5851 = Sin(var1[3]);
  t5834 = Cos(var1[4]);
  t5848 = t5846*t5847;
  t5852 = t5849*t5851;
  t5853 = t5848 + t5852;
  t5857 = t5849*t5846;
  t5858 = -1.*t5847*t5851;
  t5859 = t5857 + t5858;
  t5860 = Sin(var1[4]);
  t5835 = -1.*t5834;
  t5841 = 1. + t5835;
  t5870 = -1.*t5846*t5847;
  t5871 = -1.*t5849*t5851;
  t5872 = t5870 + t5871;
  p_output1[0]=0.4*t5841*t5853 - 0.4*t5859*t5860 + 0.8*(t5834*t5853 + t5859*t5860) + var1[0];
  p_output1[1]=0;
  p_output1[2]=0.4*t5841*t5859 - 0.4*t5860*t5872 + 0.8*(t5834*t5859 + t5860*t5872) + var1[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "stanceFootPos.hh"

namespace SymExpression
{

void stanceFootPos_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
