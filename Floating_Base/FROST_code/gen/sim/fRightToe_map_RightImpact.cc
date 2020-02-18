/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:21:26 GMT-05:00
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
  double t435;
  double t437;
  double t434;
  double t438;
  double t428;
  double t436;
  double t439;
  double t440;
  double t442;
  double t443;
  double t444;
  double t445;
  double t432;
  double t433;
  double t441;
  double t446;
  double t447;
  double t448;
  double t449;
  double t450;
  double t451;
  double t453;
  double t454;
  double t455;
  double t462;
  double t463;
  double t464;
  double t461;
  double t465;
  double t466;
  double t467;
  double t468;
  double t469;
  double t470;
  t435 = Cos(var1[3]);
  t437 = Sin(var1[2]);
  t434 = Cos(var1[2]);
  t438 = Sin(var1[3]);
  t428 = Cos(var1[4]);
  t436 = t434*t435;
  t439 = -1.*t437*t438;
  t440 = t436 + t439;
  t442 = -1.*t435*t437;
  t443 = -1.*t434*t438;
  t444 = t442 + t443;
  t445 = Sin(var1[4]);
  t432 = -1.*t428;
  t433 = 1. + t432;
  t441 = 0.4*t433*t440;
  t446 = -0.4*t444*t445;
  t447 = t428*t440;
  t448 = t444*t445;
  t449 = t447 + t448;
  t450 = 0.8*t449;
  t451 = t441 + t446 + t450;
  t453 = t435*t437;
  t454 = t434*t438;
  t455 = t453 + t454;
  t462 = -1.*t434*t435;
  t463 = t437*t438;
  t464 = t462 + t463;
  t461 = 0.4*t433*t444;
  t465 = -0.4*t464*t445;
  t466 = t428*t444;
  t467 = t464*t445;
  t468 = t466 + t467;
  t469 = 0.8*t468;
  t470 = t461 + t465 + t469;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t451;
  p_output1[3]=t451;
  p_output1[4]=-0.4*t428*t440 + 0.4*t445*t455 + 0.8*(t447 - 1.*t445*t455);
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=1.;
  p_output1[16]=t470;
  p_output1[17]=t470;
  p_output1[18]=-0.4*t428*t444 + 0.4*t440*t445 + 0.8*(-1.*t440*t445 + t466);
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_map_RightImpact.hh"

namespace SymFunction
{

void fRightToe_map_RightImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
