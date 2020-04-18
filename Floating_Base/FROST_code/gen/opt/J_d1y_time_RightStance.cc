/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 15:02:19 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t2299;
  double t2255;
  double t2256;
  double t2262;
  double t2263;
  double t2298;
  double t2302;
  double t2303;
  double t2310;
  double t2311;
  double t2312;
  double t2313;
  double t2314;
  double t2320;
  double t2321;
  double t2322;
  double t2323;
  double t2338;
  double t2349;
  double t2350;
  double t2356;
  double t2357;
  double t2377;
  double t2391;
  double t2396;
  double t2420;
  double t2421;
  double t2380;
  double t2381;
  double t2382;
  double t2384;
  double t2385;
  double t2386;
  double t2387;
  double t2388;
  double t2389;
  double t2390;
  double t2392;
  double t2393;
  double t2394;
  double t2395;
  t2299 = -1.*var5[1];
  t2255 = -1. + var6[0];
  t2256 = -1. + var7[0];
  t2262 = 1/t2256;
  t2263 = -1.*t2255*t2262;
  t2298 = 1. + t2263;
  t2302 = var5[0] + t2299;
  t2303 = Power(t2302,-5);
  t2310 = -1.*var1[0];
  t2311 = t2310 + var1[1];
  t2312 = t2255*t2262*t2311;
  t2313 = t2299 + var1[0] + t2312;
  t2314 = Power(t2313,3);
  t2320 = Power(t2302,-4);
  t2321 = Power(t2313,2);
  t2322 = 1/t2302;
  t2323 = -1.*t2322*t2313;
  t2338 = 1. + t2323;
  t2349 = Power(t2302,-3);
  t2350 = Power(t2338,2);
  t2356 = Power(t2302,-2);
  t2357 = Power(t2338,3);
  t2377 = Power(t2338,4);
  t2391 = Power(t2313,4);
  t2396 = Power(t2302,-6);
  t2420 = -1.*t2356*t2313;
  t2421 = t2322 + t2420;
  t2380 = 5.*t2322*t2377;
  t2381 = 20.*t2356*t2313*t2357;
  t2382 = -5.*t2322*t2377;
  t2384 = t2381 + t2382;
  t2385 = 30.*t2349*t2321*t2350;
  t2386 = -20.*t2356*t2313*t2357;
  t2387 = t2385 + t2386;
  t2388 = 20.*t2320*t2314*t2338;
  t2389 = -30.*t2349*t2321*t2350;
  t2390 = t2388 + t2389;
  t2392 = 5.*t2303*t2391;
  t2393 = -20.*t2320*t2314*t2338;
  t2394 = t2392 + t2393;
  t2395 = -5.*t2303*t2391;
  p_output1[0]=-20.*t2298*t2356*t2357*var4[0] - 60.*t2298*t2313*t2349*t2350*var4[4] + 40.*t2298*t2356*t2357*var4[4] - 60.*t2298*t2320*t2321*t2338*var4[8] + 120.*t2298*t2313*t2349*t2350*var4[8] - 20.*t2298*t2356*t2357*var4[8] - 20.*t2298*t2303*t2314*var4[12] + 120.*t2298*t2320*t2321*t2338*var4[12] - 60.*t2298*t2313*t2349*t2350*var4[12] + 40.*t2298*t2303*t2314*var4[16] - 60.*t2298*t2320*t2321*t2338*var4[16] - 20.*t2298*t2303*t2314*var4[20];
  p_output1[1]=-20.*t2255*t2262*t2356*t2357*var4[0] - 60.*t2255*t2262*t2313*t2349*t2350*var4[4] + 40.*t2255*t2262*t2356*t2357*var4[4] - 60.*t2255*t2262*t2320*t2321*t2338*var4[8] + 120.*t2255*t2262*t2313*t2349*t2350*var4[8] - 20.*t2255*t2262*t2356*t2357*var4[8] - 20.*t2255*t2262*t2303*t2314*var4[12] + 120.*t2255*t2262*t2320*t2321*t2338*var4[12] - 60.*t2255*t2262*t2313*t2349*t2350*var4[12] + 40.*t2255*t2262*t2303*t2314*var4[16] - 60.*t2255*t2262*t2320*t2321*t2338*var4[16] - 20.*t2255*t2262*t2303*t2314*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t2380;
  p_output1[4]=t2384;
  p_output1[5]=t2387;
  p_output1[6]=t2390;
  p_output1[7]=t2394;
  p_output1[8]=t2395;
  p_output1[9]=20.*t2313*t2349*t2357*var4[0] - 5.*t2356*t2377*var4[0] + 60.*t2320*t2321*t2350*var4[4] - 60.*t2313*t2349*t2357*var4[4] + 5.*t2356*t2377*var4[4] + 60.*t2303*t2314*t2338*var4[8] - 150.*t2320*t2321*t2350*var4[8] + 40.*t2313*t2349*t2357*var4[8] - 140.*t2303*t2314*t2338*var4[12] + 90.*t2320*t2321*t2350*var4[12] + 20.*t2391*t2396*var4[12] + 80.*t2303*t2314*t2338*var4[16] - 45.*t2391*t2396*var4[16] + 25.*t2391*t2396*var4[20];
  p_output1[10]=5.*t2356*t2377*var4[0] + 20.*t2322*t2357*t2421*var4[0] + 40.*t2313*t2349*t2357*var4[4] - 20.*t2356*t2357*var4[4] - 5.*t2356*t2377*var4[4] + 60.*t2313*t2350*t2356*t2421*var4[4] - 20.*t2322*t2357*t2421*var4[4] + 90.*t2320*t2321*t2350*var4[8] - 60.*t2313*t2349*t2350*var4[8] - 40.*t2313*t2349*t2357*var4[8] + 20.*t2356*t2357*var4[8] + 60.*t2321*t2338*t2349*t2421*var4[8] - 60.*t2313*t2350*t2356*t2421*var4[8] + 80.*t2303*t2314*t2338*var4[12] - 60.*t2320*t2321*t2338*var4[12] - 90.*t2320*t2321*t2350*var4[12] + 60.*t2313*t2349*t2350*var4[12] + 20.*t2314*t2320*t2421*var4[12] - 60.*t2321*t2338*t2349*t2421*var4[12] - 20.*t2303*t2314*var4[16] - 80.*t2303*t2314*t2338*var4[16] + 60.*t2320*t2321*t2338*var4[16] + 25.*t2391*t2396*var4[16] - 20.*t2314*t2320*t2421*var4[16] + 20.*t2303*t2314*var4[20] - 25.*t2391*t2396*var4[20];
  p_output1[11]=-20.*t2298*t2356*t2357*var4[1] - 60.*t2298*t2313*t2349*t2350*var4[5] + 40.*t2298*t2356*t2357*var4[5] - 60.*t2298*t2320*t2321*t2338*var4[9] + 120.*t2298*t2313*t2349*t2350*var4[9] - 20.*t2298*t2356*t2357*var4[9] - 20.*t2298*t2303*t2314*var4[13] + 120.*t2298*t2320*t2321*t2338*var4[13] - 60.*t2298*t2313*t2349*t2350*var4[13] + 40.*t2298*t2303*t2314*var4[17] - 60.*t2298*t2320*t2321*t2338*var4[17] - 20.*t2298*t2303*t2314*var4[21];
  p_output1[12]=-20.*t2255*t2262*t2356*t2357*var4[1] - 60.*t2255*t2262*t2313*t2349*t2350*var4[5] + 40.*t2255*t2262*t2356*t2357*var4[5] - 60.*t2255*t2262*t2320*t2321*t2338*var4[9] + 120.*t2255*t2262*t2313*t2349*t2350*var4[9] - 20.*t2255*t2262*t2356*t2357*var4[9] - 20.*t2255*t2262*t2303*t2314*var4[13] + 120.*t2255*t2262*t2320*t2321*t2338*var4[13] - 60.*t2255*t2262*t2313*t2349*t2350*var4[13] + 40.*t2255*t2262*t2303*t2314*var4[17] - 60.*t2255*t2262*t2320*t2321*t2338*var4[17] - 20.*t2255*t2262*t2303*t2314*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t2380;
  p_output1[15]=t2384;
  p_output1[16]=t2387;
  p_output1[17]=t2390;
  p_output1[18]=t2394;
  p_output1[19]=t2395;
  p_output1[20]=20.*t2313*t2349*t2357*var4[1] - 5.*t2356*t2377*var4[1] + 60.*t2320*t2321*t2350*var4[5] - 60.*t2313*t2349*t2357*var4[5] + 5.*t2356*t2377*var4[5] + 60.*t2303*t2314*t2338*var4[9] - 150.*t2320*t2321*t2350*var4[9] + 40.*t2313*t2349*t2357*var4[9] - 140.*t2303*t2314*t2338*var4[13] + 90.*t2320*t2321*t2350*var4[13] + 20.*t2391*t2396*var4[13] + 80.*t2303*t2314*t2338*var4[17] - 45.*t2391*t2396*var4[17] + 25.*t2391*t2396*var4[21];
  p_output1[21]=5.*t2356*t2377*var4[1] + 20.*t2322*t2357*t2421*var4[1] + 40.*t2313*t2349*t2357*var4[5] - 20.*t2356*t2357*var4[5] - 5.*t2356*t2377*var4[5] + 60.*t2313*t2350*t2356*t2421*var4[5] - 20.*t2322*t2357*t2421*var4[5] + 90.*t2320*t2321*t2350*var4[9] - 60.*t2313*t2349*t2350*var4[9] - 40.*t2313*t2349*t2357*var4[9] + 20.*t2356*t2357*var4[9] + 60.*t2321*t2338*t2349*t2421*var4[9] - 60.*t2313*t2350*t2356*t2421*var4[9] + 80.*t2303*t2314*t2338*var4[13] - 60.*t2320*t2321*t2338*var4[13] - 90.*t2320*t2321*t2350*var4[13] + 60.*t2313*t2349*t2350*var4[13] + 20.*t2314*t2320*t2421*var4[13] - 60.*t2321*t2338*t2349*t2421*var4[13] - 20.*t2303*t2314*var4[17] - 80.*t2303*t2314*t2338*var4[17] + 60.*t2320*t2321*t2338*var4[17] + 25.*t2391*t2396*var4[17] - 20.*t2314*t2320*t2421*var4[17] + 20.*t2303*t2314*var4[21] - 25.*t2391*t2396*var4[21];
  p_output1[22]=-20.*t2298*t2356*t2357*var4[2] - 60.*t2298*t2313*t2349*t2350*var4[6] + 40.*t2298*t2356*t2357*var4[6] - 60.*t2298*t2320*t2321*t2338*var4[10] + 120.*t2298*t2313*t2349*t2350*var4[10] - 20.*t2298*t2356*t2357*var4[10] - 20.*t2298*t2303*t2314*var4[14] + 120.*t2298*t2320*t2321*t2338*var4[14] - 60.*t2298*t2313*t2349*t2350*var4[14] + 40.*t2298*t2303*t2314*var4[18] - 60.*t2298*t2320*t2321*t2338*var4[18] - 20.*t2298*t2303*t2314*var4[22];
  p_output1[23]=-20.*t2255*t2262*t2356*t2357*var4[2] - 60.*t2255*t2262*t2313*t2349*t2350*var4[6] + 40.*t2255*t2262*t2356*t2357*var4[6] - 60.*t2255*t2262*t2320*t2321*t2338*var4[10] + 120.*t2255*t2262*t2313*t2349*t2350*var4[10] - 20.*t2255*t2262*t2356*t2357*var4[10] - 20.*t2255*t2262*t2303*t2314*var4[14] + 120.*t2255*t2262*t2320*t2321*t2338*var4[14] - 60.*t2255*t2262*t2313*t2349*t2350*var4[14] + 40.*t2255*t2262*t2303*t2314*var4[18] - 60.*t2255*t2262*t2320*t2321*t2338*var4[18] - 20.*t2255*t2262*t2303*t2314*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t2380;
  p_output1[26]=t2384;
  p_output1[27]=t2387;
  p_output1[28]=t2390;
  p_output1[29]=t2394;
  p_output1[30]=t2395;
  p_output1[31]=20.*t2313*t2349*t2357*var4[2] - 5.*t2356*t2377*var4[2] + 60.*t2320*t2321*t2350*var4[6] - 60.*t2313*t2349*t2357*var4[6] + 5.*t2356*t2377*var4[6] + 60.*t2303*t2314*t2338*var4[10] - 150.*t2320*t2321*t2350*var4[10] + 40.*t2313*t2349*t2357*var4[10] - 140.*t2303*t2314*t2338*var4[14] + 90.*t2320*t2321*t2350*var4[14] + 20.*t2391*t2396*var4[14] + 80.*t2303*t2314*t2338*var4[18] - 45.*t2391*t2396*var4[18] + 25.*t2391*t2396*var4[22];
  p_output1[32]=5.*t2356*t2377*var4[2] + 20.*t2322*t2357*t2421*var4[2] + 40.*t2313*t2349*t2357*var4[6] - 20.*t2356*t2357*var4[6] - 5.*t2356*t2377*var4[6] + 60.*t2313*t2350*t2356*t2421*var4[6] - 20.*t2322*t2357*t2421*var4[6] + 90.*t2320*t2321*t2350*var4[10] - 60.*t2313*t2349*t2350*var4[10] - 40.*t2313*t2349*t2357*var4[10] + 20.*t2356*t2357*var4[10] + 60.*t2321*t2338*t2349*t2421*var4[10] - 60.*t2313*t2350*t2356*t2421*var4[10] + 80.*t2303*t2314*t2338*var4[14] - 60.*t2320*t2321*t2338*var4[14] - 90.*t2320*t2321*t2350*var4[14] + 60.*t2313*t2349*t2350*var4[14] + 20.*t2314*t2320*t2421*var4[14] - 60.*t2321*t2338*t2349*t2421*var4[14] - 20.*t2303*t2314*var4[18] - 80.*t2303*t2314*t2338*var4[18] + 60.*t2320*t2321*t2338*var4[18] + 25.*t2391*t2396*var4[18] - 20.*t2314*t2320*t2421*var4[18] + 20.*t2303*t2314*var4[22] - 25.*t2391*t2396*var4[22];
  p_output1[33]=-20.*t2298*t2356*t2357*var4[3] - 60.*t2298*t2313*t2349*t2350*var4[7] + 40.*t2298*t2356*t2357*var4[7] - 60.*t2298*t2320*t2321*t2338*var4[11] + 120.*t2298*t2313*t2349*t2350*var4[11] - 20.*t2298*t2356*t2357*var4[11] - 20.*t2298*t2303*t2314*var4[15] + 120.*t2298*t2320*t2321*t2338*var4[15] - 60.*t2298*t2313*t2349*t2350*var4[15] + 40.*t2298*t2303*t2314*var4[19] - 60.*t2298*t2320*t2321*t2338*var4[19] - 20.*t2298*t2303*t2314*var4[23];
  p_output1[34]=-20.*t2255*t2262*t2356*t2357*var4[3] - 60.*t2255*t2262*t2313*t2349*t2350*var4[7] + 40.*t2255*t2262*t2356*t2357*var4[7] - 60.*t2255*t2262*t2320*t2321*t2338*var4[11] + 120.*t2255*t2262*t2313*t2349*t2350*var4[11] - 20.*t2255*t2262*t2356*t2357*var4[11] - 20.*t2255*t2262*t2303*t2314*var4[15] + 120.*t2255*t2262*t2320*t2321*t2338*var4[15] - 60.*t2255*t2262*t2313*t2349*t2350*var4[15] + 40.*t2255*t2262*t2303*t2314*var4[19] - 60.*t2255*t2262*t2320*t2321*t2338*var4[19] - 20.*t2255*t2262*t2303*t2314*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t2380;
  p_output1[37]=t2384;
  p_output1[38]=t2387;
  p_output1[39]=t2390;
  p_output1[40]=t2394;
  p_output1[41]=t2395;
  p_output1[42]=20.*t2313*t2349*t2357*var4[3] - 5.*t2356*t2377*var4[3] + 60.*t2320*t2321*t2350*var4[7] - 60.*t2313*t2349*t2357*var4[7] + 5.*t2356*t2377*var4[7] + 60.*t2303*t2314*t2338*var4[11] - 150.*t2320*t2321*t2350*var4[11] + 40.*t2313*t2349*t2357*var4[11] - 140.*t2303*t2314*t2338*var4[15] + 90.*t2320*t2321*t2350*var4[15] + 20.*t2391*t2396*var4[15] + 80.*t2303*t2314*t2338*var4[19] - 45.*t2391*t2396*var4[19] + 25.*t2391*t2396*var4[23];
  p_output1[43]=5.*t2356*t2377*var4[3] + 20.*t2322*t2357*t2421*var4[3] + 40.*t2313*t2349*t2357*var4[7] - 20.*t2356*t2357*var4[7] - 5.*t2356*t2377*var4[7] + 60.*t2313*t2350*t2356*t2421*var4[7] - 20.*t2322*t2357*t2421*var4[7] + 90.*t2320*t2321*t2350*var4[11] - 60.*t2313*t2349*t2350*var4[11] - 40.*t2313*t2349*t2357*var4[11] + 20.*t2356*t2357*var4[11] + 60.*t2321*t2338*t2349*t2421*var4[11] - 60.*t2313*t2350*t2356*t2421*var4[11] + 80.*t2303*t2314*t2338*var4[15] - 60.*t2320*t2321*t2338*var4[15] - 90.*t2320*t2321*t2350*var4[15] + 60.*t2313*t2349*t2350*var4[15] + 20.*t2314*t2320*t2421*var4[15] - 60.*t2321*t2338*t2349*t2421*var4[15] - 20.*t2303*t2314*var4[19] - 80.*t2303*t2314*t2338*var4[19] + 60.*t2320*t2321*t2338*var4[19] + 25.*t2391*t2396*var4[19] - 20.*t2314*t2320*t2421*var4[19] + 20.*t2303*t2314*var4[23] - 25.*t2391*t2396*var4[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_time_RightStance.hh"

namespace RightStance
{

void J_d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
