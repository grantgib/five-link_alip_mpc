/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:02:46 GMT-05:00
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
  double t170;
  double t172;
  double t188;
  double t192;
  double t195;
  double t205;
  double t207;
  double t221;
  double t222;
  double t223;
  double t228;
  double t229;
  double t234;
  double t209;
  double t210;
  double t211;
  double t214;
  double t215;
  double t216;
  double t220;
  double t225;
  double t236;
  double t238;
  double t240;
  double t241;
  double t243;
  double t244;
  double t245;
  double t246;
  double t247;
  double t248;
  double t249;
  double t250;
  double t252;
  double t253;
  double t265;
  double t266;
  double t267;
  double t268;
  double t269;
  double t270;
  double t260;
  double t261;
  double t262;
  double t258;
  double t277;
  double t278;
  double t263;
  double t275;
  double t286;
  double t287;
  double t264;
  double t276;
  double t284;
  double t285;
  t170 = Cos(var1[3]);
  t172 = Sin(var1[2]);
  t188 = -1.*t170*t172;
  t192 = Cos(var1[2]);
  t195 = Sin(var1[3]);
  t205 = -1.*t192*t195;
  t207 = t188 + t205;
  t221 = t192*t170;
  t222 = -1.*t172*t195;
  t223 = t221 + t222;
  t228 = t170*t172;
  t229 = t192*t195;
  t234 = t228 + t229;
  t209 = -0.748*var2[3]*t207;
  t210 = Power(t170,2);
  t211 = 0.11*t210;
  t214 = Power(t195,2);
  t215 = 0.11*t214;
  t216 = t211 + t215;
  t220 = -6.8*var2[2]*t207*t216;
  t225 = 13.6*t207*t223;
  t236 = 13.6*t234*t223;
  t238 = t225 + t236;
  t240 = -1.*var2[0]*t238;
  t241 = Power(t207,2);
  t243 = 6.8*t241;
  t244 = 6.8*t207*t234;
  t245 = Power(t223,2);
  t246 = 6.8*t245;
  t247 = -1.*t192*t170;
  t248 = t172*t195;
  t249 = t247 + t248;
  t250 = 6.8*t223*t249;
  t252 = t243 + t244 + t246 + t250;
  t253 = -1.*var2[1]*t252;
  t265 = -0.748*var2[3]*t249;
  t266 = -6.8*var2[2]*t249*t216;
  t267 = 13.6*t207*t249;
  t268 = t225 + t267;
  t269 = -1.*var2[1]*t268;
  t270 = -1.*var2[0]*t252;
  t260 = -6.8*t207*t223;
  t261 = -6.8*t234*t223;
  t262 = t260 + t261;
  t258 = -6.8*t245;
  t277 = -6.8*var2[0]*t207*t216;
  t278 = -6.8*var2[1]*t249*t216;
  t263 = -6.8*t223*t216;
  t275 = -6.8*t207*t216;
  t286 = -0.748*var2[0]*t207;
  t287 = -0.748*var2[1]*t249;
  t264 = -0.748*t223;
  t276 = -0.748*t207;
  t284 = -0.748*t216;
  t285 = -0.47 + t284;
  p_output1[0]=t209 + t220 + t240 + t253;
  p_output1[1]=0. + t209 + t220 + t240 + t253;
  p_output1[2]=-6.8*Power(t234,2) + t258;
  p_output1[3]=t262;
  p_output1[4]=t263;
  p_output1[5]=t264;
  p_output1[6]=t265 + t266 + t269 + t270;
  p_output1[7]=0. + t265 + t266 + t269 + t270;
  p_output1[8]=t262;
  p_output1[9]=-6.8*t241 + t258;
  p_output1[10]=t275;
  p_output1[11]=t276;
  p_output1[12]=t277 + t278;
  p_output1[13]=0. + t277 + t278;
  p_output1[14]=t263;
  p_output1[15]=t275;
  p_output1[16]=-0.47 - 6.8*Power(t216,2);
  p_output1[17]=t285;
  p_output1[18]=t286 + t287;
  p_output1[19]=0. + t286 + t287;
  p_output1[20]=t264;
  p_output1[21]=t276;
  p_output1[22]=t285;
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

#include "J_MmatDx2_five_link_walker.hh"

namespace RightStance
{

void J_MmatDx2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
