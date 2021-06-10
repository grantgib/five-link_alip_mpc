/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:26 GMT-05:00
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
  double t283;
  double t333;
  double t260;
  double t348;
  double t137;
  double t288;
  double t404;
  double t428;
  double t504;
  double t570;
  double t572;
  double t595;
  double t212;
  double t226;
  double t870;
  double t1117;
  double t1193;
  double t459;
  double t602;
  double t630;
  double t684;
  double t702;
  double t741;
  double t852;
  double t861;
  double t1195;
  double t1274;
  double t1360;
  double t1370;
  double t1419;
  double t1498;
  double t1549;
  double t1565;
  double t1651;
  double t1887;
  double t1888;
  double t1912;
  double t1668;
  double t1713;
  double t1770;
  double t1785;
  double t1819;
  double t1829;
  double t1874;
  double t1875;
  double t1951;
  double t1953;
  double t1981;
  double t2012;
  double t2016;
  double t2017;
  double t2022;
  double t2024;
  double t2029;
  double t2032;
  double t2036;
  double t2038;
  double t2041;
  double t2043;
  t283 = Cos(var1[3]);
  t333 = Sin(var1[2]);
  t260 = Cos(var1[2]);
  t348 = Sin(var1[3]);
  t137 = Cos(var1[4]);
  t288 = -1.*t260*t283;
  t404 = t333*t348;
  t428 = t288 + t404;
  t504 = t283*t333;
  t570 = t260*t348;
  t572 = t504 + t570;
  t595 = Sin(var1[4]);
  t212 = -1.*t137;
  t226 = 1. + t212;
  t870 = -1.*t283*t333;
  t1117 = -1.*t260*t348;
  t1193 = t870 + t1117;
  t459 = 0.4*t226*t428;
  t602 = -0.4*t572*t595;
  t630 = t137*t428;
  t684 = t572*t595;
  t702 = t630 + t684;
  t741 = 0.8*t702;
  t852 = t459 + t602 + t741;
  t861 = var2[2]*t852;
  t1195 = 0.4*t226*t1193;
  t1274 = -0.4*t428*t595;
  t1360 = t137*t1193;
  t1370 = t428*t595;
  t1419 = t1360 + t1370;
  t1498 = 0.8*t1419;
  t1549 = t1195 + t1274 + t1498;
  t1565 = var2[0]*t1549;
  t1651 = t861 + t1565;
  t1887 = t260*t283;
  t1888 = -1.*t333*t348;
  t1912 = t1887 + t1888;
  t1668 = -0.4*t137*t428;
  t1713 = 0.4*t1193*t595;
  t1770 = -1.*t1193*t595;
  t1785 = t630 + t1770;
  t1819 = 0.8*t1785;
  t1829 = t1668 + t1713 + t1819;
  t1874 = var2[2]*t1829;
  t1875 = -0.4*t137*t1193;
  t1951 = 0.4*t1912*t595;
  t1953 = -1.*t1912*t595;
  t1981 = t1360 + t1953;
  t2012 = 0.8*t1981;
  t2016 = t1875 + t1951 + t2012;
  t2017 = var2[0]*t2016;
  t2022 = t1874 + t2017;
  t2024 = 0.4*t226*t1912;
  t2029 = -0.4*t1193*t595;
  t2032 = t137*t1912;
  t2036 = t1193*t595;
  t2038 = t2032 + t2036;
  t2041 = 0.8*t2038;
  t2043 = t2024 + t2029 + t2041;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t1651;
  p_output1[3]=t1651;
  p_output1[4]=t2022;
  p_output1[5]=t2043;
  p_output1[6]=t1549;
  p_output1[7]=t1651;
  p_output1[8]=t1651;
  p_output1[9]=t2022;
  p_output1[10]=t2043;
  p_output1[11]=t1549;
  p_output1[12]=t2022;
  p_output1[13]=t2022;
  p_output1[14]=(t1951 + 0.4*t137*t572 + 0.8*(t1953 - 1.*t137*t572))*var2[0] + (t1713 + 0.4*t137*t1912 + 0.8*(t1770 - 1.*t137*t1912))*var2[2];
  p_output1[15]=-0.4*t137*t1912 + 0.4*t572*t595 + 0.8*(t2032 - 1.*t572*t595);
  p_output1[16]=t2016;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightToe_vec_RightStance.hh"

namespace RightStance
{

void J_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
