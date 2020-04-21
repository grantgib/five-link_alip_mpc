/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:54:20 GMT-04:00
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
  double t1297;
  double t1234;
  double t1251;
  double t1301;
  double t627;
  double t1268;
  double t1322;
  double t1323;
  double t1347;
  double t1349;
  double t1350;
  double t1358;
  double t648;
  double t1007;
  double t1325;
  double t1440;
  double t1447;
  double t1509;
  double t1594;
  double t1622;
  double t1623;
  double t1637;
  double t1699;
  double t1707;
  t1297 = Cos(var1[2]);
  t1234 = Cos(var1[5]);
  t1251 = Sin(var1[2]);
  t1301 = Sin(var1[5]);
  t627 = Cos(var1[6]);
  t1268 = -1.*t1234*t1251;
  t1322 = -1.*t1297*t1301;
  t1323 = t1268 + t1322;
  t1347 = -1.*t1297*t1234;
  t1349 = t1251*t1301;
  t1350 = t1347 + t1349;
  t1358 = Sin(var1[6]);
  t648 = -1.*t627;
  t1007 = 1. + t648;
  t1325 = 0.4*t1007*t1323;
  t1440 = -0.4*t1350*t1358;
  t1447 = t627*t1323;
  t1509 = t1350*t1358;
  t1594 = t1447 + t1509;
  t1622 = 0.8*t1594;
  t1623 = t1325 + t1440 + t1622;
  t1637 = t1297*t1234;
  t1699 = -1.*t1251*t1301;
  t1707 = t1637 + t1699;
  p_output1[0]=1.;
  p_output1[1]=t1623;
  p_output1[2]=t1623;
  p_output1[3]=0.4*t1358*t1707 + 0.8*(t1447 - 1.*t1358*t1707) - 0.4*t1323*t627;
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

#include "J_swing_foot_height.hh"

namespace RightStance
{

void J_swing_foot_height_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
