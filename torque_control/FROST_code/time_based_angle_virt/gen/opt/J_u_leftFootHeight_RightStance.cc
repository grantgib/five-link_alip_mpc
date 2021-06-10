/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:20:22 GMT-05:00
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
  double t3829;
  double t3821;
  double t3826;
  double t3830;
  double t1475;
  double t3828;
  double t3831;
  double t3832;
  double t3834;
  double t3835;
  double t3836;
  double t3837;
  double t3806;
  double t3810;
  double t3833;
  double t3838;
  double t3839;
  double t3840;
  double t3841;
  double t3842;
  double t3843;
  double t3845;
  double t3846;
  double t3847;
  t3829 = Cos(var1[2]);
  t3821 = Cos(var1[5]);
  t3826 = Sin(var1[2]);
  t3830 = Sin(var1[5]);
  t1475 = Cos(var1[6]);
  t3828 = -1.*t3821*t3826;
  t3831 = -1.*t3829*t3830;
  t3832 = t3828 + t3831;
  t3834 = -1.*t3829*t3821;
  t3835 = t3826*t3830;
  t3836 = t3834 + t3835;
  t3837 = Sin(var1[6]);
  t3806 = -1.*t1475;
  t3810 = 1. + t3806;
  t3833 = 0.4*t3810*t3832;
  t3838 = -0.4*t3836*t3837;
  t3839 = t1475*t3832;
  t3840 = t3836*t3837;
  t3841 = t3839 + t3840;
  t3842 = 0.8*t3841;
  t3843 = t3833 + t3838 + t3842;
  t3845 = t3829*t3821;
  t3846 = -1.*t3826*t3830;
  t3847 = t3845 + t3846;
  p_output1[0]=1.;
  p_output1[1]=t3843;
  p_output1[2]=t3843;
  p_output1[3]=-0.4*t1475*t3832 + 0.4*t3837*t3847 + 0.8*(t3839 - 1.*t3837*t3847);
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
