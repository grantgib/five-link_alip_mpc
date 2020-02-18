/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:57:10 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t919;
  double t916;
  double t917;
  double t920;
  double t908;
  double t918;
  double t928;
  double t929;
  double t931;
  double t932;
  double t933;
  double t955;
  double t914;
  double t915;
  double t962;
  double t963;
  double t964;
  double t961;
  double t965;
  double t966;
  double t967;
  double t968;
  double t969;
  double t970;
  double t975;
  double t976;
  double t977;
  double t978;
  double t979;
  double t980;
  double t983;
  double t984;
  double t985;
  double t986;
  double t987;
  double t988;
  double t989;
  double t1002;
  double t1003;
  double t1004;
  double t1001;
  double t1005;
  double t1006;
  double t1007;
  double t1008;
  double t1009;
  double t1000;
  double t1010;
  double t1011;
  double t1012;
  double t1022;
  double t1024;
  double t1029;
  double t1030;
  double t1031;
  double t1032;
  double t1033;
  double t1039;
  double t1040;
  double t1041;
  double t1042;
  double t1043;
  double t1044;
  double t1038;
  double t1045;
  double t1046;
  double t1047;
  t919 = Cos(var1[2]);
  t916 = Cos(var1[3]);
  t917 = Sin(var1[2]);
  t920 = Sin(var1[3]);
  t908 = Cos(var1[4]);
  t918 = t916*t917;
  t928 = t919*t920;
  t929 = t918 + t928;
  t931 = t919*t916;
  t932 = -1.*t917*t920;
  t933 = t931 + t932;
  t955 = Sin(var1[4]);
  t914 = -1.*t908;
  t915 = 1. + t914;
  t962 = -1.*t916*t917;
  t963 = -1.*t919*t920;
  t964 = t962 + t963;
  t961 = 0.4*t915*t933;
  t965 = -0.4*t964*t955;
  t966 = t908*t933;
  t967 = t964*t955;
  t968 = t966 + t967;
  t969 = 0.8*t968;
  t970 = t961 + t965 + t969;
  t975 = -0.4*t908*t933;
  t976 = 0.4*t929*t955;
  t977 = -1.*t929*t955;
  t978 = t966 + t977;
  t979 = 0.8*t978;
  t980 = t975 + t976 + t979;
  t983 = -0.4*t908*t964;
  t984 = 0.4*t933*t955;
  t985 = t908*t964;
  t986 = -1.*t933*t955;
  t987 = t985 + t986;
  t988 = 0.8*t987;
  t989 = t983 + t984 + t988;
  t1002 = -1.*t919*t916;
  t1003 = t917*t920;
  t1004 = t1002 + t1003;
  t1001 = 0.4*t915*t964;
  t1005 = -0.4*t1004*t955;
  t1006 = t1004*t955;
  t1007 = t985 + t1006;
  t1008 = 0.8*t1007;
  t1009 = t1001 + t1005 + t1008;
  t1000 = var2[4]*t989;
  t1010 = var2[2]*t1009;
  t1011 = var2[3]*t1009;
  t1012 = t1000 + t1010 + t1011;
  t1022 = 0.4*t964*t955;
  t1024 = -1.*t964*t955;
  t1029 = -0.4*t908*t1004;
  t1030 = t908*t1004;
  t1031 = t1030 + t1024;
  t1032 = 0.8*t1031;
  t1033 = t1029 + t1022 + t1032;
  t1039 = 0.4*t915*t1004;
  t1040 = -0.4*t929*t955;
  t1041 = t929*t955;
  t1042 = t1030 + t1041;
  t1043 = 0.8*t1042;
  t1044 = t1039 + t1040 + t1043;
  t1038 = var2[4]*t1033;
  t1045 = var2[2]*t1044;
  t1046 = var2[3]*t1044;
  t1047 = t1038 + t1045 + t1046;
  p_output1[0]=0.4*t915*t929 - 0.4*t933*t955 + 0.8*(t908*t929 + t933*t955) + var1[0] + var2[0] + t1012*var2[2] + t970*var2[2] + t1012*var2[3] + t970*var2[3] + t980*var2[4] + var2[4]*(t989*var2[2] + t989*var2[3] + (0.4*t908*t929 + t984 + 0.8*(-1.*t908*t929 + t986))*var2[4]) + var3[0] + t970*var3[2] + t970*var3[3] + t980*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t1000 + t1010 + t1011 + t961 + t965 + t969 + var1[1] + var2[1] + t1047*var2[2] + t1047*var2[3] + var2[4]*(t1033*var2[2] + t1033*var2[3] + (t1022 + 0.4*t908*t933 + 0.8*(t1024 - 1.*t908*t933))*var2[4]) + var3[1] + t1009*var3[2] + t1009*var3[3] + t989*var3[4] - 1.*var4[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightToe_RightStance.hh"

namespace RightStance
{

void ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
