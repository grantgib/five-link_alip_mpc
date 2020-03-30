/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:48:44 GMT-04:00
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
  double t198;
  double t1488;
  double t196;
  double t1403;
  double t1559;
  double t1649;
  double t1656;
  double t1690;
  double t1703;
  double t1626;
  double t1650;
  double t1651;
  double t1943;
  double t1967;
  double t2039;
  double t2051;
  double t2401;
  double t1653;
  double t1716;
  double t1866;
  double t2411;
  double t2412;
  double t2413;
  double t2462;
  double t2463;
  double t2464;
  double t2518;
  double t2519;
  double t2522;
  double t2472;
  double t2473;
  double t2474;
  double t2744;
  double t2745;
  double t2747;
  double t2414;
  double t2465;
  double t2466;
  double t2467;
  double t2507;
  double t2517;
  double t2696;
  double t2733;
  double t2741;
  double t2743;
  double t2748;
  double t2749;
  double t2768;
  double t2806;
  double t2808;
  double t2811;
  double t3153;
  double t3154;
  double t2933;
  double t3202;
  double t3224;
  double t3120;
  double t199;
  double t1495;
  double t1496;
  double t1500;
  double t1506;
  double t1519;
  double t1535;
  double t1547;
  double t1554;
  double t3315;
  double t3325;
  double t3363;
  double t3384;
  double t3434;
  double t3435;
  double t3436;
  double t3439;
  double t3625;
  double t3653;
  double t3675;
  double t3685;
  double t3772;
  double t3824;
  double t3863;
  double t3686;
  double t3766;
  double t3770;
  double t3365;
  double t3400;
  double t3412;
  double t3864;
  double t3883;
  double t3884;
  double t3319;
  double t3326;
  double t3344;
  double t3345;
  double t3346;
  double t3347;
  double t3348;
  double t3358;
  double t3360;
  double t3437;
  double t3771;
  double t3886;
  double t3894;
  double t3935;
  double t3937;
  double t3918;
  double t3919;
  double t3920;
  double t3905;
  double t3939;
  double t3970;
  double t3971;
  double t3978;
  double t3979;
  double t3980;
  double t3938;
  double t3973;
  double t3974;
  double t3981;
  double t3982;
  double t3983;
  double t3984;
  double t3985;
  double t3986;
  double t4003;
  double t4004;
  double t3988;
  double t4006;
  double t4008;
  double t3991;
  double t2506;
  double t2523;
  double t2534;
  double t2664;
  double t2873;
  double t2976;
  double t3124;
  double t3134;
  double t3136;
  double t4054;
  double t4055;
  double t4117;
  double t4118;
  double t4071;
  double t4082;
  double t4103;
  double t4051;
  double t4052;
  double t4053;
  double t4056;
  double t3199;
  double t3227;
  double t3228;
  double t4058;
  double t4060;
  double t4061;
  double t4064;
  double t4114;
  double t3230;
  double t3234;
  double t3255;
  double t4154;
  double t4215;
  double t4216;
  double t4181;
  double t3229;
  double t3257;
  double t3260;
  double t4188;
  double t4211;
  double t4212;
  double t4213;
  double t4217;
  double t4219;
  double t4220;
  double t4221;
  double t4222;
  double t4223;
  double t4224;
  double t4225;
  double t4227;
  double t4228;
  double t4229;
  double t4235;
  double t4246;
  double t4251;
  double t4255;
  double t3972;
  double t3975;
  double t3976;
  double t3977;
  double t3987;
  double t3989;
  double t3993;
  double t3994;
  double t4000;
  double t4352;
  double t4362;
  double t4922;
  double t4956;
  double t4389;
  double t4390;
  double t4391;
  double t4347;
  double t4348;
  double t4351;
  double t4363;
  double t4005;
  double t4009;
  double t4014;
  double t4381;
  double t4382;
  double t4383;
  double t4387;
  double t4404;
  double t4017;
  double t4018;
  double t4019;
  double t5012;
  double t5386;
  double t5433;
  double t5259;
  double t4016;
  double t4045;
  double t4046;
  double t5319;
  double t5357;
  double t5358;
  double t5370;
  double t5434;
  double t5465;
  double t5466;
  double t5477;
  double t5496;
  double t5502;
  double t5507;
  double t5508;
  double t5519;
  double t5524;
  double t5529;
  double t5530;
  double t5538;
  double t5539;
  double t5541;
  double t5680;
  double t5702;
  double t5665;
  double t5666;
  double t5668;
  double t5676;
  double t5754;
  double t5755;
  double t5756;
  double t5757;
  double t5769;
  double t5771;
  double t5682;
  double t5705;
  double t5708;
  double t5722;
  double t5724;
  double t5725;
  double t5770;
  double t5772;
  double t5773;
  double t5781;
  double t5783;
  double t5793;
  double t3300;
  double t3307;
  double t3263;
  double t3293;
  double t5846;
  double t5895;
  double t5910;
  double t5911;
  double t5913;
  double t5809;
  double t5815;
  double t5833;
  double t5843;
  double t3906;
  double t6962;
  double t7002;
  double t7010;
  double t7023;
  double t3917;
  double t7420;
  double t3432;
  double t3438;
  double t7448;
  double t7481;
  double t7484;
  double t7568;
  double t5869;
  double t5926;
  double t5928;
  double t4062;
  double t4063;
  double t4109;
  double t4113;
  double t4115;
  double t4145;
  double t4159;
  double t4163;
  double t4171;
  double t4182;
  double t7703;
  double t7709;
  double t7712;
  double t6803;
  double t6820;
  double t6830;
  double t7851;
  double t7861;
  double t7881;
  double t7892;
  double t7987;
  double t8002;
  double t8262;
  double t4263;
  double t4264;
  double t4276;
  double t4295;
  double t4296;
  double t4304;
  double t7479;
  double t7570;
  double t7587;
  double t4385;
  double t4386;
  double t4402;
  double t4403;
  double t4405;
  double t5010;
  double t5107;
  double t5238;
  double t5247;
  double t5261;
  double t9002;
  double t9008;
  double t9011;
  double t7628;
  double t7631;
  double t7634;
  double t9020;
  double t9022;
  double t9023;
  double t9042;
  double t9095;
  double t9183;
  double t9187;
  double t5640;
  double t5641;
  double t5643;
  double t5654;
  double t5655;
  double t5656;
  double t3141;
  double t3261;
  double t3262;
  double t3294;
  double t3308;
  double t3900;
  double t3922;
  double t3931;
  double t4001;
  double t4047;
  double t4050;
  double t4260;
  double t4346;
  double t5622;
  double t9998;
  double t10056;
  double t10057;
  double t10070;
  double t10110;
  double t10191;
  double t10195;
  double t10196;
  double t10198;
  double t10200;
  double t11748;
  double t12886;
  double t13814;
  double t14030;
  double t14592;
  double t14625;
  double t14887;
  double t14903;
  double t14925;
  double t14958;
  double t14968;
  double t15310;
  double t15600;
  double t15603;
  double t15604;
  double t15616;
  double t15617;
  double t15618;
  double t15619;
  double t15626;
  double t15627;
  double t15633;
  double t15634;
  double t15638;
  double t15639;
  double t15657;
  double t15658;
  double t15659;
  double t15660;
  double t15661;
  double t15946;
  double t15964;
  double t16009;
  double t16078;
  double t16106;
  double t16110;
  double t16247;
  double t16252;
  double t17390;
  double t17495;
  double t17526;
  double t17564;
  double t17565;
  double t17566;
  double t17569;
  double t17731;
  double t17769;
  double t17770;
  double t17972;
  double t17981;
  double t17985;
  double t18006;
  double t18031;
  double t18095;
  double t18166;
  double t18462;
  double t20239;
  double t20409;
  double t20425;
  double t20446;
  double t20454;
  double t20455;
  double t20459;
  double t20473;
  t198 = Cos(var1[3]);
  t1488 = Sin(var1[3]);
  t196 = Cos(var1[2]);
  t1403 = Sin(var1[2]);
  t1559 = Cos(var1[4]);
  t1649 = Sin(var1[4]);
  t1656 = t198*t1559;
  t1690 = -1.*t1488*t1649;
  t1703 = t1656 + t1690;
  t1626 = -1.*t1559*t1488;
  t1650 = -1.*t198*t1649;
  t1651 = t1626 + t1650;
  t1943 = -1.*t1559;
  t1967 = 1. + t1943;
  t2039 = 0.4*t1967;
  t2051 = 0.64*t1559;
  t2401 = t2039 + t2051;
  t1653 = t196*t1651;
  t1716 = -1.*t1403*t1703;
  t1866 = t1653 + t1716;
  t2411 = t2401*t1488;
  t2412 = 0.24*t198*t1649;
  t2413 = t2411 + t2412;
  t2462 = t198*t2401;
  t2463 = -0.24*t1488*t1649;
  t2464 = t2462 + t2463;
  t2518 = t1559*t1488;
  t2519 = t198*t1649;
  t2522 = t2518 + t2519;
  t2472 = -1.*t2401*t1488;
  t2473 = -0.24*t198*t1649;
  t2474 = t2472 + t2473;
  t2744 = -1.*t198*t1559;
  t2745 = t1488*t1649;
  t2747 = t2744 + t2745;
  t2414 = -1.*t2413*t1703;
  t2465 = -1.*t1651*t2464;
  t2466 = t2414 + t2465;
  t2467 = 3.2*t1866*t2466;
  t2507 = t2413*t1703;
  t2517 = t1651*t2464;
  t2696 = t2413*t2522;
  t2733 = t1703*t2464;
  t2741 = t2696 + t2733;
  t2743 = -1.*t1403*t1651;
  t2748 = t196*t2747;
  t2749 = t2743 + t2748;
  t2768 = 3.2*t2741*t2749;
  t2806 = -1.*t1403*t2522;
  t2808 = t196*t1703;
  t2811 = t2806 + t2808;
  t3153 = -0.24*t1559*t1488;
  t3154 = t3153 + t2473;
  t2933 = -1.*t1651*t2413;
  t3202 = 0.24*t198*t1559;
  t3224 = t3202 + t2463;
  t3120 = -1.*t2464*t2747;
  t199 = -1.*t196*t198;
  t1495 = t1403*t1488;
  t1496 = t199 + t1495;
  t1500 = Power(t198,2);
  t1506 = 0.11*t1500;
  t1519 = Power(t1488,2);
  t1535 = 0.11*t1519;
  t1547 = t1506 + t1535;
  t1554 = 6.8*t1496*t1547;
  t3315 = Cos(var1[5]);
  t3325 = Sin(var1[5]);
  t3363 = Cos(var1[6]);
  t3384 = Sin(var1[6]);
  t3434 = t3315*t3363;
  t3435 = -1.*t3325*t3384;
  t3436 = t3434 + t3435;
  t3439 = -1.*t3363;
  t3625 = 1. + t3439;
  t3653 = 0.4*t3625;
  t3675 = 0.64*t3363;
  t3685 = t3653 + t3675;
  t3772 = -1.*t3363*t3325;
  t3824 = -1.*t3315*t3384;
  t3863 = t3772 + t3824;
  t3686 = t3685*t3325;
  t3766 = 0.24*t3315*t3384;
  t3770 = t3686 + t3766;
  t3365 = t3363*t3325;
  t3400 = t3315*t3384;
  t3412 = t3365 + t3400;
  t3864 = t3315*t3685;
  t3883 = -0.24*t3325*t3384;
  t3884 = t3864 + t3883;
  t3319 = -1.*t196*t3315;
  t3326 = t1403*t3325;
  t3344 = t3319 + t3326;
  t3345 = Power(t3315,2);
  t3346 = 0.11*t3345;
  t3347 = Power(t3325,2);
  t3348 = 0.11*t3347;
  t3358 = t3346 + t3348;
  t3360 = 6.8*t3344*t3358;
  t3437 = -1.*t1403*t3436;
  t3771 = -1.*t3770*t3436;
  t3886 = -1.*t3863*t3884;
  t3894 = t3771 + t3886;
  t3935 = t196*t3863;
  t3937 = t3935 + t3437;
  t3918 = t3770*t3412;
  t3919 = t3436*t3884;
  t3920 = t3918 + t3919;
  t3905 = -1.*t1403*t3863;
  t3939 = -1.*t3685*t3325;
  t3970 = -0.24*t3315*t3384;
  t3971 = t3939 + t3970;
  t3978 = -1.*t3315*t3363;
  t3979 = t3325*t3384;
  t3980 = t3978 + t3979;
  t3938 = 3.2*t3937*t3894;
  t3973 = t3770*t3436;
  t3974 = t3863*t3884;
  t3981 = t196*t3980;
  t3982 = t3905 + t3981;
  t3983 = 3.2*t3920*t3982;
  t3984 = -1.*t1403*t3412;
  t3985 = t196*t3436;
  t3986 = t3984 + t3985;
  t4003 = -0.24*t3363*t3325;
  t4004 = t4003 + t3970;
  t3988 = -1.*t3863*t3770;
  t4006 = 0.24*t3315*t3363;
  t4008 = t4006 + t3883;
  t3991 = -1.*t3884*t3980;
  t2506 = t2474*t1703;
  t2523 = t2522*t2464;
  t2534 = t2506 + t2507 + t2517 + t2523;
  t2664 = 3.2*t1866*t2534;
  t2873 = -1.*t1651*t2474;
  t2976 = -1.*t1703*t2464;
  t3124 = t2873 + t2933 + t2976 + t3120;
  t3134 = 3.2*t2811*t3124;
  t3136 = t1554 + t2467 + t2664 + t2768 + t3134;
  t4054 = t1403*t2747;
  t4055 = t1653 + t4054;
  t4117 = t1403*t1651;
  t4118 = t4117 + t2808;
  t4071 = -1.*t198*t2401;
  t4082 = 0.24*t1488*t1649;
  t4103 = t4071 + t4082;
  t4051 = t1403*t2522;
  t4052 = t4051 + t2748;
  t4053 = 3.2*t2741*t4052;
  t4056 = 3.2*t2466*t4055;
  t3199 = t3154*t1703;
  t3227 = t2522*t3224;
  t3228 = t3199 + t2507 + t2517 + t3227;
  t4058 = t196*t2522;
  t4060 = t1403*t1703;
  t4061 = t4058 + t4060;
  t4064 = -1.*t2522*t2464;
  t4114 = -1.*t2413*t2747;
  t3230 = -1.*t1651*t3154;
  t3234 = -1.*t1703*t3224;
  t3255 = t3230 + t2933 + t3234 + t3120;
  t4154 = t1651*t2413;
  t4215 = -0.24*t198*t1559;
  t4216 = t4215 + t4082;
  t4181 = t2464*t2747;
  t3229 = 3.2*t1866*t3228;
  t3257 = 3.2*t2811*t3255;
  t3260 = t2467 + t3229 + t2768 + t3257;
  t4188 = 3.2*t2534*t4055;
  t4211 = 3.2*t3228*t4055;
  t4212 = -1.*t3154*t1703;
  t4213 = -1.*t1651*t3224;
  t4217 = -1.*t1651*t4216;
  t4219 = -1.*t2474*t2747;
  t4220 = -1.*t3154*t2747;
  t4221 = t4212 + t2465 + t4064 + t4213 + t4217 + t4219 + t4220 + t4114;
  t4222 = 3.2*t4061*t4221;
  t4223 = 3.2*t4118*t3124;
  t4224 = 3.2*t4118*t3255;
  t4225 = t1651*t2474;
  t4227 = t1651*t3154;
  t4228 = t3154*t2522;
  t4229 = t1703*t3224;
  t4235 = t1703*t4216;
  t4246 = t4225 + t4227 + t4154 + t4228 + t2733 + t4229 + t4235 + t4181;
  t4251 = 3.2*t4118*t4246;
  t4255 = t4053 + t4056 + t4188 + t4211 + t4222 + t4223 + t4224 + t4251;
  t3972 = t3971*t3436;
  t3975 = t3412*t3884;
  t3976 = t3972 + t3973 + t3974 + t3975;
  t3977 = 3.2*t3937*t3976;
  t3987 = -1.*t3863*t3971;
  t3989 = -1.*t3436*t3884;
  t3993 = t3987 + t3988 + t3989 + t3991;
  t3994 = 3.2*t3986*t3993;
  t4000 = t3360 + t3938 + t3977 + t3983 + t3994;
  t4352 = t1403*t3980;
  t4362 = t3935 + t4352;
  t4922 = t1403*t3863;
  t4956 = t4922 + t3985;
  t4389 = -1.*t3315*t3685;
  t4390 = 0.24*t3325*t3384;
  t4391 = t4389 + t4390;
  t4347 = t1403*t3412;
  t4348 = t4347 + t3981;
  t4351 = 3.2*t3920*t4348;
  t4363 = 3.2*t3894*t4362;
  t4005 = t4004*t3436;
  t4009 = t3412*t4008;
  t4014 = t4005 + t3973 + t3974 + t4009;
  t4381 = t196*t3412;
  t4382 = t1403*t3436;
  t4383 = t4381 + t4382;
  t4387 = -1.*t3412*t3884;
  t4404 = -1.*t3770*t3980;
  t4017 = -1.*t3863*t4004;
  t4018 = -1.*t3436*t4008;
  t4019 = t4017 + t3988 + t4018 + t3991;
  t5012 = t3863*t3770;
  t5386 = -0.24*t3315*t3363;
  t5433 = t5386 + t4390;
  t5259 = t3884*t3980;
  t4016 = 3.2*t3937*t4014;
  t4045 = 3.2*t3986*t4019;
  t4046 = t3938 + t4016 + t3983 + t4045;
  t5319 = 3.2*t3976*t4362;
  t5357 = 3.2*t4014*t4362;
  t5358 = -1.*t4004*t3436;
  t5370 = -1.*t3863*t4008;
  t5434 = -1.*t3863*t5433;
  t5465 = -1.*t3971*t3980;
  t5466 = -1.*t4004*t3980;
  t5477 = t5358 + t3886 + t4387 + t5370 + t5434 + t5465 + t5466 + t4404;
  t5496 = 3.2*t4383*t5477;
  t5502 = 3.2*t4956*t3993;
  t5507 = 3.2*t4956*t4019;
  t5508 = t3863*t3971;
  t5519 = t3863*t4004;
  t5524 = t4004*t3412;
  t5529 = t3436*t4008;
  t5530 = t3436*t5433;
  t5538 = t5508 + t5519 + t5012 + t5524 + t3919 + t5529 + t5530 + t5259;
  t5539 = 3.2*t4956*t5538;
  t5541 = t4351 + t4363 + t5319 + t5357 + t5496 + t5502 + t5507 + t5539;
  t5680 = 3.2*t4118*t2466;
  t5702 = 3.2*t2741*t4055;
  t5665 = -1.*t198*t1403;
  t5666 = -1.*t196*t1488;
  t5668 = t5665 + t5666;
  t5676 = 6.8*t5668*t1547;
  t5754 = -1.*t3315*t1403;
  t5755 = -1.*t196*t3325;
  t5756 = t5754 + t5755;
  t5757 = 6.8*t5756*t3358;
  t5769 = 3.2*t4956*t3894;
  t5771 = 3.2*t3920*t4362;
  t5682 = 3.2*t4118*t2534;
  t5705 = 3.2*t4061*t3124;
  t5708 = t5676 + t5680 + t5682 + t5702 + t5705;
  t5722 = 3.2*t4118*t3228;
  t5724 = 3.2*t4061*t3255;
  t5725 = t5680 + t5722 + t5702 + t5724;
  t5770 = 3.2*t4956*t3976;
  t5772 = 3.2*t4383*t3993;
  t5773 = t5757 + t5769 + t5770 + t5771 + t5772;
  t5781 = 3.2*t4956*t4014;
  t5783 = 3.2*t4383*t4019;
  t5793 = t5769 + t5781 + t5771 + t5783;
  t3300 = -1.*t196*t1703;
  t3307 = t2743 + t3300;
  t3263 = -1.*t196*t2522;
  t3293 = t3263 + t1716;
  t5846 = 3.2*t3307*t2466;
  t5895 = -1.*t196*t1651;
  t5910 = -1.*t1403*t2747;
  t5911 = t5895 + t5910;
  t5913 = 3.2*t2741*t5911;
  t5809 = t198*t1403;
  t5815 = t196*t1488;
  t5833 = t5809 + t5815;
  t5843 = 6.8*t5833*t1547;
  t3906 = -1.*t196*t3436;
  t6962 = t3315*t1403;
  t7002 = t196*t3325;
  t7010 = t6962 + t7002;
  t7023 = 6.8*t7010*t3358;
  t3917 = t3905 + t3906;
  t7420 = -1.*t196*t3863;
  t3432 = -1.*t196*t3412;
  t3438 = t3432 + t3437;
  t7448 = 3.2*t3917*t3894;
  t7481 = -1.*t1403*t3980;
  t7484 = t7420 + t7481;
  t7568 = 3.2*t3920*t7484;
  t5869 = 3.2*t3307*t2534;
  t5926 = 3.2*t3293*t3124;
  t5928 = t5843 + t5846 + t5869 + t5913 + t5926;
  t4062 = -1.*t2474*t1703;
  t4063 = -2.*t1651*t2464;
  t4109 = -1.*t1651*t4103;
  t4113 = -2.*t2474*t2747;
  t4115 = t4062 + t4063 + t4064 + t4109 + t4113 + t4114;
  t4145 = 2.*t1651*t2474;
  t4159 = t2474*t2522;
  t4163 = 2.*t1703*t2464;
  t4171 = t1703*t4103;
  t4182 = t4145 + t4154 + t4159 + t4163 + t4171 + t4181;
  t7703 = 3.2*t2466*t2749;
  t7709 = t4058 + t5910;
  t7712 = 3.2*t2741*t7709;
  t6803 = 3.2*t3307*t3228;
  t6820 = 3.2*t3293*t3255;
  t6830 = t5846 + t6803 + t5913 + t6820;
  t7851 = 3.2*t2534*t2749;
  t7861 = 3.2*t3228*t2749;
  t7881 = 3.2*t2811*t4221;
  t7892 = 3.2*t1866*t3124;
  t7987 = 3.2*t1866*t3255;
  t8002 = 3.2*t1866*t4246;
  t8262 = t7703 + t7851 + t7861 + t7712 + t7881 + t7892 + t7987 + t8002;
  t4263 = -2.*t1651*t3224;
  t4264 = -2.*t3154*t2747;
  t4276 = t4212 + t4064 + t4263 + t4217 + t4264 + t4114;
  t4295 = 2.*t1651*t3154;
  t4296 = 2.*t1703*t3224;
  t4304 = t4295 + t4154 + t4228 + t4296 + t4235 + t4181;
  t7479 = 3.2*t3917*t3976;
  t7570 = 3.2*t3438*t3993;
  t7587 = t7023 + t7448 + t7479 + t7568 + t7570;
  t4385 = -1.*t3971*t3436;
  t4386 = -2.*t3863*t3884;
  t4402 = -1.*t3863*t4391;
  t4403 = -2.*t3971*t3980;
  t4405 = t4385 + t4386 + t4387 + t4402 + t4403 + t4404;
  t5010 = 2.*t3863*t3971;
  t5107 = t3971*t3412;
  t5238 = 2.*t3436*t3884;
  t5247 = t3436*t4391;
  t5261 = t5010 + t5012 + t5107 + t5238 + t5247 + t5259;
  t9002 = 3.2*t3894*t3982;
  t9008 = t4381 + t7481;
  t9011 = 3.2*t3920*t9008;
  t7628 = 3.2*t3917*t4014;
  t7631 = 3.2*t3438*t4019;
  t7634 = t7448 + t7628 + t7568 + t7631;
  t9020 = 3.2*t3976*t3982;
  t9022 = 3.2*t4014*t3982;
  t9023 = 3.2*t3986*t5477;
  t9042 = 3.2*t3937*t3993;
  t9095 = 3.2*t3937*t4019;
  t9183 = 3.2*t3937*t5538;
  t9187 = t9002 + t9020 + t9022 + t9011 + t9023 + t9042 + t9095 + t9183;
  t5640 = -2.*t3863*t4008;
  t5641 = -2.*t4004*t3980;
  t5643 = t5358 + t4387 + t5640 + t5434 + t5641 + t4404;
  t5654 = 2.*t3863*t4004;
  t5655 = 2.*t3436*t4008;
  t5656 = t5654 + t5012 + t5524 + t5655 + t5530 + t5259;
  t3141 = -0.5*var2[3]*t3136;
  t3261 = -0.5*var2[4]*t3260;
  t3262 = -2.88*t196;
  t3294 = 3.2*t3293*t2466;
  t3308 = 3.2*t3307*t2741;
  t3900 = 3.2*t3438*t3894;
  t3922 = 3.2*t3917*t3920;
  t3931 = t3262 + t1554 + t3294 + t3308 + t3360 + t3900 + t3922;
  t4001 = -0.5*var2[5]*t4000;
  t4047 = -0.5*var2[6]*t4046;
  t4050 = -0.5*var2[2]*t3136;
  t4260 = -0.5*var2[2]*t3260;
  t4346 = -0.5*var2[2]*t4000;
  t5622 = -0.5*var2[2]*t4046;
  t9998 = 6.4*t2534*t3228;
  t10056 = 6.4*t2466*t4221;
  t10057 = 6.4*t3124*t3255;
  t10070 = 6.4*t2741*t4246;
  t10110 = t9998 + t10056 + t10057 + t10070;
  t10191 = 6.4*t3976*t4014;
  t10195 = 6.4*t3894*t5477;
  t10196 = 6.4*t3993*t4019;
  t10198 = 6.4*t3920*t5538;
  t10200 = t10191 + t10195 + t10196 + t10198;
  t11748 = 6.4*t2534*t2741;
  t12886 = 6.4*t2466*t3124;
  t13814 = t11748 + t12886;
  t14030 = 6.4*t2741*t3228;
  t14592 = 6.4*t2466*t3255;
  t14625 = t14030 + t14592;
  t14887 = 6.4*t3976*t3920;
  t14903 = 6.4*t3894*t3993;
  t14925 = t14887 + t14903;
  t14958 = 6.4*t3920*t4014;
  t14968 = 6.4*t3894*t4019;
  t15310 = t14958 + t14968;
  t15600 = t2401*t1649;
  t15603 = -0.24*t1559*t1649;
  t15604 = t15600 + t15603;
  t15616 = t2401*t1559;
  t15617 = Power(t1649,2);
  t15618 = 0.24*t15617;
  t15619 = t15616 + t15618;
  t15626 = -1.*t2401*t1649;
  t15627 = 0.24*t1559*t1649;
  t15633 = t15626 + t15627;
  t15634 = 3.2*t15633*t2534;
  t15638 = 3.2*t15604*t4221;
  t15639 = Power(t1559,2);
  t15657 = -0.24*t15639;
  t15658 = t15616 + t15657;
  t15659 = 3.2*t15658*t3124;
  t15660 = 3.2*t15619*t4246;
  t15661 = t15634 + t15638 + t15659 + t15660;
  t15946 = 3.2*t15619*t2534;
  t15964 = 3.2*t15604*t3124;
  t16009 = t15946 + t15964;
  t16078 = 3.2*t15658*t2466;
  t16106 = 3.2*t15633*t2741;
  t16110 = 3.2*t15619*t3228;
  t16247 = 3.2*t15604*t3255;
  t16252 = t16078 + t16106 + t16110 + t16247;
  t17390 = t3685*t3384;
  t17495 = -0.24*t3363*t3384;
  t17526 = t17390 + t17495;
  t17564 = t3685*t3363;
  t17565 = Power(t3384,2);
  t17566 = 0.24*t17565;
  t17569 = t17564 + t17566;
  t17731 = -1.*t3685*t3384;
  t17769 = 0.24*t3363*t3384;
  t17770 = t17731 + t17769;
  t17972 = 3.2*t17770*t3976;
  t17981 = 3.2*t17526*t5477;
  t17985 = Power(t3363,2);
  t18006 = -0.24*t17985;
  t18031 = t17564 + t18006;
  t18095 = 3.2*t18031*t3993;
  t18166 = 3.2*t17569*t5538;
  t18462 = t17972 + t17981 + t18095 + t18166;
  t20239 = 3.2*t17569*t3976;
  t20409 = 3.2*t17526*t3993;
  t20425 = t20239 + t20409;
  t20446 = 3.2*t18031*t3894;
  t20454 = 3.2*t17770*t3920;
  t20455 = 3.2*t17569*t4014;
  t20459 = 3.2*t17526*t4019;
  t20473 = t20446 + t20454 + t20455 + t20459;
  p_output1[0]=var2[2]*(t3141 + t3261 + t4001 + t4047 - 0.5*t3931*var2[2]);
  p_output1[1]=var2[2]*(t4050 - 0.5*(t1554 + t4053 + 6.4*t2534*t4055 + t4056 + 3.2*t4061*t4115 + 6.4*t3124*t4118 + 3.2*t4118*t4182)*var2[3] - 0.5*t4255*var2[4]);
  p_output1[2]=var2[2]*(t4260 - 0.5*t4255*var2[3] - 0.5*(t4053 + 6.4*t3228*t4055 + t4056 + 6.4*t3255*t4118 + 3.2*t4061*t4276 + 3.2*t4118*t4304)*var2[4]);
  p_output1[3]=var2[2]*(t4346 - 0.5*(t3360 + t4351 + 6.4*t3976*t4362 + t4363 + 3.2*t4383*t4405 + 6.4*t3993*t4956 + 3.2*t4956*t5261)*var2[5] - 0.5*t5541*var2[6]);
  p_output1[4]=var2[2]*(t5622 - 0.5*t5541*var2[5] - 0.5*(t4351 + 6.4*t4014*t4362 + t4363 + 6.4*t4019*t4956 + 3.2*t4383*t5643 + 3.2*t4956*t5656)*var2[6]);
  p_output1[5]=-1.*(-2.88*t1403 + 3.2*t1866*t2741 + 3.2*t2466*t2811 + 3.2*t3920*t3937 + 3.2*t3894*t3986 + t5676 + t5757)*var2[2] - 0.5*t5708*var2[3] - 0.5*t5725*var2[4] - 0.5*t5773*var2[5] - 0.5*t5793*var2[6];
  p_output1[6]=-0.5*t5708*var2[2];
  p_output1[7]=-0.5*t5725*var2[2];
  p_output1[8]=-0.5*t5773*var2[2];
  p_output1[9]=-0.5*t5793*var2[2];
  p_output1[10]=var2[2]*(-0.5*(2.88*t1403 + 3.2*t2466*(t3300 + t4051) + 3.2*t3894*(t3906 + t4347) + t5843 + 3.2*t2741*(t4060 + t5895) + t7023 + 3.2*t3920*(t4382 + t7420))*var2[2] - 0.5*t5928*var2[3] - 0.5*t6830*var2[4] - 0.5*t7587*var2[5] - 0.5*t7634*var2[6]);
  p_output1[11]=var2[2]*(-0.5*t5928*var2[2] - 0.5*(6.4*t2534*t2749 + 6.4*t1866*t3124 + 3.2*t2811*t4115 + 3.2*t1866*t4182 + t5843 + t7703 + t7712)*var2[3] - 0.5*t8262*var2[4]);
  p_output1[12]=var2[2]*(-0.5*t6830*var2[2] - 0.5*t8262*var2[3] - 0.5*(6.4*t2749*t3228 + 6.4*t1866*t3255 + 3.2*t2811*t4276 + 3.2*t1866*t4304 + t7703 + t7712)*var2[4]);
  p_output1[13]=var2[2]*(-0.5*t7587*var2[2] - 0.5*(6.4*t3976*t3982 + 6.4*t3937*t3993 + 3.2*t3986*t4405 + 3.2*t3937*t5261 + t7023 + t9002 + t9011)*var2[5] - 0.5*t9187*var2[6]);
  p_output1[14]=var2[2]*(-0.5*t7634*var2[2] - 0.5*t9187*var2[5] - 0.5*(6.4*t3982*t4014 + 6.4*t3937*t4019 + 3.2*t3986*t5643 + 3.2*t3937*t5656 + t9002 + t9011)*var2[6]);
  p_output1[15]=t3141 + t3261 + t4001 + t4047 - 1.*t3931*var2[2];
  p_output1[16]=t4050;
  p_output1[17]=t4260;
  p_output1[18]=t4346;
  p_output1[19]=t5622;
  p_output1[20]=var2[2]*(-0.5*(6.4*Power(t2534,2) + 6.4*Power(t3124,2) + 6.4*t2466*t4115 + 6.4*t2741*t4182)*var2[3] - 0.5*t10110*var2[4]);
  p_output1[21]=var2[2]*(-0.5*t10110*var2[3] - 0.5*(6.4*Power(t3228,2) + 6.4*Power(t3255,2) + 6.4*t2466*t4276 + 6.4*t2741*t4304)*var2[4]);
  p_output1[22]=var2[2]*(-0.5*(6.4*Power(t3976,2) + 6.4*Power(t3993,2) + 6.4*t3894*t4405 + 6.4*t3920*t5261)*var2[5] - 0.5*t10200*var2[6]);
  p_output1[23]=var2[2]*(-0.5*t10200*var2[5] - 0.5*(6.4*Power(t4014,2) + 6.4*Power(t4019,2) + 6.4*t3894*t5643 + 6.4*t3920*t5656)*var2[6]);
  p_output1[24]=-0.5*t13814*var2[3] - 0.5*t14625*var2[4] - 0.5*t14925*var2[5] - 0.5*t15310*var2[6];
  p_output1[25]=-0.5*t13814*var2[2];
  p_output1[26]=-0.5*t14625*var2[2];
  p_output1[27]=-0.5*t14925*var2[2];
  p_output1[28]=-0.5*t15310*var2[2];
  p_output1[29]=var2[2]*(-0.5*(3.2*t15604*t4115 + 3.2*t15619*t4182)*var2[3] - 0.5*t15661*var2[4]);
  p_output1[30]=var2[2]*(-0.5*t15661*var2[3] - 0.5*(3.2*t15633*t2466 + 3.2*(0.24*t15639 - 1.*t1559*t2401)*t2741 + 6.4*t15633*t3228 + 6.4*t15658*t3255 + 3.2*t15604*t4276 + 3.2*t15619*t4304)*var2[4]);
  p_output1[31]=-0.5*t16009*var2[3] - 0.5*t16252*var2[4];
  p_output1[32]=-0.5*t16009*var2[2];
  p_output1[33]=-0.5*t16252*var2[2];
  p_output1[34]=var2[2]*(-0.384*t4182*var2[3] - 0.384*t4246*var2[4]);
  p_output1[35]=var2[2]*(-0.384*t4246*var2[3] - 0.384*t4304*var2[4]);
  p_output1[36]=-0.384*t2534*var2[3] - 0.384*t3228*var2[4];
  p_output1[37]=-0.384*t2534*var2[2];
  p_output1[38]=-0.384*t3228*var2[2];
  p_output1[39]=var2[2]*(-0.5*(3.2*t17526*t4405 + 3.2*t17569*t5261)*var2[5] - 0.5*t18462*var2[6]);
  p_output1[40]=var2[2]*(-0.5*t18462*var2[5] - 0.5*(3.2*t17770*t3894 + 3.2*(0.24*t17985 - 1.*t3363*t3685)*t3920 + 6.4*t17770*t4014 + 6.4*t18031*t4019 + 3.2*t17526*t5643 + 3.2*t17569*t5656)*var2[6]);
  p_output1[41]=-0.5*t20425*var2[5] - 0.5*t20473*var2[6];
  p_output1[42]=-0.5*t20425*var2[2];
  p_output1[43]=-0.5*t20473*var2[2];
  p_output1[44]=var2[2]*(-0.384*t5261*var2[5] - 0.384*t5538*var2[6]);
  p_output1[45]=var2[2]*(-0.384*t5538*var2[5] - 0.384*t5656*var2[6]);
  p_output1[46]=-0.384*t3976*var2[5] - 0.384*t4014*var2[6];
  p_output1[47]=-0.384*t3976*var2[2];
  p_output1[48]=-0.384*t4014*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 49, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec3_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
