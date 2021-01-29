/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:06:49 GMT-05:00
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
  double t490;
  double t372;
  double t397;
  double t499;
  double t254;
  double t412;
  double t573;
  double t585;
  double t690;
  double t726;
  double t735;
  double t750;
  double t258;
  double t288;
  double t356;
  double t360;
  double t785;
  double t903;
  double t1435;
  double t1501;
  double t1573;
  t490 = Cos(var1[2]);
  t372 = Cos(var1[3]);
  t397 = Sin(var1[2]);
  t499 = Sin(var1[3]);
  t254 = Cos(var1[4]);
  t412 = t372*t397;
  t573 = t490*t499;
  t585 = t412 + t573;
  t690 = t490*t372;
  t726 = -1.*t397*t499;
  t735 = t690 + t726;
  t750 = Sin(var1[4]);
  t258 = -1.*t254;
  t288 = 1. + t258;
  t356 = 0.4*t288;
  t360 = 0. + t356;
  t785 = -0.4*t750;
  t903 = 0. + t785;
  t1435 = -1.*t372*t397;
  t1501 = -1.*t490*t499;
  t1573 = t1435 + t1501;
  p_output1[0]=0. + t360*t585 + 0.8*(t254*t585 + t735*t750) + t735*t903 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t360*t735 + 0.8*(t254*t735 + t1573*t750) + t1573*t903 + var1[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_RightToe.hh"

namespace SymExpression
{

void p_RightToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
