/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:36 GMT-05:00
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
  double t1309;
  double t1324;
  double t1306;
  double t1325;
  double t1286;
  double t1321;
  double t1335;
  double t1344;
  double t1348;
  double t1349;
  double t1352;
  double t1360;
  double t1300;
  double t1304;
  double t1346;
  double t1371;
  double t1372;
  double t1408;
  double t1409;
  double t1418;
  double t1438;
  double t1456;
  double t1457;
  double t1478;
  t1309 = Cos(var1[5]);
  t1324 = Sin(var1[2]);
  t1306 = Cos(var1[2]);
  t1325 = Sin(var1[5]);
  t1286 = Cos(var1[6]);
  t1321 = t1306*t1309;
  t1335 = -1.*t1324*t1325;
  t1344 = t1321 + t1335;
  t1348 = -1.*t1309*t1324;
  t1349 = -1.*t1306*t1325;
  t1352 = t1348 + t1349;
  t1360 = Sin(var1[6]);
  t1300 = -1.*t1286;
  t1304 = 1. + t1300;
  t1346 = 0.4*t1304*t1344;
  t1371 = -0.4*t1352*t1360;
  t1372 = t1286*t1344;
  t1408 = t1352*t1360;
  t1409 = t1372 + t1408;
  t1418 = 0.8*t1409;
  t1438 = t1346 + t1371 + t1418;
  t1456 = t1309*t1324;
  t1457 = t1306*t1325;
  t1478 = t1456 + t1457;
  p_output1[0]=var2[0] + t1438*var2[2] + t1438*var2[5] + (-0.4*t1286*t1344 + 0.4*t1360*t1478 + 0.8*(t1372 - 1.*t1360*t1478))*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "vel_swing_x.hh"

namespace RightStance
{

void vel_swing_x_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
