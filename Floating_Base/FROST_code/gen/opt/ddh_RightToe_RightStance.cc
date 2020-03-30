/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:51:25 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t18356;
  double t18353;
  double t18354;
  double t18361;
  double t18346;
  double t18355;
  double t18387;
  double t18389;
  double t18391;
  double t18393;
  double t18394;
  double t18730;
  double t18351;
  double t18352;
  double t20755;
  double t20776;
  double t20852;
  double t20734;
  double t20867;
  double t20896;
  double t21093;
  double t21122;
  double t21125;
  double t21234;
  double t21479;
  double t21487;
  double t21500;
  double t22156;
  double t22814;
  double t22815;
  double t22822;
  double t22823;
  double t22824;
  double t22831;
  double t22832;
  double t22838;
  double t22839;
  double t22883;
  double t22892;
  double t22895;
  double t22882;
  double t22896;
  double t22897;
  double t22903;
  double t22906;
  double t22910;
  double t22881;
  double t22911;
  double t22912;
  double t22913;
  double t22985;
  double t22993;
  double t23006;
  double t23007;
  double t23008;
  double t23009;
  double t23010;
  double t23016;
  double t23017;
  double t23018;
  double t23019;
  double t23020;
  double t23021;
  double t23015;
  double t23022;
  double t23023;
  double t23024;
  t18356 = Cos(var1[2]);
  t18353 = Cos(var1[3]);
  t18354 = Sin(var1[2]);
  t18361 = Sin(var1[3]);
  t18346 = Cos(var1[4]);
  t18355 = t18353*t18354;
  t18387 = t18356*t18361;
  t18389 = t18355 + t18387;
  t18391 = t18356*t18353;
  t18393 = -1.*t18354*t18361;
  t18394 = t18391 + t18393;
  t18730 = Sin(var1[4]);
  t18351 = -1.*t18346;
  t18352 = 1. + t18351;
  t20755 = -1.*t18353*t18354;
  t20776 = -1.*t18356*t18361;
  t20852 = t20755 + t20776;
  t20734 = 0.4*t18352*t18394;
  t20867 = -0.4*t20852*t18730;
  t20896 = t18346*t18394;
  t21093 = t20852*t18730;
  t21122 = t20896 + t21093;
  t21125 = 0.8*t21122;
  t21234 = t20734 + t20867 + t21125;
  t21479 = -0.4*t18346*t18394;
  t21487 = 0.4*t18389*t18730;
  t21500 = -1.*t18389*t18730;
  t22156 = t20896 + t21500;
  t22814 = 0.8*t22156;
  t22815 = t21479 + t21487 + t22814;
  t22822 = -0.4*t18346*t20852;
  t22823 = 0.4*t18394*t18730;
  t22824 = t18346*t20852;
  t22831 = -1.*t18394*t18730;
  t22832 = t22824 + t22831;
  t22838 = 0.8*t22832;
  t22839 = t22822 + t22823 + t22838;
  t22883 = -1.*t18356*t18353;
  t22892 = t18354*t18361;
  t22895 = t22883 + t22892;
  t22882 = 0.4*t18352*t20852;
  t22896 = -0.4*t22895*t18730;
  t22897 = t22895*t18730;
  t22903 = t22824 + t22897;
  t22906 = 0.8*t22903;
  t22910 = t22882 + t22896 + t22906;
  t22881 = var2[4]*t22839;
  t22911 = var2[2]*t22910;
  t22912 = var2[3]*t22910;
  t22913 = t22881 + t22911 + t22912;
  t22985 = 0.4*t20852*t18730;
  t22993 = -1.*t20852*t18730;
  t23006 = -0.4*t18346*t22895;
  t23007 = t18346*t22895;
  t23008 = t23007 + t22993;
  t23009 = 0.8*t23008;
  t23010 = t23006 + t22985 + t23009;
  t23016 = 0.4*t18352*t22895;
  t23017 = -0.4*t18389*t18730;
  t23018 = t18389*t18730;
  t23019 = t23007 + t23018;
  t23020 = 0.8*t23019;
  t23021 = t23016 + t23017 + t23020;
  t23015 = var2[4]*t23010;
  t23022 = var2[2]*t23021;
  t23023 = var2[3]*t23021;
  t23024 = t23015 + t23022 + t23023;
  p_output1[0]=0.4*t18352*t18389 - 0.4*t18394*t18730 + 0.8*(t18346*t18389 + t18394*t18730) + var1[0] + var2[0] + t21234*var2[2] + t22913*var2[2] + t21234*var2[3] + t22913*var2[3] + t22815*var2[4] + var2[4]*(t22839*var2[2] + t22839*var2[3] + (0.4*t18346*t18389 + t22823 + 0.8*(-1.*t18346*t18389 + t22831))*var2[4]) + var3[0] + t21234*var3[2] + t21234*var3[3] + t22815*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t20734 + t20867 + t21125 + t22881 + t22911 + t22912 + var1[1] + var2[1] + t23024*var2[2] + t23024*var2[3] + var2[4]*(t23010*var2[2] + t23010*var2[3] + (0.4*t18346*t18394 + t22985 + 0.8*(-1.*t18346*t18394 + t22993))*var2[4]) + var3[1] + t22910*var3[2] + t22910*var3[3] + t22839*var3[4] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightToe_RightStance.hh"

namespace RightStance
{

void ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
