/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 14:53:47 GMT-04:00
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
  double t893;
  double t882;
  double t883;
  double t894;
  double t881;
  double t892;
  double t895;
  double t896;
  double t898;
  double t899;
  double t900;
  double t902;
  double t904;
  double t934;
  double t935;
  double t936;
  double t931;
  double t932;
  double t933;
  double t937;
  double t938;
  double t939;
  double t940;
  double t941;
  double t897;
  double t903;
  double t905;
  double t906;
  double t928;
  double t929;
  double t930;
  double t942;
  double t943;
  double t944;
  double t949;
  double t950;
  double t951;
  double t961;
  double t962;
  double t963;
  double t964;
  double t965;
  double t966;
  double t967;
  double t976;
  double t984;
  double t987;
  double t988;
  double t989;
  double t990;
  double t991;
  double t974;
  double t975;
  double t977;
  double t978;
  double t981;
  double t982;
  double t983;
  double t992;
  double t993;
  double t994;
  t893 = Cos(var1[2]);
  t882 = Cos(var1[3]);
  t883 = Sin(var1[2]);
  t894 = Sin(var1[3]);
  t881 = Cos(var1[4]);
  t892 = -1.*t882*t883;
  t895 = -1.*t893*t894;
  t896 = t892 + t895;
  t898 = t893*t882;
  t899 = -1.*t883*t894;
  t900 = t898 + t899;
  t902 = Sin(var1[4]);
  t904 = t881*t896;
  t934 = -1.*t893*t882;
  t935 = t883*t894;
  t936 = t934 + t935;
  t931 = -1.*t881;
  t932 = 1. + t931;
  t933 = 0.4*t932*t896;
  t937 = -0.4*t936*t902;
  t938 = t936*t902;
  t939 = t904 + t938;
  t940 = 0.8*t939;
  t941 = t933 + t937 + t940;
  t897 = -0.4*t881*t896;
  t903 = 0.4*t900*t902;
  t905 = -1.*t900*t902;
  t906 = t904 + t905;
  t928 = 0.8*t906;
  t929 = t897 + t903 + t928;
  t930 = var2[4]*t929;
  t942 = var2[2]*t941;
  t943 = var2[3]*t941;
  t944 = t930 + t942 + t943;
  t949 = t882*t883;
  t950 = t893*t894;
  t951 = t949 + t950;
  t961 = 0.4*t932*t900;
  t962 = -0.4*t896*t902;
  t963 = t881*t900;
  t964 = t896*t902;
  t965 = t963 + t964;
  t966 = 0.8*t965;
  t967 = t961 + t962 + t966;
  t976 = t881*t936;
  t984 = 0.4*t932*t936;
  t987 = -0.4*t951*t902;
  t988 = t951*t902;
  t989 = t976 + t988;
  t990 = 0.8*t989;
  t991 = t984 + t987 + t990;
  t974 = -0.4*t881*t936;
  t975 = 0.4*t896*t902;
  t977 = -1.*t896*t902;
  t978 = t976 + t977;
  t981 = 0.8*t978;
  t982 = t974 + t975 + t981;
  t983 = var2[4]*t982;
  t992 = var2[2]*t991;
  t993 = var2[3]*t991;
  t994 = t983 + t992 + t993;
  p_output1[0]=t944;
  p_output1[1]=t944;
  p_output1[2]=t929*var2[2] + t929*var2[3] + (t903 + 0.4*t881*t951 + 0.8*(t905 - 1.*t881*t951))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t967;
  p_output1[5]=t967;
  p_output1[6]=-0.4*t881*t900 + 0.4*t902*t951 + 0.8*(-1.*t902*t951 + t963);
  p_output1[7]=t994;
  p_output1[8]=t994;
  p_output1[9]=t982*var2[2] + t982*var2[3] + (0.4*t881*t900 + t975 + 0.8*(-1.*t881*t900 + t977))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t941;
  p_output1[12]=t941;
  p_output1[13]=t929;
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
