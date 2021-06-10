/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 16:58:04 GMT-04:00
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
  double t4283;
  double t4287;
  double t4282;
  double t4288;
  double t4268;
  double t4284;
  double t4289;
  double t4292;
  double t4294;
  double t4295;
  double t4296;
  double t4297;
  double t4306;
  double t4308;
  double t4303;
  double t4307;
  double t4309;
  double t4310;
  double t4312;
  double t4313;
  double t4314;
  double t4315;
  t4283 = Cos(var1[3]);
  t4287 = Sin(var1[2]);
  t4282 = Cos(var1[2]);
  t4288 = Sin(var1[3]);
  t4268 = Cos(var1[4]);
  t4284 = t4282*t4283;
  t4289 = -1.*t4287*t4288;
  t4292 = t4284 + t4289;
  t4294 = -1.*t4283*t4287;
  t4295 = -1.*t4282*t4288;
  t4296 = t4294 + t4295;
  t4297 = Sin(var1[4]);
  t4306 = Cos(var1[5]);
  t4308 = Sin(var1[5]);
  t4303 = Cos(var1[6]);
  t4307 = t4282*t4306;
  t4309 = -1.*t4287*t4308;
  t4310 = t4307 + t4309;
  t4312 = -1.*t4306*t4287;
  t4313 = -1.*t4282*t4308;
  t4314 = t4312 + t4313;
  t4315 = Sin(var1[6]);
  p_output1[0]=-0.4*(1. - 1.*t4268)*t4292 + 0.4*t4296*t4297 - 0.8*(t4268*t4292 + t4296*t4297) + 0.4*(1. - 1.*t4303)*t4310 - 0.4*t4314*t4315 + 0.8*(t4303*t4310 + t4314*t4315) - 1.*var2[0];
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
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

#include "u_hgtRightStance.hh"

namespace SymFunction
{

void u_hgtRightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
