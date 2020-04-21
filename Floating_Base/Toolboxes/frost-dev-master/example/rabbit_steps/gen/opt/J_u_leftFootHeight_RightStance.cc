/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:54:28 GMT-04:00
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
  double t2093;
  double t2059;
  double t2074;
  double t2098;
  double t1237;
  double t2075;
  double t2121;
  double t2174;
  double t2214;
  double t2215;
  double t2217;
  double t2221;
  double t1633;
  double t2011;
  double t2200;
  double t2246;
  double t2255;
  double t2273;
  double t2288;
  double t2370;
  double t2403;
  double t2542;
  double t2598;
  double t2609;
  t2093 = Cos(var1[2]);
  t2059 = Cos(var1[5]);
  t2074 = Sin(var1[2]);
  t2098 = Sin(var1[5]);
  t1237 = Cos(var1[6]);
  t2075 = -1.*t2059*t2074;
  t2121 = -1.*t2093*t2098;
  t2174 = t2075 + t2121;
  t2214 = -1.*t2093*t2059;
  t2215 = t2074*t2098;
  t2217 = t2214 + t2215;
  t2221 = Sin(var1[6]);
  t1633 = -1.*t1237;
  t2011 = 1. + t1633;
  t2200 = 0.4*t2011*t2174;
  t2246 = -0.4*t2217*t2221;
  t2255 = t1237*t2174;
  t2273 = t2217*t2221;
  t2288 = t2255 + t2273;
  t2370 = 0.8*t2288;
  t2403 = t2200 + t2246 + t2370;
  t2542 = t2093*t2059;
  t2598 = -1.*t2074*t2098;
  t2609 = t2542 + t2598;
  p_output1[0]=1.;
  p_output1[1]=t2403;
  p_output1[2]=t2403;
  p_output1[3]=-0.4*t1237*t2174 + 0.4*t2221*t2609 + 0.8*(t2255 - 1.*t2221*t2609);
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
