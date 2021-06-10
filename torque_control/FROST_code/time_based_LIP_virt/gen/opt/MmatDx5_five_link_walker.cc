/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:02:34 GMT-05:00
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
  double t131;
  double t124;
  double t127;
  double t133;
  double t116;
  double t130;
  double t136;
  double t137;
  double t138;
  double t139;
  double t140;
  double t141;
  double t142;
  double t143;
  double t145;
  double t147;
  double t148;
  double t149;
  double t151;
  double t152;
  double t166;
  double t167;
  double t168;
  double t169;
  double t170;
  double t171;
  double t196;
  double t197;
  double t198;
  double t200;
  double t201;
  double t202;
  double t177;
  double t178;
  double t181;
  double t161;
  double t163;
  double t164;
  double t183;
  double t184;
  double t154;
  double t155;
  double t157;
  double t158;
  double t182;
  double t185;
  double t186;
  double t199;
  double t203;
  double t205;
  double t207;
  double t209;
  double t210;
  double t206;
  double t211;
  double t213;
  double t229;
  double t230;
  double t231;
  double t217;
  double t218;
  double t219;
  double t160;
  double t172;
  double t173;
  double t237;
  double t238;
  double t239;
  double t250;
  double t251;
  double t234;
  double t235;
  t131 = Cos(var1[5]);
  t124 = Cos(var1[6]);
  t127 = Sin(var1[5]);
  t133 = Sin(var1[6]);
  t116 = Sin(var1[2]);
  t130 = -1.*t124*t127;
  t136 = -1.*t131*t133;
  t137 = t130 + t136;
  t138 = t116*t137;
  t139 = Cos(var1[2]);
  t140 = t131*t124;
  t141 = -1.*t127*t133;
  t142 = t140 + t141;
  t143 = t139*t142;
  t145 = t138 + t143;
  t147 = -1.*t124;
  t148 = 1. + t147;
  t149 = 0.4*t148;
  t151 = 0.64*t124;
  t152 = t149 + t151;
  t166 = t124*t127;
  t167 = t131*t133;
  t168 = t166 + t167;
  t169 = t139*t168;
  t170 = t116*t142;
  t171 = t169 + t170;
  t196 = t152*t127;
  t197 = 0.24*t131*t133;
  t198 = t196 + t197;
  t200 = t131*t152;
  t201 = -0.24*t127*t133;
  t202 = t200 + t201;
  t177 = t139*t137;
  t178 = -1.*t116*t142;
  t181 = t177 + t178;
  t161 = t152*t133;
  t163 = -0.24*t124*t133;
  t164 = t161 + t163;
  t183 = -1.*t116*t168;
  t184 = t183 + t143;
  t154 = t152*t124;
  t155 = Power(t133,2);
  t157 = 0.24*t155;
  t158 = t154 + t157;
  t182 = 3.2*t145*t181;
  t185 = 3.2*t184*t171;
  t186 = t182 + t185;
  t199 = -1.*t198*t142;
  t203 = -1.*t137*t202;
  t205 = t199 + t203;
  t207 = t198*t168;
  t209 = t142*t202;
  t210 = t207 + t209;
  t206 = 3.2*t171*t205;
  t211 = 3.2*t145*t210;
  t213 = t206 + t211;
  t229 = 3.2*t184*t205;
  t230 = 3.2*t181*t210;
  t231 = t229 + t230;
  t217 = 3.2*t164*t184;
  t218 = 3.2*t158*t181;
  t219 = t217 + t218;
  t160 = 3.2*t158*t145;
  t172 = 3.2*t164*t171;
  t173 = t160 + t172;
  t237 = 3.2*t164*t205;
  t238 = 3.2*t158*t210;
  t239 = 0.2 + t237 + t238;
  t250 = 0.768*t158;
  t251 = 0.2 + t250;
  t234 = 0.768*t210;
  t235 = 0.2 + t234;
  p_output1[0]=-1.*(3.2*Power(t145,2) + 3.2*Power(t171,2))*var2[0] - 1.*t186*var2[1] - 1.*t213*var2[2] - 1.*t173*var2[5] - 0.768*t145*var2[6];
  p_output1[1]=-1.*t186*var2[0] - 1.*(3.2*Power(t181,2) + 3.2*Power(t184,2))*var2[1] - 1.*t231*var2[2] - 1.*t219*var2[5] - 0.768*t181*var2[6];
  p_output1[2]=-1.*t213*var2[0] - 1.*t231*var2[1] - 1.*(0.2 + 3.2*Power(t205,2) + 3.2*Power(t210,2))*var2[2] - 1.*t239*var2[5] - 1.*t235*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-1.*t173*var2[0] - 1.*t219*var2[1] - 1.*t239*var2[2] - 1.*(0.2 + 3.2*Power(t158,2) + 3.2*Power(t164,2))*var2[5] - 1.*t251*var2[6];
  p_output1[6]=-0.768*t145*var2[0] - 0.768*t181*var2[1] - 1.*t235*var2[2] - 1.*t251*var2[5] - 0.38432*var2[6];
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

#include "MmatDx5_five_link_walker.hh"

namespace RightStance
{

void MmatDx5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
