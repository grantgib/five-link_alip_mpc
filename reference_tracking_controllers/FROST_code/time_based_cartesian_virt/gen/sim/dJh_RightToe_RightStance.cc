/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 15:58:55 GMT-05:00
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
  double t4028;
  double t4021;
  double t4022;
  double t4029;
  double t4015;
  double t4027;
  double t4030;
  double t4033;
  double t4035;
  double t4037;
  double t4038;
  double t4039;
  double t4041;
  double t4050;
  double t4051;
  double t4052;
  double t4047;
  double t4048;
  double t4049;
  double t4053;
  double t4054;
  double t4055;
  double t4056;
  double t4058;
  double t4067;
  double t4074;
  double t4075;
  double t4076;
  double t4073;
  double t4077;
  double t4078;
  double t4079;
  double t4080;
  double t4081;
  double t4034;
  double t4040;
  double t4042;
  double t4043;
  double t4044;
  double t4045;
  double t4046;
  double t4060;
  double t4061;
  double t4064;
  double t4065;
  double t4066;
  double t4068;
  double t4069;
  double t4070;
  double t4071;
  double t4072;
  double t4082;
  double t4085;
  double t4086;
  t4028 = Cos(var1[2]);
  t4021 = Cos(var1[3]);
  t4022 = Sin(var1[2]);
  t4029 = Sin(var1[3]);
  t4015 = Cos(var1[4]);
  t4027 = -1.*t4021*t4022;
  t4030 = -1.*t4028*t4029;
  t4033 = t4027 + t4030;
  t4035 = t4028*t4021;
  t4037 = -1.*t4022*t4029;
  t4038 = t4035 + t4037;
  t4039 = Sin(var1[4]);
  t4041 = t4015*t4033;
  t4050 = -1.*t4028*t4021;
  t4051 = t4022*t4029;
  t4052 = t4050 + t4051;
  t4047 = -1.*t4015;
  t4048 = 1. + t4047;
  t4049 = 0.4*t4048*t4033;
  t4053 = -0.4*t4052*t4039;
  t4054 = t4052*t4039;
  t4055 = t4041 + t4054;
  t4056 = 0.8*t4055;
  t4058 = t4049 + t4053 + t4056;
  t4067 = t4015*t4052;
  t4074 = t4021*t4022;
  t4075 = t4028*t4029;
  t4076 = t4074 + t4075;
  t4073 = 0.4*t4048*t4052;
  t4077 = -0.4*t4076*t4039;
  t4078 = t4076*t4039;
  t4079 = t4067 + t4078;
  t4080 = 0.8*t4079;
  t4081 = t4073 + t4077 + t4080;
  t4034 = -0.4*t4015*t4033;
  t4040 = 0.4*t4038*t4039;
  t4042 = -1.*t4038*t4039;
  t4043 = t4041 + t4042;
  t4044 = 0.8*t4043;
  t4045 = t4034 + t4040 + t4044;
  t4046 = var2[4]*t4045;
  t4060 = var2[2]*t4058;
  t4061 = var2[3]*t4058;
  t4064 = t4046 + t4060 + t4061;
  t4065 = -0.4*t4015*t4052;
  t4066 = 0.4*t4033*t4039;
  t4068 = -1.*t4033*t4039;
  t4069 = t4067 + t4068;
  t4070 = 0.8*t4069;
  t4071 = t4065 + t4066 + t4070;
  t4072 = var2[4]*t4071;
  t4082 = var2[2]*t4081;
  t4085 = var2[3]*t4081;
  t4086 = t4072 + t4082 + t4085;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t4064;
  p_output1[7]=0;
  p_output1[8]=t4086;
  p_output1[9]=t4064;
  p_output1[10]=0;
  p_output1[11]=t4086;
  p_output1[12]=t4045*var2[2] + t4045*var2[3] + (t4040 + 0.4*t4015*t4076 + 0.8*(t4042 - 1.*t4015*t4076))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t4071*var2[2] + t4071*var2[3] + (0.4*t4015*t4038 + t4066 + 0.8*(-1.*t4015*t4038 + t4068))*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_RightToe_RightStance.hh"

namespace SymFunction
{

void dJh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
