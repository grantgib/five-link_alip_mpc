/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:51:33 GMT-04:00
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
  double t3916;
  double t4045;
  double t2154;
  double t4117;
  double t672;
  double t4034;
  double t4182;
  double t4210;
  double t4234;
  double t4242;
  double t4264;
  double t4268;
  double t1747;
  double t1926;
  double t4347;
  double t4348;
  double t4351;
  double t4233;
  double t4274;
  double t4317;
  double t4320;
  double t4321;
  double t4322;
  double t4323;
  double t4343;
  double t4344;
  double t4355;
  double t4363;
  double t4372;
  double t4378;
  double t4379;
  double t4409;
  double t4415;
  double t4421;
  double t4426;
  double t4427;
  double t4428;
  t3916 = Cos(var1[3]);
  t4045 = Sin(var1[2]);
  t2154 = Cos(var1[2]);
  t4117 = Sin(var1[3]);
  t672 = Cos(var1[4]);
  t4034 = t2154*t3916;
  t4182 = -1.*t4045*t4117;
  t4210 = t4034 + t4182;
  t4234 = -1.*t3916*t4045;
  t4242 = -1.*t2154*t4117;
  t4264 = t4234 + t4242;
  t4268 = Sin(var1[4]);
  t1747 = -1.*t672;
  t1926 = 1. + t1747;
  t4347 = -1.*t2154*t3916;
  t4348 = t4045*t4117;
  t4351 = t4347 + t4348;
  t4233 = 0.4*t1926*t4210;
  t4274 = -0.4*t4264*t4268;
  t4317 = t672*t4210;
  t4320 = t4264*t4268;
  t4321 = t4317 + t4320;
  t4322 = 0.8*t4321;
  t4323 = t4233 + t4274 + t4322;
  t4343 = var2[0]*t4323;
  t4344 = 0.4*t1926*t4264;
  t4355 = -0.4*t4351*t4268;
  t4363 = t672*t4264;
  t4372 = t4351*t4268;
  t4378 = t4363 + t4372;
  t4379 = 0.8*t4378;
  t4409 = t4344 + t4355 + t4379;
  t4415 = var2[2]*t4409;
  t4421 = t4343 + t4415;
  t4426 = t3916*t4045;
  t4427 = t2154*t4117;
  t4428 = t4426 + t4427;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t4421;
  p_output1[3]=t4421;
  p_output1[4]=(0.4*t4268*t4428 + 0.8*(t4317 - 1.*t4268*t4428) - 0.4*t4210*t672)*var2[0] + (0.4*t4210*t4268 + 0.8*(-1.*t4210*t4268 + t4363) - 0.4*t4264*t672)*var2[2];
  p_output1[5]=0;
  p_output1[6]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_vec_RightStance.hh"

namespace RightStance
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
