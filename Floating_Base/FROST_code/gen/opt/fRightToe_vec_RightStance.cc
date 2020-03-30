/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:48:22 GMT-04:00
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
  double t2062;
  double t2156;
  double t2061;
  double t2209;
  double t1153;
  double t2094;
  double t2210;
  double t2225;
  double t2301;
  double t2819;
  double t3184;
  double t3362;
  double t2010;
  double t2034;
  double t6124;
  double t6718;
  double t6719;
  double t2240;
  double t5543;
  double t5584;
  double t5669;
  double t5729;
  double t5834;
  double t5932;
  double t5965;
  double t6098;
  double t6961;
  double t6965;
  double t7012;
  double t7067;
  double t7078;
  double t7079;
  double t7089;
  double t7090;
  double t7777;
  double t7783;
  double t7933;
  t2062 = Cos(var1[3]);
  t2156 = Sin(var1[2]);
  t2061 = Cos(var1[2]);
  t2209 = Sin(var1[3]);
  t1153 = Cos(var1[4]);
  t2094 = t2061*t2062;
  t2210 = -1.*t2156*t2209;
  t2225 = t2094 + t2210;
  t2301 = -1.*t2062*t2156;
  t2819 = -1.*t2061*t2209;
  t3184 = t2301 + t2819;
  t3362 = Sin(var1[4]);
  t2010 = -1.*t1153;
  t2034 = 1. + t2010;
  t6124 = -1.*t2061*t2062;
  t6718 = t2156*t2209;
  t6719 = t6124 + t6718;
  t2240 = 0.4*t2034*t2225;
  t5543 = -0.4*t3184*t3362;
  t5584 = t1153*t2225;
  t5669 = t3184*t3362;
  t5729 = t5584 + t5669;
  t5834 = 0.8*t5729;
  t5932 = t2240 + t5543 + t5834;
  t5965 = var2[0]*t5932;
  t6098 = 0.4*t2034*t3184;
  t6961 = -0.4*t6719*t3362;
  t6965 = t1153*t3184;
  t7012 = t6719*t3362;
  t7067 = t6965 + t7012;
  t7078 = 0.8*t7067;
  t7079 = t6098 + t6961 + t7078;
  t7089 = var2[2]*t7079;
  t7090 = t5965 + t7089;
  t7777 = t2062*t2156;
  t7783 = t2061*t2209;
  t7933 = t7777 + t7783;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t7090;
  p_output1[3]=t7090;
  p_output1[4]=(-0.4*t1153*t2225 + 0.4*t3362*t7933 + 0.8*(t5584 - 1.*t3362*t7933))*var2[0] + (-0.4*t1153*t3184 + 0.4*t2225*t3362 + 0.8*(-1.*t2225*t3362 + t6965))*var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "fRightToe_vec_RightStance.hh"

namespace RightStance
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
