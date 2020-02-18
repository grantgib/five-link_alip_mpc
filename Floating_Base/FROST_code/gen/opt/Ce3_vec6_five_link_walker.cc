/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:43 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t2530;
  double t2568;
  double t2455;
  double t2495;
  double t2447;
  double t2487;
  double t2532;
  double t2539;
  double t2554;
  double t2555;
  double t2556;
  double t2578;
  double t2579;
  double t2580;
  double t2584;
  double t2585;
  double t2586;
  double t2587;
  double t2588;
  double t2589;
  double t2590;
  double t2571;
  double t2572;
  double t2573;
  double t2574;
  double t2575;
  double t2576;
  double t2592;
  double t2597;
  double t2598;
  double t2599;
  double t2600;
  double t2591;
  double t2593;
  double t2601;
  double t2456;
  double t2513;
  double t2514;
  double t2515;
  double t2581;
  double t2613;
  double t2614;
  double t2615;
  double t2637;
  double t2638;
  double t2639;
  double t2629;
  double t2630;
  double t2631;
  double t2633;
  double t2634;
  double t2635;
  double t2654;
  double t2655;
  double t2656;
  double t2658;
  double t2659;
  double t2660;
  double t2577;
  double t2582;
  double t2612;
  double t2616;
  double t2617;
  double t2618;
  double t2621;
  double t2622;
  double t2623;
  double t2624;
  double t2625;
  double t2626;
  double t2636;
  double t2640;
  double t2684;
  double t2685;
  double t2645;
  double t2687;
  double t2688;
  double t2647;
  t2530 = Cos(var1[6]);
  t2568 = Sin(var1[6]);
  t2455 = Sin(var1[2]);
  t2495 = Sin(var1[5]);
  t2447 = Cos(var1[5]);
  t2487 = Cos(var1[2]);
  t2532 = -1.*t2530;
  t2539 = 1. + t2532;
  t2554 = 0.4*t2539;
  t2555 = 0.64*t2530;
  t2556 = t2554 + t2555;
  t2578 = t2447*t2530;
  t2579 = -1.*t2495*t2568;
  t2580 = t2578 + t2579;
  t2584 = t2556*t2530;
  t2585 = Power(t2568,2);
  t2586 = 0.24*t2585;
  t2587 = t2584 + t2586;
  t2588 = -1.*t2530*t2495;
  t2589 = -1.*t2447*t2568;
  t2590 = t2588 + t2589;
  t2571 = t2556*t2568;
  t2572 = -0.24*t2530*t2568;
  t2573 = t2571 + t2572;
  t2574 = t2530*t2495;
  t2575 = t2447*t2568;
  t2576 = t2574 + t2575;
  t2592 = -1.*t2455*t2580;
  t2597 = -1.*t2487*t2447;
  t2598 = t2455*t2495;
  t2599 = t2597 + t2598;
  t2600 = -0.748*t2599;
  t2591 = t2487*t2590;
  t2593 = t2591 + t2592;
  t2601 = -1.*t2455*t2590;
  t2456 = -1.*t2447*t2455;
  t2513 = -1.*t2487*t2495;
  t2514 = t2456 + t2513;
  t2515 = -0.748*t2514;
  t2581 = t2487*t2580;
  t2613 = -1.*t2447*t2530;
  t2614 = t2495*t2568;
  t2615 = t2613 + t2614;
  t2637 = t2447*t2556;
  t2638 = -0.24*t2495*t2568;
  t2639 = t2637 + t2638;
  t2629 = -1.*t2556*t2495;
  t2630 = -0.24*t2447*t2568;
  t2631 = t2629 + t2630;
  t2633 = t2556*t2495;
  t2634 = 0.24*t2447*t2568;
  t2635 = t2633 + t2634;
  t2654 = -1.*t2556*t2568;
  t2655 = 0.24*t2530*t2568;
  t2656 = t2654 + t2655;
  t2658 = Power(t2530,2);
  t2659 = -0.24*t2658;
  t2660 = t2584 + t2659;
  t2577 = -1.*t2455*t2576;
  t2582 = t2577 + t2581;
  t2612 = -3.2*t2573*t2593;
  t2616 = t2487*t2615;
  t2617 = t2601 + t2616;
  t2618 = -3.2*t2587*t2617;
  t2621 = t2455*t2590;
  t2622 = t2621 + t2581;
  t2623 = -3.2*t2573*t2622;
  t2624 = t2455*t2615;
  t2625 = t2591 + t2624;
  t2626 = -3.2*t2587*t2625;
  t2636 = t2635*t2580;
  t2640 = t2590*t2639;
  t2684 = -0.24*t2530*t2495;
  t2685 = t2684 + t2630;
  t2645 = -1.*t2590*t2635;
  t2687 = 0.24*t2447*t2530;
  t2688 = t2687 + t2638;
  t2647 = -1.*t2639*t2615;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t2515 - 3.2*t2573*t2582 - 3.2*t2587*t2593)*var2[0] - 0.5*(-3.2*t2573*(-1.*t2487*t2576 + t2592) + t2600 - 3.2*t2587*(-1.*t2487*t2580 + t2601))*var2[1])*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*(t2515 + t2623 + t2626)*var2[0] - 0.5*(t2600 + t2612 + t2618)*var2[1] - 0.5*(-3.2*t2587*(t2580*t2631 + t2636 + t2576*t2639 + t2640) - 3.2*t2573*(-1.*t2590*t2631 - 1.*t2580*t2639 + t2645 + t2647))*var2[2])*var2[5];
  p_output1[6]=var2[5]*(-0.5*(t2623 + t2626 - 3.2*t2622*t2656 - 3.2*(t2487*t2576 + t2455*t2580)*t2660)*var2[0] - 0.5*(t2612 + t2618 - 3.2*t2593*t2656 - 3.2*t2582*t2660)*var2[1] - 0.5*(-3.2*(t2576*t2635 + t2580*t2639)*t2656 - 3.2*(-1.*t2580*t2635 - 1.*t2590*t2639)*t2660 - 3.2*t2587*(t2636 + t2640 + t2580*t2685 + t2576*t2688) - 3.2*t2573*(t2645 + t2647 - 1.*t2590*t2685 - 1.*t2580*t2688))*var2[2] - 0.5*(-6.4*t2587*t2656 - 6.4*t2573*t2660)*var2[5] + 0.384*t2656*var2[6]);
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

#include "Ce3_vec6_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
