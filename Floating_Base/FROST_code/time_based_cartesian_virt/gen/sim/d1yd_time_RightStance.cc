/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:27:03 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t410;
  double t416;
  double t420;
  double t431;
  double t433;
  double t437;
  double t438;
  double t439;
  double t440;
  double t441;
  double t444;
  double t445;
  double t446;
  double t449;
  double t450;
  double t453;
  t410 = -1.*var3[1];
  t416 = var3[0] + t410;
  t420 = Power(t416,-5);
  t431 = t410 + var1[0];
  t433 = Power(t431,4);
  t437 = Power(t416,-4);
  t438 = Power(t431,3);
  t439 = 1/t416;
  t440 = -1.*t439*t431;
  t441 = 1. + t440;
  t444 = Power(t416,-3);
  t445 = Power(t431,2);
  t446 = Power(t441,2);
  t449 = Power(t416,-2);
  t450 = Power(t441,3);
  t453 = Power(t441,4);
  p_output1[0]=-5.*t439*t453*var2[0] - 20.*t431*t449*t450*var2[4] + 5.*t439*t453*var2[4] - 30.*t444*t445*t446*var2[8] + 20.*t431*t449*t450*var2[8] - 20.*t437*t438*t441*var2[12] + 30.*t444*t445*t446*var2[12] - 5.*t420*t433*var2[16] + 20.*t437*t438*t441*var2[16] + 5.*t420*t433*var2[20];
  p_output1[1]=-5.*t439*t453*var2[1] - 20.*t431*t449*t450*var2[5] + 5.*t439*t453*var2[5] - 30.*t444*t445*t446*var2[9] + 20.*t431*t449*t450*var2[9] - 20.*t437*t438*t441*var2[13] + 30.*t444*t445*t446*var2[13] - 5.*t420*t433*var2[17] + 20.*t437*t438*t441*var2[17] + 5.*t420*t433*var2[21];
  p_output1[2]=-5.*t439*t453*var2[2] - 20.*t431*t449*t450*var2[6] + 5.*t439*t453*var2[6] - 30.*t444*t445*t446*var2[10] + 20.*t431*t449*t450*var2[10] - 20.*t437*t438*t441*var2[14] + 30.*t444*t445*t446*var2[14] - 5.*t420*t433*var2[18] + 20.*t437*t438*t441*var2[18] + 5.*t420*t433*var2[22];
  p_output1[3]=-5.*t439*t453*var2[3] - 20.*t431*t449*t450*var2[7] + 5.*t439*t453*var2[7] - 30.*t444*t445*t446*var2[11] + 20.*t431*t449*t450*var2[11] - 20.*t437*t438*t441*var2[15] + 30.*t444*t445*t446*var2[15] - 5.*t420*t433*var2[19] + 20.*t437*t438*t441*var2[19] + 5.*t420*t433*var2[23];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "d1yd_time_RightStance.hh"

namespace SymFunction
{

void d1yd_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
