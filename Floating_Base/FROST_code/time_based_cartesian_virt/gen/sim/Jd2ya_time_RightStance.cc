/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:27:00 GMT-05:00
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
  double t345;
  double t339;
  double t340;
  double t346;
  double t338;
  double t344;
  double t347;
  double t348;
  double t350;
  double t351;
  double t352;
  double t354;
  double t356;
  double t374;
  double t375;
  double t376;
  double t371;
  double t372;
  double t373;
  double t377;
  double t378;
  double t379;
  double t380;
  double t381;
  double t387;
  double t394;
  double t395;
  double t396;
  double t393;
  double t397;
  double t398;
  double t399;
  double t400;
  double t401;
  double t349;
  double t355;
  double t357;
  double t358;
  double t368;
  double t369;
  double t370;
  double t382;
  double t383;
  double t384;
  double t385;
  double t386;
  double t388;
  double t389;
  double t390;
  double t391;
  double t392;
  double t402;
  double t403;
  double t404;
  double t423;
  double t424;
  double t425;
  double t426;
  double t427;
  double t428;
  double t429;
  t345 = Cos(var1[2]);
  t339 = Cos(var1[5]);
  t340 = Sin(var1[2]);
  t346 = Sin(var1[5]);
  t338 = Cos(var1[6]);
  t344 = -1.*t339*t340;
  t347 = -1.*t345*t346;
  t348 = t344 + t347;
  t350 = t345*t339;
  t351 = -1.*t340*t346;
  t352 = t350 + t351;
  t354 = Sin(var1[6]);
  t356 = t338*t348;
  t374 = -1.*t345*t339;
  t375 = t340*t346;
  t376 = t374 + t375;
  t371 = -1.*t338;
  t372 = 1. + t371;
  t373 = 0.4*t372*t348;
  t377 = -0.4*t376*t354;
  t378 = t376*t354;
  t379 = t356 + t378;
  t380 = 0.8*t379;
  t381 = t373 + t377 + t380;
  t387 = t338*t376;
  t394 = t339*t340;
  t395 = t345*t346;
  t396 = t394 + t395;
  t393 = 0.4*t372*t376;
  t397 = -0.4*t396*t354;
  t398 = t396*t354;
  t399 = t387 + t398;
  t400 = 0.8*t399;
  t401 = t393 + t397 + t400;
  t349 = -0.4*t338*t348;
  t355 = 0.4*t352*t354;
  t357 = -1.*t352*t354;
  t358 = t356 + t357;
  t368 = 0.8*t358;
  t369 = t349 + t355 + t368;
  t370 = var2[6]*t369;
  t382 = var2[2]*t381;
  t383 = var2[5]*t381;
  t384 = t370 + t382 + t383;
  t385 = -0.4*t338*t376;
  t386 = 0.4*t348*t354;
  t388 = -1.*t348*t354;
  t389 = t387 + t388;
  t390 = 0.8*t389;
  t391 = t385 + t386 + t390;
  t392 = var2[6]*t391;
  t402 = var2[2]*t401;
  t403 = var2[5]*t401;
  t404 = t392 + t402 + t403;
  t423 = 0.4*t372*t352;
  t424 = -0.4*t348*t354;
  t425 = t338*t352;
  t426 = t348*t354;
  t427 = t425 + t426;
  t428 = 0.8*t427;
  t429 = t423 + t424 + t428;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=t384;
  p_output1[11]=t404;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=t384;
  p_output1[23]=t404;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=t369*var2[2] + t369*var2[5] + (t355 + 0.4*t338*t396 + 0.8*(t357 - 1.*t338*t396))*var2[6];
  p_output1[27]=t391*var2[2] + t391*var2[5] + (0.4*t338*t352 + t386 + 0.8*(-1.*t338*t352 + t388))*var2[6];
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=1.;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=1.;
  p_output1[34]=0;
  p_output1[35]=1.;
  p_output1[36]=1.;
  p_output1[37]=0;
  p_output1[38]=t429;
  p_output1[39]=t381;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=t429;
  p_output1[51]=t381;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=-0.4*t338*t352 + 0.4*t354*t396 + 0.8*(-1.*t354*t396 + t425);
  p_output1[55]=t369;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jd2ya_time_RightStance.hh"

namespace SymFunction
{

void Jd2ya_time_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
