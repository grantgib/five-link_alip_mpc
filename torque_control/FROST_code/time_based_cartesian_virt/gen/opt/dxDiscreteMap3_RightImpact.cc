/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:04:34 GMT-05:00
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
  double t898;
  double t901;
  double t906;
  double t907;
  double t909;
  double t910;
  double t911;
  double t932;
  double t933;
  double t934;
  double t857;
  double t885;
  double t928;
  double t929;
  double t930;
  double t913;
  double t916;
  double t919;
  double t920;
  double t921;
  double t922;
  double t923;
  double t939;
  double t940;
  double t931;
  double t935;
  double t936;
  double t925;
  double t926;
  double t943;
  double t944;
  double t960;
  double t961;
  t898 = Cos(var2[2]);
  t901 = Cos(var2[5]);
  t906 = t898*t901;
  t907 = Sin(var2[2]);
  t909 = Sin(var2[5]);
  t910 = -1.*t907*t909;
  t911 = t906 + t910;
  t932 = t901*t907;
  t933 = t898*t909;
  t934 = t932 + t933;
  t857 = -1.*var1[5];
  t885 = var3[5] + t857;
  t928 = -1.*t901*t907;
  t929 = -1.*t898*t909;
  t930 = t928 + t929;
  t913 = -1.*var1[2];
  t916 = var3[2] + t913;
  t919 = Power(t901,2);
  t920 = 0.11*t919;
  t921 = Power(t909,2);
  t922 = 0.11*t921;
  t923 = t920 + t922;
  t939 = -1.*var1[0];
  t940 = var3[0] + t939;
  t931 = 6.8*t930*t911;
  t935 = 6.8*t934*t911;
  t936 = t931 + t935;
  t925 = -1.*var1[1];
  t926 = var3[1] + t925;
  t943 = Power(t911,2);
  t944 = 6.8*t943;
  t960 = 0.748*t923;
  t961 = 0.47 + t960;
  p_output1[0]=0.748*t885*t911 + 6.8*t911*t916*t923 + t926*t936 + t940*(6.8*Power(t934,2) + t944);
  p_output1[1]=0.748*t885*t930 + 6.8*t916*t923*t930 + t936*t940 + t926*(6.8*Power(t930,2) + t944);
  p_output1[2]=t916*(0.47 + 6.8*Power(t923,2)) + 6.8*t923*t926*t930 + 6.8*t911*t923*t940 + t885*t961;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0.55228*t885 + 0.748*t926*t930 + 0.748*t911*t940 + t916*t961;
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

#include "dxDiscreteMap3_RightImpact.hh"

namespace RightImpact
{

void dxDiscreteMap3_RightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
