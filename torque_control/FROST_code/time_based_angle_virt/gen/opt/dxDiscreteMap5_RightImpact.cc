/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:04:37 GMT-05:00
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
  double t935;
  double t930;
  double t933;
  double t938;
  double t926;
  double t934;
  double t942;
  double t943;
  double t944;
  double t945;
  double t946;
  double t947;
  double t948;
  double t949;
  double t950;
  double t956;
  double t958;
  double t959;
  double t960;
  double t961;
  double t973;
  double t974;
  double t976;
  double t977;
  double t978;
  double t979;
  double t1010;
  double t1011;
  double t1012;
  double t1014;
  double t1015;
  double t1016;
  double t906;
  double t924;
  double t986;
  double t989;
  double t990;
  double t952;
  double t955;
  double t969;
  double t971;
  double t972;
  double t994;
  double t995;
  double t962;
  double t963;
  double t965;
  double t966;
  double t984;
  double t985;
  double t1000;
  double t1001;
  double t993;
  double t997;
  double t998;
  double t1008;
  double t1009;
  double t1013;
  double t1017;
  double t1018;
  double t1020;
  double t1021;
  double t1022;
  double t1019;
  double t1023;
  double t1024;
  double t1039;
  double t1040;
  double t1041;
  double t1028;
  double t1029;
  double t1030;
  double t968;
  double t980;
  double t981;
  double t1047;
  double t1048;
  double t1049;
  double t1060;
  double t1061;
  double t1044;
  double t1045;
  t935 = Cos(var2[5]);
  t930 = Cos(var2[6]);
  t933 = Sin(var2[5]);
  t938 = Sin(var2[6]);
  t926 = Sin(var2[2]);
  t934 = -1.*t930*t933;
  t942 = -1.*t935*t938;
  t943 = t934 + t942;
  t944 = t926*t943;
  t945 = Cos(var2[2]);
  t946 = t935*t930;
  t947 = -1.*t933*t938;
  t948 = t946 + t947;
  t949 = t945*t948;
  t950 = t944 + t949;
  t956 = -1.*t930;
  t958 = 1. + t956;
  t959 = 0.4*t958;
  t960 = 0.64*t930;
  t961 = t959 + t960;
  t973 = t930*t933;
  t974 = t935*t938;
  t976 = t973 + t974;
  t977 = t945*t976;
  t978 = t926*t948;
  t979 = t977 + t978;
  t1010 = t961*t933;
  t1011 = 0.24*t935*t938;
  t1012 = t1010 + t1011;
  t1014 = t935*t961;
  t1015 = -0.24*t933*t938;
  t1016 = t1014 + t1015;
  t906 = -1.*var1[6];
  t924 = var3[6] + t906;
  t986 = t945*t943;
  t989 = -1.*t926*t948;
  t990 = t986 + t989;
  t952 = -1.*var1[5];
  t955 = var3[5] + t952;
  t969 = t961*t938;
  t971 = -0.24*t930*t938;
  t972 = t969 + t971;
  t994 = -1.*t926*t976;
  t995 = t994 + t949;
  t962 = t961*t930;
  t963 = Power(t938,2);
  t965 = 0.24*t963;
  t966 = t962 + t965;
  t984 = -1.*var1[1];
  t985 = var3[1] + t984;
  t1000 = -1.*var1[0];
  t1001 = var3[0] + t1000;
  t993 = 3.2*t950*t990;
  t997 = 3.2*t995*t979;
  t998 = t993 + t997;
  t1008 = -1.*var1[2];
  t1009 = var3[2] + t1008;
  t1013 = -1.*t1012*t948;
  t1017 = -1.*t943*t1016;
  t1018 = t1013 + t1017;
  t1020 = t1012*t976;
  t1021 = t948*t1016;
  t1022 = t1020 + t1021;
  t1019 = 3.2*t979*t1018;
  t1023 = 3.2*t950*t1022;
  t1024 = t1019 + t1023;
  t1039 = 3.2*t995*t1018;
  t1040 = 3.2*t990*t1022;
  t1041 = t1039 + t1040;
  t1028 = 3.2*t972*t995;
  t1029 = 3.2*t966*t990;
  t1030 = t1028 + t1029;
  t968 = 3.2*t966*t950;
  t980 = 3.2*t972*t979;
  t981 = t968 + t980;
  t1047 = 3.2*t972*t1018;
  t1048 = 3.2*t966*t1022;
  t1049 = 0.2 + t1047 + t1048;
  t1060 = 0.768*t966;
  t1061 = 0.2 + t1060;
  t1044 = 0.768*t1022;
  t1045 = 0.2 + t1044;
  p_output1[0]=t1009*t1024 + 0.768*t924*t950 + t1001*(3.2*Power(t950,2) + 3.2*Power(t979,2)) + t955*t981 + t985*t998;
  p_output1[1]=t1009*t1041 + t1030*t955 + 0.768*t924*t990 + t985*(3.2*Power(t990,2) + 3.2*Power(t995,2)) + t1001*t998;
  p_output1[2]=t1009*(0.2 + 3.2*Power(t1018,2) + 3.2*Power(t1022,2)) + t1001*t1024 + t1045*t924 + t1049*t955 + t1041*t985;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t1009*t1049 + t1061*t924 + t955*(0.2 + 3.2*Power(t966,2) + 3.2*Power(t972,2)) + t1001*t981 + t1030*t985;
  p_output1[6]=t1009*t1045 + 0.38432*t924 + 0.768*t1001*t950 + t1061*t955 + 0.768*t985*t990;
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

#include "dxDiscreteMap5_RightImpact.hh"

namespace RightImpact
{

void dxDiscreteMap5_RightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
