/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:20:47 GMT-05:00
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
  double t178;
  double t180;
  double t177;
  double t181;
  double t12;
  double t179;
  double t182;
  double t183;
  double t197;
  double t201;
  double t206;
  double t208;
  double t149;
  double t175;
  double t216;
  double t217;
  double t218;
  double t186;
  double t209;
  double t210;
  double t211;
  double t212;
  double t213;
  double t214;
  double t215;
  double t219;
  double t220;
  double t233;
  double t234;
  double t235;
  double t236;
  double t240;
  double t241;
  double t242;
  t178 = Cos(var1[3]);
  t180 = Sin(var1[2]);
  t177 = Cos(var1[2]);
  t181 = Sin(var1[3]);
  t12 = Cos(var1[4]);
  t179 = t177*t178;
  t182 = -1.*t180*t181;
  t183 = t179 + t182;
  t197 = -1.*t178*t180;
  t201 = -1.*t177*t181;
  t206 = t197 + t201;
  t208 = Sin(var1[4]);
  t149 = -1.*t12;
  t175 = 1. + t149;
  t216 = -1.*t177*t178;
  t217 = t180*t181;
  t218 = t216 + t217;
  t186 = 0.4*t175*t183;
  t209 = -0.4*t206*t208;
  t210 = t12*t183;
  t211 = t206*t208;
  t212 = t210 + t211;
  t213 = 0.8*t212;
  t214 = t186 + t209 + t213;
  t215 = 0.4*t175*t206;
  t219 = -0.4*t218*t208;
  t220 = t12*t206;
  t233 = t218*t208;
  t234 = t220 + t233;
  t235 = 0.8*t234;
  t236 = t215 + t219 + t235;
  t240 = t178*t180;
  t241 = t177*t181;
  t242 = t240 + t241;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t214;
  p_output1[7]=0;
  p_output1[8]=t236;
  p_output1[9]=t214;
  p_output1[10]=0;
  p_output1[11]=t236;
  p_output1[12]=-0.4*t12*t183 + 0.4*t208*t242 + 0.8*(t210 - 1.*t208*t242);
  p_output1[13]=0;
  p_output1[14]=-0.4*t12*t206 + 0.4*t183*t208 + 0.8*(-1.*t183*t208 + t220);
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
