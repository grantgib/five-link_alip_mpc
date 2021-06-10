/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:46 GMT-05:00
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
  double t1948;
  double t1850;
  double t1855;
  double t1950;
  double t1092;
  double t1873;
  double t1992;
  double t2001;
  double t2039;
  double t2209;
  double t2345;
  double t2350;
  double t2566;
  double t2706;
  double t2708;
  double t2711;
  double t2747;
  double t2749;
  double t2746;
  double t2748;
  double t2750;
  double t2751;
  double t2757;
  double t2758;
  double t2759;
  double t2766;
  double t2768;
  double t2788;
  double t2789;
  double t2790;
  double t2699;
  double t2702;
  double t2703;
  double t2704;
  double t2714;
  double t2717;
  double t2722;
  double t2724;
  double t2726;
  double t2731;
  double t2775;
  double t2777;
  double t2780;
  double t2787;
  double t2791;
  double t2792;
  double t2793;
  double t2794;
  double t2795;
  double t2816;
  double t2017;
  double t2523;
  double t2574;
  double t2580;
  double t2581;
  double t2585;
  double t2591;
  double t2732;
  double t2744;
  double t2872;
  double t2880;
  double t2892;
  double t2755;
  double t2767;
  double t2769;
  double t2770;
  double t2771;
  double t2773;
  double t2774;
  double t2833;
  double t2835;
  double t2962;
  double t2965;
  double t2970;
  double t3001;
  double t3021;
  double t3030;
  double t3033;
  double t3049;
  double t3057;
  double t3065;
  double t3096;
  double t3099;
  double t3102;
  double t3113;
  double t3128;
  double t3135;
  double t3140;
  double t3141;
  double t3147;
  double t3210;
  double t3223;
  t1948 = Cos(var1[2]);
  t1850 = Cos(var1[3]);
  t1855 = Sin(var1[2]);
  t1950 = Sin(var1[3]);
  t1092 = Cos(var1[4]);
  t1873 = -1.*t1850*t1855;
  t1992 = -1.*t1948*t1950;
  t2001 = t1873 + t1992;
  t2039 = t1948*t1850;
  t2209 = -1.*t1855*t1950;
  t2345 = t2039 + t2209;
  t2350 = Sin(var1[4]);
  t2566 = t1092*t2001;
  t2706 = -1.*t1948*t1850;
  t2708 = t1855*t1950;
  t2711 = t2706 + t2708;
  t2747 = Cos(var1[5]);
  t2749 = Sin(var1[5]);
  t2746 = Cos(var1[6]);
  t2748 = -1.*t2747*t1855;
  t2750 = -1.*t1948*t2749;
  t2751 = t2748 + t2750;
  t2757 = t1948*t2747;
  t2758 = -1.*t1855*t2749;
  t2759 = t2757 + t2758;
  t2766 = Sin(var1[6]);
  t2768 = t2746*t2751;
  t2788 = -1.*t1948*t2747;
  t2789 = t1855*t2749;
  t2790 = t2788 + t2789;
  t2699 = 0.748*t2001;
  t2702 = -1.*t1092;
  t2703 = 1. + t2702;
  t2704 = 0.4*t2703*t2001;
  t2714 = -0.4*t2711*t2350;
  t2717 = t2711*t2350;
  t2722 = t2566 + t2717;
  t2724 = 0.64*t2722;
  t2726 = t2704 + t2714 + t2724;
  t2731 = 3.2*t2726;
  t2775 = 0.748*t2751;
  t2777 = -1.*t2746;
  t2780 = 1. + t2777;
  t2787 = 0.4*t2780*t2751;
  t2791 = -0.4*t2790*t2766;
  t2792 = t2790*t2766;
  t2793 = t2768 + t2792;
  t2794 = 0.64*t2793;
  t2795 = t2787 + t2791 + t2794;
  t2816 = 3.2*t2795;
  t2017 = -0.4*t1092*t2001;
  t2523 = 0.4*t2345*t2350;
  t2574 = -1.*t2345*t2350;
  t2580 = t2566 + t2574;
  t2581 = 0.64*t2580;
  t2585 = t2017 + t2523 + t2581;
  t2591 = 0.1*var2[4]*t2585;
  t2732 = t2699 + t2731;
  t2744 = 0.03125*var2[3]*t2732;
  t2872 = t1850*t1855;
  t2880 = t1948*t1950;
  t2892 = t2872 + t2880;
  t2755 = -0.4*t2746*t2751;
  t2767 = 0.4*t2759*t2766;
  t2769 = -1.*t2759*t2766;
  t2770 = t2768 + t2769;
  t2771 = 0.64*t2770;
  t2773 = t2755 + t2767 + t2771;
  t2774 = 0.1*var2[6]*t2773;
  t2833 = t2775 + t2816;
  t2835 = 0.03125*var2[5]*t2833;
  t2962 = t2747*t1855;
  t2965 = t1948*t2749;
  t2970 = t2962 + t2965;
  t3001 = 0.748*t2345;
  t3021 = 0.4*t2703*t2345;
  t3030 = -0.4*t2001*t2350;
  t3033 = t1092*t2345;
  t3049 = t2001*t2350;
  t3057 = t3033 + t3049;
  t3065 = 0.64*t3057;
  t3096 = t3021 + t3030 + t3065;
  t3099 = 3.2*t3096;
  t3102 = 0.748*t2759;
  t3113 = 0.4*t2780*t2759;
  t3128 = -0.4*t2751*t2766;
  t3135 = t2746*t2759;
  t3140 = t2751*t2766;
  t3141 = t3135 + t3140;
  t3147 = 0.64*t3141;
  t3210 = t3113 + t3128 + t3147;
  t3223 = 3.2*t3210;
  p_output1[0]=t2591 + t2744 + t2774 + t2835 + 0.03125*(-2.88*t1855 + t2699 + t2731 + t2775 + t2816)*var2[2];
  p_output1[1]=t2591 + t2744 + 0.03125*t2732*var2[2];
  p_output1[2]=0.1*t2585*var2[2] + 0.1*t2585*var2[3] + 0.1*(t2523 + 0.4*t1092*t2892 + 0.64*(t2574 - 1.*t1092*t2892))*var2[4];
  p_output1[3]=t2774 + t2835 + 0.03125*t2833*var2[2];
  p_output1[4]=0.1*t2773*var2[2] + 0.1*t2773*var2[5] + 0.1*(t2767 + 0.4*t2746*t2970 + 0.64*(t2769 - 1.*t2746*t2970))*var2[6];
  p_output1[5]=1.;
  p_output1[6]=0.03125*(2.88*t1948 + t3001 + t3099 + t3102 + t3223);
  p_output1[7]=0.03125*(t3001 + t3099);
  p_output1[8]=0.1*(-0.4*t1092*t2345 + 0.4*t2350*t2892 + 0.64*(-1.*t2350*t2892 + t3033));
  p_output1[9]=0.03125*(t3102 + t3223);
  p_output1[10]=0.1*(-0.4*t2746*t2759 + 0.4*t2766*t2970 + 0.64*(-1.*t2766*t2970 + t3135));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_vel_com_x.hh"

namespace RightStance
{

void J_vel_com_x_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
