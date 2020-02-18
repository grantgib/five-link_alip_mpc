/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:22 GMT-05:00
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
  double t950;
  double t929;
  double t930;
  double t951;
  double t918;
  double t935;
  double t955;
  double t959;
  double t960;
  double t961;
  double t973;
  double t974;
  double t975;
  double t980;
  double t984;
  double t962;
  double t963;
  double t964;
  double t993;
  double t997;
  double t998;
  double t1021;
  double t1023;
  double t1025;
  double t1026;
  double t1027;
  double t1036;
  double t1039;
  double t1042;
  double t1029;
  double t1032;
  double t1033;
  double t1034;
  double t1035;
  double t1043;
  double t1044;
  double t1045;
  double t1046;
  t950 = Cos(var1[3]);
  t929 = Cos(var1[4]);
  t930 = Sin(var1[3]);
  t951 = Sin(var1[4]);
  t918 = Cos(var1[2]);
  t935 = -1.*t929*t930;
  t955 = -1.*t950*t951;
  t959 = t935 + t955;
  t960 = t918*t959;
  t961 = Sin(var1[2]);
  t973 = -1.*t950*t929;
  t974 = t930*t951;
  t975 = t973 + t974;
  t980 = t961*t975;
  t984 = t960 + t980;
  t962 = t950*t929;
  t963 = -1.*t930*t951;
  t964 = t962 + t963;
  t993 = -1.*t961*t959;
  t997 = t918*t975;
  t998 = t993 + t997;
  t1021 = -1.*t929;
  t1023 = 1. + t1021;
  t1025 = 0.4*t1023;
  t1026 = 0.64*t929;
  t1027 = t1025 + t1026;
  t1036 = t950*t1027;
  t1039 = -0.24*t930*t951;
  t1042 = t1036 + t1039;
  t1029 = -0.24*t950*t951;
  t1032 = t1027*t930;
  t1033 = 0.24*t950*t951;
  t1034 = t1032 + t1033;
  t1035 = t1034*t964;
  t1043 = t959*t1042;
  t1044 = t929*t930;
  t1045 = t950*t951;
  t1046 = t1044 + t1045;
  p_output1[0]=var2[4]*(-0.384*(t960 - 1.*t961*t964)*var2[2] - 0.384*t984*var2[3] - 0.384*t984*var2[4]);
  p_output1[1]=var2[4]*(-0.384*(-1.*t918*t964 + t993)*var2[2] - 0.384*t998*var2[3] - 0.384*t998*var2[4]);
  p_output1[2]=var2[4]*(-0.384*(t1035 + t1043 + t1042*t1046 + (t1029 - 1.*t1027*t930)*t964)*var2[3] - 0.384*(t1035 + t1043 + t1046*(t1039 + 0.24*t929*t950) + (t1029 - 0.24*t929*t930)*t964)*var2[4]);
  p_output1[3]=-0.384*(-1.*t1027*t951 + 0.24*t929*t951)*Power(var2[4],2);
  p_output1[4]=0;
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

#include "Ce1_vec5_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
