/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:53:21 GMT-04:00
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
  double t798;
  double t627;
  double t765;
  double t814;
  double t194;
  double t781;
  double t832;
  double t851;
  double t1257;
  double t1260;
  double t1263;
  double t1264;
  double t256;
  double t390;
  double t1236;
  double t1265;
  double t1291;
  double t1300;
  double t1303;
  double t1307;
  double t1308;
  double t1313;
  double t1314;
  double t1317;
  t798 = Cos(var1[2]);
  t627 = Cos(var1[5]);
  t765 = Sin(var1[2]);
  t814 = Sin(var1[5]);
  t194 = Cos(var1[6]);
  t781 = -1.*t627*t765;
  t832 = -1.*t798*t814;
  t851 = t781 + t832;
  t1257 = -1.*t798*t627;
  t1260 = t765*t814;
  t1263 = t1257 + t1260;
  t1264 = Sin(var1[6]);
  t256 = -1.*t194;
  t390 = 1. + t256;
  t1236 = 0.4*t390*t851;
  t1265 = -0.4*t1263*t1264;
  t1291 = t194*t851;
  t1300 = t1263*t1264;
  t1303 = t1291 + t1300;
  t1307 = 0.8*t1303;
  t1308 = t1236 + t1265 + t1307;
  t1313 = t798*t627;
  t1314 = -1.*t765*t814;
  t1317 = t1313 + t1314;
  p_output1[0]=1.;
  p_output1[1]=t1308;
  p_output1[2]=t1308;
  p_output1[3]=0.4*t1264*t1317 + 0.8*(t1291 - 1.*t1264*t1317) - 0.4*t194*t851;
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

#include "J_swing_foot_height.hh"

namespace RightStance
{

void J_swing_foot_height_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
