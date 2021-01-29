/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:06:51 GMT-05:00
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
  double t750;
  double t665;
  double t690;
  double t785;
  double t356;
  double t735;
  double t903;
  double t995;
  double t1305;
  double t1341;
  double t1411;
  double t1415;
  double t360;
  double t412;
  double t573;
  double t585;
  double t1432;
  double t1573;
  double t1739;
  double t1759;
  double t1791;
  t750 = Cos(var1[2]);
  t665 = Cos(var1[5]);
  t690 = Sin(var1[2]);
  t785 = Sin(var1[5]);
  t356 = Cos(var1[6]);
  t735 = t665*t690;
  t903 = t750*t785;
  t995 = t735 + t903;
  t1305 = t750*t665;
  t1341 = -1.*t690*t785;
  t1411 = t1305 + t1341;
  t1415 = Sin(var1[6]);
  t360 = -1.*t356;
  t412 = 1. + t360;
  t573 = 0.4*t412;
  t585 = 0. + t573;
  t1432 = -0.4*t1415;
  t1573 = 0. + t1432;
  t1739 = -1.*t665*t690;
  t1759 = -1.*t750*t785;
  t1791 = t1739 + t1759;
  p_output1[0]=0. + t1411*t1573 + t585*t995 + 0.8*(t1411*t1415 + t356*t995) + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t1573*t1791 + 0.8*(t1415*t1791 + t1411*t356) + t1411*t585 + var1[1];
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

#include "p_LeftToe.hh"

namespace SymExpression
{

void p_LeftToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
