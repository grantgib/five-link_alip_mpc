/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:23:58 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t2668;
  double t2650;
  double t2664;
  double t2671;
  double t1866;
  double t2667;
  double t2680;
  double t3300;
  double t9002;
  double t9007;
  double t9008;
  double t9011;
  double t1943;
  double t2325;
  double t9001;
  double t9012;
  double t9014;
  double t9015;
  double t9017;
  double t9019;
  double t9020;
  double t9022;
  double t9023;
  double t9042;
  t2668 = Cos(var1[2]);
  t2650 = Cos(var1[5]);
  t2664 = Sin(var1[2]);
  t2671 = Sin(var1[5]);
  t1866 = Cos(var1[6]);
  t2667 = -1.*t2650*t2664;
  t2680 = -1.*t2668*t2671;
  t3300 = t2667 + t2680;
  t9002 = -1.*t2668*t2650;
  t9007 = t2664*t2671;
  t9008 = t9002 + t9007;
  t9011 = Sin(var1[6]);
  t1943 = -1.*t1866;
  t2325 = 1. + t1943;
  t9001 = 0.4*t2325*t3300;
  t9012 = -0.4*t9008*t9011;
  t9014 = t1866*t3300;
  t9015 = t9008*t9011;
  t9017 = t9014 + t9015;
  t9019 = 0.8*t9017;
  t9020 = t9001 + t9012 + t9019;
  t9022 = t2668*t2650;
  t9023 = -1.*t2664*t2671;
  t9042 = t9022 + t9023;
  p_output1[0]=1.;
  p_output1[1]=t9020;
  p_output1[2]=t9020;
  p_output1[3]=-0.4*t1866*t3300 + 0.4*t9011*t9042 + 0.8*(t9014 - 1.*t9011*t9042);
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

#include "J_swing_foot_height.hh"

namespace RightStance
{

void J_swing_foot_height_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
