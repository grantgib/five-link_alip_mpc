/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:36:53 GMT-05:00
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
  double t3415;
  double t2932;
  double t3236;
  double t3519;
  double t174;
  double t3414;
  double t3701;
  double t3704;
  double t5045;
  double t5404;
  double t5639;
  double t5640;
  double t708;
  double t1201;
  double t10146;
  double t10147;
  double t10189;
  double t9294;
  double t10196;
  double t10197;
  double t10198;
  double t10199;
  double t10200;
  double t10201;
  double t10368;
  double t10523;
  double t10524;
  double t11208;
  double t11210;
  double t11334;
  double t11380;
  double t11408;
  double t11409;
  double t11451;
  double t11453;
  double t11457;
  double t11458;
  double t11739;
  double t11742;
  double t11755;
  double t11717;
  double t11758;
  double t11759;
  double t11766;
  double t11783;
  double t11784;
  double t11712;
  double t11793;
  double t11835;
  double t11840;
  double t12825;
  double t12847;
  double t12856;
  double t12862;
  double t12863;
  double t12864;
  double t12865;
  double t12882;
  double t12904;
  double t12911;
  double t12915;
  double t12917;
  double t12919;
  double t12881;
  double t12920;
  double t12947;
  double t12948;
  t3415 = Cos(var1[2]);
  t2932 = Cos(var1[3]);
  t3236 = Sin(var1[2]);
  t3519 = Sin(var1[3]);
  t174 = Cos(var1[4]);
  t3414 = t2932*t3236;
  t3701 = t3415*t3519;
  t3704 = t3414 + t3701;
  t5045 = t3415*t2932;
  t5404 = -1.*t3236*t3519;
  t5639 = t5045 + t5404;
  t5640 = Sin(var1[4]);
  t708 = -1.*t174;
  t1201 = 1. + t708;
  t10146 = -1.*t2932*t3236;
  t10147 = -1.*t3415*t3519;
  t10189 = t10146 + t10147;
  t9294 = 0.4*t1201*t5639;
  t10196 = -0.4*t10189*t5640;
  t10197 = t174*t5639;
  t10198 = t10189*t5640;
  t10199 = t10197 + t10198;
  t10200 = 0.8*t10199;
  t10201 = t9294 + t10196 + t10200;
  t10368 = -0.4*t174*t5639;
  t10523 = 0.4*t3704*t5640;
  t10524 = -1.*t3704*t5640;
  t11208 = t10197 + t10524;
  t11210 = 0.8*t11208;
  t11334 = t10368 + t10523 + t11210;
  t11380 = -0.4*t174*t10189;
  t11408 = 0.4*t5639*t5640;
  t11409 = t174*t10189;
  t11451 = -1.*t5639*t5640;
  t11453 = t11409 + t11451;
  t11457 = 0.8*t11453;
  t11458 = t11380 + t11408 + t11457;
  t11739 = -1.*t3415*t2932;
  t11742 = t3236*t3519;
  t11755 = t11739 + t11742;
  t11717 = 0.4*t1201*t10189;
  t11758 = -0.4*t11755*t5640;
  t11759 = t11755*t5640;
  t11766 = t11409 + t11759;
  t11783 = 0.8*t11766;
  t11784 = t11717 + t11758 + t11783;
  t11712 = var2[4]*t11458;
  t11793 = var2[2]*t11784;
  t11835 = var2[3]*t11784;
  t11840 = t11712 + t11793 + t11835;
  t12825 = 0.4*t10189*t5640;
  t12847 = -1.*t10189*t5640;
  t12856 = -0.4*t174*t11755;
  t12862 = t174*t11755;
  t12863 = t12862 + t12847;
  t12864 = 0.8*t12863;
  t12865 = t12856 + t12825 + t12864;
  t12882 = 0.4*t1201*t11755;
  t12904 = -0.4*t3704*t5640;
  t12911 = t3704*t5640;
  t12915 = t12862 + t12911;
  t12917 = 0.8*t12915;
  t12919 = t12882 + t12904 + t12917;
  t12881 = var2[4]*t12865;
  t12920 = var2[2]*t12919;
  t12947 = var2[3]*t12919;
  t12948 = t12881 + t12920 + t12947;
  p_output1[0]=0.4*t1201*t3704 - 0.4*t5639*t5640 + 0.8*(t174*t3704 + t5639*t5640) + var1[0] + var2[0] + t10201*var2[2] + t11840*var2[2] + t10201*var2[3] + t11840*var2[3] + t11334*var2[4] + var2[4]*(t11458*var2[2] + t11458*var2[3] + (t11408 + 0.4*t174*t3704 + 0.8*(t11451 - 1.*t174*t3704))*var2[4]) + var3[0] + t10201*var3[2] + t10201*var3[3] + t11334*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t10196 + t10200 + t11712 + t11793 + t11835 + t9294 + var1[1] + var2[1] + t12948*var2[2] + t12948*var2[3] + var2[4]*(t12865*var2[2] + t12865*var2[3] + (t12825 + 0.4*t174*t5639 + 0.8*(t12847 - 1.*t174*t5639))*var2[4]) + var3[1] + t11784*var3[2] + t11784*var3[3] + t11458*var3[4] - 1.*var4[2];
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
