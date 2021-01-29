/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:26 GMT-05:00
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
  double t747;
  double t912;
  double t677;
  double t1218;
  double t303;
  double t775;
  double t1364;
  double t1573;
  double t2125;
  double t2375;
  double t2590;
  double t2816;
  double t475;
  double t605;
  double t3215;
  double t3274;
  double t3315;
  double t2001;
  double t2893;
  double t2943;
  double t2999;
  double t3042;
  double t3129;
  double t3131;
  double t3169;
  double t3180;
  double t3387;
  double t3398;
  double t3408;
  double t3478;
  double t3525;
  double t3529;
  double t3559;
  double t3570;
  double t3631;
  double t3666;
  double t3670;
  t747 = Cos(var1[3]);
  t912 = Sin(var1[2]);
  t677 = Cos(var1[2]);
  t1218 = Sin(var1[3]);
  t303 = Cos(var1[4]);
  t775 = t677*t747;
  t1364 = -1.*t912*t1218;
  t1573 = t775 + t1364;
  t2125 = -1.*t747*t912;
  t2375 = -1.*t677*t1218;
  t2590 = t2125 + t2375;
  t2816 = Sin(var1[4]);
  t475 = -1.*t303;
  t605 = 1. + t475;
  t3215 = -1.*t677*t747;
  t3274 = t912*t1218;
  t3315 = t3215 + t3274;
  t2001 = 0.4*t605*t1573;
  t2893 = -0.4*t2590*t2816;
  t2943 = t303*t1573;
  t2999 = t2590*t2816;
  t3042 = t2943 + t2999;
  t3129 = 0.8*t3042;
  t3131 = t2001 + t2893 + t3129;
  t3169 = var2[0]*t3131;
  t3180 = 0.4*t605*t2590;
  t3387 = -0.4*t3315*t2816;
  t3398 = t303*t2590;
  t3408 = t3315*t2816;
  t3478 = t3398 + t3408;
  t3525 = 0.8*t3478;
  t3529 = t3180 + t3387 + t3525;
  t3559 = var2[2]*t3529;
  t3570 = t3169 + t3559;
  t3631 = t747*t912;
  t3666 = t677*t1218;
  t3670 = t3631 + t3666;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t3570;
  p_output1[3]=t3570;
  p_output1[4]=(-0.4*t1573*t303 + 0.4*t2816*t3670 + 0.8*(t2943 - 1.*t2816*t3670))*var2[0] + (0.4*t1573*t2816 - 0.4*t2590*t303 + 0.8*(-1.*t1573*t2816 + t3398))*var2[2];
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
