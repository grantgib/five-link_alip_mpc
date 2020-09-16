/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 15:03:18 GMT-04:00
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
  double t2904;
  double t2907;
  double t2902;
  double t2908;
  double t523;
  double t2905;
  double t2909;
  double t2910;
  double t2926;
  double t2929;
  double t2930;
  double t2931;
  double t2880;
  double t2897;
  double t2911;
  double t2937;
  double t2938;
  double t2942;
  double t2943;
  double t2944;
  double t2945;
  double t2950;
  double t2954;
  double t2955;
  double t2972;
  double t2973;
  double t2974;
  double t2971;
  double t2978;
  double t2979;
  double t2980;
  double t2983;
  double t2984;
  double t2985;
  t2904 = Cos(var1[3]);
  t2907 = Sin(var1[2]);
  t2902 = Cos(var1[2]);
  t2908 = Sin(var1[3]);
  t523 = Cos(var1[4]);
  t2905 = t2902*t2904;
  t2909 = -1.*t2907*t2908;
  t2910 = t2905 + t2909;
  t2926 = -1.*t2904*t2907;
  t2929 = -1.*t2902*t2908;
  t2930 = t2926 + t2929;
  t2931 = Sin(var1[4]);
  t2880 = -1.*t523;
  t2897 = 1. + t2880;
  t2911 = 0.4*t2897*t2910;
  t2937 = -0.4*t2930*t2931;
  t2938 = t523*t2910;
  t2942 = t2930*t2931;
  t2943 = t2938 + t2942;
  t2944 = 0.8*t2943;
  t2945 = t2911 + t2937 + t2944;
  t2950 = t2904*t2907;
  t2954 = t2902*t2908;
  t2955 = t2950 + t2954;
  t2972 = -1.*t2902*t2904;
  t2973 = t2907*t2908;
  t2974 = t2972 + t2973;
  t2971 = 0.4*t2897*t2930;
  t2978 = -0.4*t2974*t2931;
  t2979 = t523*t2930;
  t2980 = t2974*t2931;
  t2983 = t2979 + t2980;
  t2984 = 0.8*t2983;
  t2985 = t2971 + t2978 + t2984;
  p_output1[0]=1.;
  p_output1[1]=t2945;
  p_output1[2]=t2945;
  p_output1[3]=0.4*t2931*t2955 + 0.8*(t2938 - 1.*t2931*t2955) - 0.4*t2910*t523;
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t2985;
  p_output1[8]=t2985;
  p_output1[9]=0.4*t2910*t2931 + 0.8*(-1.*t2910*t2931 + t2979) - 0.4*t2930*t523;
  p_output1[10]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightToe_RightStance.hh"

namespace RightStance
{

void J_h_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
