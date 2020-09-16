/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 15:03:12 GMT-04:00
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
  double t2554;
  double t2574;
  double t2546;
  double t2586;
  double t529;
  double t2573;
  double t2587;
  double t2597;
  double t2610;
  double t2612;
  double t2617;
  double t2618;
  double t2511;
  double t2528;
  double t2734;
  double t2745;
  double t2746;
  double t2599;
  double t2660;
  double t2668;
  double t2672;
  double t2678;
  double t2708;
  double t2713;
  double t2714;
  double t2758;
  double t2759;
  double t2760;
  double t2763;
  double t2766;
  double t2774;
  double t2775;
  double t2784;
  double t2785;
  double t2805;
  double t2816;
  double t2817;
  double t2788;
  double t2789;
  double t2792;
  double t2796;
  double t2797;
  double t2802;
  double t2803;
  double t2804;
  double t2827;
  double t2828;
  double t2829;
  double t2830;
  double t2831;
  double t2834;
  double t2837;
  double t2845;
  double t2846;
  double t2851;
  double t2852;
  double t2853;
  double t2854;
  double t2855;
  t2554 = Cos(var1[3]);
  t2574 = Sin(var1[2]);
  t2546 = Cos(var1[2]);
  t2586 = Sin(var1[3]);
  t529 = Cos(var1[4]);
  t2573 = -1.*t2546*t2554;
  t2587 = t2574*t2586;
  t2597 = t2573 + t2587;
  t2610 = t2554*t2574;
  t2612 = t2546*t2586;
  t2617 = t2610 + t2612;
  t2618 = Sin(var1[4]);
  t2511 = -1.*t529;
  t2528 = 1. + t2511;
  t2734 = -1.*t2554*t2574;
  t2745 = -1.*t2546*t2586;
  t2746 = t2734 + t2745;
  t2599 = 0.4*t2528*t2597;
  t2660 = -0.4*t2617*t2618;
  t2668 = t529*t2597;
  t2672 = t2617*t2618;
  t2678 = t2668 + t2672;
  t2708 = 0.8*t2678;
  t2713 = t2599 + t2660 + t2708;
  t2714 = var2[2]*t2713;
  t2758 = 0.4*t2528*t2746;
  t2759 = -0.4*t2597*t2618;
  t2760 = t529*t2746;
  t2763 = t2597*t2618;
  t2766 = t2760 + t2763;
  t2774 = 0.8*t2766;
  t2775 = t2758 + t2759 + t2774;
  t2784 = var2[0]*t2775;
  t2785 = t2714 + t2784;
  t2805 = t2546*t2554;
  t2816 = -1.*t2574*t2586;
  t2817 = t2805 + t2816;
  t2788 = -0.4*t529*t2597;
  t2789 = 0.4*t2746*t2618;
  t2792 = -1.*t2746*t2618;
  t2796 = t2668 + t2792;
  t2797 = 0.8*t2796;
  t2802 = t2788 + t2789 + t2797;
  t2803 = var2[2]*t2802;
  t2804 = -0.4*t529*t2746;
  t2827 = 0.4*t2817*t2618;
  t2828 = -1.*t2817*t2618;
  t2829 = t2760 + t2828;
  t2830 = 0.8*t2829;
  t2831 = t2804 + t2827 + t2830;
  t2834 = var2[0]*t2831;
  t2837 = t2803 + t2834;
  t2845 = 0.4*t2528*t2817;
  t2846 = -0.4*t2746*t2618;
  t2851 = t529*t2817;
  t2852 = t2746*t2618;
  t2853 = t2851 + t2852;
  t2854 = 0.8*t2853;
  t2855 = t2845 + t2846 + t2854;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t2785;
  p_output1[3]=t2785;
  p_output1[4]=t2837;
  p_output1[5]=t2855;
  p_output1[6]=t2775;
  p_output1[7]=t2785;
  p_output1[8]=t2785;
  p_output1[9]=t2837;
  p_output1[10]=t2855;
  p_output1[11]=t2775;
  p_output1[12]=t2837;
  p_output1[13]=t2837;
  p_output1[14]=(t2827 + 0.4*t2617*t529 + 0.8*(t2828 - 1.*t2617*t529))*var2[0] + (t2789 + 0.4*t2817*t529 + 0.8*(t2792 - 1.*t2817*t529))*var2[2];
  p_output1[15]=0.4*t2617*t2618 + 0.8*(-1.*t2617*t2618 + t2851) - 0.4*t2817*t529;
  p_output1[16]=t2831;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightToe_vec_RightStance.hh"

namespace RightStance
{

void J_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
