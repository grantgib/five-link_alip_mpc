/*
 * Automatically Generated from Mathematica.
 * Thu 19 Aug 2021 18:03:22 GMT-04:00
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
  double t12;
  double t21;
  double t23;
  double t24;
  double t16;
  double t22;
  double t25;
  double t26;
  double t28;
  double t29;
  double t30;
  double t31;
  double t17;
  double t18;
  double t19;
  double t20;
  double t32;
  double t33;
  double t44;
  double t45;
  double t46;
  double t57;
  double t58;
  double t59;
  double t60;
  double t61;
  double t27;
  double t34;
  double t35;
  double t36;
  double t37;
  double t38;
  double t68;
  double t69;
  double t70;
  double t47;
  double t48;
  double t49;
  double t50;
  double t51;
  double t52;
  double t82;
  double t88;
  double t83;
  double t84;
  double t85;
  double t86;
  double t87;
  double t89;
  double t90;
  double t91;
  double t92;
  double t93;
  double t94;
  double t95;
  double t96;
  double t74;
  double t75;
  double t76;
  double t111;
  double t118;
  double t119;
  double t120;
  double t117;
  double t121;
  double t122;
  double t123;
  double t124;
  double t125;
  double t155;
  double t156;
  double t157;
  double t158;
  double t174;
  double t181;
  double t182;
  double t183;
  double t180;
  double t184;
  double t185;
  double t186;
  double t187;
  double t188;
  t12 = Cos(var1[2]);
  t21 = Cos(var1[5]);
  t23 = Sin(var1[2]);
  t24 = Sin(var1[5]);
  t16 = Cos(var1[6]);
  t22 = t12*t21;
  t25 = -1.*t23*t24;
  t26 = t22 + t25;
  t28 = -1.*t21*t23;
  t29 = -1.*t12*t24;
  t30 = t28 + t29;
  t31 = Sin(var1[6]);
  t17 = -1.*t16;
  t18 = 1. + t17;
  t19 = 0.4*t18;
  t20 = 0. + t19;
  t32 = -0.4*t31;
  t33 = 0. + t32;
  t44 = t21*t23;
  t45 = t12*t24;
  t46 = t44 + t45;
  t57 = Cos(var1[3]);
  t58 = t12*t57;
  t59 = Sin(var1[3]);
  t60 = -1.*t23*t59;
  t61 = t58 + t60;
  t27 = -1.*t20*t26;
  t34 = -1.*t30*t33;
  t35 = t16*t26;
  t36 = t30*t31;
  t37 = t35 + t36;
  t38 = -0.8*t37;
  t68 = -1.*t57*t23;
  t69 = -1.*t12*t59;
  t70 = t68 + t69;
  t47 = t20*t46;
  t48 = t26*t33;
  t49 = t16*t46;
  t50 = t26*t31;
  t51 = t49 + t50;
  t52 = 0.8*t51;
  t82 = Cos(var1[4]);
  t88 = Sin(var1[4]);
  t83 = -1.*t82;
  t84 = 1. + t83;
  t85 = 0.4*t84;
  t86 = 0. + t85;
  t87 = t86*t61;
  t89 = -0.4*t88;
  t90 = 0. + t89;
  t91 = t70*t90;
  t92 = t82*t61;
  t93 = t70*t88;
  t94 = t92 + t93;
  t95 = 0.64*t94;
  t96 = t87 + t91 + t95;
  t74 = t57*t23;
  t75 = t12*t59;
  t76 = t74 + t75;
  t111 = t82*t70;
  t118 = -1.*t12*t57;
  t119 = t23*t59;
  t120 = t118 + t119;
  t117 = t86*t70;
  t121 = t120*t90;
  t122 = t120*t88;
  t123 = t111 + t122;
  t124 = 0.64*t123;
  t125 = t117 + t121 + t124;
  t155 = t20*t26;
  t156 = t30*t33;
  t157 = 0.64*t37;
  t158 = t155 + t156 + t157;
  t174 = t16*t30;
  t181 = -1.*t12*t21;
  t182 = t23*t24;
  t183 = t181 + t182;
  t180 = t20*t30;
  t184 = t183*t33;
  t185 = t183*t31;
  t186 = t174 + t185;
  t187 = 0.64*t186;
  t188 = t180 + t184 + t187;
  p_output1[0]=0. + 1.33*var1[9] + 12.*((0. + 0.24*t12 + t27 + t34 + t38)*(var1[7] + 0.24*t12*var1[9]) + (0. - 0.24*t23 + t47 + t48 + t52)*(var1[8] - 0.24*t23*var1[9])) + 0.47*(var1[9] + var1[10]) + 6.8*((0. + t27 + t34 + t38 + 0.11*t61)*(var1[7] + 0.11*t61*var1[9] + 0.11*t61*var1[10]) + (0. + t47 + t48 + t52 - 0.11*t76)*(var1[8] + 0.11*t70*var1[9] + 0.11*t70*var1[10])) + 0.2*(0. + var1[9] + var1[10] + var1[11]) + 3.2*((0. + t47 + t48 + t52 - 1.*t76*t86 - 0.64*(t76*t82 + t61*t88) - 1.*t61*t90)*(var1[8] + t125*var1[9] + t125*var1[10] + (-0.4*t70*t82 + 0.4*t61*t88 + 0.64*(t111 - 1.*t61*t88))*var1[11]) + (0. + t27 + t34 + t38 + t87 + t91 + t95)*(var1[7] + t96*var1[9] + t96*var1[10] + (-0.4*t61*t82 + 0.4*t76*t88 + 0.64*(-1.*t76*t88 + t92))*var1[11])) + 0.47*(var1[9] + var1[12]) + 6.8*((0. + 0.11*t26 + t27 + t34 + t38)*(var1[7] + 0.11*t26*var1[9] + 0.11*t26*var1[12]) + (0. - 0.11*t46 + t47 + t48 + t52)*(var1[8] + 0.11*t30*var1[9] + 0.11*t30*var1[12])) + 0.2*(0. + var1[9] + var1[12] + var1[13]) + 3.2*((0. + 0.16000000000000003*t51)*(var1[8] + t188*var1[9] + t188*var1[12] + (-0.4*t16*t30 + 0.4*t26*t31 + 0.64*(t174 - 1.*t26*t31))*var1[13]) + (0. - 0.16000000000000003*t37)*(var1[7] + t158*var1[9] + t158*var1[12] + (-0.4*t16*t26 + 0.4*t31*t46 + 0.64*(t35 - 1.*t31*t46))*var1[13]));
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "L_total_left_func_mex.hh"

namespace SymExpression
{

void L_total_left_func_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
