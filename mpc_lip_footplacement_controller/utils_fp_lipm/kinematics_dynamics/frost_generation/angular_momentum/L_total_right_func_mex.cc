/*
 * Automatically Generated from Mathematica.
 * Thu 19 Aug 2021 18:03:23 GMT-04:00
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
  double t13;
  double t39;
  double t41;
  double t42;
  double t22;
  double t40;
  double t43;
  double t44;
  double t47;
  double t48;
  double t49;
  double t50;
  double t32;
  double t36;
  double t37;
  double t38;
  double t51;
  double t52;
  double t67;
  double t70;
  double t71;
  double t45;
  double t53;
  double t54;
  double t55;
  double t56;
  double t58;
  double t72;
  double t73;
  double t74;
  double t75;
  double t77;
  double t78;
  double t106;
  double t107;
  double t108;
  double t109;
  double t127;
  double t134;
  double t135;
  double t136;
  double t133;
  double t137;
  double t138;
  double t139;
  double t140;
  double t141;
  double t148;
  double t149;
  double t150;
  double t151;
  double t152;
  double t162;
  double t163;
  double t164;
  double t173;
  double t180;
  double t175;
  double t176;
  double t177;
  double t178;
  double t179;
  double t182;
  double t183;
  double t184;
  double t185;
  double t186;
  double t187;
  double t188;
  double t190;
  double t156;
  double t157;
  double t158;
  double t211;
  double t218;
  double t219;
  double t220;
  double t217;
  double t221;
  double t222;
  double t223;
  double t224;
  double t225;
  t13 = Cos(var1[2]);
  t39 = Cos(var1[3]);
  t41 = Sin(var1[2]);
  t42 = Sin(var1[3]);
  t22 = Cos(var1[4]);
  t40 = t13*t39;
  t43 = -1.*t41*t42;
  t44 = t40 + t43;
  t47 = -1.*t39*t41;
  t48 = -1.*t13*t42;
  t49 = t47 + t48;
  t50 = Sin(var1[4]);
  t32 = -1.*t22;
  t36 = 1. + t32;
  t37 = 0.4*t36;
  t38 = 0. + t37;
  t51 = -0.4*t50;
  t52 = 0. + t51;
  t67 = t39*t41;
  t70 = t13*t42;
  t71 = t67 + t70;
  t45 = -1.*t38*t44;
  t53 = -1.*t49*t52;
  t54 = t22*t44;
  t55 = t49*t50;
  t56 = t54 + t55;
  t58 = -0.8*t56;
  t72 = t38*t71;
  t73 = t44*t52;
  t74 = t22*t71;
  t75 = t44*t50;
  t77 = t74 + t75;
  t78 = 0.8*t77;
  t106 = t38*t44;
  t107 = t49*t52;
  t108 = 0.64*t56;
  t109 = t106 + t107 + t108;
  t127 = t22*t49;
  t134 = -1.*t13*t39;
  t135 = t41*t42;
  t136 = t134 + t135;
  t133 = t38*t49;
  t137 = t136*t52;
  t138 = t136*t50;
  t139 = t127 + t138;
  t140 = 0.64*t139;
  t141 = t133 + t137 + t140;
  t148 = Cos(var1[5]);
  t149 = -1.*t148*t41;
  t150 = Sin(var1[5]);
  t151 = -1.*t13*t150;
  t152 = t149 + t151;
  t162 = t13*t148;
  t163 = -1.*t41*t150;
  t164 = t162 + t163;
  t173 = Cos(var1[6]);
  t180 = Sin(var1[6]);
  t175 = -1.*t173;
  t176 = 1. + t175;
  t177 = 0.4*t176;
  t178 = 0. + t177;
  t179 = t178*t164;
  t182 = -0.4*t180;
  t183 = 0. + t182;
  t184 = t152*t183;
  t185 = t173*t164;
  t186 = t152*t180;
  t187 = t185 + t186;
  t188 = 0.64*t187;
  t190 = t179 + t184 + t188;
  t156 = t148*t41;
  t157 = t13*t150;
  t158 = t156 + t157;
  t211 = t173*t152;
  t218 = -1.*t13*t148;
  t219 = t41*t150;
  t220 = t218 + t219;
  t217 = t178*t152;
  t221 = t220*t183;
  t222 = t220*t180;
  t223 = t211 + t222;
  t224 = 0.64*t223;
  t225 = t217 + t221 + t224;
  p_output1[0]=0. + 1.33*var1[9] + 12.*((0. + 0.24*t13 + t45 + t53 + t58)*(var1[7] + 0.24*t13*var1[9]) + (0. - 0.24*t41 + t72 + t73 + t78)*(var1[8] - 0.24*t41*var1[9])) + 0.47*(var1[9] + var1[10]) + 6.8*((0. + 0.11*t44 + t45 + t53 + t58)*(var1[7] + 0.11*t44*var1[9] + 0.11*t44*var1[10]) + (0. - 0.11*t71 + t72 + t73 + t78)*(var1[8] + 0.11*t49*var1[9] + 0.11*t49*var1[10])) + 0.2*(0. + var1[9] + var1[10] + var1[11]) + 3.2*((0. + 0.16000000000000003*t77)*(var1[8] + t141*var1[9] + t141*var1[10] + (-0.4*t22*t49 + 0.4*t44*t50 + 0.64*(t127 - 1.*t44*t50))*var1[11]) + (0. - 0.16000000000000003*t56)*(var1[7] + t109*var1[9] + t109*var1[10] + (-0.4*t22*t44 + 0.4*t50*t71 + 0.64*(t54 - 1.*t50*t71))*var1[11])) + 0.47*(var1[9] + var1[12]) + 6.8*((0. - 0.11*t158 + t72 + t73 + t78)*(var1[8] + 0.11*t152*var1[9] + 0.11*t152*var1[12]) + (0. + 0.11*t164 + t45 + t53 + t58)*(var1[7] + 0.11*t164*var1[9] + 0.11*t164*var1[12])) + 0.2*(0. + var1[9] + var1[12] + var1[13]) + 3.2*((0. + t179 + t184 + t188 + t45 + t53 + t58)*(var1[7] + t190*var1[9] + t190*var1[12] + (-0.4*t164*t173 + 0.4*t158*t180 + 0.64*(-1.*t158*t180 + t185))*var1[13]) + (0. - 1.*t158*t178 - 0.64*(t158*t173 + t164*t180) - 1.*t164*t183 + t72 + t73 + t78)*(var1[8] + t225*var1[9] + t225*var1[12] + (-0.4*t152*t173 + 0.4*t164*t180 + 0.64*(-1.*t164*t180 + t211))*var1[13]));
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

#include "L_total_right_func_mex.hh"

namespace SymExpression
{

void L_total_right_func_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
