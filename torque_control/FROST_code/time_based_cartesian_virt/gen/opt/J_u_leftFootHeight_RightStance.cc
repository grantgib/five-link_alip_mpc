/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:16:33 GMT-05:00
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
  double t6922;
  double t1560;
  double t3748;
  double t6976;
  double t1323;
  double t6872;
  double t6979;
  double t7002;
  double t7029;
  double t7034;
  double t7068;
  double t7076;
  double t1346;
  double t1379;
  double t7013;
  double t7099;
  double t7107;
  double t7108;
  double t7116;
  double t7125;
  double t7128;
  double t7161;
  double t7162;
  double t7163;
  t6922 = Cos(var1[2]);
  t1560 = Cos(var1[5]);
  t3748 = Sin(var1[2]);
  t6976 = Sin(var1[5]);
  t1323 = Cos(var1[6]);
  t6872 = -1.*t1560*t3748;
  t6979 = -1.*t6922*t6976;
  t7002 = t6872 + t6979;
  t7029 = -1.*t6922*t1560;
  t7034 = t3748*t6976;
  t7068 = t7029 + t7034;
  t7076 = Sin(var1[6]);
  t1346 = -1.*t1323;
  t1379 = 1. + t1346;
  t7013 = 0.4*t1379*t7002;
  t7099 = -0.4*t7068*t7076;
  t7107 = t1323*t7002;
  t7108 = t7068*t7076;
  t7116 = t7107 + t7108;
  t7125 = 0.8*t7116;
  t7128 = t7013 + t7099 + t7125;
  t7161 = t6922*t1560;
  t7162 = -1.*t3748*t6976;
  t7163 = t7161 + t7162;
  p_output1[0]=1.;
  p_output1[1]=t7128;
  p_output1[2]=t7128;
  p_output1[3]=-0.4*t1323*t7002 + 0.4*t7076*t7163 + 0.8*(t7107 - 1.*t7076*t7163);
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

#include "J_u_leftFootHeight_RightStance.hh"

namespace RightStance
{

void J_u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
