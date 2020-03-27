/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:47:21 GMT-04:00
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
  double t952;
  double t979;
  double t124;
  double t932;
  double t123;
  double t926;
  double t954;
  double t955;
  double t956;
  double t962;
  double t978;
  double t1010;
  double t1011;
  double t1012;
  double t1016;
  double t1018;
  double t1019;
  double t1020;
  double t1021;
  double t1022;
  double t1023;
  double t980;
  double t988;
  double t990;
  double t991;
  double t1007;
  double t1008;
  double t1025;
  double t1033;
  double t1034;
  double t1035;
  double t1036;
  double t1024;
  double t1026;
  double t1037;
  double t925;
  double t945;
  double t946;
  double t951;
  double t1013;
  double t1060;
  double t1061;
  double t1070;
  double t1319;
  double t1324;
  double t1351;
  double t1093;
  double t1098;
  double t1100;
  double t1114;
  double t1116;
  double t1117;
  double t1444;
  double t1451;
  double t1452;
  double t1580;
  double t1588;
  double t1660;
  double t1009;
  double t1014;
  double t1059;
  double t1071;
  double t1072;
  double t1073;
  double t1084;
  double t1086;
  double t1087;
  double t1088;
  double t1089;
  double t1090;
  double t1147;
  double t1353;
  double t1739;
  double t1740;
  double t1404;
  double t1742;
  double t1743;
  double t1407;
  t952 = Cos(var1[4]);
  t979 = Sin(var1[4]);
  t124 = Sin(var1[2]);
  t932 = Sin(var1[3]);
  t123 = Cos(var1[3]);
  t926 = Cos(var1[2]);
  t954 = -1.*t952;
  t955 = 1. + t954;
  t956 = 0.4*t955;
  t962 = 0.64*t952;
  t978 = t956 + t962;
  t1010 = t123*t952;
  t1011 = -1.*t932*t979;
  t1012 = t1010 + t1011;
  t1016 = t978*t952;
  t1018 = Power(t979,2);
  t1019 = 0.24*t1018;
  t1020 = t1016 + t1019;
  t1021 = -1.*t952*t932;
  t1022 = -1.*t123*t979;
  t1023 = t1021 + t1022;
  t980 = t978*t979;
  t988 = -0.24*t952*t979;
  t990 = t980 + t988;
  t991 = t952*t932;
  t1007 = t123*t979;
  t1008 = t991 + t1007;
  t1025 = -1.*t124*t1012;
  t1033 = -1.*t926*t123;
  t1034 = t124*t932;
  t1035 = t1033 + t1034;
  t1036 = -0.748*t1035;
  t1024 = t926*t1023;
  t1026 = t1024 + t1025;
  t1037 = -1.*t124*t1023;
  t925 = -1.*t123*t124;
  t945 = -1.*t926*t932;
  t946 = t925 + t945;
  t951 = -0.748*t946;
  t1013 = t926*t1012;
  t1060 = -1.*t123*t952;
  t1061 = t932*t979;
  t1070 = t1060 + t1061;
  t1319 = t123*t978;
  t1324 = -0.24*t932*t979;
  t1351 = t1319 + t1324;
  t1093 = -1.*t978*t932;
  t1098 = -0.24*t123*t979;
  t1100 = t1093 + t1098;
  t1114 = t978*t932;
  t1116 = 0.24*t123*t979;
  t1117 = t1114 + t1116;
  t1444 = -1.*t978*t979;
  t1451 = 0.24*t952*t979;
  t1452 = t1444 + t1451;
  t1580 = Power(t952,2);
  t1588 = -0.24*t1580;
  t1660 = t1016 + t1588;
  t1009 = -1.*t124*t1008;
  t1014 = t1009 + t1013;
  t1059 = -3.2*t990*t1026;
  t1071 = t926*t1070;
  t1072 = t1037 + t1071;
  t1073 = -3.2*t1020*t1072;
  t1084 = t124*t1023;
  t1086 = t1084 + t1013;
  t1087 = -3.2*t990*t1086;
  t1088 = t124*t1070;
  t1089 = t1024 + t1088;
  t1090 = -3.2*t1020*t1089;
  t1147 = t1117*t1012;
  t1353 = t1023*t1351;
  t1739 = -0.24*t952*t932;
  t1740 = t1739 + t1098;
  t1404 = -1.*t1023*t1117;
  t1742 = 0.24*t123*t952;
  t1743 = t1742 + t1324;
  t1407 = -1.*t1351*t1070;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(-3.2*t1020*t1026 + t951 - 3.2*t1014*t990)*var2[0] - 0.5*(t1036 - 3.2*t1020*(t1037 - 1.*t1012*t926) - 3.2*(t1025 - 1.*t1008*t926)*t990)*var2[1])*var2[3];
  p_output1[3]=(-0.5*(t1087 + t1090 + t951)*var2[0] - 0.5*(t1036 + t1059 + t1073)*var2[1] - 0.5*(-3.2*t1020*(t1012*t1100 + t1147 + t1008*t1351 + t1353) - 3.2*(-1.*t1023*t1100 - 1.*t1012*t1351 + t1404 + t1407)*t990)*var2[2])*var2[3];
  p_output1[4]=var2[3]*(-0.5*(t1087 + t1090 - 3.2*t1086*t1452 - 3.2*t1660*(t1012*t124 + t1008*t926))*var2[0] - 0.5*(t1059 + t1073 - 3.2*t1026*t1452 - 3.2*t1014*t1660)*var2[1] - 0.5*(-3.2*(t1008*t1117 + t1012*t1351)*t1452 - 3.2*(-1.*t1012*t1117 - 1.*t1023*t1351)*t1660 - 3.2*t1020*(t1147 + t1353 + t1012*t1740 + t1008*t1743) - 3.2*(t1404 + t1407 - 1.*t1023*t1740 - 1.*t1012*t1743)*t990)*var2[2] - 0.5*(-6.4*t1020*t1452 - 6.4*t1660*t990)*var2[3] + 0.384*t1452*var2[4]);
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

#include "Ce3_vec4_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
