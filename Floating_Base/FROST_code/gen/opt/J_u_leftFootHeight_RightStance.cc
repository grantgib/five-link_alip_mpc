/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:04:05 GMT-04:00
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
  double t1869;
  double t1834;
  double t1856;
  double t1899;
  double t1169;
  double t1857;
  double t1906;
  double t1909;
  double t1935;
  double t1938;
  double t1964;
  double t1966;
  double t1171;
  double t1189;
  double t1924;
  double t1973;
  double t1982;
  double t1991;
  double t2004;
  double t2033;
  double t2037;
  double t2077;
  double t2078;
  double t2079;
  t1869 = Cos(var1[2]);
  t1834 = Cos(var1[5]);
  t1856 = Sin(var1[2]);
  t1899 = Sin(var1[5]);
  t1169 = Cos(var1[6]);
  t1857 = -1.*t1834*t1856;
  t1906 = -1.*t1869*t1899;
  t1909 = t1857 + t1906;
  t1935 = -1.*t1869*t1834;
  t1938 = t1856*t1899;
  t1964 = t1935 + t1938;
  t1966 = Sin(var1[6]);
  t1171 = -1.*t1169;
  t1189 = 1. + t1171;
  t1924 = 0.4*t1189*t1909;
  t1973 = -0.4*t1964*t1966;
  t1982 = t1169*t1909;
  t1991 = t1964*t1966;
  t2004 = t1982 + t1991;
  t2033 = 0.8*t2004;
  t2037 = t1924 + t1973 + t2033;
  t2077 = t1869*t1834;
  t2078 = -1.*t1856*t1899;
  t2079 = t2077 + t2078;
  p_output1[0]=1.;
  p_output1[1]=t2037;
  p_output1[2]=t2037;
  p_output1[3]=-0.4*t1169*t1909 + 0.4*t1966*t2079 + 0.8*(t1982 - 1.*t1966*t2079);
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

#include "J_u_leftFootHeight_RightStance.hh"

namespace RightStance
{

void J_u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
