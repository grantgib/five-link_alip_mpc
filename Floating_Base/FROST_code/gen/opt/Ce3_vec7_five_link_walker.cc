/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:09 GMT-04:00
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
  double t3337;
  double t440;
  double t453;
  double t3572;
  double t3770;
  double t3218;
  double t3638;
  double t3639;
  double t298;
  double t3801;
  double t3813;
  double t3815;
  double t4086;
  double t4095;
  double t4101;
  double t4107;
  double t4113;
  double t4192;
  double t4239;
  double t4241;
  double t3769;
  double t3840;
  double t4271;
  double t4315;
  double t4328;
  double t4117;
  double t4152;
  double t4162;
  double t4165;
  double t4178;
  double t4242;
  double t4247;
  double t4250;
  double t4251;
  double t4359;
  double t4369;
  double t4383;
  double t4386;
  double t4387;
  double t4405;
  t3337 = Cos(var1[5]);
  t440 = Cos(var1[6]);
  t453 = Sin(var1[5]);
  t3572 = Sin(var1[6]);
  t3770 = Cos(var1[2]);
  t3218 = -1.*t440*t453;
  t3638 = -1.*t3337*t3572;
  t3639 = t3218 + t3638;
  t298 = Sin(var1[2]);
  t3801 = t3337*t440;
  t3813 = -1.*t453*t3572;
  t3815 = t3801 + t3813;
  t4086 = -1.*t440;
  t4095 = 1. + t4086;
  t4101 = 0.4*t4095;
  t4107 = 0.64*t440;
  t4113 = t4101 + t4107;
  t4192 = t3337*t4113;
  t4239 = -0.24*t453*t3572;
  t4241 = t4192 + t4239;
  t3769 = -1.*t298*t3639;
  t3840 = t3770*t3639;
  t4271 = -1.*t3337*t440;
  t4315 = t453*t3572;
  t4328 = t4271 + t4315;
  t4117 = -0.24*t3337*t3572;
  t4152 = t4113*t453;
  t4162 = 0.24*t3337*t3572;
  t4165 = t4152 + t4162;
  t4178 = t4165*t3815;
  t4242 = t3639*t4241;
  t4247 = t440*t453;
  t4250 = t3337*t3572;
  t4251 = t4247 + t4250;
  t4359 = t3770*t4328;
  t4369 = t3769 + t4359;
  t4383 = 0.384*var2[1]*t4369;
  t4386 = t298*t4328;
  t4387 = t3840 + t4386;
  t4405 = 0.384*var2[0]*t4387;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(-1.*t298*t3815 + t3840)*var2[0] + 0.384*(t3769 - 1.*t3770*t3815)*var2[1])*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(t4383 + t4405 + 0.384*(t4178 + t4242 + t4241*t4251 + t3815*(t4117 - 1.*t4113*t453))*var2[2])*var2[6];
  p_output1[6]=(t4383 + t4405 + 0.384*(t4178 + t4242 + t4251*(t4239 + 0.24*t3337*t440) + t3815*(t4117 - 0.24*t440*t453))*var2[2] + 0.384*(-1.*t3572*t4113 + 0.24*t3572*t440)*var2[5])*var2[6];
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

#include "Ce3_vec7_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
