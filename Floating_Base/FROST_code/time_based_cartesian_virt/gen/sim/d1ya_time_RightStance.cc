/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:26:59 GMT-05:00
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
  double t318;
  double t320;
  double t317;
  double t321;
  double t310;
  double t319;
  double t325;
  double t326;
  double t328;
  double t329;
  double t330;
  double t331;
  double t315;
  double t316;
  double t327;
  double t332;
  double t333;
  double t334;
  double t335;
  double t336;
  double t337;
  double t341;
  double t342;
  double t343;
  double t353;
  double t360;
  double t361;
  double t362;
  double t359;
  double t363;
  double t364;
  double t365;
  double t366;
  double t367;
  t318 = Cos(var1[5]);
  t320 = Sin(var1[2]);
  t317 = Cos(var1[2]);
  t321 = Sin(var1[5]);
  t310 = Cos(var1[6]);
  t319 = t317*t318;
  t325 = -1.*t320*t321;
  t326 = t319 + t325;
  t328 = -1.*t318*t320;
  t329 = -1.*t317*t321;
  t330 = t328 + t329;
  t331 = Sin(var1[6]);
  t315 = -1.*t310;
  t316 = 1. + t315;
  t327 = 0.4*t316*t326;
  t332 = -0.4*t330*t331;
  t333 = t310*t326;
  t334 = t330*t331;
  t335 = t333 + t334;
  t336 = 0.8*t335;
  t337 = t327 + t332 + t336;
  t341 = t318*t320;
  t342 = t317*t321;
  t343 = t341 + t342;
  t353 = t310*t330;
  t360 = -1.*t317*t318;
  t361 = t320*t321;
  t362 = t360 + t361;
  t359 = 0.4*t316*t330;
  t363 = -0.4*t362*t331;
  t364 = t362*t331;
  t365 = t353 + t364;
  t366 = 0.8*t365;
  t367 = t359 + t363 + t366;
  p_output1[0]=var2[2];
  p_output1[1]=var2[1];
  p_output1[2]=var2[0] + t337*var2[2] + t337*var2[5] + (-0.4*t310*t326 + 0.4*t331*t343 + 0.8*(t333 - 1.*t331*t343))*var2[6];
  p_output1[3]=var2[1] + t367*var2[2] + t367*var2[5] + (-0.4*t310*t330 + 0.4*t326*t331 + 0.8*(-1.*t326*t331 + t353))*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "d1ya_time_RightStance.hh"

namespace SymFunction
{

void d1ya_time_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
