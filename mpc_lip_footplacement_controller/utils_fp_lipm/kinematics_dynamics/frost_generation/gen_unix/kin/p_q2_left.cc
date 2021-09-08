/*
 * Automatically Generated from Mathematica.
 * Wed 8 Sep 2021 02:56:29 GMT-04:00
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
  double t1535;
  double t1527;
  double t1528;
  double t1537;
  double t1509;
  double t1534;
  double t1540;
  double t1541;
  double t1544;
  double t1545;
  double t1547;
  double t1549;
  double t1510;
  double t1514;
  double t1523;
  double t1526;
  double t1551;
  double t1554;
  double t1569;
  double t1570;
  double t1574;
  t1535 = Cos(var1[2]);
  t1527 = Cos(var1[5]);
  t1528 = Sin(var1[2]);
  t1537 = Sin(var1[5]);
  t1509 = Cos(var1[6]);
  t1534 = t1527*t1528;
  t1540 = t1535*t1537;
  t1541 = t1534 + t1540;
  t1544 = t1535*t1527;
  t1545 = -1.*t1528*t1537;
  t1547 = t1544 + t1545;
  t1549 = Sin(var1[6]);
  t1510 = -1.*t1509;
  t1514 = 1. + t1510;
  t1523 = 0.4*t1514;
  t1526 = 0. + t1523;
  t1551 = -0.4*t1549;
  t1554 = 0. + t1551;
  t1569 = -1.*t1527*t1528;
  t1570 = -1.*t1535*t1537;
  t1574 = t1569 + t1570;
  p_output1[0]=0. + t1526*t1541 + 0.4*(t1509*t1541 + t1547*t1549) + t1547*t1554 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t1526*t1547 + t1554*t1574 + 0.4*(t1509*t1547 + t1549*t1574) + var1[1];
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
