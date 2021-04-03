/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:34:50 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t596;
  double t1285;
  double t1293;
  double t1308;
  double t1378;
  double t1379;
  double t1292;
  double t1294;
  double t1296;
  double t1297;
  double t1381;
  double t1382;
  double t1383;
  double t1387;
  double t1403;
  double t1404;
  double t2487;
  double t2598;
  t596 = -1.*var3[1];
  t1285 = var3[0] + t596;
  t1293 = t596 + var1[0];
  t1308 = 1/t1285;
  t1378 = -1.*t1308*t1293;
  t1379 = 1. + t1378;
  t1292 = Power(t1285,-5);
  t1294 = Power(t1293,5);
  t1296 = Power(t1285,-4);
  t1297 = Power(t1293,4);
  t1381 = Power(t1285,-3);
  t1382 = Power(t1293,3);
  t1383 = Power(t1379,2);
  t1387 = Power(t1285,-2);
  t1403 = Power(t1293,2);
  t1404 = Power(t1379,3);
  t2487 = Power(t1379,4);
  t2598 = Power(t1379,5);
  p_output1[0]=t2598*var2[0] + 5.*t1293*t1308*t2487*var2[4] + 10.*t1387*t1403*t1404*var2[8] + 10.*t1381*t1382*t1383*var2[12] + 5.*t1296*t1297*t1379*var2[16] + t1292*t1294*var2[20];
  p_output1[1]=t2598*var2[1] + 5.*t1293*t1308*t2487*var2[5] + 10.*t1387*t1403*t1404*var2[9] + 10.*t1381*t1382*t1383*var2[13] + 5.*t1296*t1297*t1379*var2[17] + t1292*t1294*var2[21];
  p_output1[2]=t2598*var2[2] + 5.*t1293*t1308*t2487*var2[6] + 10.*t1387*t1403*t1404*var2[10] + 10.*t1381*t1382*t1383*var2[14] + 5.*t1296*t1297*t1379*var2[18] + t1292*t1294*var2[22];
  p_output1[3]=t2598*var2[3] + 5.*t1293*t1308*t2487*var2[7] + 10.*t1387*t1403*t1404*var2[11] + 10.*t1381*t1382*t1383*var2[15] + 5.*t1296*t1297*t1379*var2[19] + t1292*t1294*var2[23];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "yd_time_RightStance.hh"

namespace SymFunction
{

void yd_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
