/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:34:44 GMT-05:00
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
  double t5543;
  double t5540;
  double t5541;
  double t5544;
  double t1917;
  double t5542;
  double t5545;
  double t5546;
  double t5548;
  double t5549;
  double t5550;
  double t5551;
  double t5538;
  double t5539;
  double t5559;
  double t5560;
  double t5561;
  t5543 = Cos(var1[2]);
  t5540 = Cos(var1[5]);
  t5541 = Sin(var1[2]);
  t5544 = Sin(var1[5]);
  t1917 = Cos(var1[6]);
  t5542 = t5540*t5541;
  t5545 = t5543*t5544;
  t5546 = t5542 + t5545;
  t5548 = t5543*t5540;
  t5549 = -1.*t5541*t5544;
  t5550 = t5548 + t5549;
  t5551 = Sin(var1[6]);
  t5538 = -1.*t1917;
  t5539 = 1. + t5538;
  t5559 = -1.*t5540*t5541;
  t5560 = -1.*t5543*t5544;
  t5561 = t5559 + t5560;
  p_output1[0]=var1[2];
  p_output1[1]=var1[1];
  p_output1[2]=0.4*t5539*t5546 - 0.4*t5550*t5551 + 0.8*(t1917*t5546 + t5550*t5551) + var1[0];
  p_output1[3]=0.4*t5539*t5550 - 0.4*t5551*t5561 + 0.8*(t1917*t5550 + t5551*t5561) + var1[1];
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

#include "ya_time_RightStance.hh"

namespace SymFunction
{

void ya_time_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
