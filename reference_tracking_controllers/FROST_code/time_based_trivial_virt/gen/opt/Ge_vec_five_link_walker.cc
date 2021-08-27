/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:57:07 GMT-04:00
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
  double t85;
  double t94;
  double t98;
  double t103;
  double t119;
  double t120;
  double t127;
  double t131;
  double t146;
  double t147;
  double t150;
  double t152;
  double t174;
  double t178;
  double t183;
  double t184;
  double t187;
  double t199;
  double t216;
  double t219;
  double t220;
  double t221;
  double t130;
  double t133;
  double t134;
  double t138;
  double t153;
  double t161;
  double t162;
  double t167;
  double t170;
  double t171;
  double t173;
  double t244;
  double t250;
  double t251;
  double t198;
  double t202;
  double t210;
  double t215;
  double t222;
  double t223;
  double t224;
  double t227;
  double t228;
  double t229;
  double t230;
  double t283;
  double t288;
  double t289;
  t85 = Sin(var1[2]);
  t94 = Cos(var1[3]);
  t98 = -1.*t94*t85;
  t103 = Cos(var1[2]);
  t119 = Sin(var1[3]);
  t120 = -1.*t103*t119;
  t127 = t98 + t120;
  t131 = Cos(var1[4]);
  t146 = -1.*t103*t94;
  t147 = t85*t119;
  t150 = t146 + t147;
  t152 = Sin(var1[4]);
  t174 = Cos(var1[5]);
  t178 = -1.*t174*t85;
  t183 = Sin(var1[5]);
  t184 = -1.*t103*t183;
  t187 = t178 + t184;
  t199 = Cos(var1[6]);
  t216 = -1.*t103*t174;
  t219 = t85*t183;
  t220 = t216 + t219;
  t221 = Sin(var1[6]);
  t130 = -7.33788*t127;
  t133 = -1.*t131;
  t134 = 1. + t133;
  t138 = 0.4*t134*t127;
  t153 = -0.4*t150*t152;
  t161 = t131*t127;
  t162 = t150*t152;
  t167 = t161 + t162;
  t170 = 0.64*t167;
  t171 = t138 + t153 + t170;
  t173 = -31.392000000000003*t171;
  t244 = t103*t94;
  t250 = -1.*t85*t119;
  t251 = t244 + t250;
  t198 = -7.33788*t187;
  t202 = -1.*t199;
  t210 = 1. + t202;
  t215 = 0.4*t210*t187;
  t222 = -0.4*t220*t221;
  t223 = t199*t187;
  t224 = t220*t221;
  t227 = t223 + t224;
  t228 = 0.64*t227;
  t229 = t215 + t222 + t228;
  t230 = -31.392000000000003*t229;
  t283 = t103*t174;
  t288 = -1.*t85*t183;
  t289 = t283 + t288;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=t130 + t173 + t198 + t230 + 28.252799999999997*t85;
  p_output1[3]=t130 + t173;
  p_output1[4]=-31.392000000000003*(-0.4*t127*t131 + 0.4*t152*t251 + 0.64*(t161 - 1.*t152*t251));
  p_output1[5]=t198 + t230;
  p_output1[6]=-31.392000000000003*(-0.4*t187*t199 + 0.4*t221*t289 + 0.64*(t223 - 1.*t221*t289));
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

#include "Ge_vec_five_link_walker.hh"

namespace RightStance
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
