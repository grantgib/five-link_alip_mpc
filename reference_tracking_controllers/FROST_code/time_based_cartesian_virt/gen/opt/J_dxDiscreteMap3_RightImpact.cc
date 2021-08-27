/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:04:49 GMT-05:00
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
  double t977;
  double t965;
  double t972;
  double t979;
  double t990;
  double t999;
  double t1001;
  double t974;
  double t980;
  double t982;
  double t1007;
  double t1009;
  double t1011;
  double t1020;
  double t1021;
  double t1023;
  double t1024;
  double t1026;
  double t1003;
  double t1029;
  double t1030;
  double t1032;
  double t1033;
  double t1034;
  double t1035;
  double t1036;
  double t1038;
  double t1039;
  double t1040;
  double t1041;
  double t1042;
  double t1043;
  double t1044;
  double t1045;
  double t1046;
  double t1047;
  double t1048;
  double t1049;
  double t1050;
  double t1051;
  double t1052;
  double t1053;
  double t1054;
  double t985;
  double t1014;
  double t1015;
  double t1018;
  double t1004;
  double t1068;
  double t1069;
  double t1070;
  double t1071;
  double t1072;
  double t1073;
  double t1059;
  double t1060;
  double t1061;
  double t1027;
  double t1066;
  double t1084;
  double t1085;
  double t1062;
  double t1077;
  double t1079;
  double t1028;
  double t1067;
  double t1082;
  double t1083;
  double t1092;
  double t1093;
  double t1063;
  double t1078;
  double t1090;
  double t1091;
  t977 = Cos(var2[2]);
  t965 = Cos(var2[5]);
  t972 = Sin(var2[2]);
  t979 = Sin(var2[5]);
  t990 = t977*t965;
  t999 = -1.*t972*t979;
  t1001 = t990 + t999;
  t974 = t965*t972;
  t980 = t977*t979;
  t982 = t974 + t980;
  t1007 = -1.*t965*t972;
  t1009 = -1.*t977*t979;
  t1011 = t1007 + t1009;
  t1020 = Power(t965,2);
  t1021 = 0.11*t1020;
  t1023 = Power(t979,2);
  t1024 = 0.11*t1023;
  t1026 = t1021 + t1024;
  t1003 = Power(t1001,2);
  t1029 = -1.*var1[5];
  t1030 = var3[5] + t1029;
  t1032 = 0.748*t1030*t1011;
  t1033 = -1.*var1[2];
  t1034 = var3[2] + t1033;
  t1035 = 6.8*t1034*t1011*t1026;
  t1036 = -1.*var1[0];
  t1038 = var3[0] + t1036;
  t1039 = 13.6*t1011*t1001;
  t1040 = 13.6*t982*t1001;
  t1041 = t1039 + t1040;
  t1042 = t1038*t1041;
  t1043 = -1.*var1[1];
  t1044 = var3[1] + t1043;
  t1045 = Power(t1011,2);
  t1046 = 6.8*t1045;
  t1047 = 6.8*t1011*t982;
  t1048 = 6.8*t1003;
  t1049 = -1.*t977*t965;
  t1050 = t972*t979;
  t1051 = t1049 + t1050;
  t1052 = 6.8*t1001*t1051;
  t1053 = t1046 + t1047 + t1048 + t1052;
  t1054 = t1044*t1053;
  t985 = Power(t982,2);
  t1014 = -6.8*t1011*t1001;
  t1015 = -6.8*t982*t1001;
  t1018 = t1014 + t1015;
  t1004 = -6.8*t1003;
  t1068 = 0.748*t1030*t1051;
  t1069 = 6.8*t1034*t1051*t1026;
  t1070 = 13.6*t1011*t1051;
  t1071 = t1039 + t1070;
  t1072 = t1044*t1071;
  t1073 = t1038*t1053;
  t1059 = 6.8*t1011*t1001;
  t1060 = 6.8*t982*t1001;
  t1061 = t1059 + t1060;
  t1027 = -6.8*t1001*t1026;
  t1066 = -6.8*t1011*t1026;
  t1084 = 6.8*t1038*t1011*t1026;
  t1085 = 6.8*t1044*t1051*t1026;
  t1062 = 6.8*t1001*t1026;
  t1077 = 6.8*t1011*t1026;
  t1079 = Power(t1026,2);
  t1028 = -0.748*t1001;
  t1067 = -0.748*t1011;
  t1082 = -0.748*t1026;
  t1083 = -0.47 + t1082;
  t1092 = 0.748*t1038*t1011;
  t1093 = 0.748*t1044*t1051;
  t1063 = 0.748*t1001;
  t1078 = 0.748*t1011;
  t1090 = 0.748*t1026;
  t1091 = 0.47 + t1090;
  p_output1[0]=t1004 - 6.8*t985;
  p_output1[1]=t1018;
  p_output1[2]=t1027;
  p_output1[3]=t1028;
  p_output1[4]=t1032 + t1035 + t1042 + t1054;
  p_output1[5]=0. + t1032 + t1035 + t1042 + t1054;
  p_output1[6]=t1048 + 6.8*t985;
  p_output1[7]=t1061;
  p_output1[8]=t1062;
  p_output1[9]=t1063;
  p_output1[10]=t1018;
  p_output1[11]=t1004 - 6.8*t1045;
  p_output1[12]=t1066;
  p_output1[13]=t1067;
  p_output1[14]=t1068 + t1069 + t1072 + t1073;
  p_output1[15]=0. + t1068 + t1069 + t1072 + t1073;
  p_output1[16]=t1061;
  p_output1[17]=t1046 + t1048;
  p_output1[18]=t1077;
  p_output1[19]=t1078;
  p_output1[20]=t1027;
  p_output1[21]=t1066;
  p_output1[22]=-0.47 - 6.8*t1079;
  p_output1[23]=t1083;
  p_output1[24]=t1084 + t1085;
  p_output1[25]=0. + t1084 + t1085;
  p_output1[26]=t1062;
  p_output1[27]=t1077;
  p_output1[28]=0.47 + 6.8*t1079;
  p_output1[29]=t1091;
  p_output1[30]=t1028;
  p_output1[31]=t1067;
  p_output1[32]=t1083;
  p_output1[33]=-0.55228;
  p_output1[34]=t1092 + t1093;
  p_output1[35]=0. + t1092 + t1093;
  p_output1[36]=t1063;
  p_output1[37]=t1078;
  p_output1[38]=t1091;
  p_output1[39]=0.55228;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMap3_RightImpact.hh"

namespace RightImpact
{

void J_dxDiscreteMap3_RightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
