/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 21:08:34 GMT-04:00
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
  double t164;
  double t674;
  double t808;
  double t1509;
  double t2509;
  double t2511;
  double t2516;
  double t2531;
  double t2546;
  double t2554;
  double t2555;
  double t2560;
  double t2591;
  double t2592;
  double t2595;
  double t2597;
  double t2598;
  double t2601;
  double t2610;
  double t2612;
  double t2613;
  double t2614;
  double t2528;
  double t2532;
  double t2535;
  double t2538;
  double t2570;
  double t2573;
  double t2574;
  double t2577;
  double t2580;
  double t2586;
  double t2587;
  double t2688;
  double t2692;
  double t2698;
  double t2599;
  double t2602;
  double t2606;
  double t2607;
  double t2616;
  double t2617;
  double t2618;
  double t2625;
  double t2645;
  double t2660;
  double t2668;
  double t2718;
  double t2721;
  double t2725;
  double t2678;
  double t2679;
  double t2699;
  double t2703;
  double t2704;
  double t2706;
  double t2708;
  double t2713;
  double t2746;
  double t2756;
  double t2757;
  double t2714;
  double t2717;
  double t2726;
  double t2731;
  double t2732;
  double t2733;
  double t2734;
  double t2745;
  double t2775;
  double t2777;
  double t2779;
  t164 = Cos(var1[2]);
  t674 = Cos(var1[3]);
  t808 = -1.*t164*t674;
  t1509 = Sin(var1[2]);
  t2509 = Sin(var1[3]);
  t2511 = t1509*t2509;
  t2516 = t808 + t2511;
  t2531 = Cos(var1[4]);
  t2546 = t674*t1509;
  t2554 = t164*t2509;
  t2555 = t2546 + t2554;
  t2560 = Sin(var1[4]);
  t2591 = Cos(var1[5]);
  t2592 = -1.*t164*t2591;
  t2595 = Sin(var1[5]);
  t2597 = t1509*t2595;
  t2598 = t2592 + t2597;
  t2601 = Cos(var1[6]);
  t2610 = t2591*t1509;
  t2612 = t164*t2595;
  t2613 = t2610 + t2612;
  t2614 = Sin(var1[6]);
  t2528 = -7.33788*t2516;
  t2532 = -1.*t2531;
  t2535 = 1. + t2532;
  t2538 = 0.4*t2535*t2516;
  t2570 = -0.4*t2555*t2560;
  t2573 = t2531*t2516;
  t2574 = t2555*t2560;
  t2577 = t2573 + t2574;
  t2580 = 0.64*t2577;
  t2586 = t2538 + t2570 + t2580;
  t2587 = -31.392000000000003*t2586;
  t2688 = -1.*t674*t1509;
  t2692 = -1.*t164*t2509;
  t2698 = t2688 + t2692;
  t2599 = -7.33788*t2598;
  t2602 = -1.*t2601;
  t2606 = 1. + t2602;
  t2607 = 0.4*t2606*t2598;
  t2616 = -0.4*t2613*t2614;
  t2617 = t2601*t2598;
  t2618 = t2613*t2614;
  t2625 = t2617 + t2618;
  t2645 = 0.64*t2625;
  t2660 = t2607 + t2616 + t2645;
  t2668 = -31.392000000000003*t2660;
  t2718 = -1.*t2591*t1509;
  t2721 = -1.*t164*t2595;
  t2725 = t2718 + t2721;
  t2678 = t2528 + t2587;
  t2679 = -0.4*t2531*t2516;
  t2699 = 0.4*t2698*t2560;
  t2703 = -1.*t2698*t2560;
  t2704 = t2573 + t2703;
  t2706 = 0.64*t2704;
  t2708 = t2679 + t2699 + t2706;
  t2713 = -31.392000000000003*t2708;
  t2746 = t164*t674;
  t2756 = -1.*t1509*t2509;
  t2757 = t2746 + t2756;
  t2714 = t2599 + t2668;
  t2717 = -0.4*t2601*t2598;
  t2726 = 0.4*t2725*t2614;
  t2731 = -1.*t2725*t2614;
  t2732 = t2617 + t2731;
  t2733 = 0.64*t2732;
  t2734 = t2717 + t2726 + t2733;
  t2745 = -31.392000000000003*t2734;
  t2775 = t164*t2591;
  t2777 = -1.*t1509*t2595;
  t2779 = t2775 + t2777;
  p_output1[0]=28.252799999999997*t164 + t2528 + t2587 + t2599 + t2668;
  p_output1[1]=t2678;
  p_output1[2]=t2713;
  p_output1[3]=t2714;
  p_output1[4]=t2745;
  p_output1[5]=t2678;
  p_output1[6]=t2678;
  p_output1[7]=t2713;
  p_output1[8]=t2713;
  p_output1[9]=t2713;
  p_output1[10]=-31.392000000000003*(t2699 + 0.4*t2531*t2757 + 0.64*(t2703 - 1.*t2531*t2757));
  p_output1[11]=t2714;
  p_output1[12]=t2714;
  p_output1[13]=t2745;
  p_output1[14]=t2745;
  p_output1[15]=t2745;
  p_output1[16]=-31.392000000000003*(t2726 + 0.4*t2601*t2779 + 0.64*(t2731 - 1.*t2601*t2779));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_five_link_walker.hh"

namespace RightStance
{

void J_Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
