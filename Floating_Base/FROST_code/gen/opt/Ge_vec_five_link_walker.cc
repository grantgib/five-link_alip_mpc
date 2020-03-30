/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:48:16 GMT-04:00
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
  double t6873;
  double t8884;
  double t8885;
  double t8886;
  double t8893;
  double t8894;
  double t8895;
  double t8932;
  double t10725;
  double t10744;
  double t10813;
  double t12139;
  double t14067;
  double t14495;
  double t14497;
  double t14519;
  double t14532;
  double t14599;
  double t14617;
  double t14633;
  double t14634;
  double t14638;
  double t8931;
  double t9227;
  double t9736;
  double t9737;
  double t12284;
  double t12299;
  double t13113;
  double t13114;
  double t13128;
  double t13202;
  double t14057;
  double t14818;
  double t14819;
  double t14820;
  double t14598;
  double t14600;
  double t14603;
  double t14614;
  double t14639;
  double t14663;
  double t14679;
  double t14683;
  double t14685;
  double t14686;
  double t14689;
  double t14852;
  double t14853;
  double t14854;
  t6873 = Sin(var1[2]);
  t8884 = Cos(var1[3]);
  t8885 = -1.*t8884*t6873;
  t8886 = Cos(var1[2]);
  t8893 = Sin(var1[3]);
  t8894 = -1.*t8886*t8893;
  t8895 = t8885 + t8894;
  t8932 = Cos(var1[4]);
  t10725 = -1.*t8886*t8884;
  t10744 = t6873*t8893;
  t10813 = t10725 + t10744;
  t12139 = Sin(var1[4]);
  t14067 = Cos(var1[5]);
  t14495 = -1.*t14067*t6873;
  t14497 = Sin(var1[5]);
  t14519 = -1.*t8886*t14497;
  t14532 = t14495 + t14519;
  t14599 = Cos(var1[6]);
  t14617 = -1.*t8886*t14067;
  t14633 = t6873*t14497;
  t14634 = t14617 + t14633;
  t14638 = Sin(var1[6]);
  t8931 = -7.33788*t8895;
  t9227 = -1.*t8932;
  t9736 = 1. + t9227;
  t9737 = 0.4*t9736*t8895;
  t12284 = -0.4*t10813*t12139;
  t12299 = t8932*t8895;
  t13113 = t10813*t12139;
  t13114 = t12299 + t13113;
  t13128 = 0.64*t13114;
  t13202 = t9737 + t12284 + t13128;
  t14057 = -31.392000000000003*t13202;
  t14818 = t8886*t8884;
  t14819 = -1.*t6873*t8893;
  t14820 = t14818 + t14819;
  t14598 = -7.33788*t14532;
  t14600 = -1.*t14599;
  t14603 = 1. + t14600;
  t14614 = 0.4*t14603*t14532;
  t14639 = -0.4*t14634*t14638;
  t14663 = t14599*t14532;
  t14679 = t14634*t14638;
  t14683 = t14663 + t14679;
  t14685 = 0.64*t14683;
  t14686 = t14614 + t14639 + t14685;
  t14689 = -31.392000000000003*t14686;
  t14852 = t8886*t14067;
  t14853 = -1.*t6873*t14497;
  t14854 = t14852 + t14853;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=t14057 + t14598 + t14689 + 28.252799999999997*t6873 + t8931;
  p_output1[3]=t14057 + t8931;
  p_output1[4]=-31.392000000000003*(0.4*t12139*t14820 + 0.64*(t12299 - 1.*t12139*t14820) - 0.4*t8895*t8932);
  p_output1[5]=t14598 + t14689;
  p_output1[6]=-31.392000000000003*(-0.4*t14532*t14599 + 0.4*t14638*t14854 + 0.64*(t14663 - 1.*t14638*t14854));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_five_link_walker.hh"

namespace RightStance
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
