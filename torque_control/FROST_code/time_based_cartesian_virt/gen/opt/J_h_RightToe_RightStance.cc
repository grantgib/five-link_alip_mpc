/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:29 GMT-05:00
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
  double t2150;
  double t2158;
  double t2125;
  double t2165;
  double t1669;
  double t2153;
  double t2169;
  double t2195;
  double t2238;
  double t2239;
  double t2240;
  double t2242;
  double t2088;
  double t2120;
  double t2196;
  double t2243;
  double t2247;
  double t2259;
  double t2283;
  double t2324;
  double t2325;
  double t2346;
  double t2355;
  double t2371;
  double t2568;
  double t2625;
  double t2626;
  double t2498;
  double t2630;
  double t2668;
  double t2675;
  double t2681;
  double t2708;
  double t2733;
  t2150 = Cos(var1[3]);
  t2158 = Sin(var1[2]);
  t2125 = Cos(var1[2]);
  t2165 = Sin(var1[3]);
  t1669 = Cos(var1[4]);
  t2153 = t2125*t2150;
  t2169 = -1.*t2158*t2165;
  t2195 = t2153 + t2169;
  t2238 = -1.*t2150*t2158;
  t2239 = -1.*t2125*t2165;
  t2240 = t2238 + t2239;
  t2242 = Sin(var1[4]);
  t2088 = -1.*t1669;
  t2120 = 1. + t2088;
  t2196 = 0.4*t2120*t2195;
  t2243 = -0.4*t2240*t2242;
  t2247 = t1669*t2195;
  t2259 = t2240*t2242;
  t2283 = t2247 + t2259;
  t2324 = 0.8*t2283;
  t2325 = t2196 + t2243 + t2324;
  t2346 = t2150*t2158;
  t2355 = t2125*t2165;
  t2371 = t2346 + t2355;
  t2568 = -1.*t2125*t2150;
  t2625 = t2158*t2165;
  t2626 = t2568 + t2625;
  t2498 = 0.4*t2120*t2240;
  t2630 = -0.4*t2626*t2242;
  t2668 = t1669*t2240;
  t2675 = t2626*t2242;
  t2681 = t2668 + t2675;
  t2708 = 0.8*t2681;
  t2733 = t2498 + t2630 + t2708;
  p_output1[0]=1.;
  p_output1[1]=t2325;
  p_output1[2]=t2325;
  p_output1[3]=-0.4*t1669*t2195 + 0.4*t2242*t2371 + 0.8*(t2247 - 1.*t2242*t2371);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t2733;
  p_output1[8]=t2733;
  p_output1[9]=-0.4*t1669*t2240 + 0.4*t2195*t2242 + 0.8*(-1.*t2195*t2242 + t2668);
  p_output1[10]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightToe_RightStance.hh"

namespace RightStance
{

void J_h_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
