/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:36:49 GMT-05:00
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
  double t9018;
  double t9063;
  double t8976;
  double t9196;
  double t4122;
  double t9025;
  double t9199;
  double t9248;
  double t9300;
  double t9303;
  double t9343;
  double t9345;
  double t8875;
  double t8967;
  double t9297;
  double t9358;
  double t9368;
  double t9380;
  double t9416;
  double t9479;
  double t9497;
  double t9576;
  double t9623;
  double t9658;
  double t9858;
  double t10048;
  double t10049;
  double t10052;
  double t10010;
  double t10068;
  double t10072;
  double t10089;
  double t10090;
  double t10091;
  t9018 = Cos(var1[3]);
  t9063 = Sin(var1[2]);
  t8976 = Cos(var1[2]);
  t9196 = Sin(var1[3]);
  t4122 = Cos(var1[4]);
  t9025 = t8976*t9018;
  t9199 = -1.*t9063*t9196;
  t9248 = t9025 + t9199;
  t9300 = -1.*t9018*t9063;
  t9303 = -1.*t8976*t9196;
  t9343 = t9300 + t9303;
  t9345 = Sin(var1[4]);
  t8875 = -1.*t4122;
  t8967 = 1. + t8875;
  t9297 = 0.4*t8967*t9248;
  t9358 = -0.4*t9343*t9345;
  t9368 = t4122*t9248;
  t9380 = t9343*t9345;
  t9416 = t9368 + t9380;
  t9479 = 0.8*t9416;
  t9497 = t9297 + t9358 + t9479;
  t9576 = t9018*t9063;
  t9623 = t8976*t9196;
  t9658 = t9576 + t9623;
  t9858 = t4122*t9343;
  t10048 = -1.*t8976*t9018;
  t10049 = t9063*t9196;
  t10052 = t10048 + t10049;
  t10010 = 0.4*t8967*t9343;
  t10068 = -0.4*t10052*t9345;
  t10072 = t10052*t9345;
  t10089 = t9858 + t10072;
  t10090 = 0.8*t10089;
  t10091 = t10010 + t10068 + t10090;
  p_output1[0]=var2[0] + t9497*var2[2] + t9497*var2[3] + (-0.4*t4122*t9248 + 0.4*t9345*t9658 + 0.8*(t9368 - 1.*t9345*t9658))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t10091*var2[2] + t10091*var2[3] + (-0.4*t4122*t9343 + 0.4*t9248*t9345 + 0.8*(-1.*t9248*t9345 + t9858))*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightToe_RightStance.hh"

namespace RightStance
{

void dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
