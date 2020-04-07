/*
 * Automatically Generated from Mathematica.
 * Mon 6 Apr 2020 23:56:49 GMT-04:00
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
  double t113;
  double t83;
  double t104;
  double t116;
  double t126;
  double t82;
  double t105;
  double t120;
  double t121;
  double t125;
  double t129;
  double t130;
  double t133;
  double t134;
  double t137;
  double t151;
  double t152;
  double t155;
  double t156;
  double t159;
  double t182;
  double t179;
  double t180;
  double t183;
  double t181;
  double t184;
  double t185;
  double t186;
  double t187;
  double t188;
  double t189;
  double t190;
  double t191;
  double t197;
  double t198;
  double t199;
  double t200;
  double t201;
  double t143;
  double t144;
  double t147;
  double t170;
  double t171;
  double t172;
  double t173;
  double t174;
  double t175;
  double t193;
  double t194;
  double t195;
  double t210;
  double t211;
  double t212;
  double t213;
  double t214;
  double t215;
  double t223;
  double t224;
  double t225;
  double t238;
  double t239;
  double t240;
  double t280;
  double t281;
  double t282;
  double t284;
  double t285;
  double t286;
  double t300;
  double t301;
  double t302;
  double t304;
  double t305;
  double t306;
  double t227;
  double t228;
  double t229;
  double t219;
  double t220;
  double t221;
  double t167;
  double t168;
  double t169;
  double t231;
  double t232;
  double t160;
  double t163;
  double t164;
  double t165;
  double t242;
  double t243;
  double t244;
  double t234;
  double t235;
  double t236;
  double t207;
  double t208;
  double t209;
  double t246;
  double t247;
  double t202;
  double t203;
  double t204;
  double t205;
  double t251;
  double t252;
  double t253;
  double t254;
  double t257;
  double t258;
  double t265;
  double t266;
  double t222;
  double t226;
  double t230;
  double t233;
  double t237;
  double t241;
  double t245;
  double t248;
  double t249;
  double t274;
  double t275;
  double t276;
  double t277;
  double t278;
  double t283;
  double t287;
  double t288;
  double t290;
  double t291;
  double t292;
  double t294;
  double t295;
  double t296;
  double t297;
  double t298;
  double t303;
  double t307;
  double t308;
  double t310;
  double t311;
  double t312;
  double t273;
  double t279;
  double t289;
  double t293;
  double t299;
  double t309;
  double t313;
  double t314;
  double t344;
  double t345;
  double t346;
  double t347;
  double t348;
  double t349;
  double t350;
  double t351;
  double t318;
  double t319;
  double t320;
  double t321;
  double t148;
  double t166;
  double t176;
  double t177;
  double t357;
  double t358;
  double t359;
  double t360;
  double t387;
  double t388;
  double t354;
  double t355;
  double t324;
  double t325;
  double t326;
  double t327;
  double t196;
  double t206;
  double t216;
  double t217;
  double t365;
  double t366;
  double t367;
  double t368;
  double t406;
  double t407;
  double t362;
  double t363;
  t113 = Cos(var1[3]);
  t83 = Cos(var1[4]);
  t104 = Sin(var1[3]);
  t116 = Sin(var1[4]);
  t126 = Cos(var1[2]);
  t82 = Sin(var1[2]);
  t105 = -1.*t83*t104;
  t120 = -1.*t113*t116;
  t121 = t105 + t120;
  t125 = t82*t121;
  t129 = t113*t83;
  t130 = -1.*t104*t116;
  t133 = t129 + t130;
  t134 = t126*t133;
  t137 = t125 + t134;
  t151 = -1.*t83;
  t152 = 1. + t151;
  t155 = 0.4*t152;
  t156 = 0.64*t83;
  t159 = t155 + t156;
  t182 = Cos(var1[5]);
  t179 = Cos(var1[6]);
  t180 = Sin(var1[5]);
  t183 = Sin(var1[6]);
  t181 = -1.*t179*t180;
  t184 = -1.*t182*t183;
  t185 = t181 + t184;
  t186 = t82*t185;
  t187 = t182*t179;
  t188 = -1.*t180*t183;
  t189 = t187 + t188;
  t190 = t126*t189;
  t191 = t186 + t190;
  t197 = -1.*t179;
  t198 = 1. + t197;
  t199 = 0.4*t198;
  t200 = 0.64*t179;
  t201 = t199 + t200;
  t143 = t126*t113;
  t144 = -1.*t82*t104;
  t147 = t143 + t144;
  t170 = t83*t104;
  t171 = t113*t116;
  t172 = t170 + t171;
  t173 = t126*t172;
  t174 = t82*t133;
  t175 = t173 + t174;
  t193 = t126*t182;
  t194 = -1.*t82*t180;
  t195 = t193 + t194;
  t210 = t179*t180;
  t211 = t182*t183;
  t212 = t210 + t211;
  t213 = t126*t212;
  t214 = t82*t189;
  t215 = t213 + t214;
  t223 = t113*t82;
  t224 = t126*t104;
  t225 = t223 + t224;
  t238 = t182*t82;
  t239 = t126*t180;
  t240 = t238 + t239;
  t280 = t159*t104;
  t281 = 0.24*t113*t116;
  t282 = t280 + t281;
  t284 = t113*t159;
  t285 = -0.24*t104*t116;
  t286 = t284 + t285;
  t300 = t201*t180;
  t301 = 0.24*t182*t183;
  t302 = t300 + t301;
  t304 = t182*t201;
  t305 = -0.24*t180*t183;
  t306 = t304 + t305;
  t227 = t126*t121;
  t228 = -1.*t82*t133;
  t229 = t227 + t228;
  t219 = -1.*t113*t82;
  t220 = -1.*t126*t104;
  t221 = t219 + t220;
  t167 = t159*t116;
  t168 = -0.24*t83*t116;
  t169 = t167 + t168;
  t231 = -1.*t82*t172;
  t232 = t231 + t134;
  t160 = t159*t83;
  t163 = Power(t116,2);
  t164 = 0.24*t163;
  t165 = t160 + t164;
  t242 = t126*t185;
  t243 = -1.*t82*t189;
  t244 = t242 + t243;
  t234 = -1.*t182*t82;
  t235 = -1.*t126*t180;
  t236 = t234 + t235;
  t207 = t201*t183;
  t208 = -0.24*t179*t183;
  t209 = t207 + t208;
  t246 = -1.*t82*t212;
  t247 = t246 + t190;
  t202 = t201*t179;
  t203 = Power(t183,2);
  t204 = 0.24*t203;
  t205 = t202 + t204;
  t251 = Power(t126,2);
  t252 = -12.*t251;
  t253 = Power(t82,2);
  t254 = -12.*t253;
  t257 = Power(t147,2);
  t258 = -6.8*t257;
  t265 = Power(t195,2);
  t266 = -6.8*t265;
  t222 = -6.8*t221*t147;
  t226 = -6.8*t225*t147;
  t230 = -3.2*t137*t229;
  t233 = -3.2*t232*t175;
  t237 = -6.8*t236*t195;
  t241 = -6.8*t240*t195;
  t245 = -3.2*t191*t244;
  t248 = -3.2*t247*t215;
  t249 = t222 + t226 + t230 + t233 + t237 + t241 + t245 + t248;
  t274 = Power(t113,2);
  t275 = 0.11*t274;
  t276 = Power(t104,2);
  t277 = 0.11*t276;
  t278 = t275 + t277;
  t283 = -1.*t282*t133;
  t287 = -1.*t121*t286;
  t288 = t283 + t287;
  t290 = t282*t172;
  t291 = t133*t286;
  t292 = t290 + t291;
  t294 = Power(t182,2);
  t295 = 0.11*t294;
  t296 = Power(t180,2);
  t297 = 0.11*t296;
  t298 = t295 + t297;
  t303 = -1.*t302*t189;
  t307 = -1.*t185*t306;
  t308 = t303 + t307;
  t310 = t302*t212;
  t311 = t189*t306;
  t312 = t310 + t311;
  t273 = -2.88*t126;
  t279 = -6.8*t147*t278;
  t289 = -3.2*t175*t288;
  t293 = -3.2*t137*t292;
  t299 = -6.8*t195*t298;
  t309 = -3.2*t215*t308;
  t313 = -3.2*t191*t312;
  t314 = t273 + t279 + t289 + t293 + t299 + t309 + t313;
  t344 = 2.88*t82;
  t345 = -6.8*t221*t278;
  t346 = -3.2*t232*t288;
  t347 = -3.2*t229*t292;
  t348 = -6.8*t236*t298;
  t349 = -3.2*t247*t308;
  t350 = -3.2*t244*t312;
  t351 = t344 + t345 + t346 + t347 + t348 + t349 + t350;
  t318 = -0.748*t221;
  t319 = -3.2*t169*t232;
  t320 = -3.2*t165*t229;
  t321 = t318 + t319 + t320;
  t148 = -0.748*t147;
  t166 = -3.2*t165*t137;
  t176 = -3.2*t169*t175;
  t177 = t148 + t166 + t176;
  t357 = -0.748*t278;
  t358 = -3.2*t169*t288;
  t359 = -3.2*t165*t292;
  t360 = -0.67 + t357 + t358 + t359;
  t387 = -0.768*t165;
  t388 = -0.2 + t387;
  t354 = -0.768*t292;
  t355 = -0.2 + t354;
  t324 = -0.748*t236;
  t325 = -3.2*t209*t247;
  t326 = -3.2*t205*t244;
  t327 = t324 + t325 + t326;
  t196 = -0.748*t195;
  t206 = -3.2*t205*t191;
  t216 = -3.2*t209*t215;
  t217 = t196 + t206 + t216;
  t365 = -0.748*t298;
  t366 = -3.2*t209*t308;
  t367 = -3.2*t205*t312;
  t368 = -0.67 + t365 + t366 + t367;
  t406 = -0.768*t205;
  t407 = -0.2 + t406;
  t362 = -0.768*t312;
  t363 = -0.2 + t362;
  p_output1[0]=(-3.2*Power(t137,2) - 3.2*Power(t175,2) - 3.2*Power(t191,2) - 3.2*Power(t215,2) - 6.8*Power(t225,2) - 6.8*Power(t240,2) + t252 + t254 + t258 + t266)*var2[0] + t249*var2[1] + t314*var2[2] + t177*var2[3] - 0.768*t137*var2[4] + t217*var2[5] - 0.768*t191*var2[6];
  p_output1[1]=t249*var2[0] + (-6.8*Power(t221,2) - 3.2*Power(t229,2) - 3.2*Power(t232,2) - 6.8*Power(t236,2) - 3.2*Power(t244,2) - 3.2*Power(t247,2) + t252 + t254 + t258 + t266)*var2[1] + t351*var2[2] + t321*var2[3] - 0.768*t229*var2[4] + t327*var2[5] - 0.768*t244*var2[6];
  p_output1[2]=t314*var2[0] + t351*var2[1] + (-3.3612 - 6.8*Power(t278,2) - 3.2*Power(t288,2) - 3.2*Power(t292,2) - 6.8*Power(t298,2) - 3.2*Power(t308,2) - 3.2*Power(t312,2))*var2[2] + t360*var2[3] + t355*var2[4] + t368*var2[5] + t363*var2[6];
  p_output1[3]=t177*var2[0] + t321*var2[1] + t360*var2[2] + (-1.58228 - 3.2*Power(t165,2) - 3.2*Power(t169,2))*var2[3] + t388*var2[4];
  p_output1[4]=-0.768*t137*var2[0] - 0.768*t229*var2[1] + t355*var2[2] + t388*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t217*var2[0] + t327*var2[1] + t368*var2[2] + (-1.58228 - 3.2*Power(t205,2) - 3.2*Power(t209,2))*var2[5] + t407*var2[6];
  p_output1[6]=-0.768*t191*var2[0] - 0.768*t244*var2[1] + t363*var2[2] + t407*var2[5] - 1.2143199999999998*var2[6];
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

#include "MmatDx_five_link_walker.hh"

namespace RightStance
{

void MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
