/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:53:16 GMT-04:00
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
  double t5276;
  double t5278;
  double t5275;
  double t5309;
  double t485;
  double t5277;
  double t5310;
  double t5314;
  double t5324;
  double t5327;
  double t5328;
  double t5338;
  double t5246;
  double t5259;
  double t5315;
  double t5339;
  double t5379;
  double t5380;
  double t12198;
  double t12199;
  double t12436;
  double t14644;
  double t14645;
  double t14646;
  double t14656;
  double t14663;
  double t14664;
  double t14665;
  double t14662;
  double t14666;
  double t14667;
  double t14668;
  double t14669;
  double t14670;
  t5276 = Cos(var1[3]);
  t5278 = Sin(var1[2]);
  t5275 = Cos(var1[2]);
  t5309 = Sin(var1[3]);
  t485 = Cos(var1[4]);
  t5277 = t5275*t5276;
  t5310 = -1.*t5278*t5309;
  t5314 = t5277 + t5310;
  t5324 = -1.*t5276*t5278;
  t5327 = -1.*t5275*t5309;
  t5328 = t5324 + t5327;
  t5338 = Sin(var1[4]);
  t5246 = -1.*t485;
  t5259 = 1. + t5246;
  t5315 = 0.4*t5259*t5314;
  t5339 = -0.4*t5328*t5338;
  t5379 = t485*t5314;
  t5380 = t5328*t5338;
  t12198 = t5379 + t5380;
  t12199 = 0.8*t12198;
  t12436 = t5315 + t5339 + t12199;
  t14644 = t5276*t5278;
  t14645 = t5275*t5309;
  t14646 = t14644 + t14645;
  t14656 = t485*t5328;
  t14663 = -1.*t5275*t5276;
  t14664 = t5278*t5309;
  t14665 = t14663 + t14664;
  t14662 = 0.4*t5259*t5328;
  t14666 = -0.4*t14665*t5338;
  t14667 = t14665*t5338;
  t14668 = t14656 + t14667;
  t14669 = 0.8*t14668;
  t14670 = t14662 + t14666 + t14669;
  p_output1[0]=var2[0] + t12436*var2[2] + t12436*var2[3] + (-0.4*t485*t5314 + 0.4*t14646*t5338 + 0.8*(-1.*t14646*t5338 + t5379))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t14670*var2[2] + t14670*var2[3] + (-0.4*t485*t5328 + 0.4*t5314*t5338 + 0.8*(t14656 - 1.*t5314*t5338))*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightToe_RightStance.hh"

namespace RightStance
{

void dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
