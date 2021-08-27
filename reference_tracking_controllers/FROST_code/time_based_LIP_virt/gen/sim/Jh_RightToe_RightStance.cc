/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:00:49 GMT-05:00
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
  double t1420;
  double t1482;
  double t1363;
  double t1522;
  double t134;
  double t1462;
  double t1533;
  double t1548;
  double t1741;
  double t1844;
  double t1866;
  double t1905;
  double t1160;
  double t1355;
  double t2140;
  double t2150;
  double t2201;
  double t1649;
  double t1922;
  double t1928;
  double t1935;
  double t2100;
  double t2108;
  double t2113;
  double t2121;
  double t2222;
  double t2241;
  double t2245;
  double t2250;
  double t2261;
  double t2287;
  double t2307;
  double t2311;
  double t2318;
  t1420 = Cos(var1[3]);
  t1482 = Sin(var1[2]);
  t1363 = Cos(var1[2]);
  t1522 = Sin(var1[3]);
  t134 = Cos(var1[4]);
  t1462 = t1363*t1420;
  t1533 = -1.*t1482*t1522;
  t1548 = t1462 + t1533;
  t1741 = -1.*t1420*t1482;
  t1844 = -1.*t1363*t1522;
  t1866 = t1741 + t1844;
  t1905 = Sin(var1[4]);
  t1160 = -1.*t134;
  t1355 = 1. + t1160;
  t2140 = -1.*t1363*t1420;
  t2150 = t1482*t1522;
  t2201 = t2140 + t2150;
  t1649 = 0.4*t1355*t1548;
  t1922 = -0.4*t1866*t1905;
  t1928 = t134*t1548;
  t1935 = t1866*t1905;
  t2100 = t1928 + t1935;
  t2108 = 0.8*t2100;
  t2113 = t1649 + t1922 + t2108;
  t2121 = 0.4*t1355*t1866;
  t2222 = -0.4*t2201*t1905;
  t2241 = t134*t1866;
  t2245 = t2201*t1905;
  t2250 = t2241 + t2245;
  t2261 = 0.8*t2250;
  t2287 = t2121 + t2222 + t2261;
  t2307 = t1420*t1482;
  t2311 = t1363*t1522;
  t2318 = t2307 + t2311;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t2113;
  p_output1[7]=0;
  p_output1[8]=t2287;
  p_output1[9]=t2113;
  p_output1[10]=0;
  p_output1[11]=t2287;
  p_output1[12]=-0.4*t134*t1548 + 0.4*t1905*t2318 + 0.8*(t1928 - 1.*t1905*t2318);
  p_output1[13]=0;
  p_output1[14]=-0.4*t134*t1866 + 0.4*t1548*t1905 + 0.8*(-1.*t1548*t1905 + t2241);
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RightToe_RightStance.hh"

namespace SymFunction
{

void Jh_RightToe_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
