/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:57:41 GMT-04:00
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
  double t853;
  double t842;
  double t843;
  double t854;
  double t841;
  double t852;
  double t855;
  double t856;
  double t858;
  double t859;
  double t860;
  double t862;
  double t864;
  double t894;
  double t895;
  double t896;
  double t891;
  double t892;
  double t893;
  double t897;
  double t898;
  double t899;
  double t900;
  double t901;
  double t857;
  double t863;
  double t865;
  double t866;
  double t888;
  double t889;
  double t890;
  double t902;
  double t903;
  double t904;
  double t909;
  double t910;
  double t911;
  double t921;
  double t922;
  double t923;
  double t924;
  double t925;
  double t926;
  double t927;
  double t936;
  double t944;
  double t947;
  double t948;
  double t949;
  double t950;
  double t951;
  double t934;
  double t935;
  double t937;
  double t938;
  double t941;
  double t942;
  double t943;
  double t952;
  double t953;
  double t954;
  t853 = Cos(var1[2]);
  t842 = Cos(var1[3]);
  t843 = Sin(var1[2]);
  t854 = Sin(var1[3]);
  t841 = Cos(var1[4]);
  t852 = -1.*t842*t843;
  t855 = -1.*t853*t854;
  t856 = t852 + t855;
  t858 = t853*t842;
  t859 = -1.*t843*t854;
  t860 = t858 + t859;
  t862 = Sin(var1[4]);
  t864 = t841*t856;
  t894 = -1.*t853*t842;
  t895 = t843*t854;
  t896 = t894 + t895;
  t891 = -1.*t841;
  t892 = 1. + t891;
  t893 = 0.4*t892*t856;
  t897 = -0.4*t896*t862;
  t898 = t896*t862;
  t899 = t864 + t898;
  t900 = 0.8*t899;
  t901 = t893 + t897 + t900;
  t857 = -0.4*t841*t856;
  t863 = 0.4*t860*t862;
  t865 = -1.*t860*t862;
  t866 = t864 + t865;
  t888 = 0.8*t866;
  t889 = t857 + t863 + t888;
  t890 = var2[4]*t889;
  t902 = var2[2]*t901;
  t903 = var2[3]*t901;
  t904 = t890 + t902 + t903;
  t909 = t842*t843;
  t910 = t853*t854;
  t911 = t909 + t910;
  t921 = 0.4*t892*t860;
  t922 = -0.4*t856*t862;
  t923 = t841*t860;
  t924 = t856*t862;
  t925 = t923 + t924;
  t926 = 0.8*t925;
  t927 = t921 + t922 + t926;
  t936 = t841*t896;
  t944 = 0.4*t892*t896;
  t947 = -0.4*t911*t862;
  t948 = t911*t862;
  t949 = t936 + t948;
  t950 = 0.8*t949;
  t951 = t944 + t947 + t950;
  t934 = -0.4*t841*t896;
  t935 = 0.4*t856*t862;
  t937 = -1.*t856*t862;
  t938 = t936 + t937;
  t941 = 0.8*t938;
  t942 = t934 + t935 + t941;
  t943 = var2[4]*t942;
  t952 = var2[2]*t951;
  t953 = var2[3]*t951;
  t954 = t943 + t952 + t953;
  p_output1[0]=t904;
  p_output1[1]=t904;
  p_output1[2]=t889*var2[2] + t889*var2[3] + (t863 + 0.4*t841*t911 + 0.8*(t865 - 1.*t841*t911))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t927;
  p_output1[5]=t927;
  p_output1[6]=-0.4*t841*t860 + 0.4*t862*t911 + 0.8*(-1.*t862*t911 + t923);
  p_output1[7]=t954;
  p_output1[8]=t954;
  p_output1[9]=t942*var2[2] + t942*var2[3] + (0.4*t841*t860 + t935 + 0.8*(-1.*t841*t860 + t937))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t901;
  p_output1[12]=t901;
  p_output1[13]=t889;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RightToe_RightStance.hh"

namespace RightStance
{

void J_dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
