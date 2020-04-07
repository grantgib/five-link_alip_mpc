/*
 * Automatically Generated from Mathematica.
 * Mon 6 Apr 2020 23:57:00 GMT-04:00
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
  double t371;
  double t378;
  double t390;
  double t393;
  double t394;
  double t397;
  double t400;
  double t416;
  double t435;
  double t436;
  double t439;
  double t442;
  double t461;
  double t463;
  double t464;
  double t468;
  double t469;
  double t474;
  double t479;
  double t480;
  double t487;
  double t507;
  double t408;
  double t417;
  double t422;
  double t432;
  double t448;
  double t449;
  double t453;
  double t454;
  double t457;
  double t459;
  double t460;
  double t566;
  double t568;
  double t570;
  double t472;
  double t475;
  double t476;
  double t478;
  double t522;
  double t530;
  double t534;
  double t540;
  double t541;
  double t550;
  double t554;
  double t594;
  double t595;
  double t596;
  double t561;
  double t565;
  double t575;
  double t576;
  double t579;
  double t580;
  double t583;
  double t587;
  double t622;
  double t625;
  double t628;
  double t588;
  double t593;
  double t607;
  double t608;
  double t618;
  double t619;
  double t620;
  double t621;
  double t650;
  double t651;
  double t654;
  t371 = Cos(var1[2]);
  t378 = Cos(var1[3]);
  t390 = -1.*t371*t378;
  t393 = Sin(var1[2]);
  t394 = Sin(var1[3]);
  t397 = t393*t394;
  t400 = t390 + t397;
  t416 = Cos(var1[4]);
  t435 = t378*t393;
  t436 = t371*t394;
  t439 = t435 + t436;
  t442 = Sin(var1[4]);
  t461 = Cos(var1[5]);
  t463 = -1.*t371*t461;
  t464 = Sin(var1[5]);
  t468 = t393*t464;
  t469 = t463 + t468;
  t474 = Cos(var1[6]);
  t479 = t461*t393;
  t480 = t371*t464;
  t487 = t479 + t480;
  t507 = Sin(var1[6]);
  t408 = -7.33788*t400;
  t417 = -1.*t416;
  t422 = 1. + t417;
  t432 = 0.4*t422*t400;
  t448 = -0.4*t439*t442;
  t449 = t416*t400;
  t453 = t439*t442;
  t454 = t449 + t453;
  t457 = 0.64*t454;
  t459 = t432 + t448 + t457;
  t460 = -31.392000000000003*t459;
  t566 = -1.*t378*t393;
  t568 = -1.*t371*t394;
  t570 = t566 + t568;
  t472 = -7.33788*t469;
  t475 = -1.*t474;
  t476 = 1. + t475;
  t478 = 0.4*t476*t469;
  t522 = -0.4*t487*t507;
  t530 = t474*t469;
  t534 = t487*t507;
  t540 = t530 + t534;
  t541 = 0.64*t540;
  t550 = t478 + t522 + t541;
  t554 = -31.392000000000003*t550;
  t594 = -1.*t461*t393;
  t595 = -1.*t371*t464;
  t596 = t594 + t595;
  t561 = t408 + t460;
  t565 = -0.4*t416*t400;
  t575 = 0.4*t570*t442;
  t576 = -1.*t570*t442;
  t579 = t449 + t576;
  t580 = 0.64*t579;
  t583 = t565 + t575 + t580;
  t587 = -31.392000000000003*t583;
  t622 = t371*t378;
  t625 = -1.*t393*t394;
  t628 = t622 + t625;
  t588 = t472 + t554;
  t593 = -0.4*t474*t469;
  t607 = 0.4*t596*t507;
  t608 = -1.*t596*t507;
  t618 = t530 + t608;
  t619 = 0.64*t618;
  t620 = t593 + t607 + t619;
  t621 = -31.392000000000003*t620;
  t650 = t371*t461;
  t651 = -1.*t393*t464;
  t654 = t650 + t651;
  p_output1[0]=28.252799999999997*t371 + t408 + t460 + t472 + t554;
  p_output1[1]=t561;
  p_output1[2]=t587;
  p_output1[3]=t588;
  p_output1[4]=t621;
  p_output1[5]=t561;
  p_output1[6]=t561;
  p_output1[7]=t587;
  p_output1[8]=t587;
  p_output1[9]=t587;
  p_output1[10]=-31.392000000000003*(t575 + 0.4*t416*t628 + 0.64*(t576 - 1.*t416*t628));
  p_output1[11]=t588;
  p_output1[12]=t588;
  p_output1[13]=t621;
  p_output1[14]=t621;
  p_output1[15]=t621;
  p_output1[16]=-31.392000000000003*(t607 + 0.4*t474*t654 + 0.64*(t608 - 1.*t474*t654));
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
