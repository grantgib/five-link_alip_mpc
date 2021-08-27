/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:44 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t121;
  double t315;
  double t378;
  double t431;
  double t506;
  double t667;
  double t801;
  double t955;
  double t1103;
  double t2272;
  double t3598;
  double t3659;
  double t330;
  double t1469;
  double t1841;
  double t1938;
  double t3661;
  double t3664;
  double t3728;
  double t3852;
  double t3853;
  double t3864;
  double t3874;
  double t3910;
  double t4229;
  double t4235;
  double t4228;
  double t4241;
  double t4067;
  double t4234;
  double t4242;
  double t4263;
  double t4550;
  double t4628;
  double t4643;
  double t4647;
  double t4102;
  double t4107;
  double t4751;
  double t4761;
  double t4763;
  double t4946;
  double t4968;
  double t4886;
  double t4965;
  double t4969;
  double t4974;
  double t4983;
  double t4988;
  double t5008;
  double t5009;
  double t4471;
  double t4650;
  double t4655;
  double t4658;
  double t4665;
  double t4685;
  double t4896;
  double t4902;
  double t5240;
  double t5244;
  double t5262;
  t121 = -1.*var4[1];
  t315 = var4[0] + t121;
  t378 = -1. + var5[0];
  t431 = -1. + var6[0];
  t506 = 1/t431;
  t667 = -1.*var1[0];
  t801 = t667 + var1[1];
  t955 = t378*t506*t801;
  t1103 = t121 + var1[0] + t955;
  t2272 = 1/t315;
  t3598 = -1.*t2272*t1103;
  t3659 = 1. + t3598;
  t330 = Power(t315,-5);
  t1469 = Power(t1103,5);
  t1841 = Power(t315,-4);
  t1938 = Power(t1103,4);
  t3661 = Power(t315,-3);
  t3664 = Power(t1103,3);
  t3728 = Power(t3659,2);
  t3852 = Power(t315,-2);
  t3853 = Power(t1103,2);
  t3864 = Power(t3659,3);
  t3874 = Power(t3659,4);
  t3910 = Power(t3659,5);
  t4229 = Cos(var2[3]);
  t4235 = Sin(var2[2]);
  t4228 = Cos(var2[2]);
  t4241 = Sin(var2[3]);
  t4067 = Cos(var2[4]);
  t4234 = t4228*t4229;
  t4242 = -1.*t4235*t4241;
  t4263 = t4234 + t4242;
  t4550 = -1.*t4229*t4235;
  t4628 = -1.*t4228*t4241;
  t4643 = t4550 + t4628;
  t4647 = Sin(var2[4]);
  t4102 = -1.*t4067;
  t4107 = 1. + t4102;
  t4751 = t4229*t4235;
  t4761 = t4228*t4241;
  t4763 = t4751 + t4761;
  t4946 = Cos(var2[5]);
  t4968 = Sin(var2[5]);
  t4886 = Cos(var2[6]);
  t4965 = t4946*t4235;
  t4969 = t4228*t4968;
  t4974 = t4965 + t4969;
  t4983 = t4228*t4946;
  t4988 = -1.*t4235*t4968;
  t5008 = t4983 + t4988;
  t5009 = Sin(var2[6]);
  t4471 = -0.4*t4107*t4263;
  t4650 = 0.4*t4643*t4647;
  t4655 = t4067*t4263;
  t4658 = t4643*t4647;
  t4665 = t4655 + t4658;
  t4685 = -0.8*t4665;
  t4896 = -1.*t4886;
  t4902 = 1. + t4896;
  t5240 = -1.*t4946*t4235;
  t5244 = -1.*t4228*t4968;
  t5262 = t5240 + t5244;
  p_output1[0]=var2[2] - 1.*t3910*var3[0] - 5.*t1103*t2272*t3874*var3[4] - 10.*t3852*t3853*t3864*var3[8] - 10.*t3661*t3664*t3728*var3[12] - 5.*t1841*t1938*t3659*var3[16] - 1.*t1469*t330*var3[20];
  p_output1[1]=t4471 + t4650 + t4685 - 1.*t3910*var3[1] - 5.*t1103*t2272*t3874*var3[5] - 10.*t3852*t3853*t3864*var3[9] - 10.*t3661*t3664*t3728*var3[13] - 5.*t1841*t1938*t3659*var3[17] - 1.*t1469*t330*var3[21];
  p_output1[2]=0.4*t4263*t4647 - 0.4*t4107*t4763 - 0.8*(t4263*t4647 + t4067*t4763) + 0.4*t4902*t4974 - 0.4*t5008*t5009 + 0.8*(t4886*t4974 + t5008*t5009) - 1.*t3910*var3[2] - 5.*t1103*t2272*t3874*var3[6] - 10.*t3852*t3853*t3864*var3[10] - 10.*t3661*t3664*t3728*var3[14] - 5.*t1841*t1938*t3659*var3[18] - 1.*t1469*t330*var3[22];
  p_output1[3]=t4471 + t4650 + t4685 + 0.4*t4902*t5008 - 0.4*t5009*t5262 + 0.8*(t4886*t5008 + t5009*t5262) - 1.*t3910*var3[3] - 5.*t1103*t2272*t3874*var3[7] - 10.*t3852*t3853*t3864*var3[11] - 10.*t3661*t3664*t3728*var3[15] - 5.*t1841*t1938*t3659*var3[19] - 1.*t1469*t330*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "y_time_RightStance.hh"

namespace RightStance
{

void y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
