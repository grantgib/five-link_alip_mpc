/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:24 GMT-05:00
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
  double t257;
  double t345;
  double t393;
  double t441;
  double t470;
  double t471;
  double t474;
  double t506;
  double t572;
  double t605;
  double t607;
  double t659;
  double t784;
  double t788;
  double t844;
  double t864;
  double t871;
  double t913;
  double t1004;
  double t1218;
  double t1247;
  double t1251;
  double t475;
  double t522;
  double t525;
  double t544;
  double t667;
  double t672;
  double t677;
  double t685;
  double t724;
  double t747;
  double t775;
  double t3042;
  double t3095;
  double t3103;
  double t912;
  double t932;
  double t948;
  double t1003;
  double t1295;
  double t1442;
  double t1573;
  double t1773;
  double t2098;
  double t2125;
  double t2375;
  double t3408;
  double t3452;
  double t3476;
  t257 = Sin(var1[2]);
  t345 = Cos(var1[3]);
  t393 = -1.*t345*t257;
  t441 = Cos(var1[2]);
  t470 = Sin(var1[3]);
  t471 = -1.*t441*t470;
  t474 = t393 + t471;
  t506 = Cos(var1[4]);
  t572 = -1.*t441*t345;
  t605 = t257*t470;
  t607 = t572 + t605;
  t659 = Sin(var1[4]);
  t784 = Cos(var1[5]);
  t788 = -1.*t784*t257;
  t844 = Sin(var1[5]);
  t864 = -1.*t441*t844;
  t871 = t788 + t864;
  t913 = Cos(var1[6]);
  t1004 = -1.*t441*t784;
  t1218 = t257*t844;
  t1247 = t1004 + t1218;
  t1251 = Sin(var1[6]);
  t475 = -7.33788*t474;
  t522 = -1.*t506;
  t525 = 1. + t522;
  t544 = 0.4*t525*t474;
  t667 = -0.4*t607*t659;
  t672 = t506*t474;
  t677 = t607*t659;
  t685 = t672 + t677;
  t724 = 0.64*t685;
  t747 = t544 + t667 + t724;
  t775 = -31.392000000000003*t747;
  t3042 = t441*t345;
  t3095 = -1.*t257*t470;
  t3103 = t3042 + t3095;
  t912 = -7.33788*t871;
  t932 = -1.*t913;
  t948 = 1. + t932;
  t1003 = 0.4*t948*t871;
  t1295 = -0.4*t1247*t1251;
  t1442 = t913*t871;
  t1573 = t1247*t1251;
  t1773 = t1442 + t1573;
  t2098 = 0.64*t1773;
  t2125 = t1003 + t1295 + t2098;
  t2375 = -31.392000000000003*t2125;
  t3408 = t441*t784;
  t3452 = -1.*t257*t844;
  t3476 = t3408 + t3452;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=t2375 + 28.252799999999997*t257 + t475 + t775 + t912;
  p_output1[3]=t475 + t775;
  p_output1[4]=-31.392000000000003*(-0.4*t474*t506 + 0.4*t3103*t659 + 0.64*(-1.*t3103*t659 + t672));
  p_output1[5]=t2375 + t912;
  p_output1[6]=-31.392000000000003*(0.4*t1251*t3476 + 0.64*(t1442 - 1.*t1251*t3476) - 0.4*t871*t913);
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
