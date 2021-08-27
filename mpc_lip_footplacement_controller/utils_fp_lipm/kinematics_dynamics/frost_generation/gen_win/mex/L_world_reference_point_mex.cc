/*
 * Automatically Generated from Mathematica.
 * Fri 27 Aug 2021 03:42:42 GMT-04:00
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
  double t75;
  double t76;
  double t80;
  double t88;
  double t90;
  double t91;
  double t92;
  double t95;
  double t96;
  double t101;
  double t105;
  double t106;
  double t107;
  double t108;
  double t110;
  double t121;
  double t122;
  double t123;
  double t116;
  double t117;
  double t118;
  double t119;
  double t120;
  double t124;
  double t125;
  double t126;
  double t127;
  double t128;
  double t129;
  double t130;
  double t135;
  double t136;
  double t137;
  double t138;
  double t139;
  double t144;
  double t146;
  double t147;
  double t148;
  double t149;
  double t151;
  double t162;
  double t163;
  double t164;
  double t157;
  double t158;
  double t159;
  double t160;
  double t161;
  double t165;
  double t166;
  double t167;
  double t168;
  double t169;
  double t170;
  double t171;
  double t85;
  double t86;
  double t97;
  double t98;
  double t99;
  double t192;
  double t186;
  double t212;
  double t213;
  double t214;
  double t215;
  double t216;
  double t217;
  double t219;
  double t198;
  double t199;
  double t200;
  double t102;
  double t109;
  double t111;
  double t112;
  double t113;
  double t114;
  double t115;
  double t131;
  double t132;
  double t133;
  double t140;
  double t141;
  double t142;
  double t255;
  double t256;
  double t257;
  double t258;
  double t259;
  double t260;
  double t262;
  double t241;
  double t242;
  double t243;
  double t145;
  double t150;
  double t152;
  double t153;
  double t154;
  double t155;
  double t156;
  double t172;
  double t173;
  double t174;
  double t189;
  double t190;
  double t206;
  double t207;
  double t208;
  double t220;
  double t221;
  double t222;
  double t223;
  double t224;
  double t225;
  double t226;
  double t227;
  double t228;
  double t229;
  double t249;
  double t250;
  double t251;
  double t263;
  double t264;
  double t265;
  double t266;
  double t267;
  double t268;
  double t269;
  double t270;
  double t271;
  double t272;
  t75 = -1.*var3[1];
  t76 = 0. + t75;
  t80 = Sin(var1[2]);
  t88 = Cos(var1[3]);
  t90 = -1.*t88*t80;
  t91 = Cos(var1[2]);
  t92 = Sin(var1[3]);
  t95 = -1.*t91*t92;
  t96 = t90 + t95;
  t101 = Cos(var1[4]);
  t105 = t91*t88;
  t106 = -1.*t80*t92;
  t107 = t105 + t106;
  t108 = Sin(var1[4]);
  t110 = t101*t96;
  t121 = -1.*t91*t88;
  t122 = t80*t92;
  t123 = t121 + t122;
  t116 = -1.*t101;
  t117 = 1. + t116;
  t118 = 0.4*t117;
  t119 = 0. + t118;
  t120 = t119*t96;
  t124 = -0.4*t108;
  t125 = 0. + t124;
  t126 = t123*t125;
  t127 = t123*t108;
  t128 = t110 + t127;
  t129 = 0.64*t128;
  t130 = t120 + t126 + t129;
  t135 = Cos(var1[5]);
  t136 = -1.*t135*t80;
  t137 = Sin(var1[5]);
  t138 = -1.*t91*t137;
  t139 = t136 + t138;
  t144 = Cos(var1[6]);
  t146 = t91*t135;
  t147 = -1.*t80*t137;
  t148 = t146 + t147;
  t149 = Sin(var1[6]);
  t151 = t144*t139;
  t162 = -1.*t91*t135;
  t163 = t80*t137;
  t164 = t162 + t163;
  t157 = -1.*t144;
  t158 = 1. + t157;
  t159 = 0.4*t158;
  t160 = 0. + t159;
  t161 = t160*t139;
  t165 = -0.4*t149;
  t166 = 0. + t165;
  t167 = t164*t166;
  t168 = t164*t149;
  t169 = t151 + t168;
  t170 = 0.64*t169;
  t171 = t161 + t167 + t170;
  t85 = -0.24*var2[2]*t80;
  t86 = var2[1] + t85;
  t97 = 0.11*var2[2]*t96;
  t98 = 0.11*var2[3]*t96;
  t99 = var2[1] + t97 + t98;
  t192 = -1.*var3[0];
  t186 = -1.*var3[2];
  t212 = t119*t107;
  t213 = t96*t125;
  t214 = t101*t107;
  t215 = t96*t108;
  t216 = t214 + t215;
  t217 = 0.64*t216;
  t219 = t212 + t213 + t217;
  t198 = t88*t80;
  t199 = t91*t92;
  t200 = t198 + t199;
  t102 = -0.4*t101*t96;
  t109 = 0.4*t107*t108;
  t111 = -1.*t107*t108;
  t112 = t110 + t111;
  t113 = 0.64*t112;
  t114 = t102 + t109 + t113;
  t115 = var2[4]*t114;
  t131 = var2[2]*t130;
  t132 = var2[3]*t130;
  t133 = var2[1] + t115 + t131 + t132;
  t140 = 0.11*var2[2]*t139;
  t141 = 0.11*var2[5]*t139;
  t142 = var2[1] + t140 + t141;
  t255 = t160*t148;
  t256 = t139*t166;
  t257 = t144*t148;
  t258 = t139*t149;
  t259 = t257 + t258;
  t260 = 0.64*t259;
  t262 = t255 + t256 + t260;
  t241 = t135*t80;
  t242 = t91*t137;
  t243 = t241 + t242;
  t145 = -0.4*t144*t139;
  t150 = 0.4*t148*t149;
  t152 = -1.*t148*t149;
  t153 = t151 + t152;
  t154 = 0.64*t153;
  t155 = t145 + t150 + t154;
  t156 = var2[6]*t155;
  t172 = var2[2]*t171;
  t173 = var2[5]*t171;
  t174 = var2[1] + t156 + t172 + t173;
  t189 = 0.24*var2[2]*t91;
  t190 = var2[0] + t189;
  t206 = 0.11*var2[2]*t107;
  t207 = 0.11*var2[3]*t107;
  t208 = var2[0] + t206 + t207;
  t220 = var2[2]*t219;
  t221 = var2[3]*t219;
  t222 = -0.4*t101*t107;
  t223 = 0.4*t200*t108;
  t224 = -1.*t200*t108;
  t225 = t214 + t224;
  t226 = 0.64*t225;
  t227 = t222 + t223 + t226;
  t228 = var2[4]*t227;
  t229 = var2[0] + t220 + t221 + t228;
  t249 = 0.11*var2[2]*t148;
  t250 = 0.11*var2[5]*t148;
  t251 = var2[0] + t249 + t250;
  t263 = var2[2]*t262;
  t264 = var2[5]*t262;
  t265 = -0.4*t144*t148;
  t266 = 0.4*t243*t149;
  t267 = -1.*t243*t149;
  t268 = t257 + t267;
  t269 = 0.64*t268;
  t270 = t265 + t266 + t269;
  t271 = var2[6]*t270;
  t272 = var2[0] + t263 + t264 + t271;
  p_output1[0]=0. + 3.2*t133*t76 + 6.8*t142*t76 + 3.2*t174*t76 + 12.*t76*t86 + 6.8*t76*t99;
  p_output1[1]=0. + 6.8*(-1.*t99*(t192 + 0.11*t200 + var1[0]) + t208*(0.11*t107 + t186 + var1[1])) + 6.8*(-1.*t142*(t192 + 0.11*t243 + var1[0]) + t251*(0.11*t148 + t186 + var1[1])) + 3.2*(-1.*t133*(0. + t107*t125 + t192 + t119*t200 + 0.64*(t107*t108 + t101*t200) + var1[0]) + t229*(0. + t186 + t212 + t213 + t217 + var1[1])) + 3.2*(-1.*t174*(0. + t148*t166 + t192 + t160*t243 + 0.64*(t148*t149 + t144*t243) + var1[0]) + t272*(0. + t186 + t255 + t256 + t260 + var1[1])) + 12.*(-1.*t86*(t192 + 0.24*t80 + var1[0]) + t190*(t186 + 0.24*t91 + var1[1])) + 1.33*var2[2] + 0.47*(var2[2] + var2[3]) + 0.2*(0. + var2[2] + var2[3] + var2[4]) + 0.47*(var2[2] + var2[5]) + 0.2*(0. + var2[2] + var2[5] + var2[6]);
  p_output1[2]=0. - 12.*t190*t76 - 6.8*t208*t76 - 3.2*t229*t76 - 6.8*t251*t76 - 3.2*t272*t76;
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

#include "L_world_reference_point_mex.hh"

namespace SymExpression
{

void L_world_reference_point_mex_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
