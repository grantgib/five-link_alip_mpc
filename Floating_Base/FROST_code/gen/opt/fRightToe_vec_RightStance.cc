/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:13 GMT-04:00
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
  double t4505;
  double t4514;
  double t4409;
  double t4635;
  double t3641;
  double t4513;
  double t4675;
  double t4696;
  double t4735;
  double t4740;
  double t4753;
  double t4764;
  double t3819;
  double t4116;
  double t7929;
  double t7934;
  double t8127;
  double t4725;
  double t4811;
  double t7562;
  double t7843;
  double t7846;
  double t7847;
  double t7910;
  double t7911;
  double t7925;
  double t8128;
  double t8205;
  double t8208;
  double t8252;
  double t8359;
  double t8487;
  double t9185;
  double t9306;
  double t9575;
  double t9606;
  double t11480;
  t4505 = Cos(var1[3]);
  t4514 = Sin(var1[2]);
  t4409 = Cos(var1[2]);
  t4635 = Sin(var1[3]);
  t3641 = Cos(var1[4]);
  t4513 = t4409*t4505;
  t4675 = -1.*t4514*t4635;
  t4696 = t4513 + t4675;
  t4735 = -1.*t4505*t4514;
  t4740 = -1.*t4409*t4635;
  t4753 = t4735 + t4740;
  t4764 = Sin(var1[4]);
  t3819 = -1.*t3641;
  t4116 = 1. + t3819;
  t7929 = -1.*t4409*t4505;
  t7934 = t4514*t4635;
  t8127 = t7929 + t7934;
  t4725 = 0.4*t4116*t4696;
  t4811 = -0.4*t4753*t4764;
  t7562 = t3641*t4696;
  t7843 = t4753*t4764;
  t7846 = t7562 + t7843;
  t7847 = 0.8*t7846;
  t7910 = t4725 + t4811 + t7847;
  t7911 = var2[0]*t7910;
  t7925 = 0.4*t4116*t4753;
  t8128 = -0.4*t8127*t4764;
  t8205 = t3641*t4753;
  t8208 = t8127*t4764;
  t8252 = t8205 + t8208;
  t8359 = 0.8*t8252;
  t8487 = t7925 + t8128 + t8359;
  t9185 = var2[2]*t8487;
  t9306 = t7911 + t9185;
  t9575 = t4505*t4514;
  t9606 = t4409*t4635;
  t11480 = t9575 + t9606;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t9306;
  p_output1[3]=t9306;
  p_output1[4]=(-0.4*t3641*t4696 + 0.4*t11480*t4764 + 0.8*(-1.*t11480*t4764 + t7562))*var2[0] + (-0.4*t3641*t4753 + 0.4*t4696*t4764 + 0.8*(-1.*t4696*t4764 + t8205))*var2[2];
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

namespace RightStance
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
