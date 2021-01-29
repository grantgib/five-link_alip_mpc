/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:57:28 GMT-04:00
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
  double t396;
  double t413;
  double t395;
  double t419;
  double t333;
  double t409;
  double t420;
  double t428;
  double t439;
  double t440;
  double t490;
  double t494;
  double t357;
  double t368;
  double t580;
  double t581;
  double t582;
  double t432;
  double t510;
  double t514;
  double t520;
  double t521;
  double t543;
  double t547;
  double t548;
  double t596;
  double t597;
  double t599;
  double t601;
  double t606;
  double t607;
  double t610;
  double t618;
  double t619;
  double t651;
  double t652;
  double t653;
  double t624;
  double t625;
  double t626;
  double t627;
  double t638;
  double t639;
  double t649;
  double t650;
  double t656;
  double t659;
  double t667;
  double t668;
  double t673;
  double t674;
  double t675;
  double t676;
  double t677;
  double t678;
  double t679;
  double t680;
  double t681;
  double t682;
  t396 = Cos(var1[3]);
  t413 = Sin(var1[2]);
  t395 = Cos(var1[2]);
  t419 = Sin(var1[3]);
  t333 = Cos(var1[4]);
  t409 = -1.*t395*t396;
  t420 = t413*t419;
  t428 = t409 + t420;
  t439 = t396*t413;
  t440 = t395*t419;
  t490 = t439 + t440;
  t494 = Sin(var1[4]);
  t357 = -1.*t333;
  t368 = 1. + t357;
  t580 = -1.*t396*t413;
  t581 = -1.*t395*t419;
  t582 = t580 + t581;
  t432 = 0.4*t368*t428;
  t510 = -0.4*t490*t494;
  t514 = t333*t428;
  t520 = t490*t494;
  t521 = t514 + t520;
  t543 = 0.8*t521;
  t547 = t432 + t510 + t543;
  t548 = var2[2]*t547;
  t596 = 0.4*t368*t582;
  t597 = -0.4*t428*t494;
  t599 = t333*t582;
  t601 = t428*t494;
  t606 = t599 + t601;
  t607 = 0.8*t606;
  t610 = t596 + t597 + t607;
  t618 = var2[0]*t610;
  t619 = t548 + t618;
  t651 = t395*t396;
  t652 = -1.*t413*t419;
  t653 = t651 + t652;
  t624 = -0.4*t333*t428;
  t625 = 0.4*t582*t494;
  t626 = -1.*t582*t494;
  t627 = t514 + t626;
  t638 = 0.8*t627;
  t639 = t624 + t625 + t638;
  t649 = var2[2]*t639;
  t650 = -0.4*t333*t582;
  t656 = 0.4*t653*t494;
  t659 = -1.*t653*t494;
  t667 = t599 + t659;
  t668 = 0.8*t667;
  t673 = t650 + t656 + t668;
  t674 = var2[0]*t673;
  t675 = t649 + t674;
  t676 = 0.4*t368*t653;
  t677 = -0.4*t582*t494;
  t678 = t333*t653;
  t679 = t582*t494;
  t680 = t678 + t679;
  t681 = 0.8*t680;
  t682 = t676 + t677 + t681;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t619;
  p_output1[3]=t619;
  p_output1[4]=t675;
  p_output1[5]=t682;
  p_output1[6]=t610;
  p_output1[7]=t619;
  p_output1[8]=t619;
  p_output1[9]=t675;
  p_output1[10]=t682;
  p_output1[11]=t610;
  p_output1[12]=t675;
  p_output1[13]=t675;
  p_output1[14]=(0.4*t333*t490 + t656 + 0.8*(-1.*t333*t490 + t659))*var2[0] + (t625 + 0.4*t333*t653 + 0.8*(t626 - 1.*t333*t653))*var2[2];
  p_output1[15]=0.4*t490*t494 - 0.4*t333*t653 + 0.8*(-1.*t490*t494 + t678);
  p_output1[16]=t673;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightToe_vec_RightStance.hh"

namespace RightStance
{

void J_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
