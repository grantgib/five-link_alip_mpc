/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:05:02 GMT-05:00
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
  double t1041;
  double t1032;
  double t1038;
  double t1042;
  double t1052;
  double t1039;
  double t1045;
  double t1046;
  double t1028;
  double t1067;
  double t1068;
  double t1069;
  double t1072;
  double t1051;
  double t1079;
  double t1081;
  double t1085;
  double t1086;
  double t1087;
  double t1088;
  double t1090;
  double t1091;
  double t1092;
  double t1093;
  double t1054;
  double t1055;
  double t1058;
  double t1065;
  double t1073;
  double t1104;
  double t1111;
  double t1113;
  double t1114;
  double t1115;
  double t1116;
  double t1059;
  double t1062;
  double t1118;
  double t1121;
  double t1122;
  double t1123;
  double t1124;
  double t1125;
  double t1127;
  double t1130;
  double t1133;
  double t1134;
  double t1135;
  double t1138;
  double t1139;
  double t1141;
  double t1132;
  double t1144;
  double t1164;
  double t1165;
  double t1148;
  double t1161;
  double t1162;
  double t1155;
  double t1197;
  double t1198;
  double t1199;
  t1041 = Cos(var2[3]);
  t1032 = Cos(var2[4]);
  t1038 = Sin(var2[3]);
  t1042 = Sin(var2[4]);
  t1052 = Sin(var2[2]);
  t1039 = -1.*t1032*t1038;
  t1045 = -1.*t1041*t1042;
  t1046 = t1039 + t1045;
  t1028 = Cos(var2[2]);
  t1067 = -1.*t1041*t1032;
  t1068 = t1038*t1042;
  t1069 = t1067 + t1068;
  t1072 = t1028*t1069;
  t1051 = t1028*t1046;
  t1079 = t1032*t1038;
  t1081 = t1041*t1042;
  t1085 = t1079 + t1081;
  t1086 = t1052*t1085;
  t1087 = t1086 + t1072;
  t1088 = var4[2]*t1087;
  t1090 = t1052*t1069;
  t1091 = t1051 + t1090;
  t1092 = var4[0]*t1091;
  t1093 = t1088 + t1092;
  t1054 = t1041*t1032;
  t1055 = -1.*t1038*t1042;
  t1058 = t1054 + t1055;
  t1065 = -1.*t1052*t1046;
  t1073 = t1065 + t1072;
  t1104 = -1.*t1052*t1069;
  t1111 = var4[0]*t1073;
  t1113 = t1028*t1085;
  t1114 = t1113 + t1104;
  t1115 = var4[2]*t1114;
  t1116 = t1111 + t1115;
  t1059 = -1.*t1052*t1058;
  t1062 = t1051 + t1059;
  t1118 = -1.*t1032;
  t1121 = 1. + t1118;
  t1122 = 0.4*t1121;
  t1123 = 0.8*t1032;
  t1124 = t1122 + t1123;
  t1125 = t1041*t1124;
  t1127 = -0.4*t1038*t1042;
  t1130 = t1125 + t1127;
  t1133 = -1.*t1124*t1038;
  t1134 = -0.4*t1041*t1042;
  t1135 = t1133 + t1134;
  t1138 = t1124*t1038;
  t1139 = 0.4*t1041*t1042;
  t1141 = t1138 + t1139;
  t1132 = t1085*t1130;
  t1144 = t1141*t1069;
  t1164 = -0.4*t1032*t1038;
  t1165 = t1164 + t1134;
  t1148 = -1.*t1046*t1141;
  t1161 = 0.4*t1041*t1032;
  t1162 = t1161 + t1127;
  t1155 = -1.*t1130*t1069;
  t1197 = t1124*t1042;
  t1198 = -0.4*t1032*t1042;
  t1199 = t1197 + t1198;
  p_output1[0]=t1062*var4[0] + t1073*var4[2];
  p_output1[1]=t1093;
  p_output1[2]=t1093;
  p_output1[3]=t1046*t1052 + t1028*t1058;
  p_output1[4]=t1091;
  p_output1[5]=(-1.*t1028*t1058 + t1065)*var4[0] + (-1.*t1028*t1046 + t1104)*var4[2];
  p_output1[6]=t1116;
  p_output1[7]=t1116;
  p_output1[8]=t1062;
  p_output1[9]=t1073;
  p_output1[10]=-1.*(t1046*t1130 + t1132 + t1069*t1135 + t1144)*var4[0] - 1.*(-1.*t1058*t1130 - 1.*t1046*t1135 + t1148 + t1155)*var4[2];
  p_output1[11]=-1.*(t1132 + t1144 + t1046*t1162 + t1069*t1165)*var4[0] - 1.*(t1148 + t1155 - 1.*t1058*t1162 - 1.*t1046*t1165)*var4[2];
  p_output1[12]=-1.*(t1069*t1130 + t1046*t1141);
  p_output1[13]=-1.*(-1.*t1046*t1130 - 1.*t1058*t1141);
  p_output1[14]=-1.*t1199*var4[0] - 1.*(0. - 0.4*Power(t1032,2) + t1032*t1124)*var4[2];
  p_output1[15]=-1.*(-0.4*Power(t1042,2) - 1.*t1032*t1124);
  p_output1[16]=-1.*t1199;
  p_output1[17]=0.4;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMap7_RightImpact.hh"

namespace RightImpact
{

void J_dxDiscreteMap7_RightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
