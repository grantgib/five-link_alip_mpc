/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:48 GMT-05:00
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
  double t2019;
  double t834;
  double t1104;
  double t2089;
  double t340;
  double t1105;
  double t2112;
  double t2128;
  double t2214;
  double t2238;
  double t2240;
  double t2272;
  double t2339;
  double t2870;
  double t2897;
  double t2905;
  double t2973;
  double t2977;
  double t2939;
  double t2975;
  double t2978;
  double t2993;
  double t2998;
  double t3000;
  double t3225;
  double t3229;
  double t3246;
  double t3314;
  double t3318;
  double t3319;
  double t2847;
  double t2848;
  double t2849;
  double t2857;
  double t2908;
  double t2910;
  double t2924;
  double t2925;
  double t2926;
  double t2928;
  double t3273;
  double t3280;
  double t3283;
  double t3292;
  double t3328;
  double t3329;
  double t3330;
  double t3336;
  double t3342;
  double t3347;
  t2019 = Cos(var1[2]);
  t834 = Cos(var1[3]);
  t1104 = Sin(var1[2]);
  t2089 = Sin(var1[3]);
  t340 = Cos(var1[4]);
  t1105 = -1.*t834*t1104;
  t2112 = -1.*t2019*t2089;
  t2128 = t1105 + t2112;
  t2214 = t2019*t834;
  t2238 = -1.*t1104*t2089;
  t2240 = t2214 + t2238;
  t2272 = Sin(var1[4]);
  t2339 = t340*t2128;
  t2870 = -1.*t2019*t834;
  t2897 = t1104*t2089;
  t2905 = t2870 + t2897;
  t2973 = Cos(var1[5]);
  t2977 = Sin(var1[5]);
  t2939 = Cos(var1[6]);
  t2975 = -1.*t2973*t1104;
  t2978 = -1.*t2019*t2977;
  t2993 = t2975 + t2978;
  t2998 = t2019*t2973;
  t3000 = -1.*t1104*t2977;
  t3225 = t2998 + t3000;
  t3229 = Sin(var1[6]);
  t3246 = t2939*t2993;
  t3314 = -1.*t2019*t2973;
  t3318 = t1104*t2977;
  t3319 = t3314 + t3318;
  t2847 = 0.748*t2128;
  t2848 = -1.*t340;
  t2849 = 1. + t2848;
  t2857 = 0.4*t2849*t2128;
  t2908 = -0.4*t2905*t2272;
  t2910 = t2905*t2272;
  t2924 = t2339 + t2910;
  t2925 = 0.64*t2924;
  t2926 = t2857 + t2908 + t2925;
  t2928 = 3.2*t2926;
  t3273 = 0.748*t2993;
  t3280 = -1.*t2939;
  t3283 = 1. + t3280;
  t3292 = 0.4*t3283*t2993;
  t3328 = -0.4*t3319*t3229;
  t3329 = t3319*t3229;
  t3330 = t3246 + t3329;
  t3336 = 0.64*t3330;
  t3342 = t3292 + t3328 + t3336;
  t3347 = 3.2*t3342;
  p_output1[0]=var2[1] + 0.03125*(-2.88*t1104 + t2847 + t2928 + t3273 + t3347)*var2[2] + 0.03125*(t2847 + t2928)*var2[3] + 0.1*(0.4*t2240*t2272 + 0.64*(-1.*t2240*t2272 + t2339) - 0.4*t2128*t340)*var2[4] + 0.03125*(t3273 + t3347)*var2[5] + 0.1*(-0.4*t2939*t2993 + 0.4*t3225*t3229 + 0.64*(-1.*t3225*t3229 + t3246))*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "vel_com_z.hh"

namespace RightStance
{

void vel_com_z_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
