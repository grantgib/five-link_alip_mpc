/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:01:19 GMT-05:00
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
  double t8798;
  double t8805;
  double t8781;
  double t8806;
  double t3254;
  double t8804;
  double t8861;
  double t8868;
  double t8945;
  double t8949;
  double t8954;
  double t8955;
  double t3723;
  double t8762;
  double t9002;
  double t9003;
  double t9019;
  double t8944;
  double t8958;
  double t8959;
  double t8967;
  double t8976;
  double t8979;
  double t8987;
  double t8988;
  double t8993;
  double t9022;
  double t9025;
  double t9028;
  double t9032;
  double t9046;
  double t9054;
  double t9057;
  double t9070;
  double t9075;
  double t9076;
  double t9078;
  t8798 = Cos(var1[3]);
  t8805 = Sin(var1[2]);
  t8781 = Cos(var1[2]);
  t8806 = Sin(var1[3]);
  t3254 = Cos(var1[4]);
  t8804 = t8781*t8798;
  t8861 = -1.*t8805*t8806;
  t8868 = t8804 + t8861;
  t8945 = -1.*t8798*t8805;
  t8949 = -1.*t8781*t8806;
  t8954 = t8945 + t8949;
  t8955 = Sin(var1[4]);
  t3723 = -1.*t3254;
  t8762 = 1. + t3723;
  t9002 = -1.*t8781*t8798;
  t9003 = t8805*t8806;
  t9019 = t9002 + t9003;
  t8944 = 0.4*t8762*t8868;
  t8958 = -0.4*t8954*t8955;
  t8959 = t3254*t8868;
  t8967 = t8954*t8955;
  t8976 = t8959 + t8967;
  t8979 = 0.8*t8976;
  t8987 = t8944 + t8958 + t8979;
  t8988 = var2[0]*t8987;
  t8993 = 0.4*t8762*t8954;
  t9022 = -0.4*t9019*t8955;
  t9025 = t3254*t8954;
  t9028 = t9019*t8955;
  t9032 = t9025 + t9028;
  t9046 = 0.8*t9032;
  t9054 = t8993 + t9022 + t9046;
  t9057 = var2[2]*t9054;
  t9070 = t8988 + t9057;
  t9075 = t8798*t8805;
  t9076 = t8781*t8806;
  t9078 = t9075 + t9076;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t9070;
  p_output1[3]=t9070;
  p_output1[4]=(-0.4*t3254*t8868 + 0.4*t8955*t9078 + 0.8*(t8959 - 1.*t8955*t9078))*var2[0] + (-0.4*t3254*t8954 + 0.4*t8868*t8955 + 0.8*(-1.*t8868*t8955 + t9025))*var2[2];
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

#include "fRightToe_vec_RightImpact.hh"

namespace SymFunction
{

void fRightToe_vec_RightImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
