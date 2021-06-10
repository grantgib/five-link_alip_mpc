/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 15:58:54 GMT-05:00
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
  double t3903;
  double t3908;
  double t3902;
  double t3909;
  double t3218;
  double t3904;
  double t3910;
  double t3911;
  double t3944;
  double t3951;
  double t3956;
  double t3963;
  double t3826;
  double t3896;
  double t3971;
  double t3972;
  double t3973;
  double t3914;
  double t3964;
  double t3965;
  double t3966;
  double t3967;
  double t3968;
  double t3969;
  double t3970;
  double t3974;
  double t3975;
  double t4011;
  double t4012;
  double t4013;
  double t4014;
  double t4018;
  double t4019;
  double t4020;
  t3903 = Cos(var1[3]);
  t3908 = Sin(var1[2]);
  t3902 = Cos(var1[2]);
  t3909 = Sin(var1[3]);
  t3218 = Cos(var1[4]);
  t3904 = t3902*t3903;
  t3910 = -1.*t3908*t3909;
  t3911 = t3904 + t3910;
  t3944 = -1.*t3903*t3908;
  t3951 = -1.*t3902*t3909;
  t3956 = t3944 + t3951;
  t3963 = Sin(var1[4]);
  t3826 = -1.*t3218;
  t3896 = 1. + t3826;
  t3971 = -1.*t3902*t3903;
  t3972 = t3908*t3909;
  t3973 = t3971 + t3972;
  t3914 = 0.4*t3896*t3911;
  t3964 = -0.4*t3956*t3963;
  t3965 = t3218*t3911;
  t3966 = t3956*t3963;
  t3967 = t3965 + t3966;
  t3968 = 0.8*t3967;
  t3969 = t3914 + t3964 + t3968;
  t3970 = 0.4*t3896*t3956;
  t3974 = -0.4*t3973*t3963;
  t3975 = t3218*t3956;
  t4011 = t3973*t3963;
  t4012 = t3975 + t4011;
  t4013 = 0.8*t4012;
  t4014 = t3970 + t3974 + t4013;
  t4018 = t3903*t3908;
  t4019 = t3902*t3909;
  t4020 = t4018 + t4019;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t3969;
  p_output1[7]=0;
  p_output1[8]=t4014;
  p_output1[9]=t3969;
  p_output1[10]=0;
  p_output1[11]=t4014;
  p_output1[12]=-0.4*t3218*t3911 + 0.4*t3963*t4020 + 0.8*(t3965 - 1.*t3963*t4020);
  p_output1[13]=0;
  p_output1[14]=-0.4*t3218*t3956 + 0.4*t3911*t3963 + 0.8*(-1.*t3911*t3963 + t3975);
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RightToe_RightStance.hh"

namespace SymFunction
{

void Jh_RightToe_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
