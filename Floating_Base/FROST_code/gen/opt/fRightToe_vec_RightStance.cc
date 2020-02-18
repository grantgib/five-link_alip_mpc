/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:56:44 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t171;
  double t198;
  double t162;
  double t219;
  double t89;
  double t173;
  double t224;
  double t229;
  double t231;
  double t232;
  double t240;
  double t244;
  double t130;
  double t147;
  double t283;
  double t290;
  double t291;
  double t230;
  double t260;
  double t264;
  double t270;
  double t271;
  double t275;
  double t276;
  double t277;
  double t282;
  double t292;
  double t293;
  double t294;
  double t295;
  double t296;
  double t297;
  double t298;
  double t299;
  double t301;
  double t302;
  double t303;
  t171 = Cos(var1[3]);
  t198 = Sin(var1[2]);
  t162 = Cos(var1[2]);
  t219 = Sin(var1[3]);
  t89 = Cos(var1[4]);
  t173 = t162*t171;
  t224 = -1.*t198*t219;
  t229 = t173 + t224;
  t231 = -1.*t171*t198;
  t232 = -1.*t162*t219;
  t240 = t231 + t232;
  t244 = Sin(var1[4]);
  t130 = -1.*t89;
  t147 = 1. + t130;
  t283 = -1.*t162*t171;
  t290 = t198*t219;
  t291 = t283 + t290;
  t230 = 0.4*t147*t229;
  t260 = -0.4*t240*t244;
  t264 = t89*t229;
  t270 = t240*t244;
  t271 = t264 + t270;
  t275 = 0.8*t271;
  t276 = t230 + t260 + t275;
  t277 = var2[0]*t276;
  t282 = 0.4*t147*t240;
  t292 = -0.4*t291*t244;
  t293 = t89*t240;
  t294 = t291*t244;
  t295 = t293 + t294;
  t296 = 0.8*t295;
  t297 = t282 + t292 + t296;
  t298 = var2[2]*t297;
  t299 = t277 + t298;
  t301 = t171*t198;
  t302 = t162*t219;
  t303 = t301 + t302;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t299;
  p_output1[3]=t299;
  p_output1[4]=(0.4*t244*t303 + 0.8*(t264 - 1.*t244*t303) - 0.4*t229*t89)*var2[0] + (0.4*t229*t244 + 0.8*(-1.*t229*t244 + t293) - 0.4*t240*t89)*var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "fRightToe_vec_RightStance.hh"

namespace RightStance
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
