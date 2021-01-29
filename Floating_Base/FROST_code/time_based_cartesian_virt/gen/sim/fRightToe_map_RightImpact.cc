/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:27:18 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t560;
  double t562;
  double t559;
  double t563;
  double t553;
  double t561;
  double t564;
  double t565;
  double t567;
  double t568;
  double t569;
  double t570;
  double t557;
  double t558;
  double t566;
  double t571;
  double t572;
  double t573;
  double t574;
  double t575;
  double t576;
  double t578;
  double t579;
  double t580;
  double t587;
  double t588;
  double t589;
  double t586;
  double t590;
  double t591;
  double t592;
  double t593;
  double t594;
  double t595;
  t560 = Cos(var1[3]);
  t562 = Sin(var1[2]);
  t559 = Cos(var1[2]);
  t563 = Sin(var1[3]);
  t553 = Cos(var1[4]);
  t561 = t559*t560;
  t564 = -1.*t562*t563;
  t565 = t561 + t564;
  t567 = -1.*t560*t562;
  t568 = -1.*t559*t563;
  t569 = t567 + t568;
  t570 = Sin(var1[4]);
  t557 = -1.*t553;
  t558 = 1. + t557;
  t566 = 0.4*t558*t565;
  t571 = -0.4*t569*t570;
  t572 = t553*t565;
  t573 = t569*t570;
  t574 = t572 + t573;
  t575 = 0.8*t574;
  t576 = t566 + t571 + t575;
  t578 = t560*t562;
  t579 = t559*t563;
  t580 = t578 + t579;
  t587 = -1.*t559*t560;
  t588 = t562*t563;
  t589 = t587 + t588;
  t586 = 0.4*t558*t569;
  t590 = -0.4*t589*t570;
  t591 = t553*t569;
  t592 = t589*t570;
  t593 = t591 + t592;
  t594 = 0.8*t593;
  t595 = t586 + t590 + t594;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t576;
  p_output1[3]=t576;
  p_output1[4]=-0.4*t553*t565 + 0.4*t570*t580 + 0.8*(t572 - 1.*t570*t580);
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=1.;
  p_output1[16]=t595;
  p_output1[17]=t595;
  p_output1[18]=-0.4*t553*t569 + 0.4*t565*t570 + 0.8*(-1.*t565*t570 + t591);
  p_output1[19]=0;
  p_output1[20]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_map_RightImpact.hh"

namespace SymFunction
{

void fRightToe_map_RightImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
