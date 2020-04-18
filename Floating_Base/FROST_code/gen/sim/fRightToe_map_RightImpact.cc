/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 16:58:18 GMT-04:00
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
  double t4379;
  double t4381;
  double t4378;
  double t4382;
  double t4372;
  double t4380;
  double t4383;
  double t4384;
  double t4386;
  double t4387;
  double t4388;
  double t4389;
  double t4376;
  double t4377;
  double t4385;
  double t4390;
  double t4391;
  double t4392;
  double t4393;
  double t4394;
  double t4395;
  double t4397;
  double t4398;
  double t4399;
  double t4406;
  double t4407;
  double t4408;
  double t4405;
  double t4409;
  double t4410;
  double t4411;
  double t4412;
  double t4413;
  double t4414;
  t4379 = Cos(var1[3]);
  t4381 = Sin(var1[2]);
  t4378 = Cos(var1[2]);
  t4382 = Sin(var1[3]);
  t4372 = Cos(var1[4]);
  t4380 = t4378*t4379;
  t4383 = -1.*t4381*t4382;
  t4384 = t4380 + t4383;
  t4386 = -1.*t4379*t4381;
  t4387 = -1.*t4378*t4382;
  t4388 = t4386 + t4387;
  t4389 = Sin(var1[4]);
  t4376 = -1.*t4372;
  t4377 = 1. + t4376;
  t4385 = 0.4*t4377*t4384;
  t4390 = -0.4*t4388*t4389;
  t4391 = t4372*t4384;
  t4392 = t4388*t4389;
  t4393 = t4391 + t4392;
  t4394 = 0.8*t4393;
  t4395 = t4385 + t4390 + t4394;
  t4397 = t4379*t4381;
  t4398 = t4378*t4382;
  t4399 = t4397 + t4398;
  t4406 = -1.*t4378*t4379;
  t4407 = t4381*t4382;
  t4408 = t4406 + t4407;
  t4405 = 0.4*t4377*t4388;
  t4409 = -0.4*t4408*t4389;
  t4410 = t4372*t4388;
  t4411 = t4408*t4389;
  t4412 = t4410 + t4411;
  t4413 = 0.8*t4412;
  t4414 = t4405 + t4409 + t4413;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t4395;
  p_output1[3]=t4395;
  p_output1[4]=-0.4*t4372*t4384 + 0.4*t4389*t4399 + 0.8*(t4391 - 1.*t4389*t4399);
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=1.;
  p_output1[16]=t4414;
  p_output1[17]=t4414;
  p_output1[18]=-0.4*t4372*t4388 + 0.4*t4384*t4389 + 0.8*(-1.*t4384*t4389 + t4410);
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_map_RightImpact.hh"

namespace SymFunction
{

void fRightToe_map_RightImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
