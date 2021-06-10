/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:36:38 GMT-05:00
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
  double t108;
  double t345;
  double t493;
  double t1012;
  double t1102;
  double t1283;
  double t1434;
  double t1454;
  double t1778;
  double t1780;
  double t1781;
  double t1813;
  double t3499;
  double t3573;
  double t3617;
  double t3625;
  double t3792;
  double t3866;
  double t4126;
  double t4888;
  double t4901;
  double t4918;
  double t1452;
  double t1461;
  double t1489;
  double t1734;
  double t2047;
  double t2249;
  double t2441;
  double t2486;
  double t2499;
  double t2594;
  double t3439;
  double t5336;
  double t5452;
  double t5608;
  double t3813;
  double t3869;
  double t3870;
  double t4125;
  double t4921;
  double t4923;
  double t4927;
  double t4935;
  double t5022;
  double t5024;
  double t5030;
  double t6219;
  double t6277;
  double t6476;
  double t5106;
  double t5333;
  double t5676;
  double t5882;
  double t5906;
  double t5918;
  double t5950;
  double t6080;
  double t6944;
  double t6945;
  double t6967;
  double t6205;
  double t6217;
  double t6531;
  double t6587;
  double t6620;
  double t6683;
  double t6723;
  double t6759;
  double t7227;
  double t7233;
  double t7251;
  t108 = Cos(var1[2]);
  t345 = Cos(var1[3]);
  t493 = -1.*t108*t345;
  t1012 = Sin(var1[2]);
  t1102 = Sin(var1[3]);
  t1283 = t1012*t1102;
  t1434 = t493 + t1283;
  t1454 = Cos(var1[4]);
  t1778 = t345*t1012;
  t1780 = t108*t1102;
  t1781 = t1778 + t1780;
  t1813 = Sin(var1[4]);
  t3499 = Cos(var1[5]);
  t3573 = -1.*t108*t3499;
  t3617 = Sin(var1[5]);
  t3625 = t1012*t3617;
  t3792 = t3573 + t3625;
  t3866 = Cos(var1[6]);
  t4126 = t3499*t1012;
  t4888 = t108*t3617;
  t4901 = t4126 + t4888;
  t4918 = Sin(var1[6]);
  t1452 = -7.33788*t1434;
  t1461 = -1.*t1454;
  t1489 = 1. + t1461;
  t1734 = 0.4*t1489*t1434;
  t2047 = -0.4*t1781*t1813;
  t2249 = t1454*t1434;
  t2441 = t1781*t1813;
  t2486 = t2249 + t2441;
  t2499 = 0.64*t2486;
  t2594 = t1734 + t2047 + t2499;
  t3439 = -31.392000000000003*t2594;
  t5336 = -1.*t345*t1012;
  t5452 = -1.*t108*t1102;
  t5608 = t5336 + t5452;
  t3813 = -7.33788*t3792;
  t3869 = -1.*t3866;
  t3870 = 1. + t3869;
  t4125 = 0.4*t3870*t3792;
  t4921 = -0.4*t4901*t4918;
  t4923 = t3866*t3792;
  t4927 = t4901*t4918;
  t4935 = t4923 + t4927;
  t5022 = 0.64*t4935;
  t5024 = t4125 + t4921 + t5022;
  t5030 = -31.392000000000003*t5024;
  t6219 = -1.*t3499*t1012;
  t6277 = -1.*t108*t3617;
  t6476 = t6219 + t6277;
  t5106 = t1452 + t3439;
  t5333 = -0.4*t1454*t1434;
  t5676 = 0.4*t5608*t1813;
  t5882 = -1.*t5608*t1813;
  t5906 = t2249 + t5882;
  t5918 = 0.64*t5906;
  t5950 = t5333 + t5676 + t5918;
  t6080 = -31.392000000000003*t5950;
  t6944 = t108*t345;
  t6945 = -1.*t1012*t1102;
  t6967 = t6944 + t6945;
  t6205 = t3813 + t5030;
  t6217 = -0.4*t3866*t3792;
  t6531 = 0.4*t6476*t4918;
  t6587 = -1.*t6476*t4918;
  t6620 = t4923 + t6587;
  t6683 = 0.64*t6620;
  t6723 = t6217 + t6531 + t6683;
  t6759 = -31.392000000000003*t6723;
  t7227 = t108*t3499;
  t7233 = -1.*t1012*t3617;
  t7251 = t7227 + t7233;
  p_output1[0]=28.252799999999997*t108 + t1452 + t3439 + t3813 + t5030;
  p_output1[1]=t5106;
  p_output1[2]=t6080;
  p_output1[3]=t6205;
  p_output1[4]=t6759;
  p_output1[5]=t5106;
  p_output1[6]=t5106;
  p_output1[7]=t6080;
  p_output1[8]=t6080;
  p_output1[9]=t6080;
  p_output1[10]=-31.392000000000003*(t5676 + 0.4*t1454*t6967 + 0.64*(t5882 - 1.*t1454*t6967));
  p_output1[11]=t6205;
  p_output1[12]=t6205;
  p_output1[13]=t6759;
  p_output1[14]=t6759;
  p_output1[15]=t6759;
  p_output1[16]=-31.392000000000003*(t6531 + 0.4*t3866*t7251 + 0.64*(t6587 - 1.*t3866*t7251));
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
