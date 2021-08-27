/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:14 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t7;
  double t155;
  double t258;
  double t491;
  double t543;
  double t593;
  double t594;
  double t648;
  double t778;
  double t1163;
  double t1319;
  double t1721;
  double t2170;
  double t2271;
  double t2293;
  double t2369;
  double t2387;
  double t2459;
  double t2761;
  double t2768;
  double t2827;
  double t2849;
  double t639;
  double t692;
  double t734;
  double t777;
  double t1871;
  double t1897;
  double t1958;
  double t1964;
  double t2105;
  double t2121;
  double t2145;
  double t3599;
  double t3609;
  double t3612;
  double t2388;
  double t2592;
  double t2682;
  double t2740;
  double t3201;
  double t3339;
  double t3439;
  double t3458;
  double t3466;
  double t3492;
  double t3494;
  double t3780;
  double t3818;
  double t3821;
  t7 = Sin(var1[2]);
  t155 = Cos(var1[3]);
  t258 = -1.*t155*t7;
  t491 = Cos(var1[2]);
  t543 = Sin(var1[3]);
  t593 = -1.*t491*t543;
  t594 = t258 + t593;
  t648 = Cos(var1[4]);
  t778 = -1.*t491*t155;
  t1163 = t7*t543;
  t1319 = t778 + t1163;
  t1721 = Sin(var1[4]);
  t2170 = Cos(var1[5]);
  t2271 = -1.*t2170*t7;
  t2293 = Sin(var1[5]);
  t2369 = -1.*t491*t2293;
  t2387 = t2271 + t2369;
  t2459 = Cos(var1[6]);
  t2761 = -1.*t491*t2170;
  t2768 = t7*t2293;
  t2827 = t2761 + t2768;
  t2849 = Sin(var1[6]);
  t639 = -7.33788*t594;
  t692 = -1.*t648;
  t734 = 1. + t692;
  t777 = 0.4*t734*t594;
  t1871 = -0.4*t1319*t1721;
  t1897 = t648*t594;
  t1958 = t1319*t1721;
  t1964 = t1897 + t1958;
  t2105 = 0.64*t1964;
  t2121 = t777 + t1871 + t2105;
  t2145 = -31.392000000000003*t2121;
  t3599 = t491*t155;
  t3609 = -1.*t7*t543;
  t3612 = t3599 + t3609;
  t2388 = -7.33788*t2387;
  t2592 = -1.*t2459;
  t2682 = 1. + t2592;
  t2740 = 0.4*t2682*t2387;
  t3201 = -0.4*t2827*t2849;
  t3339 = t2459*t2387;
  t3439 = t2827*t2849;
  t3458 = t3339 + t3439;
  t3466 = 0.64*t3458;
  t3492 = t2740 + t3201 + t3466;
  t3494 = -31.392000000000003*t3492;
  t3780 = t491*t2170;
  t3818 = -1.*t7*t2293;
  t3821 = t3780 + t3818;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=t2145 + t2388 + t3494 + t639 + 28.252799999999997*t7;
  p_output1[3]=t2145 + t639;
  p_output1[4]=-31.392000000000003*(0.4*t1721*t3612 + 0.64*(t1897 - 1.*t1721*t3612) - 0.4*t594*t648);
  p_output1[5]=t2388 + t3494;
  p_output1[6]=-31.392000000000003*(-0.4*t2387*t2459 + 0.4*t2849*t3821 + 0.64*(t3339 - 1.*t2849*t3821));
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_five_link_walker.hh"

namespace RightStance
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
