/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:52:33 GMT-04:00
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
  double t325;
  double t681;
  double t1008;
  double t1018;
  double t1033;
  double t1196;
  double t1286;
  double t1517;
  double t1958;
  double t1959;
  double t2089;
  double t2212;
  double t2531;
  double t2593;
  double t2633;
  double t2650;
  double t2716;
  double t3045;
  double t3450;
  double t3453;
  double t3470;
  double t3479;
  double t1494;
  double t1761;
  double t1807;
  double t1889;
  double t2242;
  double t2315;
  double t2345;
  double t2391;
  double t2405;
  double t2407;
  double t2512;
  double t3824;
  double t3848;
  double t3867;
  double t3040;
  double t3167;
  double t3370;
  double t3428;
  double t3484;
  double t3495;
  double t3500;
  double t3527;
  double t3530;
  double t3536;
  double t3543;
  double t4047;
  double t4054;
  double t4093;
  t325 = Sin(var1[2]);
  t681 = Cos(var1[3]);
  t1008 = -1.*t681*t325;
  t1018 = Cos(var1[2]);
  t1033 = Sin(var1[3]);
  t1196 = -1.*t1018*t1033;
  t1286 = t1008 + t1196;
  t1517 = Cos(var1[4]);
  t1958 = -1.*t1018*t681;
  t1959 = t325*t1033;
  t2089 = t1958 + t1959;
  t2212 = Sin(var1[4]);
  t2531 = Cos(var1[5]);
  t2593 = -1.*t2531*t325;
  t2633 = Sin(var1[5]);
  t2650 = -1.*t1018*t2633;
  t2716 = t2593 + t2650;
  t3045 = Cos(var1[6]);
  t3450 = -1.*t1018*t2531;
  t3453 = t325*t2633;
  t3470 = t3450 + t3453;
  t3479 = Sin(var1[6]);
  t1494 = -7.33788*t1286;
  t1761 = -1.*t1517;
  t1807 = 1. + t1761;
  t1889 = 0.4*t1807*t1286;
  t2242 = -0.4*t2089*t2212;
  t2315 = t1517*t1286;
  t2345 = t2089*t2212;
  t2391 = t2315 + t2345;
  t2405 = 0.64*t2391;
  t2407 = t1889 + t2242 + t2405;
  t2512 = -31.392000000000003*t2407;
  t3824 = t1018*t681;
  t3848 = -1.*t325*t1033;
  t3867 = t3824 + t3848;
  t3040 = -7.33788*t2716;
  t3167 = -1.*t3045;
  t3370 = 1. + t3167;
  t3428 = 0.4*t3370*t2716;
  t3484 = -0.4*t3470*t3479;
  t3495 = t3045*t2716;
  t3500 = t3470*t3479;
  t3527 = t3495 + t3500;
  t3530 = 0.64*t3527;
  t3536 = t3428 + t3484 + t3530;
  t3543 = -31.392000000000003*t3536;
  t4047 = t1018*t2531;
  t4054 = -1.*t325*t2633;
  t4093 = t4047 + t4054;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=t1494 + t2512 + t3040 + 28.252799999999997*t325 + t3543;
  p_output1[3]=t1494 + t2512;
  p_output1[4]=-31.392000000000003*(-0.4*t1286*t1517 + 0.4*t2212*t3867 + 0.64*(t2315 - 1.*t2212*t3867));
  p_output1[5]=t3040 + t3543;
  p_output1[6]=-31.392000000000003*(-0.4*t2716*t3045 + 0.4*t3479*t4093 + 0.64*(t3495 - 1.*t3479*t4093));
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

#include "Ge_vec_five_link_walker.hh"

namespace RightStance
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
