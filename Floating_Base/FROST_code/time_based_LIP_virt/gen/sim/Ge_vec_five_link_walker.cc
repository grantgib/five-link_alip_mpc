/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:00:46 GMT-05:00
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
  double t93;
  double t151;
  double t166;
  double t175;
  double t177;
  double t202;
  double t223;
  double t233;
  double t244;
  double t248;
  double t264;
  double t268;
  double t294;
  double t295;
  double t296;
  double t297;
  double t298;
  double t300;
  double t305;
  double t306;
  double t307;
  double t398;
  double t228;
  double t234;
  double t235;
  double t236;
  double t274;
  double t275;
  double t279;
  double t280;
  double t281;
  double t286;
  double t287;
  double t1247;
  double t1258;
  double t1261;
  double t299;
  double t301;
  double t302;
  double t303;
  double t405;
  double t646;
  double t728;
  double t749;
  double t788;
  double t803;
  double t854;
  double t1548;
  double t1582;
  double t1644;
  t93 = Sin(var1[2]);
  t151 = Cos(var1[3]);
  t166 = -1.*t151*t93;
  t175 = Cos(var1[2]);
  t177 = Sin(var1[3]);
  t202 = -1.*t175*t177;
  t223 = t166 + t202;
  t233 = Cos(var1[4]);
  t244 = -1.*t175*t151;
  t248 = t93*t177;
  t264 = t244 + t248;
  t268 = Sin(var1[4]);
  t294 = Cos(var1[5]);
  t295 = -1.*t294*t93;
  t296 = Sin(var1[5]);
  t297 = -1.*t175*t296;
  t298 = t295 + t297;
  t300 = Cos(var1[6]);
  t305 = -1.*t175*t294;
  t306 = t93*t296;
  t307 = t305 + t306;
  t398 = Sin(var1[6]);
  t228 = -7.33788*t223;
  t234 = -1.*t233;
  t235 = 1. + t234;
  t236 = 0.4*t235*t223;
  t274 = -0.4*t264*t268;
  t275 = t233*t223;
  t279 = t264*t268;
  t280 = t275 + t279;
  t281 = 0.64*t280;
  t286 = t236 + t274 + t281;
  t287 = -31.392000000000003*t286;
  t1247 = t175*t151;
  t1258 = -1.*t93*t177;
  t1261 = t1247 + t1258;
  t299 = -7.33788*t298;
  t301 = -1.*t300;
  t302 = 1. + t301;
  t303 = 0.4*t302*t298;
  t405 = -0.4*t307*t398;
  t646 = t300*t298;
  t728 = t307*t398;
  t749 = t646 + t728;
  t788 = 0.64*t749;
  t803 = t303 + t405 + t788;
  t854 = -31.392000000000003*t803;
  t1548 = t175*t294;
  t1582 = -1.*t93*t296;
  t1644 = t1548 + t1582;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=t228 + t287 + t299 + t854 + 28.252799999999997*t93;
  p_output1[3]=t228 + t287;
  p_output1[4]=-31.392000000000003*(-0.4*t223*t233 + 0.4*t1261*t268 + 0.64*(-1.*t1261*t268 + t275));
  p_output1[5]=t299 + t854;
  p_output1[6]=-31.392000000000003*(-0.4*t298*t300 + 0.4*t1644*t398 + 0.64*(-1.*t1644*t398 + t646));
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

namespace SymFunction
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
