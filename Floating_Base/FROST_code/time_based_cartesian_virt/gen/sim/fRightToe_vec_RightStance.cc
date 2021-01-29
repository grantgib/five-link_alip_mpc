/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:27:16 GMT-05:00
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
  double t513;
  double t525;
  double t512;
  double t526;
  double t506;
  double t514;
  double t527;
  double t528;
  double t530;
  double t531;
  double t532;
  double t533;
  double t510;
  double t511;
  double t542;
  double t543;
  double t544;
  double t529;
  double t534;
  double t535;
  double t536;
  double t537;
  double t538;
  double t539;
  double t540;
  double t541;
  double t545;
  double t546;
  double t547;
  double t548;
  double t549;
  double t550;
  double t551;
  double t552;
  double t554;
  double t555;
  double t556;
  t513 = Cos(var1[3]);
  t525 = Sin(var1[2]);
  t512 = Cos(var1[2]);
  t526 = Sin(var1[3]);
  t506 = Cos(var1[4]);
  t514 = t512*t513;
  t527 = -1.*t525*t526;
  t528 = t514 + t527;
  t530 = -1.*t513*t525;
  t531 = -1.*t512*t526;
  t532 = t530 + t531;
  t533 = Sin(var1[4]);
  t510 = -1.*t506;
  t511 = 1. + t510;
  t542 = -1.*t512*t513;
  t543 = t525*t526;
  t544 = t542 + t543;
  t529 = 0.4*t511*t528;
  t534 = -0.4*t532*t533;
  t535 = t506*t528;
  t536 = t532*t533;
  t537 = t535 + t536;
  t538 = 0.8*t537;
  t539 = t529 + t534 + t538;
  t540 = var2[0]*t539;
  t541 = 0.4*t511*t532;
  t545 = -0.4*t544*t533;
  t546 = t506*t532;
  t547 = t544*t533;
  t548 = t546 + t547;
  t549 = 0.8*t548;
  t550 = t541 + t545 + t549;
  t551 = var2[2]*t550;
  t552 = t540 + t551;
  t554 = t513*t525;
  t555 = t512*t526;
  t556 = t554 + t555;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t552;
  p_output1[3]=t552;
  p_output1[4]=(-0.4*t506*t528 + 0.4*t533*t556 + 0.8*(t535 - 1.*t533*t556))*var2[0] + (-0.4*t506*t532 + 0.4*t528*t533 + 0.8*(-1.*t528*t533 + t546))*var2[2];
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

#include "fRightToe_vec_RightStance.hh"

namespace SymFunction
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
