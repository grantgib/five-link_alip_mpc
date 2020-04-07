/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:51:41 GMT-04:00
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
  double t285;
  double t297;
  double t514;
  double t515;
  double t546;
  double t547;
  double t634;
  double t808;
  double t1518;
  double t1685;
  double t1701;
  double t1773;
  double t2093;
  double t2147;
  double t2189;
  double t2198;
  double t2261;
  double t2333;
  double t2512;
  double t2639;
  double t2679;
  double t2775;
  double t638;
  double t1349;
  double t1360;
  double t1476;
  double t1895;
  double t1931;
  double t1973;
  double t2019;
  double t2023;
  double t2051;
  double t2064;
  double t4501;
  double t4507;
  double t4517;
  double t2294;
  double t2373;
  double t2419;
  double t2446;
  double t2888;
  double t2925;
  double t2975;
  double t4446;
  double t4448;
  double t4453;
  double t4481;
  double t4552;
  double t4556;
  double t4557;
  double t4493;
  double t4498;
  double t4518;
  double t4523;
  double t4535;
  double t4538;
  double t4539;
  double t4542;
  double t4571;
  double t4572;
  double t4575;
  double t4545;
  double t4551;
  double t4560;
  double t4562;
  double t4563;
  double t4564;
  double t4566;
  double t4567;
  double t4590;
  double t4610;
  double t4625;
  t285 = Cos(var1[2]);
  t297 = Cos(var1[3]);
  t514 = -1.*t285*t297;
  t515 = Sin(var1[2]);
  t546 = Sin(var1[3]);
  t547 = t515*t546;
  t634 = t514 + t547;
  t808 = Cos(var1[4]);
  t1518 = t297*t515;
  t1685 = t285*t546;
  t1701 = t1518 + t1685;
  t1773 = Sin(var1[4]);
  t2093 = Cos(var1[5]);
  t2147 = -1.*t285*t2093;
  t2189 = Sin(var1[5]);
  t2198 = t515*t2189;
  t2261 = t2147 + t2198;
  t2333 = Cos(var1[6]);
  t2512 = t2093*t515;
  t2639 = t285*t2189;
  t2679 = t2512 + t2639;
  t2775 = Sin(var1[6]);
  t638 = -7.33788*t634;
  t1349 = -1.*t808;
  t1360 = 1. + t1349;
  t1476 = 0.4*t1360*t634;
  t1895 = -0.4*t1701*t1773;
  t1931 = t808*t634;
  t1973 = t1701*t1773;
  t2019 = t1931 + t1973;
  t2023 = 0.64*t2019;
  t2051 = t1476 + t1895 + t2023;
  t2064 = -31.392000000000003*t2051;
  t4501 = -1.*t297*t515;
  t4507 = -1.*t285*t546;
  t4517 = t4501 + t4507;
  t2294 = -7.33788*t2261;
  t2373 = -1.*t2333;
  t2419 = 1. + t2373;
  t2446 = 0.4*t2419*t2261;
  t2888 = -0.4*t2679*t2775;
  t2925 = t2333*t2261;
  t2975 = t2679*t2775;
  t4446 = t2925 + t2975;
  t4448 = 0.64*t4446;
  t4453 = t2446 + t2888 + t4448;
  t4481 = -31.392000000000003*t4453;
  t4552 = -1.*t2093*t515;
  t4556 = -1.*t285*t2189;
  t4557 = t4552 + t4556;
  t4493 = t638 + t2064;
  t4498 = -0.4*t808*t634;
  t4518 = 0.4*t4517*t1773;
  t4523 = -1.*t4517*t1773;
  t4535 = t1931 + t4523;
  t4538 = 0.64*t4535;
  t4539 = t4498 + t4518 + t4538;
  t4542 = -31.392000000000003*t4539;
  t4571 = t285*t297;
  t4572 = -1.*t515*t546;
  t4575 = t4571 + t4572;
  t4545 = t2294 + t4481;
  t4551 = -0.4*t2333*t2261;
  t4560 = 0.4*t4557*t2775;
  t4562 = -1.*t4557*t2775;
  t4563 = t2925 + t4562;
  t4564 = 0.64*t4563;
  t4566 = t4551 + t4560 + t4564;
  t4567 = -31.392000000000003*t4566;
  t4590 = t285*t2093;
  t4610 = -1.*t515*t2189;
  t4625 = t4590 + t4610;
  p_output1[0]=t2064 + t2294 + 28.252799999999997*t285 + t4481 + t638;
  p_output1[1]=t4493;
  p_output1[2]=t4542;
  p_output1[3]=t4545;
  p_output1[4]=t4567;
  p_output1[5]=t4493;
  p_output1[6]=t4493;
  p_output1[7]=t4542;
  p_output1[8]=t4542;
  p_output1[9]=t4542;
  p_output1[10]=-31.392000000000003*(t4518 + 0.4*t4575*t808 + 0.64*(t4523 - 1.*t4575*t808));
  p_output1[11]=t4545;
  p_output1[12]=t4545;
  p_output1[13]=t4567;
  p_output1[14]=t4567;
  p_output1[15]=t4567;
  p_output1[16]=-31.392000000000003*(t4560 + 0.4*t2333*t4625 + 0.64*(t4562 - 1.*t2333*t4625));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_five_link_walker.hh"

namespace RightStance
{

void J_Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
