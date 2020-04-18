/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 14:53:45 GMT-04:00
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
  double t841;
  double t858;
  double t840;
  double t859;
  double t828;
  double t842;
  double t860;
  double t866;
  double t868;
  double t869;
  double t870;
  double t871;
  double t835;
  double t836;
  double t867;
  double t872;
  double t873;
  double t874;
  double t878;
  double t879;
  double t880;
  double t884;
  double t885;
  double t886;
  double t901;
  double t908;
  double t909;
  double t910;
  double t907;
  double t911;
  double t912;
  double t925;
  double t926;
  double t927;
  t841 = Cos(var1[3]);
  t858 = Sin(var1[2]);
  t840 = Cos(var1[2]);
  t859 = Sin(var1[3]);
  t828 = Cos(var1[4]);
  t842 = t840*t841;
  t860 = -1.*t858*t859;
  t866 = t842 + t860;
  t868 = -1.*t841*t858;
  t869 = -1.*t840*t859;
  t870 = t868 + t869;
  t871 = Sin(var1[4]);
  t835 = -1.*t828;
  t836 = 1. + t835;
  t867 = 0.4*t836*t866;
  t872 = -0.4*t870*t871;
  t873 = t828*t866;
  t874 = t870*t871;
  t878 = t873 + t874;
  t879 = 0.8*t878;
  t880 = t867 + t872 + t879;
  t884 = t841*t858;
  t885 = t840*t859;
  t886 = t884 + t885;
  t901 = t828*t870;
  t908 = -1.*t840*t841;
  t909 = t858*t859;
  t910 = t908 + t909;
  t907 = 0.4*t836*t870;
  t911 = -0.4*t910*t871;
  t912 = t910*t871;
  t925 = t901 + t912;
  t926 = 0.8*t925;
  t927 = t907 + t911 + t926;
  p_output1[0]=var2[0] + t880*var2[2] + t880*var2[3] + (-0.4*t828*t866 + 0.4*t871*t886 + 0.8*(t873 - 1.*t871*t886))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t927*var2[2] + t927*var2[3] + (-0.4*t828*t870 + 0.4*t866*t871 + 0.8*(-1.*t866*t871 + t901))*var2[4];
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
