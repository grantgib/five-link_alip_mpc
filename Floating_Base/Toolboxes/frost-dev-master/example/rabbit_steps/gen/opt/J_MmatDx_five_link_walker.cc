/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 21:08:29 GMT-04:00
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
  double t2499;
  double t2490;
  double t2491;
  double t2502;
  double t2510;
  double t2478;
  double t2511;
  double t2512;
  double t2513;
  double t2521;
  double t2522;
  double t2523;
  double t2524;
  double t2527;
  double t2494;
  double t2507;
  double t2508;
  double t2509;
  double t2514;
  double t2515;
  double t2550;
  double t2547;
  double t2548;
  double t2551;
  double t2555;
  double t2556;
  double t2557;
  double t2565;
  double t2566;
  double t2567;
  double t2568;
  double t2569;
  double t2549;
  double t2552;
  double t2553;
  double t2554;
  double t2558;
  double t2559;
  double t2517;
  double t2518;
  double t2519;
  double t2587;
  double t2588;
  double t2589;
  double t2535;
  double t2531;
  double t2532;
  double t2533;
  double t2534;
  double t2536;
  double t2561;
  double t2562;
  double t2563;
  double t2602;
  double t2603;
  double t2604;
  double t2577;
  double t2573;
  double t2574;
  double t2575;
  double t2576;
  double t2578;
  double t2591;
  double t2592;
  double t2593;
  double t2595;
  double t2596;
  double t2598;
  double t2599;
  double t2600;
  double t2606;
  double t2607;
  double t2608;
  double t2610;
  double t2611;
  double t2613;
  double t2614;
  double t2615;
  double t2668;
  double t2669;
  double t2670;
  double t2672;
  double t2673;
  double t2674;
  double t2688;
  double t2689;
  double t2690;
  double t2692;
  double t2693;
  double t2694;
  double t2520;
  double t2528;
  double t2529;
  double t2530;
  double t2538;
  double t2539;
  double t2540;
  double t2541;
  double t2705;
  double t2706;
  double t2707;
  double t2708;
  double t2709;
  double t2590;
  double t2594;
  double t2619;
  double t2620;
  double t2621;
  double t2622;
  double t2623;
  double t2624;
  double t2625;
  double t2626;
  double t2627;
  double t2628;
  double t2662;
  double t2663;
  double t2664;
  double t2665;
  double t2666;
  double t2667;
  double t2671;
  double t2675;
  double t2676;
  double t2678;
  double t2679;
  double t2680;
  double t2728;
  double t2729;
  double t2730;
  double t2710;
  double t2711;
  double t2712;
  double t2715;
  double t2716;
  double t2719;
  double t2720;
  double t2721;
  double t2722;
  double t2723;
  double t2724;
  double t2727;
  double t2732;
  double t2733;
  double t2737;
  double t2761;
  double t2762;
  double t2739;
  double t2764;
  double t2765;
  double t2741;
  double t2564;
  double t2570;
  double t2571;
  double t2572;
  double t2580;
  double t2581;
  double t2582;
  double t2583;
  double t2776;
  double t2777;
  double t2778;
  double t2779;
  double t2780;
  double t2605;
  double t2609;
  double t2639;
  double t2640;
  double t2641;
  double t2642;
  double t2643;
  double t2644;
  double t2645;
  double t2646;
  double t2647;
  double t2648;
  double t2682;
  double t2683;
  double t2684;
  double t2685;
  double t2686;
  double t2687;
  double t2691;
  double t2695;
  double t2696;
  double t2698;
  double t2699;
  double t2700;
  double t2799;
  double t2800;
  double t2801;
  double t2781;
  double t2782;
  double t2783;
  double t2786;
  double t2787;
  double t2790;
  double t2791;
  double t2792;
  double t2793;
  double t2794;
  double t2795;
  double t2798;
  double t2803;
  double t2804;
  double t2808;
  double t2832;
  double t2833;
  double t2810;
  double t2835;
  double t2836;
  double t2812;
  double t2629;
  double t2630;
  double t2636;
  double t2637;
  double t2649;
  double t2650;
  double t2656;
  double t2657;
  double t2631;
  double t2632;
  double t2633;
  double t2634;
  double t2635;
  double t2638;
  double t2651;
  double t2652;
  double t2653;
  double t2654;
  double t2655;
  double t2658;
  double t2659;
  double t2892;
  double t2903;
  double t2725;
  double t2913;
  double t2731;
  double t2734;
  double t2735;
  double t2738;
  double t2740;
  double t2742;
  double t2922;
  double t2751;
  double t2752;
  double t2753;
  double t2923;
  double t2747;
  double t2748;
  double t2749;
  double t2924;
  double t2927;
  double t2928;
  double t2759;
  double t2932;
  double t2763;
  double t2766;
  double t2767;
  double t2934;
  double t2769;
  double t2770;
  double t2771;
  double t2898;
  double t2906;
  double t2796;
  double t2916;
  double t2802;
  double t2805;
  double t2806;
  double t2809;
  double t2811;
  double t2813;
  double t2951;
  double t2822;
  double t2823;
  double t2824;
  double t2952;
  double t2818;
  double t2819;
  double t2820;
  double t2953;
  double t2956;
  double t2957;
  double t2830;
  double t2961;
  double t2834;
  double t2837;
  double t2838;
  double t2963;
  double t2840;
  double t2841;
  double t2842;
  double t2864;
  double t2865;
  double t2866;
  double t2867;
  double t2868;
  double t2869;
  double t2870;
  double t2871;
  double t2872;
  double t2847;
  double t2848;
  double t2849;
  double t2850;
  double t2661;
  double t2677;
  double t2681;
  double t2697;
  double t2701;
  double t2702;
  double t2537;
  double t2542;
  double t2543;
  double t2579;
  double t2584;
  double t2585;
  double t2912;
  double t2914;
  double t2915;
  double t2917;
  double t2918;
  double t2919;
  double t2933;
  double t2935;
  double t2936;
  double t2736;
  double t2743;
  double t2744;
  double t2946;
  double t2947;
  double t2948;
  double t2768;
  double t2772;
  double t2773;
  double t2962;
  double t2964;
  double t2965;
  double t2807;
  double t2814;
  double t2815;
  double t2975;
  double t2976;
  double t2977;
  double t2839;
  double t2843;
  double t2844;
  double t2873;
  double t2874;
  double t2875;
  double t2876;
  double t2877;
  double t2878;
  double t2879;
  double t2880;
  double t2893;
  double t2894;
  double t2895;
  double t2925;
  double t2713;
  double t2987;
  double t2988;
  double t2989;
  double t2939;
  double t2940;
  double t2941;
  double t2750;
  double t2754;
  double t2755;
  double t2999;
  double t3000;
  double t3001;
  double t3002;
  double t3003;
  double t2881;
  double t2882;
  double t2883;
  double t2884;
  double t3051;
  double t3052;
  double t3053;
  double t3054;
  double t3090;
  double t3091;
  double t2885;
  double t2981;
  double t3055;
  double t3056;
  double t3084;
  double t3085;
  double t2899;
  double t2900;
  double t2901;
  double t2954;
  double t2784;
  double t3013;
  double t3014;
  double t3015;
  double t2968;
  double t2969;
  double t2970;
  double t2821;
  double t2825;
  double t2826;
  double t3025;
  double t3026;
  double t3027;
  double t3028;
  double t3029;
  double t2886;
  double t2887;
  double t2888;
  double t2889;
  double t3057;
  double t3058;
  double t3059;
  double t3060;
  double t3123;
  double t3124;
  double t2890;
  double t2982;
  double t3061;
  double t3062;
  double t3117;
  double t3118;
  t2499 = Cos(var1[3]);
  t2490 = Cos(var1[4]);
  t2491 = Sin(var1[3]);
  t2502 = Sin(var1[4]);
  t2510 = Sin(var1[2]);
  t2478 = Cos(var1[2]);
  t2511 = t2499*t2490;
  t2512 = -1.*t2491*t2502;
  t2513 = t2511 + t2512;
  t2521 = -1.*t2490;
  t2522 = 1. + t2521;
  t2523 = 0.4*t2522;
  t2524 = 0.64*t2490;
  t2527 = t2523 + t2524;
  t2494 = -1.*t2490*t2491;
  t2507 = -1.*t2499*t2502;
  t2508 = t2494 + t2507;
  t2509 = t2478*t2508;
  t2514 = -1.*t2510*t2513;
  t2515 = t2509 + t2514;
  t2550 = Cos(var1[5]);
  t2547 = Cos(var1[6]);
  t2548 = Sin(var1[5]);
  t2551 = Sin(var1[6]);
  t2555 = t2550*t2547;
  t2556 = -1.*t2548*t2551;
  t2557 = t2555 + t2556;
  t2565 = -1.*t2547;
  t2566 = 1. + t2565;
  t2567 = 0.4*t2566;
  t2568 = 0.64*t2547;
  t2569 = t2567 + t2568;
  t2549 = -1.*t2547*t2548;
  t2552 = -1.*t2550*t2551;
  t2553 = t2549 + t2552;
  t2554 = t2478*t2553;
  t2558 = -1.*t2510*t2557;
  t2559 = t2554 + t2558;
  t2517 = -1.*t2499*t2510;
  t2518 = -1.*t2478*t2491;
  t2519 = t2517 + t2518;
  t2587 = t2478*t2499;
  t2588 = -1.*t2510*t2491;
  t2589 = t2587 + t2588;
  t2535 = t2478*t2513;
  t2531 = t2490*t2491;
  t2532 = t2499*t2502;
  t2533 = t2531 + t2532;
  t2534 = -1.*t2510*t2533;
  t2536 = t2534 + t2535;
  t2561 = -1.*t2550*t2510;
  t2562 = -1.*t2478*t2548;
  t2563 = t2561 + t2562;
  t2602 = t2478*t2550;
  t2603 = -1.*t2510*t2548;
  t2604 = t2602 + t2603;
  t2577 = t2478*t2557;
  t2573 = t2547*t2548;
  t2574 = t2550*t2551;
  t2575 = t2573 + t2574;
  t2576 = -1.*t2510*t2575;
  t2578 = t2576 + t2577;
  t2591 = t2499*t2510;
  t2592 = t2478*t2491;
  t2593 = t2591 + t2592;
  t2595 = t2510*t2508;
  t2596 = t2595 + t2535;
  t2598 = t2478*t2533;
  t2599 = t2510*t2513;
  t2600 = t2598 + t2599;
  t2606 = t2550*t2510;
  t2607 = t2478*t2548;
  t2608 = t2606 + t2607;
  t2610 = t2510*t2553;
  t2611 = t2610 + t2577;
  t2613 = t2478*t2575;
  t2614 = t2510*t2557;
  t2615 = t2613 + t2614;
  t2668 = t2527*t2491;
  t2669 = 0.24*t2499*t2502;
  t2670 = t2668 + t2669;
  t2672 = t2499*t2527;
  t2673 = -0.24*t2491*t2502;
  t2674 = t2672 + t2673;
  t2688 = t2569*t2548;
  t2689 = 0.24*t2550*t2551;
  t2690 = t2688 + t2689;
  t2692 = t2550*t2569;
  t2693 = -0.24*t2548*t2551;
  t2694 = t2692 + t2693;
  t2520 = -0.748*t2519;
  t2528 = t2527*t2502;
  t2529 = -0.24*t2490*t2502;
  t2530 = t2528 + t2529;
  t2538 = t2527*t2490;
  t2539 = Power(t2502,2);
  t2540 = 0.24*t2539;
  t2541 = t2538 + t2540;
  t2705 = -1.*t2499*t2490;
  t2706 = t2491*t2502;
  t2707 = t2705 + t2706;
  t2708 = t2510*t2707;
  t2709 = t2509 + t2708;
  t2590 = -13.6*t2519*t2589;
  t2594 = -13.6*t2593*t2589;
  t2619 = Power(t2519,2);
  t2620 = -6.8*t2619;
  t2621 = -6.8*t2519*t2593;
  t2622 = Power(t2589,2);
  t2623 = -6.8*t2622;
  t2624 = -1.*t2478*t2499;
  t2625 = t2510*t2491;
  t2626 = t2624 + t2625;
  t2627 = -6.8*t2589*t2626;
  t2628 = -1.*t2510*t2508;
  t2662 = Power(t2499,2);
  t2663 = 0.11*t2662;
  t2664 = Power(t2491,2);
  t2665 = 0.11*t2664;
  t2666 = t2663 + t2665;
  t2667 = -6.8*t2519*t2666;
  t2671 = -1.*t2670*t2513;
  t2675 = -1.*t2508*t2674;
  t2676 = t2671 + t2675;
  t2678 = t2670*t2533;
  t2679 = t2513*t2674;
  t2680 = t2678 + t2679;
  t2728 = -1.*t2527*t2491;
  t2729 = -0.24*t2499*t2502;
  t2730 = t2728 + t2729;
  t2710 = -0.768*var2[4]*t2709;
  t2711 = -3.2*t2530*t2596;
  t2712 = -3.2*t2541*t2709;
  t2715 = -6.4*t2596*t2600;
  t2716 = -6.4*t2596*t2709;
  t2719 = -3.2*t2596*t2536;
  t2720 = -3.2*t2515*t2600;
  t2721 = t2478*t2707;
  t2722 = t2628 + t2721;
  t2723 = -3.2*t2596*t2722;
  t2724 = -3.2*t2515*t2709;
  t2727 = -3.2*t2596*t2676;
  t2732 = t2670*t2513;
  t2733 = t2508*t2674;
  t2737 = -3.2*t2680*t2709;
  t2761 = -0.24*t2490*t2491;
  t2762 = t2761 + t2729;
  t2739 = -1.*t2508*t2670;
  t2764 = 0.24*t2499*t2490;
  t2765 = t2764 + t2673;
  t2741 = -1.*t2674*t2707;
  t2564 = -0.748*t2563;
  t2570 = t2569*t2551;
  t2571 = -0.24*t2547*t2551;
  t2572 = t2570 + t2571;
  t2580 = t2569*t2547;
  t2581 = Power(t2551,2);
  t2582 = 0.24*t2581;
  t2583 = t2580 + t2582;
  t2776 = -1.*t2550*t2547;
  t2777 = t2548*t2551;
  t2778 = t2776 + t2777;
  t2779 = t2510*t2778;
  t2780 = t2554 + t2779;
  t2605 = -13.6*t2563*t2604;
  t2609 = -13.6*t2608*t2604;
  t2639 = Power(t2563,2);
  t2640 = -6.8*t2639;
  t2641 = -6.8*t2563*t2608;
  t2642 = Power(t2604,2);
  t2643 = -6.8*t2642;
  t2644 = -1.*t2478*t2550;
  t2645 = t2510*t2548;
  t2646 = t2644 + t2645;
  t2647 = -6.8*t2604*t2646;
  t2648 = -1.*t2510*t2553;
  t2682 = Power(t2550,2);
  t2683 = 0.11*t2682;
  t2684 = Power(t2548,2);
  t2685 = 0.11*t2684;
  t2686 = t2683 + t2685;
  t2687 = -6.8*t2563*t2686;
  t2691 = -1.*t2690*t2557;
  t2695 = -1.*t2553*t2694;
  t2696 = t2691 + t2695;
  t2698 = t2690*t2575;
  t2699 = t2557*t2694;
  t2700 = t2698 + t2699;
  t2799 = -1.*t2569*t2548;
  t2800 = -0.24*t2550*t2551;
  t2801 = t2799 + t2800;
  t2781 = -0.768*var2[6]*t2780;
  t2782 = -3.2*t2572*t2611;
  t2783 = -3.2*t2583*t2780;
  t2786 = -6.4*t2611*t2615;
  t2787 = -6.4*t2611*t2780;
  t2790 = -3.2*t2611*t2578;
  t2791 = -3.2*t2559*t2615;
  t2792 = t2478*t2778;
  t2793 = t2648 + t2792;
  t2794 = -3.2*t2611*t2793;
  t2795 = -3.2*t2559*t2780;
  t2798 = -3.2*t2611*t2696;
  t2803 = t2690*t2557;
  t2804 = t2553*t2694;
  t2808 = -3.2*t2700*t2780;
  t2832 = -0.24*t2547*t2548;
  t2833 = t2832 + t2800;
  t2810 = -1.*t2553*t2690;
  t2835 = 0.24*t2550*t2547;
  t2836 = t2835 + t2693;
  t2812 = -1.*t2694*t2778;
  t2629 = -1.*t2478*t2513;
  t2630 = t2628 + t2629;
  t2636 = -1.*t2478*t2533;
  t2637 = t2636 + t2514;
  t2649 = -1.*t2478*t2557;
  t2650 = t2648 + t2649;
  t2656 = -1.*t2478*t2575;
  t2657 = t2656 + t2558;
  t2631 = -3.2*t2630*t2596;
  t2632 = Power(t2536,2);
  t2633 = -3.2*t2632;
  t2634 = Power(t2515,2);
  t2635 = -3.2*t2634;
  t2638 = -3.2*t2637*t2600;
  t2651 = -3.2*t2650*t2611;
  t2652 = Power(t2578,2);
  t2653 = -3.2*t2652;
  t2654 = Power(t2559,2);
  t2655 = -3.2*t2654;
  t2658 = -3.2*t2657*t2615;
  t2659 = t2620 + t2621 + t2623 + t2627 + t2631 + t2633 + t2635 + t2638 + t2640 + t2641 + t2643 + t2647 + t2651 + t2653 + t2655 + t2658;
  t2892 = -0.748*t2626;
  t2903 = -13.6*t2519*t2626;
  t2725 = t2620 + t2621 + t2623 + t2627 + t2719 + t2720 + t2723 + t2724;
  t2913 = -6.8*t2626*t2666;
  t2731 = t2730*t2513;
  t2734 = t2533*t2674;
  t2735 = t2731 + t2732 + t2733 + t2734;
  t2738 = -1.*t2508*t2730;
  t2740 = -1.*t2513*t2674;
  t2742 = t2738 + t2739 + t2740 + t2741;
  t2922 = -0.768*var2[4]*t2722;
  t2751 = Power(t2490,2);
  t2752 = -0.24*t2751;
  t2753 = t2538 + t2752;
  t2923 = -3.2*t2530*t2515;
  t2747 = -1.*t2527*t2502;
  t2748 = 0.24*t2490*t2502;
  t2749 = t2747 + t2748;
  t2924 = -3.2*t2541*t2722;
  t2927 = -6.4*t2536*t2515;
  t2928 = -6.4*t2515*t2722;
  t2759 = t2719 + t2720 + t2723 + t2724;
  t2932 = -3.2*t2515*t2676;
  t2763 = t2762*t2513;
  t2766 = t2533*t2765;
  t2767 = t2763 + t2732 + t2733 + t2766;
  t2934 = -3.2*t2680*t2722;
  t2769 = -1.*t2508*t2762;
  t2770 = -1.*t2513*t2765;
  t2771 = t2769 + t2739 + t2770 + t2741;
  t2898 = -0.748*t2646;
  t2906 = -13.6*t2563*t2646;
  t2796 = t2640 + t2641 + t2643 + t2647 + t2790 + t2791 + t2794 + t2795;
  t2916 = -6.8*t2646*t2686;
  t2802 = t2801*t2557;
  t2805 = t2575*t2694;
  t2806 = t2802 + t2803 + t2804 + t2805;
  t2809 = -1.*t2553*t2801;
  t2811 = -1.*t2557*t2694;
  t2813 = t2809 + t2810 + t2811 + t2812;
  t2951 = -0.768*var2[6]*t2793;
  t2822 = Power(t2547,2);
  t2823 = -0.24*t2822;
  t2824 = t2580 + t2823;
  t2952 = -3.2*t2572*t2559;
  t2818 = -1.*t2569*t2551;
  t2819 = 0.24*t2547*t2551;
  t2820 = t2818 + t2819;
  t2953 = -3.2*t2583*t2793;
  t2956 = -6.4*t2578*t2559;
  t2957 = -6.4*t2559*t2793;
  t2830 = t2790 + t2791 + t2794 + t2795;
  t2961 = -3.2*t2559*t2696;
  t2834 = t2833*t2557;
  t2837 = t2575*t2836;
  t2838 = t2834 + t2803 + t2804 + t2837;
  t2963 = -3.2*t2700*t2793;
  t2840 = -1.*t2553*t2833;
  t2841 = -1.*t2557*t2836;
  t2842 = t2840 + t2810 + t2841 + t2812;
  t2864 = -6.8*t2519*t2589;
  t2865 = -6.8*t2593*t2589;
  t2866 = -3.2*t2596*t2515;
  t2867 = -3.2*t2536*t2600;
  t2868 = -6.8*t2563*t2604;
  t2869 = -6.8*t2608*t2604;
  t2870 = -3.2*t2611*t2559;
  t2871 = -3.2*t2578*t2615;
  t2872 = t2864 + t2865 + t2866 + t2867 + t2868 + t2869 + t2870 + t2871;
  t2847 = Power(t2478,2);
  t2848 = -12.*t2847;
  t2849 = Power(t2510,2);
  t2850 = -12.*t2849;
  t2661 = 2.88*t2510;
  t2677 = -3.2*t2536*t2676;
  t2681 = -3.2*t2515*t2680;
  t2697 = -3.2*t2578*t2696;
  t2701 = -3.2*t2559*t2700;
  t2702 = t2661 + t2667 + t2677 + t2681 + t2687 + t2697 + t2701;
  t2537 = -3.2*t2530*t2536;
  t2542 = -3.2*t2541*t2515;
  t2543 = t2520 + t2537 + t2542;
  t2579 = -3.2*t2572*t2578;
  t2584 = -3.2*t2583*t2559;
  t2585 = t2564 + t2579 + t2584;
  t2912 = 2.88*t2478;
  t2914 = -3.2*t2637*t2676;
  t2915 = -3.2*t2630*t2680;
  t2917 = -3.2*t2657*t2696;
  t2918 = -3.2*t2650*t2700;
  t2919 = t2912 + t2913 + t2914 + t2915 + t2916 + t2917 + t2918;
  t2933 = -3.2*t2515*t2735;
  t2935 = -3.2*t2536*t2742;
  t2936 = t2913 + t2932 + t2933 + t2934 + t2935;
  t2736 = -3.2*t2596*t2735;
  t2743 = -3.2*t2600*t2742;
  t2744 = t2667 + t2727 + t2736 + t2737 + t2743;
  t2946 = -3.2*t2515*t2767;
  t2947 = -3.2*t2536*t2771;
  t2948 = t2932 + t2946 + t2934 + t2947;
  t2768 = -3.2*t2596*t2767;
  t2772 = -3.2*t2600*t2771;
  t2773 = t2727 + t2768 + t2737 + t2772;
  t2962 = -3.2*t2559*t2806;
  t2964 = -3.2*t2578*t2813;
  t2965 = t2916 + t2961 + t2962 + t2963 + t2964;
  t2807 = -3.2*t2611*t2806;
  t2814 = -3.2*t2615*t2813;
  t2815 = t2687 + t2798 + t2807 + t2808 + t2814;
  t2975 = -3.2*t2559*t2838;
  t2976 = -3.2*t2578*t2842;
  t2977 = t2961 + t2975 + t2963 + t2976;
  t2839 = -3.2*t2611*t2838;
  t2843 = -3.2*t2615*t2842;
  t2844 = t2798 + t2839 + t2808 + t2843;
  t2873 = -2.88*t2478;
  t2874 = -6.8*t2589*t2666;
  t2875 = -3.2*t2600*t2676;
  t2876 = -3.2*t2596*t2680;
  t2877 = -6.8*t2604*t2686;
  t2878 = -3.2*t2615*t2696;
  t2879 = -3.2*t2611*t2700;
  t2880 = t2873 + t2874 + t2875 + t2876 + t2877 + t2878 + t2879;
  t2893 = -3.2*t2541*t2630;
  t2894 = -3.2*t2530*t2637;
  t2895 = t2892 + t2893 + t2894;
  t2925 = t2892 + t2923 + t2924;
  t2713 = t2520 + t2711 + t2712;
  t2987 = -3.2*t2541*t2735;
  t2988 = -3.2*t2530*t2742;
  t2989 = t2987 + t2988;
  t2939 = -3.2*t2753*t2536;
  t2940 = -3.2*t2749*t2515;
  t2941 = t2939 + t2923 + t2940 + t2924;
  t2750 = -3.2*t2749*t2596;
  t2754 = -3.2*t2753*t2600;
  t2755 = t2711 + t2750 + t2754 + t2712;
  t2999 = -3.2*t2753*t2676;
  t3000 = -3.2*t2749*t2680;
  t3001 = -3.2*t2541*t2767;
  t3002 = -3.2*t2530*t2771;
  t3003 = t2999 + t3000 + t3001 + t3002;
  t2881 = -0.748*t2589;
  t2882 = -3.2*t2541*t2596;
  t2883 = -3.2*t2530*t2600;
  t2884 = t2881 + t2882 + t2883;
  t3051 = -0.748*t2666;
  t3052 = -3.2*t2530*t2676;
  t3053 = -3.2*t2541*t2680;
  t3054 = -0.67 + t3051 + t3052 + t3053;
  t3090 = -0.768*var2[1]*t2722;
  t3091 = -0.768*var2[0]*t2709;
  t2885 = -0.768*t2596;
  t2981 = -0.768*t2515;
  t3055 = -0.768*t2680;
  t3056 = -0.2 + t3055;
  t3084 = -0.768*t2541;
  t3085 = -0.2 + t3084;
  t2899 = -3.2*t2583*t2650;
  t2900 = -3.2*t2572*t2657;
  t2901 = t2898 + t2899 + t2900;
  t2954 = t2898 + t2952 + t2953;
  t2784 = t2564 + t2782 + t2783;
  t3013 = -3.2*t2583*t2806;
  t3014 = -3.2*t2572*t2813;
  t3015 = t3013 + t3014;
  t2968 = -3.2*t2824*t2578;
  t2969 = -3.2*t2820*t2559;
  t2970 = t2968 + t2952 + t2969 + t2953;
  t2821 = -3.2*t2820*t2611;
  t2825 = -3.2*t2824*t2615;
  t2826 = t2782 + t2821 + t2825 + t2783;
  t3025 = -3.2*t2824*t2696;
  t3026 = -3.2*t2820*t2700;
  t3027 = -3.2*t2583*t2838;
  t3028 = -3.2*t2572*t2842;
  t3029 = t3025 + t3026 + t3027 + t3028;
  t2886 = -0.748*t2604;
  t2887 = -3.2*t2583*t2611;
  t2888 = -3.2*t2572*t2615;
  t2889 = t2886 + t2887 + t2888;
  t3057 = -0.748*t2686;
  t3058 = -3.2*t2572*t2696;
  t3059 = -3.2*t2583*t2700;
  t3060 = -0.67 + t3057 + t3058 + t3059;
  t3123 = -0.768*var2[1]*t2793;
  t3124 = -0.768*var2[0]*t2780;
  t2890 = -0.768*t2611;
  t2982 = -0.768*t2559;
  t3061 = -0.768*t2700;
  t3062 = -0.2 + t3061;
  t3117 = -0.768*t2583;
  t3118 = -0.2 + t3117;
  p_output1[0]=(t2590 + t2594 - 6.4*t2515*t2596 - 6.4*t2536*t2600 + t2605 + t2609 - 6.4*t2559*t2611 - 6.4*t2578*t2615)*var2[0] + t2659*var2[1] + t2702*var2[2] + t2543*var2[3] - 0.768*t2515*var2[4] + t2585*var2[5] - 0.768*t2559*var2[6];
  p_output1[1]=t2710 + (t2590 + t2594 + t2715 + t2716)*var2[0] + t2725*var2[1] + t2744*var2[2] + t2713*var2[3];
  p_output1[2]=t2710 + (t2715 + t2716)*var2[0] + t2759*var2[1] + t2773*var2[2] + t2755*var2[3];
  p_output1[3]=t2781 + (t2605 + t2609 + t2786 + t2787)*var2[0] + t2796*var2[1] + t2815*var2[2] + t2784*var2[5];
  p_output1[4]=t2781 + (t2786 + t2787)*var2[0] + t2830*var2[1] + t2844*var2[2] + t2826*var2[5];
  p_output1[5]=-6.8*Power(t2593,2) - 3.2*Power(t2596,2) - 3.2*Power(t2600,2) - 6.8*Power(t2608,2) - 3.2*Power(t2611,2) - 3.2*Power(t2615,2) + t2623 + t2643 + t2848 + t2850;
  p_output1[6]=t2872;
  p_output1[7]=t2880;
  p_output1[8]=t2884;
  p_output1[9]=t2885;
  p_output1[10]=t2889;
  p_output1[11]=t2890;
  p_output1[12]=t2659*var2[0] + (t2590 + t2605 - 6.4*t2515*t2630 - 6.4*t2536*t2637 - 6.4*t2559*t2650 - 6.4*t2578*t2657 + t2903 + t2906)*var2[1] + t2919*var2[2] + t2895*var2[3] - 0.768*t2630*var2[4] + t2901*var2[5] - 0.768*t2650*var2[6];
  p_output1[13]=t2922 + t2725*var2[0] + (t2590 + t2903 + t2927 + t2928)*var2[1] + t2936*var2[2] + t2925*var2[3];
  p_output1[14]=t2922 + t2759*var2[0] + (t2927 + t2928)*var2[1] + t2948*var2[2] + t2941*var2[3];
  p_output1[15]=t2951 + t2796*var2[0] + (t2605 + t2906 + t2956 + t2957)*var2[1] + t2965*var2[2] + t2954*var2[5];
  p_output1[16]=t2951 + t2830*var2[0] + (t2956 + t2957)*var2[1] + t2977*var2[2] + t2970*var2[5];
  p_output1[17]=t2872;
  p_output1[18]=t2620 + t2623 + t2633 + t2635 + t2640 + t2643 + t2653 + t2655 + t2848 + t2850;
  p_output1[19]=t2702;
  p_output1[20]=t2543;
  p_output1[21]=t2981;
  p_output1[22]=t2585;
  p_output1[23]=t2982;
  p_output1[24]=t2702*var2[0] + t2919*var2[1];
  p_output1[25]=t2744*var2[0] + t2936*var2[1] + (-6.4*t2680*t2735 - 6.4*t2676*t2742)*var2[2] + t2989*var2[3] - 0.768*t2735*var2[4];
  p_output1[26]=t2773*var2[0] + t2948*var2[1] + (-6.4*t2680*t2767 - 6.4*t2676*t2771)*var2[2] + t3003*var2[3] - 0.768*t2767*var2[4];
  p_output1[27]=t2815*var2[0] + t2965*var2[1] + (-6.4*t2700*t2806 - 6.4*t2696*t2813)*var2[2] + t3015*var2[5] - 0.768*t2806*var2[6];
  p_output1[28]=t2844*var2[0] + t2977*var2[1] + (-6.4*t2700*t2838 - 6.4*t2696*t2842)*var2[2] + t3029*var2[5] - 0.768*t2838*var2[6];
  p_output1[29]=t2880;
  p_output1[30]=t2702;
  p_output1[31]=-3.3612 - 6.8*Power(t2666,2) - 3.2*Power(t2676,2) - 3.2*Power(t2680,2) - 6.8*Power(t2686,2) - 3.2*Power(t2696,2) - 3.2*Power(t2700,2);
  p_output1[32]=t3054;
  p_output1[33]=t3056;
  p_output1[34]=t3060;
  p_output1[35]=t3062;
  p_output1[36]=t2543*var2[0] + t2895*var2[1];
  p_output1[37]=t2713*var2[0] + t2925*var2[1] + t2989*var2[2];
  p_output1[38]=t2755*var2[0] + t2941*var2[1] + t3003*var2[2] + (-6.4*t2541*t2749 - 6.4*t2530*t2753)*var2[3] - 0.768*t2749*var2[4];
  p_output1[39]=t2884;
  p_output1[40]=t2543;
  p_output1[41]=t3054;
  p_output1[42]=-1.58228 - 3.2*Power(t2530,2) - 3.2*Power(t2541,2);
  p_output1[43]=t3085;
  p_output1[44]=-0.768*t2515*var2[0] - 0.768*t2630*var2[1];
  p_output1[45]=t3090 + t3091 - 0.768*t2735*var2[2];
  p_output1[46]=t3090 + t3091 - 0.768*t2767*var2[2] - 0.768*t2749*var2[3];
  p_output1[47]=t2885;
  p_output1[48]=t2981;
  p_output1[49]=t3056;
  p_output1[50]=t3085;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t2585*var2[0] + t2901*var2[1];
  p_output1[53]=t2784*var2[0] + t2954*var2[1] + t3015*var2[2];
  p_output1[54]=t2826*var2[0] + t2970*var2[1] + t3029*var2[2] + (-6.4*t2583*t2820 - 6.4*t2572*t2824)*var2[5] - 0.768*t2820*var2[6];
  p_output1[55]=t2889;
  p_output1[56]=t2585;
  p_output1[57]=t3060;
  p_output1[58]=-1.58228 - 3.2*Power(t2572,2) - 3.2*Power(t2583,2);
  p_output1[59]=t3118;
  p_output1[60]=-0.768*t2559*var2[0] - 0.768*t2650*var2[1];
  p_output1[61]=t3123 + t3124 - 0.768*t2806*var2[2];
  p_output1[62]=t3123 + t3124 - 0.768*t2838*var2[2] - 0.768*t2820*var2[5];
  p_output1[63]=t2890;
  p_output1[64]=t2982;
  p_output1[65]=t3062;
  p_output1[66]=t3118;
  p_output1[67]=-1.2143199999999998;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 68, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx_five_link_walker.hh"

namespace RightStance
{

void J_MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
