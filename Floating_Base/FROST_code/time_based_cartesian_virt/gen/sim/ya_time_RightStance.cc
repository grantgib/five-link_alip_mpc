/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 15:58:58 GMT-05:00
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
  double t4094;
  double t4096;
  double t4093;
  double t4097;
  double t4088;
  double t4095;
  double t4098;
  double t4099;
  double t4101;
  double t4102;
  double t4103;
  double t4104;
  double t4091;
  double t4092;
  double t4111;
  double t4112;
  double t4113;
  double t4123;
  double t4125;
  double t4120;
  double t4124;
  double t4126;
  double t4127;
  double t4129;
  double t4130;
  double t4131;
  double t4132;
  double t4100;
  double t4105;
  double t4106;
  double t4107;
  double t4108;
  double t4109;
  double t4121;
  double t4122;
  double t4140;
  double t4141;
  double t4142;
  t4094 = Cos(var1[3]);
  t4096 = Sin(var1[2]);
  t4093 = Cos(var1[2]);
  t4097 = Sin(var1[3]);
  t4088 = Cos(var1[4]);
  t4095 = t4093*t4094;
  t4098 = -1.*t4096*t4097;
  t4099 = t4095 + t4098;
  t4101 = -1.*t4094*t4096;
  t4102 = -1.*t4093*t4097;
  t4103 = t4101 + t4102;
  t4104 = Sin(var1[4]);
  t4091 = -1.*t4088;
  t4092 = 1. + t4091;
  t4111 = t4094*t4096;
  t4112 = t4093*t4097;
  t4113 = t4111 + t4112;
  t4123 = Cos(var1[5]);
  t4125 = Sin(var1[5]);
  t4120 = Cos(var1[6]);
  t4124 = t4123*t4096;
  t4126 = t4093*t4125;
  t4127 = t4124 + t4126;
  t4129 = t4093*t4123;
  t4130 = -1.*t4096*t4125;
  t4131 = t4129 + t4130;
  t4132 = Sin(var1[6]);
  t4100 = -0.4*t4092*t4099;
  t4105 = 0.4*t4103*t4104;
  t4106 = t4088*t4099;
  t4107 = t4103*t4104;
  t4108 = t4106 + t4107;
  t4109 = -0.8*t4108;
  t4121 = -1.*t4120;
  t4122 = 1. + t4121;
  t4140 = -1.*t4123*t4096;
  t4141 = -1.*t4093*t4125;
  t4142 = t4140 + t4141;
  p_output1[0]=var1[2];
  p_output1[1]=t4100 + t4105 + t4109;
  p_output1[2]=0.4*t4099*t4104 - 0.4*t4092*t4113 - 0.8*(t4099*t4104 + t4088*t4113) + 0.4*t4122*t4127 - 0.4*t4131*t4132 + 0.8*(t4120*t4127 + t4131*t4132);
  p_output1[3]=t4100 + t4105 + t4109 + 0.4*t4122*t4131 - 0.4*t4132*t4142 + 0.8*(t4120*t4131 + t4132*t4142);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "ya_time_RightStance.hh"

namespace SymFunction
{

void ya_time_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
