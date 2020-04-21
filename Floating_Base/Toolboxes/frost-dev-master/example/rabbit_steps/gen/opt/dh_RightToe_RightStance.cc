/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:53:06 GMT-04:00
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
  double t2421;
  double t2437;
  double t2420;
  double t2616;
  double t1366;
  double t2436;
  double t2634;
  double t2635;
  double t2984;
  double t2991;
  double t3617;
  double t3968;
  double t2272;
  double t2343;
  double t2921;
  double t4154;
  double t4410;
  double t4430;
  double t4433;
  double t4434;
  double t4462;
  double t4519;
  double t4536;
  double t4544;
  double t4758;
  double t5007;
  double t5032;
  double t5051;
  double t4967;
  double t5086;
  double t5099;
  double t5118;
  double t5135;
  double t5161;
  t2421 = Cos(var1[3]);
  t2437 = Sin(var1[2]);
  t2420 = Cos(var1[2]);
  t2616 = Sin(var1[3]);
  t1366 = Cos(var1[4]);
  t2436 = t2420*t2421;
  t2634 = -1.*t2437*t2616;
  t2635 = t2436 + t2634;
  t2984 = -1.*t2421*t2437;
  t2991 = -1.*t2420*t2616;
  t3617 = t2984 + t2991;
  t3968 = Sin(var1[4]);
  t2272 = -1.*t1366;
  t2343 = 1. + t2272;
  t2921 = 0.4*t2343*t2635;
  t4154 = -0.4*t3617*t3968;
  t4410 = t1366*t2635;
  t4430 = t3617*t3968;
  t4433 = t4410 + t4430;
  t4434 = 0.8*t4433;
  t4462 = t2921 + t4154 + t4434;
  t4519 = t2421*t2437;
  t4536 = t2420*t2616;
  t4544 = t4519 + t4536;
  t4758 = t1366*t3617;
  t5007 = -1.*t2420*t2421;
  t5032 = t2437*t2616;
  t5051 = t5007 + t5032;
  t4967 = 0.4*t2343*t3617;
  t5086 = -0.4*t5051*t3968;
  t5099 = t5051*t3968;
  t5118 = t4758 + t5099;
  t5135 = 0.8*t5118;
  t5161 = t4967 + t5086 + t5135;
  p_output1[0]=var2[0] + t4462*var2[2] + t4462*var2[3] + (-0.4*t1366*t2635 + 0.4*t3968*t4544 + 0.8*(t4410 - 1.*t3968*t4544))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t5161*var2[2] + t5161*var2[3] + (-0.4*t1366*t3617 + 0.4*t2635*t3968 + 0.8*(-1.*t2635*t3968 + t4758))*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightToe_RightStance.hh"

namespace RightStance
{

void dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
