/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:36:32 GMT-05:00
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
  double t1242;
  double t1293;
  double t1294;
  double t1333;
  double t1364;
  double t1365;
  double t1498;
  double t1747;
  double t2156;
  double t2244;
  double t2246;
  double t2484;
  double t3208;
  double t3209;
  double t3363;
  double t3367;
  double t3376;
  double t3542;
  double t3868;
  double t3911;
  double t3926;
  double t3958;
  double t1503;
  double t1751;
  double t1944;
  double t1975;
  double t2625;
  double t2686;
  double t3028;
  double t3061;
  double t3067;
  double t3079;
  double t3080;
  double t4559;
  double t4593;
  double t4665;
  double t3497;
  double t3607;
  double t3630;
  double t3645;
  double t4035;
  double t4176;
  double t4188;
  double t4216;
  double t4234;
  double t4258;
  double t4313;
  double t4965;
  double t4966;
  double t4967;
  t1242 = Sin(var1[2]);
  t1293 = Cos(var1[3]);
  t1294 = -1.*t1293*t1242;
  t1333 = Cos(var1[2]);
  t1364 = Sin(var1[3]);
  t1365 = -1.*t1333*t1364;
  t1498 = t1294 + t1365;
  t1747 = Cos(var1[4]);
  t2156 = -1.*t1333*t1293;
  t2244 = t1242*t1364;
  t2246 = t2156 + t2244;
  t2484 = Sin(var1[4]);
  t3208 = Cos(var1[5]);
  t3209 = -1.*t3208*t1242;
  t3363 = Sin(var1[5]);
  t3367 = -1.*t1333*t3363;
  t3376 = t3209 + t3367;
  t3542 = Cos(var1[6]);
  t3868 = -1.*t1333*t3208;
  t3911 = t1242*t3363;
  t3926 = t3868 + t3911;
  t3958 = Sin(var1[6]);
  t1503 = -7.33788*t1498;
  t1751 = -1.*t1747;
  t1944 = 1. + t1751;
  t1975 = 0.4*t1944*t1498;
  t2625 = -0.4*t2246*t2484;
  t2686 = t1747*t1498;
  t3028 = t2246*t2484;
  t3061 = t2686 + t3028;
  t3067 = 0.64*t3061;
  t3079 = t1975 + t2625 + t3067;
  t3080 = -31.392000000000003*t3079;
  t4559 = t1333*t1293;
  t4593 = -1.*t1242*t1364;
  t4665 = t4559 + t4593;
  t3497 = -7.33788*t3376;
  t3607 = -1.*t3542;
  t3630 = 1. + t3607;
  t3645 = 0.4*t3630*t3376;
  t4035 = -0.4*t3926*t3958;
  t4176 = t3542*t3376;
  t4188 = t3926*t3958;
  t4216 = t4176 + t4188;
  t4234 = 0.64*t4216;
  t4258 = t3645 + t4035 + t4234;
  t4313 = -31.392000000000003*t4258;
  t4965 = t1333*t3208;
  t4966 = -1.*t1242*t3363;
  t4967 = t4965 + t4966;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=28.252799999999997*t1242 + t1503 + t3080 + t3497 + t4313;
  p_output1[3]=t1503 + t3080;
  p_output1[4]=-31.392000000000003*(-0.4*t1498*t1747 + 0.4*t2484*t4665 + 0.64*(t2686 - 1.*t2484*t4665));
  p_output1[5]=t3497 + t4313;
  p_output1[6]=-31.392000000000003*(-0.4*t3376*t3542 + 0.4*t3958*t4967 + 0.64*(t4176 - 1.*t3958*t4967));
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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

#include "Ge_vec_five_link_walker.hh"

namespace RightStance
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
