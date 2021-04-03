/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 15:58:51 GMT-05:00
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
  double t3214;
  double t3312;
  double t3319;
  double t3326;
  double t3414;
  double t3418;
  double t3441;
  double t3452;
  double t3469;
  double t3478;
  double t3482;
  double t3492;
  double t3592;
  double t3593;
  double t3594;
  double t3595;
  double t3607;
  double t3619;
  double t3677;
  double t3695;
  double t3733;
  double t3737;
  double t3451;
  double t3455;
  double t3457;
  double t3466;
  double t3504;
  double t3508;
  double t3509;
  double t3510;
  double t3575;
  double t3578;
  double t3586;
  double t3849;
  double t3856;
  double t3863;
  double t3617;
  double t3620;
  double t3621;
  double t3640;
  double t3746;
  double t3762;
  double t3767;
  double t3798;
  double t3802;
  double t3808;
  double t3822;
  double t3911;
  double t3912;
  double t3913;
  t3214 = Sin(var1[2]);
  t3312 = Cos(var1[3]);
  t3319 = -1.*t3312*t3214;
  t3326 = Cos(var1[2]);
  t3414 = Sin(var1[3]);
  t3418 = -1.*t3326*t3414;
  t3441 = t3319 + t3418;
  t3452 = Cos(var1[4]);
  t3469 = -1.*t3326*t3312;
  t3478 = t3214*t3414;
  t3482 = t3469 + t3478;
  t3492 = Sin(var1[4]);
  t3592 = Cos(var1[5]);
  t3593 = -1.*t3592*t3214;
  t3594 = Sin(var1[5]);
  t3595 = -1.*t3326*t3594;
  t3607 = t3593 + t3595;
  t3619 = Cos(var1[6]);
  t3677 = -1.*t3326*t3592;
  t3695 = t3214*t3594;
  t3733 = t3677 + t3695;
  t3737 = Sin(var1[6]);
  t3451 = -7.33788*t3441;
  t3455 = -1.*t3452;
  t3457 = 1. + t3455;
  t3466 = 0.4*t3457*t3441;
  t3504 = -0.4*t3482*t3492;
  t3508 = t3452*t3441;
  t3509 = t3482*t3492;
  t3510 = t3508 + t3509;
  t3575 = 0.64*t3510;
  t3578 = t3466 + t3504 + t3575;
  t3586 = -31.392000000000003*t3578;
  t3849 = t3326*t3312;
  t3856 = -1.*t3214*t3414;
  t3863 = t3849 + t3856;
  t3617 = -7.33788*t3607;
  t3620 = -1.*t3619;
  t3621 = 1. + t3620;
  t3640 = 0.4*t3621*t3607;
  t3746 = -0.4*t3733*t3737;
  t3762 = t3619*t3607;
  t3767 = t3733*t3737;
  t3798 = t3762 + t3767;
  t3802 = 0.64*t3798;
  t3808 = t3640 + t3746 + t3802;
  t3822 = -31.392000000000003*t3808;
  t3911 = t3326*t3592;
  t3912 = -1.*t3214*t3594;
  t3913 = t3911 + t3912;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=28.252799999999997*t3214 + t3451 + t3586 + t3617 + t3822;
  p_output1[3]=t3451 + t3586;
  p_output1[4]=-31.392000000000003*(-0.4*t3441*t3452 + 0.4*t3492*t3863 + 0.64*(t3508 - 1.*t3492*t3863));
  p_output1[5]=t3617 + t3822;
  p_output1[6]=-31.392000000000003*(-0.4*t3607*t3619 + 0.4*t3737*t3913 + 0.64*(t3762 - 1.*t3737*t3913));
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

namespace SymFunction
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
