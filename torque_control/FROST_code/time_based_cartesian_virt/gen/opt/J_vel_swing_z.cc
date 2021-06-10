/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:16:22 GMT-05:00
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
  double t3595;
  double t3655;
  double t3586;
  double t3703;
  double t3354;
  double t3627;
  double t3733;
  double t3945;
  double t3953;
  double t3954;
  double t3969;
  double t3970;
  double t3975;
  double t4087;
  double t4092;
  double t4124;
  double t4048;
  double t4066;
  double t4079;
  double t4137;
  double t4148;
  double t4204;
  double t4205;
  double t4206;
  double t3950;
  double t3972;
  double t3976;
  double t3989;
  double t4003;
  double t4027;
  double t4032;
  double t4209;
  double t4211;
  double t4214;
  double t4301;
  double t4339;
  double t4365;
  double t4461;
  double t4469;
  double t4473;
  double t4477;
  double t4497;
  double t4500;
  double t4502;
  t3595 = Cos(var1[5]);
  t3655 = Sin(var1[2]);
  t3586 = Cos(var1[2]);
  t3703 = Sin(var1[5]);
  t3354 = Cos(var1[6]);
  t3627 = -1.*t3586*t3595;
  t3733 = t3655*t3703;
  t3945 = t3627 + t3733;
  t3953 = -1.*t3595*t3655;
  t3954 = -1.*t3586*t3703;
  t3969 = t3953 + t3954;
  t3970 = Sin(var1[6]);
  t3975 = t3354*t3945;
  t4087 = t3595*t3655;
  t4092 = t3586*t3703;
  t4124 = t4087 + t4092;
  t4048 = -1.*t3354;
  t4066 = 1. + t4048;
  t4079 = 0.4*t4066*t3945;
  t4137 = -0.4*t4124*t3970;
  t4148 = t4124*t3970;
  t4204 = t3975 + t4148;
  t4205 = 0.8*t4204;
  t4206 = t4079 + t4137 + t4205;
  t3950 = -0.4*t3354*t3945;
  t3972 = 0.4*t3969*t3970;
  t3976 = -1.*t3969*t3970;
  t3989 = t3975 + t3976;
  t4003 = 0.8*t3989;
  t4027 = t3950 + t3972 + t4003;
  t4032 = var2[6]*t4027;
  t4209 = var2[2]*t4206;
  t4211 = var2[5]*t4206;
  t4214 = t4032 + t4209 + t4211;
  t4301 = t3586*t3595;
  t4339 = -1.*t3655*t3703;
  t4365 = t4301 + t4339;
  t4461 = 0.4*t4066*t3969;
  t4469 = -0.4*t3945*t3970;
  t4473 = t3354*t3969;
  t4477 = t3945*t3970;
  t4497 = t4473 + t4477;
  t4500 = 0.8*t4497;
  t4502 = t4461 + t4469 + t4500;
  p_output1[0]=t4214;
  p_output1[1]=t4214;
  p_output1[2]=t4027*var2[2] + t4027*var2[5] + (t3972 + 0.4*t3354*t4365 + 0.8*(t3976 - 1.*t3354*t4365))*var2[6];
  p_output1[3]=1.;
  p_output1[4]=t4502;
  p_output1[5]=t4502;
  p_output1[6]=-0.4*t3354*t3969 + 0.4*t3970*t4365 + 0.8*(-1.*t3970*t4365 + t4473);
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

#include "J_vel_swing_z.hh"

namespace RightStance
{

void J_vel_swing_z_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
