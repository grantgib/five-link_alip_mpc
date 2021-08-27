/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:36:43 GMT-05:00
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
  double t1303;
  double t1551;
  double t1283;
  double t1778;
  double t125;
  double t1452;
  double t1780;
  double t2249;
  double t2594;
  double t3439;
  double t3625;
  double t3813;
  double t183;
  double t363;
  double t5030;
  double t5056;
  double t5106;
  double t2441;
  double t4126;
  double t4340;
  double t4341;
  double t4888;
  double t4923;
  double t4927;
  double t5024;
  double t5950;
  double t6080;
  double t6205;
  double t6350;
  double t6377;
  double t6723;
  double t6759;
  double t6944;
  double t6992;
  double t7428;
  double t7438;
  double t7452;
  double t7119;
  double t7135;
  double t7153;
  double t7159;
  double t7167;
  double t7168;
  double t7227;
  double t7412;
  double t7486;
  double t7487;
  double t7504;
  double t7561;
  double t7654;
  double t7674;
  double t7726;
  double t7733;
  double t7795;
  double t7890;
  double t7938;
  double t7939;
  double t7960;
  double t8028;
  t1303 = Cos(var1[3]);
  t1551 = Sin(var1[2]);
  t1283 = Cos(var1[2]);
  t1778 = Sin(var1[3]);
  t125 = Cos(var1[4]);
  t1452 = -1.*t1283*t1303;
  t1780 = t1551*t1778;
  t2249 = t1452 + t1780;
  t2594 = t1303*t1551;
  t3439 = t1283*t1778;
  t3625 = t2594 + t3439;
  t3813 = Sin(var1[4]);
  t183 = -1.*t125;
  t363 = 1. + t183;
  t5030 = -1.*t1303*t1551;
  t5056 = -1.*t1283*t1778;
  t5106 = t5030 + t5056;
  t2441 = 0.4*t363*t2249;
  t4126 = -0.4*t3625*t3813;
  t4340 = t125*t2249;
  t4341 = t3625*t3813;
  t4888 = t4340 + t4341;
  t4923 = 0.8*t4888;
  t4927 = t2441 + t4126 + t4923;
  t5024 = var2[2]*t4927;
  t5950 = 0.4*t363*t5106;
  t6080 = -0.4*t2249*t3813;
  t6205 = t125*t5106;
  t6350 = t2249*t3813;
  t6377 = t6205 + t6350;
  t6723 = 0.8*t6377;
  t6759 = t5950 + t6080 + t6723;
  t6944 = var2[0]*t6759;
  t6992 = t5024 + t6944;
  t7428 = t1283*t1303;
  t7438 = -1.*t1551*t1778;
  t7452 = t7428 + t7438;
  t7119 = -0.4*t125*t2249;
  t7135 = 0.4*t5106*t3813;
  t7153 = -1.*t5106*t3813;
  t7159 = t4340 + t7153;
  t7167 = 0.8*t7159;
  t7168 = t7119 + t7135 + t7167;
  t7227 = var2[2]*t7168;
  t7412 = -0.4*t125*t5106;
  t7486 = 0.4*t7452*t3813;
  t7487 = -1.*t7452*t3813;
  t7504 = t6205 + t7487;
  t7561 = 0.8*t7504;
  t7654 = t7412 + t7486 + t7561;
  t7674 = var2[0]*t7654;
  t7726 = t7227 + t7674;
  t7733 = 0.4*t363*t7452;
  t7795 = -0.4*t5106*t3813;
  t7890 = t125*t7452;
  t7938 = t5106*t3813;
  t7939 = t7890 + t7938;
  t7960 = 0.8*t7939;
  t8028 = t7733 + t7795 + t7960;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t6992;
  p_output1[3]=t6992;
  p_output1[4]=t7726;
  p_output1[5]=t8028;
  p_output1[6]=t6759;
  p_output1[7]=t6992;
  p_output1[8]=t6992;
  p_output1[9]=t7726;
  p_output1[10]=t8028;
  p_output1[11]=t6759;
  p_output1[12]=t7726;
  p_output1[13]=t7726;
  p_output1[14]=(0.4*t125*t3625 + t7486 + 0.8*(-1.*t125*t3625 + t7487))*var2[0] + (t7135 + 0.4*t125*t7452 + 0.8*(t7153 - 1.*t125*t7452))*var2[2];
  p_output1[15]=0.4*t3625*t3813 - 0.4*t125*t7452 + 0.8*(-1.*t3625*t3813 + t7890);
  p_output1[16]=t7654;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightToe_vec_RightStance.hh"

namespace RightStance
{

void J_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
