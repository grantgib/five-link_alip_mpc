/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:37 GMT-05:00
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
  double t1481;
  double t1440;
  double t1442;
  double t1483;
  double t102;
  double t1443;
  double t1484;
  double t1485;
  double t1502;
  double t1523;
  double t1559;
  double t1560;
  double t1566;
  double t1620;
  double t1621;
  double t1623;
  double t1600;
  double t1607;
  double t1612;
  double t1634;
  double t1637;
  double t1648;
  double t1652;
  double t1658;
  double t1493;
  double t1564;
  double t1575;
  double t1580;
  double t1589;
  double t1592;
  double t1599;
  double t1666;
  double t1679;
  double t1684;
  double t1707;
  double t1708;
  double t1712;
  double t1736;
  double t1742;
  double t1750;
  double t1760;
  double t1794;
  double t1800;
  double t1803;
  t1481 = Cos(var1[2]);
  t1440 = Cos(var1[5]);
  t1442 = Sin(var1[2]);
  t1483 = Sin(var1[5]);
  t102 = Cos(var1[6]);
  t1443 = -1.*t1440*t1442;
  t1484 = -1.*t1481*t1483;
  t1485 = t1443 + t1484;
  t1502 = t1481*t1440;
  t1523 = -1.*t1442*t1483;
  t1559 = t1502 + t1523;
  t1560 = Sin(var1[6]);
  t1566 = t102*t1485;
  t1620 = -1.*t1481*t1440;
  t1621 = t1442*t1483;
  t1623 = t1620 + t1621;
  t1600 = -1.*t102;
  t1607 = 1. + t1600;
  t1612 = 0.4*t1607*t1485;
  t1634 = -0.4*t1623*t1560;
  t1637 = t1623*t1560;
  t1648 = t1566 + t1637;
  t1652 = 0.8*t1648;
  t1658 = t1612 + t1634 + t1652;
  t1493 = -0.4*t102*t1485;
  t1564 = 0.4*t1559*t1560;
  t1575 = -1.*t1559*t1560;
  t1580 = t1566 + t1575;
  t1589 = 0.8*t1580;
  t1592 = t1493 + t1564 + t1589;
  t1599 = var2[6]*t1592;
  t1666 = var2[2]*t1658;
  t1679 = var2[5]*t1658;
  t1684 = t1599 + t1666 + t1679;
  t1707 = t1440*t1442;
  t1708 = t1481*t1483;
  t1712 = t1707 + t1708;
  t1736 = 0.4*t1607*t1559;
  t1742 = -0.4*t1485*t1560;
  t1750 = t102*t1559;
  t1760 = t1485*t1560;
  t1794 = t1750 + t1760;
  t1800 = 0.8*t1794;
  t1803 = t1736 + t1742 + t1800;
  p_output1[0]=t1684;
  p_output1[1]=t1684;
  p_output1[2]=t1592*var2[2] + t1592*var2[5] + (t1564 + 0.4*t102*t1712 + 0.8*(t1575 - 1.*t102*t1712))*var2[6];
  p_output1[3]=1.;
  p_output1[4]=t1803;
  p_output1[5]=t1803;
  p_output1[6]=-0.4*t102*t1559 + 0.4*t1560*t1712 + 0.8*(-1.*t1560*t1712 + t1750);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_vel_swing_x.hh"

namespace RightStance
{

void J_vel_swing_x_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
