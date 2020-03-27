/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:55:01 GMT-04:00
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
  double t1036;
  double t1008;
  double t1014;
  double t1059;
  double t514;
  double t1023;
  double t1073;
  double t1087;
  double t1100;
  double t1147;
  double t1351;
  double t1353;
  double t951;
  double t990;
  double t1090;
  double t1404;
  double t1407;
  double t1743;
  double t3080;
  double t3678;
  double t4092;
  double t4153;
  double t4298;
  double t4329;
  t1036 = Cos(var1[2]);
  t1008 = Cos(var1[5]);
  t1014 = Sin(var1[2]);
  t1059 = Sin(var1[5]);
  t514 = Cos(var1[6]);
  t1023 = -1.*t1008*t1014;
  t1073 = -1.*t1036*t1059;
  t1087 = t1023 + t1073;
  t1100 = -1.*t1036*t1008;
  t1147 = t1014*t1059;
  t1351 = t1100 + t1147;
  t1353 = Sin(var1[6]);
  t951 = -1.*t514;
  t990 = 1. + t951;
  t1090 = 0.4*t990*t1087;
  t1404 = -0.4*t1351*t1353;
  t1407 = t514*t1087;
  t1743 = t1351*t1353;
  t3080 = t1407 + t1743;
  t3678 = 0.8*t3080;
  t4092 = t1090 + t1404 + t3678;
  t4153 = t1036*t1008;
  t4298 = -1.*t1014*t1059;
  t4329 = t4153 + t4298;
  p_output1[0]=1.;
  p_output1[1]=t4092;
  p_output1[2]=t4092;
  p_output1[3]=0.4*t1353*t4329 + 0.8*(t1407 - 1.*t1353*t4329) - 0.4*t1087*t514;
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

#include "J_swing_foot_height.hh"

namespace RightStance
{

void J_swing_foot_height_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
