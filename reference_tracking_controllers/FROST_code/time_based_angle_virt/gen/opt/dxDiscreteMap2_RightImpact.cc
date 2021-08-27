/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:04:32 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t858;
  double t879;
  double t885;
  double t888;
  double t890;
  double t896;
  double t898;
  double t921;
  double t922;
  double t923;
  double t850;
  double t857;
  double t917;
  double t918;
  double t919;
  double t902;
  double t906;
  double t907;
  double t909;
  double t910;
  double t911;
  double t912;
  double t927;
  double t928;
  double t920;
  double t924;
  double t925;
  double t915;
  double t916;
  double t931;
  double t932;
  double t947;
  double t948;
  t858 = Cos(var2[2]);
  t879 = Cos(var2[3]);
  t885 = t858*t879;
  t888 = Sin(var2[2]);
  t890 = Sin(var2[3]);
  t896 = -1.*t888*t890;
  t898 = t885 + t896;
  t921 = t879*t888;
  t922 = t858*t890;
  t923 = t921 + t922;
  t850 = -1.*var1[3];
  t857 = var3[3] + t850;
  t917 = -1.*t879*t888;
  t918 = -1.*t858*t890;
  t919 = t917 + t918;
  t902 = -1.*var1[2];
  t906 = var3[2] + t902;
  t907 = Power(t879,2);
  t909 = 0.11*t907;
  t910 = Power(t890,2);
  t911 = 0.11*t910;
  t912 = t909 + t911;
  t927 = -1.*var1[0];
  t928 = var3[0] + t927;
  t920 = 6.8*t919*t898;
  t924 = 6.8*t923*t898;
  t925 = t920 + t924;
  t915 = -1.*var1[1];
  t916 = var3[1] + t915;
  t931 = Power(t898,2);
  t932 = 6.8*t931;
  t947 = 0.748*t912;
  t948 = 0.47 + t947;
  p_output1[0]=0.748*t857*t898 + 6.8*t898*t906*t912 + t916*t925 + t928*(6.8*Power(t923,2) + t932);
  p_output1[1]=0.748*t857*t919 + 6.8*t906*t912*t919 + t925*t928 + t916*(6.8*Power(t919,2) + t932);
  p_output1[2]=t906*(0.47 + 6.8*Power(t912,2)) + 6.8*t912*t916*t919 + 6.8*t898*t912*t928 + t857*t948;
  p_output1[3]=0.55228*t857 + 0.748*t916*t919 + 0.748*t898*t928 + t906*t948;
  p_output1[4]=0;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMap2_RightImpact.hh"

namespace RightImpact
{

void dxDiscreteMap2_RightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
