/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:19:23 GMT-05:00
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
  double t2579;
  double t2588;
  double t2592;
  double t2597;
  double t2613;
  double t2614;
  double t2621;
  double t2625;
  double t2640;
  double t2641;
  double t2644;
  double t2646;
  double t2668;
  double t2672;
  double t2677;
  double t2678;
  double t2681;
  double t2693;
  double t2710;
  double t2713;
  double t2714;
  double t2715;
  double t2624;
  double t2627;
  double t2628;
  double t2632;
  double t2647;
  double t2655;
  double t2656;
  double t2661;
  double t2664;
  double t2665;
  double t2667;
  double t2738;
  double t2744;
  double t2745;
  double t2692;
  double t2696;
  double t2704;
  double t2709;
  double t2716;
  double t2717;
  double t2718;
  double t2721;
  double t2722;
  double t2723;
  double t2724;
  double t2777;
  double t2782;
  double t2783;
  t2579 = Sin(var1[2]);
  t2588 = Cos(var1[3]);
  t2592 = -1.*t2588*t2579;
  t2597 = Cos(var1[2]);
  t2613 = Sin(var1[3]);
  t2614 = -1.*t2597*t2613;
  t2621 = t2592 + t2614;
  t2625 = Cos(var1[4]);
  t2640 = -1.*t2597*t2588;
  t2641 = t2579*t2613;
  t2644 = t2640 + t2641;
  t2646 = Sin(var1[4]);
  t2668 = Cos(var1[5]);
  t2672 = -1.*t2668*t2579;
  t2677 = Sin(var1[5]);
  t2678 = -1.*t2597*t2677;
  t2681 = t2672 + t2678;
  t2693 = Cos(var1[6]);
  t2710 = -1.*t2597*t2668;
  t2713 = t2579*t2677;
  t2714 = t2710 + t2713;
  t2715 = Sin(var1[6]);
  t2624 = -7.33788*t2621;
  t2627 = -1.*t2625;
  t2628 = 1. + t2627;
  t2632 = 0.4*t2628*t2621;
  t2647 = -0.4*t2644*t2646;
  t2655 = t2625*t2621;
  t2656 = t2644*t2646;
  t2661 = t2655 + t2656;
  t2664 = 0.64*t2661;
  t2665 = t2632 + t2647 + t2664;
  t2667 = -31.392000000000003*t2665;
  t2738 = t2597*t2588;
  t2744 = -1.*t2579*t2613;
  t2745 = t2738 + t2744;
  t2692 = -7.33788*t2681;
  t2696 = -1.*t2693;
  t2704 = 1. + t2696;
  t2709 = 0.4*t2704*t2681;
  t2716 = -0.4*t2714*t2715;
  t2717 = t2693*t2681;
  t2718 = t2714*t2715;
  t2721 = t2717 + t2718;
  t2722 = 0.64*t2721;
  t2723 = t2709 + t2716 + t2722;
  t2724 = -31.392000000000003*t2723;
  t2777 = t2597*t2668;
  t2782 = -1.*t2579*t2677;
  t2783 = t2777 + t2782;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=28.252799999999997*t2579 + t2624 + t2667 + t2692 + t2724;
  p_output1[3]=t2624 + t2667;
  p_output1[4]=-31.392000000000003*(-0.4*t2621*t2625 + 0.4*t2646*t2745 + 0.64*(t2655 - 1.*t2646*t2745));
  p_output1[5]=t2692 + t2724;
  p_output1[6]=-31.392000000000003*(-0.4*t2681*t2693 + 0.4*t2715*t2783 + 0.64*(t2717 - 1.*t2715*t2783));
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

#include "Ge_vec_five_link_walker.hh"

namespace RightStance
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
