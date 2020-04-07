/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:02:35 GMT-04:00
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
  double t6248;
  double t6254;
  double t6237;
  double t6255;
  double t1809;
  double t6249;
  double t6256;
  double t6297;
  double t6300;
  double t6302;
  double t6307;
  double t6308;
  double t2289;
  double t4426;
  double t6298;
  double t6309;
  double t6311;
  double t6312;
  double t6315;
  double t6319;
  double t6320;
  double t6328;
  double t6339;
  double t6340;
  double t6374;
  double t6381;
  double t6382;
  double t6383;
  double t6380;
  double t6384;
  double t6385;
  double t6386;
  double t6395;
  double t6403;
  t6248 = Cos(var1[3]);
  t6254 = Sin(var1[2]);
  t6237 = Cos(var1[2]);
  t6255 = Sin(var1[3]);
  t1809 = Cos(var1[4]);
  t6249 = t6237*t6248;
  t6256 = -1.*t6254*t6255;
  t6297 = t6249 + t6256;
  t6300 = -1.*t6248*t6254;
  t6302 = -1.*t6237*t6255;
  t6307 = t6300 + t6302;
  t6308 = Sin(var1[4]);
  t2289 = -1.*t1809;
  t4426 = 1. + t2289;
  t6298 = 0.4*t4426*t6297;
  t6309 = -0.4*t6307*t6308;
  t6311 = t1809*t6297;
  t6312 = t6307*t6308;
  t6315 = t6311 + t6312;
  t6319 = 0.8*t6315;
  t6320 = t6298 + t6309 + t6319;
  t6328 = t6248*t6254;
  t6339 = t6237*t6255;
  t6340 = t6328 + t6339;
  t6374 = t1809*t6307;
  t6381 = -1.*t6237*t6248;
  t6382 = t6254*t6255;
  t6383 = t6381 + t6382;
  t6380 = 0.4*t4426*t6307;
  t6384 = -0.4*t6383*t6308;
  t6385 = t6383*t6308;
  t6386 = t6374 + t6385;
  t6395 = 0.8*t6386;
  t6403 = t6380 + t6384 + t6395;
  p_output1[0]=var2[0] + t6320*var2[2] + t6320*var2[3] + (-0.4*t1809*t6297 + 0.4*t6308*t6340 + 0.8*(t6311 - 1.*t6308*t6340))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t6403*var2[2] + t6403*var2[3] + (-0.4*t1809*t6307 + 0.4*t6297*t6308 + 0.8*(-1.*t6297*t6308 + t6374))*var2[4];
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
