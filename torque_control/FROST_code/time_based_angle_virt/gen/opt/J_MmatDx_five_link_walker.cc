/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:19:27 GMT-05:00
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
  double t2815;
  double t2806;
  double t2807;
  double t2818;
  double t2826;
  double t2794;
  double t2827;
  double t2828;
  double t2829;
  double t2837;
  double t2838;
  double t2839;
  double t2840;
  double t2843;
  double t2810;
  double t2823;
  double t2824;
  double t2825;
  double t2830;
  double t2831;
  double t2866;
  double t2863;
  double t2864;
  double t2867;
  double t2871;
  double t2872;
  double t2873;
  double t2881;
  double t2882;
  double t2883;
  double t2884;
  double t2885;
  double t2865;
  double t2868;
  double t2869;
  double t2870;
  double t2874;
  double t2875;
  double t2833;
  double t2834;
  double t2835;
  double t2903;
  double t2904;
  double t2905;
  double t2851;
  double t2847;
  double t2848;
  double t2849;
  double t2850;
  double t2852;
  double t2877;
  double t2878;
  double t2879;
  double t2918;
  double t2919;
  double t2920;
  double t2893;
  double t2889;
  double t2890;
  double t2891;
  double t2892;
  double t2894;
  double t2907;
  double t2908;
  double t2909;
  double t2911;
  double t2912;
  double t2914;
  double t2915;
  double t2916;
  double t2922;
  double t2923;
  double t2924;
  double t2926;
  double t2927;
  double t2929;
  double t2930;
  double t2931;
  double t2984;
  double t2985;
  double t2986;
  double t2988;
  double t2989;
  double t2990;
  double t3004;
  double t3005;
  double t3006;
  double t3008;
  double t3009;
  double t3010;
  double t2836;
  double t2844;
  double t2845;
  double t2846;
  double t2854;
  double t2855;
  double t2856;
  double t2857;
  double t3021;
  double t3022;
  double t3023;
  double t3024;
  double t3025;
  double t2906;
  double t2910;
  double t2935;
  double t2936;
  double t2937;
  double t2938;
  double t2939;
  double t2940;
  double t2941;
  double t2942;
  double t2943;
  double t2944;
  double t2978;
  double t2979;
  double t2980;
  double t2981;
  double t2982;
  double t2983;
  double t2987;
  double t2991;
  double t2992;
  double t2994;
  double t2995;
  double t2996;
  double t3044;
  double t3045;
  double t3046;
  double t3026;
  double t3027;
  double t3028;
  double t3031;
  double t3032;
  double t3035;
  double t3036;
  double t3037;
  double t3038;
  double t3039;
  double t3040;
  double t3043;
  double t3048;
  double t3049;
  double t3053;
  double t3077;
  double t3078;
  double t3055;
  double t3080;
  double t3081;
  double t3057;
  double t2880;
  double t2886;
  double t2887;
  double t2888;
  double t2896;
  double t2897;
  double t2898;
  double t2899;
  double t3092;
  double t3093;
  double t3094;
  double t3095;
  double t3096;
  double t2921;
  double t2925;
  double t2955;
  double t2956;
  double t2957;
  double t2958;
  double t2959;
  double t2960;
  double t2961;
  double t2962;
  double t2963;
  double t2964;
  double t2998;
  double t2999;
  double t3000;
  double t3001;
  double t3002;
  double t3003;
  double t3007;
  double t3011;
  double t3012;
  double t3014;
  double t3015;
  double t3016;
  double t3115;
  double t3116;
  double t3117;
  double t3097;
  double t3098;
  double t3099;
  double t3102;
  double t3103;
  double t3106;
  double t3107;
  double t3108;
  double t3109;
  double t3110;
  double t3111;
  double t3114;
  double t3119;
  double t3120;
  double t3124;
  double t3148;
  double t3149;
  double t3126;
  double t3151;
  double t3152;
  double t3128;
  double t2945;
  double t2946;
  double t2952;
  double t2953;
  double t2965;
  double t2966;
  double t2972;
  double t2973;
  double t2947;
  double t2948;
  double t2949;
  double t2950;
  double t2951;
  double t2954;
  double t2967;
  double t2968;
  double t2969;
  double t2970;
  double t2971;
  double t2974;
  double t2975;
  double t3208;
  double t3219;
  double t3041;
  double t3229;
  double t3047;
  double t3050;
  double t3051;
  double t3054;
  double t3056;
  double t3058;
  double t3238;
  double t3067;
  double t3068;
  double t3069;
  double t3239;
  double t3063;
  double t3064;
  double t3065;
  double t3240;
  double t3243;
  double t3244;
  double t3075;
  double t3248;
  double t3079;
  double t3082;
  double t3083;
  double t3250;
  double t3085;
  double t3086;
  double t3087;
  double t3214;
  double t3222;
  double t3112;
  double t3232;
  double t3118;
  double t3121;
  double t3122;
  double t3125;
  double t3127;
  double t3129;
  double t3267;
  double t3138;
  double t3139;
  double t3140;
  double t3268;
  double t3134;
  double t3135;
  double t3136;
  double t3269;
  double t3272;
  double t3273;
  double t3146;
  double t3277;
  double t3150;
  double t3153;
  double t3154;
  double t3279;
  double t3156;
  double t3157;
  double t3158;
  double t3180;
  double t3181;
  double t3182;
  double t3183;
  double t3184;
  double t3185;
  double t3186;
  double t3187;
  double t3188;
  double t3163;
  double t3164;
  double t3165;
  double t3166;
  double t2977;
  double t2993;
  double t2997;
  double t3013;
  double t3017;
  double t3018;
  double t2853;
  double t2858;
  double t2859;
  double t2895;
  double t2900;
  double t2901;
  double t3228;
  double t3230;
  double t3231;
  double t3233;
  double t3234;
  double t3235;
  double t3249;
  double t3251;
  double t3252;
  double t3052;
  double t3059;
  double t3060;
  double t3262;
  double t3263;
  double t3264;
  double t3084;
  double t3088;
  double t3089;
  double t3278;
  double t3280;
  double t3281;
  double t3123;
  double t3130;
  double t3131;
  double t3291;
  double t3292;
  double t3293;
  double t3155;
  double t3159;
  double t3160;
  double t3189;
  double t3190;
  double t3191;
  double t3192;
  double t3193;
  double t3194;
  double t3195;
  double t3196;
  double t3209;
  double t3210;
  double t3211;
  double t3241;
  double t3029;
  double t3303;
  double t3304;
  double t3305;
  double t3255;
  double t3256;
  double t3257;
  double t3066;
  double t3070;
  double t3071;
  double t3315;
  double t3316;
  double t3317;
  double t3318;
  double t3319;
  double t3197;
  double t3198;
  double t3199;
  double t3200;
  double t3367;
  double t3368;
  double t3369;
  double t3370;
  double t3406;
  double t3407;
  double t3201;
  double t3297;
  double t3371;
  double t3372;
  double t3400;
  double t3401;
  double t3215;
  double t3216;
  double t3217;
  double t3270;
  double t3100;
  double t3329;
  double t3330;
  double t3331;
  double t3284;
  double t3285;
  double t3286;
  double t3137;
  double t3141;
  double t3142;
  double t3341;
  double t3342;
  double t3343;
  double t3344;
  double t3345;
  double t3202;
  double t3203;
  double t3204;
  double t3205;
  double t3373;
  double t3374;
  double t3375;
  double t3376;
  double t3439;
  double t3440;
  double t3206;
  double t3298;
  double t3377;
  double t3378;
  double t3433;
  double t3434;
  t2815 = Cos(var1[3]);
  t2806 = Cos(var1[4]);
  t2807 = Sin(var1[3]);
  t2818 = Sin(var1[4]);
  t2826 = Sin(var1[2]);
  t2794 = Cos(var1[2]);
  t2827 = t2815*t2806;
  t2828 = -1.*t2807*t2818;
  t2829 = t2827 + t2828;
  t2837 = -1.*t2806;
  t2838 = 1. + t2837;
  t2839 = 0.4*t2838;
  t2840 = 0.64*t2806;
  t2843 = t2839 + t2840;
  t2810 = -1.*t2806*t2807;
  t2823 = -1.*t2815*t2818;
  t2824 = t2810 + t2823;
  t2825 = t2794*t2824;
  t2830 = -1.*t2826*t2829;
  t2831 = t2825 + t2830;
  t2866 = Cos(var1[5]);
  t2863 = Cos(var1[6]);
  t2864 = Sin(var1[5]);
  t2867 = Sin(var1[6]);
  t2871 = t2866*t2863;
  t2872 = -1.*t2864*t2867;
  t2873 = t2871 + t2872;
  t2881 = -1.*t2863;
  t2882 = 1. + t2881;
  t2883 = 0.4*t2882;
  t2884 = 0.64*t2863;
  t2885 = t2883 + t2884;
  t2865 = -1.*t2863*t2864;
  t2868 = -1.*t2866*t2867;
  t2869 = t2865 + t2868;
  t2870 = t2794*t2869;
  t2874 = -1.*t2826*t2873;
  t2875 = t2870 + t2874;
  t2833 = -1.*t2815*t2826;
  t2834 = -1.*t2794*t2807;
  t2835 = t2833 + t2834;
  t2903 = t2794*t2815;
  t2904 = -1.*t2826*t2807;
  t2905 = t2903 + t2904;
  t2851 = t2794*t2829;
  t2847 = t2806*t2807;
  t2848 = t2815*t2818;
  t2849 = t2847 + t2848;
  t2850 = -1.*t2826*t2849;
  t2852 = t2850 + t2851;
  t2877 = -1.*t2866*t2826;
  t2878 = -1.*t2794*t2864;
  t2879 = t2877 + t2878;
  t2918 = t2794*t2866;
  t2919 = -1.*t2826*t2864;
  t2920 = t2918 + t2919;
  t2893 = t2794*t2873;
  t2889 = t2863*t2864;
  t2890 = t2866*t2867;
  t2891 = t2889 + t2890;
  t2892 = -1.*t2826*t2891;
  t2894 = t2892 + t2893;
  t2907 = t2815*t2826;
  t2908 = t2794*t2807;
  t2909 = t2907 + t2908;
  t2911 = t2826*t2824;
  t2912 = t2911 + t2851;
  t2914 = t2794*t2849;
  t2915 = t2826*t2829;
  t2916 = t2914 + t2915;
  t2922 = t2866*t2826;
  t2923 = t2794*t2864;
  t2924 = t2922 + t2923;
  t2926 = t2826*t2869;
  t2927 = t2926 + t2893;
  t2929 = t2794*t2891;
  t2930 = t2826*t2873;
  t2931 = t2929 + t2930;
  t2984 = t2843*t2807;
  t2985 = 0.24*t2815*t2818;
  t2986 = t2984 + t2985;
  t2988 = t2815*t2843;
  t2989 = -0.24*t2807*t2818;
  t2990 = t2988 + t2989;
  t3004 = t2885*t2864;
  t3005 = 0.24*t2866*t2867;
  t3006 = t3004 + t3005;
  t3008 = t2866*t2885;
  t3009 = -0.24*t2864*t2867;
  t3010 = t3008 + t3009;
  t2836 = -0.748*t2835;
  t2844 = t2843*t2818;
  t2845 = -0.24*t2806*t2818;
  t2846 = t2844 + t2845;
  t2854 = t2843*t2806;
  t2855 = Power(t2818,2);
  t2856 = 0.24*t2855;
  t2857 = t2854 + t2856;
  t3021 = -1.*t2815*t2806;
  t3022 = t2807*t2818;
  t3023 = t3021 + t3022;
  t3024 = t2826*t3023;
  t3025 = t2825 + t3024;
  t2906 = -13.6*t2835*t2905;
  t2910 = -13.6*t2909*t2905;
  t2935 = Power(t2835,2);
  t2936 = -6.8*t2935;
  t2937 = -6.8*t2835*t2909;
  t2938 = Power(t2905,2);
  t2939 = -6.8*t2938;
  t2940 = -1.*t2794*t2815;
  t2941 = t2826*t2807;
  t2942 = t2940 + t2941;
  t2943 = -6.8*t2905*t2942;
  t2944 = -1.*t2826*t2824;
  t2978 = Power(t2815,2);
  t2979 = 0.11*t2978;
  t2980 = Power(t2807,2);
  t2981 = 0.11*t2980;
  t2982 = t2979 + t2981;
  t2983 = -6.8*t2835*t2982;
  t2987 = -1.*t2986*t2829;
  t2991 = -1.*t2824*t2990;
  t2992 = t2987 + t2991;
  t2994 = t2986*t2849;
  t2995 = t2829*t2990;
  t2996 = t2994 + t2995;
  t3044 = -1.*t2843*t2807;
  t3045 = -0.24*t2815*t2818;
  t3046 = t3044 + t3045;
  t3026 = -0.768*var2[4]*t3025;
  t3027 = -3.2*t2846*t2912;
  t3028 = -3.2*t2857*t3025;
  t3031 = -6.4*t2912*t2916;
  t3032 = -6.4*t2912*t3025;
  t3035 = -3.2*t2912*t2852;
  t3036 = -3.2*t2831*t2916;
  t3037 = t2794*t3023;
  t3038 = t2944 + t3037;
  t3039 = -3.2*t2912*t3038;
  t3040 = -3.2*t2831*t3025;
  t3043 = -3.2*t2912*t2992;
  t3048 = t2986*t2829;
  t3049 = t2824*t2990;
  t3053 = -3.2*t2996*t3025;
  t3077 = -0.24*t2806*t2807;
  t3078 = t3077 + t3045;
  t3055 = -1.*t2824*t2986;
  t3080 = 0.24*t2815*t2806;
  t3081 = t3080 + t2989;
  t3057 = -1.*t2990*t3023;
  t2880 = -0.748*t2879;
  t2886 = t2885*t2867;
  t2887 = -0.24*t2863*t2867;
  t2888 = t2886 + t2887;
  t2896 = t2885*t2863;
  t2897 = Power(t2867,2);
  t2898 = 0.24*t2897;
  t2899 = t2896 + t2898;
  t3092 = -1.*t2866*t2863;
  t3093 = t2864*t2867;
  t3094 = t3092 + t3093;
  t3095 = t2826*t3094;
  t3096 = t2870 + t3095;
  t2921 = -13.6*t2879*t2920;
  t2925 = -13.6*t2924*t2920;
  t2955 = Power(t2879,2);
  t2956 = -6.8*t2955;
  t2957 = -6.8*t2879*t2924;
  t2958 = Power(t2920,2);
  t2959 = -6.8*t2958;
  t2960 = -1.*t2794*t2866;
  t2961 = t2826*t2864;
  t2962 = t2960 + t2961;
  t2963 = -6.8*t2920*t2962;
  t2964 = -1.*t2826*t2869;
  t2998 = Power(t2866,2);
  t2999 = 0.11*t2998;
  t3000 = Power(t2864,2);
  t3001 = 0.11*t3000;
  t3002 = t2999 + t3001;
  t3003 = -6.8*t2879*t3002;
  t3007 = -1.*t3006*t2873;
  t3011 = -1.*t2869*t3010;
  t3012 = t3007 + t3011;
  t3014 = t3006*t2891;
  t3015 = t2873*t3010;
  t3016 = t3014 + t3015;
  t3115 = -1.*t2885*t2864;
  t3116 = -0.24*t2866*t2867;
  t3117 = t3115 + t3116;
  t3097 = -0.768*var2[6]*t3096;
  t3098 = -3.2*t2888*t2927;
  t3099 = -3.2*t2899*t3096;
  t3102 = -6.4*t2927*t2931;
  t3103 = -6.4*t2927*t3096;
  t3106 = -3.2*t2927*t2894;
  t3107 = -3.2*t2875*t2931;
  t3108 = t2794*t3094;
  t3109 = t2964 + t3108;
  t3110 = -3.2*t2927*t3109;
  t3111 = -3.2*t2875*t3096;
  t3114 = -3.2*t2927*t3012;
  t3119 = t3006*t2873;
  t3120 = t2869*t3010;
  t3124 = -3.2*t3016*t3096;
  t3148 = -0.24*t2863*t2864;
  t3149 = t3148 + t3116;
  t3126 = -1.*t2869*t3006;
  t3151 = 0.24*t2866*t2863;
  t3152 = t3151 + t3009;
  t3128 = -1.*t3010*t3094;
  t2945 = -1.*t2794*t2829;
  t2946 = t2944 + t2945;
  t2952 = -1.*t2794*t2849;
  t2953 = t2952 + t2830;
  t2965 = -1.*t2794*t2873;
  t2966 = t2964 + t2965;
  t2972 = -1.*t2794*t2891;
  t2973 = t2972 + t2874;
  t2947 = -3.2*t2946*t2912;
  t2948 = Power(t2852,2);
  t2949 = -3.2*t2948;
  t2950 = Power(t2831,2);
  t2951 = -3.2*t2950;
  t2954 = -3.2*t2953*t2916;
  t2967 = -3.2*t2966*t2927;
  t2968 = Power(t2894,2);
  t2969 = -3.2*t2968;
  t2970 = Power(t2875,2);
  t2971 = -3.2*t2970;
  t2974 = -3.2*t2973*t2931;
  t2975 = t2936 + t2937 + t2939 + t2943 + t2947 + t2949 + t2951 + t2954 + t2956 + t2957 + t2959 + t2963 + t2967 + t2969 + t2971 + t2974;
  t3208 = -0.748*t2942;
  t3219 = -13.6*t2835*t2942;
  t3041 = t2936 + t2937 + t2939 + t2943 + t3035 + t3036 + t3039 + t3040;
  t3229 = -6.8*t2942*t2982;
  t3047 = t3046*t2829;
  t3050 = t2849*t2990;
  t3051 = t3047 + t3048 + t3049 + t3050;
  t3054 = -1.*t2824*t3046;
  t3056 = -1.*t2829*t2990;
  t3058 = t3054 + t3055 + t3056 + t3057;
  t3238 = -0.768*var2[4]*t3038;
  t3067 = Power(t2806,2);
  t3068 = -0.24*t3067;
  t3069 = t2854 + t3068;
  t3239 = -3.2*t2846*t2831;
  t3063 = -1.*t2843*t2818;
  t3064 = 0.24*t2806*t2818;
  t3065 = t3063 + t3064;
  t3240 = -3.2*t2857*t3038;
  t3243 = -6.4*t2852*t2831;
  t3244 = -6.4*t2831*t3038;
  t3075 = t3035 + t3036 + t3039 + t3040;
  t3248 = -3.2*t2831*t2992;
  t3079 = t3078*t2829;
  t3082 = t2849*t3081;
  t3083 = t3079 + t3048 + t3049 + t3082;
  t3250 = -3.2*t2996*t3038;
  t3085 = -1.*t2824*t3078;
  t3086 = -1.*t2829*t3081;
  t3087 = t3085 + t3055 + t3086 + t3057;
  t3214 = -0.748*t2962;
  t3222 = -13.6*t2879*t2962;
  t3112 = t2956 + t2957 + t2959 + t2963 + t3106 + t3107 + t3110 + t3111;
  t3232 = -6.8*t2962*t3002;
  t3118 = t3117*t2873;
  t3121 = t2891*t3010;
  t3122 = t3118 + t3119 + t3120 + t3121;
  t3125 = -1.*t2869*t3117;
  t3127 = -1.*t2873*t3010;
  t3129 = t3125 + t3126 + t3127 + t3128;
  t3267 = -0.768*var2[6]*t3109;
  t3138 = Power(t2863,2);
  t3139 = -0.24*t3138;
  t3140 = t2896 + t3139;
  t3268 = -3.2*t2888*t2875;
  t3134 = -1.*t2885*t2867;
  t3135 = 0.24*t2863*t2867;
  t3136 = t3134 + t3135;
  t3269 = -3.2*t2899*t3109;
  t3272 = -6.4*t2894*t2875;
  t3273 = -6.4*t2875*t3109;
  t3146 = t3106 + t3107 + t3110 + t3111;
  t3277 = -3.2*t2875*t3012;
  t3150 = t3149*t2873;
  t3153 = t2891*t3152;
  t3154 = t3150 + t3119 + t3120 + t3153;
  t3279 = -3.2*t3016*t3109;
  t3156 = -1.*t2869*t3149;
  t3157 = -1.*t2873*t3152;
  t3158 = t3156 + t3126 + t3157 + t3128;
  t3180 = -6.8*t2835*t2905;
  t3181 = -6.8*t2909*t2905;
  t3182 = -3.2*t2912*t2831;
  t3183 = -3.2*t2852*t2916;
  t3184 = -6.8*t2879*t2920;
  t3185 = -6.8*t2924*t2920;
  t3186 = -3.2*t2927*t2875;
  t3187 = -3.2*t2894*t2931;
  t3188 = t3180 + t3181 + t3182 + t3183 + t3184 + t3185 + t3186 + t3187;
  t3163 = Power(t2794,2);
  t3164 = -12.*t3163;
  t3165 = Power(t2826,2);
  t3166 = -12.*t3165;
  t2977 = 2.88*t2826;
  t2993 = -3.2*t2852*t2992;
  t2997 = -3.2*t2831*t2996;
  t3013 = -3.2*t2894*t3012;
  t3017 = -3.2*t2875*t3016;
  t3018 = t2977 + t2983 + t2993 + t2997 + t3003 + t3013 + t3017;
  t2853 = -3.2*t2846*t2852;
  t2858 = -3.2*t2857*t2831;
  t2859 = t2836 + t2853 + t2858;
  t2895 = -3.2*t2888*t2894;
  t2900 = -3.2*t2899*t2875;
  t2901 = t2880 + t2895 + t2900;
  t3228 = 2.88*t2794;
  t3230 = -3.2*t2953*t2992;
  t3231 = -3.2*t2946*t2996;
  t3233 = -3.2*t2973*t3012;
  t3234 = -3.2*t2966*t3016;
  t3235 = t3228 + t3229 + t3230 + t3231 + t3232 + t3233 + t3234;
  t3249 = -3.2*t2831*t3051;
  t3251 = -3.2*t2852*t3058;
  t3252 = t3229 + t3248 + t3249 + t3250 + t3251;
  t3052 = -3.2*t2912*t3051;
  t3059 = -3.2*t2916*t3058;
  t3060 = t2983 + t3043 + t3052 + t3053 + t3059;
  t3262 = -3.2*t2831*t3083;
  t3263 = -3.2*t2852*t3087;
  t3264 = t3248 + t3262 + t3250 + t3263;
  t3084 = -3.2*t2912*t3083;
  t3088 = -3.2*t2916*t3087;
  t3089 = t3043 + t3084 + t3053 + t3088;
  t3278 = -3.2*t2875*t3122;
  t3280 = -3.2*t2894*t3129;
  t3281 = t3232 + t3277 + t3278 + t3279 + t3280;
  t3123 = -3.2*t2927*t3122;
  t3130 = -3.2*t2931*t3129;
  t3131 = t3003 + t3114 + t3123 + t3124 + t3130;
  t3291 = -3.2*t2875*t3154;
  t3292 = -3.2*t2894*t3158;
  t3293 = t3277 + t3291 + t3279 + t3292;
  t3155 = -3.2*t2927*t3154;
  t3159 = -3.2*t2931*t3158;
  t3160 = t3114 + t3155 + t3124 + t3159;
  t3189 = -2.88*t2794;
  t3190 = -6.8*t2905*t2982;
  t3191 = -3.2*t2916*t2992;
  t3192 = -3.2*t2912*t2996;
  t3193 = -6.8*t2920*t3002;
  t3194 = -3.2*t2931*t3012;
  t3195 = -3.2*t2927*t3016;
  t3196 = t3189 + t3190 + t3191 + t3192 + t3193 + t3194 + t3195;
  t3209 = -3.2*t2857*t2946;
  t3210 = -3.2*t2846*t2953;
  t3211 = t3208 + t3209 + t3210;
  t3241 = t3208 + t3239 + t3240;
  t3029 = t2836 + t3027 + t3028;
  t3303 = -3.2*t2857*t3051;
  t3304 = -3.2*t2846*t3058;
  t3305 = t3303 + t3304;
  t3255 = -3.2*t3069*t2852;
  t3256 = -3.2*t3065*t2831;
  t3257 = t3255 + t3239 + t3256 + t3240;
  t3066 = -3.2*t3065*t2912;
  t3070 = -3.2*t3069*t2916;
  t3071 = t3027 + t3066 + t3070 + t3028;
  t3315 = -3.2*t3069*t2992;
  t3316 = -3.2*t3065*t2996;
  t3317 = -3.2*t2857*t3083;
  t3318 = -3.2*t2846*t3087;
  t3319 = t3315 + t3316 + t3317 + t3318;
  t3197 = -0.748*t2905;
  t3198 = -3.2*t2857*t2912;
  t3199 = -3.2*t2846*t2916;
  t3200 = t3197 + t3198 + t3199;
  t3367 = -0.748*t2982;
  t3368 = -3.2*t2846*t2992;
  t3369 = -3.2*t2857*t2996;
  t3370 = -0.67 + t3367 + t3368 + t3369;
  t3406 = -0.768*var2[1]*t3038;
  t3407 = -0.768*var2[0]*t3025;
  t3201 = -0.768*t2912;
  t3297 = -0.768*t2831;
  t3371 = -0.768*t2996;
  t3372 = -0.2 + t3371;
  t3400 = -0.768*t2857;
  t3401 = -0.2 + t3400;
  t3215 = -3.2*t2899*t2966;
  t3216 = -3.2*t2888*t2973;
  t3217 = t3214 + t3215 + t3216;
  t3270 = t3214 + t3268 + t3269;
  t3100 = t2880 + t3098 + t3099;
  t3329 = -3.2*t2899*t3122;
  t3330 = -3.2*t2888*t3129;
  t3331 = t3329 + t3330;
  t3284 = -3.2*t3140*t2894;
  t3285 = -3.2*t3136*t2875;
  t3286 = t3284 + t3268 + t3285 + t3269;
  t3137 = -3.2*t3136*t2927;
  t3141 = -3.2*t3140*t2931;
  t3142 = t3098 + t3137 + t3141 + t3099;
  t3341 = -3.2*t3140*t3012;
  t3342 = -3.2*t3136*t3016;
  t3343 = -3.2*t2899*t3154;
  t3344 = -3.2*t2888*t3158;
  t3345 = t3341 + t3342 + t3343 + t3344;
  t3202 = -0.748*t2920;
  t3203 = -3.2*t2899*t2927;
  t3204 = -3.2*t2888*t2931;
  t3205 = t3202 + t3203 + t3204;
  t3373 = -0.748*t3002;
  t3374 = -3.2*t2888*t3012;
  t3375 = -3.2*t2899*t3016;
  t3376 = -0.67 + t3373 + t3374 + t3375;
  t3439 = -0.768*var2[1]*t3109;
  t3440 = -0.768*var2[0]*t3096;
  t3206 = -0.768*t2927;
  t3298 = -0.768*t2875;
  t3377 = -0.768*t3016;
  t3378 = -0.2 + t3377;
  t3433 = -0.768*t2899;
  t3434 = -0.2 + t3433;
  p_output1[0]=(t2906 + t2910 - 6.4*t2831*t2912 - 6.4*t2852*t2916 + t2921 + t2925 - 6.4*t2875*t2927 - 6.4*t2894*t2931)*var2[0] + t2975*var2[1] + t3018*var2[2] + t2859*var2[3] - 0.768*t2831*var2[4] + t2901*var2[5] - 0.768*t2875*var2[6];
  p_output1[1]=t3026 + (t2906 + t2910 + t3031 + t3032)*var2[0] + t3041*var2[1] + t3060*var2[2] + t3029*var2[3];
  p_output1[2]=t3026 + (t3031 + t3032)*var2[0] + t3075*var2[1] + t3089*var2[2] + t3071*var2[3];
  p_output1[3]=t3097 + (t2921 + t2925 + t3102 + t3103)*var2[0] + t3112*var2[1] + t3131*var2[2] + t3100*var2[5];
  p_output1[4]=t3097 + (t3102 + t3103)*var2[0] + t3146*var2[1] + t3160*var2[2] + t3142*var2[5];
  p_output1[5]=-6.8*Power(t2909,2) - 3.2*Power(t2912,2) - 3.2*Power(t2916,2) - 6.8*Power(t2924,2) - 3.2*Power(t2927,2) - 3.2*Power(t2931,2) + t2939 + t2959 + t3164 + t3166;
  p_output1[6]=t3188;
  p_output1[7]=t3196;
  p_output1[8]=t3200;
  p_output1[9]=t3201;
  p_output1[10]=t3205;
  p_output1[11]=t3206;
  p_output1[12]=t2975*var2[0] + (t2906 + t2921 - 6.4*t2831*t2946 - 6.4*t2852*t2953 - 6.4*t2875*t2966 - 6.4*t2894*t2973 + t3219 + t3222)*var2[1] + t3235*var2[2] + t3211*var2[3] - 0.768*t2946*var2[4] + t3217*var2[5] - 0.768*t2966*var2[6];
  p_output1[13]=t3238 + t3041*var2[0] + (t2906 + t3219 + t3243 + t3244)*var2[1] + t3252*var2[2] + t3241*var2[3];
  p_output1[14]=t3238 + t3075*var2[0] + (t3243 + t3244)*var2[1] + t3264*var2[2] + t3257*var2[3];
  p_output1[15]=t3267 + t3112*var2[0] + (t2921 + t3222 + t3272 + t3273)*var2[1] + t3281*var2[2] + t3270*var2[5];
  p_output1[16]=t3267 + t3146*var2[0] + (t3272 + t3273)*var2[1] + t3293*var2[2] + t3286*var2[5];
  p_output1[17]=t3188;
  p_output1[18]=t2936 + t2939 + t2949 + t2951 + t2956 + t2959 + t2969 + t2971 + t3164 + t3166;
  p_output1[19]=t3018;
  p_output1[20]=t2859;
  p_output1[21]=t3297;
  p_output1[22]=t2901;
  p_output1[23]=t3298;
  p_output1[24]=t3018*var2[0] + t3235*var2[1];
  p_output1[25]=t3060*var2[0] + t3252*var2[1] + (-6.4*t2996*t3051 - 6.4*t2992*t3058)*var2[2] + t3305*var2[3] - 0.768*t3051*var2[4];
  p_output1[26]=t3089*var2[0] + t3264*var2[1] + (-6.4*t2996*t3083 - 6.4*t2992*t3087)*var2[2] + t3319*var2[3] - 0.768*t3083*var2[4];
  p_output1[27]=t3131*var2[0] + t3281*var2[1] + (-6.4*t3016*t3122 - 6.4*t3012*t3129)*var2[2] + t3331*var2[5] - 0.768*t3122*var2[6];
  p_output1[28]=t3160*var2[0] + t3293*var2[1] + (-6.4*t3016*t3154 - 6.4*t3012*t3158)*var2[2] + t3345*var2[5] - 0.768*t3154*var2[6];
  p_output1[29]=t3196;
  p_output1[30]=t3018;
  p_output1[31]=-3.3612 - 6.8*Power(t2982,2) - 3.2*Power(t2992,2) - 3.2*Power(t2996,2) - 6.8*Power(t3002,2) - 3.2*Power(t3012,2) - 3.2*Power(t3016,2);
  p_output1[32]=t3370;
  p_output1[33]=t3372;
  p_output1[34]=t3376;
  p_output1[35]=t3378;
  p_output1[36]=t2859*var2[0] + t3211*var2[1];
  p_output1[37]=t3029*var2[0] + t3241*var2[1] + t3305*var2[2];
  p_output1[38]=t3071*var2[0] + t3257*var2[1] + t3319*var2[2] + (-6.4*t2857*t3065 - 6.4*t2846*t3069)*var2[3] - 0.768*t3065*var2[4];
  p_output1[39]=t3200;
  p_output1[40]=t2859;
  p_output1[41]=t3370;
  p_output1[42]=-1.58228 - 3.2*Power(t2846,2) - 3.2*Power(t2857,2);
  p_output1[43]=t3401;
  p_output1[44]=-0.768*t2831*var2[0] - 0.768*t2946*var2[1];
  p_output1[45]=t3406 + t3407 - 0.768*t3051*var2[2];
  p_output1[46]=t3406 + t3407 - 0.768*t3083*var2[2] - 0.768*t3065*var2[3];
  p_output1[47]=t3201;
  p_output1[48]=t3297;
  p_output1[49]=t3372;
  p_output1[50]=t3401;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t2901*var2[0] + t3217*var2[1];
  p_output1[53]=t3100*var2[0] + t3270*var2[1] + t3331*var2[2];
  p_output1[54]=t3142*var2[0] + t3286*var2[1] + t3345*var2[2] + (-6.4*t2899*t3136 - 6.4*t2888*t3140)*var2[5] - 0.768*t3136*var2[6];
  p_output1[55]=t3205;
  p_output1[56]=t2901;
  p_output1[57]=t3376;
  p_output1[58]=-1.58228 - 3.2*Power(t2888,2) - 3.2*Power(t2899,2);
  p_output1[59]=t3434;
  p_output1[60]=-0.768*t2875*var2[0] - 0.768*t2966*var2[1];
  p_output1[61]=t3439 + t3440 - 0.768*t3122*var2[2];
  p_output1[62]=t3439 + t3440 - 0.768*t3154*var2[2] - 0.768*t3136*var2[5];
  p_output1[63]=t3206;
  p_output1[64]=t3298;
  p_output1[65]=t3378;
  p_output1[66]=t3434;
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
