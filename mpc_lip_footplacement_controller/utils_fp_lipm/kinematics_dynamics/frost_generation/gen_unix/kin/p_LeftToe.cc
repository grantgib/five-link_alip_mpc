/*
 * Automatically Generated from Mathematica.
 * Wed 8 Sep 2021 02:56:30 GMT-04:00
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
  double t1564;
  double t1556;
  double t1561;
  double t1567;
  double t1540;
  double t1563;
  double t1574;
  double t1579;
  double t1583;
  double t1584;
  double t1585;
  double t1588;
  double t1541;
  double t1547;
  double t1554;
  double t1555;
  double t1589;
  double t1595;
  double t1604;
  double t1605;
  double t1609;
  t1564 = Cos(var1[2]);
  t1556 = Cos(var1[5]);
  t1561 = Sin(var1[2]);
  t1567 = Sin(var1[5]);
  t1540 = Cos(var1[6]);
  t1563 = t1556*t1561;
  t1574 = t1564*t1567;
  t1579 = t1563 + t1574;
  t1583 = t1564*t1556;
  t1584 = -1.*t1561*t1567;
  t1585 = t1583 + t1584;
  t1588 = Sin(var1[6]);
  t1541 = -1.*t1540;
  t1547 = 1. + t1541;
  t1554 = 0.4*t1547;
  t1555 = 0. + t1554;
  t1589 = -0.4*t1588;
  t1595 = 0. + t1589;
  t1604 = -1.*t1556*t1561;
  t1605 = -1.*t1564*t1567;
  t1609 = t1604 + t1605;
  p_output1[0]=0. + t1555*t1579 + 0.8*(t1540*t1579 + t1585*t1588) + t1585*t1595 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t1555*t1585 + t1595*t1609 + 0.8*(t1540*t1585 + t1588*t1609) + var1[1];
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

#include "p_LeftToe.hh"

namespace SymExpression
{

void p_LeftToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
