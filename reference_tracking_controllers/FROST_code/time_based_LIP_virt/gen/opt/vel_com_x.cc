/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:44 GMT-05:00
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
  double t1682;
  double t1784;
  double t1179;
  double t1833;
  double t918;
  double t1703;
  double t1847;
  double t1852;
  double t1859;
  double t1860;
  double t1867;
  double t1868;
  double t1918;
  double t2087;
  double t2103;
  double t2109;
  double t2410;
  double t2498;
  double t2395;
  double t2421;
  double t2501;
  double t2502;
  double t2532;
  double t2544;
  double t2553;
  double t2554;
  double t2573;
  double t2624;
  double t2635;
  double t2643;
  double t2020;
  double t2041;
  double t2042;
  double t2084;
  double t2120;
  double t2122;
  double t2330;
  double t2334;
  double t2335;
  double t2336;
  double t2592;
  double t2602;
  double t2613;
  double t2619;
  double t2647;
  double t2676;
  double t2688;
  double t2689;
  double t2690;
  double t2692;
  t1682 = Cos(var1[3]);
  t1784 = Sin(var1[2]);
  t1179 = Cos(var1[2]);
  t1833 = Sin(var1[3]);
  t918 = Cos(var1[4]);
  t1703 = t1179*t1682;
  t1847 = -1.*t1784*t1833;
  t1852 = t1703 + t1847;
  t1859 = t1682*t1784;
  t1860 = t1179*t1833;
  t1867 = t1859 + t1860;
  t1868 = Sin(var1[4]);
  t1918 = t918*t1852;
  t2087 = -1.*t1682*t1784;
  t2103 = -1.*t1179*t1833;
  t2109 = t2087 + t2103;
  t2410 = Cos(var1[5]);
  t2498 = Sin(var1[5]);
  t2395 = Cos(var1[6]);
  t2421 = t1179*t2410;
  t2501 = -1.*t1784*t2498;
  t2502 = t2421 + t2501;
  t2532 = t2410*t1784;
  t2544 = t1179*t2498;
  t2553 = t2532 + t2544;
  t2554 = Sin(var1[6]);
  t2573 = t2395*t2502;
  t2624 = -1.*t2410*t1784;
  t2635 = -1.*t1179*t2498;
  t2643 = t2624 + t2635;
  t2020 = 0.748*t1852;
  t2041 = -1.*t918;
  t2042 = 1. + t2041;
  t2084 = 0.4*t2042*t1852;
  t2120 = -0.4*t2109*t1868;
  t2122 = t2109*t1868;
  t2330 = t1918 + t2122;
  t2334 = 0.64*t2330;
  t2335 = t2084 + t2120 + t2334;
  t2336 = 3.2*t2335;
  t2592 = 0.748*t2502;
  t2602 = -1.*t2395;
  t2613 = 1. + t2602;
  t2619 = 0.4*t2613*t2502;
  t2647 = -0.4*t2643*t2554;
  t2676 = t2643*t2554;
  t2688 = t2573 + t2676;
  t2689 = 0.64*t2688;
  t2690 = t2619 + t2647 + t2689;
  t2692 = 3.2*t2690;
  p_output1[0]=var2[0] + 0.03125*(2.88*t1179 + t2020 + t2336 + t2592 + t2692)*var2[2] + 0.03125*(t2020 + t2336)*var2[3] + 0.1*(0.4*t1867*t1868 + 0.64*(-1.*t1867*t1868 + t1918) - 0.4*t1852*t918)*var2[4] + 0.03125*(t2592 + t2692)*var2[5] + 0.1*(-0.4*t2395*t2502 + 0.4*t2553*t2554 + 0.64*(-1.*t2553*t2554 + t2573))*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "vel_com_x.hh"

namespace RightStance
{

void vel_com_x_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
