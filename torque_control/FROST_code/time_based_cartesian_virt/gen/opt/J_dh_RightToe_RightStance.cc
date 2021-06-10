/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:33 GMT-05:00
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
  double t2844;
  double t2772;
  double t2776;
  double t2845;
  double t1042;
  double t2783;
  double t2852;
  double t2855;
  double t2868;
  double t2869;
  double t2879;
  double t2888;
  double t2895;
  double t3033;
  double t3047;
  double t3055;
  double t3021;
  double t3029;
  double t3032;
  double t3057;
  double t3061;
  double t3069;
  double t3074;
  double t3075;
  double t2861;
  double t2894;
  double t2897;
  double t2905;
  double t2907;
  double t2996;
  double t3017;
  double t3108;
  double t3125;
  double t3155;
  double t3231;
  double t3233;
  double t3235;
  double t3278;
  double t3290;
  double t3296;
  double t3299;
  double t3344;
  double t3356;
  double t3357;
  double t3467;
  double t3493;
  double t3499;
  double t3500;
  double t3503;
  double t3510;
  double t3545;
  double t3450;
  double t3453;
  double t3474;
  double t3476;
  double t3483;
  double t3485;
  double t3490;
  double t3559;
  double t3565;
  double t3577;
  t2844 = Cos(var1[2]);
  t2772 = Cos(var1[3]);
  t2776 = Sin(var1[2]);
  t2845 = Sin(var1[3]);
  t1042 = Cos(var1[4]);
  t2783 = -1.*t2772*t2776;
  t2852 = -1.*t2844*t2845;
  t2855 = t2783 + t2852;
  t2868 = t2844*t2772;
  t2869 = -1.*t2776*t2845;
  t2879 = t2868 + t2869;
  t2888 = Sin(var1[4]);
  t2895 = t1042*t2855;
  t3033 = -1.*t2844*t2772;
  t3047 = t2776*t2845;
  t3055 = t3033 + t3047;
  t3021 = -1.*t1042;
  t3029 = 1. + t3021;
  t3032 = 0.4*t3029*t2855;
  t3057 = -0.4*t3055*t2888;
  t3061 = t3055*t2888;
  t3069 = t2895 + t3061;
  t3074 = 0.8*t3069;
  t3075 = t3032 + t3057 + t3074;
  t2861 = -0.4*t1042*t2855;
  t2894 = 0.4*t2879*t2888;
  t2897 = -1.*t2879*t2888;
  t2905 = t2895 + t2897;
  t2907 = 0.8*t2905;
  t2996 = t2861 + t2894 + t2907;
  t3017 = var2[4]*t2996;
  t3108 = var2[2]*t3075;
  t3125 = var2[3]*t3075;
  t3155 = t3017 + t3108 + t3125;
  t3231 = t2772*t2776;
  t3233 = t2844*t2845;
  t3235 = t3231 + t3233;
  t3278 = 0.4*t3029*t2879;
  t3290 = -0.4*t2855*t2888;
  t3296 = t1042*t2879;
  t3299 = t2855*t2888;
  t3344 = t3296 + t3299;
  t3356 = 0.8*t3344;
  t3357 = t3278 + t3290 + t3356;
  t3467 = t1042*t3055;
  t3493 = 0.4*t3029*t3055;
  t3499 = -0.4*t3235*t2888;
  t3500 = t3235*t2888;
  t3503 = t3467 + t3500;
  t3510 = 0.8*t3503;
  t3545 = t3493 + t3499 + t3510;
  t3450 = -0.4*t1042*t3055;
  t3453 = 0.4*t2855*t2888;
  t3474 = -1.*t2855*t2888;
  t3476 = t3467 + t3474;
  t3483 = 0.8*t3476;
  t3485 = t3450 + t3453 + t3483;
  t3490 = var2[4]*t3485;
  t3559 = var2[2]*t3545;
  t3565 = var2[3]*t3545;
  t3577 = t3490 + t3559 + t3565;
  p_output1[0]=t3155;
  p_output1[1]=t3155;
  p_output1[2]=t2996*var2[2] + t2996*var2[3] + (t2894 + 0.4*t1042*t3235 + 0.8*(t2897 - 1.*t1042*t3235))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t3357;
  p_output1[5]=t3357;
  p_output1[6]=-0.4*t1042*t2879 + 0.4*t2888*t3235 + 0.8*(-1.*t2888*t3235 + t3296);
  p_output1[7]=t3577;
  p_output1[8]=t3577;
  p_output1[9]=t3485*var2[2] + t3485*var2[3] + (0.4*t1042*t2879 + t3453 + 0.8*(-1.*t1042*t2879 + t3474))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t3075;
  p_output1[12]=t3075;
  p_output1[13]=t2996;
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
