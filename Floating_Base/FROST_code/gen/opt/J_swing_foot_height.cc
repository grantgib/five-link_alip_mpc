/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:58:46 GMT-04:00
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
  double t1328;
  double t1325;
  double t1326;
  double t1329;
  double t1303;
  double t1327;
  double t1331;
  double t1332;
  double t1334;
  double t1335;
  double t1336;
  double t1337;
  double t1308;
  double t1318;
  double t1333;
  double t1338;
  double t1340;
  double t1341;
  double t1342;
  double t1343;
  double t1344;
  double t1346;
  double t1347;
  double t1348;
  t1328 = Cos(var1[2]);
  t1325 = Cos(var1[5]);
  t1326 = Sin(var1[2]);
  t1329 = Sin(var1[5]);
  t1303 = Cos(var1[6]);
  t1327 = -1.*t1325*t1326;
  t1331 = -1.*t1328*t1329;
  t1332 = t1327 + t1331;
  t1334 = -1.*t1328*t1325;
  t1335 = t1326*t1329;
  t1336 = t1334 + t1335;
  t1337 = Sin(var1[6]);
  t1308 = -1.*t1303;
  t1318 = 1. + t1308;
  t1333 = 0.4*t1318*t1332;
  t1338 = -0.4*t1336*t1337;
  t1340 = t1303*t1332;
  t1341 = t1336*t1337;
  t1342 = t1340 + t1341;
  t1343 = 0.8*t1342;
  t1344 = t1333 + t1338 + t1343;
  t1346 = t1328*t1325;
  t1347 = -1.*t1326*t1329;
  t1348 = t1346 + t1347;
  p_output1[0]=1.;
  p_output1[1]=t1344;
  p_output1[2]=t1344;
  p_output1[3]=-0.4*t1303*t1332 + 0.4*t1337*t1348 + 0.8*(t1340 - 1.*t1337*t1348);
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
