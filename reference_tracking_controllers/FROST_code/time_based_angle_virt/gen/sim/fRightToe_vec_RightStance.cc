/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:35:09 GMT-05:00
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
  double t5703;
  double t5715;
  double t5702;
  double t5716;
  double t5696;
  double t5704;
  double t5717;
  double t5718;
  double t5720;
  double t5721;
  double t5722;
  double t5723;
  double t5700;
  double t5701;
  double t5732;
  double t5733;
  double t5734;
  double t5719;
  double t5724;
  double t5725;
  double t5726;
  double t5727;
  double t5728;
  double t5729;
  double t5730;
  double t5731;
  double t5735;
  double t5736;
  double t5737;
  double t5738;
  double t5739;
  double t5740;
  double t5741;
  double t5742;
  double t5744;
  double t5745;
  double t5746;
  t5703 = Cos(var1[3]);
  t5715 = Sin(var1[2]);
  t5702 = Cos(var1[2]);
  t5716 = Sin(var1[3]);
  t5696 = Cos(var1[4]);
  t5704 = t5702*t5703;
  t5717 = -1.*t5715*t5716;
  t5718 = t5704 + t5717;
  t5720 = -1.*t5703*t5715;
  t5721 = -1.*t5702*t5716;
  t5722 = t5720 + t5721;
  t5723 = Sin(var1[4]);
  t5700 = -1.*t5696;
  t5701 = 1. + t5700;
  t5732 = -1.*t5702*t5703;
  t5733 = t5715*t5716;
  t5734 = t5732 + t5733;
  t5719 = 0.4*t5701*t5718;
  t5724 = -0.4*t5722*t5723;
  t5725 = t5696*t5718;
  t5726 = t5722*t5723;
  t5727 = t5725 + t5726;
  t5728 = 0.8*t5727;
  t5729 = t5719 + t5724 + t5728;
  t5730 = var2[0]*t5729;
  t5731 = 0.4*t5701*t5722;
  t5735 = -0.4*t5734*t5723;
  t5736 = t5696*t5722;
  t5737 = t5734*t5723;
  t5738 = t5736 + t5737;
  t5739 = 0.8*t5738;
  t5740 = t5731 + t5735 + t5739;
  t5741 = var2[2]*t5740;
  t5742 = t5730 + t5741;
  t5744 = t5703*t5715;
  t5745 = t5702*t5716;
  t5746 = t5744 + t5745;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t5742;
  p_output1[3]=t5742;
  p_output1[4]=(-0.4*t5696*t5718 + 0.4*t5723*t5746 + 0.8*(t5725 - 1.*t5723*t5746))*var2[0] + (-0.4*t5696*t5722 + 0.4*t5718*t5723 + 0.8*(-1.*t5718*t5723 + t5736))*var2[2];
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

namespace SymFunction
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
