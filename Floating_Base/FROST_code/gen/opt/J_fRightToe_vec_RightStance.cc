/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:16 GMT-04:00
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
  double t15215;
  double t15222;
  double t15123;
  double t15224;
  double t10808;
  double t15216;
  double t15270;
  double t15273;
  double t15279;
  double t15284;
  double t15288;
  double t15295;
  double t14540;
  double t15117;
  double t15313;
  double t15322;
  double t15323;
  double t15277;
  double t15296;
  double t15299;
  double t15300;
  double t15301;
  double t15302;
  double t15311;
  double t15312;
  double t15324;
  double t15327;
  double t15328;
  double t15329;
  double t15330;
  double t15331;
  double t15332;
  double t15333;
  double t15336;
  double t15345;
  double t15346;
  double t15347;
  double t15337;
  double t15338;
  double t15339;
  double t15340;
  double t15341;
  double t15342;
  double t15343;
  double t15344;
  double t15348;
  double t15349;
  double t15350;
  double t15351;
  double t15352;
  double t15353;
  double t15354;
  double t15355;
  double t15356;
  double t15357;
  double t15358;
  double t15359;
  double t15360;
  double t15361;
  t15215 = Cos(var1[3]);
  t15222 = Sin(var1[2]);
  t15123 = Cos(var1[2]);
  t15224 = Sin(var1[3]);
  t10808 = Cos(var1[4]);
  t15216 = -1.*t15123*t15215;
  t15270 = t15222*t15224;
  t15273 = t15216 + t15270;
  t15279 = t15215*t15222;
  t15284 = t15123*t15224;
  t15288 = t15279 + t15284;
  t15295 = Sin(var1[4]);
  t14540 = -1.*t10808;
  t15117 = 1. + t14540;
  t15313 = -1.*t15215*t15222;
  t15322 = -1.*t15123*t15224;
  t15323 = t15313 + t15322;
  t15277 = 0.4*t15117*t15273;
  t15296 = -0.4*t15288*t15295;
  t15299 = t10808*t15273;
  t15300 = t15288*t15295;
  t15301 = t15299 + t15300;
  t15302 = 0.8*t15301;
  t15311 = t15277 + t15296 + t15302;
  t15312 = var2[2]*t15311;
  t15324 = 0.4*t15117*t15323;
  t15327 = -0.4*t15273*t15295;
  t15328 = t10808*t15323;
  t15329 = t15273*t15295;
  t15330 = t15328 + t15329;
  t15331 = 0.8*t15330;
  t15332 = t15324 + t15327 + t15331;
  t15333 = var2[0]*t15332;
  t15336 = t15312 + t15333;
  t15345 = t15123*t15215;
  t15346 = -1.*t15222*t15224;
  t15347 = t15345 + t15346;
  t15337 = -0.4*t10808*t15273;
  t15338 = 0.4*t15323*t15295;
  t15339 = -1.*t15323*t15295;
  t15340 = t15299 + t15339;
  t15341 = 0.8*t15340;
  t15342 = t15337 + t15338 + t15341;
  t15343 = var2[2]*t15342;
  t15344 = -0.4*t10808*t15323;
  t15348 = 0.4*t15347*t15295;
  t15349 = -1.*t15347*t15295;
  t15350 = t15328 + t15349;
  t15351 = 0.8*t15350;
  t15352 = t15344 + t15348 + t15351;
  t15353 = var2[0]*t15352;
  t15354 = t15343 + t15353;
  t15355 = 0.4*t15117*t15347;
  t15356 = -0.4*t15323*t15295;
  t15357 = t10808*t15347;
  t15358 = t15323*t15295;
  t15359 = t15357 + t15358;
  t15360 = 0.8*t15359;
  t15361 = t15355 + t15356 + t15360;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t15336;
  p_output1[3]=t15336;
  p_output1[4]=t15354;
  p_output1[5]=t15361;
  p_output1[6]=t15332;
  p_output1[7]=t15336;
  p_output1[8]=t15336;
  p_output1[9]=t15354;
  p_output1[10]=t15361;
  p_output1[11]=t15332;
  p_output1[12]=t15354;
  p_output1[13]=t15354;
  p_output1[14]=(0.4*t10808*t15288 + t15348 + 0.8*(-1.*t10808*t15288 + t15349))*var2[0] + (t15338 + 0.4*t10808*t15347 + 0.8*(t15339 - 1.*t10808*t15347))*var2[2];
  p_output1[15]=0.4*t15288*t15295 - 0.4*t10808*t15347 + 0.8*(-1.*t15288*t15295 + t15357);
  p_output1[16]=t15352;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightToe_vec_RightStance.hh"

namespace RightStance
{

void J_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
