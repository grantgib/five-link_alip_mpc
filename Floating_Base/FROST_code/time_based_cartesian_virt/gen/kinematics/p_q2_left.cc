/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:06:48 GMT-05:00
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
  double t318;
  double t260;
  double t273;
  double t329;
  double t140;
  double t288;
  double t356;
  double t360;
  double t397;
  double t398;
  double t412;
  double t490;
  double t163;
  double t230;
  double t254;
  double t258;
  double t499;
  double t573;
  double t799;
  double t865;
  double t903;
  t318 = Cos(var1[2]);
  t260 = Cos(var1[5]);
  t273 = Sin(var1[2]);
  t329 = Sin(var1[5]);
  t140 = Cos(var1[6]);
  t288 = t260*t273;
  t356 = t318*t329;
  t360 = t288 + t356;
  t397 = t318*t260;
  t398 = -1.*t273*t329;
  t412 = t397 + t398;
  t490 = Sin(var1[6]);
  t163 = -1.*t140;
  t230 = 1. + t163;
  t254 = 0.4*t230;
  t258 = 0. + t254;
  t499 = -0.4*t490;
  t573 = 0. + t499;
  t799 = -1.*t260*t273;
  t865 = -1.*t318*t329;
  t903 = t799 + t865;
  p_output1[0]=0. + t258*t360 + 0.4*(t140*t360 + t412*t490) + t412*t573 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t258*t412 + t573*t903 + 0.4*(t140*t412 + t490*t903) + var1[1];
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

#include "p_q2_left.hh"

namespace SymExpression
{

void p_q2_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
