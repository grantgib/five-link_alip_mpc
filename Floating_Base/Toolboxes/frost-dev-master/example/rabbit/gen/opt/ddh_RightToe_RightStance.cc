/*
 * Automatically Generated from Mathematica.
 * Mon 6 Apr 2020 23:57:21 GMT-04:00
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
  double t959;
  double t956;
  double t957;
  double t960;
  double t948;
  double t958;
  double t968;
  double t969;
  double t971;
  double t972;
  double t973;
  double t995;
  double t954;
  double t955;
  double t1002;
  double t1003;
  double t1004;
  double t1001;
  double t1005;
  double t1006;
  double t1007;
  double t1008;
  double t1009;
  double t1010;
  double t1015;
  double t1016;
  double t1017;
  double t1018;
  double t1019;
  double t1020;
  double t1023;
  double t1024;
  double t1025;
  double t1026;
  double t1027;
  double t1028;
  double t1029;
  double t1042;
  double t1043;
  double t1044;
  double t1041;
  double t1045;
  double t1046;
  double t1047;
  double t1048;
  double t1049;
  double t1040;
  double t1050;
  double t1051;
  double t1052;
  double t1062;
  double t1064;
  double t1069;
  double t1070;
  double t1071;
  double t1072;
  double t1073;
  double t1079;
  double t1080;
  double t1081;
  double t1082;
  double t1083;
  double t1084;
  double t1078;
  double t1085;
  double t1086;
  double t1087;
  t959 = Cos(var1[2]);
  t956 = Cos(var1[3]);
  t957 = Sin(var1[2]);
  t960 = Sin(var1[3]);
  t948 = Cos(var1[4]);
  t958 = t956*t957;
  t968 = t959*t960;
  t969 = t958 + t968;
  t971 = t959*t956;
  t972 = -1.*t957*t960;
  t973 = t971 + t972;
  t995 = Sin(var1[4]);
  t954 = -1.*t948;
  t955 = 1. + t954;
  t1002 = -1.*t956*t957;
  t1003 = -1.*t959*t960;
  t1004 = t1002 + t1003;
  t1001 = 0.4*t955*t973;
  t1005 = -0.4*t1004*t995;
  t1006 = t948*t973;
  t1007 = t1004*t995;
  t1008 = t1006 + t1007;
  t1009 = 0.8*t1008;
  t1010 = t1001 + t1005 + t1009;
  t1015 = -0.4*t948*t973;
  t1016 = 0.4*t969*t995;
  t1017 = -1.*t969*t995;
  t1018 = t1006 + t1017;
  t1019 = 0.8*t1018;
  t1020 = t1015 + t1016 + t1019;
  t1023 = -0.4*t948*t1004;
  t1024 = 0.4*t973*t995;
  t1025 = t948*t1004;
  t1026 = -1.*t973*t995;
  t1027 = t1025 + t1026;
  t1028 = 0.8*t1027;
  t1029 = t1023 + t1024 + t1028;
  t1042 = -1.*t959*t956;
  t1043 = t957*t960;
  t1044 = t1042 + t1043;
  t1041 = 0.4*t955*t1004;
  t1045 = -0.4*t1044*t995;
  t1046 = t1044*t995;
  t1047 = t1025 + t1046;
  t1048 = 0.8*t1047;
  t1049 = t1041 + t1045 + t1048;
  t1040 = var2[4]*t1029;
  t1050 = var2[2]*t1049;
  t1051 = var2[3]*t1049;
  t1052 = t1040 + t1050 + t1051;
  t1062 = 0.4*t1004*t995;
  t1064 = -1.*t1004*t995;
  t1069 = -0.4*t948*t1044;
  t1070 = t948*t1044;
  t1071 = t1070 + t1064;
  t1072 = 0.8*t1071;
  t1073 = t1069 + t1062 + t1072;
  t1079 = 0.4*t955*t1044;
  t1080 = -0.4*t969*t995;
  t1081 = t969*t995;
  t1082 = t1070 + t1081;
  t1083 = 0.8*t1082;
  t1084 = t1079 + t1080 + t1083;
  t1078 = var2[4]*t1073;
  t1085 = var2[2]*t1084;
  t1086 = var2[3]*t1084;
  t1087 = t1078 + t1085 + t1086;
  p_output1[0]=0.4*t955*t969 - 0.4*t973*t995 + 0.8*(t948*t969 + t973*t995) + var1[0] + var2[0] + t1010*var2[2] + t1052*var2[2] + t1010*var2[3] + t1052*var2[3] + t1020*var2[4] + var2[4]*(t1029*var2[2] + t1029*var2[3] + (t1024 + 0.4*t948*t969 + 0.8*(t1026 - 1.*t948*t969))*var2[4]) + var3[0] + t1010*var3[2] + t1010*var3[3] + t1020*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t1001 + t1005 + t1009 + t1040 + t1050 + t1051 + var1[1] + var2[1] + t1087*var2[2] + t1087*var2[3] + var2[4]*(t1073*var2[2] + t1073*var2[3] + (t1062 + 0.4*t948*t973 + 0.8*(t1064 - 1.*t948*t973))*var2[4]) + var3[1] + t1049*var3[2] + t1049*var3[3] + t1029*var3[4] - 1.*var4[2];
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
