/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:24:03 GMT-05:00
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
  double t9066;
  double t9062;
  double t9064;
  double t9067;
  double t9043;
  double t9065;
  double t9068;
  double t9069;
  double t9071;
  double t9072;
  double t9073;
  double t9074;
  double t9044;
  double t9055;
  double t9070;
  double t9075;
  double t9076;
  double t9077;
  double t9078;
  double t9079;
  double t9080;
  double t9082;
  double t9083;
  double t9084;
  t9066 = Cos(var1[2]);
  t9062 = Cos(var1[5]);
  t9064 = Sin(var1[2]);
  t9067 = Sin(var1[5]);
  t9043 = Cos(var1[6]);
  t9065 = -1.*t9062*t9064;
  t9068 = -1.*t9066*t9067;
  t9069 = t9065 + t9068;
  t9071 = -1.*t9066*t9062;
  t9072 = t9064*t9067;
  t9073 = t9071 + t9072;
  t9074 = Sin(var1[6]);
  t9044 = -1.*t9043;
  t9055 = 1. + t9044;
  t9070 = 0.4*t9055*t9069;
  t9075 = -0.4*t9073*t9074;
  t9076 = t9043*t9069;
  t9077 = t9073*t9074;
  t9078 = t9076 + t9077;
  t9079 = 0.8*t9078;
  t9080 = t9070 + t9075 + t9079;
  t9082 = t9066*t9062;
  t9083 = -1.*t9064*t9067;
  t9084 = t9082 + t9083;
  p_output1[0]=1.;
  p_output1[1]=t9080;
  p_output1[2]=t9080;
  p_output1[3]=-0.4*t9043*t9069 + 0.4*t9074*t9084 + 0.8*(t9076 - 1.*t9074*t9084);
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
