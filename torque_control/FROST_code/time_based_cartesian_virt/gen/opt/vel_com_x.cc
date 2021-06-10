/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:16:24 GMT-05:00
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
  double t4399;
  double t4423;
  double t1058;
  double t4428;
  double t1027;
  double t4407;
  double t4444;
  double t4450;
  double t4455;
  double t4460;
  double t4539;
  double t4551;
  double t4555;
  double t4718;
  double t4723;
  double t4731;
  double t4812;
  double t4884;
  double t4807;
  double t4839;
  double t4893;
  double t4895;
  double t4953;
  double t4987;
  double t4989;
  double t4995;
  double t5053;
  double t5149;
  double t5150;
  double t5161;
  double t4688;
  double t4689;
  double t4695;
  double t4712;
  double t4732;
  double t4757;
  double t4768;
  double t4769;
  double t4785;
  double t4791;
  double t5084;
  double t5098;
  double t5125;
  double t5134;
  double t5164;
  double t5167;
  double t5169;
  double t5175;
  double t5183;
  double t5187;
  t4399 = Cos(var1[3]);
  t4423 = Sin(var1[2]);
  t1058 = Cos(var1[2]);
  t4428 = Sin(var1[3]);
  t1027 = Cos(var1[4]);
  t4407 = t1058*t4399;
  t4444 = -1.*t4423*t4428;
  t4450 = t4407 + t4444;
  t4455 = t4399*t4423;
  t4460 = t1058*t4428;
  t4539 = t4455 + t4460;
  t4551 = Sin(var1[4]);
  t4555 = t1027*t4450;
  t4718 = -1.*t4399*t4423;
  t4723 = -1.*t1058*t4428;
  t4731 = t4718 + t4723;
  t4812 = Cos(var1[5]);
  t4884 = Sin(var1[5]);
  t4807 = Cos(var1[6]);
  t4839 = t1058*t4812;
  t4893 = -1.*t4423*t4884;
  t4895 = t4839 + t4893;
  t4953 = t4812*t4423;
  t4987 = t1058*t4884;
  t4989 = t4953 + t4987;
  t4995 = Sin(var1[6]);
  t5053 = t4807*t4895;
  t5149 = -1.*t4812*t4423;
  t5150 = -1.*t1058*t4884;
  t5161 = t5149 + t5150;
  t4688 = 0.748*t4450;
  t4689 = -1.*t1027;
  t4695 = 1. + t4689;
  t4712 = 0.4*t4695*t4450;
  t4732 = -0.4*t4731*t4551;
  t4757 = t4731*t4551;
  t4768 = t4555 + t4757;
  t4769 = 0.64*t4768;
  t4785 = t4712 + t4732 + t4769;
  t4791 = 3.2*t4785;
  t5084 = 0.748*t4895;
  t5098 = -1.*t4807;
  t5125 = 1. + t5098;
  t5134 = 0.4*t5125*t4895;
  t5164 = -0.4*t5161*t4995;
  t5167 = t5161*t4995;
  t5169 = t5053 + t5167;
  t5175 = 0.64*t5169;
  t5183 = t5134 + t5164 + t5175;
  t5187 = 3.2*t5183;
  p_output1[0]=var2[0] + 0.03125*(2.88*t1058 + t4688 + t4791 + t5084 + t5187)*var2[2] + 0.03125*(t4688 + t4791)*var2[3] + 0.1*(-0.4*t1027*t4450 + 0.4*t4539*t4551 + 0.64*(-1.*t4539*t4551 + t4555))*var2[4] + 0.03125*(t5084 + t5187)*var2[5] + 0.1*(-0.4*t4807*t4895 + 0.4*t4989*t4995 + 0.64*(-1.*t4989*t4995 + t5053))*var2[6];
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

#include "vel_com_x.hh"

namespace RightStance
{

void vel_com_x_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
