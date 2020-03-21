/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:22 GMT-04:00
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
  double t15402;
  double t15414;
  double t15401;
  double t15415;
  double t15395;
  double t15403;
  double t15416;
  double t15417;
  double t15419;
  double t15420;
  double t15421;
  double t15422;
  double t15399;
  double t15400;
  double t15418;
  double t15423;
  double t15424;
  double t15425;
  double t15426;
  double t15427;
  double t15428;
  double t15432;
  double t15433;
  double t15434;
  double t15444;
  double t15451;
  double t15452;
  double t15453;
  double t15450;
  double t15454;
  double t15455;
  double t15456;
  double t15457;
  double t15458;
  t15402 = Cos(var1[3]);
  t15414 = Sin(var1[2]);
  t15401 = Cos(var1[2]);
  t15415 = Sin(var1[3]);
  t15395 = Cos(var1[4]);
  t15403 = t15401*t15402;
  t15416 = -1.*t15414*t15415;
  t15417 = t15403 + t15416;
  t15419 = -1.*t15402*t15414;
  t15420 = -1.*t15401*t15415;
  t15421 = t15419 + t15420;
  t15422 = Sin(var1[4]);
  t15399 = -1.*t15395;
  t15400 = 1. + t15399;
  t15418 = 0.4*t15400*t15417;
  t15423 = -0.4*t15421*t15422;
  t15424 = t15395*t15417;
  t15425 = t15421*t15422;
  t15426 = t15424 + t15425;
  t15427 = 0.8*t15426;
  t15428 = t15418 + t15423 + t15427;
  t15432 = t15402*t15414;
  t15433 = t15401*t15415;
  t15434 = t15432 + t15433;
  t15444 = t15395*t15421;
  t15451 = -1.*t15401*t15402;
  t15452 = t15414*t15415;
  t15453 = t15451 + t15452;
  t15450 = 0.4*t15400*t15421;
  t15454 = -0.4*t15453*t15422;
  t15455 = t15453*t15422;
  t15456 = t15444 + t15455;
  t15457 = 0.8*t15456;
  t15458 = t15450 + t15454 + t15457;
  p_output1[0]=var2[0] + t15428*var2[2] + t15428*var2[3] + (-0.4*t15395*t15417 + 0.4*t15422*t15434 + 0.8*(t15424 - 1.*t15422*t15434))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t15458*var2[2] + t15458*var2[3] + (-0.4*t15395*t15421 + 0.4*t15417*t15422 + 0.8*(-1.*t15417*t15422 + t15444))*var2[4];
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
