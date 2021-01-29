/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:08:18 GMT-05:00
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
  double t322;
  double t351;
  double t290;
  double t446;
  double t98;
  double t348;
  double t555;
  double t629;
  double t676;
  double t697;
  double t714;
  double t716;
  double t218;
  double t288;
  double t673;
  double t739;
  double t742;
  double t751;
  double t752;
  double t806;
  double t814;
  double t874;
  double t894;
  double t895;
  double t990;
  double t1041;
  double t1058;
  double t988;
  double t1065;
  double t1100;
  double t1105;
  double t1107;
  double t1121;
  double t1124;
  t322 = Cos(var1[5]);
  t351 = Sin(var1[2]);
  t290 = Cos(var1[2]);
  t446 = Sin(var1[5]);
  t98 = Cos(var1[6]);
  t348 = t290*t322;
  t555 = -1.*t351*t446;
  t629 = t348 + t555;
  t676 = -1.*t322*t351;
  t697 = -1.*t290*t446;
  t714 = t676 + t697;
  t716 = Sin(var1[6]);
  t218 = -1.*t98;
  t288 = 1. + t218;
  t673 = 0.4*t288*t629;
  t739 = -0.4*t714*t716;
  t742 = t98*t629;
  t751 = t714*t716;
  t752 = t742 + t751;
  t806 = 0.8*t752;
  t814 = t673 + t739 + t806;
  t874 = t322*t351;
  t894 = t290*t446;
  t895 = t874 + t894;
  t990 = -1.*t290*t322;
  t1041 = t351*t446;
  t1058 = t990 + t1041;
  t988 = 0.4*t288*t714;
  t1065 = -0.4*t1058*t716;
  t1100 = t98*t714;
  t1105 = t1058*t716;
  t1107 = t1100 + t1105;
  t1121 = 0.8*t1107;
  t1124 = t988 + t1065 + t1121;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=1.;
  p_output1[3]=t814;
  p_output1[4]=t814;
  p_output1[5]=0.4*t716*t895 + 0.8*(t742 - 1.*t716*t895) - 0.4*t629*t98;
  p_output1[6]=1.;
  p_output1[7]=t1124;
  p_output1[8]=t1124;
  p_output1[9]=0.4*t629*t716 + 0.8*(t1100 - 1.*t629*t716) - 0.4*t714*t98;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_output_boundary_RightStance.hh"

namespace RightStance
{

void J_output_boundary_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
