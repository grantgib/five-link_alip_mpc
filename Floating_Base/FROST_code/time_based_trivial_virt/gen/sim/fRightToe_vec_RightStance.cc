/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 16:58:15 GMT-04:00
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
  double t4332;
  double t4344;
  double t4331;
  double t4345;
  double t4325;
  double t4333;
  double t4346;
  double t4347;
  double t4349;
  double t4350;
  double t4351;
  double t4352;
  double t4329;
  double t4330;
  double t4361;
  double t4362;
  double t4363;
  double t4348;
  double t4353;
  double t4354;
  double t4355;
  double t4356;
  double t4357;
  double t4358;
  double t4359;
  double t4360;
  double t4364;
  double t4365;
  double t4366;
  double t4367;
  double t4368;
  double t4369;
  double t4370;
  double t4371;
  double t4373;
  double t4374;
  double t4375;
  t4332 = Cos(var1[3]);
  t4344 = Sin(var1[2]);
  t4331 = Cos(var1[2]);
  t4345 = Sin(var1[3]);
  t4325 = Cos(var1[4]);
  t4333 = t4331*t4332;
  t4346 = -1.*t4344*t4345;
  t4347 = t4333 + t4346;
  t4349 = -1.*t4332*t4344;
  t4350 = -1.*t4331*t4345;
  t4351 = t4349 + t4350;
  t4352 = Sin(var1[4]);
  t4329 = -1.*t4325;
  t4330 = 1. + t4329;
  t4361 = -1.*t4331*t4332;
  t4362 = t4344*t4345;
  t4363 = t4361 + t4362;
  t4348 = 0.4*t4330*t4347;
  t4353 = -0.4*t4351*t4352;
  t4354 = t4325*t4347;
  t4355 = t4351*t4352;
  t4356 = t4354 + t4355;
  t4357 = 0.8*t4356;
  t4358 = t4348 + t4353 + t4357;
  t4359 = var2[0]*t4358;
  t4360 = 0.4*t4330*t4351;
  t4364 = -0.4*t4363*t4352;
  t4365 = t4325*t4351;
  t4366 = t4363*t4352;
  t4367 = t4365 + t4366;
  t4368 = 0.8*t4367;
  t4369 = t4360 + t4364 + t4368;
  t4370 = var2[2]*t4369;
  t4371 = t4359 + t4370;
  t4373 = t4332*t4344;
  t4374 = t4331*t4345;
  t4375 = t4373 + t4374;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t4371;
  p_output1[3]=t4371;
  p_output1[4]=(-0.4*t4325*t4347 + 0.4*t4352*t4375 + 0.8*(t4354 - 1.*t4352*t4375))*var2[0] + (-0.4*t4325*t4351 + 0.4*t4347*t4352 + 0.8*(-1.*t4347*t4352 + t4365))*var2[2];
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

namespace SymFunction
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
