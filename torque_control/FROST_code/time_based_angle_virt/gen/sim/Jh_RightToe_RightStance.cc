/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:34:38 GMT-05:00
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
  double t5402;
  double t5411;
  double t5400;
  double t5414;
  double t303;
  double t5407;
  double t5419;
  double t5423;
  double t5431;
  double t5432;
  double t5433;
  double t5434;
  double t5365;
  double t5390;
  double t5457;
  double t5458;
  double t5459;
  double t5425;
  double t5435;
  double t5436;
  double t5437;
  double t5445;
  double t5449;
  double t5454;
  double t5456;
  double t5460;
  double t5461;
  double t5462;
  double t5463;
  double t5464;
  double t5465;
  double t5467;
  double t5468;
  double t5481;
  t5402 = Cos(var1[3]);
  t5411 = Sin(var1[2]);
  t5400 = Cos(var1[2]);
  t5414 = Sin(var1[3]);
  t303 = Cos(var1[4]);
  t5407 = t5400*t5402;
  t5419 = -1.*t5411*t5414;
  t5423 = t5407 + t5419;
  t5431 = -1.*t5402*t5411;
  t5432 = -1.*t5400*t5414;
  t5433 = t5431 + t5432;
  t5434 = Sin(var1[4]);
  t5365 = -1.*t303;
  t5390 = 1. + t5365;
  t5457 = -1.*t5400*t5402;
  t5458 = t5411*t5414;
  t5459 = t5457 + t5458;
  t5425 = 0.4*t5390*t5423;
  t5435 = -0.4*t5433*t5434;
  t5436 = t303*t5423;
  t5437 = t5433*t5434;
  t5445 = t5436 + t5437;
  t5449 = 0.8*t5445;
  t5454 = t5425 + t5435 + t5449;
  t5456 = 0.4*t5390*t5433;
  t5460 = -0.4*t5459*t5434;
  t5461 = t303*t5433;
  t5462 = t5459*t5434;
  t5463 = t5461 + t5462;
  t5464 = 0.8*t5463;
  t5465 = t5456 + t5460 + t5464;
  t5467 = t5402*t5411;
  t5468 = t5400*t5414;
  t5481 = t5467 + t5468;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t5454;
  p_output1[7]=0;
  p_output1[8]=t5465;
  p_output1[9]=t5454;
  p_output1[10]=0;
  p_output1[11]=t5465;
  p_output1[12]=-0.4*t303*t5423 + 0.4*t5434*t5481 + 0.8*(t5436 - 1.*t5434*t5481);
  p_output1[13]=0;
  p_output1[14]=-0.4*t303*t5433 + 0.4*t5423*t5434 + 0.8*(-1.*t5423*t5434 + t5461);
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RightToe_RightStance.hh"

namespace SymFunction
{

void Jh_RightToe_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
