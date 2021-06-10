/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:00:54 GMT-05:00
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
  double t5738;
  double t5785;
  double t5730;
  double t5798;
  double t5617;
  double t5749;
  double t5800;
  double t5808;
  double t5914;
  double t5953;
  double t5955;
  double t5959;
  double t5620;
  double t5655;
  double t5961;
  double t5964;
  double t5971;
  double t6183;
  double t6193;
  double t6195;
  double t6222;
  double t6246;
  double t6373;
  double t6526;
  double t6537;
  double t6538;
  double t6542;
  double t6414;
  double t6521;
  double t6642;
  double t6643;
  double t6646;
  double t6742;
  double t6757;
  double t6766;
  double t6650;
  double t6652;
  double t6661;
  double t6680;
  double t6682;
  double t6524;
  double t6544;
  double t6575;
  double t6577;
  double t6578;
  double t5982;
  double t5991;
  double t6000;
  double t6048;
  double t6158;
  double t6168;
  double t6169;
  double t6171;
  double t6326;
  double t6329;
  double t6579;
  double t6590;
  t5738 = Cos(var1[3]);
  t5785 = Sin(var1[2]);
  t5730 = Cos(var1[2]);
  t5798 = Sin(var1[3]);
  t5617 = Cos(var1[4]);
  t5749 = t5730*t5738;
  t5800 = -1.*t5785*t5798;
  t5808 = t5749 + t5800;
  t5914 = -1.*t5738*t5785;
  t5953 = -1.*t5730*t5798;
  t5955 = t5914 + t5953;
  t5959 = Sin(var1[4]);
  t5620 = -1.*t5617;
  t5655 = 1. + t5620;
  t5961 = t5617*t5808;
  t5964 = t5955*t5959;
  t5971 = t5961 + t5964;
  t6183 = Cos(var1[5]);
  t6193 = t5730*t6183;
  t6195 = Sin(var1[5]);
  t6222 = -1.*t5785*t6195;
  t6246 = t6193 + t6222;
  t6373 = Cos(var1[6]);
  t6526 = -1.*t6183*t5785;
  t6537 = -1.*t5730*t6195;
  t6538 = t6526 + t6537;
  t6542 = Sin(var1[6]);
  t6414 = -1.*t6373;
  t6521 = 1. + t6414;
  t6642 = t6183*t5785;
  t6643 = t5730*t6195;
  t6646 = t6642 + t6643;
  t6742 = t5738*t5785;
  t6757 = t5730*t5798;
  t6766 = t6742 + t6757;
  t6650 = 0.4*t6521*t6646;
  t6652 = -0.4*t6246*t6542;
  t6661 = t6373*t6646;
  t6680 = t6246*t6542;
  t6682 = t6661 + t6680;
  t6524 = 0.4*t6521*t6246;
  t6544 = -0.4*t6538*t6542;
  t6575 = t6373*t6246;
  t6577 = t6538*t6542;
  t6578 = t6575 + t6577;
  t5982 = 0.24*t5730;
  t5991 = var1[1] + t5982;
  t6000 = 0.11*t5808;
  t6048 = var1[1] + t6000;
  t6158 = 0.4*t5655*t5808;
  t6168 = -0.4*t5955*t5959;
  t6169 = 0.64*t5971;
  t6171 = var1[1] + t6158 + t6168 + t6169;
  t6326 = 0.11*t6246;
  t6329 = var1[1] + t6326;
  t6579 = 0.64*t6578;
  t6590 = var1[1] + t6524 + t6544 + t6579;
  p_output1[0]=var1[2];
  p_output1[1]=-0.4*t5655*t5808 + 0.4*t5955*t5959 - 0.8*t5971 + 0.03125*(12.*t5991 + 6.8*t6048 + 3.2*t6171 + 6.8*t6329 + 3.2*t6590) - 1.*var1[1];
  p_output1[2]=t6650 + t6652 + 0.8*t6682 + var1[0] + 0.03125*(-12.*(0.24*t5785 + var1[0]) - 6.8*(0.11*t6646 + var1[0]) - 3.2*(t6650 + t6652 + 0.64*t6682 + var1[0]) - 6.8*(0.11*t6766 + var1[0]) - 3.2*(-0.4*t5808*t5959 + 0.4*t5655*t6766 + 0.64*(t5808*t5959 + t5617*t6766) + var1[0]));
  p_output1[3]=t6524 + t6544 + 0.8*t6578 + 0.03125*(-12.*t5991 - 6.8*t6048 - 3.2*t6171 - 6.8*t6329 - 3.2*t6590) + var1[1];
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

#include "ya_time_RightStance.hh"

namespace SymFunction
{

void ya_time_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
