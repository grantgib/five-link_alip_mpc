/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 21:08:59 GMT-04:00
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
  double t3019;
  double t3010;
  double t3011;
  double t3020;
  double t3009;
  double t3018;
  double t3021;
  double t3022;
  double t3024;
  double t3030;
  double t3031;
  double t3033;
  double t3035;
  double t3065;
  double t3066;
  double t3067;
  double t3050;
  double t3063;
  double t3064;
  double t3068;
  double t3069;
  double t3070;
  double t3071;
  double t3072;
  double t3023;
  double t3034;
  double t3036;
  double t3037;
  double t3047;
  double t3048;
  double t3049;
  double t3073;
  double t3074;
  double t3075;
  double t3078;
  double t3079;
  double t3080;
  double t3092;
  double t3093;
  double t3094;
  double t3095;
  double t3096;
  double t3097;
  double t3098;
  double t3107;
  double t3113;
  double t3114;
  double t3115;
  double t3116;
  double t3119;
  double t3120;
  double t3105;
  double t3106;
  double t3108;
  double t3109;
  double t3110;
  double t3111;
  double t3112;
  double t3121;
  double t3122;
  double t3125;
  t3019 = Cos(var1[2]);
  t3010 = Cos(var1[3]);
  t3011 = Sin(var1[2]);
  t3020 = Sin(var1[3]);
  t3009 = Cos(var1[4]);
  t3018 = -1.*t3010*t3011;
  t3021 = -1.*t3019*t3020;
  t3022 = t3018 + t3021;
  t3024 = t3019*t3010;
  t3030 = -1.*t3011*t3020;
  t3031 = t3024 + t3030;
  t3033 = Sin(var1[4]);
  t3035 = t3009*t3022;
  t3065 = -1.*t3019*t3010;
  t3066 = t3011*t3020;
  t3067 = t3065 + t3066;
  t3050 = -1.*t3009;
  t3063 = 1. + t3050;
  t3064 = 0.4*t3063*t3022;
  t3068 = -0.4*t3067*t3033;
  t3069 = t3067*t3033;
  t3070 = t3035 + t3069;
  t3071 = 0.8*t3070;
  t3072 = t3064 + t3068 + t3071;
  t3023 = -0.4*t3009*t3022;
  t3034 = 0.4*t3031*t3033;
  t3036 = -1.*t3031*t3033;
  t3037 = t3035 + t3036;
  t3047 = 0.8*t3037;
  t3048 = t3023 + t3034 + t3047;
  t3049 = var2[4]*t3048;
  t3073 = var2[2]*t3072;
  t3074 = var2[3]*t3072;
  t3075 = t3049 + t3073 + t3074;
  t3078 = t3010*t3011;
  t3079 = t3019*t3020;
  t3080 = t3078 + t3079;
  t3092 = 0.4*t3063*t3031;
  t3093 = -0.4*t3022*t3033;
  t3094 = t3009*t3031;
  t3095 = t3022*t3033;
  t3096 = t3094 + t3095;
  t3097 = 0.8*t3096;
  t3098 = t3092 + t3093 + t3097;
  t3107 = t3009*t3067;
  t3113 = 0.4*t3063*t3067;
  t3114 = -0.4*t3080*t3033;
  t3115 = t3080*t3033;
  t3116 = t3107 + t3115;
  t3119 = 0.8*t3116;
  t3120 = t3113 + t3114 + t3119;
  t3105 = -0.4*t3009*t3067;
  t3106 = 0.4*t3022*t3033;
  t3108 = -1.*t3022*t3033;
  t3109 = t3107 + t3108;
  t3110 = 0.8*t3109;
  t3111 = t3105 + t3106 + t3110;
  t3112 = var2[4]*t3111;
  t3121 = var2[2]*t3120;
  t3122 = var2[3]*t3120;
  t3125 = t3112 + t3121 + t3122;
  p_output1[0]=t3075;
  p_output1[1]=t3075;
  p_output1[2]=t3048*var2[2] + t3048*var2[3] + (t3034 + 0.4*t3009*t3080 + 0.8*(t3036 - 1.*t3009*t3080))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t3098;
  p_output1[5]=t3098;
  p_output1[6]=-0.4*t3009*t3031 + 0.4*t3033*t3080 + 0.8*(-1.*t3033*t3080 + t3094);
  p_output1[7]=t3125;
  p_output1[8]=t3125;
  p_output1[9]=t3111*var2[2] + t3111*var2[3] + (0.4*t3009*t3031 + t3106 + 0.8*(-1.*t3009*t3031 + t3108))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t3072;
  p_output1[12]=t3072;
  p_output1[13]=t3048;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RightToe_RightStance.hh"

namespace RightStance
{

void J_dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
