/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:50 GMT-05:00
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
  double t1611;
  double t1678;
  double t1598;
  double t2192;
  double t1591;
  double t1624;
  double t2276;
  double t2442;
  double t2490;
  double t2838;
  double t2845;
  double t2846;
  double t2938;
  double t3357;
  double t3373;
  double t3380;
  double t3420;
  double t3449;
  double t3417;
  double t3428;
  double t3451;
  double t3454;
  double t3459;
  double t3461;
  double t3466;
  double t3470;
  double t3480;
  double t3571;
  double t3573;
  double t3590;
  double t3255;
  double t3257;
  double t3267;
  double t3270;
  double t3382;
  double t3385;
  double t3389;
  double t3392;
  double t3396;
  double t3408;
  double t3538;
  double t3559;
  double t3562;
  double t3567;
  double t3594;
  double t3597;
  double t3610;
  double t3614;
  double t3616;
  double t3627;
  double t2473;
  double t2935;
  double t2997;
  double t3168;
  double t3176;
  double t3245;
  double t3248;
  double t3412;
  double t3416;
  double t3691;
  double t3703;
  double t3705;
  double t3457;
  double t3472;
  double t3515;
  double t3520;
  double t3525;
  double t3526;
  double t3537;
  double t3634;
  double t3638;
  double t3749;
  double t3752;
  double t3761;
  double t3814;
  double t3828;
  double t3838;
  double t3840;
  double t3846;
  double t3863;
  double t3865;
  double t3872;
  double t3884;
  double t3890;
  double t3891;
  double t3897;
  double t3898;
  double t3905;
  double t3914;
  double t3935;
  double t3946;
  double t3952;
  t1611 = Cos(var1[3]);
  t1678 = Sin(var1[2]);
  t1598 = Cos(var1[2]);
  t2192 = Sin(var1[3]);
  t1591 = Cos(var1[4]);
  t1624 = -1.*t1598*t1611;
  t2276 = t1678*t2192;
  t2442 = t1624 + t2276;
  t2490 = -1.*t1611*t1678;
  t2838 = -1.*t1598*t2192;
  t2845 = t2490 + t2838;
  t2846 = Sin(var1[4]);
  t2938 = t1591*t2442;
  t3357 = t1611*t1678;
  t3373 = t1598*t2192;
  t3380 = t3357 + t3373;
  t3420 = Cos(var1[5]);
  t3449 = Sin(var1[5]);
  t3417 = Cos(var1[6]);
  t3428 = -1.*t1598*t3420;
  t3451 = t1678*t3449;
  t3454 = t3428 + t3451;
  t3459 = -1.*t3420*t1678;
  t3461 = -1.*t1598*t3449;
  t3466 = t3459 + t3461;
  t3470 = Sin(var1[6]);
  t3480 = t3417*t3454;
  t3571 = t3420*t1678;
  t3573 = t1598*t3449;
  t3590 = t3571 + t3573;
  t3255 = 0.748*t2442;
  t3257 = -1.*t1591;
  t3267 = 1. + t3257;
  t3270 = 0.4*t3267*t2442;
  t3382 = -0.4*t3380*t2846;
  t3385 = t3380*t2846;
  t3389 = t2938 + t3385;
  t3392 = 0.64*t3389;
  t3396 = t3270 + t3382 + t3392;
  t3408 = 3.2*t3396;
  t3538 = 0.748*t3454;
  t3559 = -1.*t3417;
  t3562 = 1. + t3559;
  t3567 = 0.4*t3562*t3454;
  t3594 = -0.4*t3590*t3470;
  t3597 = t3590*t3470;
  t3610 = t3480 + t3597;
  t3614 = 0.64*t3610;
  t3616 = t3567 + t3594 + t3614;
  t3627 = 3.2*t3616;
  t2473 = -0.4*t1591*t2442;
  t2935 = 0.4*t2845*t2846;
  t2997 = -1.*t2845*t2846;
  t3168 = t2938 + t2997;
  t3176 = 0.64*t3168;
  t3245 = t2473 + t2935 + t3176;
  t3248 = 0.1*var2[4]*t3245;
  t3412 = t3255 + t3408;
  t3416 = 0.03125*var2[3]*t3412;
  t3691 = t1598*t1611;
  t3703 = -1.*t1678*t2192;
  t3705 = t3691 + t3703;
  t3457 = -0.4*t3417*t3454;
  t3472 = 0.4*t3466*t3470;
  t3515 = -1.*t3466*t3470;
  t3520 = t3480 + t3515;
  t3525 = 0.64*t3520;
  t3526 = t3457 + t3472 + t3525;
  t3537 = 0.1*var2[6]*t3526;
  t3634 = t3538 + t3627;
  t3638 = 0.03125*var2[5]*t3634;
  t3749 = t1598*t3420;
  t3752 = -1.*t1678*t3449;
  t3761 = t3749 + t3752;
  t3814 = 0.748*t2845;
  t3828 = 0.4*t3267*t2845;
  t3838 = -0.4*t2442*t2846;
  t3840 = t1591*t2845;
  t3846 = t2442*t2846;
  t3863 = t3840 + t3846;
  t3865 = 0.64*t3863;
  t3872 = t3828 + t3838 + t3865;
  t3884 = 3.2*t3872;
  t3890 = 0.748*t3466;
  t3891 = 0.4*t3562*t3466;
  t3897 = -0.4*t3454*t3470;
  t3898 = t3417*t3466;
  t3905 = t3454*t3470;
  t3914 = t3898 + t3905;
  t3935 = 0.64*t3914;
  t3946 = t3891 + t3897 + t3935;
  t3952 = 3.2*t3946;
  p_output1[0]=t3248 + t3416 + t3537 + t3638 + 0.03125*(-2.88*t1598 + t3255 + t3408 + t3538 + t3627)*var2[2];
  p_output1[1]=t3248 + t3416 + 0.03125*t3412*var2[2];
  p_output1[2]=0.1*t3245*var2[2] + 0.1*t3245*var2[3] + 0.1*(t2935 + 0.4*t1591*t3705 + 0.64*(t2997 - 1.*t1591*t3705))*var2[4];
  p_output1[3]=t3537 + t3638 + 0.03125*t3634*var2[2];
  p_output1[4]=0.1*t3526*var2[2] + 0.1*t3526*var2[5] + 0.1*(t3472 + 0.4*t3417*t3761 + 0.64*(t3515 - 1.*t3417*t3761))*var2[6];
  p_output1[5]=1.;
  p_output1[6]=0.03125*(-2.88*t1678 + t3814 + t3884 + t3890 + t3952);
  p_output1[7]=0.03125*(t3814 + t3884);
  p_output1[8]=0.1*(-0.4*t1591*t2845 + 0.4*t2846*t3705 + 0.64*(-1.*t2846*t3705 + t3840));
  p_output1[9]=0.03125*(t3890 + t3952);
  p_output1[10]=0.1*(-0.4*t3417*t3466 + 0.4*t3470*t3761 + 0.64*(-1.*t3470*t3761 + t3898));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_vel_com_z.hh"

namespace RightStance
{

void J_vel_com_z_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
