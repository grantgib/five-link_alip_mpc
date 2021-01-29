/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:26:54 GMT-05:00
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
  double t179;
  double t181;
  double t178;
  double t182;
  double t14;
  double t180;
  double t183;
  double t184;
  double t201;
  double t206;
  double t208;
  double t209;
  double t152;
  double t177;
  double t217;
  double t218;
  double t219;
  double t187;
  double t210;
  double t211;
  double t212;
  double t213;
  double t214;
  double t215;
  double t216;
  double t220;
  double t233;
  double t234;
  double t235;
  double t236;
  double t237;
  double t241;
  double t242;
  double t243;
  t179 = Cos(var1[3]);
  t181 = Sin(var1[2]);
  t178 = Cos(var1[2]);
  t182 = Sin(var1[3]);
  t14 = Cos(var1[4]);
  t180 = t178*t179;
  t183 = -1.*t181*t182;
  t184 = t180 + t183;
  t201 = -1.*t179*t181;
  t206 = -1.*t178*t182;
  t208 = t201 + t206;
  t209 = Sin(var1[4]);
  t152 = -1.*t14;
  t177 = 1. + t152;
  t217 = -1.*t178*t179;
  t218 = t181*t182;
  t219 = t217 + t218;
  t187 = 0.4*t177*t184;
  t210 = -0.4*t208*t209;
  t211 = t14*t184;
  t212 = t208*t209;
  t213 = t211 + t212;
  t214 = 0.8*t213;
  t215 = t187 + t210 + t214;
  t216 = 0.4*t177*t208;
  t220 = -0.4*t219*t209;
  t233 = t14*t208;
  t234 = t219*t209;
  t235 = t233 + t234;
  t236 = 0.8*t235;
  t237 = t216 + t220 + t236;
  t241 = t179*t181;
  t242 = t178*t182;
  t243 = t241 + t242;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t215;
  p_output1[7]=0;
  p_output1[8]=t237;
  p_output1[9]=t215;
  p_output1[10]=0;
  p_output1[11]=t237;
  p_output1[12]=-0.4*t14*t184 + 0.4*t209*t243 + 0.8*(t211 - 1.*t209*t243);
  p_output1[13]=0;
  p_output1[14]=-0.4*t14*t208 + 0.4*t184*t209 + 0.8*(-1.*t184*t209 + t233);
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RightToe_RightStance.hh"

namespace SymFunction
{

void Jh_RightToe_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
