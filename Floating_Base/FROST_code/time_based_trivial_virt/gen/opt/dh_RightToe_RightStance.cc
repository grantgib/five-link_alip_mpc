/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:57:39 GMT-04:00
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
  double t801;
  double t818;
  double t800;
  double t819;
  double t788;
  double t802;
  double t820;
  double t826;
  double t828;
  double t829;
  double t830;
  double t831;
  double t795;
  double t796;
  double t827;
  double t832;
  double t833;
  double t834;
  double t838;
  double t839;
  double t840;
  double t844;
  double t845;
  double t846;
  double t861;
  double t868;
  double t869;
  double t870;
  double t867;
  double t871;
  double t872;
  double t885;
  double t886;
  double t887;
  t801 = Cos(var1[3]);
  t818 = Sin(var1[2]);
  t800 = Cos(var1[2]);
  t819 = Sin(var1[3]);
  t788 = Cos(var1[4]);
  t802 = t800*t801;
  t820 = -1.*t818*t819;
  t826 = t802 + t820;
  t828 = -1.*t801*t818;
  t829 = -1.*t800*t819;
  t830 = t828 + t829;
  t831 = Sin(var1[4]);
  t795 = -1.*t788;
  t796 = 1. + t795;
  t827 = 0.4*t796*t826;
  t832 = -0.4*t830*t831;
  t833 = t788*t826;
  t834 = t830*t831;
  t838 = t833 + t834;
  t839 = 0.8*t838;
  t840 = t827 + t832 + t839;
  t844 = t801*t818;
  t845 = t800*t819;
  t846 = t844 + t845;
  t861 = t788*t830;
  t868 = -1.*t800*t801;
  t869 = t818*t819;
  t870 = t868 + t869;
  t867 = 0.4*t796*t830;
  t871 = -0.4*t870*t831;
  t872 = t870*t831;
  t885 = t861 + t872;
  t886 = 0.8*t885;
  t887 = t867 + t871 + t886;
  p_output1[0]=var2[0] + t840*var2[2] + t840*var2[3] + (-0.4*t788*t826 + 0.4*t831*t846 + 0.8*(t833 - 1.*t831*t846))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t887*var2[2] + t887*var2[3] + (-0.4*t788*t830 + 0.4*t826*t831 + 0.8*(-1.*t826*t831 + t861))*var2[4];
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
