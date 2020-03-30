/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:48:06 GMT-04:00
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
  double t4948;
  double t2662;
  double t3454;
  double t5064;
  double t5563;
  double t4915;
  double t5110;
  double t5129;
  double t1822;
  double t5683;
  double t5697;
  double t5715;
  double t7425;
  double t7426;
  double t7428;
  double t7443;
  double t7475;
  double t7723;
  double t8393;
  double t8473;
  double t5432;
  double t6865;
  double t9324;
  double t9424;
  double t9444;
  double t7565;
  double t7695;
  double t7696;
  double t7714;
  double t7715;
  double t8477;
  double t8769;
  double t8823;
  double t9195;
  double t9517;
  double t9527;
  double t9534;
  double t9550;
  double t9568;
  double t9573;
  t4948 = Cos(var1[3]);
  t2662 = Cos(var1[4]);
  t3454 = Sin(var1[3]);
  t5064 = Sin(var1[4]);
  t5563 = Cos(var1[2]);
  t4915 = -1.*t2662*t3454;
  t5110 = -1.*t4948*t5064;
  t5129 = t4915 + t5110;
  t1822 = Sin(var1[2]);
  t5683 = t4948*t2662;
  t5697 = -1.*t3454*t5064;
  t5715 = t5683 + t5697;
  t7425 = -1.*t2662;
  t7426 = 1. + t7425;
  t7428 = 0.4*t7426;
  t7443 = 0.64*t2662;
  t7475 = t7428 + t7443;
  t7723 = t4948*t7475;
  t8393 = -0.24*t3454*t5064;
  t8473 = t7723 + t8393;
  t5432 = -1.*t1822*t5129;
  t6865 = t5563*t5129;
  t9324 = -1.*t4948*t2662;
  t9424 = t3454*t5064;
  t9444 = t9324 + t9424;
  t7565 = -0.24*t4948*t5064;
  t7695 = t7475*t3454;
  t7696 = 0.24*t4948*t5064;
  t7714 = t7695 + t7696;
  t7715 = t7714*t5715;
  t8477 = t5129*t8473;
  t8769 = t2662*t3454;
  t8823 = t4948*t5064;
  t9195 = t8769 + t8823;
  t9517 = t5563*t9444;
  t9527 = t5432 + t9517;
  t9534 = 0.384*var2[1]*t9527;
  t9550 = t1822*t9444;
  t9568 = t6865 + t9550;
  t9573 = 0.384*var2[0]*t9568;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(-1.*t1822*t5715 + t6865)*var2[0] + 0.384*(t5432 - 1.*t5563*t5715)*var2[1])*var2[4];
  p_output1[3]=(t9534 + t9573 + 0.384*(t5715*(-1.*t3454*t7475 + t7565) + t7715 + t8477 + t8473*t9195)*var2[2])*var2[4];
  p_output1[4]=(t9534 + t9573 + 0.384*(t5715*(-0.24*t2662*t3454 + t7565) + t7715 + t8477 + (0.24*t2662*t4948 + t8393)*t9195)*var2[2] + 0.384*(0.24*t2662*t5064 - 1.*t5064*t7475)*var2[3])*var2[4];
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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

#include "Ce3_vec5_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
