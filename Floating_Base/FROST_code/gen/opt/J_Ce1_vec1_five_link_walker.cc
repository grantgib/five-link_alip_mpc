/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:54 GMT-05:00
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
  double t2777;
  double t2759;
  double t2764;
  double t2778;
  double t2757;
  double t2798;
  double t2799;
  double t2804;
  double t2814;
  double t2817;
  double t2774;
  double t2781;
  double t2784;
  double t2821;
  double t2824;
  double t2830;
  double t2790;
  double t2818;
  double t2839;
  double t2841;
  double t2842;
  double t2854;
  double t2856;
  double t2857;
  double t2916;
  double t2922;
  double t2923;
  double t2950;
  double t2952;
  double t2957;
  double t2831;
  double t2835;
  double t2836;
  double t2843;
  double t2845;
  double t2846;
  double t2850;
  double t2851;
  double t2858;
  double t2860;
  double t2861;
  double t2862;
  double t2869;
  double t2889;
  double t2932;
  double t2936;
  double t2942;
  double t2943;
  double t2947;
  double t2948;
  double t2958;
  double t2961;
  double t2962;
  double t2965;
  double t2969;
  double t2970;
  double t3010;
  double t3018;
  double t3019;
  double t3021;
  double t3023;
  double t3041;
  double t3046;
  double t3047;
  double t3073;
  double t3075;
  double t3074;
  double t3078;
  double t3081;
  double t3090;
  double t3095;
  double t3096;
  double t3100;
  double t3103;
  double t3104;
  double t3105;
  double t3133;
  double t3099;
  double t3101;
  double t3106;
  double t3107;
  double t3128;
  double t3135;
  double t3149;
  double t3151;
  double t3152;
  double t3089;
  double t3169;
  double t3170;
  double t3173;
  double t3028;
  double t3029;
  double t3032;
  double t3033;
  double t3036;
  double t3040;
  double t3048;
  double t3049;
  double t3060;
  double t3061;
  double t3071;
  double t3072;
  double t3164;
  double t3165;
  double t3174;
  double t3175;
  double t3181;
  double t3182;
  double t3186;
  double t3187;
  double t2975;
  double t3203;
  double t3204;
  double t3210;
  double t3211;
  double t3215;
  double t3216;
  double t3217;
  double t3218;
  double t2904;
  double t3222;
  double t3223;
  double t3193;
  double t3238;
  double t3239;
  double t3240;
  double t3241;
  double t3242;
  double t3248;
  double t3249;
  double t3250;
  double t3188;
  double t3251;
  double t3252;
  double t3264;
  double t3265;
  double t3268;
  double t3274;
  double t3279;
  double t3280;
  double t3285;
  double t3286;
  double t3277;
  double t3278;
  double t3281;
  double t3282;
  double t3283;
  double t3275;
  double t3266;
  double t3289;
  double t3287;
  double t3003;
  double t3004;
  double t2977;
  double t2978;
  double t3309;
  double t3310;
  double t3311;
  double t3312;
  double t3313;
  double t3314;
  double t3315;
  double t3316;
  double t3317;
  double t3320;
  double t3321;
  double t3322;
  double t3323;
  double t3097;
  double t3098;
  double t3146;
  double t3148;
  double t3342;
  double t3336;
  double t3337;
  double t3338;
  double t3339;
  double t3349;
  double t3350;
  double t3351;
  double t3352;
  double t3353;
  double t3354;
  double t3355;
  double t3356;
  double t3324;
  double t3366;
  double t3369;
  double t3370;
  double t3371;
  double t3372;
  double t3373;
  double t3318;
  double t3374;
  double t3375;
  double t3359;
  double t3385;
  double t3386;
  double t3387;
  double t3388;
  double t3389;
  double t3390;
  double t3357;
  double t3391;
  double t3392;
  double t3401;
  double t3402;
  double t3403;
  double t3404;
  double t3407;
  double t3408;
  double t3409;
  double t3410;
  double t2990;
  double t3001;
  double t3116;
  double t3140;
  double t3417;
  double t3418;
  double t3419;
  double t3420;
  double t3427;
  double t3428;
  double t3429;
  double t3430;
  double t3413;
  double t3414;
  double t3415;
  double t3416;
  double t3421;
  double t3422;
  double t3423;
  double t3424;
  double t3425;
  double t3411;
  double t3405;
  double t3433;
  double t3431;
  double t3447;
  double t3448;
  double t3449;
  double t3450;
  double t3451;
  double t3452;
  double t3453;
  double t3454;
  double t3456;
  double t3457;
  double t3458;
  double t3462;
  double t3463;
  double t3464;
  double t3455;
  double t3459;
  double t3460;
  double t3461;
  double t3466;
  double t3467;
  double t3471;
  double t3472;
  double t3473;
  double t3474;
  double t3483;
  double t3484;
  double t3476;
  double t3486;
  double t3487;
  double t3478;
  double t3441;
  double t3442;
  double t3443;
  double t3444;
  double t3445;
  double t3446;
  double t3506;
  double t3507;
  double t3508;
  double t3509;
  double t3510;
  double t3511;
  double t3512;
  double t3513;
  double t3515;
  double t3516;
  double t3517;
  double t3500;
  double t3501;
  double t3502;
  double t3503;
  double t3504;
  double t3505;
  double t3514;
  double t3518;
  double t3519;
  double t3521;
  double t3522;
  double t3523;
  double t3528;
  double t3529;
  double t3530;
  double t3527;
  double t3532;
  double t3533;
  double t3537;
  double t3546;
  double t3547;
  double t3539;
  double t3549;
  double t3550;
  double t3541;
  double t3465;
  double t3468;
  double t3469;
  double t3470;
  double t3475;
  double t3477;
  double t3479;
  double t3480;
  double t3481;
  double t3569;
  double t3570;
  double t3571;
  double t3563;
  double t3564;
  double t3485;
  double t3488;
  double t3489;
  double t3568;
  double t3574;
  double t3491;
  double t3492;
  double t3493;
  double t3579;
  double t3592;
  double t3593;
  double t3583;
  double t3490;
  double t3494;
  double t3495;
  double t3588;
  double t3589;
  double t3590;
  double t3591;
  double t3594;
  double t3595;
  double t3596;
  double t3597;
  double t3598;
  double t3599;
  double t3600;
  double t3601;
  double t3602;
  double t3603;
  double t3604;
  double t3605;
  double t3606;
  double t3607;
  double t3608;
  double t3531;
  double t3534;
  double t3535;
  double t3536;
  double t3538;
  double t3540;
  double t3542;
  double t3543;
  double t3544;
  double t3635;
  double t3636;
  double t3637;
  double t3629;
  double t3630;
  double t3548;
  double t3551;
  double t3552;
  double t3634;
  double t3640;
  double t3554;
  double t3555;
  double t3556;
  double t3645;
  double t3658;
  double t3659;
  double t3649;
  double t3553;
  double t3557;
  double t3558;
  double t3654;
  double t3655;
  double t3656;
  double t3657;
  double t3660;
  double t3661;
  double t3662;
  double t3663;
  double t3664;
  double t3665;
  double t3666;
  double t3667;
  double t3668;
  double t3669;
  double t3670;
  double t3671;
  double t3672;
  double t3673;
  double t3674;
  double t3695;
  double t3697;
  double t3694;
  double t3708;
  double t3713;
  double t3715;
  double t3705;
  double t3706;
  double t3707;
  double t3709;
  double t3710;
  double t3711;
  double t3696;
  double t3698;
  double t3699;
  double t3701;
  double t3702;
  double t3703;
  double t3714;
  double t3716;
  double t3717;
  double t3719;
  double t3720;
  double t3721;
  double t3729;
  double t3735;
  double t3736;
  double t3737;
  double t3730;
  double t3731;
  double t3732;
  double t3733;
  double t3741;
  double t3742;
  double t3743;
  double t3745;
  double t3746;
  double t3747;
  double t3758;
  double t3759;
  double t3749;
  double t3750;
  double t3751;
  double t3748;
  double t3752;
  double t3753;
  double t3762;
  double t3763;
  double t3764;
  double t3781;
  double t3786;
  double t3787;
  double t3782;
  double t3783;
  double t3784;
  double t3788;
  double t3790;
  double t3791;
  double t3792;
  double t3803;
  double t3804;
  double t3805;
  double t3806;
  double t3807;
  double t3813;
  double t3814;
  double t3820;
  double t3821;
  double t3822;
  double t3815;
  double t3816;
  double t3817;
  double t3818;
  double t3826;
  double t3827;
  double t3828;
  double t3830;
  double t3831;
  double t3832;
  double t3843;
  double t3844;
  double t3834;
  double t3835;
  double t3836;
  double t3833;
  double t3837;
  double t3838;
  double t3847;
  double t3848;
  double t3849;
  double t3866;
  double t3871;
  double t3872;
  double t3867;
  double t3868;
  double t3869;
  double t3873;
  double t3875;
  double t3876;
  double t3877;
  double t3888;
  double t3889;
  double t3890;
  double t3891;
  double t3892;
  double t3898;
  t2777 = Cos(var1[3]);
  t2759 = Cos(var1[4]);
  t2764 = Sin(var1[3]);
  t2778 = Sin(var1[4]);
  t2757 = Sin(var1[2]);
  t2798 = Cos(var1[2]);
  t2799 = t2777*t2759;
  t2804 = -1.*t2764*t2778;
  t2814 = t2799 + t2804;
  t2817 = t2798*t2814;
  t2774 = -1.*t2759*t2764;
  t2781 = -1.*t2777*t2778;
  t2784 = t2774 + t2781;
  t2821 = t2759*t2764;
  t2824 = t2777*t2778;
  t2830 = t2821 + t2824;
  t2790 = t2757*t2784;
  t2818 = t2790 + t2817;
  t2839 = t2798*t2784;
  t2841 = -1.*t2757*t2814;
  t2842 = t2839 + t2841;
  t2854 = -1.*t2777*t2759;
  t2856 = t2764*t2778;
  t2857 = t2854 + t2856;
  t2916 = -1.*t2777*t2757;
  t2922 = -1.*t2798*t2764;
  t2923 = t2916 + t2922;
  t2950 = t2798*t2777;
  t2952 = -1.*t2757*t2764;
  t2957 = t2950 + t2952;
  t2831 = -1.*t2757*t2830;
  t2835 = t2831 + t2817;
  t2836 = 6.4*t2818*t2835;
  t2843 = t2798*t2830;
  t2845 = t2757*t2814;
  t2846 = t2843 + t2845;
  t2850 = 6.4*t2842*t2846;
  t2851 = -1.*t2757*t2784;
  t2858 = t2798*t2857;
  t2860 = t2851 + t2858;
  t2861 = 6.4*t2818*t2860;
  t2862 = t2757*t2857;
  t2869 = t2839 + t2862;
  t2889 = 6.4*t2842*t2869;
  t2932 = Power(t2923,2);
  t2936 = 13.6*t2932;
  t2942 = t2777*t2757;
  t2943 = t2798*t2764;
  t2947 = t2942 + t2943;
  t2948 = 13.6*t2923*t2947;
  t2958 = Power(t2957,2);
  t2961 = 13.6*t2958;
  t2962 = -1.*t2798*t2777;
  t2965 = t2757*t2764;
  t2969 = t2962 + t2965;
  t2970 = 13.6*t2957*t2969;
  t3010 = Cos(var1[5]);
  t3018 = -1.*t3010*t2757;
  t3019 = Sin(var1[5]);
  t3021 = -1.*t2798*t3019;
  t3023 = t3018 + t3021;
  t3041 = t2798*t3010;
  t3046 = -1.*t2757*t3019;
  t3047 = t3041 + t3046;
  t3073 = Cos(var1[6]);
  t3075 = Sin(var1[6]);
  t3074 = -1.*t3073*t3019;
  t3078 = -1.*t3010*t3075;
  t3081 = t3074 + t3078;
  t3090 = t3010*t3073;
  t3095 = -1.*t3019*t3075;
  t3096 = t3090 + t3095;
  t3100 = t2798*t3096;
  t3103 = t3073*t3019;
  t3104 = t3010*t3075;
  t3105 = t3103 + t3104;
  t3133 = -1.*t2757*t3096;
  t3099 = t2757*t3081;
  t3101 = t3099 + t3100;
  t3106 = -1.*t2757*t3105;
  t3107 = t3106 + t3100;
  t3128 = t2798*t3081;
  t3135 = t3128 + t3133;
  t3149 = t2798*t3105;
  t3151 = t2757*t3096;
  t3152 = t3149 + t3151;
  t3089 = -1.*t2757*t3081;
  t3169 = -1.*t3010*t3073;
  t3170 = t3019*t3075;
  t3173 = t3169 + t3170;
  t3028 = Power(t3023,2);
  t3029 = 13.6*t3028;
  t3032 = t3010*t2757;
  t3033 = t2798*t3019;
  t3036 = t3032 + t3033;
  t3040 = 13.6*t3023*t3036;
  t3048 = Power(t3047,2);
  t3049 = 13.6*t3048;
  t3060 = -1.*t2798*t3010;
  t3061 = t2757*t3019;
  t3071 = t3060 + t3061;
  t3072 = 13.6*t3047*t3071;
  t3164 = 6.4*t3101*t3107;
  t3165 = 6.4*t3135*t3152;
  t3174 = t2798*t3173;
  t3175 = t3089 + t3174;
  t3181 = 6.4*t3101*t3175;
  t3182 = t2757*t3173;
  t3186 = t3128 + t3182;
  t3187 = 6.4*t3135*t3186;
  t2975 = t2936 + t2948 + t2961 + t2970 + t2836 + t2850 + t2861 + t2889;
  t3203 = Power(t2818,2);
  t3204 = 6.4*t3203;
  t3210 = t2757*t2830;
  t3211 = t3210 + t2858;
  t3215 = 6.4*t2818*t3211;
  t3216 = 6.4*t2846*t2869;
  t3217 = Power(t2869,2);
  t3218 = 6.4*t3217;
  t2904 = t2836 + t2850 + t2861 + t2889;
  t3222 = t3204 + t3215 + t3216 + t3218;
  t3223 = -0.5*var2[4]*t3222;
  t3193 = t3029 + t3040 + t3049 + t3072 + t3164 + t3165 + t3181 + t3187;
  t3238 = Power(t3101,2);
  t3239 = 6.4*t3238;
  t3240 = t2757*t3105;
  t3241 = t3240 + t3174;
  t3242 = 6.4*t3101*t3241;
  t3248 = 6.4*t3152*t3186;
  t3249 = Power(t3186,2);
  t3250 = 6.4*t3249;
  t3188 = t3164 + t3165 + t3181 + t3187;
  t3251 = t3239 + t3242 + t3248 + t3250;
  t3252 = -0.5*var2[6]*t3251;
  t3264 = 6.4*t2818*t2846;
  t3265 = 6.4*t2818*t2869;
  t3268 = 13.6*t2923*t2957;
  t3274 = 13.6*t2947*t2957;
  t3279 = 13.6*t3023*t3047;
  t3280 = 13.6*t3036*t3047;
  t3285 = 6.4*t3101*t3152;
  t3286 = 6.4*t3101*t3186;
  t3277 = 6.4*t2818*t2842;
  t3278 = 6.4*t2835*t2846;
  t3281 = 6.4*t3101*t3135;
  t3282 = 6.4*t3107*t3152;
  t3283 = t3268 + t3274 + t3277 + t3278 + t3279 + t3280 + t3281 + t3282;
  t3275 = t3268 + t3274 + t3264 + t3265;
  t3266 = t3264 + t3265;
  t3289 = t3279 + t3280 + t3285 + t3286;
  t3287 = t3285 + t3286;
  t3003 = -1.*t2798*t2830;
  t3004 = t3003 + t2841;
  t2977 = -1.*t2798*t2814;
  t2978 = t2851 + t2977;
  t3309 = 6.4*t2835*t2842;
  t3310 = 3.2*t2818*t3004;
  t3311 = 3.2*t2978*t2846;
  t3312 = 6.4*t2842*t2860;
  t3313 = -1.*t2798*t2784;
  t3314 = -1.*t2757*t2857;
  t3315 = t3313 + t3314;
  t3316 = 3.2*t2818*t3315;
  t3317 = 3.2*t2978*t2869;
  t3320 = 20.4*t2923*t2957;
  t3321 = 6.8*t2947*t2957;
  t3322 = 20.4*t2923*t2969;
  t3323 = 6.8*t2947*t2969;
  t3097 = -1.*t2798*t3096;
  t3098 = t3089 + t3097;
  t3146 = -1.*t2798*t3105;
  t3148 = t3146 + t3133;
  t3342 = -1.*t2798*t3081;
  t3336 = 20.4*t3023*t3047;
  t3337 = 6.8*t3036*t3047;
  t3338 = 20.4*t3023*t3071;
  t3339 = 6.8*t3036*t3071;
  t3349 = 6.4*t3107*t3135;
  t3350 = 3.2*t3101*t3148;
  t3351 = 3.2*t3098*t3152;
  t3352 = 6.4*t3135*t3175;
  t3353 = -1.*t2757*t3173;
  t3354 = t3342 + t3353;
  t3355 = 3.2*t3101*t3354;
  t3356 = 3.2*t3098*t3186;
  t3324 = t3320 + t3321 + t3322 + t3323 + t3309 + t3310 + t3311 + t3312 + t3316 + t3317;
  t3366 = 3.2*t2846*t2860;
  t3369 = 3.2*t2842*t3211;
  t3370 = t2843 + t3314;
  t3371 = 3.2*t2818*t3370;
  t3372 = 3.2*t2835*t2869;
  t3373 = 6.4*t2860*t2869;
  t3318 = t3309 + t3310 + t3311 + t3312 + t3316 + t3317;
  t3374 = t3277 + t3366 + t3369 + t3371 + t3372 + t3373;
  t3375 = -0.5*var2[4]*t3374;
  t3359 = t3336 + t3337 + t3338 + t3339 + t3349 + t3350 + t3351 + t3352 + t3355 + t3356;
  t3385 = 3.2*t3152*t3175;
  t3386 = 3.2*t3135*t3241;
  t3387 = t3149 + t3353;
  t3388 = 3.2*t3101*t3387;
  t3389 = 3.2*t3107*t3186;
  t3390 = 6.4*t3175*t3186;
  t3357 = t3349 + t3350 + t3351 + t3352 + t3355 + t3356;
  t3391 = t3281 + t3385 + t3386 + t3388 + t3389 + t3390;
  t3392 = -0.5*var2[6]*t3391;
  t3401 = 3.2*t2818*t2835;
  t3402 = 3.2*t2842*t2846;
  t3403 = 3.2*t2818*t2860;
  t3404 = 3.2*t2842*t2869;
  t3407 = 6.8*t2932;
  t3408 = 6.8*t2923*t2947;
  t3409 = 6.8*t2958;
  t3410 = 6.8*t2957*t2969;
  t2990 = Power(t2835,2);
  t3001 = Power(t2842,2);
  t3116 = Power(t3107,2);
  t3140 = Power(t3135,2);
  t3417 = 6.8*t3028;
  t3418 = 6.8*t3023*t3036;
  t3419 = 6.8*t3048;
  t3420 = 6.8*t3047*t3071;
  t3427 = 3.2*t3101*t3107;
  t3428 = 3.2*t3135*t3152;
  t3429 = 3.2*t3101*t3175;
  t3430 = 3.2*t3135*t3186;
  t3413 = 3.2*t2978*t2818;
  t3414 = 3.2*t2990;
  t3415 = 3.2*t3001;
  t3416 = 3.2*t3004*t2846;
  t3421 = 3.2*t3098*t3101;
  t3422 = 3.2*t3116;
  t3423 = 3.2*t3140;
  t3424 = 3.2*t3148*t3152;
  t3425 = t3407 + t3408 + t3409 + t3410 + t3413 + t3414 + t3415 + t3416 + t3417 + t3418 + t3419 + t3420 + t3421 + t3422 + t3423 + t3424;
  t3411 = t3407 + t3408 + t3409 + t3410 + t3401 + t3402 + t3403 + t3404;
  t3405 = t3401 + t3402 + t3403 + t3404;
  t3433 = t3417 + t3418 + t3419 + t3420 + t3427 + t3428 + t3429 + t3430;
  t3431 = t3427 + t3428 + t3429 + t3430;
  t3447 = -1.*t2759;
  t3448 = 1. + t3447;
  t3449 = 0.4*t3448;
  t3450 = 0.64*t2759;
  t3451 = t3449 + t3450;
  t3452 = t3451*t2764;
  t3453 = 0.24*t2777*t2778;
  t3454 = t3452 + t3453;
  t3456 = t2777*t3451;
  t3457 = -0.24*t2764*t2778;
  t3458 = t3456 + t3457;
  t3462 = -1.*t3451*t2764;
  t3463 = -0.24*t2777*t2778;
  t3464 = t3462 + t3463;
  t3455 = -1.*t3454*t2814;
  t3459 = -1.*t2784*t3458;
  t3460 = t3455 + t3459;
  t3461 = 3.2*t2842*t3460;
  t3466 = t3454*t2814;
  t3467 = t2784*t3458;
  t3471 = t3454*t2830;
  t3472 = t2814*t3458;
  t3473 = t3471 + t3472;
  t3474 = 3.2*t3473*t2860;
  t3483 = -0.24*t2759*t2764;
  t3484 = t3483 + t3463;
  t3476 = -1.*t2784*t3454;
  t3486 = 0.24*t2777*t2759;
  t3487 = t3486 + t3457;
  t3478 = -1.*t3458*t2857;
  t3441 = Power(t2777,2);
  t3442 = 0.11*t3441;
  t3443 = Power(t2764,2);
  t3444 = 0.11*t3443;
  t3445 = t3442 + t3444;
  t3446 = 6.8*t2969*t3445;
  t3506 = -1.*t3073;
  t3507 = 1. + t3506;
  t3508 = 0.4*t3507;
  t3509 = 0.64*t3073;
  t3510 = t3508 + t3509;
  t3511 = t3510*t3019;
  t3512 = 0.24*t3010*t3075;
  t3513 = t3511 + t3512;
  t3515 = t3010*t3510;
  t3516 = -0.24*t3019*t3075;
  t3517 = t3515 + t3516;
  t3500 = Power(t3010,2);
  t3501 = 0.11*t3500;
  t3502 = Power(t3019,2);
  t3503 = 0.11*t3502;
  t3504 = t3501 + t3503;
  t3505 = 6.8*t3071*t3504;
  t3514 = -1.*t3513*t3096;
  t3518 = -1.*t3081*t3517;
  t3519 = t3514 + t3518;
  t3521 = t3513*t3105;
  t3522 = t3096*t3517;
  t3523 = t3521 + t3522;
  t3528 = -1.*t3510*t3019;
  t3529 = -0.24*t3010*t3075;
  t3530 = t3528 + t3529;
  t3527 = 3.2*t3135*t3519;
  t3532 = t3513*t3096;
  t3533 = t3081*t3517;
  t3537 = 3.2*t3523*t3175;
  t3546 = -0.24*t3073*t3019;
  t3547 = t3546 + t3529;
  t3539 = -1.*t3081*t3513;
  t3549 = 0.24*t3010*t3073;
  t3550 = t3549 + t3516;
  t3541 = -1.*t3517*t3173;
  t3465 = t3464*t2814;
  t3468 = t2830*t3458;
  t3469 = t3465 + t3466 + t3467 + t3468;
  t3470 = 3.2*t2842*t3469;
  t3475 = -1.*t2784*t3464;
  t3477 = -1.*t2814*t3458;
  t3479 = t3475 + t3476 + t3477 + t3478;
  t3480 = 3.2*t2835*t3479;
  t3481 = t3446 + t3461 + t3470 + t3474 + t3480;
  t3569 = -1.*t2777*t3451;
  t3570 = 0.24*t2764*t2778;
  t3571 = t3569 + t3570;
  t3563 = 3.2*t3473*t3211;
  t3564 = 3.2*t3460*t2869;
  t3485 = t3484*t2814;
  t3488 = t2830*t3487;
  t3489 = t3485 + t3466 + t3467 + t3488;
  t3568 = -1.*t2830*t3458;
  t3574 = -1.*t3454*t2857;
  t3491 = -1.*t2784*t3484;
  t3492 = -1.*t2814*t3487;
  t3493 = t3491 + t3476 + t3492 + t3478;
  t3579 = t2784*t3454;
  t3592 = -0.24*t2777*t2759;
  t3593 = t3592 + t3570;
  t3583 = t3458*t2857;
  t3490 = 3.2*t2842*t3489;
  t3494 = 3.2*t2835*t3493;
  t3495 = t3461 + t3490 + t3474 + t3494;
  t3588 = 3.2*t3469*t2869;
  t3589 = 3.2*t3489*t2869;
  t3590 = -1.*t3484*t2814;
  t3591 = -1.*t2784*t3487;
  t3594 = -1.*t2784*t3593;
  t3595 = -1.*t3464*t2857;
  t3596 = -1.*t3484*t2857;
  t3597 = t3590 + t3459 + t3568 + t3591 + t3594 + t3595 + t3596 + t3574;
  t3598 = 3.2*t2846*t3597;
  t3599 = 3.2*t2818*t3479;
  t3600 = 3.2*t2818*t3493;
  t3601 = t2784*t3464;
  t3602 = t2784*t3484;
  t3603 = t3484*t2830;
  t3604 = t2814*t3487;
  t3605 = t2814*t3593;
  t3606 = t3601 + t3602 + t3579 + t3603 + t3472 + t3604 + t3605 + t3583;
  t3607 = 3.2*t2818*t3606;
  t3608 = t3563 + t3564 + t3588 + t3589 + t3598 + t3599 + t3600 + t3607;
  t3531 = t3530*t3096;
  t3534 = t3105*t3517;
  t3535 = t3531 + t3532 + t3533 + t3534;
  t3536 = 3.2*t3135*t3535;
  t3538 = -1.*t3081*t3530;
  t3540 = -1.*t3096*t3517;
  t3542 = t3538 + t3539 + t3540 + t3541;
  t3543 = 3.2*t3107*t3542;
  t3544 = t3505 + t3527 + t3536 + t3537 + t3543;
  t3635 = -1.*t3010*t3510;
  t3636 = 0.24*t3019*t3075;
  t3637 = t3635 + t3636;
  t3629 = 3.2*t3523*t3241;
  t3630 = 3.2*t3519*t3186;
  t3548 = t3547*t3096;
  t3551 = t3105*t3550;
  t3552 = t3548 + t3532 + t3533 + t3551;
  t3634 = -1.*t3105*t3517;
  t3640 = -1.*t3513*t3173;
  t3554 = -1.*t3081*t3547;
  t3555 = -1.*t3096*t3550;
  t3556 = t3554 + t3539 + t3555 + t3541;
  t3645 = t3081*t3513;
  t3658 = -0.24*t3010*t3073;
  t3659 = t3658 + t3636;
  t3649 = t3517*t3173;
  t3553 = 3.2*t3135*t3552;
  t3557 = 3.2*t3107*t3556;
  t3558 = t3527 + t3553 + t3537 + t3557;
  t3654 = 3.2*t3535*t3186;
  t3655 = 3.2*t3552*t3186;
  t3656 = -1.*t3547*t3096;
  t3657 = -1.*t3081*t3550;
  t3660 = -1.*t3081*t3659;
  t3661 = -1.*t3530*t3173;
  t3662 = -1.*t3547*t3173;
  t3663 = t3656 + t3518 + t3634 + t3657 + t3660 + t3661 + t3662 + t3640;
  t3664 = 3.2*t3152*t3663;
  t3665 = 3.2*t3101*t3542;
  t3666 = 3.2*t3101*t3556;
  t3667 = t3081*t3530;
  t3668 = t3081*t3547;
  t3669 = t3547*t3105;
  t3670 = t3096*t3550;
  t3671 = t3096*t3659;
  t3672 = t3667 + t3668 + t3645 + t3669 + t3522 + t3670 + t3671 + t3649;
  t3673 = 3.2*t3101*t3672;
  t3674 = t3629 + t3630 + t3654 + t3655 + t3664 + t3665 + t3666 + t3673;
  t3695 = 3.2*t2818*t3460;
  t3697 = 3.2*t3473*t2869;
  t3694 = 6.8*t2923*t3445;
  t3708 = 6.8*t3023*t3504;
  t3713 = 3.2*t3101*t3519;
  t3715 = 3.2*t3523*t3186;
  t3705 = -2.88*t2757;
  t3706 = 3.2*t2835*t3460;
  t3707 = 3.2*t2842*t3473;
  t3709 = 3.2*t3107*t3519;
  t3710 = 3.2*t3135*t3523;
  t3711 = t3705 + t3694 + t3706 + t3707 + t3708 + t3709 + t3710;
  t3696 = 3.2*t2818*t3469;
  t3698 = 3.2*t2846*t3479;
  t3699 = t3694 + t3695 + t3696 + t3697 + t3698;
  t3701 = 3.2*t2818*t3489;
  t3702 = 3.2*t2846*t3493;
  t3703 = t3695 + t3701 + t3697 + t3702;
  t3714 = 3.2*t3101*t3535;
  t3716 = 3.2*t3152*t3542;
  t3717 = t3708 + t3713 + t3714 + t3715 + t3716;
  t3719 = 3.2*t3101*t3552;
  t3720 = 3.2*t3152*t3556;
  t3721 = t3713 + t3719 + t3715 + t3720;
  t3729 = 0.748*t2969;
  t3735 = t3451*t2778;
  t3736 = -0.24*t2759*t2778;
  t3737 = t3735 + t3736;
  t3730 = t3451*t2759;
  t3731 = Power(t2778,2);
  t3732 = 0.24*t3731;
  t3733 = t3730 + t3732;
  t3741 = 3.2*t3737*t2842;
  t3742 = 3.2*t3733*t2860;
  t3743 = t3729 + t3741 + t3742;
  t3745 = Power(t2759,2);
  t3746 = -0.24*t3745;
  t3747 = t3730 + t3746;
  t3758 = 3.2*t3733*t3211;
  t3759 = 3.2*t3737*t2869;
  t3749 = -1.*t3451*t2778;
  t3750 = 0.24*t2759*t2778;
  t3751 = t3749 + t3750;
  t3748 = 3.2*t3747*t2835;
  t3752 = 3.2*t3751*t2842;
  t3753 = t3748 + t3741 + t3752 + t3742;
  t3762 = 3.2*t3747*t2818;
  t3763 = 3.2*t3751*t2869;
  t3764 = t3762 + t3758 + t3759 + t3763;
  t3781 = 0.748*t2923;
  t3786 = 3.2*t3737*t2818;
  t3787 = 3.2*t3733*t2869;
  t3782 = 3.2*t3737*t2835;
  t3783 = 3.2*t3733*t2842;
  t3784 = t3781 + t3782 + t3783;
  t3788 = t3781 + t3786 + t3787;
  t3790 = 3.2*t3751*t2818;
  t3791 = 3.2*t3747*t2846;
  t3792 = t3786 + t3790 + t3791 + t3787;
  t3803 = -0.384*var2[2]*t2860;
  t3804 = -0.384*var2[3]*t3211;
  t3805 = -0.384*var2[4]*t3211;
  t3806 = t3803 + t3804 + t3805;
  t3807 = var2[0]*t3806;
  t3813 = -0.384*var2[0]*t2869;
  t3814 = 0.748*t3071;
  t3820 = t3510*t3075;
  t3821 = -0.24*t3073*t3075;
  t3822 = t3820 + t3821;
  t3815 = t3510*t3073;
  t3816 = Power(t3075,2);
  t3817 = 0.24*t3816;
  t3818 = t3815 + t3817;
  t3826 = 3.2*t3822*t3135;
  t3827 = 3.2*t3818*t3175;
  t3828 = t3814 + t3826 + t3827;
  t3830 = Power(t3073,2);
  t3831 = -0.24*t3830;
  t3832 = t3815 + t3831;
  t3843 = 3.2*t3818*t3241;
  t3844 = 3.2*t3822*t3186;
  t3834 = -1.*t3510*t3075;
  t3835 = 0.24*t3073*t3075;
  t3836 = t3834 + t3835;
  t3833 = 3.2*t3832*t3107;
  t3837 = 3.2*t3836*t3135;
  t3838 = t3833 + t3826 + t3837 + t3827;
  t3847 = 3.2*t3832*t3101;
  t3848 = 3.2*t3836*t3186;
  t3849 = t3847 + t3843 + t3844 + t3848;
  t3866 = 0.748*t3023;
  t3871 = 3.2*t3822*t3101;
  t3872 = 3.2*t3818*t3186;
  t3867 = 3.2*t3822*t3107;
  t3868 = 3.2*t3818*t3135;
  t3869 = t3866 + t3867 + t3868;
  t3873 = t3866 + t3871 + t3872;
  t3875 = 3.2*t3836*t3101;
  t3876 = 3.2*t3832*t3152;
  t3877 = t3871 + t3875 + t3876 + t3872;
  t3888 = -0.384*var2[2]*t3175;
  t3889 = -0.384*var2[5]*t3241;
  t3890 = -0.384*var2[6]*t3241;
  t3891 = t3888 + t3889 + t3890;
  t3892 = var2[0]*t3891;
  t3898 = -0.384*var2[0]*t3186;
  p_output1[0]=var2[0]*(-0.5*(t2936 + t2948 + t2961 + t2970 + 6.4*t2818*t2978 + 6.4*t2990 + 6.4*t3001 + 6.4*t2846*t3004 + t3029 + t3040 + t3049 + t3072 + 6.4*t3098*t3101 + 6.4*t3116 + 6.4*t3140 + 6.4*t3148*t3152)*var2[2] - 0.5*t2975*var2[3] - 0.5*t2904*var2[4] - 0.5*t3193*var2[5] - 0.5*t3188*var2[6]);
  p_output1[1]=var2[0]*(t3223 - 0.5*t2975*var2[2] - 0.5*(t2936 + t2948 + t2961 + t2970 + t3204 + t3215 + t3216 + t3218)*var2[3]);
  p_output1[2]=var2[0]*(t3223 - 0.5*t2904*var2[2] - 0.5*t3222*var2[3]);
  p_output1[3]=var2[0]*(t3252 - 0.5*t3193*var2[2] - 0.5*(t3029 + t3040 + t3049 + t3072 + t3239 + t3242 + t3248 + t3250)*var2[5]);
  p_output1[4]=var2[0]*(t3252 - 0.5*t3188*var2[2] - 0.5*t3251*var2[5]);
  p_output1[5]=-0.5*t3283*var2[2] - 0.5*t3275*var2[3] - 0.5*t3266*var2[4] - 0.5*t3289*var2[5] - 0.5*t3287*var2[6];
  p_output1[6]=-0.5*t3283*var2[0];
  p_output1[7]=-0.5*t3275*var2[0];
  p_output1[8]=-0.5*t3266*var2[0];
  p_output1[9]=-0.5*t3289*var2[0];
  p_output1[10]=-0.5*t3287*var2[0];
  p_output1[11]=var2[0]*(-0.5*(9.6*t2842*t2978 + 9.6*t2835*t3004 + 9.6*t3098*t3135 + 9.6*t3107*t3148 + 3.2*t2846*(t2977 + t3210) + 3.2*t3152*(t3097 + t3240) + 3.2*t2818*(t2845 + t3313) + t3320 + t3321 + t3322 + t3323 + t3336 + t3337 + t3338 + t3339 + 3.2*t3101*(t3151 + t3342))*var2[2] - 0.5*t3324*var2[3] - 0.5*t3318*var2[4] - 0.5*t3359*var2[5] - 0.5*t3357*var2[6]);
  p_output1[12]=var2[0]*(t3375 - 0.5*t3324*var2[2] - 0.5*(t3277 + t3320 + t3321 + t3322 + t3323 + t3366 + t3369 + t3371 + t3372 + t3373)*var2[3]);
  p_output1[13]=var2[0]*(t3375 - 0.5*t3318*var2[2] - 0.5*t3374*var2[3]);
  p_output1[14]=var2[0]*(t3392 - 0.5*t3359*var2[2] - 0.5*(t3281 + t3336 + t3337 + t3338 + t3339 + t3385 + t3386 + t3388 + t3389 + t3390)*var2[5]);
  p_output1[15]=var2[0]*(t3392 - 0.5*t3357*var2[2] - 0.5*t3391*var2[5]);
  p_output1[16]=-0.5*t3425*var2[2] - 0.5*t3411*var2[3] - 0.5*t3405*var2[4] - 0.5*t3433*var2[5] - 0.5*t3431*var2[6];
  p_output1[17]=-0.5*t3425*var2[0];
  p_output1[18]=-0.5*t3411*var2[0];
  p_output1[19]=-0.5*t3405*var2[0];
  p_output1[20]=-0.5*t3433*var2[0];
  p_output1[21]=-0.5*t3431*var2[0];
  p_output1[22]=var2[0]*(-0.5*(-2.88*t2798 + t3446 + 3.2*t3004*t3460 + 3.2*t2978*t3473 + t3505 + 3.2*t3148*t3519 + 3.2*t3098*t3523)*var2[2] - 0.5*t3481*var2[3] - 0.5*t3495*var2[4] - 0.5*t3544*var2[5] - 0.5*t3558*var2[6]);
  p_output1[23]=var2[0]*(-0.5*t3481*var2[2] - 0.5*(t3446 + 6.4*t2869*t3469 + 6.4*t2818*t3479 + t3563 + t3564 + 3.2*t2846*(-2.*t2784*t3458 - 1.*t2814*t3464 - 2.*t2857*t3464 + t3568 - 1.*t2784*t3571 + t3574) + 3.2*t2818*(2.*t2814*t3458 + 2.*t2784*t3464 + t2830*t3464 + t2814*t3571 + t3579 + t3583))*var2[3] - 0.5*t3608*var2[4]);
  p_output1[24]=var2[0]*(-0.5*t3495*var2[2] - 0.5*t3608*var2[3] - 0.5*(6.4*t2869*t3489 + 6.4*t2818*t3493 + t3563 + t3564 + 3.2*t2846*(-2.*t2857*t3484 - 2.*t2784*t3487 + t3568 + t3574 + t3590 + t3594) + 3.2*t2818*(2.*t2784*t3484 + 2.*t2814*t3487 + t3579 + t3583 + t3603 + t3605))*var2[4]);
  p_output1[25]=var2[0]*(-0.5*t3544*var2[2] - 0.5*(t3505 + 6.4*t3186*t3535 + 6.4*t3101*t3542 + t3629 + t3630 + 3.2*t3152*(-2.*t3081*t3517 - 1.*t3096*t3530 - 2.*t3173*t3530 + t3634 - 1.*t3081*t3637 + t3640) + 3.2*t3101*(2.*t3096*t3517 + 2.*t3081*t3530 + t3105*t3530 + t3096*t3637 + t3645 + t3649))*var2[5] - 0.5*t3674*var2[6]);
  p_output1[26]=var2[0]*(-0.5*t3558*var2[2] - 0.5*t3674*var2[5] - 0.5*(6.4*t3186*t3552 + 6.4*t3101*t3556 + t3629 + t3630 + 3.2*t3152*(-2.*t3173*t3547 - 2.*t3081*t3550 + t3634 + t3640 + t3656 + t3660) + 3.2*t3101*(2.*t3081*t3547 + 2.*t3096*t3550 + t3645 + t3649 + t3669 + t3671))*var2[6]);
  p_output1[27]=-0.5*t3711*var2[2] - 0.5*t3699*var2[3] - 0.5*t3703*var2[4] - 0.5*t3717*var2[5] - 0.5*t3721*var2[6];
  p_output1[28]=-0.5*t3711*var2[0];
  p_output1[29]=-0.5*t3699*var2[0];
  p_output1[30]=-0.5*t3703*var2[0];
  p_output1[31]=-0.5*t3717*var2[0];
  p_output1[32]=-0.5*t3721*var2[0];
  p_output1[33]=var2[0]*(-0.5*(t3729 + 3.2*t2978*t3733 + 3.2*t3004*t3737)*var2[2] - 0.5*t3743*var2[3] - 0.5*t3753*var2[4]);
  p_output1[34]=var2[0]*(-0.5*t3743*var2[2] - 0.5*(t3729 + t3758 + t3759)*var2[3] - 0.5*t3764*var2[4]);
  p_output1[35]=var2[0]*(-0.5*t3753*var2[2] - 0.5*t3764*var2[3] - 0.5*(3.2*t2818*(-1.*t2759*t3451 + 0.24*t3745) + 6.4*t2818*t3747 + 3.2*t2846*t3751 + 6.4*t2869*t3751 + t3758 + t3759)*var2[4]);
  p_output1[36]=-0.5*t3784*var2[2] - 0.5*t3788*var2[3] - 0.5*t3792*var2[4];
  p_output1[37]=-0.5*t3784*var2[0];
  p_output1[38]=-0.5*t3788*var2[0];
  p_output1[39]=-0.5*t3792*var2[0];
  p_output1[40]=var2[0]*(-0.384*t2978*var2[2] - 0.384*t2860*var2[3] - 0.384*t2860*var2[4]);
  p_output1[41]=t3807;
  p_output1[42]=t3807;
  p_output1[43]=-0.384*t2842*var2[2] - 0.384*t2869*var2[3] - 0.384*t2869*var2[4];
  p_output1[44]=-0.384*t2842*var2[0];
  p_output1[45]=t3813;
  p_output1[46]=t3813;
  p_output1[47]=var2[0]*(-0.5*(t3814 + 3.2*t3098*t3818 + 3.2*t3148*t3822)*var2[2] - 0.5*t3828*var2[5] - 0.5*t3838*var2[6]);
  p_output1[48]=var2[0]*(-0.5*t3828*var2[2] - 0.5*(t3814 + t3843 + t3844)*var2[5] - 0.5*t3849*var2[6]);
  p_output1[49]=var2[0]*(-0.5*t3838*var2[2] - 0.5*t3849*var2[5] - 0.5*(3.2*t3101*(-1.*t3073*t3510 + 0.24*t3830) + 6.4*t3101*t3832 + 3.2*t3152*t3836 + 6.4*t3186*t3836 + t3843 + t3844)*var2[6]);
  p_output1[50]=-0.5*t3869*var2[2] - 0.5*t3873*var2[5] - 0.5*t3877*var2[6];
  p_output1[51]=-0.5*t3869*var2[0];
  p_output1[52]=-0.5*t3873*var2[0];
  p_output1[53]=-0.5*t3877*var2[0];
  p_output1[54]=var2[0]*(-0.384*t3098*var2[2] - 0.384*t3175*var2[5] - 0.384*t3175*var2[6]);
  p_output1[55]=t3892;
  p_output1[56]=t3892;
  p_output1[57]=-0.384*t3135*var2[2] - 0.384*t3186*var2[5] - 0.384*t3186*var2[6];
  p_output1[58]=-0.384*t3135*var2[0];
  p_output1[59]=t3898;
  p_output1[60]=t3898;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 61, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec1_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE