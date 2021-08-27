/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 01:00:12 GMT-05:00
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
  double t2502;
  double t2484;
  double t2494;
  double t2509;
  double t806;
  double t2501;
  double t2623;
  double t2627;
  double t2643;
  double t2647;
  double t2668;
  double t2669;
  double t1279;
  double t2464;
  double t2635;
  double t2671;
  double t2676;
  double t2677;
  double t2684;
  double t2687;
  double t2693;
  double t2699;
  double t2708;
  double t2711;
  t2502 = Cos(var1[2]);
  t2484 = Cos(var1[5]);
  t2494 = Sin(var1[2]);
  t2509 = Sin(var1[5]);
  t806 = Cos(var1[6]);
  t2501 = -1.*t2484*t2494;
  t2623 = -1.*t2502*t2509;
  t2627 = t2501 + t2623;
  t2643 = -1.*t2502*t2484;
  t2647 = t2494*t2509;
  t2668 = t2643 + t2647;
  t2669 = Sin(var1[6]);
  t1279 = -1.*t806;
  t2464 = 1. + t1279;
  t2635 = 0.4*t2464*t2627;
  t2671 = -0.4*t2668*t2669;
  t2676 = t806*t2627;
  t2677 = t2668*t2669;
  t2684 = t2676 + t2677;
  t2687 = 0.8*t2684;
  t2693 = t2635 + t2671 + t2687;
  t2699 = t2502*t2484;
  t2708 = -1.*t2494*t2509;
  t2711 = t2699 + t2708;
  p_output1[0]=1.;
  p_output1[1]=t2693;
  p_output1[2]=t2693;
  p_output1[3]=0.4*t2669*t2711 + 0.8*(t2676 - 1.*t2669*t2711) - 0.4*t2627*t806;
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

#include "J_swing_foot_length.hh"

namespace RightStance
{

void J_swing_foot_length_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
