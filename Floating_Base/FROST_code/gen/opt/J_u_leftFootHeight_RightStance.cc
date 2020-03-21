/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:37:05 GMT-04:00
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
  double t12595;
  double t12572;
  double t12586;
  double t12605;
  double t11609;
  double t12593;
  double t12606;
  double t12618;
  double t12630;
  double t12649;
  double t12658;
  double t12659;
  double t11622;
  double t12467;
  double t12620;
  double t12660;
  double t12668;
  double t12669;
  double t12670;
  double t12671;
  double t12672;
  double t12675;
  double t12676;
  double t12677;
  t12595 = Cos(var1[2]);
  t12572 = Cos(var1[5]);
  t12586 = Sin(var1[2]);
  t12605 = Sin(var1[5]);
  t11609 = Cos(var1[6]);
  t12593 = -1.*t12572*t12586;
  t12606 = -1.*t12595*t12605;
  t12618 = t12593 + t12606;
  t12630 = -1.*t12595*t12572;
  t12649 = t12586*t12605;
  t12658 = t12630 + t12649;
  t12659 = Sin(var1[6]);
  t11622 = -1.*t11609;
  t12467 = 1. + t11622;
  t12620 = 0.4*t12467*t12618;
  t12660 = -0.4*t12658*t12659;
  t12668 = t11609*t12618;
  t12669 = t12658*t12659;
  t12670 = t12668 + t12669;
  t12671 = 0.8*t12670;
  t12672 = t12620 + t12660 + t12671;
  t12675 = t12595*t12572;
  t12676 = -1.*t12586*t12605;
  t12677 = t12675 + t12676;
  p_output1[0]=1.;
  p_output1[1]=t12672;
  p_output1[2]=t12672;
  p_output1[3]=-0.4*t11609*t12618 + 0.4*t12659*t12677 + 0.8*(t12668 - 1.*t12659*t12677);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_leftFootHeight_RightStance.hh"

namespace RightStance
{

void J_u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
