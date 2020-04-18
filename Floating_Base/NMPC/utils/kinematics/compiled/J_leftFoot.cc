/*
 * Automatically Generated from Mathematica.
 * Fri 27 Mar 2020 17:15:25 GMT-04:00
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
  double t7;
  double t9;
  double t6;
  double t10;
  double t3;
  double t8;
  double t11;
  double t12;
  double t14;
  double t15;
  double t16;
  double t17;
  double t4;
  double t5;
  double t25;
  double t26;
  double t27;
  double t13;
  double t18;
  double t19;
  double t20;
  double t21;
  double t22;
  double t23;
  double t24;
  double t28;
  double t29;
  double t30;
  double t31;
  double t32;
  double t33;
  double t35;
  double t36;
  double t37;
  t7 = Cos(var1[5]);
  t9 = Sin(var1[2]);
  t6 = Cos(var1[2]);
  t10 = Sin(var1[5]);
  t3 = Cos(var1[6]);
  t8 = t6*t7;
  t11 = -1.*t9*t10;
  t12 = t8 + t11;
  t14 = -1.*t7*t9;
  t15 = -1.*t6*t10;
  t16 = t14 + t15;
  t17 = Sin(var1[6]);
  t4 = -1.*t3;
  t5 = 1. + t4;
  t25 = -1.*t6*t7;
  t26 = t9*t10;
  t27 = t25 + t26;
  t13 = 0.4*t5*t12;
  t18 = -0.4*t16*t17;
  t19 = t3*t12;
  t20 = t16*t17;
  t21 = t19 + t20;
  t22 = 0.8*t21;
  t23 = t13 + t18 + t22;
  t24 = 0.4*t5*t16;
  t28 = -0.4*t27*t17;
  t29 = t3*t16;
  t30 = t27*t17;
  t31 = t29 + t30;
  t32 = 0.8*t31;
  t33 = t24 + t28 + t32;
  t35 = t7*t9;
  t36 = t6*t10;
  t37 = t35 + t36;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=1.;
  p_output1[4]=t23;
  p_output1[5]=t33;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=t23;
  p_output1[11]=t33;
  p_output1[12]=-0.4*t12*t3 + 0.4*t17*t37 + 0.8*(t19 - 1.*t17*t37);
  p_output1[13]=0.4*t12*t17 + 0.8*(-1.*t12*t17 + t29) - 0.4*t16*t3;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_leftFoot.hh"

namespace SymExpression
{

void J_leftFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
