/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:53:02 GMT-04:00
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
  double t1542;
  double t1581;
  double t1393;
  double t1582;
  double t8;
  double t1576;
  double t1792;
  double t1809;
  double t1908;
  double t1950;
  double t1973;
  double t2031;
  double t967;
  double t1391;
  double t1841;
  double t2078;
  double t2151;
  double t2155;
  double t2161;
  double t2196;
  double t2261;
  double t2292;
  double t2318;
  double t2336;
  double t4163;
  double t4186;
  double t4204;
  double t3969;
  double t4265;
  double t4280;
  double t4299;
  double t4314;
  double t4339;
  double t4341;
  t1542 = Cos(var1[3]);
  t1581 = Sin(var1[2]);
  t1393 = Cos(var1[2]);
  t1582 = Sin(var1[3]);
  t8 = Cos(var1[4]);
  t1576 = t1393*t1542;
  t1792 = -1.*t1581*t1582;
  t1809 = t1576 + t1792;
  t1908 = -1.*t1542*t1581;
  t1950 = -1.*t1393*t1582;
  t1973 = t1908 + t1950;
  t2031 = Sin(var1[4]);
  t967 = -1.*t8;
  t1391 = 1. + t967;
  t1841 = 0.4*t1391*t1809;
  t2078 = -0.4*t1973*t2031;
  t2151 = t8*t1809;
  t2155 = t1973*t2031;
  t2161 = t2151 + t2155;
  t2196 = 0.8*t2161;
  t2261 = t1841 + t2078 + t2196;
  t2292 = t1542*t1581;
  t2318 = t1393*t1582;
  t2336 = t2292 + t2318;
  t4163 = -1.*t1393*t1542;
  t4186 = t1581*t1582;
  t4204 = t4163 + t4186;
  t3969 = 0.4*t1391*t1973;
  t4265 = -0.4*t4204*t2031;
  t4280 = t8*t1973;
  t4299 = t4204*t2031;
  t4314 = t4280 + t4299;
  t4339 = 0.8*t4314;
  t4341 = t3969 + t4265 + t4339;
  p_output1[0]=1.;
  p_output1[1]=t2261;
  p_output1[2]=t2261;
  p_output1[3]=0.4*t2031*t2336 + 0.8*(t2151 - 1.*t2031*t2336) - 0.4*t1809*t8;
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t4341;
  p_output1[8]=t4341;
  p_output1[9]=0.4*t1809*t2031 + 0.8*(-1.*t1809*t2031 + t4280) - 0.4*t1973*t8;
  p_output1[10]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightToe_RightStance.hh"

namespace RightStance
{

void J_h_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
