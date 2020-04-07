/*
 * Automatically Generated from Mathematica.
 * Mon 6 Apr 2020 23:58:18 GMT-04:00
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
  double t1406;
  double t1403;
  double t1404;
  double t1407;
  double t1389;
  double t1405;
  double t1408;
  double t1409;
  double t1411;
  double t1412;
  double t1413;
  double t1414;
  double t1390;
  double t1398;
  double t1410;
  double t1415;
  double t1416;
  double t1417;
  double t1418;
  double t1419;
  double t1420;
  double t1422;
  double t1423;
  double t1465;
  t1406 = Cos(var1[2]);
  t1403 = Cos(var1[5]);
  t1404 = Sin(var1[2]);
  t1407 = Sin(var1[5]);
  t1389 = Cos(var1[6]);
  t1405 = -1.*t1403*t1404;
  t1408 = -1.*t1406*t1407;
  t1409 = t1405 + t1408;
  t1411 = -1.*t1406*t1403;
  t1412 = t1404*t1407;
  t1413 = t1411 + t1412;
  t1414 = Sin(var1[6]);
  t1390 = -1.*t1389;
  t1398 = 1. + t1390;
  t1410 = 0.4*t1398*t1409;
  t1415 = -0.4*t1413*t1414;
  t1416 = t1389*t1409;
  t1417 = t1413*t1414;
  t1418 = t1416 + t1417;
  t1419 = 0.8*t1418;
  t1420 = t1410 + t1415 + t1419;
  t1422 = t1406*t1403;
  t1423 = -1.*t1404*t1407;
  t1465 = t1422 + t1423;
  p_output1[0]=1.;
  p_output1[1]=t1420;
  p_output1[2]=t1420;
  p_output1[3]=-0.4*t1389*t1409 + 0.4*t1414*t1465 + 0.8*(t1416 - 1.*t1414*t1465);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_leftFootHeight_RightStance.hh"

namespace RightStance
{

void J_u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
