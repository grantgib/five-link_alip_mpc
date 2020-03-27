/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:55:10 GMT-04:00
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
  double t6729;
  double t5358;
  double t5360;
  double t6796;
  double t4099;
  double t6638;
  double t6802;
  double t6918;
  double t6980;
  double t7126;
  double t7130;
  double t7140;
  double t4958;
  double t5217;
  double t6952;
  double t7239;
  double t7382;
  double t8038;
  double t8106;
  double t8207;
  double t9402;
  double t9564;
  double t9695;
  double t9880;
  t6729 = Cos(var1[2]);
  t5358 = Cos(var1[5]);
  t5360 = Sin(var1[2]);
  t6796 = Sin(var1[5]);
  t4099 = Cos(var1[6]);
  t6638 = -1.*t5358*t5360;
  t6802 = -1.*t6729*t6796;
  t6918 = t6638 + t6802;
  t6980 = -1.*t6729*t5358;
  t7126 = t5360*t6796;
  t7130 = t6980 + t7126;
  t7140 = Sin(var1[6]);
  t4958 = -1.*t4099;
  t5217 = 1. + t4958;
  t6952 = 0.4*t5217*t6918;
  t7239 = -0.4*t7130*t7140;
  t7382 = t4099*t6918;
  t8038 = t7130*t7140;
  t8106 = t7382 + t8038;
  t8207 = 0.8*t8106;
  t9402 = t6952 + t7239 + t8207;
  t9564 = t6729*t5358;
  t9695 = -1.*t5360*t6796;
  t9880 = t9564 + t9695;
  p_output1[0]=1.;
  p_output1[1]=t9402;
  p_output1[2]=t9402;
  p_output1[3]=-0.4*t4099*t6918 + 0.4*t7140*t9880 + 0.8*(t7382 - 1.*t7140*t9880);
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
