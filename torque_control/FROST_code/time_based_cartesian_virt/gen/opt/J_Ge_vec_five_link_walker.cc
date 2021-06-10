/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:21 GMT-05:00
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
  double t67;
  double t141;
  double t147;
  double t153;
  double t166;
  double t212;
  double t219;
  double t245;
  double t283;
  double t288;
  double t306;
  double t313;
  double t436;
  double t442;
  double t458;
  double t459;
  double t465;
  double t511;
  double t570;
  double t572;
  double t577;
  double t584;
  double t226;
  double t264;
  double t265;
  double t267;
  double t321;
  double t333;
  double t348;
  double t351;
  double t374;
  double t404;
  double t428;
  double t761;
  double t770;
  double t782;
  double t504;
  double t514;
  double t525;
  double t561;
  double t590;
  double t595;
  double t602;
  double t611;
  double t625;
  double t630;
  double t684;
  double t922;
  double t924;
  double t964;
  double t741;
  double t757;
  double t792;
  double t795;
  double t830;
  double t840;
  double t852;
  double t861;
  double t1195;
  double t1204;
  double t1218;
  double t870;
  double t920;
  double t965;
  double t992;
  double t993;
  double t1025;
  double t1117;
  double t1193;
  double t1565;
  double t1577;
  double t1634;
  t67 = Cos(var1[2]);
  t141 = Cos(var1[3]);
  t147 = -1.*t67*t141;
  t153 = Sin(var1[2]);
  t166 = Sin(var1[3]);
  t212 = t153*t166;
  t219 = t147 + t212;
  t245 = Cos(var1[4]);
  t283 = t141*t153;
  t288 = t67*t166;
  t306 = t283 + t288;
  t313 = Sin(var1[4]);
  t436 = Cos(var1[5]);
  t442 = -1.*t67*t436;
  t458 = Sin(var1[5]);
  t459 = t153*t458;
  t465 = t442 + t459;
  t511 = Cos(var1[6]);
  t570 = t436*t153;
  t572 = t67*t458;
  t577 = t570 + t572;
  t584 = Sin(var1[6]);
  t226 = -7.33788*t219;
  t264 = -1.*t245;
  t265 = 1. + t264;
  t267 = 0.4*t265*t219;
  t321 = -0.4*t306*t313;
  t333 = t245*t219;
  t348 = t306*t313;
  t351 = t333 + t348;
  t374 = 0.64*t351;
  t404 = t267 + t321 + t374;
  t428 = -31.392000000000003*t404;
  t761 = -1.*t141*t153;
  t770 = -1.*t67*t166;
  t782 = t761 + t770;
  t504 = -7.33788*t465;
  t514 = -1.*t511;
  t525 = 1. + t514;
  t561 = 0.4*t525*t465;
  t590 = -0.4*t577*t584;
  t595 = t511*t465;
  t602 = t577*t584;
  t611 = t595 + t602;
  t625 = 0.64*t611;
  t630 = t561 + t590 + t625;
  t684 = -31.392000000000003*t630;
  t922 = -1.*t436*t153;
  t924 = -1.*t67*t458;
  t964 = t922 + t924;
  t741 = t226 + t428;
  t757 = -0.4*t245*t219;
  t792 = 0.4*t782*t313;
  t795 = -1.*t782*t313;
  t830 = t333 + t795;
  t840 = 0.64*t830;
  t852 = t757 + t792 + t840;
  t861 = -31.392000000000003*t852;
  t1195 = t67*t141;
  t1204 = -1.*t153*t166;
  t1218 = t1195 + t1204;
  t870 = t504 + t684;
  t920 = -0.4*t511*t465;
  t965 = 0.4*t964*t584;
  t992 = -1.*t964*t584;
  t993 = t595 + t992;
  t1025 = 0.64*t993;
  t1117 = t920 + t965 + t1025;
  t1193 = -31.392000000000003*t1117;
  t1565 = t67*t436;
  t1577 = -1.*t153*t458;
  t1634 = t1565 + t1577;
  p_output1[0]=t226 + t428 + t504 + 28.252799999999997*t67 + t684;
  p_output1[1]=t741;
  p_output1[2]=t861;
  p_output1[3]=t870;
  p_output1[4]=t1193;
  p_output1[5]=t741;
  p_output1[6]=t741;
  p_output1[7]=t861;
  p_output1[8]=t861;
  p_output1[9]=t861;
  p_output1[10]=-31.392000000000003*(0.4*t1218*t245 + t792 + 0.64*(-1.*t1218*t245 + t795));
  p_output1[11]=t870;
  p_output1[12]=t870;
  p_output1[13]=t1193;
  p_output1[14]=t1193;
  p_output1[15]=t1193;
  p_output1[16]=-31.392000000000003*(0.4*t1634*t511 + t965 + 0.64*(-1.*t1634*t511 + t992));
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
