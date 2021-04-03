/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:32 GMT-05:00
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
  double t1775;
  double t1856;
  double t1380;
  double t2060;
  double t559;
  double t1845;
  double t2089;
  double t2295;
  double t2424;
  double t2443;
  double t2449;
  double t2487;
  double t889;
  double t1241;
  double t2332;
  double t2493;
  double t2506;
  double t2575;
  double t2576;
  double t2748;
  double t2753;
  double t2826;
  double t2834;
  double t2843;
  double t2891;
  double t2923;
  double t2927;
  double t2932;
  double t2921;
  double t2934;
  double t2937;
  double t2966;
  double t2979;
  double t2991;
  t1775 = Cos(var1[3]);
  t1856 = Sin(var1[2]);
  t1380 = Cos(var1[2]);
  t2060 = Sin(var1[3]);
  t559 = Cos(var1[4]);
  t1845 = t1380*t1775;
  t2089 = -1.*t1856*t2060;
  t2295 = t1845 + t2089;
  t2424 = -1.*t1775*t1856;
  t2443 = -1.*t1380*t2060;
  t2449 = t2424 + t2443;
  t2487 = Sin(var1[4]);
  t889 = -1.*t559;
  t1241 = 1. + t889;
  t2332 = 0.4*t1241*t2295;
  t2493 = -0.4*t2449*t2487;
  t2506 = t559*t2295;
  t2575 = t2449*t2487;
  t2576 = t2506 + t2575;
  t2748 = 0.8*t2576;
  t2753 = t2332 + t2493 + t2748;
  t2826 = t1775*t1856;
  t2834 = t1380*t2060;
  t2843 = t2826 + t2834;
  t2891 = t559*t2449;
  t2923 = -1.*t1380*t1775;
  t2927 = t1856*t2060;
  t2932 = t2923 + t2927;
  t2921 = 0.4*t1241*t2449;
  t2934 = -0.4*t2932*t2487;
  t2937 = t2932*t2487;
  t2966 = t2891 + t2937;
  t2979 = 0.8*t2966;
  t2991 = t2921 + t2934 + t2979;
  p_output1[0]=var2[0] + t2753*var2[2] + t2753*var2[3] + (0.4*t2487*t2843 + 0.8*(t2506 - 1.*t2487*t2843) - 0.4*t2295*t559)*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t2991*var2[2] + t2991*var2[3] + (0.4*t2295*t2487 + 0.8*(-1.*t2295*t2487 + t2891) - 0.4*t2449*t559)*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightToe_RightStance.hh"

namespace RightStance
{

void dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
