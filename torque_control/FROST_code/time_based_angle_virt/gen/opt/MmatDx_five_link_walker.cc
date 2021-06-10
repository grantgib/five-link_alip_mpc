/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:19:22 GMT-05:00
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
  double t2567;
  double t2504;
  double t2558;
  double t2570;
  double t2580;
  double t2503;
  double t2559;
  double t2574;
  double t2575;
  double t2579;
  double t2583;
  double t2584;
  double t2587;
  double t2588;
  double t2591;
  double t2605;
  double t2606;
  double t2609;
  double t2610;
  double t2613;
  double t2636;
  double t2633;
  double t2634;
  double t2637;
  double t2635;
  double t2638;
  double t2639;
  double t2640;
  double t2641;
  double t2642;
  double t2643;
  double t2644;
  double t2645;
  double t2651;
  double t2652;
  double t2653;
  double t2654;
  double t2655;
  double t2597;
  double t2598;
  double t2601;
  double t2624;
  double t2625;
  double t2626;
  double t2627;
  double t2628;
  double t2629;
  double t2647;
  double t2648;
  double t2649;
  double t2664;
  double t2665;
  double t2666;
  double t2667;
  double t2668;
  double t2669;
  double t2677;
  double t2678;
  double t2679;
  double t2692;
  double t2693;
  double t2694;
  double t2734;
  double t2735;
  double t2736;
  double t2738;
  double t2739;
  double t2740;
  double t2754;
  double t2755;
  double t2756;
  double t2758;
  double t2759;
  double t2760;
  double t2681;
  double t2682;
  double t2683;
  double t2673;
  double t2674;
  double t2675;
  double t2621;
  double t2622;
  double t2623;
  double t2685;
  double t2686;
  double t2614;
  double t2617;
  double t2618;
  double t2619;
  double t2696;
  double t2697;
  double t2698;
  double t2688;
  double t2689;
  double t2690;
  double t2661;
  double t2662;
  double t2663;
  double t2700;
  double t2701;
  double t2656;
  double t2657;
  double t2658;
  double t2659;
  double t2705;
  double t2706;
  double t2707;
  double t2708;
  double t2711;
  double t2712;
  double t2719;
  double t2720;
  double t2676;
  double t2680;
  double t2684;
  double t2687;
  double t2691;
  double t2695;
  double t2699;
  double t2702;
  double t2703;
  double t2728;
  double t2729;
  double t2730;
  double t2731;
  double t2732;
  double t2737;
  double t2741;
  double t2742;
  double t2744;
  double t2745;
  double t2746;
  double t2748;
  double t2749;
  double t2750;
  double t2751;
  double t2752;
  double t2757;
  double t2761;
  double t2762;
  double t2764;
  double t2765;
  double t2766;
  double t2727;
  double t2733;
  double t2743;
  double t2747;
  double t2753;
  double t2763;
  double t2767;
  double t2768;
  double t2798;
  double t2799;
  double t2800;
  double t2801;
  double t2802;
  double t2803;
  double t2804;
  double t2805;
  double t2772;
  double t2773;
  double t2774;
  double t2775;
  double t2602;
  double t2620;
  double t2630;
  double t2631;
  double t2811;
  double t2812;
  double t2813;
  double t2814;
  double t2841;
  double t2842;
  double t2808;
  double t2809;
  double t2778;
  double t2779;
  double t2780;
  double t2781;
  double t2650;
  double t2660;
  double t2670;
  double t2671;
  double t2819;
  double t2820;
  double t2821;
  double t2822;
  double t2860;
  double t2861;
  double t2816;
  double t2817;
  t2567 = Cos(var1[3]);
  t2504 = Cos(var1[4]);
  t2558 = Sin(var1[3]);
  t2570 = Sin(var1[4]);
  t2580 = Cos(var1[2]);
  t2503 = Sin(var1[2]);
  t2559 = -1.*t2504*t2558;
  t2574 = -1.*t2567*t2570;
  t2575 = t2559 + t2574;
  t2579 = t2503*t2575;
  t2583 = t2567*t2504;
  t2584 = -1.*t2558*t2570;
  t2587 = t2583 + t2584;
  t2588 = t2580*t2587;
  t2591 = t2579 + t2588;
  t2605 = -1.*t2504;
  t2606 = 1. + t2605;
  t2609 = 0.4*t2606;
  t2610 = 0.64*t2504;
  t2613 = t2609 + t2610;
  t2636 = Cos(var1[5]);
  t2633 = Cos(var1[6]);
  t2634 = Sin(var1[5]);
  t2637 = Sin(var1[6]);
  t2635 = -1.*t2633*t2634;
  t2638 = -1.*t2636*t2637;
  t2639 = t2635 + t2638;
  t2640 = t2503*t2639;
  t2641 = t2636*t2633;
  t2642 = -1.*t2634*t2637;
  t2643 = t2641 + t2642;
  t2644 = t2580*t2643;
  t2645 = t2640 + t2644;
  t2651 = -1.*t2633;
  t2652 = 1. + t2651;
  t2653 = 0.4*t2652;
  t2654 = 0.64*t2633;
  t2655 = t2653 + t2654;
  t2597 = t2580*t2567;
  t2598 = -1.*t2503*t2558;
  t2601 = t2597 + t2598;
  t2624 = t2504*t2558;
  t2625 = t2567*t2570;
  t2626 = t2624 + t2625;
  t2627 = t2580*t2626;
  t2628 = t2503*t2587;
  t2629 = t2627 + t2628;
  t2647 = t2580*t2636;
  t2648 = -1.*t2503*t2634;
  t2649 = t2647 + t2648;
  t2664 = t2633*t2634;
  t2665 = t2636*t2637;
  t2666 = t2664 + t2665;
  t2667 = t2580*t2666;
  t2668 = t2503*t2643;
  t2669 = t2667 + t2668;
  t2677 = t2567*t2503;
  t2678 = t2580*t2558;
  t2679 = t2677 + t2678;
  t2692 = t2636*t2503;
  t2693 = t2580*t2634;
  t2694 = t2692 + t2693;
  t2734 = t2613*t2558;
  t2735 = 0.24*t2567*t2570;
  t2736 = t2734 + t2735;
  t2738 = t2567*t2613;
  t2739 = -0.24*t2558*t2570;
  t2740 = t2738 + t2739;
  t2754 = t2655*t2634;
  t2755 = 0.24*t2636*t2637;
  t2756 = t2754 + t2755;
  t2758 = t2636*t2655;
  t2759 = -0.24*t2634*t2637;
  t2760 = t2758 + t2759;
  t2681 = t2580*t2575;
  t2682 = -1.*t2503*t2587;
  t2683 = t2681 + t2682;
  t2673 = -1.*t2567*t2503;
  t2674 = -1.*t2580*t2558;
  t2675 = t2673 + t2674;
  t2621 = t2613*t2570;
  t2622 = -0.24*t2504*t2570;
  t2623 = t2621 + t2622;
  t2685 = -1.*t2503*t2626;
  t2686 = t2685 + t2588;
  t2614 = t2613*t2504;
  t2617 = Power(t2570,2);
  t2618 = 0.24*t2617;
  t2619 = t2614 + t2618;
  t2696 = t2580*t2639;
  t2697 = -1.*t2503*t2643;
  t2698 = t2696 + t2697;
  t2688 = -1.*t2636*t2503;
  t2689 = -1.*t2580*t2634;
  t2690 = t2688 + t2689;
  t2661 = t2655*t2637;
  t2662 = -0.24*t2633*t2637;
  t2663 = t2661 + t2662;
  t2700 = -1.*t2503*t2666;
  t2701 = t2700 + t2644;
  t2656 = t2655*t2633;
  t2657 = Power(t2637,2);
  t2658 = 0.24*t2657;
  t2659 = t2656 + t2658;
  t2705 = Power(t2580,2);
  t2706 = -12.*t2705;
  t2707 = Power(t2503,2);
  t2708 = -12.*t2707;
  t2711 = Power(t2601,2);
  t2712 = -6.8*t2711;
  t2719 = Power(t2649,2);
  t2720 = -6.8*t2719;
  t2676 = -6.8*t2675*t2601;
  t2680 = -6.8*t2679*t2601;
  t2684 = -3.2*t2591*t2683;
  t2687 = -3.2*t2686*t2629;
  t2691 = -6.8*t2690*t2649;
  t2695 = -6.8*t2694*t2649;
  t2699 = -3.2*t2645*t2698;
  t2702 = -3.2*t2701*t2669;
  t2703 = t2676 + t2680 + t2684 + t2687 + t2691 + t2695 + t2699 + t2702;
  t2728 = Power(t2567,2);
  t2729 = 0.11*t2728;
  t2730 = Power(t2558,2);
  t2731 = 0.11*t2730;
  t2732 = t2729 + t2731;
  t2737 = -1.*t2736*t2587;
  t2741 = -1.*t2575*t2740;
  t2742 = t2737 + t2741;
  t2744 = t2736*t2626;
  t2745 = t2587*t2740;
  t2746 = t2744 + t2745;
  t2748 = Power(t2636,2);
  t2749 = 0.11*t2748;
  t2750 = Power(t2634,2);
  t2751 = 0.11*t2750;
  t2752 = t2749 + t2751;
  t2757 = -1.*t2756*t2643;
  t2761 = -1.*t2639*t2760;
  t2762 = t2757 + t2761;
  t2764 = t2756*t2666;
  t2765 = t2643*t2760;
  t2766 = t2764 + t2765;
  t2727 = -2.88*t2580;
  t2733 = -6.8*t2601*t2732;
  t2743 = -3.2*t2629*t2742;
  t2747 = -3.2*t2591*t2746;
  t2753 = -6.8*t2649*t2752;
  t2763 = -3.2*t2669*t2762;
  t2767 = -3.2*t2645*t2766;
  t2768 = t2727 + t2733 + t2743 + t2747 + t2753 + t2763 + t2767;
  t2798 = 2.88*t2503;
  t2799 = -6.8*t2675*t2732;
  t2800 = -3.2*t2686*t2742;
  t2801 = -3.2*t2683*t2746;
  t2802 = -6.8*t2690*t2752;
  t2803 = -3.2*t2701*t2762;
  t2804 = -3.2*t2698*t2766;
  t2805 = t2798 + t2799 + t2800 + t2801 + t2802 + t2803 + t2804;
  t2772 = -0.748*t2675;
  t2773 = -3.2*t2623*t2686;
  t2774 = -3.2*t2619*t2683;
  t2775 = t2772 + t2773 + t2774;
  t2602 = -0.748*t2601;
  t2620 = -3.2*t2619*t2591;
  t2630 = -3.2*t2623*t2629;
  t2631 = t2602 + t2620 + t2630;
  t2811 = -0.748*t2732;
  t2812 = -3.2*t2623*t2742;
  t2813 = -3.2*t2619*t2746;
  t2814 = -0.67 + t2811 + t2812 + t2813;
  t2841 = -0.768*t2619;
  t2842 = -0.2 + t2841;
  t2808 = -0.768*t2746;
  t2809 = -0.2 + t2808;
  t2778 = -0.748*t2690;
  t2779 = -3.2*t2663*t2701;
  t2780 = -3.2*t2659*t2698;
  t2781 = t2778 + t2779 + t2780;
  t2650 = -0.748*t2649;
  t2660 = -3.2*t2659*t2645;
  t2670 = -3.2*t2663*t2669;
  t2671 = t2650 + t2660 + t2670;
  t2819 = -0.748*t2752;
  t2820 = -3.2*t2663*t2762;
  t2821 = -3.2*t2659*t2766;
  t2822 = -0.67 + t2819 + t2820 + t2821;
  t2860 = -0.768*t2659;
  t2861 = -0.2 + t2860;
  t2816 = -0.768*t2766;
  t2817 = -0.2 + t2816;
  p_output1[0]=(-3.2*Power(t2591,2) - 3.2*Power(t2629,2) - 3.2*Power(t2645,2) - 3.2*Power(t2669,2) - 6.8*Power(t2679,2) - 6.8*Power(t2694,2) + t2706 + t2708 + t2712 + t2720)*var2[0] + t2703*var2[1] + t2768*var2[2] + t2631*var2[3] - 0.768*t2591*var2[4] + t2671*var2[5] - 0.768*t2645*var2[6];
  p_output1[1]=t2703*var2[0] + (-6.8*Power(t2675,2) - 3.2*Power(t2683,2) - 3.2*Power(t2686,2) - 6.8*Power(t2690,2) - 3.2*Power(t2698,2) - 3.2*Power(t2701,2) + t2706 + t2708 + t2712 + t2720)*var2[1] + t2805*var2[2] + t2775*var2[3] - 0.768*t2683*var2[4] + t2781*var2[5] - 0.768*t2698*var2[6];
  p_output1[2]=t2768*var2[0] + t2805*var2[1] + (-3.3612 - 6.8*Power(t2732,2) - 3.2*Power(t2742,2) - 3.2*Power(t2746,2) - 6.8*Power(t2752,2) - 3.2*Power(t2762,2) - 3.2*Power(t2766,2))*var2[2] + t2814*var2[3] + t2809*var2[4] + t2822*var2[5] + t2817*var2[6];
  p_output1[3]=t2631*var2[0] + t2775*var2[1] + t2814*var2[2] + (-1.58228 - 3.2*Power(t2619,2) - 3.2*Power(t2623,2))*var2[3] + t2842*var2[4];
  p_output1[4]=-0.768*t2591*var2[0] - 0.768*t2683*var2[1] + t2809*var2[2] + t2842*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t2671*var2[0] + t2781*var2[1] + t2822*var2[2] + (-1.58228 - 3.2*Power(t2659,2) - 3.2*Power(t2663,2))*var2[5] + t2861*var2[6];
  p_output1[6]=-0.768*t2645*var2[0] - 0.768*t2698*var2[1] + t2817*var2[2] + t2861*var2[5] - 1.2143199999999998*var2[6];
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

#include "MmatDx_five_link_walker.hh"

namespace RightStance
{

void MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
