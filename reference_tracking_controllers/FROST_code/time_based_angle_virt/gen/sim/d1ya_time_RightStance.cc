/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:34:46 GMT-05:00
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
  double t5554;
  double t5556;
  double t5553;
  double t5557;
  double t2097;
  double t5555;
  double t5558;
  double t5562;
  double t5564;
  double t5565;
  double t5566;
  double t5567;
  double t5547;
  double t5552;
  double t5563;
  double t5568;
  double t5569;
  double t5570;
  double t5571;
  double t5572;
  double t5573;
  double t5577;
  double t5578;
  double t5579;
  double t5589;
  double t5596;
  double t5597;
  double t5598;
  double t5595;
  double t5599;
  double t5600;
  double t5601;
  double t5602;
  double t5603;
  t5554 = Cos(var1[5]);
  t5556 = Sin(var1[2]);
  t5553 = Cos(var1[2]);
  t5557 = Sin(var1[5]);
  t2097 = Cos(var1[6]);
  t5555 = t5553*t5554;
  t5558 = -1.*t5556*t5557;
  t5562 = t5555 + t5558;
  t5564 = -1.*t5554*t5556;
  t5565 = -1.*t5553*t5557;
  t5566 = t5564 + t5565;
  t5567 = Sin(var1[6]);
  t5547 = -1.*t2097;
  t5552 = 1. + t5547;
  t5563 = 0.4*t5552*t5562;
  t5568 = -0.4*t5566*t5567;
  t5569 = t2097*t5562;
  t5570 = t5566*t5567;
  t5571 = t5569 + t5570;
  t5572 = 0.8*t5571;
  t5573 = t5563 + t5568 + t5572;
  t5577 = t5554*t5556;
  t5578 = t5553*t5557;
  t5579 = t5577 + t5578;
  t5589 = t2097*t5566;
  t5596 = -1.*t5553*t5554;
  t5597 = t5556*t5557;
  t5598 = t5596 + t5597;
  t5595 = 0.4*t5552*t5566;
  t5599 = -0.4*t5598*t5567;
  t5600 = t5598*t5567;
  t5601 = t5589 + t5600;
  t5602 = 0.8*t5601;
  t5603 = t5595 + t5599 + t5602;
  p_output1[0]=var2[2];
  p_output1[1]=var2[1];
  p_output1[2]=var2[0] + t5573*var2[2] + t5573*var2[5] + (-0.4*t2097*t5562 + 0.4*t5567*t5579 + 0.8*(t5569 - 1.*t5567*t5579))*var2[6];
  p_output1[3]=var2[1] + t5603*var2[2] + t5603*var2[5] + (-0.4*t2097*t5566 + 0.4*t5562*t5567 + 0.8*(-1.*t5562*t5567 + t5589))*var2[6];
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "d1ya_time_RightStance.hh"

namespace SymFunction
{

void d1ya_time_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
