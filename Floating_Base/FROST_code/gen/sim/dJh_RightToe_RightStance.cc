/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:20:48 GMT-05:00
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
  double t248;
  double t243;
  double t244;
  double t249;
  double t237;
  double t247;
  double t250;
  double t251;
  double t253;
  double t254;
  double t255;
  double t256;
  double t258;
  double t267;
  double t268;
  double t269;
  double t264;
  double t265;
  double t266;
  double t270;
  double t271;
  double t272;
  double t273;
  double t274;
  double t280;
  double t287;
  double t288;
  double t289;
  double t286;
  double t290;
  double t291;
  double t292;
  double t293;
  double t294;
  double t252;
  double t257;
  double t259;
  double t260;
  double t261;
  double t262;
  double t263;
  double t275;
  double t276;
  double t277;
  double t278;
  double t279;
  double t281;
  double t282;
  double t283;
  double t284;
  double t285;
  double t295;
  double t296;
  double t297;
  t248 = Cos(var1[2]);
  t243 = Cos(var1[3]);
  t244 = Sin(var1[2]);
  t249 = Sin(var1[3]);
  t237 = Cos(var1[4]);
  t247 = -1.*t243*t244;
  t250 = -1.*t248*t249;
  t251 = t247 + t250;
  t253 = t248*t243;
  t254 = -1.*t244*t249;
  t255 = t253 + t254;
  t256 = Sin(var1[4]);
  t258 = t237*t251;
  t267 = -1.*t248*t243;
  t268 = t244*t249;
  t269 = t267 + t268;
  t264 = -1.*t237;
  t265 = 1. + t264;
  t266 = 0.4*t265*t251;
  t270 = -0.4*t269*t256;
  t271 = t269*t256;
  t272 = t258 + t271;
  t273 = 0.8*t272;
  t274 = t266 + t270 + t273;
  t280 = t237*t269;
  t287 = t243*t244;
  t288 = t248*t249;
  t289 = t287 + t288;
  t286 = 0.4*t265*t269;
  t290 = -0.4*t289*t256;
  t291 = t289*t256;
  t292 = t280 + t291;
  t293 = 0.8*t292;
  t294 = t286 + t290 + t293;
  t252 = -0.4*t237*t251;
  t257 = 0.4*t255*t256;
  t259 = -1.*t255*t256;
  t260 = t258 + t259;
  t261 = 0.8*t260;
  t262 = t252 + t257 + t261;
  t263 = var2[4]*t262;
  t275 = var2[2]*t274;
  t276 = var2[3]*t274;
  t277 = t263 + t275 + t276;
  t278 = -0.4*t237*t269;
  t279 = 0.4*t251*t256;
  t281 = -1.*t251*t256;
  t282 = t280 + t281;
  t283 = 0.8*t282;
  t284 = t278 + t279 + t283;
  t285 = var2[4]*t284;
  t295 = var2[2]*t294;
  t296 = var2[3]*t294;
  t297 = t285 + t295 + t296;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t277;
  p_output1[7]=0;
  p_output1[8]=t297;
  p_output1[9]=t277;
  p_output1[10]=0;
  p_output1[11]=t297;
  p_output1[12]=t262*var2[2] + t262*var2[3] + (t257 + 0.4*t237*t289 + 0.8*(t259 - 1.*t237*t289))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t284*var2[2] + t284*var2[3] + (0.4*t237*t255 + t279 + 0.8*(-1.*t237*t255 + t281))*var2[4];
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
