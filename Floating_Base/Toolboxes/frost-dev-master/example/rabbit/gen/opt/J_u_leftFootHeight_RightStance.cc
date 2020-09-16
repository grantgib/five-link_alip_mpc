/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 15:05:58 GMT-04:00
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
  double t3608;
  double t3605;
  double t3606;
  double t3609;
  double t3591;
  double t3607;
  double t3610;
  double t3611;
  double t3613;
  double t3614;
  double t3615;
  double t3616;
  double t3592;
  double t3600;
  double t3612;
  double t3617;
  double t3618;
  double t3619;
  double t3620;
  double t3621;
  double t3622;
  double t3624;
  double t3625;
  double t3626;
  t3608 = Cos(var1[2]);
  t3605 = Cos(var1[5]);
  t3606 = Sin(var1[2]);
  t3609 = Sin(var1[5]);
  t3591 = Cos(var1[6]);
  t3607 = -1.*t3605*t3606;
  t3610 = -1.*t3608*t3609;
  t3611 = t3607 + t3610;
  t3613 = -1.*t3608*t3605;
  t3614 = t3606*t3609;
  t3615 = t3613 + t3614;
  t3616 = Sin(var1[6]);
  t3592 = -1.*t3591;
  t3600 = 1. + t3592;
  t3612 = 0.4*t3600*t3611;
  t3617 = -0.4*t3615*t3616;
  t3618 = t3591*t3611;
  t3619 = t3615*t3616;
  t3620 = t3618 + t3619;
  t3621 = 0.8*t3620;
  t3622 = t3612 + t3617 + t3621;
  t3624 = t3608*t3605;
  t3625 = -1.*t3606*t3609;
  t3626 = t3624 + t3625;
  p_output1[0]=1.;
  p_output1[1]=t3622;
  p_output1[2]=t3622;
  p_output1[3]=-0.4*t3591*t3611 + 0.4*t3616*t3626 + 0.8*(t3618 - 1.*t3616*t3626);
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
