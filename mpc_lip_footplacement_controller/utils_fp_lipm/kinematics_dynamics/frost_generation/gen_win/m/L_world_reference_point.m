/*
 * Automatically Generated from Mathematica.
 * Fri 27 Aug 2021 03:42:44 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t97;
  double t99;
  double t112;
  double t118;
  double t120;
  double t122;
  double t126;
  double t127;
  double t129;
  double t140;
  double t143;
  double t145;
  double t146;
  double t150;
  double t153;
  double t171;
  double t172;
  double t174;
  double t161;
  double t163;
  double t168;
  double t169;
  double t170;
  double t175;
  double t179;
  double t180;
  double t182;
  double t183;
  double t184;
  double t185;
  double t196;
  double t197;
  double t198;
  double t199;
  double t201;
  double t206;
  double t208;
  double t209;
  double t210;
  double t211;
  double t213;
  double t228;
  double t229;
  double t230;
  double t220;
  double t221;
  double t222;
  double t225;
  double t227;
  double t231;
  double t232;
  double t233;
  double t235;
  double t236;
  double t237;
  double t238;
  double t113;
  double t114;
  double t130;
  double t131;
  double t132;
  double t261;
  double t254;
  double t283;
  double t284;
  double t285;
  double t286;
  double t287;
  double t288;
  double t290;
  double t268;
  double t269;
  double t270;
  double t141;
  double t151;
  double t154;
  double t155;
  double t156;
  double t159;
  double t160;
  double t189;
  double t191;
  double t193;
  double t202;
  double t203;
  double t204;
  double t327;
  double t328;
  double t329;
  double t330;
  double t331;
  double t332;
  double t334;
  double t313;
  double t314;
  double t315;
  double t207;
  double t212;
  double t214;
  double t215;
  double t216;
  double t217;
  double t218;
  double t239;
  double t240;
  double t241;
  double t257;
  double t258;
  double t276;
  double t277;
  double t278;
  double t291;
  double t292;
  double t293;
  double t294;
  double t295;
  double t296;
  double t297;
  double t298;
  double t299;
  double t300;
  double t321;
  double t322;
  double t323;
  double t335;
  double t336;
  double t337;
  double t338;
  double t339;
  double t340;
  double t341;
  double t342;
  double t343;
  double t344;
  t97 = -1.*var3[1];
  t99 = 0. + t97;
  t112 = Sin(var1[2]);
  t118 = Cos(var1[3]);
  t120 = -1.*t118*t112;
  t122 = Cos(var1[2]);
  t126 = Sin(var1[3]);
  t127 = -1.*t122*t126;
  t129 = t120 + t127;
  t140 = Cos(var1[4]);
  t143 = t122*t118;
  t145 = -1.*t112*t126;
  t146 = t143 + t145;
  t150 = Sin(var1[4]);
  t153 = t140*t129;
  t171 = -1.*t122*t118;
  t172 = t112*t126;
  t174 = t171 + t172;
  t161 = -1.*t140;
  t163 = 1. + t161;
  t168 = 0.4*t163;
  t169 = 0. + t168;
  t170 = t169*t129;
  t175 = -0.4*t150;
  t179 = 0. + t175;
  t180 = t174*t179;
  t182 = t174*t150;
  t183 = t153 + t182;
  t184 = 0.64*t183;
  t185 = t170 + t180 + t184;
  t196 = Cos(var1[5]);
  t197 = -1.*t196*t112;
  t198 = Sin(var1[5]);
  t199 = -1.*t122*t198;
  t201 = t197 + t199;
  t206 = Cos(var1[6]);
  t208 = t122*t196;
  t209 = -1.*t112*t198;
  t210 = t208 + t209;
  t211 = Sin(var1[6]);
  t213 = t206*t201;
  t228 = -1.*t122*t196;
  t229 = t112*t198;
  t230 = t228 + t229;
  t220 = -1.*t206;
  t221 = 1. + t220;
  t222 = 0.4*t221;
  t225 = 0. + t222;
  t227 = t225*t201;
  t231 = -0.4*t211;
  t232 = 0. + t231;
  t233 = t230*t232;
  t235 = t230*t211;
  t236 = t213 + t235;
  t237 = 0.64*t236;
  t238 = t227 + t233 + t237;
  t113 = -0.24*var2[2]*t112;
  t114 = var2[1] + t113;
  t130 = 0.11*var2[2]*t129;
  t131 = 0.11*var2[3]*t129;
  t132 = var2[1] + t130 + t131;
  t261 = -1.*var3[0];
  t254 = -1.*var3[2];
  t283 = t169*t146;
  t284 = t129*t179;
  t285 = t140*t146;
  t286 = t129*t150;
  t287 = t285 + t286;
  t288 = 0.64*t287;
  t290 = t283 + t284 + t288;
  t268 = t118*t112;
  t269 = t122*t126;
  t270 = t268 + t269;
  t141 = -0.4*t140*t129;
  t151 = 0.4*t146*t150;
  t154 = -1.*t146*t150;
  t155 = t153 + t154;
  t156 = 0.64*t155;
  t159 = t141 + t151 + t156;
  t160 = var2[4]*t159;
  t189 = var2[2]*t185;
  t191 = var2[3]*t185;
  t193 = var2[1] + t160 + t189 + t191;
  t202 = 0.11*var2[2]*t201;
  t203 = 0.11*var2[5]*t201;
  t204 = var2[1] + t202 + t203;
  t327 = t225*t210;
  t328 = t201*t232;
  t329 = t206*t210;
  t330 = t201*t211;
  t331 = t329 + t330;
  t332 = 0.64*t331;
  t334 = t327 + t328 + t332;
  t313 = t196*t112;
  t314 = t122*t198;
  t315 = t313 + t314;
  t207 = -0.4*t206*t201;
  t212 = 0.4*t210*t211;
  t214 = -1.*t210*t211;
  t215 = t213 + t214;
  t216 = 0.64*t215;
  t217 = t207 + t212 + t216;
  t218 = var2[6]*t217;
  t239 = var2[2]*t238;
  t240 = var2[5]*t238;
  t241 = var2[1] + t218 + t239 + t240;
  t257 = 0.24*var2[2]*t122;
  t258 = var2[0] + t257;
  t276 = 0.11*var2[2]*t146;
  t277 = 0.11*var2[3]*t146;
  t278 = var2[0] + t276 + t277;
  t291 = var2[2]*t290;
  t292 = var2[3]*t290;
  t293 = -0.4*t140*t146;
  t294 = 0.4*t270*t150;
  t295 = -1.*t270*t150;
  t296 = t285 + t295;
  t297 = 0.64*t296;
  t298 = t293 + t294 + t297;
  t299 = var2[4]*t298;
  t300 = var2[0] + t291 + t292 + t299;
  t321 = 0.11*var2[2]*t210;
  t322 = 0.11*var2[5]*t210;
  t323 = var2[0] + t321 + t322;
  t335 = var2[2]*t334;
  t336 = var2[5]*t334;
  t337 = -0.4*t206*t210;
  t338 = 0.4*t315*t211;
  t339 = -1.*t315*t211;
  t340 = t329 + t339;
  t341 = 0.64*t340;
  t342 = t337 + t338 + t341;
  t343 = var2[6]*t342;
  t344 = var2[0] + t335 + t336 + t343;
  p_output1[0]=0. + 12.*t114*t99 + 6.8*t132*t99 + 3.2*t193*t99 + 6.8*t204*t99 + 3.2*t241*t99;
  p_output1[1]=0. + 12.*(-1.*t114*(0.24*t112 + t261 + var1[0]) + t258*(0.24*t122 + t254 + var1[1])) + 6.8*(-1.*t132*(t261 + 0.11*t270 + var1[0]) + t278*(0.11*t146 + t254 + var1[1])) + 6.8*(-1.*t204*(t261 + 0.11*t315 + var1[0]) + t323*(0.11*t210 + t254 + var1[1])) + 3.2*(-1.*t193*(0. + t146*t179 + t261 + t169*t270 + 0.64*(t146*t150 + t140*t270) + var1[0]) + t300*(0. + t254 + t283 + t284 + t288 + var1[1])) + 3.2*(-1.*t241*(0. + t210*t232 + t261 + t225*t315 + 0.64*(t210*t211 + t206*t315) + var1[0]) + t344*(0. + t254 + t327 + t328 + t332 + var1[1])) + 1.33*var2[2] + 0.47*(var2[2] + var2[3]) + 0.2*(0. + var2[2] + var2[3] + var2[4]) + 0.47*(var2[2] + var2[5]) + 0.2*(0. + var2[2] + var2[5] + var2[6]);
  p_output1[2]=0. - 12.*t258*t99 - 6.8*t278*t99 - 3.2*t300*t99 - 6.8*t323*t99 - 3.2*t344*t99;
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "L_world_reference_point.hh"

namespace SymExpression
{

void L_world_reference_point_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
