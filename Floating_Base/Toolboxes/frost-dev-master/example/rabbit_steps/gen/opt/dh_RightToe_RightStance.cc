/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:52:05 GMT-04:00
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
  double t4811;
  double t4817;
  double t4810;
  double t4818;
  double t1466;
  double t4816;
  double t4837;
  double t4845;
  double t4854;
  double t4856;
  double t4861;
  double t4862;
  double t1991;
  double t4795;
  double t4849;
  double t4867;
  double t4869;
  double t4870;
  double t4872;
  double t4873;
  double t4874;
  double t4886;
  double t4890;
  double t4891;
  double t4914;
  double t4931;
  double t4932;
  double t4936;
  double t4925;
  double t4937;
  double t4938;
  double t4939;
  double t4943;
  double t4944;
  t4811 = Cos(var1[3]);
  t4817 = Sin(var1[2]);
  t4810 = Cos(var1[2]);
  t4818 = Sin(var1[3]);
  t1466 = Cos(var1[4]);
  t4816 = t4810*t4811;
  t4837 = -1.*t4817*t4818;
  t4845 = t4816 + t4837;
  t4854 = -1.*t4811*t4817;
  t4856 = -1.*t4810*t4818;
  t4861 = t4854 + t4856;
  t4862 = Sin(var1[4]);
  t1991 = -1.*t1466;
  t4795 = 1. + t1991;
  t4849 = 0.4*t4795*t4845;
  t4867 = -0.4*t4861*t4862;
  t4869 = t1466*t4845;
  t4870 = t4861*t4862;
  t4872 = t4869 + t4870;
  t4873 = 0.8*t4872;
  t4874 = t4849 + t4867 + t4873;
  t4886 = t4811*t4817;
  t4890 = t4810*t4818;
  t4891 = t4886 + t4890;
  t4914 = t1466*t4861;
  t4931 = -1.*t4810*t4811;
  t4932 = t4817*t4818;
  t4936 = t4931 + t4932;
  t4925 = 0.4*t4795*t4861;
  t4937 = -0.4*t4936*t4862;
  t4938 = t4936*t4862;
  t4939 = t4914 + t4938;
  t4943 = 0.8*t4939;
  t4944 = t4925 + t4937 + t4943;
  p_output1[0]=var2[0] + t4874*var2[2] + t4874*var2[3] + (-0.4*t1466*t4845 + 0.4*t4862*t4891 + 0.8*(t4869 - 1.*t4862*t4891))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t4944*var2[2] + t4944*var2[3] + (-0.4*t1466*t4861 + 0.4*t4845*t4862 + 0.8*(-1.*t4845*t4862 + t4914))*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightToe_RightStance.hh"

namespace RightStance
{

void dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
