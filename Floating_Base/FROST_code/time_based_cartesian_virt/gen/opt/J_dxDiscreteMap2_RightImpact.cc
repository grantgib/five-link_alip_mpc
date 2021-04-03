/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:04:45 GMT-05:00
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
  double t966;
  double t959;
  double t961;
  double t968;
  double t980;
  double t981;
  double t982;
  double t965;
  double t972;
  double t974;
  double t993;
  double t995;
  double t999;
  double t1006;
  double t1007;
  double t1009;
  double t1011;
  double t1014;
  double t985;
  double t1019;
  double t1020;
  double t1021;
  double t1022;
  double t1023;
  double t1024;
  double t1025;
  double t1026;
  double t1027;
  double t1028;
  double t1029;
  double t1030;
  double t1031;
  double t1032;
  double t1033;
  double t1034;
  double t1035;
  double t1036;
  double t1037;
  double t1038;
  double t1039;
  double t1040;
  double t1041;
  double t1042;
  double t977;
  double t1001;
  double t1003;
  double t1004;
  double t986;
  double t1056;
  double t1057;
  double t1058;
  double t1059;
  double t1060;
  double t1061;
  double t1047;
  double t1048;
  double t1049;
  double t1015;
  double t1054;
  double t1072;
  double t1073;
  double t1050;
  double t1065;
  double t1067;
  double t1018;
  double t1055;
  double t1070;
  double t1071;
  double t1080;
  double t1081;
  double t1051;
  double t1066;
  double t1078;
  double t1079;
  t966 = Cos(var2[2]);
  t959 = Cos(var2[3]);
  t961 = Sin(var2[2]);
  t968 = Sin(var2[3]);
  t980 = t966*t959;
  t981 = -1.*t961*t968;
  t982 = t980 + t981;
  t965 = t959*t961;
  t972 = t966*t968;
  t974 = t965 + t972;
  t993 = -1.*t959*t961;
  t995 = -1.*t966*t968;
  t999 = t993 + t995;
  t1006 = Power(t959,2);
  t1007 = 0.11*t1006;
  t1009 = Power(t968,2);
  t1011 = 0.11*t1009;
  t1014 = t1007 + t1011;
  t985 = Power(t982,2);
  t1019 = -1.*var1[3];
  t1020 = var3[3] + t1019;
  t1021 = 0.748*t1020*t999;
  t1022 = -1.*var1[2];
  t1023 = var3[2] + t1022;
  t1024 = 6.8*t1023*t999*t1014;
  t1025 = -1.*var1[0];
  t1026 = var3[0] + t1025;
  t1027 = 13.6*t999*t982;
  t1028 = 13.6*t974*t982;
  t1029 = t1027 + t1028;
  t1030 = t1026*t1029;
  t1031 = -1.*var1[1];
  t1032 = var3[1] + t1031;
  t1033 = Power(t999,2);
  t1034 = 6.8*t1033;
  t1035 = 6.8*t999*t974;
  t1036 = 6.8*t985;
  t1037 = -1.*t966*t959;
  t1038 = t961*t968;
  t1039 = t1037 + t1038;
  t1040 = 6.8*t982*t1039;
  t1041 = t1034 + t1035 + t1036 + t1040;
  t1042 = t1032*t1041;
  t977 = Power(t974,2);
  t1001 = -6.8*t999*t982;
  t1003 = -6.8*t974*t982;
  t1004 = t1001 + t1003;
  t986 = -6.8*t985;
  t1056 = 0.748*t1020*t1039;
  t1057 = 6.8*t1023*t1039*t1014;
  t1058 = 13.6*t999*t1039;
  t1059 = t1027 + t1058;
  t1060 = t1032*t1059;
  t1061 = t1026*t1041;
  t1047 = 6.8*t999*t982;
  t1048 = 6.8*t974*t982;
  t1049 = t1047 + t1048;
  t1015 = -6.8*t982*t1014;
  t1054 = -6.8*t999*t1014;
  t1072 = 6.8*t1026*t999*t1014;
  t1073 = 6.8*t1032*t1039*t1014;
  t1050 = 6.8*t982*t1014;
  t1065 = 6.8*t999*t1014;
  t1067 = Power(t1014,2);
  t1018 = -0.748*t982;
  t1055 = -0.748*t999;
  t1070 = -0.748*t1014;
  t1071 = -0.47 + t1070;
  t1080 = 0.748*t1026*t999;
  t1081 = 0.748*t1032*t1039;
  t1051 = 0.748*t982;
  t1066 = 0.748*t999;
  t1078 = 0.748*t1014;
  t1079 = 0.47 + t1078;
  p_output1[0]=-6.8*t977 + t986;
  p_output1[1]=t1004;
  p_output1[2]=t1015;
  p_output1[3]=t1018;
  p_output1[4]=t1021 + t1024 + t1030 + t1042;
  p_output1[5]=0. + t1021 + t1024 + t1030 + t1042;
  p_output1[6]=t1036 + 6.8*t977;
  p_output1[7]=t1049;
  p_output1[8]=t1050;
  p_output1[9]=t1051;
  p_output1[10]=t1004;
  p_output1[11]=-6.8*t1033 + t986;
  p_output1[12]=t1054;
  p_output1[13]=t1055;
  p_output1[14]=t1056 + t1057 + t1060 + t1061;
  p_output1[15]=0. + t1056 + t1057 + t1060 + t1061;
  p_output1[16]=t1049;
  p_output1[17]=t1034 + t1036;
  p_output1[18]=t1065;
  p_output1[19]=t1066;
  p_output1[20]=t1015;
  p_output1[21]=t1054;
  p_output1[22]=-0.47 - 6.8*t1067;
  p_output1[23]=t1071;
  p_output1[24]=t1072 + t1073;
  p_output1[25]=0. + t1072 + t1073;
  p_output1[26]=t1050;
  p_output1[27]=t1065;
  p_output1[28]=0.47 + 6.8*t1067;
  p_output1[29]=t1079;
  p_output1[30]=t1018;
  p_output1[31]=t1055;
  p_output1[32]=t1071;
  p_output1[33]=-0.55228;
  p_output1[34]=t1080 + t1081;
  p_output1[35]=0. + t1080 + t1081;
  p_output1[36]=t1051;
  p_output1[37]=t1066;
  p_output1[38]=t1079;
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

#include "J_dxDiscreteMap2_RightImpact.hh"

namespace RightImpact
{

void J_dxDiscreteMap2_RightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
