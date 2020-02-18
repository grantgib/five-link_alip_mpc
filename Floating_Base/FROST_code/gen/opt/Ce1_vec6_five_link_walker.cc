/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:24 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t995;
  double t1028;
  double t966;
  double t986;
  double t965;
  double t985;
  double t996;
  double t1002;
  double t1018;
  double t1019;
  double t1020;
  double t1052;
  double t1053;
  double t1054;
  double t972;
  double t991;
  double t992;
  double t994;
  double t1030;
  double t1031;
  double t1047;
  double t1062;
  double t1063;
  double t1064;
  double t1055;
  double t1058;
  double t1059;
  double t1060;
  double t1061;
  double t1065;
  double t1071;
  double t1072;
  double t1073;
  double t1048;
  double t1049;
  double t1050;
  double t1074;
  double t1075;
  double t1076;
  double t1077;
  double t1078;
  double t1079;
  double t1066;
  double t1097;
  double t1098;
  double t1099;
  double t1100;
  double t1067;
  double t1101;
  double t1086;
  double t1087;
  double t1088;
  double t1051;
  double t1056;
  double t1110;
  double t1082;
  double t1083;
  double t1084;
  double t1111;
  double t1112;
  double t1113;
  double t1130;
  double t1131;
  double t1132;
  double t1122;
  double t1123;
  double t1124;
  double t1126;
  double t1127;
  double t1128;
  double t1129;
  double t1133;
  double t1153;
  double t1154;
  double t1138;
  double t1156;
  double t1157;
  double t1140;
  t995 = Cos(var1[6]);
  t1028 = Sin(var1[6]);
  t966 = Sin(var1[2]);
  t986 = Sin(var1[5]);
  t965 = Cos(var1[5]);
  t985 = Cos(var1[2]);
  t996 = -1.*t995;
  t1002 = 1. + t996;
  t1018 = 0.4*t1002;
  t1019 = 0.64*t995;
  t1020 = t1018 + t1019;
  t1052 = t965*t995;
  t1053 = -1.*t986*t1028;
  t1054 = t1052 + t1053;
  t972 = -1.*t965*t966;
  t991 = -1.*t985*t986;
  t992 = t972 + t991;
  t994 = 0.748*t992;
  t1030 = t1020*t1028;
  t1031 = -0.24*t995*t1028;
  t1047 = t1030 + t1031;
  t1062 = -1.*t995*t986;
  t1063 = -1.*t965*t1028;
  t1064 = t1062 + t1063;
  t1055 = t985*t1054;
  t1058 = t1020*t995;
  t1059 = Power(t1028,2);
  t1060 = 0.24*t1059;
  t1061 = t1058 + t1060;
  t1065 = t985*t1064;
  t1071 = t966*t1064;
  t1072 = t1071 + t1055;
  t1073 = 3.2*t1047*t1072;
  t1048 = t995*t986;
  t1049 = t965*t1028;
  t1050 = t1048 + t1049;
  t1074 = -1.*t965*t995;
  t1075 = t986*t1028;
  t1076 = t1074 + t1075;
  t1077 = t966*t1076;
  t1078 = t1065 + t1077;
  t1079 = 3.2*t1061*t1078;
  t1066 = -1.*t966*t1054;
  t1097 = -1.*t985*t965;
  t1098 = t966*t986;
  t1099 = t1097 + t1098;
  t1100 = 0.748*t1099;
  t1067 = t1065 + t1066;
  t1101 = -1.*t966*t1064;
  t1086 = Power(t995,2);
  t1087 = -0.24*t1086;
  t1088 = t1058 + t1087;
  t1051 = -1.*t966*t1050;
  t1056 = t1051 + t1055;
  t1110 = 3.2*t1047*t1067;
  t1082 = -1.*t1020*t1028;
  t1083 = 0.24*t995*t1028;
  t1084 = t1082 + t1083;
  t1111 = t985*t1076;
  t1112 = t1101 + t1111;
  t1113 = 3.2*t1061*t1112;
  t1130 = t965*t1020;
  t1131 = -0.24*t986*t1028;
  t1132 = t1130 + t1131;
  t1122 = -1.*t1020*t986;
  t1123 = -0.24*t965*t1028;
  t1124 = t1122 + t1123;
  t1126 = t1020*t986;
  t1127 = 0.24*t965*t1028;
  t1128 = t1126 + t1127;
  t1129 = t1128*t1054;
  t1133 = t1064*t1132;
  t1153 = -0.24*t995*t986;
  t1154 = t1153 + t1123;
  t1138 = -1.*t1064*t1128;
  t1156 = 0.24*t965*t995;
  t1157 = t1156 + t1131;
  t1140 = -1.*t1132*t1076;
  p_output1[0]=var2[5]*(-0.5*(3.2*t1047*t1056 + 3.2*t1061*t1067 + t994)*var2[2] - 0.5*(t1073 + t1079 + t994)*var2[5] - 0.5*(t1073 + t1079 + 3.2*t1072*t1084 + 3.2*t1088*(t1054*t966 + t1050*t985))*var2[6]);
  p_output1[1]=var2[5]*(-0.5*(t1100 + 3.2*t1047*(t1066 - 1.*t1050*t985) + 3.2*t1061*(t1101 - 1.*t1054*t985))*var2[2] - 0.5*(t1100 + t1110 + t1113)*var2[5] - 0.5*(3.2*t1067*t1084 + 3.2*t1056*t1088 + t1110 + t1113)*var2[6]);
  p_output1[2]=var2[5]*(-0.5*(3.2*t1061*(t1054*t1124 + t1129 + t1050*t1132 + t1133) + 3.2*t1047*(-1.*t1064*t1124 - 1.*t1054*t1132 + t1138 + t1140))*var2[5] - 0.5*(3.2*t1084*(t1050*t1128 + t1054*t1132) + 3.2*t1088*(-1.*t1054*t1128 - 1.*t1064*t1132) + 3.2*t1061*(t1129 + t1133 + t1054*t1154 + t1050*t1157) + 3.2*t1047*(t1138 + t1140 - 1.*t1064*t1154 - 1.*t1054*t1157))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.5*(6.4*t1061*t1084 + 6.4*t1047*t1088)*var2[5]*var2[6];
  p_output1[6]=-0.384*t1084*var2[5]*var2[6];
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

#include "Ce1_vec6_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
