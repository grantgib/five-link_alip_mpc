/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:01:14 GMT-05:00
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
  double t6182;
  double t6637;
  double t5552;
  double t6859;
  double t3811;
  double t6614;
  double t7218;
  double t7300;
  double t7754;
  double t7758;
  double t7762;
  double t7767;
  double t3852;
  double t4928;
  double t7408;
  double t7772;
  double t7801;
  double t8069;
  double t8150;
  double t8197;
  double t8200;
  double t8235;
  double t8243;
  double t8372;
  double t8407;
  double t8411;
  double t8414;
  double t8405;
  double t8415;
  double t8416;
  double t8423;
  double t8444;
  double t8452;
  double t8453;
  t6182 = Cos(var1[3]);
  t6637 = Sin(var1[2]);
  t5552 = Cos(var1[2]);
  t6859 = Sin(var1[3]);
  t3811 = Cos(var1[4]);
  t6614 = t5552*t6182;
  t7218 = -1.*t6637*t6859;
  t7300 = t6614 + t7218;
  t7754 = -1.*t6182*t6637;
  t7758 = -1.*t5552*t6859;
  t7762 = t7754 + t7758;
  t7767 = Sin(var1[4]);
  t3852 = -1.*t3811;
  t4928 = 1. + t3852;
  t7408 = 0.4*t4928*t7300;
  t7772 = -0.4*t7762*t7767;
  t7801 = t3811*t7300;
  t8069 = t7762*t7767;
  t8150 = t7801 + t8069;
  t8197 = 0.8*t8150;
  t8200 = t7408 + t7772 + t8197;
  t8235 = t6182*t6637;
  t8243 = t5552*t6859;
  t8372 = t8235 + t8243;
  t8407 = -1.*t5552*t6182;
  t8411 = t6637*t6859;
  t8414 = t8407 + t8411;
  t8405 = 0.4*t4928*t7762;
  t8415 = -0.4*t8414*t7767;
  t8416 = t3811*t7762;
  t8423 = t8414*t7767;
  t8444 = t8416 + t8423;
  t8452 = 0.8*t8444;
  t8453 = t8405 + t8415 + t8452;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t8200;
  p_output1[3]=t8200;
  p_output1[4]=-0.4*t3811*t7300 + 0.4*t7767*t8372 + 0.8*(t7801 - 1.*t7767*t8372);
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
  p_output1[16]=t8453;
  p_output1[17]=t8453;
  p_output1[18]=-0.4*t3811*t7762 + 0.4*t7300*t7767 + 0.8*(-1.*t7300*t7767 + t8416);
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
