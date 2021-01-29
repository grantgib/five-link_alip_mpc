/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:26:55 GMT-05:00
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
  double t249;
  double t244;
  double t247;
  double t250;
  double t240;
  double t248;
  double t251;
  double t252;
  double t254;
  double t255;
  double t256;
  double t257;
  double t259;
  double t268;
  double t269;
  double t270;
  double t265;
  double t266;
  double t267;
  double t271;
  double t272;
  double t273;
  double t274;
  double t275;
  double t281;
  double t288;
  double t289;
  double t290;
  double t287;
  double t291;
  double t292;
  double t293;
  double t294;
  double t295;
  double t253;
  double t258;
  double t260;
  double t261;
  double t262;
  double t263;
  double t264;
  double t276;
  double t277;
  double t278;
  double t279;
  double t280;
  double t282;
  double t283;
  double t284;
  double t285;
  double t286;
  double t296;
  double t297;
  double t298;
  t249 = Cos(var1[2]);
  t244 = Cos(var1[3]);
  t247 = Sin(var1[2]);
  t250 = Sin(var1[3]);
  t240 = Cos(var1[4]);
  t248 = -1.*t244*t247;
  t251 = -1.*t249*t250;
  t252 = t248 + t251;
  t254 = t249*t244;
  t255 = -1.*t247*t250;
  t256 = t254 + t255;
  t257 = Sin(var1[4]);
  t259 = t240*t252;
  t268 = -1.*t249*t244;
  t269 = t247*t250;
  t270 = t268 + t269;
  t265 = -1.*t240;
  t266 = 1. + t265;
  t267 = 0.4*t266*t252;
  t271 = -0.4*t270*t257;
  t272 = t270*t257;
  t273 = t259 + t272;
  t274 = 0.8*t273;
  t275 = t267 + t271 + t274;
  t281 = t240*t270;
  t288 = t244*t247;
  t289 = t249*t250;
  t290 = t288 + t289;
  t287 = 0.4*t266*t270;
  t291 = -0.4*t290*t257;
  t292 = t290*t257;
  t293 = t281 + t292;
  t294 = 0.8*t293;
  t295 = t287 + t291 + t294;
  t253 = -0.4*t240*t252;
  t258 = 0.4*t256*t257;
  t260 = -1.*t256*t257;
  t261 = t259 + t260;
  t262 = 0.8*t261;
  t263 = t253 + t258 + t262;
  t264 = var2[4]*t263;
  t276 = var2[2]*t275;
  t277 = var2[3]*t275;
  t278 = t264 + t276 + t277;
  t279 = -0.4*t240*t270;
  t280 = 0.4*t252*t257;
  t282 = -1.*t252*t257;
  t283 = t281 + t282;
  t284 = 0.8*t283;
  t285 = t279 + t280 + t284;
  t286 = var2[4]*t285;
  t296 = var2[2]*t295;
  t297 = var2[3]*t295;
  t298 = t286 + t296 + t297;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t278;
  p_output1[7]=0;
  p_output1[8]=t298;
  p_output1[9]=t278;
  p_output1[10]=0;
  p_output1[11]=t298;
  p_output1[12]=t263*var2[2] + t263*var2[3] + (t258 + 0.4*t240*t290 + 0.8*(t260 - 1.*t240*t290))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t285*var2[2] + t285*var2[3] + (0.4*t240*t256 + t280 + 0.8*(-1.*t240*t256 + t282))*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_RightToe_RightStance.hh"

namespace SymFunction
{

void dJh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
