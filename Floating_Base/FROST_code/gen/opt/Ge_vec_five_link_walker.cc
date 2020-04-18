/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 14:53:11 GMT-04:00
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
  double t125;
  double t134;
  double t138;
  double t143;
  double t159;
  double t160;
  double t167;
  double t171;
  double t186;
  double t187;
  double t190;
  double t192;
  double t214;
  double t218;
  double t223;
  double t224;
  double t227;
  double t239;
  double t256;
  double t259;
  double t260;
  double t261;
  double t170;
  double t173;
  double t174;
  double t178;
  double t193;
  double t201;
  double t202;
  double t207;
  double t210;
  double t211;
  double t213;
  double t284;
  double t290;
  double t291;
  double t238;
  double t242;
  double t250;
  double t255;
  double t262;
  double t263;
  double t264;
  double t267;
  double t268;
  double t269;
  double t270;
  double t323;
  double t328;
  double t329;
  t125 = Sin(var1[2]);
  t134 = Cos(var1[3]);
  t138 = -1.*t134*t125;
  t143 = Cos(var1[2]);
  t159 = Sin(var1[3]);
  t160 = -1.*t143*t159;
  t167 = t138 + t160;
  t171 = Cos(var1[4]);
  t186 = -1.*t143*t134;
  t187 = t125*t159;
  t190 = t186 + t187;
  t192 = Sin(var1[4]);
  t214 = Cos(var1[5]);
  t218 = -1.*t214*t125;
  t223 = Sin(var1[5]);
  t224 = -1.*t143*t223;
  t227 = t218 + t224;
  t239 = Cos(var1[6]);
  t256 = -1.*t143*t214;
  t259 = t125*t223;
  t260 = t256 + t259;
  t261 = Sin(var1[6]);
  t170 = -7.33788*t167;
  t173 = -1.*t171;
  t174 = 1. + t173;
  t178 = 0.4*t174*t167;
  t193 = -0.4*t190*t192;
  t201 = t171*t167;
  t202 = t190*t192;
  t207 = t201 + t202;
  t210 = 0.64*t207;
  t211 = t178 + t193 + t210;
  t213 = -31.392000000000003*t211;
  t284 = t143*t134;
  t290 = -1.*t125*t159;
  t291 = t284 + t290;
  t238 = -7.33788*t227;
  t242 = -1.*t239;
  t250 = 1. + t242;
  t255 = 0.4*t250*t227;
  t262 = -0.4*t260*t261;
  t263 = t239*t227;
  t264 = t260*t261;
  t267 = t263 + t264;
  t268 = 0.64*t267;
  t269 = t255 + t262 + t268;
  t270 = -31.392000000000003*t269;
  t323 = t143*t214;
  t328 = -1.*t125*t223;
  t329 = t323 + t328;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=28.252799999999997*t125 + t170 + t213 + t238 + t270;
  p_output1[3]=t170 + t213;
  p_output1[4]=-31.392000000000003*(-0.4*t167*t171 + 0.4*t192*t291 + 0.64*(t201 - 1.*t192*t291));
  p_output1[5]=t238 + t270;
  p_output1[6]=-31.392000000000003*(-0.4*t227*t239 + 0.4*t261*t329 + 0.64*(t263 - 1.*t261*t329));
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
