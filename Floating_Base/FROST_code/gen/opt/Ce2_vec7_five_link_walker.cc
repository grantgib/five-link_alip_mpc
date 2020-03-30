/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:50 GMT-04:00
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
  double t77;
  double t51;
  double t62;
  double t86;
  double t97;
  double t73;
  double t87;
  double t91;
  double t35;
  double t123;
  double t127;
  double t128;
  double t131;
  double t132;
  double t140;
  double t141;
  double t142;
  double t145;
  double t146;
  double t149;
  double t161;
  double t96;
  double t100;
  double t108;
  double t109;
  double t117;
  double t118;
  double t3161;
  double t3177;
  double t3211;
  double t3357;
  double t3385;
  double t4877;
  double t7449;
  double t7456;
  double t7747;
  double t7751;
  double t7759;
  double t7808;
  double t7820;
  double t7856;
  double t7983;
  double t8052;
  double t8076;
  double t8086;
  double t8092;
  double t7476;
  double t7550;
  double t7586;
  double t162;
  double t2760;
  double t3058;
  double t7109;
  double t7217;
  double t135;
  double t136;
  double t139;
  double t153;
  double t154;
  double t157;
  double t4935;
  double t5751;
  double t5803;
  double t7281;
  double t7467;
  double t7619;
  double t7629;
  double t7735;
  double t7787;
  double t7900;
  double t7903;
  double t8077;
  double t8078;
  double t8085;
  double t8093;
  double t8094;
  double t8096;
  double t8097;
  double t8119;
  double t8158;
  double t8159;
  double t8165;
  double t8214;
  double t8216;
  double t9340;
  double t9398;
  double t9757;
  double t9859;
  double t10004;
  double t7970;
  double t8095;
  double t8130;
  double t8284;
  double t8288;
  double t8474;
  double t8754;
  double t8755;
  double t8759;
  double t8805;
  double t150;
  double t158;
  double t4885;
  double t6752;
  double t6761;
  double t10052;
  double t10291;
  double t10392;
  double t10403;
  double t10410;
  t77 = Cos(var1[5]);
  t51 = Cos(var1[6]);
  t62 = Sin(var1[5]);
  t86 = Sin(var1[6]);
  t97 = Sin(var1[2]);
  t73 = -1.*t51*t62;
  t87 = -1.*t77*t86;
  t91 = t73 + t87;
  t35 = Cos(var1[2]);
  t123 = -1.*t51;
  t127 = 1. + t123;
  t128 = 0.4*t127;
  t131 = 0.64*t51;
  t132 = t128 + t131;
  t140 = t97*t91;
  t141 = t77*t51;
  t142 = -1.*t62*t86;
  t145 = t141 + t142;
  t146 = t35*t145;
  t149 = t140 + t146;
  t161 = t132*t51;
  t96 = t35*t91;
  t100 = -1.*t77*t51;
  t108 = t62*t86;
  t109 = t100 + t108;
  t117 = t97*t109;
  t118 = t96 + t117;
  t3161 = t51*t62;
  t3177 = t77*t86;
  t3211 = t3161 + t3177;
  t3357 = t35*t3211;
  t3385 = t97*t145;
  t4877 = t3357 + t3385;
  t7449 = -1.*t97*t145;
  t7456 = t96 + t7449;
  t7747 = t132*t62;
  t7751 = 0.24*t77*t86;
  t7759 = t7747 + t7751;
  t7808 = t77*t132;
  t7820 = -0.24*t62*t86;
  t7856 = t7808 + t7820;
  t7983 = -0.24*t51*t62;
  t8052 = -0.24*t77*t86;
  t8076 = t7983 + t8052;
  t8086 = 0.24*t77*t51;
  t8092 = t8086 + t7820;
  t7476 = -1.*t97*t91;
  t7550 = t35*t109;
  t7586 = t7476 + t7550;
  t162 = Power(t51,2);
  t2760 = -0.24*t162;
  t3058 = t161 + t2760;
  t7109 = -1.*t97*t3211;
  t7217 = t7109 + t146;
  t135 = t132*t86;
  t136 = -0.24*t51*t86;
  t139 = t135 + t136;
  t153 = -1.*t132*t86;
  t154 = 0.24*t51*t86;
  t157 = t153 + t154;
  t4935 = Power(t86,2);
  t5751 = 0.24*t4935;
  t5803 = t161 + t5751;
  t7281 = 3.2*t149*t7217;
  t7467 = 3.2*t7456*t4877;
  t7619 = 3.2*t149*t7586;
  t7629 = 3.2*t7456*t118;
  t7735 = t7281 + t7467 + t7619 + t7629;
  t7787 = -1.*t7759*t145;
  t7900 = -1.*t91*t7856;
  t7903 = t7787 + t7900;
  t8077 = t8076*t145;
  t8078 = t7759*t145;
  t8085 = t91*t7856;
  t8093 = t3211*t8092;
  t8094 = t8077 + t8078 + t8085 + t8093;
  t8096 = t7759*t3211;
  t8097 = t145*t7856;
  t8119 = t8096 + t8097;
  t8158 = -1.*t91*t8076;
  t8159 = -1.*t91*t7759;
  t8165 = -1.*t145*t8092;
  t8214 = -1.*t7856*t109;
  t8216 = t8158 + t8159 + t8165 + t8214;
  t9340 = 3.2*t7456*t7903;
  t9398 = 3.2*t7456*t8094;
  t9757 = 3.2*t8119*t7586;
  t9859 = 3.2*t7217*t8216;
  t10004 = t9340 + t9398 + t9757 + t9859;
  t7970 = 3.2*t149*t7903;
  t8095 = 3.2*t149*t8094;
  t8130 = 3.2*t8119*t118;
  t8284 = 3.2*t4877*t8216;
  t8288 = t7970 + t8095 + t8130 + t8284;
  t8474 = 3.2*t3058*t7217;
  t8754 = 3.2*t139*t7456;
  t8755 = 3.2*t157*t7456;
  t8759 = 3.2*t5803*t7586;
  t8805 = t8474 + t8754 + t8755 + t8759;
  t150 = 3.2*t139*t149;
  t158 = 3.2*t157*t149;
  t4885 = 3.2*t3058*t4877;
  t6752 = 3.2*t5803*t118;
  t6761 = t150 + t158 + t4885 + t6752;
  t10052 = 3.2*t3058*t7903;
  t10291 = 3.2*t157*t8119;
  t10392 = 3.2*t5803*t8094;
  t10403 = 3.2*t139*t8216;
  t10410 = t10052 + t10291 + t10392 + t10403;
  p_output1[0]=var2[6]*(-0.5*(6.4*t118*t149 + 6.4*t149*t4877)*var2[0] - 0.5*t7735*var2[1] - 0.5*t8288*var2[2] - 0.5*t6761*var2[5] - 0.384*t118*var2[6]);
  p_output1[1]=var2[6]*(-0.5*t7735*var2[0] - 0.5*(6.4*t7217*t7456 + 6.4*t7456*t7586)*var2[1] - 0.5*t10004*var2[2] - 0.5*t8805*var2[5] - 0.384*t7586*var2[6]);
  p_output1[2]=var2[6]*(-0.5*t8288*var2[0] - 0.5*t10004*var2[1] - 0.5*(6.4*t8094*t8119 + 6.4*t7903*t8216)*var2[2] - 0.5*t10410*var2[5] - 0.384*t8094*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[6]*(-0.5*t6761*var2[0] - 0.5*t8805*var2[1] - 0.5*t10410*var2[2] - 0.5*(6.4*t139*t3058 + 6.4*t157*t5803)*var2[5] - 0.384*t157*var2[6]);
  p_output1[6]=(-0.384*t118*var2[0] - 0.384*t7586*var2[1] - 0.384*t8094*var2[2] - 0.384*t157*var2[5])*var2[6];
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

#include "Ce2_vec7_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
