/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:52:00 GMT-04:00
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
  double t4739;
  double t4742;
  double t4731;
  double t4744;
  double t656;
  double t4740;
  double t4749;
  double t4750;
  double t4754;
  double t4767;
  double t4768;
  double t4769;
  double t1906;
  double t4722;
  double t4753;
  double t4770;
  double t4781;
  double t4782;
  double t4792;
  double t4793;
  double t4794;
  double t4796;
  double t4799;
  double t4802;
  double t4820;
  double t4821;
  double t4822;
  double t4819;
  double t4823;
  double t4824;
  double t4825;
  double t4826;
  double t4827;
  double t4828;
  t4739 = Cos(var1[3]);
  t4742 = Sin(var1[2]);
  t4731 = Cos(var1[2]);
  t4744 = Sin(var1[3]);
  t656 = Cos(var1[4]);
  t4740 = t4731*t4739;
  t4749 = -1.*t4742*t4744;
  t4750 = t4740 + t4749;
  t4754 = -1.*t4739*t4742;
  t4767 = -1.*t4731*t4744;
  t4768 = t4754 + t4767;
  t4769 = Sin(var1[4]);
  t1906 = -1.*t656;
  t4722 = 1. + t1906;
  t4753 = 0.4*t4722*t4750;
  t4770 = -0.4*t4768*t4769;
  t4781 = t656*t4750;
  t4782 = t4768*t4769;
  t4792 = t4781 + t4782;
  t4793 = 0.8*t4792;
  t4794 = t4753 + t4770 + t4793;
  t4796 = t4739*t4742;
  t4799 = t4731*t4744;
  t4802 = t4796 + t4799;
  t4820 = -1.*t4731*t4739;
  t4821 = t4742*t4744;
  t4822 = t4820 + t4821;
  t4819 = 0.4*t4722*t4768;
  t4823 = -0.4*t4822*t4769;
  t4824 = t656*t4768;
  t4825 = t4822*t4769;
  t4826 = t4824 + t4825;
  t4827 = 0.8*t4826;
  t4828 = t4819 + t4823 + t4827;
  p_output1[0]=1.;
  p_output1[1]=t4794;
  p_output1[2]=t4794;
  p_output1[3]=0.4*t4769*t4802 + 0.8*(t4781 - 1.*t4769*t4802) - 0.4*t4750*t656;
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t4828;
  p_output1[8]=t4828;
  p_output1[9]=0.4*t4750*t4769 + 0.8*(-1.*t4750*t4769 + t4824) - 0.4*t4768*t656;
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
