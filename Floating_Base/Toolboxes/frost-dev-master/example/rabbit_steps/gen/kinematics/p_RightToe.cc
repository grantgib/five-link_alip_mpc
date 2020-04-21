/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:51:38 GMT-04:00
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
  double t1559;
  double t1511;
  double t1522;
  double t1579;
  double t294;
  double t1536;
  double t1580;
  double t1652;
  double t1654;
  double t1771;
  double t1773;
  double t1815;
  double t785;
  double t1195;
  double t1493;
  double t1507;
  double t1905;
  double t1921;
  double t2376;
  double t2384;
  double t2401;
  t1559 = Cos(var1[2]);
  t1511 = Cos(var1[3]);
  t1522 = Sin(var1[2]);
  t1579 = Sin(var1[3]);
  t294 = Cos(var1[4]);
  t1536 = t1511*t1522;
  t1580 = t1559*t1579;
  t1652 = t1536 + t1580;
  t1654 = t1559*t1511;
  t1771 = -1.*t1522*t1579;
  t1773 = t1654 + t1771;
  t1815 = Sin(var1[4]);
  t785 = -1.*t294;
  t1195 = 1. + t785;
  t1493 = 0.4*t1195;
  t1507 = 0. + t1493;
  t1905 = -0.4*t1815;
  t1921 = 0. + t1905;
  t2376 = -1.*t1511*t1522;
  t2384 = -1.*t1559*t1579;
  t2401 = t2376 + t2384;
  p_output1[0]=0. + t1507*t1652 + t1773*t1921 + 0.8*(t1773*t1815 + t1652*t294) + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t1507*t1773 + t1921*t2401 + 0.8*(t1815*t2401 + t1773*t294) + var1[1];
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
