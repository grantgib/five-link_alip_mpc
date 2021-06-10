/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 02:08:23 GMT-05:00
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
  double t1591;
  double t1525;
  double t1552;
  double t1604;
  double t1334;
  double t1554;
  double t1609;
  double t1624;
  double t1643;
  double t1655;
  double t1666;
  double t1667;
  double t1371;
  double t1426;
  double t1636;
  double t1693;
  double t1702;
  double t1708;
  double t1752;
  double t1754;
  double t1758;
  double t1806;
  double t1822;
  double t1825;
  t1591 = Cos(var1[2]);
  t1525 = Cos(var1[5]);
  t1552 = Sin(var1[2]);
  t1604 = Sin(var1[5]);
  t1334 = Cos(var1[6]);
  t1554 = -1.*t1525*t1552;
  t1609 = -1.*t1591*t1604;
  t1624 = t1554 + t1609;
  t1643 = -1.*t1591*t1525;
  t1655 = t1552*t1604;
  t1666 = t1643 + t1655;
  t1667 = Sin(var1[6]);
  t1371 = -1.*t1334;
  t1426 = 1. + t1371;
  t1636 = 0.4*t1426*t1624;
  t1693 = -0.4*t1666*t1667;
  t1702 = t1334*t1624;
  t1708 = t1666*t1667;
  t1752 = t1702 + t1708;
  t1754 = 0.8*t1752;
  t1758 = t1636 + t1693 + t1754;
  t1806 = t1591*t1525;
  t1822 = -1.*t1552*t1604;
  t1825 = t1806 + t1822;
  p_output1[0]=1.;
  p_output1[1]=t1758;
  p_output1[2]=t1758;
  p_output1[3]=-0.4*t1334*t1624 + 0.4*t1667*t1825 + 0.8*(t1702 - 1.*t1667*t1825);
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
