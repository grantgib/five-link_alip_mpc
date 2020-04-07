/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:52:08 GMT-04:00
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
  double t4876;
  double t2068;
  double t2182;
  double t4885;
  double t749;
  double t4875;
  double t4894;
  double t4895;
  double t4902;
  double t4903;
  double t4907;
  double t4908;
  double t4910;
  double t4950;
  double t4951;
  double t4955;
  double t4945;
  double t4948;
  double t4949;
  double t4956;
  double t4957;
  double t4958;
  double t4959;
  double t4960;
  double t4896;
  double t4909;
  double t4915;
  double t4919;
  double t4920;
  double t4923;
  double t4924;
  double t4961;
  double t4962;
  double t4963;
  double t4971;
  double t4972;
  double t4973;
  double t4984;
  double t4985;
  double t4986;
  double t4987;
  double t4988;
  double t4989;
  double t4995;
  double t5004;
  double t5010;
  double t5011;
  double t5012;
  double t5013;
  double t5014;
  double t5015;
  double t5002;
  double t5003;
  double t5005;
  double t5006;
  double t5007;
  double t5008;
  double t5009;
  double t5028;
  double t5029;
  double t5030;
  t4876 = Cos(var1[2]);
  t2068 = Cos(var1[3]);
  t2182 = Sin(var1[2]);
  t4885 = Sin(var1[3]);
  t749 = Cos(var1[4]);
  t4875 = -1.*t2068*t2182;
  t4894 = -1.*t4876*t4885;
  t4895 = t4875 + t4894;
  t4902 = t4876*t2068;
  t4903 = -1.*t2182*t4885;
  t4907 = t4902 + t4903;
  t4908 = Sin(var1[4]);
  t4910 = t749*t4895;
  t4950 = -1.*t4876*t2068;
  t4951 = t2182*t4885;
  t4955 = t4950 + t4951;
  t4945 = -1.*t749;
  t4948 = 1. + t4945;
  t4949 = 0.4*t4948*t4895;
  t4956 = -0.4*t4955*t4908;
  t4957 = t4955*t4908;
  t4958 = t4910 + t4957;
  t4959 = 0.8*t4958;
  t4960 = t4949 + t4956 + t4959;
  t4896 = -0.4*t749*t4895;
  t4909 = 0.4*t4907*t4908;
  t4915 = -1.*t4907*t4908;
  t4919 = t4910 + t4915;
  t4920 = 0.8*t4919;
  t4923 = t4896 + t4909 + t4920;
  t4924 = var2[4]*t4923;
  t4961 = var2[2]*t4960;
  t4962 = var2[3]*t4960;
  t4963 = t4924 + t4961 + t4962;
  t4971 = t2068*t2182;
  t4972 = t4876*t4885;
  t4973 = t4971 + t4972;
  t4984 = 0.4*t4948*t4907;
  t4985 = -0.4*t4895*t4908;
  t4986 = t749*t4907;
  t4987 = t4895*t4908;
  t4988 = t4986 + t4987;
  t4989 = 0.8*t4988;
  t4995 = t4984 + t4985 + t4989;
  t5004 = t749*t4955;
  t5010 = 0.4*t4948*t4955;
  t5011 = -0.4*t4973*t4908;
  t5012 = t4973*t4908;
  t5013 = t5004 + t5012;
  t5014 = 0.8*t5013;
  t5015 = t5010 + t5011 + t5014;
  t5002 = -0.4*t749*t4955;
  t5003 = 0.4*t4895*t4908;
  t5005 = -1.*t4895*t4908;
  t5006 = t5004 + t5005;
  t5007 = 0.8*t5006;
  t5008 = t5002 + t5003 + t5007;
  t5009 = var2[4]*t5008;
  t5028 = var2[2]*t5015;
  t5029 = var2[3]*t5015;
  t5030 = t5009 + t5028 + t5029;
  p_output1[0]=t4963;
  p_output1[1]=t4963;
  p_output1[2]=t4923*var2[2] + t4923*var2[3] + (t4909 + 0.4*t4973*t749 + 0.8*(t4915 - 1.*t4973*t749))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t4995;
  p_output1[5]=t4995;
  p_output1[6]=0.4*t4908*t4973 + 0.8*(-1.*t4908*t4973 + t4986) - 0.4*t4907*t749;
  p_output1[7]=t5030;
  p_output1[8]=t5030;
  p_output1[9]=t5008*var2[2] + t5008*var2[3] + (t5003 + 0.4*t4907*t749 + 0.8*(t5005 - 1.*t4907*t749))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t4960;
  p_output1[12]=t4960;
  p_output1[13]=t4923;
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
