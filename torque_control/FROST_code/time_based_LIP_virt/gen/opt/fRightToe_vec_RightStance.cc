/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:36:34 GMT-05:00
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
  double t1359;
  double t1395;
  double t1340;
  double t1503;
  double t1229;
  double t1387;
  double t2244;
  double t3028;
  double t3080;
  double t3497;
  double t3911;
  double t4188;
  double t1252;
  double t1256;
  double t4750;
  double t4793;
  double t4808;
  double t3079;
  double t4258;
  double t4313;
  double t4314;
  double t4420;
  double t4544;
  double t4559;
  double t4677;
  double t4690;
  double t4958;
  double t4959;
  double t4960;
  double t4965;
  double t5006;
  double t5007;
  double t5008;
  double t5009;
  double t5011;
  double t5012;
  double t5014;
  t1359 = Cos(var1[3]);
  t1395 = Sin(var1[2]);
  t1340 = Cos(var1[2]);
  t1503 = Sin(var1[3]);
  t1229 = Cos(var1[4]);
  t1387 = t1340*t1359;
  t2244 = -1.*t1395*t1503;
  t3028 = t1387 + t2244;
  t3080 = -1.*t1359*t1395;
  t3497 = -1.*t1340*t1503;
  t3911 = t3080 + t3497;
  t4188 = Sin(var1[4]);
  t1252 = -1.*t1229;
  t1256 = 1. + t1252;
  t4750 = -1.*t1340*t1359;
  t4793 = t1395*t1503;
  t4808 = t4750 + t4793;
  t3079 = 0.4*t1256*t3028;
  t4258 = -0.4*t3911*t4188;
  t4313 = t1229*t3028;
  t4314 = t3911*t4188;
  t4420 = t4313 + t4314;
  t4544 = 0.8*t4420;
  t4559 = t3079 + t4258 + t4544;
  t4677 = var2[0]*t4559;
  t4690 = 0.4*t1256*t3911;
  t4958 = -0.4*t4808*t4188;
  t4959 = t1229*t3911;
  t4960 = t4808*t4188;
  t4965 = t4959 + t4960;
  t5006 = 0.8*t4965;
  t5007 = t4690 + t4958 + t5006;
  t5008 = var2[2]*t5007;
  t5009 = t4677 + t5008;
  t5011 = t1359*t1395;
  t5012 = t1340*t1503;
  t5014 = t5011 + t5012;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t5009;
  p_output1[3]=t5009;
  p_output1[4]=(-0.4*t1229*t3028 + 0.4*t4188*t5014 + 0.8*(t4313 - 1.*t4188*t5014))*var2[0] + (-0.4*t1229*t3911 + 0.4*t3028*t4188 + 0.8*(-1.*t3028*t4188 + t4959))*var2[2];
  p_output1[5]=0;
  p_output1[6]=0;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "fRightToe_vec_RightStance.hh"

namespace RightStance
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
