/*
 * Automatically Generated from Mathematica.
 * Fri 27 Aug 2021 03:42:43 GMT-04:00
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
  double t85;
  double t87;
  double t96;
  double t100;
  double t102;
  double t105;
  double t109;
  double t110;
  double t112;
  double t119;
  double t122;
  double t123;
  double t124;
  double t125;
  double t127;
  double t142;
  double t143;
  double t145;
  double t133;
  double t134;
  double t139;
  double t140;
  double t141;
  double t146;
  double t150;
  double t151;
  double t153;
  double t154;
  double t155;
  double t156;
  double t164;
  double t165;
  double t166;
  double t167;
  double t168;
  double t173;
  double t175;
  double t176;
  double t177;
  double t178;
  double t180;
  double t194;
  double t195;
  double t196;
  double t187;
  double t188;
  double t189;
  double t191;
  double t193;
  double t197;
  double t198;
  double t199;
  double t201;
  double t202;
  double t203;
  double t204;
  double t97;
  double t98;
  double t113;
  double t114;
  double t115;
  double t226;
  double t219;
  double t247;
  double t248;
  double t249;
  double t250;
  double t251;
  double t252;
  double t254;
  double t232;
  double t233;
  double t234;
  double t120;
  double t126;
  double t128;
  double t129;
  double t130;
  double t131;
  double t132;
  double t159;
  double t160;
  double t161;
  double t169;
  double t170;
  double t171;
  double t291;
  double t292;
  double t293;
  double t294;
  double t295;
  double t296;
  double t298;
  double t277;
  double t278;
  double t279;
  double t174;
  double t179;
  double t181;
  double t182;
  double t183;
  double t184;
  double t185;
  double t205;
  double t206;
  double t207;
  double t222;
  double t223;
  double t240;
  double t241;
  double t242;
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
  double t285;
  double t286;
  double t287;
  double t299;
  double t300;
  double t301;
  double t302;
  double t303;
  double t304;
  double t305;
  double t306;
  double t307;
  double t308;
  t85 = -1.*var3[1];
  t87 = 0. + t85;
  t96 = Sin(var1[2]);
  t100 = Cos(var1[3]);
  t102 = -1.*t100*t96;
  t105 = Cos(var1[2]);
  t109 = Sin(var1[3]);
  t110 = -1.*t105*t109;
  t112 = t102 + t110;
  t119 = Cos(var1[4]);
  t122 = t105*t100;
  t123 = -1.*t96*t109;
  t124 = t122 + t123;
  t125 = Sin(var1[4]);
  t127 = t119*t112;
  t142 = -1.*t105*t100;
  t143 = t96*t109;
  t145 = t142 + t143;
  t133 = -1.*t119;
  t134 = 1. + t133;
  t139 = 0.4*t134;
  t140 = 0. + t139;
  t141 = t140*t112;
  t146 = -0.4*t125;
  t150 = 0. + t146;
  t151 = t145*t150;
  t153 = t145*t125;
  t154 = t127 + t153;
  t155 = 0.64*t154;
  t156 = t141 + t151 + t155;
  t164 = Cos(var1[5]);
  t165 = -1.*t164*t96;
  t166 = Sin(var1[5]);
  t167 = -1.*t105*t166;
  t168 = t165 + t167;
  t173 = Cos(var1[6]);
  t175 = t105*t164;
  t176 = -1.*t96*t166;
  t177 = t175 + t176;
  t178 = Sin(var1[6]);
  t180 = t173*t168;
  t194 = -1.*t105*t164;
  t195 = t96*t166;
  t196 = t194 + t195;
  t187 = -1.*t173;
  t188 = 1. + t187;
  t189 = 0.4*t188;
  t191 = 0. + t189;
  t193 = t191*t168;
  t197 = -0.4*t178;
  t198 = 0. + t197;
  t199 = t196*t198;
  t201 = t196*t178;
  t202 = t180 + t201;
  t203 = 0.64*t202;
  t204 = t193 + t199 + t203;
  t97 = -0.24*var2[2]*t96;
  t98 = var2[1] + t97;
  t113 = 0.11*var2[2]*t112;
  t114 = 0.11*var2[3]*t112;
  t115 = var2[1] + t113 + t114;
  t226 = -1.*var3[0];
  t219 = -1.*var3[2];
  t247 = t140*t124;
  t248 = t112*t150;
  t249 = t119*t124;
  t250 = t112*t125;
  t251 = t249 + t250;
  t252 = 0.64*t251;
  t254 = t247 + t248 + t252;
  t232 = t100*t96;
  t233 = t105*t109;
  t234 = t232 + t233;
  t120 = -0.4*t119*t112;
  t126 = 0.4*t124*t125;
  t128 = -1.*t124*t125;
  t129 = t127 + t128;
  t130 = 0.64*t129;
  t131 = t120 + t126 + t130;
  t132 = var2[4]*t131;
  t159 = var2[2]*t156;
  t160 = var2[3]*t156;
  t161 = var2[1] + t132 + t159 + t160;
  t169 = 0.11*var2[2]*t168;
  t170 = 0.11*var2[5]*t168;
  t171 = var2[1] + t169 + t170;
  t291 = t191*t177;
  t292 = t168*t198;
  t293 = t173*t177;
  t294 = t168*t178;
  t295 = t293 + t294;
  t296 = 0.64*t295;
  t298 = t291 + t292 + t296;
  t277 = t164*t96;
  t278 = t105*t166;
  t279 = t277 + t278;
  t174 = -0.4*t173*t168;
  t179 = 0.4*t177*t178;
  t181 = -1.*t177*t178;
  t182 = t180 + t181;
  t183 = 0.64*t182;
  t184 = t174 + t179 + t183;
  t185 = var2[6]*t184;
  t205 = var2[2]*t204;
  t206 = var2[5]*t204;
  t207 = var2[1] + t185 + t205 + t206;
  t222 = 0.24*var2[2]*t105;
  t223 = var2[0] + t222;
  t240 = 0.11*var2[2]*t124;
  t241 = 0.11*var2[3]*t124;
  t242 = var2[0] + t240 + t241;
  t255 = var2[2]*t254;
  t256 = var2[3]*t254;
  t257 = -0.4*t119*t124;
  t258 = 0.4*t234*t125;
  t259 = -1.*t234*t125;
  t260 = t249 + t259;
  t261 = 0.64*t260;
  t262 = t257 + t258 + t261;
  t263 = var2[4]*t262;
  t264 = var2[0] + t255 + t256 + t263;
  t285 = 0.11*var2[2]*t177;
  t286 = 0.11*var2[5]*t177;
  t287 = var2[0] + t285 + t286;
  t299 = var2[2]*t298;
  t300 = var2[5]*t298;
  t301 = -0.4*t173*t177;
  t302 = 0.4*t279*t178;
  t303 = -1.*t279*t178;
  t304 = t293 + t303;
  t305 = 0.64*t304;
  t306 = t301 + t302 + t305;
  t307 = var2[6]*t306;
  t308 = var2[0] + t299 + t300 + t307;
  p_output1[0]=0. + 6.8*t115*t87 + 3.2*t161*t87 + 6.8*t171*t87 + 3.2*t207*t87 + 12.*t87*t98;
  p_output1[1]=0. + 12.*(-1.*t98*(t226 + 0.24*t96 + var1[0]) + t223*(0.24*t105 + t219 + var1[1])) + 6.8*(-1.*t115*(t226 + 0.11*t234 + var1[0]) + t242*(0.11*t124 + t219 + var1[1])) + 6.8*(-1.*t171*(t226 + 0.11*t279 + var1[0]) + t287*(0.11*t177 + t219 + var1[1])) + 3.2*(-1.*t161*(0. + t124*t150 + t226 + t140*t234 + 0.64*(t124*t125 + t119*t234) + var1[0]) + t264*(0. + t219 + t247 + t248 + t252 + var1[1])) + 3.2*(-1.*t207*(0. + t177*t198 + t226 + t191*t279 + 0.64*(t177*t178 + t173*t279) + var1[0]) + t308*(0. + t219 + t291 + t292 + t296 + var1[1])) + 1.33*var2[2] + 0.47*(var2[2] + var2[3]) + 0.2*(0. + var2[2] + var2[3] + var2[4]) + 0.47*(var2[2] + var2[5]) + 0.2*(0. + var2[2] + var2[5] + var2[6]);
  p_output1[2]=0. - 12.*t223*t87 - 6.8*t242*t87 - 3.2*t264*t87 - 6.8*t287*t87 - 3.2*t308*t87;
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

#include "L_world_reference_point_src.hh"

namespace SymExpression
{

void L_world_reference_point_src_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
