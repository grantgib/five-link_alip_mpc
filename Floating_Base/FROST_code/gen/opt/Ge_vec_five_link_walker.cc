/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:47:34 GMT-04:00
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
  double t1776;
  double t1810;
  double t1811;
  double t1812;
  double t1826;
  double t1845;
  double t1850;
  double t1863;
  double t1895;
  double t1896;
  double t1897;
  double t1898;
  double t1916;
  double t1917;
  double t1919;
  double t1920;
  double t1921;
  double t1923;
  double t1927;
  double t1967;
  double t1968;
  double t1969;
  double t1851;
  double t1867;
  double t1882;
  double t1883;
  double t1899;
  double t1900;
  double t1901;
  double t1902;
  double t1903;
  double t1904;
  double t1915;
  double t2004;
  double t2006;
  double t2008;
  double t1922;
  double t1924;
  double t1925;
  double t1926;
  double t1970;
  double t1971;
  double t1980;
  double t1981;
  double t1984;
  double t1985;
  double t1992;
  double t2018;
  double t2019;
  double t2021;
  t1776 = Sin(var1[2]);
  t1810 = Cos(var1[3]);
  t1811 = -1.*t1810*t1776;
  t1812 = Cos(var1[2]);
  t1826 = Sin(var1[3]);
  t1845 = -1.*t1812*t1826;
  t1850 = t1811 + t1845;
  t1863 = Cos(var1[4]);
  t1895 = -1.*t1812*t1810;
  t1896 = t1776*t1826;
  t1897 = t1895 + t1896;
  t1898 = Sin(var1[4]);
  t1916 = Cos(var1[5]);
  t1917 = -1.*t1916*t1776;
  t1919 = Sin(var1[5]);
  t1920 = -1.*t1812*t1919;
  t1921 = t1917 + t1920;
  t1923 = Cos(var1[6]);
  t1927 = -1.*t1812*t1916;
  t1967 = t1776*t1919;
  t1968 = t1927 + t1967;
  t1969 = Sin(var1[6]);
  t1851 = -7.33788*t1850;
  t1867 = -1.*t1863;
  t1882 = 1. + t1867;
  t1883 = 0.4*t1882*t1850;
  t1899 = -0.4*t1897*t1898;
  t1900 = t1863*t1850;
  t1901 = t1897*t1898;
  t1902 = t1900 + t1901;
  t1903 = 0.64*t1902;
  t1904 = t1883 + t1899 + t1903;
  t1915 = -31.392000000000003*t1904;
  t2004 = t1812*t1810;
  t2006 = -1.*t1776*t1826;
  t2008 = t2004 + t2006;
  t1922 = -7.33788*t1921;
  t1924 = -1.*t1923;
  t1925 = 1. + t1924;
  t1926 = 0.4*t1925*t1921;
  t1970 = -0.4*t1968*t1969;
  t1971 = t1923*t1921;
  t1980 = t1968*t1969;
  t1981 = t1971 + t1980;
  t1984 = 0.64*t1981;
  t1985 = t1926 + t1970 + t1984;
  t1992 = -31.392000000000003*t1985;
  t2018 = t1812*t1916;
  t2019 = -1.*t1776*t1919;
  t2021 = t2018 + t2019;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=28.252799999999997*t1776 + t1851 + t1915 + t1922 + t1992;
  p_output1[3]=t1851 + t1915;
  p_output1[4]=-31.392000000000003*(-0.4*t1850*t1863 + 0.4*t1898*t2008 + 0.64*(t1900 - 1.*t1898*t2008));
  p_output1[5]=t1922 + t1992;
  p_output1[6]=-31.392000000000003*(-0.4*t1921*t1923 + 0.4*t1969*t2021 + 0.64*(t1971 - 1.*t1969*t2021));
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

#include "Ge_vec_five_link_walker.hh"

namespace RightStance
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
