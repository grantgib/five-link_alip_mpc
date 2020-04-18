/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 14:53:16 GMT-04:00
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
  double t211;
  double t238;
  double t202;
  double t259;
  double t129;
  double t213;
  double t264;
  double t269;
  double t271;
  double t272;
  double t280;
  double t284;
  double t170;
  double t187;
  double t323;
  double t330;
  double t331;
  double t270;
  double t300;
  double t304;
  double t310;
  double t311;
  double t315;
  double t316;
  double t317;
  double t322;
  double t332;
  double t333;
  double t334;
  double t335;
  double t336;
  double t337;
  double t338;
  double t339;
  double t341;
  double t342;
  double t343;
  t211 = Cos(var1[3]);
  t238 = Sin(var1[2]);
  t202 = Cos(var1[2]);
  t259 = Sin(var1[3]);
  t129 = Cos(var1[4]);
  t213 = t202*t211;
  t264 = -1.*t238*t259;
  t269 = t213 + t264;
  t271 = -1.*t211*t238;
  t272 = -1.*t202*t259;
  t280 = t271 + t272;
  t284 = Sin(var1[4]);
  t170 = -1.*t129;
  t187 = 1. + t170;
  t323 = -1.*t202*t211;
  t330 = t238*t259;
  t331 = t323 + t330;
  t270 = 0.4*t187*t269;
  t300 = -0.4*t280*t284;
  t304 = t129*t269;
  t310 = t280*t284;
  t311 = t304 + t310;
  t315 = 0.8*t311;
  t316 = t270 + t300 + t315;
  t317 = var2[0]*t316;
  t322 = 0.4*t187*t280;
  t332 = -0.4*t331*t284;
  t333 = t129*t280;
  t334 = t331*t284;
  t335 = t333 + t334;
  t336 = 0.8*t335;
  t337 = t322 + t332 + t336;
  t338 = var2[2]*t337;
  t339 = t317 + t338;
  t341 = t211*t238;
  t342 = t202*t259;
  t343 = t341 + t342;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t339;
  p_output1[3]=t339;
  p_output1[4]=(-0.4*t129*t269 + 0.4*t284*t343 + 0.8*(t304 - 1.*t284*t343))*var2[0] + (-0.4*t129*t280 + 0.4*t269*t284 + 0.8*(-1.*t269*t284 + t333))*var2[2];
  p_output1[5]=0;
  p_output1[6]=0;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_vec_RightStance.hh"

namespace RightStance
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
