/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:35:13 GMT-05:00
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
  double t5771;
  double t5773;
  double t5770;
  double t5784;
  double t979;
  double t5772;
  double t5785;
  double t5786;
  double t5788;
  double t5789;
  double t5790;
  double t5791;
  double t5765;
  double t5769;
  double t5800;
  double t5801;
  double t5802;
  double t5787;
  double t5792;
  double t5793;
  double t5794;
  double t5795;
  double t5796;
  double t5797;
  double t5798;
  double t5799;
  double t5803;
  double t5804;
  double t5805;
  double t5806;
  double t5807;
  double t5808;
  double t5809;
  double t5810;
  double t5812;
  double t5813;
  double t5814;
  t5771 = Cos(var1[3]);
  t5773 = Sin(var1[2]);
  t5770 = Cos(var1[2]);
  t5784 = Sin(var1[3]);
  t979 = Cos(var1[4]);
  t5772 = t5770*t5771;
  t5785 = -1.*t5773*t5784;
  t5786 = t5772 + t5785;
  t5788 = -1.*t5771*t5773;
  t5789 = -1.*t5770*t5784;
  t5790 = t5788 + t5789;
  t5791 = Sin(var1[4]);
  t5765 = -1.*t979;
  t5769 = 1. + t5765;
  t5800 = -1.*t5770*t5771;
  t5801 = t5773*t5784;
  t5802 = t5800 + t5801;
  t5787 = 0.4*t5769*t5786;
  t5792 = -0.4*t5790*t5791;
  t5793 = t979*t5786;
  t5794 = t5790*t5791;
  t5795 = t5793 + t5794;
  t5796 = 0.8*t5795;
  t5797 = t5787 + t5792 + t5796;
  t5798 = var2[0]*t5797;
  t5799 = 0.4*t5769*t5790;
  t5803 = -0.4*t5802*t5791;
  t5804 = t979*t5790;
  t5805 = t5802*t5791;
  t5806 = t5804 + t5805;
  t5807 = 0.8*t5806;
  t5808 = t5799 + t5803 + t5807;
  t5809 = var2[2]*t5808;
  t5810 = t5798 + t5809;
  t5812 = t5771*t5773;
  t5813 = t5770*t5784;
  t5814 = t5812 + t5813;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t5810;
  p_output1[3]=t5810;
  p_output1[4]=(0.4*t5791*t5814 + 0.8*(t5793 - 1.*t5791*t5814) - 0.4*t5786*t979)*var2[0] + (0.4*t5786*t5791 + 0.8*(-1.*t5786*t5791 + t5804) - 0.4*t5790*t979)*var2[2];
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
