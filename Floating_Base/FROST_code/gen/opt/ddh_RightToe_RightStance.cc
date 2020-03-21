/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:26 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t15485;
  double t15482;
  double t15483;
  double t15486;
  double t15476;
  double t15484;
  double t15487;
  double t15495;
  double t15497;
  double t15498;
  double t15499;
  double t15500;
  double t15477;
  double t15481;
  double t15524;
  double t15525;
  double t15526;
  double t15523;
  double t15527;
  double t15528;
  double t15529;
  double t15530;
  double t15531;
  double t15532;
  double t15537;
  double t15538;
  double t15539;
  double t15540;
  double t15541;
  double t15542;
  double t15545;
  double t15546;
  double t15547;
  double t15548;
  double t15549;
  double t15550;
  double t15551;
  double t15564;
  double t15565;
  double t15566;
  double t15563;
  double t15567;
  double t15568;
  double t15569;
  double t15570;
  double t15571;
  double t15562;
  double t15572;
  double t15573;
  double t15574;
  double t15584;
  double t15586;
  double t15591;
  double t15592;
  double t15593;
  double t15594;
  double t15595;
  double t15601;
  double t15602;
  double t15603;
  double t15604;
  double t15605;
  double t15606;
  double t15600;
  double t15607;
  double t15608;
  double t15609;
  t15485 = Cos(var1[2]);
  t15482 = Cos(var1[3]);
  t15483 = Sin(var1[2]);
  t15486 = Sin(var1[3]);
  t15476 = Cos(var1[4]);
  t15484 = t15482*t15483;
  t15487 = t15485*t15486;
  t15495 = t15484 + t15487;
  t15497 = t15485*t15482;
  t15498 = -1.*t15483*t15486;
  t15499 = t15497 + t15498;
  t15500 = Sin(var1[4]);
  t15477 = -1.*t15476;
  t15481 = 1. + t15477;
  t15524 = -1.*t15482*t15483;
  t15525 = -1.*t15485*t15486;
  t15526 = t15524 + t15525;
  t15523 = 0.4*t15481*t15499;
  t15527 = -0.4*t15526*t15500;
  t15528 = t15476*t15499;
  t15529 = t15526*t15500;
  t15530 = t15528 + t15529;
  t15531 = 0.8*t15530;
  t15532 = t15523 + t15527 + t15531;
  t15537 = -0.4*t15476*t15499;
  t15538 = 0.4*t15495*t15500;
  t15539 = -1.*t15495*t15500;
  t15540 = t15528 + t15539;
  t15541 = 0.8*t15540;
  t15542 = t15537 + t15538 + t15541;
  t15545 = -0.4*t15476*t15526;
  t15546 = 0.4*t15499*t15500;
  t15547 = t15476*t15526;
  t15548 = -1.*t15499*t15500;
  t15549 = t15547 + t15548;
  t15550 = 0.8*t15549;
  t15551 = t15545 + t15546 + t15550;
  t15564 = -1.*t15485*t15482;
  t15565 = t15483*t15486;
  t15566 = t15564 + t15565;
  t15563 = 0.4*t15481*t15526;
  t15567 = -0.4*t15566*t15500;
  t15568 = t15566*t15500;
  t15569 = t15547 + t15568;
  t15570 = 0.8*t15569;
  t15571 = t15563 + t15567 + t15570;
  t15562 = var2[4]*t15551;
  t15572 = var2[2]*t15571;
  t15573 = var2[3]*t15571;
  t15574 = t15562 + t15572 + t15573;
  t15584 = 0.4*t15526*t15500;
  t15586 = -1.*t15526*t15500;
  t15591 = -0.4*t15476*t15566;
  t15592 = t15476*t15566;
  t15593 = t15592 + t15586;
  t15594 = 0.8*t15593;
  t15595 = t15591 + t15584 + t15594;
  t15601 = 0.4*t15481*t15566;
  t15602 = -0.4*t15495*t15500;
  t15603 = t15495*t15500;
  t15604 = t15592 + t15603;
  t15605 = 0.8*t15604;
  t15606 = t15601 + t15602 + t15605;
  t15600 = var2[4]*t15595;
  t15607 = var2[2]*t15606;
  t15608 = var2[3]*t15606;
  t15609 = t15600 + t15607 + t15608;
  p_output1[0]=0.4*t15481*t15495 - 0.4*t15499*t15500 + 0.8*(t15476*t15495 + t15499*t15500) + var1[0] + var2[0] + t15532*var2[2] + t15574*var2[2] + t15532*var2[3] + t15574*var2[3] + t15542*var2[4] + var2[4]*(t15551*var2[2] + t15551*var2[3] + (0.4*t15476*t15495 + t15546 + 0.8*(-1.*t15476*t15495 + t15548))*var2[4]) + var3[0] + t15532*var3[2] + t15532*var3[3] + t15542*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t15523 + t15527 + t15531 + t15562 + t15572 + t15573 + var1[1] + var2[1] + t15609*var2[2] + t15609*var2[3] + var2[4]*(t15595*var2[2] + t15595*var2[3] + (0.4*t15476*t15499 + t15584 + 0.8*(-1.*t15476*t15499 + t15586))*var2[4]) + var3[1] + t15571*var3[2] + t15571*var3[3] + t15551*var3[4] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightToe_RightStance.hh"

namespace RightStance
{

void ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
