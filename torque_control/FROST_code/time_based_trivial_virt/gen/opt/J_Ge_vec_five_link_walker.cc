/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:57:18 GMT-04:00
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
  double t331;
  double t338;
  double t350;
  double t353;
  double t354;
  double t357;
  double t360;
  double t376;
  double t395;
  double t396;
  double t399;
  double t402;
  double t421;
  double t423;
  double t424;
  double t428;
  double t429;
  double t434;
  double t439;
  double t440;
  double t447;
  double t467;
  double t368;
  double t377;
  double t382;
  double t392;
  double t408;
  double t409;
  double t413;
  double t414;
  double t417;
  double t419;
  double t420;
  double t526;
  double t528;
  double t530;
  double t432;
  double t435;
  double t436;
  double t438;
  double t482;
  double t490;
  double t494;
  double t500;
  double t501;
  double t510;
  double t514;
  double t554;
  double t555;
  double t556;
  double t521;
  double t525;
  double t535;
  double t536;
  double t539;
  double t540;
  double t543;
  double t547;
  double t582;
  double t585;
  double t588;
  double t548;
  double t553;
  double t567;
  double t568;
  double t578;
  double t579;
  double t580;
  double t581;
  double t610;
  double t611;
  double t614;
  t331 = Cos(var1[2]);
  t338 = Cos(var1[3]);
  t350 = -1.*t331*t338;
  t353 = Sin(var1[2]);
  t354 = Sin(var1[3]);
  t357 = t353*t354;
  t360 = t350 + t357;
  t376 = Cos(var1[4]);
  t395 = t338*t353;
  t396 = t331*t354;
  t399 = t395 + t396;
  t402 = Sin(var1[4]);
  t421 = Cos(var1[5]);
  t423 = -1.*t331*t421;
  t424 = Sin(var1[5]);
  t428 = t353*t424;
  t429 = t423 + t428;
  t434 = Cos(var1[6]);
  t439 = t421*t353;
  t440 = t331*t424;
  t447 = t439 + t440;
  t467 = Sin(var1[6]);
  t368 = -7.33788*t360;
  t377 = -1.*t376;
  t382 = 1. + t377;
  t392 = 0.4*t382*t360;
  t408 = -0.4*t399*t402;
  t409 = t376*t360;
  t413 = t399*t402;
  t414 = t409 + t413;
  t417 = 0.64*t414;
  t419 = t392 + t408 + t417;
  t420 = -31.392000000000003*t419;
  t526 = -1.*t338*t353;
  t528 = -1.*t331*t354;
  t530 = t526 + t528;
  t432 = -7.33788*t429;
  t435 = -1.*t434;
  t436 = 1. + t435;
  t438 = 0.4*t436*t429;
  t482 = -0.4*t447*t467;
  t490 = t434*t429;
  t494 = t447*t467;
  t500 = t490 + t494;
  t501 = 0.64*t500;
  t510 = t438 + t482 + t501;
  t514 = -31.392000000000003*t510;
  t554 = -1.*t421*t353;
  t555 = -1.*t331*t424;
  t556 = t554 + t555;
  t521 = t368 + t420;
  t525 = -0.4*t376*t360;
  t535 = 0.4*t530*t402;
  t536 = -1.*t530*t402;
  t539 = t409 + t536;
  t540 = 0.64*t539;
  t543 = t525 + t535 + t540;
  t547 = -31.392000000000003*t543;
  t582 = t331*t338;
  t585 = -1.*t353*t354;
  t588 = t582 + t585;
  t548 = t432 + t514;
  t553 = -0.4*t434*t429;
  t567 = 0.4*t556*t467;
  t568 = -1.*t556*t467;
  t578 = t490 + t568;
  t579 = 0.64*t578;
  t580 = t553 + t567 + t579;
  t581 = -31.392000000000003*t580;
  t610 = t331*t421;
  t611 = -1.*t353*t424;
  t614 = t610 + t611;
  p_output1[0]=28.252799999999997*t331 + t368 + t420 + t432 + t514;
  p_output1[1]=t521;
  p_output1[2]=t547;
  p_output1[3]=t548;
  p_output1[4]=t581;
  p_output1[5]=t521;
  p_output1[6]=t521;
  p_output1[7]=t547;
  p_output1[8]=t547;
  p_output1[9]=t547;
  p_output1[10]=-31.392000000000003*(t535 + 0.4*t376*t588 + 0.64*(t536 - 1.*t376*t588));
  p_output1[11]=t548;
  p_output1[12]=t548;
  p_output1[13]=t581;
  p_output1[14]=t581;
  p_output1[15]=t581;
  p_output1[16]=-31.392000000000003*(t567 + 0.4*t434*t614 + 0.64*(t568 - 1.*t434*t614));
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
