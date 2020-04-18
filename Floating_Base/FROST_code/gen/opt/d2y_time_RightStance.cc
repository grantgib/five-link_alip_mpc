/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 15:02:25 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t349;
  double t743;
  double t2317;
  double t2318;
  double t2319;
  double t2341;
  double t2345;
  double t2347;
  double t2353;
  double t2354;
  double t2355;
  double t2361;
  double t2362;
  double t2363;
  double t2364;
  double t2365;
  double t2369;
  double t2370;
  double t2376;
  double t2397;
  double t2401;
  double t2414;
  double t2419;
  double t2427;
  t349 = -1.*var6[1];
  t743 = var6[0] + t349;
  t2317 = Power(t743,-5);
  t2318 = -1. + var7[0];
  t2319 = -1. + var8[0];
  t2341 = 1/t2319;
  t2345 = -1.*var1[0];
  t2347 = t2345 + var1[1];
  t2353 = t2318*t2341*t2347;
  t2354 = t349 + var1[0] + t2353;
  t2355 = Power(t2354,3);
  t2361 = Power(t743,-4);
  t2362 = Power(t2354,2);
  t2363 = 1/t743;
  t2364 = -1.*t2363*t2354;
  t2365 = 1. + t2364;
  t2369 = Power(t743,-3);
  t2370 = Power(t2365,2);
  t2376 = Power(t743,-2);
  t2397 = Power(t2365,3);
  t2401 = Power(t2354,4);
  t2414 = Power(t2365,4);
  t2419 = Power(t2354,5);
  t2427 = Power(t2365,5);
  p_output1[0]=var4[3] - 20.*t2376*t2397*var5[0] - 60.*t2354*t2369*t2370*var5[4] + 40.*t2376*t2397*var5[4] - 60.*t2361*t2362*t2365*var5[8] + 120.*t2354*t2369*t2370*var5[8] - 20.*t2376*t2397*var5[8] - 20.*t2317*t2355*var5[12] + 120.*t2361*t2362*t2365*var5[12] - 60.*t2354*t2369*t2370*var5[12] + 40.*t2317*t2355*var5[16] - 60.*t2361*t2362*t2365*var5[16] - 20.*t2317*t2355*var5[20] + (var2[3] - 1.*t2427*var5[0] - 5.*t2354*t2363*t2414*var5[4] - 10.*t2362*t2376*t2397*var5[8] - 10.*t2355*t2369*t2370*var5[12] - 5.*t2361*t2365*t2401*var5[16] - 1.*t2317*t2419*var5[20])*var9[0] + (var3[3] + 5.*t2363*t2414*var5[0] + 20.*t2354*t2376*t2397*var5[4] - 5.*t2363*t2414*var5[4] + 30.*t2362*t2369*t2370*var5[8] - 20.*t2354*t2376*t2397*var5[8] + 20.*t2355*t2361*t2365*var5[12] - 30.*t2362*t2369*t2370*var5[12] - 20.*t2355*t2361*t2365*var5[16] + 5.*t2317*t2401*var5[16] - 5.*t2317*t2401*var5[20])*var9[1];
  p_output1[1]=var4[4] - 20.*t2376*t2397*var5[1] - 60.*t2354*t2369*t2370*var5[5] + 40.*t2376*t2397*var5[5] - 60.*t2361*t2362*t2365*var5[9] + 120.*t2354*t2369*t2370*var5[9] - 20.*t2376*t2397*var5[9] - 20.*t2317*t2355*var5[13] + 120.*t2361*t2362*t2365*var5[13] - 60.*t2354*t2369*t2370*var5[13] + 40.*t2317*t2355*var5[17] - 60.*t2361*t2362*t2365*var5[17] - 20.*t2317*t2355*var5[21] + (var2[4] - 1.*t2427*var5[1] - 5.*t2354*t2363*t2414*var5[5] - 10.*t2362*t2376*t2397*var5[9] - 10.*t2355*t2369*t2370*var5[13] - 5.*t2361*t2365*t2401*var5[17] - 1.*t2317*t2419*var5[21])*var9[0] + (var3[4] + 5.*t2363*t2414*var5[1] + 20.*t2354*t2376*t2397*var5[5] - 5.*t2363*t2414*var5[5] + 30.*t2362*t2369*t2370*var5[9] - 20.*t2354*t2376*t2397*var5[9] + 20.*t2355*t2361*t2365*var5[13] - 30.*t2362*t2369*t2370*var5[13] - 20.*t2355*t2361*t2365*var5[17] + 5.*t2317*t2401*var5[17] - 5.*t2317*t2401*var5[21])*var9[1];
  p_output1[2]=var4[5] - 20.*t2376*t2397*var5[2] - 60.*t2354*t2369*t2370*var5[6] + 40.*t2376*t2397*var5[6] - 60.*t2361*t2362*t2365*var5[10] + 120.*t2354*t2369*t2370*var5[10] - 20.*t2376*t2397*var5[10] - 20.*t2317*t2355*var5[14] + 120.*t2361*t2362*t2365*var5[14] - 60.*t2354*t2369*t2370*var5[14] + 40.*t2317*t2355*var5[18] - 60.*t2361*t2362*t2365*var5[18] - 20.*t2317*t2355*var5[22] + (var2[5] - 1.*t2427*var5[2] - 5.*t2354*t2363*t2414*var5[6] - 10.*t2362*t2376*t2397*var5[10] - 10.*t2355*t2369*t2370*var5[14] - 5.*t2361*t2365*t2401*var5[18] - 1.*t2317*t2419*var5[22])*var9[0] + (var3[5] + 5.*t2363*t2414*var5[2] + 20.*t2354*t2376*t2397*var5[6] - 5.*t2363*t2414*var5[6] + 30.*t2362*t2369*t2370*var5[10] - 20.*t2354*t2376*t2397*var5[10] + 20.*t2355*t2361*t2365*var5[14] - 30.*t2362*t2369*t2370*var5[14] - 20.*t2355*t2361*t2365*var5[18] + 5.*t2317*t2401*var5[18] - 5.*t2317*t2401*var5[22])*var9[1];
  p_output1[3]=var4[6] - 20.*t2376*t2397*var5[3] - 60.*t2354*t2369*t2370*var5[7] + 40.*t2376*t2397*var5[7] - 60.*t2361*t2362*t2365*var5[11] + 120.*t2354*t2369*t2370*var5[11] - 20.*t2376*t2397*var5[11] - 20.*t2317*t2355*var5[15] + 120.*t2361*t2362*t2365*var5[15] - 60.*t2354*t2369*t2370*var5[15] + 40.*t2317*t2355*var5[19] - 60.*t2361*t2362*t2365*var5[19] - 20.*t2317*t2355*var5[23] + (var2[6] - 1.*t2427*var5[3] - 5.*t2354*t2363*t2414*var5[7] - 10.*t2362*t2376*t2397*var5[11] - 10.*t2355*t2369*t2370*var5[15] - 5.*t2361*t2365*t2401*var5[19] - 1.*t2317*t2419*var5[23])*var9[0] + (var3[6] + 5.*t2363*t2414*var5[3] + 20.*t2354*t2376*t2397*var5[7] - 5.*t2363*t2414*var5[7] + 30.*t2362*t2369*t2370*var5[11] - 20.*t2354*t2376*t2397*var5[11] + 20.*t2355*t2361*t2365*var5[15] - 30.*t2362*t2369*t2370*var5[15] - 20.*t2355*t2361*t2365*var5[19] + 5.*t2317*t2401*var5[19] - 5.*t2317*t2401*var5[23])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "d2y_time_RightStance.hh"

namespace RightStance
{

void d2y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
