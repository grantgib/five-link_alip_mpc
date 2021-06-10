/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:02:33 GMT-05:00
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
  double t108;
  double t97;
  double t98;
  double t111;
  double t89;
  double t101;
  double t112;
  double t115;
  double t116;
  double t124;
  double t127;
  double t128;
  double t129;
  double t130;
  double t131;
  double t134;
  double t135;
  double t136;
  double t137;
  double t138;
  double t148;
  double t149;
  double t150;
  double t151;
  double t152;
  double t154;
  double t173;
  double t174;
  double t175;
  double t177;
  double t178;
  double t179;
  double t158;
  double t159;
  double t160;
  double t145;
  double t146;
  double t147;
  double t162;
  double t163;
  double t139;
  double t140;
  double t141;
  double t142;
  double t161;
  double t164;
  double t165;
  double t176;
  double t180;
  double t181;
  double t183;
  double t184;
  double t185;
  double t182;
  double t186;
  double t187;
  double t202;
  double t203;
  double t204;
  double t191;
  double t192;
  double t193;
  double t143;
  double t155;
  double t156;
  double t210;
  double t211;
  double t212;
  double t223;
  double t224;
  double t207;
  double t208;
  t108 = Cos(var1[3]);
  t97 = Cos(var1[4]);
  t98 = Sin(var1[3]);
  t111 = Sin(var1[4]);
  t89 = Sin(var1[2]);
  t101 = -1.*t97*t98;
  t112 = -1.*t108*t111;
  t115 = t101 + t112;
  t116 = t89*t115;
  t124 = Cos(var1[2]);
  t127 = t108*t97;
  t128 = -1.*t98*t111;
  t129 = t127 + t128;
  t130 = t124*t129;
  t131 = t116 + t130;
  t134 = -1.*t97;
  t135 = 1. + t134;
  t136 = 0.4*t135;
  t137 = 0.64*t97;
  t138 = t136 + t137;
  t148 = t97*t98;
  t149 = t108*t111;
  t150 = t148 + t149;
  t151 = t124*t150;
  t152 = t89*t129;
  t154 = t151 + t152;
  t173 = t138*t98;
  t174 = 0.24*t108*t111;
  t175 = t173 + t174;
  t177 = t108*t138;
  t178 = -0.24*t98*t111;
  t179 = t177 + t178;
  t158 = t124*t115;
  t159 = -1.*t89*t129;
  t160 = t158 + t159;
  t145 = t138*t111;
  t146 = -0.24*t97*t111;
  t147 = t145 + t146;
  t162 = -1.*t89*t150;
  t163 = t162 + t130;
  t139 = t138*t97;
  t140 = Power(t111,2);
  t141 = 0.24*t140;
  t142 = t139 + t141;
  t161 = 3.2*t131*t160;
  t164 = 3.2*t163*t154;
  t165 = t161 + t164;
  t176 = -1.*t175*t129;
  t180 = -1.*t115*t179;
  t181 = t176 + t180;
  t183 = t175*t150;
  t184 = t129*t179;
  t185 = t183 + t184;
  t182 = 3.2*t154*t181;
  t186 = 3.2*t131*t185;
  t187 = t182 + t186;
  t202 = 3.2*t163*t181;
  t203 = 3.2*t160*t185;
  t204 = t202 + t203;
  t191 = 3.2*t147*t163;
  t192 = 3.2*t142*t160;
  t193 = t191 + t192;
  t143 = 3.2*t142*t131;
  t155 = 3.2*t147*t154;
  t156 = t143 + t155;
  t210 = 3.2*t147*t181;
  t211 = 3.2*t142*t185;
  t212 = 0.2 + t210 + t211;
  t223 = 0.768*t142;
  t224 = 0.2 + t223;
  t207 = 0.768*t185;
  t208 = 0.2 + t207;
  p_output1[0]=-1.*(3.2*Power(t131,2) + 3.2*Power(t154,2))*var2[0] - 1.*t165*var2[1] - 1.*t187*var2[2] - 1.*t156*var2[3] - 0.768*t131*var2[4];
  p_output1[1]=-1.*t165*var2[0] - 1.*(3.2*Power(t160,2) + 3.2*Power(t163,2))*var2[1] - 1.*t204*var2[2] - 1.*t193*var2[3] - 0.768*t160*var2[4];
  p_output1[2]=-1.*t187*var2[0] - 1.*t204*var2[1] - 1.*(0.2 + 3.2*Power(t181,2) + 3.2*Power(t185,2))*var2[2] - 1.*t212*var2[3] - 1.*t208*var2[4];
  p_output1[3]=-1.*t156*var2[0] - 1.*t193*var2[1] - 1.*t212*var2[2] - 1.*(0.2 + 3.2*Power(t142,2) + 3.2*Power(t147,2))*var2[3] - 1.*t224*var2[4];
  p_output1[4]=-0.768*t131*var2[0] - 0.768*t160*var2[1] - 1.*t208*var2[2] - 1.*t224*var2[3] - 0.38432*var2[4];
  p_output1[5]=0;
  p_output1[6]=0;
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

#include "MmatDx4_five_link_walker.hh"

namespace RightStance
{

void MmatDx4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
