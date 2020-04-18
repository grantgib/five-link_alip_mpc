/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 16:57:31 GMT-04:00
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
  double t4104;
  double t4111;
  double t4099;
  double t4116;
  double t535;
  double t4108;
  double t4120;
  double t4122;
  double t4129;
  double t4130;
  double t4131;
  double t4132;
  double t4068;
  double t4097;
  double t4155;
  double t4156;
  double t4157;
  double t4123;
  double t4133;
  double t4134;
  double t4142;
  double t4146;
  double t4151;
  double t4153;
  double t4154;
  double t4158;
  double t4159;
  double t4160;
  double t4161;
  double t4162;
  double t4163;
  double t4165;
  double t4178;
  double t4179;
  t4104 = Cos(var1[3]);
  t4111 = Sin(var1[2]);
  t4099 = Cos(var1[2]);
  t4116 = Sin(var1[3]);
  t535 = Cos(var1[4]);
  t4108 = t4099*t4104;
  t4120 = -1.*t4111*t4116;
  t4122 = t4108 + t4120;
  t4129 = -1.*t4104*t4111;
  t4130 = -1.*t4099*t4116;
  t4131 = t4129 + t4130;
  t4132 = Sin(var1[4]);
  t4068 = -1.*t535;
  t4097 = 1. + t4068;
  t4155 = -1.*t4099*t4104;
  t4156 = t4111*t4116;
  t4157 = t4155 + t4156;
  t4123 = 0.4*t4097*t4122;
  t4133 = -0.4*t4131*t4132;
  t4134 = t535*t4122;
  t4142 = t4131*t4132;
  t4146 = t4134 + t4142;
  t4151 = 0.8*t4146;
  t4153 = t4123 + t4133 + t4151;
  t4154 = 0.4*t4097*t4131;
  t4158 = -0.4*t4157*t4132;
  t4159 = t535*t4131;
  t4160 = t4157*t4132;
  t4161 = t4159 + t4160;
  t4162 = 0.8*t4161;
  t4163 = t4154 + t4158 + t4162;
  t4165 = t4104*t4111;
  t4178 = t4099*t4116;
  t4179 = t4165 + t4178;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t4153;
  p_output1[7]=0;
  p_output1[8]=t4163;
  p_output1[9]=t4153;
  p_output1[10]=0;
  p_output1[11]=t4163;
  p_output1[12]=0.4*t4132*t4179 + 0.8*(t4134 - 1.*t4132*t4179) - 0.4*t4122*t535;
  p_output1[13]=0;
  p_output1[14]=0.4*t4122*t4132 + 0.8*(-1.*t4122*t4132 + t4159) - 0.4*t4131*t535;
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
