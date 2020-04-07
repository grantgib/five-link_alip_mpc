/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:03:58 GMT-04:00
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
  double t970;
  double t862;
  double t917;
  double t1067;
  double t383;
  double t918;
  double t1068;
  double t1156;
  double t1192;
  double t1499;
  double t1547;
  double t1575;
  double t420;
  double t683;
  double t1158;
  double t1604;
  double t1613;
  double t1741;
  double t1754;
  double t1765;
  double t1774;
  double t1838;
  double t1844;
  double t1855;
  t970 = Cos(var1[2]);
  t862 = Cos(var1[5]);
  t917 = Sin(var1[2]);
  t1067 = Sin(var1[5]);
  t383 = Cos(var1[6]);
  t918 = -1.*t862*t917;
  t1068 = -1.*t970*t1067;
  t1156 = t918 + t1068;
  t1192 = -1.*t970*t862;
  t1499 = t917*t1067;
  t1547 = t1192 + t1499;
  t1575 = Sin(var1[6]);
  t420 = -1.*t383;
  t683 = 1. + t420;
  t1158 = 0.4*t683*t1156;
  t1604 = -0.4*t1547*t1575;
  t1613 = t383*t1156;
  t1741 = t1547*t1575;
  t1754 = t1613 + t1741;
  t1765 = 0.8*t1754;
  t1774 = t1158 + t1604 + t1765;
  t1838 = t970*t862;
  t1844 = -1.*t917*t1067;
  t1855 = t1838 + t1844;
  p_output1[0]=1.;
  p_output1[1]=t1774;
  p_output1[2]=t1774;
  p_output1[3]=0.4*t1575*t1855 + 0.8*(t1613 - 1.*t1575*t1855) - 0.4*t1156*t383;
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
