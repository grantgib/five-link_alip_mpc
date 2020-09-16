/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 21:08:57 GMT-04:00
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
  double t2966;
  double t2986;
  double t2960;
  double t2990;
  double t2949;
  double t2967;
  double t2991;
  double t2992;
  double t2994;
  double t2995;
  double t2996;
  double t2997;
  double t2958;
  double t2959;
  double t2993;
  double t2998;
  double t3004;
  double t3005;
  double t3006;
  double t3007;
  double t3008;
  double t3012;
  double t3016;
  double t3017;
  double t3032;
  double t3039;
  double t3040;
  double t3041;
  double t3038;
  double t3042;
  double t3043;
  double t3044;
  double t3045;
  double t3046;
  t2966 = Cos(var1[3]);
  t2986 = Sin(var1[2]);
  t2960 = Cos(var1[2]);
  t2990 = Sin(var1[3]);
  t2949 = Cos(var1[4]);
  t2967 = t2960*t2966;
  t2991 = -1.*t2986*t2990;
  t2992 = t2967 + t2991;
  t2994 = -1.*t2966*t2986;
  t2995 = -1.*t2960*t2990;
  t2996 = t2994 + t2995;
  t2997 = Sin(var1[4]);
  t2958 = -1.*t2949;
  t2959 = 1. + t2958;
  t2993 = 0.4*t2959*t2992;
  t2998 = -0.4*t2996*t2997;
  t3004 = t2949*t2992;
  t3005 = t2996*t2997;
  t3006 = t3004 + t3005;
  t3007 = 0.8*t3006;
  t3008 = t2993 + t2998 + t3007;
  t3012 = t2966*t2986;
  t3016 = t2960*t2990;
  t3017 = t3012 + t3016;
  t3032 = t2949*t2996;
  t3039 = -1.*t2960*t2966;
  t3040 = t2986*t2990;
  t3041 = t3039 + t3040;
  t3038 = 0.4*t2959*t2996;
  t3042 = -0.4*t3041*t2997;
  t3043 = t3041*t2997;
  t3044 = t3032 + t3043;
  t3045 = 0.8*t3044;
  t3046 = t3038 + t3042 + t3045;
  p_output1[0]=var2[0] + t3008*var2[2] + t3008*var2[3] + (-0.4*t2949*t2992 + 0.4*t2997*t3017 + 0.8*(t3004 - 1.*t2997*t3017))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t3046*var2[2] + t3046*var2[3] + (-0.4*t2949*t2996 + 0.4*t2992*t2997 + 0.8*(-1.*t2992*t2997 + t3032))*var2[4];
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
