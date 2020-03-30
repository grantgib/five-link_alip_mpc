/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:52:51 GMT-04:00
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
  double t4485;
  double t4455;
  double t4462;
  double t4486;
  double t626;
  double t4481;
  double t4487;
  double t4494;
  double t4496;
  double t4502;
  double t4506;
  double t4507;
  double t651;
  double t1162;
  double t4495;
  double t4509;
  double t4511;
  double t4524;
  double t4528;
  double t4588;
  double t4589;
  double t4596;
  double t4606;
  double t4608;
  t4485 = Cos(var1[2]);
  t4455 = Cos(var1[5]);
  t4462 = Sin(var1[2]);
  t4486 = Sin(var1[5]);
  t626 = Cos(var1[6]);
  t4481 = -1.*t4455*t4462;
  t4487 = -1.*t4485*t4486;
  t4494 = t4481 + t4487;
  t4496 = -1.*t4485*t4455;
  t4502 = t4462*t4486;
  t4506 = t4496 + t4502;
  t4507 = Sin(var1[6]);
  t651 = -1.*t626;
  t1162 = 1. + t651;
  t4495 = 0.4*t1162*t4494;
  t4509 = -0.4*t4506*t4507;
  t4511 = t626*t4494;
  t4524 = t4506*t4507;
  t4528 = t4511 + t4524;
  t4588 = 0.8*t4528;
  t4589 = t4495 + t4509 + t4588;
  t4596 = t4485*t4455;
  t4606 = -1.*t4462*t4486;
  t4608 = t4596 + t4606;
  p_output1[0]=1.;
  p_output1[1]=t4589;
  p_output1[2]=t4589;
  p_output1[3]=0.4*t4507*t4608 + 0.8*(t4511 - 1.*t4507*t4608) - 0.4*t4494*t626;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swing_foot_height.hh"

namespace RightStance
{

void J_swing_foot_height_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
