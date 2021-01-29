/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:08:22 GMT-05:00
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
  double t1452;
  double t1359;
  double t1441;
  double t1489;
  double t819;
  double t1448;
  double t1490;
  double t1496;
  double t1509;
  double t1514;
  double t1528;
  double t1533;
  double t907;
  double t1293;
  double t1497;
  double t1537;
  double t1577;
  double t1580;
  double t1582;
  double t1585;
  double t1615;
  double t1639;
  double t1644;
  double t1646;
  t1452 = Cos(var1[2]);
  t1359 = Cos(var1[5]);
  t1441 = Sin(var1[2]);
  t1489 = Sin(var1[5]);
  t819 = Cos(var1[6]);
  t1448 = -1.*t1359*t1441;
  t1490 = -1.*t1452*t1489;
  t1496 = t1448 + t1490;
  t1509 = -1.*t1452*t1359;
  t1514 = t1441*t1489;
  t1528 = t1509 + t1514;
  t1533 = Sin(var1[6]);
  t907 = -1.*t819;
  t1293 = 1. + t907;
  t1497 = 0.4*t1293*t1496;
  t1537 = -0.4*t1528*t1533;
  t1577 = t819*t1496;
  t1580 = t1528*t1533;
  t1582 = t1577 + t1580;
  t1585 = 0.8*t1582;
  t1615 = t1497 + t1537 + t1585;
  t1639 = t1452*t1359;
  t1644 = -1.*t1441*t1489;
  t1646 = t1639 + t1644;
  p_output1[0]=1.;
  p_output1[1]=t1615;
  p_output1[2]=t1615;
  p_output1[3]=0.4*t1533*t1646 + 0.8*(t1577 - 1.*t1533*t1646) - 0.4*t1496*t819;
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
