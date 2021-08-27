/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:41 GMT-05:00
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
  double t1900;
  double t1914;
  double t1858;
  double t1926;
  double t1733;
  double t1907;
  double t1936;
  double t2078;
  double t2085;
  double t2093;
  double t2098;
  double t2099;
  double t2104;
  double t2243;
  double t2253;
  double t2270;
  double t2205;
  double t2207;
  double t2219;
  double t2271;
  double t2279;
  double t2284;
  double t2285;
  double t2298;
  double t2079;
  double t2101;
  double t2111;
  double t2123;
  double t2163;
  double t2193;
  double t2200;
  double t2300;
  double t2306;
  double t2315;
  double t2317;
  double t2322;
  double t2329;
  double t2445;
  double t2459;
  double t2477;
  double t2480;
  double t2481;
  double t2483;
  double t2495;
  t1900 = Cos(var1[5]);
  t1914 = Sin(var1[2]);
  t1858 = Cos(var1[2]);
  t1926 = Sin(var1[5]);
  t1733 = Cos(var1[6]);
  t1907 = -1.*t1858*t1900;
  t1936 = t1914*t1926;
  t2078 = t1907 + t1936;
  t2085 = -1.*t1900*t1914;
  t2093 = -1.*t1858*t1926;
  t2098 = t2085 + t2093;
  t2099 = Sin(var1[6]);
  t2104 = t1733*t2078;
  t2243 = t1900*t1914;
  t2253 = t1858*t1926;
  t2270 = t2243 + t2253;
  t2205 = -1.*t1733;
  t2207 = 1. + t2205;
  t2219 = 0.4*t2207*t2078;
  t2271 = -0.4*t2270*t2099;
  t2279 = t2270*t2099;
  t2284 = t2104 + t2279;
  t2285 = 0.8*t2284;
  t2298 = t2219 + t2271 + t2285;
  t2079 = -0.4*t1733*t2078;
  t2101 = 0.4*t2098*t2099;
  t2111 = -1.*t2098*t2099;
  t2123 = t2104 + t2111;
  t2163 = 0.8*t2123;
  t2193 = t2079 + t2101 + t2163;
  t2200 = var2[6]*t2193;
  t2300 = var2[2]*t2298;
  t2306 = var2[5]*t2298;
  t2315 = t2200 + t2300 + t2306;
  t2317 = t1858*t1900;
  t2322 = -1.*t1914*t1926;
  t2329 = t2317 + t2322;
  t2445 = 0.4*t2207*t2098;
  t2459 = -0.4*t2078*t2099;
  t2477 = t1733*t2098;
  t2480 = t2078*t2099;
  t2481 = t2477 + t2480;
  t2483 = 0.8*t2481;
  t2495 = t2445 + t2459 + t2483;
  p_output1[0]=t2315;
  p_output1[1]=t2315;
  p_output1[2]=t2193*var2[2] + t2193*var2[5] + (t2101 + 0.4*t1733*t2329 + 0.8*(t2111 - 1.*t1733*t2329))*var2[6];
  p_output1[3]=1.;
  p_output1[4]=t2495;
  p_output1[5]=t2495;
  p_output1[6]=-0.4*t1733*t2098 + 0.4*t2099*t2329 + 0.8*(-1.*t2099*t2329 + t2477);
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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

#include "J_vel_swing_z.hh"

namespace RightStance
{

void J_vel_swing_z_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
