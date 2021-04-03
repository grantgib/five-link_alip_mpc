/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:01:16 GMT-05:00
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
  double t4189;
  double t8227;
  double t4154;
  double t8373;
  double t1613;
  double t4305;
  double t8374;
  double t8380;
  double t8401;
  double t8456;
  double t8459;
  double t8463;
  double t3447;
  double t3448;
  double t8563;
  double t8565;
  double t8568;
  double t8391;
  double t8469;
  double t8470;
  double t8482;
  double t8489;
  double t8491;
  double t8492;
  double t8494;
  double t8552;
  double t8574;
  double t8581;
  double t8588;
  double t8592;
  double t8604;
  double t8609;
  double t8617;
  double t8618;
  double t8638;
  double t8649;
  double t8652;
  t4189 = Cos(var1[3]);
  t8227 = Sin(var1[2]);
  t4154 = Cos(var1[2]);
  t8373 = Sin(var1[3]);
  t1613 = Cos(var1[4]);
  t4305 = t4154*t4189;
  t8374 = -1.*t8227*t8373;
  t8380 = t4305 + t8374;
  t8401 = -1.*t4189*t8227;
  t8456 = -1.*t4154*t8373;
  t8459 = t8401 + t8456;
  t8463 = Sin(var1[4]);
  t3447 = -1.*t1613;
  t3448 = 1. + t3447;
  t8563 = -1.*t4154*t4189;
  t8565 = t8227*t8373;
  t8568 = t8563 + t8565;
  t8391 = 0.4*t3448*t8380;
  t8469 = -0.4*t8459*t8463;
  t8470 = t1613*t8380;
  t8482 = t8459*t8463;
  t8489 = t8470 + t8482;
  t8491 = 0.8*t8489;
  t8492 = t8391 + t8469 + t8491;
  t8494 = var2[0]*t8492;
  t8552 = 0.4*t3448*t8459;
  t8574 = -0.4*t8568*t8463;
  t8581 = t1613*t8459;
  t8588 = t8568*t8463;
  t8592 = t8581 + t8588;
  t8604 = 0.8*t8592;
  t8609 = t8552 + t8574 + t8604;
  t8617 = var2[2]*t8609;
  t8618 = t8494 + t8617;
  t8638 = t4189*t8227;
  t8649 = t4154*t8373;
  t8652 = t8638 + t8649;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t8618;
  p_output1[3]=t8618;
  p_output1[4]=(-0.4*t1613*t8380 + 0.4*t8463*t8652 + 0.8*(t8470 - 1.*t8463*t8652))*var2[0] + (-0.4*t1613*t8459 + 0.4*t8380*t8463 + 0.8*(-1.*t8380*t8463 + t8581))*var2[2];
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

namespace SymFunction
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
