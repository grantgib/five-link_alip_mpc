/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:19:34 GMT-05:00
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
  double t2886;
  double t2902;
  double t2876;
  double t2908;
  double t354;
  double t2896;
  double t2911;
  double t2917;
  double t2930;
  double t2932;
  double t2961;
  double t2976;
  double t2847;
  double t2851;
  double t3072;
  double t3073;
  double t3074;
  double t2922;
  double t2994;
  double t2995;
  double t3004;
  double t3008;
  double t3033;
  double t3034;
  double t3037;
  double t3079;
  double t3082;
  double t3090;
  double t3091;
  double t3093;
  double t3095;
  double t3100;
  double t3105;
  double t3108;
  double t3143;
  double t3144;
  double t3145;
  double t3112;
  double t3113;
  double t3118;
  double t3119;
  double t3120;
  double t3121;
  double t3132;
  double t3133;
  double t3146;
  double t3147;
  double t3150;
  double t3153;
  double t3161;
  double t3162;
  double t3167;
  double t3168;
  double t3169;
  double t3170;
  double t3171;
  double t3172;
  double t3173;
  double t3174;
  t2886 = Cos(var1[3]);
  t2902 = Sin(var1[2]);
  t2876 = Cos(var1[2]);
  t2908 = Sin(var1[3]);
  t354 = Cos(var1[4]);
  t2896 = -1.*t2876*t2886;
  t2911 = t2902*t2908;
  t2917 = t2896 + t2911;
  t2930 = t2886*t2902;
  t2932 = t2876*t2908;
  t2961 = t2930 + t2932;
  t2976 = Sin(var1[4]);
  t2847 = -1.*t354;
  t2851 = 1. + t2847;
  t3072 = -1.*t2886*t2902;
  t3073 = -1.*t2876*t2908;
  t3074 = t3072 + t3073;
  t2922 = 0.4*t2851*t2917;
  t2994 = -0.4*t2961*t2976;
  t2995 = t354*t2917;
  t3004 = t2961*t2976;
  t3008 = t2995 + t3004;
  t3033 = 0.8*t3008;
  t3034 = t2922 + t2994 + t3033;
  t3037 = var2[2]*t3034;
  t3079 = 0.4*t2851*t3074;
  t3082 = -0.4*t2917*t2976;
  t3090 = t354*t3074;
  t3091 = t2917*t2976;
  t3093 = t3090 + t3091;
  t3095 = 0.8*t3093;
  t3100 = t3079 + t3082 + t3095;
  t3105 = var2[0]*t3100;
  t3108 = t3037 + t3105;
  t3143 = t2876*t2886;
  t3144 = -1.*t2902*t2908;
  t3145 = t3143 + t3144;
  t3112 = -0.4*t354*t2917;
  t3113 = 0.4*t3074*t2976;
  t3118 = -1.*t3074*t2976;
  t3119 = t2995 + t3118;
  t3120 = 0.8*t3119;
  t3121 = t3112 + t3113 + t3120;
  t3132 = var2[2]*t3121;
  t3133 = -0.4*t354*t3074;
  t3146 = 0.4*t3145*t2976;
  t3147 = -1.*t3145*t2976;
  t3150 = t3090 + t3147;
  t3153 = 0.8*t3150;
  t3161 = t3133 + t3146 + t3153;
  t3162 = var2[0]*t3161;
  t3167 = t3132 + t3162;
  t3168 = 0.4*t2851*t3145;
  t3169 = -0.4*t3074*t2976;
  t3170 = t354*t3145;
  t3171 = t3074*t2976;
  t3172 = t3170 + t3171;
  t3173 = 0.8*t3172;
  t3174 = t3168 + t3169 + t3173;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t3108;
  p_output1[3]=t3108;
  p_output1[4]=t3167;
  p_output1[5]=t3174;
  p_output1[6]=t3100;
  p_output1[7]=t3108;
  p_output1[8]=t3108;
  p_output1[9]=t3167;
  p_output1[10]=t3174;
  p_output1[11]=t3100;
  p_output1[12]=t3167;
  p_output1[13]=t3167;
  p_output1[14]=(t3146 + 0.4*t2961*t354 + 0.8*(t3147 - 1.*t2961*t354))*var2[0] + (t3113 + 0.4*t3145*t354 + 0.8*(t3118 - 1.*t3145*t354))*var2[2];
  p_output1[15]=0.4*t2961*t2976 + 0.8*(-1.*t2961*t2976 + t3170) - 0.4*t3145*t354;
  p_output1[16]=t3161;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightToe_vec_RightStance.hh"

namespace RightStance
{

void J_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
