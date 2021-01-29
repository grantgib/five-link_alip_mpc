/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:08:31 GMT-05:00
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
  double t2131;
  double t2093;
  double t2101;
  double t2153;
  double t1581;
  double t2121;
  double t2176;
  double t2189;
  double t2195;
  double t2196;
  double t2204;
  double t2208;
  double t1805;
  double t2037;
  double t2192;
  double t2230;
  double t2238;
  double t2245;
  double t2253;
  double t2265;
  double t2282;
  double t2288;
  double t2291;
  double t2299;
  t2131 = Cos(var1[2]);
  t2093 = Cos(var1[5]);
  t2101 = Sin(var1[2]);
  t2153 = Sin(var1[5]);
  t1581 = Cos(var1[6]);
  t2121 = -1.*t2093*t2101;
  t2176 = -1.*t2131*t2153;
  t2189 = t2121 + t2176;
  t2195 = -1.*t2131*t2093;
  t2196 = t2101*t2153;
  t2204 = t2195 + t2196;
  t2208 = Sin(var1[6]);
  t1805 = -1.*t1581;
  t2037 = 1. + t1805;
  t2192 = 0.4*t2037*t2189;
  t2230 = -0.4*t2204*t2208;
  t2238 = t1581*t2189;
  t2245 = t2204*t2208;
  t2253 = t2238 + t2245;
  t2265 = 0.8*t2253;
  t2282 = t2192 + t2230 + t2265;
  t2288 = t2131*t2093;
  t2291 = -1.*t2101*t2153;
  t2299 = t2288 + t2291;
  p_output1[0]=1.;
  p_output1[1]=t2282;
  p_output1[2]=t2282;
  p_output1[3]=-0.4*t1581*t2189 + 0.4*t2208*t2299 + 0.8*(t2238 - 1.*t2208*t2299);
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
