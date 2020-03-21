/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:14 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t8958;
  double t8891;
  double t8894;
  double t8967;
  double t4718;
  double t8953;
  double t8976;
  double t8978;
  double t9027;
  double t9032;
  double t9035;
  double t9038;
  double t4723;
  double t4745;
  double t8864;
  double t8890;
  double t9039;
  double t9057;
  double t9175;
  double t9191;
  double t9195;
  t8958 = Cos(var1[2]);
  t8891 = Cos(var1[5]);
  t8894 = Sin(var1[2]);
  t8967 = Sin(var1[5]);
  t4718 = Cos(var1[6]);
  t8953 = t8891*t8894;
  t8976 = t8958*t8967;
  t8978 = t8953 + t8976;
  t9027 = t8958*t8891;
  t9032 = -1.*t8894*t8967;
  t9035 = t9027 + t9032;
  t9038 = Sin(var1[6]);
  t4723 = -1.*t4718;
  t4745 = 1. + t4723;
  t8864 = 0.4*t4745;
  t8890 = 0. + t8864;
  t9039 = -0.4*t9038;
  t9057 = 0. + t9039;
  t9175 = -1.*t8891*t8894;
  t9191 = -1.*t8958*t8967;
  t9195 = t9175 + t9191;
  p_output1[0]=0. + t8890*t8978 + 0.4*(t4718*t8978 + t9035*t9038) + t9035*t9057 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t8890*t9035 + t9057*t9195 + 0.4*(t4718*t9035 + t9038*t9195) + var1[1];
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_q2_left.hh"

namespace SymExpression
{

void p_q2_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
