/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:02:50 GMT-05:00
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
  double t207;
  double t209;
  double t210;
  double t211;
  double t214;
  double t215;
  double t216;
  double t236;
  double t241;
  double t243;
  double t245;
  double t246;
  double t248;
  double t220;
  double t221;
  double t223;
  double t225;
  double t228;
  double t229;
  double t234;
  double t244;
  double t249;
  double t250;
  double t254;
  double t255;
  double t256;
  double t257;
  double t258;
  double t259;
  double t260;
  double t261;
  double t262;
  double t263;
  double t264;
  double t265;
  double t280;
  double t281;
  double t282;
  double t283;
  double t284;
  double t285;
  double t275;
  double t276;
  double t277;
  double t273;
  double t292;
  double t293;
  double t278;
  double t290;
  double t301;
  double t302;
  double t279;
  double t291;
  double t299;
  double t300;
  t207 = Cos(var1[5]);
  t209 = Sin(var1[2]);
  t210 = -1.*t207*t209;
  t211 = Cos(var1[2]);
  t214 = Sin(var1[5]);
  t215 = -1.*t211*t214;
  t216 = t210 + t215;
  t236 = t211*t207;
  t241 = -1.*t209*t214;
  t243 = t236 + t241;
  t245 = t207*t209;
  t246 = t211*t214;
  t248 = t245 + t246;
  t220 = -0.748*var2[5]*t216;
  t221 = Power(t207,2);
  t223 = 0.11*t221;
  t225 = Power(t214,2);
  t228 = 0.11*t225;
  t229 = t223 + t228;
  t234 = -6.8*var2[2]*t216*t229;
  t244 = 13.6*t216*t243;
  t249 = 13.6*t248*t243;
  t250 = t244 + t249;
  t254 = -1.*var2[0]*t250;
  t255 = Power(t216,2);
  t256 = 6.8*t255;
  t257 = 6.8*t216*t248;
  t258 = Power(t243,2);
  t259 = 6.8*t258;
  t260 = -1.*t211*t207;
  t261 = t209*t214;
  t262 = t260 + t261;
  t263 = 6.8*t243*t262;
  t264 = t256 + t257 + t259 + t263;
  t265 = -1.*var2[1]*t264;
  t280 = -0.748*var2[5]*t262;
  t281 = -6.8*var2[2]*t262*t229;
  t282 = 13.6*t216*t262;
  t283 = t244 + t282;
  t284 = -1.*var2[1]*t283;
  t285 = -1.*var2[0]*t264;
  t275 = -6.8*t216*t243;
  t276 = -6.8*t248*t243;
  t277 = t275 + t276;
  t273 = -6.8*t258;
  t292 = -6.8*var2[0]*t216*t229;
  t293 = -6.8*var2[1]*t262*t229;
  t278 = -6.8*t243*t229;
  t290 = -6.8*t216*t229;
  t301 = -0.748*var2[0]*t216;
  t302 = -0.748*var2[1]*t262;
  t279 = -0.748*t243;
  t291 = -0.748*t216;
  t299 = -0.748*t229;
  t300 = -0.47 + t299;
  p_output1[0]=t220 + t234 + t254 + t265;
  p_output1[1]=0. + t220 + t234 + t254 + t265;
  p_output1[2]=-6.8*Power(t248,2) + t273;
  p_output1[3]=t277;
  p_output1[4]=t278;
  p_output1[5]=t279;
  p_output1[6]=t280 + t281 + t284 + t285;
  p_output1[7]=0. + t280 + t281 + t284 + t285;
  p_output1[8]=t277;
  p_output1[9]=-6.8*t255 + t273;
  p_output1[10]=t290;
  p_output1[11]=t291;
  p_output1[12]=t292 + t293;
  p_output1[13]=0. + t292 + t293;
  p_output1[14]=t278;
  p_output1[15]=t290;
  p_output1[16]=-0.47 - 6.8*Power(t229,2);
  p_output1[17]=t300;
  p_output1[18]=t301 + t302;
  p_output1[19]=0. + t301 + t302;
  p_output1[20]=t279;
  p_output1[21]=t291;
  p_output1[22]=t300;
  p_output1[23]=-0.55228;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 24, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx3_five_link_walker.hh"

namespace RightStance
{

void J_MmatDx3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
