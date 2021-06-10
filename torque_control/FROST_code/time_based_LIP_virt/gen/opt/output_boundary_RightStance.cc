/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:20 GMT-05:00
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
  double t89;
  double t105;
  double t85;
  double t110;
  double t31;
  double t90;
  double t114;
  double t118;
  double t122;
  double t123;
  double t135;
  double t139;
  double t60;
  double t65;
  double t152;
  double t165;
  double t187;
  double t324;
  double t329;
  double t336;
  double t337;
  double t344;
  double t401;
  double t445;
  double t457;
  double t466;
  double t475;
  double t402;
  double t429;
  double t596;
  double t598;
  double t599;
  double t654;
  double t655;
  double t665;
  double t609;
  double t611;
  double t613;
  double t617;
  double t639;
  double t439;
  double t482;
  double t501;
  double t503;
  double t517;
  double t199;
  double t237;
  double t239;
  double t250;
  double t254;
  double t282;
  double t289;
  double t314;
  double t346;
  double t364;
  double t523;
  double t524;
  t89 = Cos(var1[3]);
  t105 = Sin(var1[2]);
  t85 = Cos(var1[2]);
  t110 = Sin(var1[3]);
  t31 = Cos(var1[4]);
  t90 = t85*t89;
  t114 = -1.*t105*t110;
  t118 = t90 + t114;
  t122 = -1.*t89*t105;
  t123 = -1.*t85*t110;
  t135 = t122 + t123;
  t139 = Sin(var1[4]);
  t60 = -1.*t31;
  t65 = 1. + t60;
  t152 = t31*t118;
  t165 = t135*t139;
  t187 = t152 + t165;
  t324 = Cos(var1[5]);
  t329 = t85*t324;
  t336 = Sin(var1[5]);
  t337 = -1.*t105*t336;
  t344 = t329 + t337;
  t401 = Cos(var1[6]);
  t445 = -1.*t324*t105;
  t457 = -1.*t85*t336;
  t466 = t445 + t457;
  t475 = Sin(var1[6]);
  t402 = -1.*t401;
  t429 = 1. + t402;
  t596 = t324*t105;
  t598 = t85*t336;
  t599 = t596 + t598;
  t654 = t89*t105;
  t655 = t85*t110;
  t665 = t654 + t655;
  t609 = 0.4*t429*t599;
  t611 = -0.4*t344*t475;
  t613 = t401*t599;
  t617 = t344*t475;
  t639 = t613 + t617;
  t439 = 0.4*t429*t344;
  t482 = -0.4*t466*t475;
  t501 = t401*t344;
  t503 = t466*t475;
  t517 = t501 + t503;
  t199 = 0.24*t85;
  t237 = var1[1] + t199;
  t239 = 0.11*t118;
  t250 = var1[1] + t239;
  t254 = 0.4*t65*t118;
  t282 = -0.4*t135*t139;
  t289 = 0.64*t187;
  t314 = var1[1] + t254 + t282 + t289;
  t346 = 0.11*t344;
  t364 = var1[1] + t346;
  t523 = 0.64*t517;
  t524 = var1[1] + t439 + t482 + t523;
  p_output1[0]=var1[2];
  p_output1[1]=0.4*t135*t139 - 0.8*t187 + 0.03125*(12.*t237 + 6.8*t250 + 3.2*t314 + 6.8*t364 + 3.2*t524) - 0.4*t118*t65 - 1.*var1[1];
  p_output1[2]=t609 + t611 + 0.8*t639 + var1[0] + 0.03125*(-12.*(0.24*t105 + var1[0]) - 6.8*(0.11*t599 + var1[0]) - 3.2*(t609 + t611 + 0.64*t639 + var1[0]) - 6.8*(0.11*t665 + var1[0]) - 3.2*(-0.4*t118*t139 + 0.4*t65*t665 + 0.64*(t118*t139 + t31*t665) + var1[0]));
  p_output1[3]=t439 + t482 + 0.8*t517 + 0.03125*(-12.*t237 - 6.8*t250 - 3.2*t314 - 6.8*t364 - 3.2*t524) + var1[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "output_boundary_RightStance.hh"

namespace RightStance
{

void output_boundary_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
