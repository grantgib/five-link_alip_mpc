/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:47:41 GMT-04:00
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
  double t1904;
  double t1922;
  double t1901;
  double t1967;
  double t1805;
  double t1915;
  double t1980;
  double t1985;
  double t1993;
  double t1998;
  double t2002;
  double t2004;
  double t1851;
  double t1896;
  double t2018;
  double t2022;
  double t2023;
  double t1992;
  double t2010;
  double t2011;
  double t2012;
  double t2013;
  double t2014;
  double t2015;
  double t2016;
  double t2017;
  double t2024;
  double t2025;
  double t2026;
  double t2027;
  double t2028;
  double t2029;
  double t2037;
  double t2038;
  double t2040;
  double t2041;
  double t2042;
  t1904 = Cos(var1[3]);
  t1922 = Sin(var1[2]);
  t1901 = Cos(var1[2]);
  t1967 = Sin(var1[3]);
  t1805 = Cos(var1[4]);
  t1915 = t1901*t1904;
  t1980 = -1.*t1922*t1967;
  t1985 = t1915 + t1980;
  t1993 = -1.*t1904*t1922;
  t1998 = -1.*t1901*t1967;
  t2002 = t1993 + t1998;
  t2004 = Sin(var1[4]);
  t1851 = -1.*t1805;
  t1896 = 1. + t1851;
  t2018 = -1.*t1901*t1904;
  t2022 = t1922*t1967;
  t2023 = t2018 + t2022;
  t1992 = 0.4*t1896*t1985;
  t2010 = -0.4*t2002*t2004;
  t2011 = t1805*t1985;
  t2012 = t2002*t2004;
  t2013 = t2011 + t2012;
  t2014 = 0.8*t2013;
  t2015 = t1992 + t2010 + t2014;
  t2016 = var2[0]*t2015;
  t2017 = 0.4*t1896*t2002;
  t2024 = -0.4*t2023*t2004;
  t2025 = t1805*t2002;
  t2026 = t2023*t2004;
  t2027 = t2025 + t2026;
  t2028 = 0.8*t2027;
  t2029 = t2017 + t2024 + t2028;
  t2037 = var2[2]*t2029;
  t2038 = t2016 + t2037;
  t2040 = t1904*t1922;
  t2041 = t1901*t1967;
  t2042 = t2040 + t2041;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t2038;
  p_output1[3]=t2038;
  p_output1[4]=(-0.4*t1805*t1985 + 0.4*t2004*t2042 + 0.8*(t2011 - 1.*t2004*t2042))*var2[0] + (-0.4*t1805*t2002 + 0.4*t1985*t2004 + 0.8*(-1.*t1985*t2004 + t2025))*var2[2];
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
