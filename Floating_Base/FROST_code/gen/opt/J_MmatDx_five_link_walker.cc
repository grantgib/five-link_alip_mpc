/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:51 GMT-05:00
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
  double t2753;
  double t2750;
  double t2751;
  double t2754;
  double t2758;
  double t2746;
  double t2759;
  double t2760;
  double t2761;
  double t2769;
  double t2770;
  double t2771;
  double t2772;
  double t2773;
  double t2752;
  double t2755;
  double t2756;
  double t2757;
  double t2762;
  double t2763;
  double t2794;
  double t2791;
  double t2792;
  double t2795;
  double t2799;
  double t2800;
  double t2801;
  double t2809;
  double t2810;
  double t2811;
  double t2812;
  double t2813;
  double t2793;
  double t2796;
  double t2797;
  double t2798;
  double t2802;
  double t2803;
  double t2765;
  double t2766;
  double t2767;
  double t2831;
  double t2832;
  double t2833;
  double t2781;
  double t2777;
  double t2778;
  double t2779;
  double t2780;
  double t2782;
  double t2805;
  double t2806;
  double t2807;
  double t2846;
  double t2847;
  double t2848;
  double t2821;
  double t2817;
  double t2818;
  double t2819;
  double t2820;
  double t2822;
  double t2835;
  double t2836;
  double t2837;
  double t2839;
  double t2840;
  double t2842;
  double t2843;
  double t2844;
  double t2850;
  double t2851;
  double t2852;
  double t2854;
  double t2855;
  double t2857;
  double t2858;
  double t2859;
  double t2912;
  double t2913;
  double t2914;
  double t2916;
  double t2917;
  double t2918;
  double t2932;
  double t2933;
  double t2934;
  double t2936;
  double t2937;
  double t2938;
  double t2768;
  double t2774;
  double t2775;
  double t2776;
  double t2784;
  double t2785;
  double t2786;
  double t2787;
  double t2949;
  double t2950;
  double t2951;
  double t2952;
  double t2953;
  double t2834;
  double t2838;
  double t2863;
  double t2864;
  double t2865;
  double t2866;
  double t2867;
  double t2868;
  double t2869;
  double t2870;
  double t2871;
  double t2872;
  double t2906;
  double t2907;
  double t2908;
  double t2909;
  double t2910;
  double t2911;
  double t2915;
  double t2919;
  double t2920;
  double t2922;
  double t2923;
  double t2924;
  double t2972;
  double t2973;
  double t2974;
  double t2954;
  double t2955;
  double t2956;
  double t2959;
  double t2960;
  double t2963;
  double t2964;
  double t2965;
  double t2966;
  double t2967;
  double t2968;
  double t2971;
  double t2976;
  double t2977;
  double t2981;
  double t3005;
  double t3006;
  double t2983;
  double t3008;
  double t3009;
  double t2985;
  double t2808;
  double t2814;
  double t2815;
  double t2816;
  double t2824;
  double t2825;
  double t2826;
  double t2827;
  double t3020;
  double t3021;
  double t3022;
  double t3023;
  double t3024;
  double t2849;
  double t2853;
  double t2883;
  double t2884;
  double t2885;
  double t2886;
  double t2887;
  double t2888;
  double t2889;
  double t2890;
  double t2891;
  double t2892;
  double t2926;
  double t2927;
  double t2928;
  double t2929;
  double t2930;
  double t2931;
  double t2935;
  double t2939;
  double t2940;
  double t2942;
  double t2943;
  double t2944;
  double t3043;
  double t3044;
  double t3045;
  double t3025;
  double t3026;
  double t3027;
  double t3030;
  double t3031;
  double t3034;
  double t3035;
  double t3036;
  double t3037;
  double t3038;
  double t3039;
  double t3042;
  double t3047;
  double t3048;
  double t3052;
  double t3076;
  double t3077;
  double t3054;
  double t3079;
  double t3080;
  double t3056;
  double t2873;
  double t2874;
  double t2880;
  double t2881;
  double t2893;
  double t2894;
  double t2900;
  double t2901;
  double t2875;
  double t2876;
  double t2877;
  double t2878;
  double t2879;
  double t2882;
  double t2895;
  double t2896;
  double t2897;
  double t2898;
  double t2899;
  double t2902;
  double t2903;
  double t3136;
  double t3147;
  double t2969;
  double t3157;
  double t2975;
  double t2978;
  double t2979;
  double t2982;
  double t2984;
  double t2986;
  double t3166;
  double t2995;
  double t2996;
  double t2997;
  double t3167;
  double t2991;
  double t2992;
  double t2993;
  double t3168;
  double t3171;
  double t3172;
  double t3003;
  double t3176;
  double t3007;
  double t3010;
  double t3011;
  double t3178;
  double t3013;
  double t3014;
  double t3015;
  double t3142;
  double t3150;
  double t3040;
  double t3160;
  double t3046;
  double t3049;
  double t3050;
  double t3053;
  double t3055;
  double t3057;
  double t3195;
  double t3066;
  double t3067;
  double t3068;
  double t3196;
  double t3062;
  double t3063;
  double t3064;
  double t3197;
  double t3200;
  double t3201;
  double t3074;
  double t3205;
  double t3078;
  double t3081;
  double t3082;
  double t3207;
  double t3084;
  double t3085;
  double t3086;
  double t3108;
  double t3109;
  double t3110;
  double t3111;
  double t3112;
  double t3113;
  double t3114;
  double t3115;
  double t3116;
  double t3091;
  double t3092;
  double t3093;
  double t3094;
  double t2905;
  double t2921;
  double t2925;
  double t2941;
  double t2945;
  double t2946;
  double t2783;
  double t2788;
  double t2789;
  double t2823;
  double t2828;
  double t2829;
  double t3156;
  double t3158;
  double t3159;
  double t3161;
  double t3162;
  double t3163;
  double t3177;
  double t3179;
  double t3180;
  double t2980;
  double t2987;
  double t2988;
  double t3190;
  double t3191;
  double t3192;
  double t3012;
  double t3016;
  double t3017;
  double t3206;
  double t3208;
  double t3209;
  double t3051;
  double t3058;
  double t3059;
  double t3219;
  double t3220;
  double t3221;
  double t3083;
  double t3087;
  double t3088;
  double t3117;
  double t3118;
  double t3119;
  double t3120;
  double t3121;
  double t3122;
  double t3123;
  double t3124;
  double t3137;
  double t3138;
  double t3139;
  double t3169;
  double t2957;
  double t3231;
  double t3232;
  double t3233;
  double t3183;
  double t3184;
  double t3185;
  double t2994;
  double t2998;
  double t2999;
  double t3243;
  double t3244;
  double t3245;
  double t3246;
  double t3247;
  double t3125;
  double t3126;
  double t3127;
  double t3128;
  double t3295;
  double t3296;
  double t3297;
  double t3298;
  double t3334;
  double t3335;
  double t3129;
  double t3225;
  double t3299;
  double t3300;
  double t3328;
  double t3329;
  double t3143;
  double t3144;
  double t3145;
  double t3198;
  double t3028;
  double t3257;
  double t3258;
  double t3259;
  double t3212;
  double t3213;
  double t3214;
  double t3065;
  double t3069;
  double t3070;
  double t3269;
  double t3270;
  double t3271;
  double t3272;
  double t3273;
  double t3130;
  double t3131;
  double t3132;
  double t3133;
  double t3301;
  double t3302;
  double t3303;
  double t3304;
  double t3367;
  double t3368;
  double t3134;
  double t3226;
  double t3305;
  double t3306;
  double t3361;
  double t3362;
  t2753 = Cos(var1[3]);
  t2750 = Cos(var1[4]);
  t2751 = Sin(var1[3]);
  t2754 = Sin(var1[4]);
  t2758 = Sin(var1[2]);
  t2746 = Cos(var1[2]);
  t2759 = t2753*t2750;
  t2760 = -1.*t2751*t2754;
  t2761 = t2759 + t2760;
  t2769 = -1.*t2750;
  t2770 = 1. + t2769;
  t2771 = 0.4*t2770;
  t2772 = 0.64*t2750;
  t2773 = t2771 + t2772;
  t2752 = -1.*t2750*t2751;
  t2755 = -1.*t2753*t2754;
  t2756 = t2752 + t2755;
  t2757 = t2746*t2756;
  t2762 = -1.*t2758*t2761;
  t2763 = t2757 + t2762;
  t2794 = Cos(var1[5]);
  t2791 = Cos(var1[6]);
  t2792 = Sin(var1[5]);
  t2795 = Sin(var1[6]);
  t2799 = t2794*t2791;
  t2800 = -1.*t2792*t2795;
  t2801 = t2799 + t2800;
  t2809 = -1.*t2791;
  t2810 = 1. + t2809;
  t2811 = 0.4*t2810;
  t2812 = 0.64*t2791;
  t2813 = t2811 + t2812;
  t2793 = -1.*t2791*t2792;
  t2796 = -1.*t2794*t2795;
  t2797 = t2793 + t2796;
  t2798 = t2746*t2797;
  t2802 = -1.*t2758*t2801;
  t2803 = t2798 + t2802;
  t2765 = -1.*t2753*t2758;
  t2766 = -1.*t2746*t2751;
  t2767 = t2765 + t2766;
  t2831 = t2746*t2753;
  t2832 = -1.*t2758*t2751;
  t2833 = t2831 + t2832;
  t2781 = t2746*t2761;
  t2777 = t2750*t2751;
  t2778 = t2753*t2754;
  t2779 = t2777 + t2778;
  t2780 = -1.*t2758*t2779;
  t2782 = t2780 + t2781;
  t2805 = -1.*t2794*t2758;
  t2806 = -1.*t2746*t2792;
  t2807 = t2805 + t2806;
  t2846 = t2746*t2794;
  t2847 = -1.*t2758*t2792;
  t2848 = t2846 + t2847;
  t2821 = t2746*t2801;
  t2817 = t2791*t2792;
  t2818 = t2794*t2795;
  t2819 = t2817 + t2818;
  t2820 = -1.*t2758*t2819;
  t2822 = t2820 + t2821;
  t2835 = t2753*t2758;
  t2836 = t2746*t2751;
  t2837 = t2835 + t2836;
  t2839 = t2758*t2756;
  t2840 = t2839 + t2781;
  t2842 = t2746*t2779;
  t2843 = t2758*t2761;
  t2844 = t2842 + t2843;
  t2850 = t2794*t2758;
  t2851 = t2746*t2792;
  t2852 = t2850 + t2851;
  t2854 = t2758*t2797;
  t2855 = t2854 + t2821;
  t2857 = t2746*t2819;
  t2858 = t2758*t2801;
  t2859 = t2857 + t2858;
  t2912 = t2773*t2751;
  t2913 = 0.24*t2753*t2754;
  t2914 = t2912 + t2913;
  t2916 = t2753*t2773;
  t2917 = -0.24*t2751*t2754;
  t2918 = t2916 + t2917;
  t2932 = t2813*t2792;
  t2933 = 0.24*t2794*t2795;
  t2934 = t2932 + t2933;
  t2936 = t2794*t2813;
  t2937 = -0.24*t2792*t2795;
  t2938 = t2936 + t2937;
  t2768 = -0.748*t2767;
  t2774 = t2773*t2754;
  t2775 = -0.24*t2750*t2754;
  t2776 = t2774 + t2775;
  t2784 = t2773*t2750;
  t2785 = Power(t2754,2);
  t2786 = 0.24*t2785;
  t2787 = t2784 + t2786;
  t2949 = -1.*t2753*t2750;
  t2950 = t2751*t2754;
  t2951 = t2949 + t2950;
  t2952 = t2758*t2951;
  t2953 = t2757 + t2952;
  t2834 = -13.6*t2767*t2833;
  t2838 = -13.6*t2837*t2833;
  t2863 = Power(t2767,2);
  t2864 = -6.8*t2863;
  t2865 = -6.8*t2767*t2837;
  t2866 = Power(t2833,2);
  t2867 = -6.8*t2866;
  t2868 = -1.*t2746*t2753;
  t2869 = t2758*t2751;
  t2870 = t2868 + t2869;
  t2871 = -6.8*t2833*t2870;
  t2872 = -1.*t2758*t2756;
  t2906 = Power(t2753,2);
  t2907 = 0.11*t2906;
  t2908 = Power(t2751,2);
  t2909 = 0.11*t2908;
  t2910 = t2907 + t2909;
  t2911 = -6.8*t2767*t2910;
  t2915 = -1.*t2914*t2761;
  t2919 = -1.*t2756*t2918;
  t2920 = t2915 + t2919;
  t2922 = t2914*t2779;
  t2923 = t2761*t2918;
  t2924 = t2922 + t2923;
  t2972 = -1.*t2773*t2751;
  t2973 = -0.24*t2753*t2754;
  t2974 = t2972 + t2973;
  t2954 = -0.768*var2[4]*t2953;
  t2955 = -3.2*t2776*t2840;
  t2956 = -3.2*t2787*t2953;
  t2959 = -6.4*t2840*t2844;
  t2960 = -6.4*t2840*t2953;
  t2963 = -3.2*t2840*t2782;
  t2964 = -3.2*t2763*t2844;
  t2965 = t2746*t2951;
  t2966 = t2872 + t2965;
  t2967 = -3.2*t2840*t2966;
  t2968 = -3.2*t2763*t2953;
  t2971 = -3.2*t2840*t2920;
  t2976 = t2914*t2761;
  t2977 = t2756*t2918;
  t2981 = -3.2*t2924*t2953;
  t3005 = -0.24*t2750*t2751;
  t3006 = t3005 + t2973;
  t2983 = -1.*t2756*t2914;
  t3008 = 0.24*t2753*t2750;
  t3009 = t3008 + t2917;
  t2985 = -1.*t2918*t2951;
  t2808 = -0.748*t2807;
  t2814 = t2813*t2795;
  t2815 = -0.24*t2791*t2795;
  t2816 = t2814 + t2815;
  t2824 = t2813*t2791;
  t2825 = Power(t2795,2);
  t2826 = 0.24*t2825;
  t2827 = t2824 + t2826;
  t3020 = -1.*t2794*t2791;
  t3021 = t2792*t2795;
  t3022 = t3020 + t3021;
  t3023 = t2758*t3022;
  t3024 = t2798 + t3023;
  t2849 = -13.6*t2807*t2848;
  t2853 = -13.6*t2852*t2848;
  t2883 = Power(t2807,2);
  t2884 = -6.8*t2883;
  t2885 = -6.8*t2807*t2852;
  t2886 = Power(t2848,2);
  t2887 = -6.8*t2886;
  t2888 = -1.*t2746*t2794;
  t2889 = t2758*t2792;
  t2890 = t2888 + t2889;
  t2891 = -6.8*t2848*t2890;
  t2892 = -1.*t2758*t2797;
  t2926 = Power(t2794,2);
  t2927 = 0.11*t2926;
  t2928 = Power(t2792,2);
  t2929 = 0.11*t2928;
  t2930 = t2927 + t2929;
  t2931 = -6.8*t2807*t2930;
  t2935 = -1.*t2934*t2801;
  t2939 = -1.*t2797*t2938;
  t2940 = t2935 + t2939;
  t2942 = t2934*t2819;
  t2943 = t2801*t2938;
  t2944 = t2942 + t2943;
  t3043 = -1.*t2813*t2792;
  t3044 = -0.24*t2794*t2795;
  t3045 = t3043 + t3044;
  t3025 = -0.768*var2[6]*t3024;
  t3026 = -3.2*t2816*t2855;
  t3027 = -3.2*t2827*t3024;
  t3030 = -6.4*t2855*t2859;
  t3031 = -6.4*t2855*t3024;
  t3034 = -3.2*t2855*t2822;
  t3035 = -3.2*t2803*t2859;
  t3036 = t2746*t3022;
  t3037 = t2892 + t3036;
  t3038 = -3.2*t2855*t3037;
  t3039 = -3.2*t2803*t3024;
  t3042 = -3.2*t2855*t2940;
  t3047 = t2934*t2801;
  t3048 = t2797*t2938;
  t3052 = -3.2*t2944*t3024;
  t3076 = -0.24*t2791*t2792;
  t3077 = t3076 + t3044;
  t3054 = -1.*t2797*t2934;
  t3079 = 0.24*t2794*t2791;
  t3080 = t3079 + t2937;
  t3056 = -1.*t2938*t3022;
  t2873 = -1.*t2746*t2761;
  t2874 = t2872 + t2873;
  t2880 = -1.*t2746*t2779;
  t2881 = t2880 + t2762;
  t2893 = -1.*t2746*t2801;
  t2894 = t2892 + t2893;
  t2900 = -1.*t2746*t2819;
  t2901 = t2900 + t2802;
  t2875 = -3.2*t2874*t2840;
  t2876 = Power(t2782,2);
  t2877 = -3.2*t2876;
  t2878 = Power(t2763,2);
  t2879 = -3.2*t2878;
  t2882 = -3.2*t2881*t2844;
  t2895 = -3.2*t2894*t2855;
  t2896 = Power(t2822,2);
  t2897 = -3.2*t2896;
  t2898 = Power(t2803,2);
  t2899 = -3.2*t2898;
  t2902 = -3.2*t2901*t2859;
  t2903 = t2864 + t2865 + t2867 + t2871 + t2875 + t2877 + t2879 + t2882 + t2884 + t2885 + t2887 + t2891 + t2895 + t2897 + t2899 + t2902;
  t3136 = -0.748*t2870;
  t3147 = -13.6*t2767*t2870;
  t2969 = t2864 + t2865 + t2867 + t2871 + t2963 + t2964 + t2967 + t2968;
  t3157 = -6.8*t2870*t2910;
  t2975 = t2974*t2761;
  t2978 = t2779*t2918;
  t2979 = t2975 + t2976 + t2977 + t2978;
  t2982 = -1.*t2756*t2974;
  t2984 = -1.*t2761*t2918;
  t2986 = t2982 + t2983 + t2984 + t2985;
  t3166 = -0.768*var2[4]*t2966;
  t2995 = Power(t2750,2);
  t2996 = -0.24*t2995;
  t2997 = t2784 + t2996;
  t3167 = -3.2*t2776*t2763;
  t2991 = -1.*t2773*t2754;
  t2992 = 0.24*t2750*t2754;
  t2993 = t2991 + t2992;
  t3168 = -3.2*t2787*t2966;
  t3171 = -6.4*t2782*t2763;
  t3172 = -6.4*t2763*t2966;
  t3003 = t2963 + t2964 + t2967 + t2968;
  t3176 = -3.2*t2763*t2920;
  t3007 = t3006*t2761;
  t3010 = t2779*t3009;
  t3011 = t3007 + t2976 + t2977 + t3010;
  t3178 = -3.2*t2924*t2966;
  t3013 = -1.*t2756*t3006;
  t3014 = -1.*t2761*t3009;
  t3015 = t3013 + t2983 + t3014 + t2985;
  t3142 = -0.748*t2890;
  t3150 = -13.6*t2807*t2890;
  t3040 = t2884 + t2885 + t2887 + t2891 + t3034 + t3035 + t3038 + t3039;
  t3160 = -6.8*t2890*t2930;
  t3046 = t3045*t2801;
  t3049 = t2819*t2938;
  t3050 = t3046 + t3047 + t3048 + t3049;
  t3053 = -1.*t2797*t3045;
  t3055 = -1.*t2801*t2938;
  t3057 = t3053 + t3054 + t3055 + t3056;
  t3195 = -0.768*var2[6]*t3037;
  t3066 = Power(t2791,2);
  t3067 = -0.24*t3066;
  t3068 = t2824 + t3067;
  t3196 = -3.2*t2816*t2803;
  t3062 = -1.*t2813*t2795;
  t3063 = 0.24*t2791*t2795;
  t3064 = t3062 + t3063;
  t3197 = -3.2*t2827*t3037;
  t3200 = -6.4*t2822*t2803;
  t3201 = -6.4*t2803*t3037;
  t3074 = t3034 + t3035 + t3038 + t3039;
  t3205 = -3.2*t2803*t2940;
  t3078 = t3077*t2801;
  t3081 = t2819*t3080;
  t3082 = t3078 + t3047 + t3048 + t3081;
  t3207 = -3.2*t2944*t3037;
  t3084 = -1.*t2797*t3077;
  t3085 = -1.*t2801*t3080;
  t3086 = t3084 + t3054 + t3085 + t3056;
  t3108 = -6.8*t2767*t2833;
  t3109 = -6.8*t2837*t2833;
  t3110 = -3.2*t2840*t2763;
  t3111 = -3.2*t2782*t2844;
  t3112 = -6.8*t2807*t2848;
  t3113 = -6.8*t2852*t2848;
  t3114 = -3.2*t2855*t2803;
  t3115 = -3.2*t2822*t2859;
  t3116 = t3108 + t3109 + t3110 + t3111 + t3112 + t3113 + t3114 + t3115;
  t3091 = Power(t2746,2);
  t3092 = -12.*t3091;
  t3093 = Power(t2758,2);
  t3094 = -12.*t3093;
  t2905 = 2.88*t2758;
  t2921 = -3.2*t2782*t2920;
  t2925 = -3.2*t2763*t2924;
  t2941 = -3.2*t2822*t2940;
  t2945 = -3.2*t2803*t2944;
  t2946 = t2905 + t2911 + t2921 + t2925 + t2931 + t2941 + t2945;
  t2783 = -3.2*t2776*t2782;
  t2788 = -3.2*t2787*t2763;
  t2789 = t2768 + t2783 + t2788;
  t2823 = -3.2*t2816*t2822;
  t2828 = -3.2*t2827*t2803;
  t2829 = t2808 + t2823 + t2828;
  t3156 = 2.88*t2746;
  t3158 = -3.2*t2881*t2920;
  t3159 = -3.2*t2874*t2924;
  t3161 = -3.2*t2901*t2940;
  t3162 = -3.2*t2894*t2944;
  t3163 = t3156 + t3157 + t3158 + t3159 + t3160 + t3161 + t3162;
  t3177 = -3.2*t2763*t2979;
  t3179 = -3.2*t2782*t2986;
  t3180 = t3157 + t3176 + t3177 + t3178 + t3179;
  t2980 = -3.2*t2840*t2979;
  t2987 = -3.2*t2844*t2986;
  t2988 = t2911 + t2971 + t2980 + t2981 + t2987;
  t3190 = -3.2*t2763*t3011;
  t3191 = -3.2*t2782*t3015;
  t3192 = t3176 + t3190 + t3178 + t3191;
  t3012 = -3.2*t2840*t3011;
  t3016 = -3.2*t2844*t3015;
  t3017 = t2971 + t3012 + t2981 + t3016;
  t3206 = -3.2*t2803*t3050;
  t3208 = -3.2*t2822*t3057;
  t3209 = t3160 + t3205 + t3206 + t3207 + t3208;
  t3051 = -3.2*t2855*t3050;
  t3058 = -3.2*t2859*t3057;
  t3059 = t2931 + t3042 + t3051 + t3052 + t3058;
  t3219 = -3.2*t2803*t3082;
  t3220 = -3.2*t2822*t3086;
  t3221 = t3205 + t3219 + t3207 + t3220;
  t3083 = -3.2*t2855*t3082;
  t3087 = -3.2*t2859*t3086;
  t3088 = t3042 + t3083 + t3052 + t3087;
  t3117 = -2.88*t2746;
  t3118 = -6.8*t2833*t2910;
  t3119 = -3.2*t2844*t2920;
  t3120 = -3.2*t2840*t2924;
  t3121 = -6.8*t2848*t2930;
  t3122 = -3.2*t2859*t2940;
  t3123 = -3.2*t2855*t2944;
  t3124 = t3117 + t3118 + t3119 + t3120 + t3121 + t3122 + t3123;
  t3137 = -3.2*t2787*t2874;
  t3138 = -3.2*t2776*t2881;
  t3139 = t3136 + t3137 + t3138;
  t3169 = t3136 + t3167 + t3168;
  t2957 = t2768 + t2955 + t2956;
  t3231 = -3.2*t2787*t2979;
  t3232 = -3.2*t2776*t2986;
  t3233 = t3231 + t3232;
  t3183 = -3.2*t2997*t2782;
  t3184 = -3.2*t2993*t2763;
  t3185 = t3183 + t3167 + t3184 + t3168;
  t2994 = -3.2*t2993*t2840;
  t2998 = -3.2*t2997*t2844;
  t2999 = t2955 + t2994 + t2998 + t2956;
  t3243 = -3.2*t2997*t2920;
  t3244 = -3.2*t2993*t2924;
  t3245 = -3.2*t2787*t3011;
  t3246 = -3.2*t2776*t3015;
  t3247 = t3243 + t3244 + t3245 + t3246;
  t3125 = -0.748*t2833;
  t3126 = -3.2*t2787*t2840;
  t3127 = -3.2*t2776*t2844;
  t3128 = t3125 + t3126 + t3127;
  t3295 = -0.748*t2910;
  t3296 = -3.2*t2776*t2920;
  t3297 = -3.2*t2787*t2924;
  t3298 = -0.67 + t3295 + t3296 + t3297;
  t3334 = -0.768*var2[1]*t2966;
  t3335 = -0.768*var2[0]*t2953;
  t3129 = -0.768*t2840;
  t3225 = -0.768*t2763;
  t3299 = -0.768*t2924;
  t3300 = -0.2 + t3299;
  t3328 = -0.768*t2787;
  t3329 = -0.2 + t3328;
  t3143 = -3.2*t2827*t2894;
  t3144 = -3.2*t2816*t2901;
  t3145 = t3142 + t3143 + t3144;
  t3198 = t3142 + t3196 + t3197;
  t3028 = t2808 + t3026 + t3027;
  t3257 = -3.2*t2827*t3050;
  t3258 = -3.2*t2816*t3057;
  t3259 = t3257 + t3258;
  t3212 = -3.2*t3068*t2822;
  t3213 = -3.2*t3064*t2803;
  t3214 = t3212 + t3196 + t3213 + t3197;
  t3065 = -3.2*t3064*t2855;
  t3069 = -3.2*t3068*t2859;
  t3070 = t3026 + t3065 + t3069 + t3027;
  t3269 = -3.2*t3068*t2940;
  t3270 = -3.2*t3064*t2944;
  t3271 = -3.2*t2827*t3082;
  t3272 = -3.2*t2816*t3086;
  t3273 = t3269 + t3270 + t3271 + t3272;
  t3130 = -0.748*t2848;
  t3131 = -3.2*t2827*t2855;
  t3132 = -3.2*t2816*t2859;
  t3133 = t3130 + t3131 + t3132;
  t3301 = -0.748*t2930;
  t3302 = -3.2*t2816*t2940;
  t3303 = -3.2*t2827*t2944;
  t3304 = -0.67 + t3301 + t3302 + t3303;
  t3367 = -0.768*var2[1]*t3037;
  t3368 = -0.768*var2[0]*t3024;
  t3134 = -0.768*t2855;
  t3226 = -0.768*t2803;
  t3305 = -0.768*t2944;
  t3306 = -0.2 + t3305;
  t3361 = -0.768*t2827;
  t3362 = -0.2 + t3361;
  p_output1[0]=(t2834 + t2838 - 6.4*t2763*t2840 - 6.4*t2782*t2844 + t2849 + t2853 - 6.4*t2803*t2855 - 6.4*t2822*t2859)*var2[0] + t2903*var2[1] + t2946*var2[2] + t2789*var2[3] - 0.768*t2763*var2[4] + t2829*var2[5] - 0.768*t2803*var2[6];
  p_output1[1]=t2954 + (t2834 + t2838 + t2959 + t2960)*var2[0] + t2969*var2[1] + t2988*var2[2] + t2957*var2[3];
  p_output1[2]=t2954 + (t2959 + t2960)*var2[0] + t3003*var2[1] + t3017*var2[2] + t2999*var2[3];
  p_output1[3]=t3025 + (t2849 + t2853 + t3030 + t3031)*var2[0] + t3040*var2[1] + t3059*var2[2] + t3028*var2[5];
  p_output1[4]=t3025 + (t3030 + t3031)*var2[0] + t3074*var2[1] + t3088*var2[2] + t3070*var2[5];
  p_output1[5]=-6.8*Power(t2837,2) - 3.2*Power(t2840,2) - 3.2*Power(t2844,2) - 6.8*Power(t2852,2) - 3.2*Power(t2855,2) - 3.2*Power(t2859,2) + t2867 + t2887 + t3092 + t3094;
  p_output1[6]=t3116;
  p_output1[7]=t3124;
  p_output1[8]=t3128;
  p_output1[9]=t3129;
  p_output1[10]=t3133;
  p_output1[11]=t3134;
  p_output1[12]=t2903*var2[0] + (t2834 + t2849 - 6.4*t2763*t2874 - 6.4*t2782*t2881 - 6.4*t2803*t2894 - 6.4*t2822*t2901 + t3147 + t3150)*var2[1] + t3163*var2[2] + t3139*var2[3] - 0.768*t2874*var2[4] + t3145*var2[5] - 0.768*t2894*var2[6];
  p_output1[13]=t3166 + t2969*var2[0] + (t2834 + t3147 + t3171 + t3172)*var2[1] + t3180*var2[2] + t3169*var2[3];
  p_output1[14]=t3166 + t3003*var2[0] + (t3171 + t3172)*var2[1] + t3192*var2[2] + t3185*var2[3];
  p_output1[15]=t3195 + t3040*var2[0] + (t2849 + t3150 + t3200 + t3201)*var2[1] + t3209*var2[2] + t3198*var2[5];
  p_output1[16]=t3195 + t3074*var2[0] + (t3200 + t3201)*var2[1] + t3221*var2[2] + t3214*var2[5];
  p_output1[17]=t3116;
  p_output1[18]=t2864 + t2867 + t2877 + t2879 + t2884 + t2887 + t2897 + t2899 + t3092 + t3094;
  p_output1[19]=t2946;
  p_output1[20]=t2789;
  p_output1[21]=t3225;
  p_output1[22]=t2829;
  p_output1[23]=t3226;
  p_output1[24]=t2946*var2[0] + t3163*var2[1];
  p_output1[25]=t2988*var2[0] + t3180*var2[1] + (-6.4*t2924*t2979 - 6.4*t2920*t2986)*var2[2] + t3233*var2[3] - 0.768*t2979*var2[4];
  p_output1[26]=t3017*var2[0] + t3192*var2[1] + (-6.4*t2924*t3011 - 6.4*t2920*t3015)*var2[2] + t3247*var2[3] - 0.768*t3011*var2[4];
  p_output1[27]=t3059*var2[0] + t3209*var2[1] + (-6.4*t2944*t3050 - 6.4*t2940*t3057)*var2[2] + t3259*var2[5] - 0.768*t3050*var2[6];
  p_output1[28]=t3088*var2[0] + t3221*var2[1] + (-6.4*t2944*t3082 - 6.4*t2940*t3086)*var2[2] + t3273*var2[5] - 0.768*t3082*var2[6];
  p_output1[29]=t3124;
  p_output1[30]=t2946;
  p_output1[31]=-3.3612 - 6.8*Power(t2910,2) - 3.2*Power(t2920,2) - 3.2*Power(t2924,2) - 6.8*Power(t2930,2) - 3.2*Power(t2940,2) - 3.2*Power(t2944,2);
  p_output1[32]=t3298;
  p_output1[33]=t3300;
  p_output1[34]=t3304;
  p_output1[35]=t3306;
  p_output1[36]=t2789*var2[0] + t3139*var2[1];
  p_output1[37]=t2957*var2[0] + t3169*var2[1] + t3233*var2[2];
  p_output1[38]=t2999*var2[0] + t3185*var2[1] + t3247*var2[2] + (-6.4*t2787*t2993 - 6.4*t2776*t2997)*var2[3] - 0.768*t2993*var2[4];
  p_output1[39]=t3128;
  p_output1[40]=t2789;
  p_output1[41]=t3298;
  p_output1[42]=-1.58228 - 3.2*Power(t2776,2) - 3.2*Power(t2787,2);
  p_output1[43]=t3329;
  p_output1[44]=-0.768*t2763*var2[0] - 0.768*t2874*var2[1];
  p_output1[45]=t3334 + t3335 - 0.768*t2979*var2[2];
  p_output1[46]=t3334 + t3335 - 0.768*t3011*var2[2] - 0.768*t2993*var2[3];
  p_output1[47]=t3129;
  p_output1[48]=t3225;
  p_output1[49]=t3300;
  p_output1[50]=t3329;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t2829*var2[0] + t3145*var2[1];
  p_output1[53]=t3028*var2[0] + t3198*var2[1] + t3259*var2[2];
  p_output1[54]=t3070*var2[0] + t3214*var2[1] + t3273*var2[2] + (-6.4*t2827*t3064 - 6.4*t2816*t3068)*var2[5] - 0.768*t3064*var2[6];
  p_output1[55]=t3133;
  p_output1[56]=t2829;
  p_output1[57]=t3304;
  p_output1[58]=-1.58228 - 3.2*Power(t2816,2) - 3.2*Power(t2827,2);
  p_output1[59]=t3362;
  p_output1[60]=-0.768*t2803*var2[0] - 0.768*t2894*var2[1];
  p_output1[61]=t3367 + t3368 - 0.768*t3050*var2[2];
  p_output1[62]=t3367 + t3368 - 0.768*t3082*var2[2] - 0.768*t3064*var2[5];
  p_output1[63]=t3134;
  p_output1[64]=t3226;
  p_output1[65]=t3306;
  p_output1[66]=t3362;
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
