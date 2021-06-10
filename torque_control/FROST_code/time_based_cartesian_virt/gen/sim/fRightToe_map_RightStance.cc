/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 15:59:14 GMT-05:00
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
  double t4386;
  double t4388;
  double t4385;
  double t4389;
  double t4361;
  double t4387;
  double t4390;
  double t4391;
  double t4393;
  double t4394;
  double t4395;
  double t4396;
  double t4368;
  double t4380;
  double t4392;
  double t4397;
  double t4398;
  double t4399;
  double t4400;
  double t4401;
  double t4402;
  double t4404;
  double t4405;
  double t4406;
  double t4413;
  double t4414;
  double t4415;
  double t4412;
  double t4416;
  double t4417;
  double t4418;
  double t4419;
  double t4420;
  double t4421;
  t4386 = Cos(var1[3]);
  t4388 = Sin(var1[2]);
  t4385 = Cos(var1[2]);
  t4389 = Sin(var1[3]);
  t4361 = Cos(var1[4]);
  t4387 = t4385*t4386;
  t4390 = -1.*t4388*t4389;
  t4391 = t4387 + t4390;
  t4393 = -1.*t4386*t4388;
  t4394 = -1.*t4385*t4389;
  t4395 = t4393 + t4394;
  t4396 = Sin(var1[4]);
  t4368 = -1.*t4361;
  t4380 = 1. + t4368;
  t4392 = 0.4*t4380*t4391;
  t4397 = -0.4*t4395*t4396;
  t4398 = t4361*t4391;
  t4399 = t4395*t4396;
  t4400 = t4398 + t4399;
  t4401 = 0.8*t4400;
  t4402 = t4392 + t4397 + t4401;
  t4404 = t4386*t4388;
  t4405 = t4385*t4389;
  t4406 = t4404 + t4405;
  t4413 = -1.*t4385*t4386;
  t4414 = t4388*t4389;
  t4415 = t4413 + t4414;
  t4412 = 0.4*t4380*t4395;
  t4416 = -0.4*t4415*t4396;
  t4417 = t4361*t4395;
  t4418 = t4415*t4396;
  t4419 = t4417 + t4418;
  t4420 = 0.8*t4419;
  t4421 = t4412 + t4416 + t4420;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t4402;
  p_output1[3]=t4402;
  p_output1[4]=-0.4*t4361*t4391 + 0.4*t4396*t4406 + 0.8*(t4398 - 1.*t4396*t4406);
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
  p_output1[16]=t4421;
  p_output1[17]=t4421;
  p_output1[18]=-0.4*t4361*t4395 + 0.4*t4391*t4396 + 0.8*(-1.*t4391*t4396 + t4417);
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

#include "fRightToe_map_RightStance.hh"

namespace SymFunction
{

void fRightToe_map_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
