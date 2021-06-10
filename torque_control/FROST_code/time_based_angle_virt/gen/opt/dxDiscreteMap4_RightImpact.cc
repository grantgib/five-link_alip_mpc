/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:04:35 GMT-05:00
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
  double t920;
  double t912;
  double t916;
  double t921;
  double t911;
  double t919;
  double t922;
  double t923;
  double t924;
  double t926;
  double t930;
  double t931;
  double t932;
  double t933;
  double t934;
  double t940;
  double t941;
  double t942;
  double t943;
  double t944;
  double t955;
  double t956;
  double t957;
  double t958;
  double t959;
  double t960;
  double t985;
  double t986;
  double t987;
  double t989;
  double t990;
  double t991;
  double t885;
  double t906;
  double t966;
  double t967;
  double t968;
  double t936;
  double t938;
  double t950;
  double t951;
  double t952;
  double t970;
  double t971;
  double t945;
  double t946;
  double t947;
  double t948;
  double t964;
  double t965;
  double t975;
  double t976;
  double t969;
  double t972;
  double t973;
  double t983;
  double t984;
  double t988;
  double t992;
  double t993;
  double t995;
  double t997;
  double t998;
  double t994;
  double t999;
  double t1000;
  double t1015;
  double t1016;
  double t1017;
  double t1004;
  double t1005;
  double t1006;
  double t949;
  double t961;
  double t962;
  double t1023;
  double t1024;
  double t1025;
  double t1036;
  double t1037;
  double t1020;
  double t1021;
  t920 = Cos(var2[3]);
  t912 = Cos(var2[4]);
  t916 = Sin(var2[3]);
  t921 = Sin(var2[4]);
  t911 = Sin(var2[2]);
  t919 = -1.*t912*t916;
  t922 = -1.*t920*t921;
  t923 = t919 + t922;
  t924 = t911*t923;
  t926 = Cos(var2[2]);
  t930 = t920*t912;
  t931 = -1.*t916*t921;
  t932 = t930 + t931;
  t933 = t926*t932;
  t934 = t924 + t933;
  t940 = -1.*t912;
  t941 = 1. + t940;
  t942 = 0.4*t941;
  t943 = 0.64*t912;
  t944 = t942 + t943;
  t955 = t912*t916;
  t956 = t920*t921;
  t957 = t955 + t956;
  t958 = t926*t957;
  t959 = t911*t932;
  t960 = t958 + t959;
  t985 = t944*t916;
  t986 = 0.24*t920*t921;
  t987 = t985 + t986;
  t989 = t920*t944;
  t990 = -0.24*t916*t921;
  t991 = t989 + t990;
  t885 = -1.*var1[4];
  t906 = var3[4] + t885;
  t966 = t926*t923;
  t967 = -1.*t911*t932;
  t968 = t966 + t967;
  t936 = -1.*var1[3];
  t938 = var3[3] + t936;
  t950 = t944*t921;
  t951 = -0.24*t912*t921;
  t952 = t950 + t951;
  t970 = -1.*t911*t957;
  t971 = t970 + t933;
  t945 = t944*t912;
  t946 = Power(t921,2);
  t947 = 0.24*t946;
  t948 = t945 + t947;
  t964 = -1.*var1[1];
  t965 = var3[1] + t964;
  t975 = -1.*var1[0];
  t976 = var3[0] + t975;
  t969 = 3.2*t934*t968;
  t972 = 3.2*t971*t960;
  t973 = t969 + t972;
  t983 = -1.*var1[2];
  t984 = var3[2] + t983;
  t988 = -1.*t987*t932;
  t992 = -1.*t923*t991;
  t993 = t988 + t992;
  t995 = t987*t957;
  t997 = t932*t991;
  t998 = t995 + t997;
  t994 = 3.2*t960*t993;
  t999 = 3.2*t934*t998;
  t1000 = t994 + t999;
  t1015 = 3.2*t971*t993;
  t1016 = 3.2*t968*t998;
  t1017 = t1015 + t1016;
  t1004 = 3.2*t952*t971;
  t1005 = 3.2*t948*t968;
  t1006 = t1004 + t1005;
  t949 = 3.2*t948*t934;
  t961 = 3.2*t952*t960;
  t962 = t949 + t961;
  t1023 = 3.2*t952*t993;
  t1024 = 3.2*t948*t998;
  t1025 = 0.2 + t1023 + t1024;
  t1036 = 0.768*t948;
  t1037 = 0.2 + t1036;
  t1020 = 0.768*t998;
  t1021 = 0.2 + t1020;
  p_output1[0]=0.768*t906*t934 + t938*t962 + t965*t973 + (3.2*Power(t934,2) + 3.2*Power(t960,2))*t976 + t1000*t984;
  p_output1[1]=t1006*t938 + 0.768*t906*t968 + t965*(3.2*Power(t968,2) + 3.2*Power(t971,2)) + t973*t976 + t1017*t984;
  p_output1[2]=t1021*t906 + t1025*t938 + t1017*t965 + t1000*t976 + t984*(0.2 + 3.2*Power(t993,2) + 3.2*Power(t998,2));
  p_output1[3]=t1037*t906 + t938*(0.2 + 3.2*Power(t948,2) + 3.2*Power(t952,2)) + t1006*t965 + t962*t976 + t1025*t984;
  p_output1[4]=0.38432*t906 + t1037*t938 + 0.768*t965*t968 + 0.768*t934*t976 + t1021*t984;
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

#include "dxDiscreteMap4_RightImpact.hh"

namespace RightImpact
{

void dxDiscreteMap4_RightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
