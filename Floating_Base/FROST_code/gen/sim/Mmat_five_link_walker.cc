/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:20:40 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t6;
  double t3;
  double t9;
  double t11;
  double t21;
  double t23;
  double t27;
  double t28;
  double t29;
  double t42;
  double t44;
  double t54;
  double t56;
  double t60;
  double t61;
  double t62;
  double t16;
  double t17;
  double t18;
  double t10;
  double t12;
  double t13;
  double t22;
  double t24;
  double t25;
  double t26;
  double t30;
  double t31;
  double t34;
  double t35;
  double t36;
  double t37;
  double t38;
  double t39;
  double t49;
  double t50;
  double t51;
  double t43;
  double t45;
  double t46;
  double t55;
  double t57;
  double t58;
  double t59;
  double t63;
  double t64;
  double t67;
  double t68;
  double t69;
  double t70;
  double t71;
  double t72;
  double t108;
  double t109;
  double t110;
  double t111;
  double t112;
  double t113;
  double t114;
  double t115;
  double t117;
  double t118;
  double t119;
  double t133;
  double t134;
  double t135;
  double t136;
  double t137;
  double t138;
  double t139;
  double t140;
  double t142;
  double t143;
  double t144;
  double t76;
  double t77;
  double t78;
  double t79;
  double t80;
  double t81;
  double t82;
  double t83;
  double t84;
  double t85;
  double t86;
  double t87;
  double t88;
  double t89;
  double t90;
  double t91;
  double t92;
  double t93;
  double t94;
  double t95;
  double t96;
  double t97;
  double t98;
  double t99;
  double t100;
  double t4;
  double t5;
  double t7;
  double t8;
  double t19;
  double t20;
  double t52;
  double t53;
  double t102;
  double t103;
  double t104;
  double t105;
  double t106;
  double t116;
  double t120;
  double t121;
  double t123;
  double t124;
  double t125;
  double t127;
  double t128;
  double t129;
  double t130;
  double t131;
  double t141;
  double t145;
  double t146;
  double t148;
  double t149;
  double t150;
  double t159;
  double t160;
  double t161;
  double t154;
  double t155;
  double t156;
  double t157;
  double t171;
  double t172;
  double t173;
  double t166;
  double t167;
  double t168;
  double t169;
  double t101;
  double t107;
  double t122;
  double t126;
  double t132;
  double t147;
  double t151;
  double t152;
  double t190;
  double t191;
  double t192;
  double t193;
  double t194;
  double t195;
  double t196;
  double t197;
  double t153;
  double t158;
  double t162;
  double t163;
  double t198;
  double t199;
  double t200;
  double t201;
  double t221;
  double t222;
  double t223;
  double t224;
  double t164;
  double t202;
  double t225;
  double t226;
  double t238;
  double t239;
  double t165;
  double t170;
  double t174;
  double t175;
  double t203;
  double t204;
  double t205;
  double t206;
  double t227;
  double t228;
  double t229;
  double t230;
  double t176;
  double t207;
  double t231;
  double t232;
  double t245;
  double t246;
  t6 = Sin(var1[2]);
  t3 = Cos(var1[2]);
  t9 = Cos(var1[3]);
  t11 = Sin(var1[3]);
  t21 = Cos(var1[4]);
  t23 = Sin(var1[4]);
  t27 = t9*t21;
  t28 = -1.*t11*t23;
  t29 = t27 + t28;
  t42 = Cos(var1[5]);
  t44 = Sin(var1[5]);
  t54 = Cos(var1[6]);
  t56 = Sin(var1[6]);
  t60 = t42*t54;
  t61 = -1.*t44*t56;
  t62 = t60 + t61;
  t16 = t3*t9;
  t17 = -1.*t6*t11;
  t18 = t16 + t17;
  t10 = t9*t6;
  t12 = t3*t11;
  t13 = t10 + t12;
  t22 = -1.*t21*t11;
  t24 = -1.*t9*t23;
  t25 = t22 + t24;
  t26 = t6*t25;
  t30 = t3*t29;
  t31 = t26 + t30;
  t34 = t21*t11;
  t35 = t9*t23;
  t36 = t34 + t35;
  t37 = t3*t36;
  t38 = t6*t29;
  t39 = t37 + t38;
  t49 = t3*t42;
  t50 = -1.*t6*t44;
  t51 = t49 + t50;
  t43 = t42*t6;
  t45 = t3*t44;
  t46 = t43 + t45;
  t55 = -1.*t54*t44;
  t57 = -1.*t42*t56;
  t58 = t55 + t57;
  t59 = t6*t58;
  t63 = t3*t62;
  t64 = t59 + t63;
  t67 = t54*t44;
  t68 = t42*t56;
  t69 = t67 + t68;
  t70 = t3*t69;
  t71 = t6*t62;
  t72 = t70 + t71;
  t108 = -1.*t21;
  t109 = 1. + t108;
  t110 = 0.4*t109;
  t111 = 0.64*t21;
  t112 = t110 + t111;
  t113 = t112*t11;
  t114 = 0.24*t9*t23;
  t115 = t113 + t114;
  t117 = t9*t112;
  t118 = -0.24*t11*t23;
  t119 = t117 + t118;
  t133 = -1.*t54;
  t134 = 1. + t133;
  t135 = 0.4*t134;
  t136 = 0.64*t54;
  t137 = t135 + t136;
  t138 = t137*t44;
  t139 = 0.24*t42*t56;
  t140 = t138 + t139;
  t142 = t42*t137;
  t143 = -0.24*t44*t56;
  t144 = t142 + t143;
  t76 = -1.*t9*t6;
  t77 = -1.*t3*t11;
  t78 = t76 + t77;
  t79 = 6.8*t78*t18;
  t80 = 6.8*t13*t18;
  t81 = t3*t25;
  t82 = -1.*t6*t29;
  t83 = t81 + t82;
  t84 = 3.2*t31*t83;
  t85 = -1.*t6*t36;
  t86 = t85 + t30;
  t87 = 3.2*t86*t39;
  t88 = -1.*t42*t6;
  t89 = -1.*t3*t44;
  t90 = t88 + t89;
  t91 = 6.8*t90*t51;
  t92 = 6.8*t46*t51;
  t93 = t3*t58;
  t94 = -1.*t6*t62;
  t95 = t93 + t94;
  t96 = 3.2*t64*t95;
  t97 = -1.*t6*t69;
  t98 = t97 + t63;
  t99 = 3.2*t98*t72;
  t100 = t79 + t80 + t84 + t87 + t91 + t92 + t96 + t99;
  t4 = Power(t3,2);
  t5 = 12.*t4;
  t7 = Power(t6,2);
  t8 = 12.*t7;
  t19 = Power(t18,2);
  t20 = 6.8*t19;
  t52 = Power(t51,2);
  t53 = 6.8*t52;
  t102 = Power(t9,2);
  t103 = 0.11*t102;
  t104 = Power(t11,2);
  t105 = 0.11*t104;
  t106 = t103 + t105;
  t116 = -1.*t115*t29;
  t120 = -1.*t25*t119;
  t121 = t116 + t120;
  t123 = t115*t36;
  t124 = t29*t119;
  t125 = t123 + t124;
  t127 = Power(t42,2);
  t128 = 0.11*t127;
  t129 = Power(t44,2);
  t130 = 0.11*t129;
  t131 = t128 + t130;
  t141 = -1.*t140*t62;
  t145 = -1.*t58*t144;
  t146 = t141 + t145;
  t148 = t140*t69;
  t149 = t62*t144;
  t150 = t148 + t149;
  t159 = t112*t23;
  t160 = -0.24*t21*t23;
  t161 = t159 + t160;
  t154 = t112*t21;
  t155 = Power(t23,2);
  t156 = 0.24*t155;
  t157 = t154 + t156;
  t171 = t137*t56;
  t172 = -0.24*t54*t56;
  t173 = t171 + t172;
  t166 = t137*t54;
  t167 = Power(t56,2);
  t168 = 0.24*t167;
  t169 = t166 + t168;
  t101 = 2.88*t3;
  t107 = 6.8*t18*t106;
  t122 = 3.2*t39*t121;
  t126 = 3.2*t31*t125;
  t132 = 6.8*t51*t131;
  t147 = 3.2*t72*t146;
  t151 = 3.2*t64*t150;
  t152 = t101 + t107 + t122 + t126 + t132 + t147 + t151;
  t190 = -2.88*t6;
  t191 = 6.8*t78*t106;
  t192 = 3.2*t86*t121;
  t193 = 3.2*t83*t125;
  t194 = 6.8*t90*t131;
  t195 = 3.2*t98*t146;
  t196 = 3.2*t95*t150;
  t197 = t190 + t191 + t192 + t193 + t194 + t195 + t196;
  t153 = 0.748*t18;
  t158 = 3.2*t157*t31;
  t162 = 3.2*t161*t39;
  t163 = t153 + t158 + t162;
  t198 = 0.748*t78;
  t199 = 3.2*t161*t86;
  t200 = 3.2*t157*t83;
  t201 = t198 + t199 + t200;
  t221 = 0.748*t106;
  t222 = 3.2*t161*t121;
  t223 = 3.2*t157*t125;
  t224 = 0.67 + t221 + t222 + t223;
  t164 = 0.768*t31;
  t202 = 0.768*t83;
  t225 = 0.768*t125;
  t226 = 0.2 + t225;
  t238 = 0.768*t157;
  t239 = 0.2 + t238;
  t165 = 0.748*t51;
  t170 = 3.2*t169*t64;
  t174 = 3.2*t173*t72;
  t175 = t165 + t170 + t174;
  t203 = 0.748*t90;
  t204 = 3.2*t173*t98;
  t205 = 3.2*t169*t95;
  t206 = t203 + t204 + t205;
  t227 = 0.748*t131;
  t228 = 3.2*t173*t146;
  t229 = 3.2*t169*t150;
  t230 = 0.67 + t227 + t228 + t229;
  t176 = 0.768*t64;
  t207 = 0.768*t95;
  t231 = 0.768*t150;
  t232 = 0.2 + t231;
  t245 = 0.768*t169;
  t246 = 0.2 + t245;
  p_output1[0]=6.8*Power(t13,2) + t20 + 3.2*Power(t31,2) + 3.2*Power(t39,2) + 6.8*Power(t46,2) + t5 + t53 + 3.2*Power(t64,2) + 3.2*Power(t72,2) + t8;
  p_output1[1]=t100;
  p_output1[2]=t152;
  p_output1[3]=t163;
  p_output1[4]=t164;
  p_output1[5]=t175;
  p_output1[6]=t176;
  p_output1[7]=t100;
  p_output1[8]=t20 + t5 + t53 + 6.8*Power(t78,2) + t8 + 3.2*Power(t83,2) + 3.2*Power(t86,2) + 6.8*Power(t90,2) + 3.2*Power(t95,2) + 3.2*Power(t98,2);
  p_output1[9]=t197;
  p_output1[10]=t201;
  p_output1[11]=t202;
  p_output1[12]=t206;
  p_output1[13]=t207;
  p_output1[14]=t152;
  p_output1[15]=t197;
  p_output1[16]=3.3612 + 6.8*Power(t106,2) + 3.2*Power(t121,2) + 3.2*Power(t125,2) + 6.8*Power(t131,2) + 3.2*Power(t146,2) + 3.2*Power(t150,2);
  p_output1[17]=t224;
  p_output1[18]=t226;
  p_output1[19]=t230;
  p_output1[20]=t232;
  p_output1[21]=t163;
  p_output1[22]=t201;
  p_output1[23]=t224;
  p_output1[24]=1.58228 + 3.2*Power(t157,2) + 3.2*Power(t161,2);
  p_output1[25]=t239;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t164;
  p_output1[29]=t202;
  p_output1[30]=t226;
  p_output1[31]=t239;
  p_output1[32]=1.2143199999999998;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t175;
  p_output1[36]=t206;
  p_output1[37]=t230;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.58228 + 3.2*Power(t169,2) + 3.2*Power(t173,2);
  p_output1[41]=t246;
  p_output1[42]=t176;
  p_output1[43]=t207;
  p_output1[44]=t232;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=t246;
  p_output1[48]=1.2143199999999998;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Mmat_five_link_walker.hh"

namespace SymFunction
{

void Mmat_five_link_walker_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
