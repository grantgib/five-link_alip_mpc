/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:29 GMT-05:00
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
  double t988;
  double t983;
  double t984;
  double t989;
  double t857;
  double t987;
  double t1004;
  double t1005;
  double t1007;
  double t1013;
  double t1014;
  double t1015;
  double t868;
  double t906;
  double t1006;
  double t1016;
  double t1026;
  double t1028;
  double t1045;
  double t1107;
  double t1109;
  double t1111;
  double t1119;
  double t1159;
  t988 = Cos(var1[2]);
  t983 = Cos(var1[5]);
  t984 = Sin(var1[2]);
  t989 = Sin(var1[5]);
  t857 = Cos(var1[6]);
  t987 = -1.*t983*t984;
  t1004 = -1.*t988*t989;
  t1005 = t987 + t1004;
  t1007 = -1.*t988*t983;
  t1013 = t984*t989;
  t1014 = t1007 + t1013;
  t1015 = Sin(var1[6]);
  t868 = -1.*t857;
  t906 = 1. + t868;
  t1006 = 0.4*t906*t1005;
  t1016 = -0.4*t1014*t1015;
  t1026 = t857*t1005;
  t1028 = t1014*t1015;
  t1045 = t1026 + t1028;
  t1107 = 0.8*t1045;
  t1109 = t1006 + t1016 + t1107;
  t1111 = t988*t983;
  t1119 = -1.*t984*t989;
  t1159 = t1111 + t1119;
  p_output1[0]=1.;
  p_output1[1]=t1109;
  p_output1[2]=t1109;
  p_output1[3]=0.4*t1015*t1159 + 0.8*(t1026 - 1.*t1015*t1159) - 0.4*t1005*t857;
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
