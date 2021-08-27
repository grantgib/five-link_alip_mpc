/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:17 GMT-05:00
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
  double t1617;
  double t1958;
  double t1163;
  double t2121;
  double t83;
  double t1621;
  double t2145;
  double t2388;
  double t3250;
  double t3271;
  double t3439;
  double t3492;
  double t639;
  double t879;
  double t3653;
  double t3673;
  double t3680;
  double t2768;
  double t3494;
  double t3495;
  double t3496;
  double t3571;
  double t3599;
  double t3647;
  double t3650;
  double t3651;
  double t3684;
  double t3759;
  double t3780;
  double t3829;
  double t3837;
  double t3839;
  double t3845;
  double t3848;
  double t3855;
  double t3857;
  double t3858;
  t1617 = Cos(var1[3]);
  t1958 = Sin(var1[2]);
  t1163 = Cos(var1[2]);
  t2121 = Sin(var1[3]);
  t83 = Cos(var1[4]);
  t1621 = t1163*t1617;
  t2145 = -1.*t1958*t2121;
  t2388 = t1621 + t2145;
  t3250 = -1.*t1617*t1958;
  t3271 = -1.*t1163*t2121;
  t3439 = t3250 + t3271;
  t3492 = Sin(var1[4]);
  t639 = -1.*t83;
  t879 = 1. + t639;
  t3653 = -1.*t1163*t1617;
  t3673 = t1958*t2121;
  t3680 = t3653 + t3673;
  t2768 = 0.4*t879*t2388;
  t3494 = -0.4*t3439*t3492;
  t3495 = t83*t2388;
  t3496 = t3439*t3492;
  t3571 = t3495 + t3496;
  t3599 = 0.8*t3571;
  t3647 = t2768 + t3494 + t3599;
  t3650 = var2[0]*t3647;
  t3651 = 0.4*t879*t3439;
  t3684 = -0.4*t3680*t3492;
  t3759 = t83*t3439;
  t3780 = t3680*t3492;
  t3829 = t3759 + t3780;
  t3837 = 0.8*t3829;
  t3839 = t3651 + t3684 + t3837;
  t3845 = var2[2]*t3839;
  t3848 = t3650 + t3845;
  t3855 = t1617*t1958;
  t3857 = t1163*t2121;
  t3858 = t3855 + t3857;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t3848;
  p_output1[3]=t3848;
  p_output1[4]=(0.4*t3492*t3858 + 0.8*(t3495 - 1.*t3492*t3858) - 0.4*t2388*t83)*var2[0] + (0.4*t2388*t3492 + 0.8*(-1.*t2388*t3492 + t3759) - 0.4*t3439*t83)*var2[2];
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
