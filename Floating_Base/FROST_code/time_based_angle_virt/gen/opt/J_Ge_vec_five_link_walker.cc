/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:19:29 GMT-05:00
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
  double t293;
  double t2825;
  double t2827;
  double t2832;
  double t2844;
  double t2847;
  double t2848;
  double t2854;
  double t2876;
  double t2886;
  double t2889;
  double t2890;
  double t2913;
  double t2914;
  double t2915;
  double t2917;
  double t2918;
  double t2923;
  double t2930;
  double t2932;
  double t2933;
  double t2934;
  double t2851;
  double t2862;
  double t2870;
  double t2871;
  double t2893;
  double t2896;
  double t2902;
  double t2903;
  double t2907;
  double t2908;
  double t2911;
  double t3015;
  double t3019;
  double t3020;
  double t2922;
  double t2926;
  double t2928;
  double t2929;
  double t2941;
  double t2961;
  double t2976;
  double t2984;
  double t2988;
  double t2994;
  double t2995;
  double t3042;
  double t3047;
  double t3048;
  double t3008;
  double t3014;
  double t3022;
  double t3024;
  double t3029;
  double t3030;
  double t3033;
  double t3034;
  double t3074;
  double t3075;
  double t3076;
  double t3037;
  double t3041;
  double t3049;
  double t3050;
  double t3061;
  double t3062;
  double t3072;
  double t3073;
  double t3100;
  double t3101;
  double t3104;
  t293 = Cos(var1[2]);
  t2825 = Cos(var1[3]);
  t2827 = -1.*t293*t2825;
  t2832 = Sin(var1[2]);
  t2844 = Sin(var1[3]);
  t2847 = t2832*t2844;
  t2848 = t2827 + t2847;
  t2854 = Cos(var1[4]);
  t2876 = t2825*t2832;
  t2886 = t293*t2844;
  t2889 = t2876 + t2886;
  t2890 = Sin(var1[4]);
  t2913 = Cos(var1[5]);
  t2914 = -1.*t293*t2913;
  t2915 = Sin(var1[5]);
  t2917 = t2832*t2915;
  t2918 = t2914 + t2917;
  t2923 = Cos(var1[6]);
  t2930 = t2913*t2832;
  t2932 = t293*t2915;
  t2933 = t2930 + t2932;
  t2934 = Sin(var1[6]);
  t2851 = -7.33788*t2848;
  t2862 = -1.*t2854;
  t2870 = 1. + t2862;
  t2871 = 0.4*t2870*t2848;
  t2893 = -0.4*t2889*t2890;
  t2896 = t2854*t2848;
  t2902 = t2889*t2890;
  t2903 = t2896 + t2902;
  t2907 = 0.64*t2903;
  t2908 = t2871 + t2893 + t2907;
  t2911 = -31.392000000000003*t2908;
  t3015 = -1.*t2825*t2832;
  t3019 = -1.*t293*t2844;
  t3020 = t3015 + t3019;
  t2922 = -7.33788*t2918;
  t2926 = -1.*t2923;
  t2928 = 1. + t2926;
  t2929 = 0.4*t2928*t2918;
  t2941 = -0.4*t2933*t2934;
  t2961 = t2923*t2918;
  t2976 = t2933*t2934;
  t2984 = t2961 + t2976;
  t2988 = 0.64*t2984;
  t2994 = t2929 + t2941 + t2988;
  t2995 = -31.392000000000003*t2994;
  t3042 = -1.*t2913*t2832;
  t3047 = -1.*t293*t2915;
  t3048 = t3042 + t3047;
  t3008 = t2851 + t2911;
  t3014 = -0.4*t2854*t2848;
  t3022 = 0.4*t3020*t2890;
  t3024 = -1.*t3020*t2890;
  t3029 = t2896 + t3024;
  t3030 = 0.64*t3029;
  t3033 = t3014 + t3022 + t3030;
  t3034 = -31.392000000000003*t3033;
  t3074 = t293*t2825;
  t3075 = -1.*t2832*t2844;
  t3076 = t3074 + t3075;
  t3037 = t2922 + t2995;
  t3041 = -0.4*t2923*t2918;
  t3049 = 0.4*t3048*t2934;
  t3050 = -1.*t3048*t2934;
  t3061 = t2961 + t3050;
  t3062 = 0.64*t3061;
  t3072 = t3041 + t3049 + t3062;
  t3073 = -31.392000000000003*t3072;
  t3100 = t293*t2913;
  t3101 = -1.*t2832*t2915;
  t3104 = t3100 + t3101;
  p_output1[0]=t2851 + t2911 + t2922 + 28.252799999999997*t293 + t2995;
  p_output1[1]=t3008;
  p_output1[2]=t3034;
  p_output1[3]=t3037;
  p_output1[4]=t3073;
  p_output1[5]=t3008;
  p_output1[6]=t3008;
  p_output1[7]=t3034;
  p_output1[8]=t3034;
  p_output1[9]=t3034;
  p_output1[10]=-31.392000000000003*(t3022 + 0.4*t2854*t3076 + 0.64*(t3024 - 1.*t2854*t3076));
  p_output1[11]=t3037;
  p_output1[12]=t3037;
  p_output1[13]=t3073;
  p_output1[14]=t3073;
  p_output1[15]=t3073;
  p_output1[16]=-31.392000000000003*(t3049 + 0.4*t2923*t3104 + 0.64*(t3050 - 1.*t2923*t3104));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_five_link_walker.hh"

namespace RightStance
{

void J_Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
