/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:52:38 GMT-04:00
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
  double t1233;
  double t1959;
  double t941;
  double t2279;
  double t205;
  double t1494;
  double t2339;
  double t2345;
  double t2512;
  double t3040;
  double t3228;
  double t3453;
  double t550;
  double t671;
  double t3926;
  double t3932;
  double t3992;
  double t2407;
  double t3500;
  double t3536;
  double t3543;
  double t3545;
  double t3556;
  double t3694;
  double t3824;
  double t3903;
  double t3999;
  double t4001;
  double t4002;
  double t4031;
  double t4047;
  double t4120;
  double t4193;
  double t4226;
  double t4256;
  double t4293;
  double t4295;
  t1233 = Cos(var1[3]);
  t1959 = Sin(var1[2]);
  t941 = Cos(var1[2]);
  t2279 = Sin(var1[3]);
  t205 = Cos(var1[4]);
  t1494 = t941*t1233;
  t2339 = -1.*t1959*t2279;
  t2345 = t1494 + t2339;
  t2512 = -1.*t1233*t1959;
  t3040 = -1.*t941*t2279;
  t3228 = t2512 + t3040;
  t3453 = Sin(var1[4]);
  t550 = -1.*t205;
  t671 = 1. + t550;
  t3926 = -1.*t941*t1233;
  t3932 = t1959*t2279;
  t3992 = t3926 + t3932;
  t2407 = 0.4*t671*t2345;
  t3500 = -0.4*t3228*t3453;
  t3536 = t205*t2345;
  t3543 = t3228*t3453;
  t3545 = t3536 + t3543;
  t3556 = 0.8*t3545;
  t3694 = t2407 + t3500 + t3556;
  t3824 = var2[0]*t3694;
  t3903 = 0.4*t671*t3228;
  t3999 = -0.4*t3992*t3453;
  t4001 = t205*t3228;
  t4002 = t3992*t3453;
  t4031 = t4001 + t4002;
  t4047 = 0.8*t4031;
  t4120 = t3903 + t3999 + t4047;
  t4193 = var2[2]*t4120;
  t4226 = t3824 + t4193;
  t4256 = t1233*t1959;
  t4293 = t941*t2279;
  t4295 = t4256 + t4293;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t4226;
  p_output1[3]=t4226;
  p_output1[4]=(-0.4*t205*t2345 + 0.4*t3453*t4295 + 0.8*(t3536 - 1.*t3453*t4295))*var2[0] + (-0.4*t205*t3228 + 0.4*t2345*t3453 + 0.8*(-1.*t2345*t3453 + t4001))*var2[2];
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

namespace RightStance
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
