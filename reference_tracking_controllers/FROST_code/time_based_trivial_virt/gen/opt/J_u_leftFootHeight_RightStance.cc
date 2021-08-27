/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:58:52 GMT-04:00
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
  double t1366;
  double t1363;
  double t1364;
  double t1367;
  double t1349;
  double t1365;
  double t1368;
  double t1369;
  double t1371;
  double t1372;
  double t1373;
  double t1374;
  double t1350;
  double t1358;
  double t1370;
  double t1375;
  double t1376;
  double t1377;
  double t1378;
  double t1379;
  double t1380;
  double t1382;
  double t1383;
  double t1425;
  t1366 = Cos(var1[2]);
  t1363 = Cos(var1[5]);
  t1364 = Sin(var1[2]);
  t1367 = Sin(var1[5]);
  t1349 = Cos(var1[6]);
  t1365 = -1.*t1363*t1364;
  t1368 = -1.*t1366*t1367;
  t1369 = t1365 + t1368;
  t1371 = -1.*t1366*t1363;
  t1372 = t1364*t1367;
  t1373 = t1371 + t1372;
  t1374 = Sin(var1[6]);
  t1350 = -1.*t1349;
  t1358 = 1. + t1350;
  t1370 = 0.4*t1358*t1369;
  t1375 = -0.4*t1373*t1374;
  t1376 = t1349*t1369;
  t1377 = t1373*t1374;
  t1378 = t1376 + t1377;
  t1379 = 0.8*t1378;
  t1380 = t1370 + t1375 + t1379;
  t1382 = t1366*t1363;
  t1383 = -1.*t1364*t1367;
  t1425 = t1382 + t1383;
  p_output1[0]=1.;
  p_output1[1]=t1380;
  p_output1[2]=t1380;
  p_output1[3]=-0.4*t1349*t1369 + 0.4*t1374*t1425 + 0.8*(t1376 - 1.*t1374*t1425);
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
