/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 12:05:22 GMT-05:00
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
  double t2308;
  double t2171;
  double t2216;
  double t2448;
  double t738;
  double t2251;
  double t2577;
  double t2589;
  double t2759;
  double t2856;
  double t2871;
  double t2911;
  double t757;
  double t803;
  double t2160;
  double t2161;
  double t3006;
  double t3010;
  double t3381;
  double t3431;
  double t3684;
  t2308 = Cos(var1[2]);
  t2171 = Cos(var1[5]);
  t2216 = Sin(var1[2]);
  t2448 = Sin(var1[5]);
  t738 = Cos(var1[6]);
  t2251 = t2171*t2216;
  t2577 = t2308*t2448;
  t2589 = t2251 + t2577;
  t2759 = t2308*t2171;
  t2856 = -1.*t2216*t2448;
  t2871 = t2759 + t2856;
  t2911 = Sin(var1[6]);
  t757 = -1.*t738;
  t803 = 1. + t757;
  t2160 = 0.4*t803;
  t2161 = 0. + t2160;
  t3006 = -0.4*t2911;
  t3010 = 0. + t3006;
  t3381 = -1.*t2171*t2216;
  t3431 = -1.*t2308*t2448;
  t3684 = t3381 + t3431;
  p_output1[0]=0. + t2161*t2589 + t2871*t3010 + 0.4*(t2871*t2911 + t2589*t738) + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t2161*t2871 + t3010*t3684 + 0.4*(t2911*t3684 + t2871*t738) + var1[1];
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
