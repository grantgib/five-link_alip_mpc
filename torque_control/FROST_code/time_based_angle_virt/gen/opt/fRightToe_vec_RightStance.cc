/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:19:26 GMT-05:00
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
  double t2665;
  double t2692;
  double t2656;
  double t2713;
  double t2583;
  double t2667;
  double t2718;
  double t2723;
  double t2725;
  double t2726;
  double t2734;
  double t2738;
  double t2624;
  double t2641;
  double t2777;
  double t2784;
  double t2785;
  double t2724;
  double t2754;
  double t2758;
  double t2764;
  double t2765;
  double t2769;
  double t2770;
  double t2771;
  double t2776;
  double t2786;
  double t2787;
  double t2788;
  double t2789;
  double t2790;
  double t2791;
  double t2792;
  double t2793;
  double t2795;
  double t2796;
  double t2797;
  t2665 = Cos(var1[3]);
  t2692 = Sin(var1[2]);
  t2656 = Cos(var1[2]);
  t2713 = Sin(var1[3]);
  t2583 = Cos(var1[4]);
  t2667 = t2656*t2665;
  t2718 = -1.*t2692*t2713;
  t2723 = t2667 + t2718;
  t2725 = -1.*t2665*t2692;
  t2726 = -1.*t2656*t2713;
  t2734 = t2725 + t2726;
  t2738 = Sin(var1[4]);
  t2624 = -1.*t2583;
  t2641 = 1. + t2624;
  t2777 = -1.*t2656*t2665;
  t2784 = t2692*t2713;
  t2785 = t2777 + t2784;
  t2724 = 0.4*t2641*t2723;
  t2754 = -0.4*t2734*t2738;
  t2758 = t2583*t2723;
  t2764 = t2734*t2738;
  t2765 = t2758 + t2764;
  t2769 = 0.8*t2765;
  t2770 = t2724 + t2754 + t2769;
  t2771 = var2[0]*t2770;
  t2776 = 0.4*t2641*t2734;
  t2786 = -0.4*t2785*t2738;
  t2787 = t2583*t2734;
  t2788 = t2785*t2738;
  t2789 = t2787 + t2788;
  t2790 = 0.8*t2789;
  t2791 = t2776 + t2786 + t2790;
  t2792 = var2[2]*t2791;
  t2793 = t2771 + t2792;
  t2795 = t2665*t2692;
  t2796 = t2656*t2713;
  t2797 = t2795 + t2796;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t2793;
  p_output1[3]=t2793;
  p_output1[4]=(-0.4*t2583*t2723 + 0.4*t2738*t2797 + 0.8*(t2758 - 1.*t2738*t2797))*var2[0] + (-0.4*t2583*t2734 + 0.4*t2723*t2738 + 0.8*(-1.*t2723*t2738 + t2787))*var2[2];
  p_output1[5]=0;
  p_output1[6]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_vec_RightStance.hh"

namespace RightStance
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
