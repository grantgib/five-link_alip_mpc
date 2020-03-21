/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:10 GMT-04:00
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
  double t3818;
  double t3834;
  double t3842;
  double t3875;
  double t3883;
  double t4055;
  double t4061;
  double t4120;
  double t4267;
  double t4409;
  double t4486;
  double t4492;
  double t4530;
  double t4533;
  double t4562;
  double t4592;
  double t4617;
  double t4643;
  double t4673;
  double t4675;
  double t4676;
  double t4684;
  double t4116;
  double t4122;
  double t4254;
  double t4259;
  double t4494;
  double t4495;
  double t4505;
  double t4508;
  double t4509;
  double t4513;
  double t4514;
  double t4811;
  double t7492;
  double t7559;
  double t4635;
  double t4656;
  double t4665;
  double t4667;
  double t4685;
  double t4695;
  double t4696;
  double t4702;
  double t4722;
  double t4725;
  double t4735;
  double t7934;
  double t7939;
  double t8116;
  t3818 = Sin(var1[2]);
  t3834 = Cos(var1[3]);
  t3842 = -1.*t3834*t3818;
  t3875 = Cos(var1[2]);
  t3883 = Sin(var1[3]);
  t4055 = -1.*t3875*t3883;
  t4061 = t3842 + t4055;
  t4120 = Cos(var1[4]);
  t4267 = -1.*t3875*t3834;
  t4409 = t3818*t3883;
  t4486 = t4267 + t4409;
  t4492 = Sin(var1[4]);
  t4530 = Cos(var1[5]);
  t4533 = -1.*t4530*t3818;
  t4562 = Sin(var1[5]);
  t4592 = -1.*t3875*t4562;
  t4617 = t4533 + t4592;
  t4643 = Cos(var1[6]);
  t4673 = -1.*t3875*t4530;
  t4675 = t3818*t4562;
  t4676 = t4673 + t4675;
  t4684 = Sin(var1[6]);
  t4116 = -7.33788*t4061;
  t4122 = -1.*t4120;
  t4254 = 1. + t4122;
  t4259 = 0.4*t4254*t4061;
  t4494 = -0.4*t4486*t4492;
  t4495 = t4120*t4061;
  t4505 = t4486*t4492;
  t4508 = t4495 + t4505;
  t4509 = 0.64*t4508;
  t4513 = t4259 + t4494 + t4509;
  t4514 = -31.392000000000003*t4513;
  t4811 = t3875*t3834;
  t7492 = -1.*t3818*t3883;
  t7559 = t4811 + t7492;
  t4635 = -7.33788*t4617;
  t4656 = -1.*t4643;
  t4665 = 1. + t4656;
  t4667 = 0.4*t4665*t4617;
  t4685 = -0.4*t4676*t4684;
  t4695 = t4643*t4617;
  t4696 = t4676*t4684;
  t4702 = t4695 + t4696;
  t4722 = 0.64*t4702;
  t4725 = t4667 + t4685 + t4722;
  t4735 = -31.392000000000003*t4725;
  t7934 = t3875*t4530;
  t7939 = -1.*t3818*t4562;
  t8116 = t7934 + t7939;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=28.252799999999997*t3818 + t4116 + t4514 + t4635 + t4735;
  p_output1[3]=t4116 + t4514;
  p_output1[4]=-31.392000000000003*(-0.4*t4061*t4120 + 0.4*t4492*t7559 + 0.64*(t4495 - 1.*t4492*t7559));
  p_output1[5]=t4635 + t4735;
  p_output1[6]=-31.392000000000003*(-0.4*t4617*t4643 + 0.4*t4684*t8116 + 0.64*(t4695 - 1.*t4684*t8116));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_five_link_walker.hh"

namespace RightStance
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
