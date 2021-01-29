/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:27:19 GMT-05:00
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
  double t584;
  double t596;
  double t583;
  double t597;
  double t577;
  double t585;
  double t598;
  double t599;
  double t601;
  double t602;
  double t603;
  double t604;
  double t581;
  double t582;
  double t613;
  double t614;
  double t615;
  double t600;
  double t605;
  double t606;
  double t607;
  double t608;
  double t609;
  double t610;
  double t611;
  double t612;
  double t616;
  double t617;
  double t618;
  double t619;
  double t620;
  double t621;
  double t622;
  double t623;
  double t625;
  double t626;
  double t627;
  t584 = Cos(var1[3]);
  t596 = Sin(var1[2]);
  t583 = Cos(var1[2]);
  t597 = Sin(var1[3]);
  t577 = Cos(var1[4]);
  t585 = t583*t584;
  t598 = -1.*t596*t597;
  t599 = t585 + t598;
  t601 = -1.*t584*t596;
  t602 = -1.*t583*t597;
  t603 = t601 + t602;
  t604 = Sin(var1[4]);
  t581 = -1.*t577;
  t582 = 1. + t581;
  t613 = -1.*t583*t584;
  t614 = t596*t597;
  t615 = t613 + t614;
  t600 = 0.4*t582*t599;
  t605 = -0.4*t603*t604;
  t606 = t577*t599;
  t607 = t603*t604;
  t608 = t606 + t607;
  t609 = 0.8*t608;
  t610 = t600 + t605 + t609;
  t611 = var2[0]*t610;
  t612 = 0.4*t582*t603;
  t616 = -0.4*t615*t604;
  t617 = t577*t603;
  t618 = t615*t604;
  t619 = t617 + t618;
  t620 = 0.8*t619;
  t621 = t612 + t616 + t620;
  t622 = var2[2]*t621;
  t623 = t611 + t622;
  t625 = t584*t596;
  t626 = t583*t597;
  t627 = t625 + t626;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t623;
  p_output1[3]=t623;
  p_output1[4]=(-0.4*t577*t599 + 0.4*t604*t627 + 0.8*(t606 - 1.*t604*t627))*var2[0] + (-0.4*t577*t603 + 0.4*t599*t604 + 0.8*(-1.*t599*t604 + t617))*var2[2];
  p_output1[5]=0;
  p_output1[6]=0;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "fRightToe_vec_RightImpact.hh"

namespace SymFunction
{

void fRightToe_vec_RightImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
