/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:56:38 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t73;
  double t43;
  double t64;
  double t76;
  double t86;
  double t42;
  double t65;
  double t80;
  double t81;
  double t85;
  double t89;
  double t90;
  double t93;
  double t94;
  double t97;
  double t111;
  double t112;
  double t115;
  double t116;
  double t119;
  double t142;
  double t139;
  double t140;
  double t143;
  double t141;
  double t144;
  double t145;
  double t146;
  double t147;
  double t148;
  double t149;
  double t150;
  double t151;
  double t157;
  double t158;
  double t159;
  double t160;
  double t161;
  double t103;
  double t104;
  double t107;
  double t130;
  double t131;
  double t132;
  double t133;
  double t134;
  double t135;
  double t153;
  double t154;
  double t155;
  double t170;
  double t171;
  double t172;
  double t173;
  double t174;
  double t175;
  double t183;
  double t184;
  double t185;
  double t198;
  double t199;
  double t200;
  double t240;
  double t241;
  double t242;
  double t244;
  double t245;
  double t246;
  double t260;
  double t261;
  double t262;
  double t264;
  double t265;
  double t266;
  double t187;
  double t188;
  double t189;
  double t179;
  double t180;
  double t181;
  double t127;
  double t128;
  double t129;
  double t191;
  double t192;
  double t120;
  double t123;
  double t124;
  double t125;
  double t202;
  double t203;
  double t204;
  double t194;
  double t195;
  double t196;
  double t167;
  double t168;
  double t169;
  double t206;
  double t207;
  double t162;
  double t163;
  double t164;
  double t165;
  double t211;
  double t212;
  double t213;
  double t214;
  double t217;
  double t218;
  double t225;
  double t226;
  double t182;
  double t186;
  double t190;
  double t193;
  double t197;
  double t201;
  double t205;
  double t208;
  double t209;
  double t234;
  double t235;
  double t236;
  double t237;
  double t238;
  double t243;
  double t247;
  double t248;
  double t250;
  double t251;
  double t252;
  double t254;
  double t255;
  double t256;
  double t257;
  double t258;
  double t263;
  double t267;
  double t268;
  double t270;
  double t271;
  double t272;
  double t233;
  double t239;
  double t249;
  double t253;
  double t259;
  double t269;
  double t273;
  double t274;
  double t304;
  double t305;
  double t306;
  double t307;
  double t308;
  double t309;
  double t310;
  double t311;
  double t278;
  double t279;
  double t280;
  double t281;
  double t108;
  double t126;
  double t136;
  double t137;
  double t317;
  double t318;
  double t319;
  double t320;
  double t347;
  double t348;
  double t314;
  double t315;
  double t284;
  double t285;
  double t286;
  double t287;
  double t156;
  double t166;
  double t176;
  double t177;
  double t325;
  double t326;
  double t327;
  double t328;
  double t366;
  double t367;
  double t322;
  double t323;
  t73 = Cos(var1[3]);
  t43 = Cos(var1[4]);
  t64 = Sin(var1[3]);
  t76 = Sin(var1[4]);
  t86 = Cos(var1[2]);
  t42 = Sin(var1[2]);
  t65 = -1.*t43*t64;
  t80 = -1.*t73*t76;
  t81 = t65 + t80;
  t85 = t42*t81;
  t89 = t73*t43;
  t90 = -1.*t64*t76;
  t93 = t89 + t90;
  t94 = t86*t93;
  t97 = t85 + t94;
  t111 = -1.*t43;
  t112 = 1. + t111;
  t115 = 0.4*t112;
  t116 = 0.64*t43;
  t119 = t115 + t116;
  t142 = Cos(var1[5]);
  t139 = Cos(var1[6]);
  t140 = Sin(var1[5]);
  t143 = Sin(var1[6]);
  t141 = -1.*t139*t140;
  t144 = -1.*t142*t143;
  t145 = t141 + t144;
  t146 = t42*t145;
  t147 = t142*t139;
  t148 = -1.*t140*t143;
  t149 = t147 + t148;
  t150 = t86*t149;
  t151 = t146 + t150;
  t157 = -1.*t139;
  t158 = 1. + t157;
  t159 = 0.4*t158;
  t160 = 0.64*t139;
  t161 = t159 + t160;
  t103 = t86*t73;
  t104 = -1.*t42*t64;
  t107 = t103 + t104;
  t130 = t43*t64;
  t131 = t73*t76;
  t132 = t130 + t131;
  t133 = t86*t132;
  t134 = t42*t93;
  t135 = t133 + t134;
  t153 = t86*t142;
  t154 = -1.*t42*t140;
  t155 = t153 + t154;
  t170 = t139*t140;
  t171 = t142*t143;
  t172 = t170 + t171;
  t173 = t86*t172;
  t174 = t42*t149;
  t175 = t173 + t174;
  t183 = t73*t42;
  t184 = t86*t64;
  t185 = t183 + t184;
  t198 = t142*t42;
  t199 = t86*t140;
  t200 = t198 + t199;
  t240 = t119*t64;
  t241 = 0.24*t73*t76;
  t242 = t240 + t241;
  t244 = t73*t119;
  t245 = -0.24*t64*t76;
  t246 = t244 + t245;
  t260 = t161*t140;
  t261 = 0.24*t142*t143;
  t262 = t260 + t261;
  t264 = t142*t161;
  t265 = -0.24*t140*t143;
  t266 = t264 + t265;
  t187 = t86*t81;
  t188 = -1.*t42*t93;
  t189 = t187 + t188;
  t179 = -1.*t73*t42;
  t180 = -1.*t86*t64;
  t181 = t179 + t180;
  t127 = t119*t76;
  t128 = -0.24*t43*t76;
  t129 = t127 + t128;
  t191 = -1.*t42*t132;
  t192 = t191 + t94;
  t120 = t119*t43;
  t123 = Power(t76,2);
  t124 = 0.24*t123;
  t125 = t120 + t124;
  t202 = t86*t145;
  t203 = -1.*t42*t149;
  t204 = t202 + t203;
  t194 = -1.*t142*t42;
  t195 = -1.*t86*t140;
  t196 = t194 + t195;
  t167 = t161*t143;
  t168 = -0.24*t139*t143;
  t169 = t167 + t168;
  t206 = -1.*t42*t172;
  t207 = t206 + t150;
  t162 = t161*t139;
  t163 = Power(t143,2);
  t164 = 0.24*t163;
  t165 = t162 + t164;
  t211 = Power(t86,2);
  t212 = -12.*t211;
  t213 = Power(t42,2);
  t214 = -12.*t213;
  t217 = Power(t107,2);
  t218 = -6.8*t217;
  t225 = Power(t155,2);
  t226 = -6.8*t225;
  t182 = -6.8*t181*t107;
  t186 = -6.8*t185*t107;
  t190 = -3.2*t97*t189;
  t193 = -3.2*t192*t135;
  t197 = -6.8*t196*t155;
  t201 = -6.8*t200*t155;
  t205 = -3.2*t151*t204;
  t208 = -3.2*t207*t175;
  t209 = t182 + t186 + t190 + t193 + t197 + t201 + t205 + t208;
  t234 = Power(t73,2);
  t235 = 0.11*t234;
  t236 = Power(t64,2);
  t237 = 0.11*t236;
  t238 = t235 + t237;
  t243 = -1.*t242*t93;
  t247 = -1.*t81*t246;
  t248 = t243 + t247;
  t250 = t242*t132;
  t251 = t93*t246;
  t252 = t250 + t251;
  t254 = Power(t142,2);
  t255 = 0.11*t254;
  t256 = Power(t140,2);
  t257 = 0.11*t256;
  t258 = t255 + t257;
  t263 = -1.*t262*t149;
  t267 = -1.*t145*t266;
  t268 = t263 + t267;
  t270 = t262*t172;
  t271 = t149*t266;
  t272 = t270 + t271;
  t233 = -2.88*t86;
  t239 = -6.8*t107*t238;
  t249 = -3.2*t135*t248;
  t253 = -3.2*t97*t252;
  t259 = -6.8*t155*t258;
  t269 = -3.2*t175*t268;
  t273 = -3.2*t151*t272;
  t274 = t233 + t239 + t249 + t253 + t259 + t269 + t273;
  t304 = 2.88*t42;
  t305 = -6.8*t181*t238;
  t306 = -3.2*t192*t248;
  t307 = -3.2*t189*t252;
  t308 = -6.8*t196*t258;
  t309 = -3.2*t207*t268;
  t310 = -3.2*t204*t272;
  t311 = t304 + t305 + t306 + t307 + t308 + t309 + t310;
  t278 = -0.748*t181;
  t279 = -3.2*t129*t192;
  t280 = -3.2*t125*t189;
  t281 = t278 + t279 + t280;
  t108 = -0.748*t107;
  t126 = -3.2*t125*t97;
  t136 = -3.2*t129*t135;
  t137 = t108 + t126 + t136;
  t317 = -0.748*t238;
  t318 = -3.2*t129*t248;
  t319 = -3.2*t125*t252;
  t320 = -0.67 + t317 + t318 + t319;
  t347 = -0.768*t125;
  t348 = -0.2 + t347;
  t314 = -0.768*t252;
  t315 = -0.2 + t314;
  t284 = -0.748*t196;
  t285 = -3.2*t169*t207;
  t286 = -3.2*t165*t204;
  t287 = t284 + t285 + t286;
  t156 = -0.748*t155;
  t166 = -3.2*t165*t151;
  t176 = -3.2*t169*t175;
  t177 = t156 + t166 + t176;
  t325 = -0.748*t258;
  t326 = -3.2*t169*t268;
  t327 = -3.2*t165*t272;
  t328 = -0.67 + t325 + t326 + t327;
  t366 = -0.768*t165;
  t367 = -0.2 + t366;
  t322 = -0.768*t272;
  t323 = -0.2 + t322;
  p_output1[0]=(-3.2*Power(t135,2) - 3.2*Power(t151,2) - 3.2*Power(t175,2) - 6.8*Power(t185,2) - 6.8*Power(t200,2) + t212 + t214 + t218 + t226 - 3.2*Power(t97,2))*var2[0] + t209*var2[1] + t274*var2[2] + t137*var2[3] - 0.768*t97*var2[4] + t177*var2[5] - 0.768*t151*var2[6];
  p_output1[1]=t209*var2[0] + (-6.8*Power(t181,2) - 3.2*Power(t189,2) - 3.2*Power(t192,2) - 6.8*Power(t196,2) - 3.2*Power(t204,2) - 3.2*Power(t207,2) + t212 + t214 + t218 + t226)*var2[1] + t311*var2[2] + t281*var2[3] - 0.768*t189*var2[4] + t287*var2[5] - 0.768*t204*var2[6];
  p_output1[2]=t274*var2[0] + t311*var2[1] + (-3.3612 - 6.8*Power(t238,2) - 3.2*Power(t248,2) - 3.2*Power(t252,2) - 6.8*Power(t258,2) - 3.2*Power(t268,2) - 3.2*Power(t272,2))*var2[2] + t320*var2[3] + t315*var2[4] + t328*var2[5] + t323*var2[6];
  p_output1[3]=t137*var2[0] + t281*var2[1] + t320*var2[2] + (-1.58228 - 3.2*Power(t125,2) - 3.2*Power(t129,2))*var2[3] + t348*var2[4];
  p_output1[4]=-0.768*t97*var2[0] - 0.768*t189*var2[1] + t315*var2[2] + t348*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t177*var2[0] + t287*var2[1] + t328*var2[2] + (-1.58228 - 3.2*Power(t165,2) - 3.2*Power(t169,2))*var2[5] + t367*var2[6];
  p_output1[6]=-0.768*t151*var2[0] - 0.768*t204*var2[1] + t323*var2[2] + t367*var2[5] - 1.2143199999999998*var2[6];
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
