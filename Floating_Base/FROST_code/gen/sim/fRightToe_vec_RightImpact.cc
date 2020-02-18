/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:21:29 GMT-05:00
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
  double t459;
  double t471;
  double t458;
  double t472;
  double t452;
  double t460;
  double t473;
  double t474;
  double t476;
  double t477;
  double t478;
  double t479;
  double t456;
  double t457;
  double t488;
  double t489;
  double t490;
  double t475;
  double t480;
  double t481;
  double t482;
  double t483;
  double t484;
  double t485;
  double t486;
  double t487;
  double t491;
  double t492;
  double t493;
  double t494;
  double t495;
  double t496;
  double t497;
  double t498;
  double t500;
  double t501;
  double t502;
  t459 = Cos(var1[3]);
  t471 = Sin(var1[2]);
  t458 = Cos(var1[2]);
  t472 = Sin(var1[3]);
  t452 = Cos(var1[4]);
  t460 = t458*t459;
  t473 = -1.*t471*t472;
  t474 = t460 + t473;
  t476 = -1.*t459*t471;
  t477 = -1.*t458*t472;
  t478 = t476 + t477;
  t479 = Sin(var1[4]);
  t456 = -1.*t452;
  t457 = 1. + t456;
  t488 = -1.*t458*t459;
  t489 = t471*t472;
  t490 = t488 + t489;
  t475 = 0.4*t457*t474;
  t480 = -0.4*t478*t479;
  t481 = t452*t474;
  t482 = t478*t479;
  t483 = t481 + t482;
  t484 = 0.8*t483;
  t485 = t475 + t480 + t484;
  t486 = var2[0]*t485;
  t487 = 0.4*t457*t478;
  t491 = -0.4*t490*t479;
  t492 = t452*t478;
  t493 = t490*t479;
  t494 = t492 + t493;
  t495 = 0.8*t494;
  t496 = t487 + t491 + t495;
  t497 = var2[2]*t496;
  t498 = t486 + t497;
  t500 = t459*t471;
  t501 = t458*t472;
  t502 = t500 + t501;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t498;
  p_output1[3]=t498;
  p_output1[4]=(-0.4*t452*t474 + 0.4*t479*t502 + 0.8*(t481 - 1.*t479*t502))*var2[0] + (-0.4*t452*t478 + 0.4*t474*t479 + 0.8*(-1.*t474*t479 + t492))*var2[2];
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

#include "fRightToe_vec_RightImpact.hh"

namespace SymFunction
{

void fRightToe_vec_RightImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
