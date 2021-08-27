/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 16:58:20 GMT-04:00
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
  double t4403;
  double t4415;
  double t4402;
  double t4416;
  double t4396;
  double t4404;
  double t4417;
  double t4418;
  double t4420;
  double t4421;
  double t4422;
  double t4423;
  double t4400;
  double t4401;
  double t4432;
  double t4433;
  double t4434;
  double t4419;
  double t4424;
  double t4425;
  double t4426;
  double t4427;
  double t4428;
  double t4429;
  double t4430;
  double t4431;
  double t4435;
  double t4436;
  double t4437;
  double t4438;
  double t4439;
  double t4440;
  double t4441;
  double t4442;
  double t4444;
  double t4445;
  double t4446;
  t4403 = Cos(var1[3]);
  t4415 = Sin(var1[2]);
  t4402 = Cos(var1[2]);
  t4416 = Sin(var1[3]);
  t4396 = Cos(var1[4]);
  t4404 = t4402*t4403;
  t4417 = -1.*t4415*t4416;
  t4418 = t4404 + t4417;
  t4420 = -1.*t4403*t4415;
  t4421 = -1.*t4402*t4416;
  t4422 = t4420 + t4421;
  t4423 = Sin(var1[4]);
  t4400 = -1.*t4396;
  t4401 = 1. + t4400;
  t4432 = -1.*t4402*t4403;
  t4433 = t4415*t4416;
  t4434 = t4432 + t4433;
  t4419 = 0.4*t4401*t4418;
  t4424 = -0.4*t4422*t4423;
  t4425 = t4396*t4418;
  t4426 = t4422*t4423;
  t4427 = t4425 + t4426;
  t4428 = 0.8*t4427;
  t4429 = t4419 + t4424 + t4428;
  t4430 = var2[0]*t4429;
  t4431 = 0.4*t4401*t4422;
  t4435 = -0.4*t4434*t4423;
  t4436 = t4396*t4422;
  t4437 = t4434*t4423;
  t4438 = t4436 + t4437;
  t4439 = 0.8*t4438;
  t4440 = t4431 + t4435 + t4439;
  t4441 = var2[2]*t4440;
  t4442 = t4430 + t4441;
  t4444 = t4403*t4415;
  t4445 = t4402*t4416;
  t4446 = t4444 + t4445;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t4442;
  p_output1[3]=t4442;
  p_output1[4]=(-0.4*t4396*t4418 + 0.4*t4423*t4446 + 0.8*(t4425 - 1.*t4423*t4446))*var2[0] + (-0.4*t4396*t4422 + 0.4*t4418*t4423 + 0.8*(-1.*t4418*t4423 + t4436))*var2[2];
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

#include "fRightToe_vec_RightImpact.hh"

namespace SymFunction
{

void fRightToe_vec_RightImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
