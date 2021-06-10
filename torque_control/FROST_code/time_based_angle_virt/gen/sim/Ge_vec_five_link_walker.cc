/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:34:34 GMT-05:00
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
  double t1077;
  double t2463;
  double t2671;
  double t2875;
  double t5255;
  double t5257;
  double t5262;
  double t5264;
  double t5280;
  double t5281;
  double t5282;
  double t5283;
  double t5296;
  double t5297;
  double t5307;
  double t5308;
  double t5311;
  double t5314;
  double t5319;
  double t5321;
  double t5322;
  double t5323;
  double t5263;
  double t5274;
  double t5275;
  double t5278;
  double t5285;
  double t5286;
  double t5288;
  double t5289;
  double t5291;
  double t5293;
  double t5295;
  double t5390;
  double t5396;
  double t5397;
  double t5313;
  double t5315;
  double t5316;
  double t5318;
  double t5329;
  double t5341;
  double t5348;
  double t5360;
  double t5361;
  double t5365;
  double t5371;
  double t5426;
  double t5427;
  double t5428;
  t1077 = Sin(var1[2]);
  t2463 = Cos(var1[3]);
  t2671 = -1.*t2463*t1077;
  t2875 = Cos(var1[2]);
  t5255 = Sin(var1[3]);
  t5257 = -1.*t2875*t5255;
  t5262 = t2671 + t5257;
  t5264 = Cos(var1[4]);
  t5280 = -1.*t2875*t2463;
  t5281 = t1077*t5255;
  t5282 = t5280 + t5281;
  t5283 = Sin(var1[4]);
  t5296 = Cos(var1[5]);
  t5297 = -1.*t5296*t1077;
  t5307 = Sin(var1[5]);
  t5308 = -1.*t2875*t5307;
  t5311 = t5297 + t5308;
  t5314 = Cos(var1[6]);
  t5319 = -1.*t2875*t5296;
  t5321 = t1077*t5307;
  t5322 = t5319 + t5321;
  t5323 = Sin(var1[6]);
  t5263 = -7.33788*t5262;
  t5274 = -1.*t5264;
  t5275 = 1. + t5274;
  t5278 = 0.4*t5275*t5262;
  t5285 = -0.4*t5282*t5283;
  t5286 = t5264*t5262;
  t5288 = t5282*t5283;
  t5289 = t5286 + t5288;
  t5291 = 0.64*t5289;
  t5293 = t5278 + t5285 + t5291;
  t5295 = -31.392000000000003*t5293;
  t5390 = t2875*t2463;
  t5396 = -1.*t1077*t5255;
  t5397 = t5390 + t5396;
  t5313 = -7.33788*t5311;
  t5315 = -1.*t5314;
  t5316 = 1. + t5315;
  t5318 = 0.4*t5316*t5311;
  t5329 = -0.4*t5322*t5323;
  t5341 = t5314*t5311;
  t5348 = t5322*t5323;
  t5360 = t5341 + t5348;
  t5361 = 0.64*t5360;
  t5365 = t5318 + t5329 + t5361;
  t5371 = -31.392000000000003*t5365;
  t5426 = t2875*t5296;
  t5427 = -1.*t1077*t5307;
  t5428 = t5426 + t5427;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=28.252799999999997*t1077 + t5263 + t5295 + t5313 + t5371;
  p_output1[3]=t5263 + t5295;
  p_output1[4]=-31.392000000000003*(-0.4*t5262*t5264 + 0.4*t5283*t5397 + 0.64*(t5286 - 1.*t5283*t5397));
  p_output1[5]=t5313 + t5371;
  p_output1[6]=-31.392000000000003*(-0.4*t5311*t5314 + 0.4*t5323*t5428 + 0.64*(t5341 - 1.*t5323*t5428));
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

namespace SymFunction
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
