/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:27:15 GMT-05:00
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
  double t489;
  double t491;
  double t488;
  double t492;
  double t459;
  double t490;
  double t493;
  double t494;
  double t496;
  double t497;
  double t498;
  double t499;
  double t471;
  double t483;
  double t495;
  double t500;
  double t501;
  double t502;
  double t503;
  double t504;
  double t505;
  double t507;
  double t508;
  double t509;
  double t516;
  double t517;
  double t518;
  double t515;
  double t519;
  double t520;
  double t521;
  double t522;
  double t523;
  double t524;
  t489 = Cos(var1[3]);
  t491 = Sin(var1[2]);
  t488 = Cos(var1[2]);
  t492 = Sin(var1[3]);
  t459 = Cos(var1[4]);
  t490 = t488*t489;
  t493 = -1.*t491*t492;
  t494 = t490 + t493;
  t496 = -1.*t489*t491;
  t497 = -1.*t488*t492;
  t498 = t496 + t497;
  t499 = Sin(var1[4]);
  t471 = -1.*t459;
  t483 = 1. + t471;
  t495 = 0.4*t483*t494;
  t500 = -0.4*t498*t499;
  t501 = t459*t494;
  t502 = t498*t499;
  t503 = t501 + t502;
  t504 = 0.8*t503;
  t505 = t495 + t500 + t504;
  t507 = t489*t491;
  t508 = t488*t492;
  t509 = t507 + t508;
  t516 = -1.*t488*t489;
  t517 = t491*t492;
  t518 = t516 + t517;
  t515 = 0.4*t483*t498;
  t519 = -0.4*t518*t499;
  t520 = t459*t498;
  t521 = t518*t499;
  t522 = t520 + t521;
  t523 = 0.8*t522;
  t524 = t515 + t519 + t523;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t505;
  p_output1[3]=t505;
  p_output1[4]=-0.4*t459*t494 + 0.4*t499*t509 + 0.8*(t501 - 1.*t499*t509);
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=1.;
  p_output1[16]=t524;
  p_output1[17]=t524;
  p_output1[18]=-0.4*t459*t498 + 0.4*t494*t499 + 0.8*(-1.*t494*t499 + t520);
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_map_RightStance.hh"

namespace SymFunction
{

void fRightToe_map_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
