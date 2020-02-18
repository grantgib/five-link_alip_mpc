/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:59 GMT-05:00
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
  double t3376;
  double t3380;
  double t3327;
  double t3378;
  double t3638;
  double t3641;
  double t3678;
  double t3679;
  double t3680;
  double t3639;
  double t3642;
  double t3676;
  double t3683;
  double t3684;
  double t3704;
  double t3712;
  double t3718;
  double t3677;
  double t3681;
  double t3682;
  double t3722;
  double t3723;
  double t3724;
  double t3726;
  double t3740;
  double t3765;
  double t3841;
  double t3853;
  double t3854;
  double t3809;
  double t3810;
  double t3811;
  double t3874;
  double t3878;
  double t3879;
  double t3725;
  double t3795;
  double t3801;
  double t3808;
  double t3819;
  double t3823;
  double t3858;
  double t3859;
  double t3865;
  double t3870;
  double t3880;
  double t3881;
  double t3882;
  double t3893;
  double t3895;
  double t3896;
  double t3913;
  double t3914;
  double t3899;
  double t3923;
  double t3924;
  double t3908;
  double t3377;
  double t3383;
  double t3561;
  double t3577;
  double t3585;
  double t3611;
  double t3612;
  double t3613;
  double t3632;
  double t3954;
  double t4010;
  double t4073;
  double t4075;
  double t4081;
  double t4086;
  double t4087;
  double t4091;
  double t4092;
  double t4094;
  double t4095;
  double t4096;
  double t4123;
  double t4124;
  double t4125;
  double t4098;
  double t4099;
  double t4100;
  double t4074;
  double t4076;
  double t4078;
  double t4126;
  double t4127;
  double t4128;
  double t3996;
  double t4011;
  double t4012;
  double t4013;
  double t4034;
  double t4038;
  double t4039;
  double t4040;
  double t4059;
  double t4089;
  double t4101;
  double t4129;
  double t4130;
  double t4141;
  double t4142;
  double t4135;
  double t4136;
  double t4137;
  double t4132;
  double t4146;
  double t4147;
  double t4152;
  double t4161;
  double t4162;
  double t4164;
  double t4144;
  double t4155;
  double t4156;
  double t4165;
  double t4166;
  double t4167;
  double t4189;
  double t4190;
  double t4191;
  double t4200;
  double t4201;
  double t4193;
  double t4203;
  double t4204;
  double t4195;
  double t3812;
  double t3855;
  double t3856;
  double t3857;
  double t3897;
  double t3907;
  double t3909;
  double t3910;
  double t3911;
  double t4252;
  double t4253;
  double t4287;
  double t4288;
  double t4279;
  double t4280;
  double t4281;
  double t4241;
  double t4242;
  double t4247;
  double t4254;
  double t3915;
  double t3925;
  double t3926;
  double t4268;
  double t4269;
  double t4270;
  double t4275;
  double t4284;
  double t3928;
  double t3929;
  double t3930;
  double t4291;
  double t4314;
  double t4315;
  double t4299;
  double t3927;
  double t3932;
  double t3936;
  double t4310;
  double t4311;
  double t4312;
  double t4313;
  double t4316;
  double t4322;
  double t4323;
  double t4324;
  double t4325;
  double t4326;
  double t4332;
  double t4337;
  double t4338;
  double t4339;
  double t4343;
  double t4353;
  double t4354;
  double t4355;
  double t4356;
  double t4153;
  double t4157;
  double t4158;
  double t4160;
  double t4192;
  double t4194;
  double t4196;
  double t4197;
  double t4198;
  double t4395;
  double t4396;
  double t4419;
  double t4420;
  double t4410;
  double t4411;
  double t4413;
  double t4392;
  double t4393;
  double t4394;
  double t4397;
  double t4202;
  double t4205;
  double t4206;
  double t4399;
  double t4400;
  double t4401;
  double t4409;
  double t4416;
  double t4214;
  double t4218;
  double t4226;
  double t4423;
  double t4436;
  double t4437;
  double t4427;
  double t4207;
  double t4232;
  double t4236;
  double t4432;
  double t4433;
  double t4434;
  double t4435;
  double t4438;
  double t4439;
  double t4440;
  double t4441;
  double t4442;
  double t4443;
  double t4444;
  double t4445;
  double t4446;
  double t4447;
  double t4448;
  double t4449;
  double t4450;
  double t4451;
  double t4452;
  double t4476;
  double t4478;
  double t4472;
  double t4473;
  double t4474;
  double t4475;
  double t4489;
  double t4490;
  double t4491;
  double t4492;
  double t4497;
  double t4499;
  double t4477;
  double t4479;
  double t4480;
  double t4482;
  double t4483;
  double t4484;
  double t4498;
  double t4500;
  double t4501;
  double t4503;
  double t4504;
  double t4505;
  double t3951;
  double t3952;
  double t3948;
  double t3949;
  double t4516;
  double t4518;
  double t4519;
  double t4520;
  double t4521;
  double t4512;
  double t4513;
  double t4514;
  double t4515;
  double t4133;
  double t4534;
  double t4535;
  double t4536;
  double t4537;
  double t4134;
  double t4540;
  double t4080;
  double t4090;
  double t4545;
  double t4547;
  double t4548;
  double t4549;
  double t4517;
  double t4522;
  double t4523;
  double t4271;
  double t4274;
  double t4282;
  double t4283;
  double t4285;
  double t4290;
  double t4292;
  double t4293;
  double t4294;
  double t4303;
  double t4560;
  double t4562;
  double t4563;
  double t4525;
  double t4526;
  double t4527;
  double t4569;
  double t4570;
  double t4571;
  double t4572;
  double t4573;
  double t4574;
  double t4575;
  double t4368;
  double t4369;
  double t4370;
  double t4373;
  double t4374;
  double t4375;
  double t4546;
  double t4550;
  double t4551;
  double t4407;
  double t4408;
  double t4414;
  double t4415;
  double t4417;
  double t4422;
  double t4424;
  double t4425;
  double t4426;
  double t4428;
  double t4590;
  double t4592;
  double t4593;
  double t4553;
  double t4554;
  double t4555;
  double t4599;
  double t4600;
  double t4601;
  double t4602;
  double t4603;
  double t4604;
  double t4605;
  double t4459;
  double t4460;
  double t4461;
  double t4464;
  double t4465;
  double t4466;
  double t3912;
  double t3944;
  double t3946;
  double t3950;
  double t3953;
  double t4131;
  double t4138;
  double t4139;
  double t4199;
  double t4237;
  double t4240;
  double t4365;
  double t4388;
  double t4456;
  double t4629;
  double t4630;
  double t4631;
  double t4632;
  double t4633;
  double t4656;
  double t4657;
  double t4658;
  double t4659;
  double t4660;
  double t4675;
  double t4676;
  double t4677;
  double t4679;
  double t4680;
  double t4681;
  double t4683;
  double t4684;
  double t4685;
  double t4687;
  double t4688;
  double t4689;
  double t4696;
  double t4697;
  double t4698;
  double t4700;
  double t4701;
  double t4702;
  double t4703;
  double t4707;
  double t4708;
  double t4709;
  double t4710;
  double t4711;
  double t4712;
  double t4713;
  double t4714;
  double t4715;
  double t4716;
  double t4717;
  double t4735;
  double t4736;
  double t4737;
  double t4739;
  double t4740;
  double t4741;
  double t4742;
  double t4743;
  double t4761;
  double t4762;
  double t4763;
  double t4765;
  double t4766;
  double t4767;
  double t4768;
  double t4772;
  double t4773;
  double t4774;
  double t4775;
  double t4776;
  double t4777;
  double t4778;
  double t4779;
  double t4780;
  double t4781;
  double t4782;
  double t4800;
  double t4801;
  double t4802;
  double t4804;
  double t4805;
  double t4806;
  double t4807;
  double t4808;
  t3376 = Cos(var1[3]);
  t3380 = Sin(var1[3]);
  t3327 = Cos(var1[2]);
  t3378 = Sin(var1[2]);
  t3638 = Cos(var1[4]);
  t3641 = Sin(var1[4]);
  t3678 = t3376*t3638;
  t3679 = -1.*t3380*t3641;
  t3680 = t3678 + t3679;
  t3639 = -1.*t3638*t3380;
  t3642 = -1.*t3376*t3641;
  t3676 = t3639 + t3642;
  t3683 = -1.*t3638;
  t3684 = 1. + t3683;
  t3704 = 0.4*t3684;
  t3712 = 0.64*t3638;
  t3718 = t3704 + t3712;
  t3677 = t3327*t3676;
  t3681 = -1.*t3378*t3680;
  t3682 = t3677 + t3681;
  t3722 = t3718*t3380;
  t3723 = 0.24*t3376*t3641;
  t3724 = t3722 + t3723;
  t3726 = t3376*t3718;
  t3740 = -0.24*t3380*t3641;
  t3765 = t3726 + t3740;
  t3841 = t3638*t3380;
  t3853 = t3376*t3641;
  t3854 = t3841 + t3853;
  t3809 = -1.*t3718*t3380;
  t3810 = -0.24*t3376*t3641;
  t3811 = t3809 + t3810;
  t3874 = -1.*t3376*t3638;
  t3878 = t3380*t3641;
  t3879 = t3874 + t3878;
  t3725 = -1.*t3724*t3680;
  t3795 = -1.*t3676*t3765;
  t3801 = t3725 + t3795;
  t3808 = 3.2*t3682*t3801;
  t3819 = t3724*t3680;
  t3823 = t3676*t3765;
  t3858 = t3724*t3854;
  t3859 = t3680*t3765;
  t3865 = t3858 + t3859;
  t3870 = -1.*t3378*t3676;
  t3880 = t3327*t3879;
  t3881 = t3870 + t3880;
  t3882 = 3.2*t3865*t3881;
  t3893 = -1.*t3378*t3854;
  t3895 = t3327*t3680;
  t3896 = t3893 + t3895;
  t3913 = -0.24*t3638*t3380;
  t3914 = t3913 + t3810;
  t3899 = -1.*t3676*t3724;
  t3923 = 0.24*t3376*t3638;
  t3924 = t3923 + t3740;
  t3908 = -1.*t3765*t3879;
  t3377 = -1.*t3327*t3376;
  t3383 = t3378*t3380;
  t3561 = t3377 + t3383;
  t3577 = Power(t3376,2);
  t3585 = 0.11*t3577;
  t3611 = Power(t3380,2);
  t3612 = 0.11*t3611;
  t3613 = t3585 + t3612;
  t3632 = 6.8*t3561*t3613;
  t3954 = Cos(var1[5]);
  t4010 = Sin(var1[5]);
  t4073 = Cos(var1[6]);
  t4075 = Sin(var1[6]);
  t4081 = t3954*t4073;
  t4086 = -1.*t4010*t4075;
  t4087 = t4081 + t4086;
  t4091 = -1.*t4073;
  t4092 = 1. + t4091;
  t4094 = 0.4*t4092;
  t4095 = 0.64*t4073;
  t4096 = t4094 + t4095;
  t4123 = -1.*t4073*t4010;
  t4124 = -1.*t3954*t4075;
  t4125 = t4123 + t4124;
  t4098 = t4096*t4010;
  t4099 = 0.24*t3954*t4075;
  t4100 = t4098 + t4099;
  t4074 = t4073*t4010;
  t4076 = t3954*t4075;
  t4078 = t4074 + t4076;
  t4126 = t3954*t4096;
  t4127 = -0.24*t4010*t4075;
  t4128 = t4126 + t4127;
  t3996 = -1.*t3327*t3954;
  t4011 = t3378*t4010;
  t4012 = t3996 + t4011;
  t4013 = Power(t3954,2);
  t4034 = 0.11*t4013;
  t4038 = Power(t4010,2);
  t4039 = 0.11*t4038;
  t4040 = t4034 + t4039;
  t4059 = 6.8*t4012*t4040;
  t4089 = -1.*t3378*t4087;
  t4101 = -1.*t4100*t4087;
  t4129 = -1.*t4125*t4128;
  t4130 = t4101 + t4129;
  t4141 = t3327*t4125;
  t4142 = t4141 + t4089;
  t4135 = t4100*t4078;
  t4136 = t4087*t4128;
  t4137 = t4135 + t4136;
  t4132 = -1.*t3378*t4125;
  t4146 = -1.*t4096*t4010;
  t4147 = -0.24*t3954*t4075;
  t4152 = t4146 + t4147;
  t4161 = -1.*t3954*t4073;
  t4162 = t4010*t4075;
  t4164 = t4161 + t4162;
  t4144 = 3.2*t4142*t4130;
  t4155 = t4100*t4087;
  t4156 = t4125*t4128;
  t4165 = t3327*t4164;
  t4166 = t4132 + t4165;
  t4167 = 3.2*t4137*t4166;
  t4189 = -1.*t3378*t4078;
  t4190 = t3327*t4087;
  t4191 = t4189 + t4190;
  t4200 = -0.24*t4073*t4010;
  t4201 = t4200 + t4147;
  t4193 = -1.*t4125*t4100;
  t4203 = 0.24*t3954*t4073;
  t4204 = t4203 + t4127;
  t4195 = -1.*t4128*t4164;
  t3812 = t3811*t3680;
  t3855 = t3854*t3765;
  t3856 = t3812 + t3819 + t3823 + t3855;
  t3857 = 3.2*t3682*t3856;
  t3897 = -1.*t3676*t3811;
  t3907 = -1.*t3680*t3765;
  t3909 = t3897 + t3899 + t3907 + t3908;
  t3910 = 3.2*t3896*t3909;
  t3911 = t3632 + t3808 + t3857 + t3882 + t3910;
  t4252 = t3378*t3879;
  t4253 = t3677 + t4252;
  t4287 = t3378*t3676;
  t4288 = t4287 + t3895;
  t4279 = -1.*t3376*t3718;
  t4280 = 0.24*t3380*t3641;
  t4281 = t4279 + t4280;
  t4241 = t3378*t3854;
  t4242 = t4241 + t3880;
  t4247 = 3.2*t3865*t4242;
  t4254 = 3.2*t3801*t4253;
  t3915 = t3914*t3680;
  t3925 = t3854*t3924;
  t3926 = t3915 + t3819 + t3823 + t3925;
  t4268 = t3327*t3854;
  t4269 = t3378*t3680;
  t4270 = t4268 + t4269;
  t4275 = -1.*t3854*t3765;
  t4284 = -1.*t3724*t3879;
  t3928 = -1.*t3676*t3914;
  t3929 = -1.*t3680*t3924;
  t3930 = t3928 + t3899 + t3929 + t3908;
  t4291 = t3676*t3724;
  t4314 = -0.24*t3376*t3638;
  t4315 = t4314 + t4280;
  t4299 = t3765*t3879;
  t3927 = 3.2*t3682*t3926;
  t3932 = 3.2*t3896*t3930;
  t3936 = t3808 + t3927 + t3882 + t3932;
  t4310 = 3.2*t3856*t4253;
  t4311 = 3.2*t3926*t4253;
  t4312 = -1.*t3914*t3680;
  t4313 = -1.*t3676*t3924;
  t4316 = -1.*t3676*t4315;
  t4322 = -1.*t3811*t3879;
  t4323 = -1.*t3914*t3879;
  t4324 = t4312 + t3795 + t4275 + t4313 + t4316 + t4322 + t4323 + t4284;
  t4325 = 3.2*t4270*t4324;
  t4326 = 3.2*t4288*t3909;
  t4332 = 3.2*t4288*t3930;
  t4337 = t3676*t3811;
  t4338 = t3676*t3914;
  t4339 = t3914*t3854;
  t4343 = t3680*t3924;
  t4353 = t3680*t4315;
  t4354 = t4337 + t4338 + t4291 + t4339 + t3859 + t4343 + t4353 + t4299;
  t4355 = 3.2*t4288*t4354;
  t4356 = t4247 + t4254 + t4310 + t4311 + t4325 + t4326 + t4332 + t4355;
  t4153 = t4152*t4087;
  t4157 = t4078*t4128;
  t4158 = t4153 + t4155 + t4156 + t4157;
  t4160 = 3.2*t4142*t4158;
  t4192 = -1.*t4125*t4152;
  t4194 = -1.*t4087*t4128;
  t4196 = t4192 + t4193 + t4194 + t4195;
  t4197 = 3.2*t4191*t4196;
  t4198 = t4059 + t4144 + t4160 + t4167 + t4197;
  t4395 = t3378*t4164;
  t4396 = t4141 + t4395;
  t4419 = t3378*t4125;
  t4420 = t4419 + t4190;
  t4410 = -1.*t3954*t4096;
  t4411 = 0.24*t4010*t4075;
  t4413 = t4410 + t4411;
  t4392 = t3378*t4078;
  t4393 = t4392 + t4165;
  t4394 = 3.2*t4137*t4393;
  t4397 = 3.2*t4130*t4396;
  t4202 = t4201*t4087;
  t4205 = t4078*t4204;
  t4206 = t4202 + t4155 + t4156 + t4205;
  t4399 = t3327*t4078;
  t4400 = t3378*t4087;
  t4401 = t4399 + t4400;
  t4409 = -1.*t4078*t4128;
  t4416 = -1.*t4100*t4164;
  t4214 = -1.*t4125*t4201;
  t4218 = -1.*t4087*t4204;
  t4226 = t4214 + t4193 + t4218 + t4195;
  t4423 = t4125*t4100;
  t4436 = -0.24*t3954*t4073;
  t4437 = t4436 + t4411;
  t4427 = t4128*t4164;
  t4207 = 3.2*t4142*t4206;
  t4232 = 3.2*t4191*t4226;
  t4236 = t4144 + t4207 + t4167 + t4232;
  t4432 = 3.2*t4158*t4396;
  t4433 = 3.2*t4206*t4396;
  t4434 = -1.*t4201*t4087;
  t4435 = -1.*t4125*t4204;
  t4438 = -1.*t4125*t4437;
  t4439 = -1.*t4152*t4164;
  t4440 = -1.*t4201*t4164;
  t4441 = t4434 + t4129 + t4409 + t4435 + t4438 + t4439 + t4440 + t4416;
  t4442 = 3.2*t4401*t4441;
  t4443 = 3.2*t4420*t4196;
  t4444 = 3.2*t4420*t4226;
  t4445 = t4125*t4152;
  t4446 = t4125*t4201;
  t4447 = t4201*t4078;
  t4448 = t4087*t4204;
  t4449 = t4087*t4437;
  t4450 = t4445 + t4446 + t4423 + t4447 + t4136 + t4448 + t4449 + t4427;
  t4451 = 3.2*t4420*t4450;
  t4452 = t4394 + t4397 + t4432 + t4433 + t4442 + t4443 + t4444 + t4451;
  t4476 = 3.2*t4288*t3801;
  t4478 = 3.2*t3865*t4253;
  t4472 = -1.*t3376*t3378;
  t4473 = -1.*t3327*t3380;
  t4474 = t4472 + t4473;
  t4475 = 6.8*t4474*t3613;
  t4489 = -1.*t3954*t3378;
  t4490 = -1.*t3327*t4010;
  t4491 = t4489 + t4490;
  t4492 = 6.8*t4491*t4040;
  t4497 = 3.2*t4420*t4130;
  t4499 = 3.2*t4137*t4396;
  t4477 = 3.2*t4288*t3856;
  t4479 = 3.2*t4270*t3909;
  t4480 = t4475 + t4476 + t4477 + t4478 + t4479;
  t4482 = 3.2*t4288*t3926;
  t4483 = 3.2*t4270*t3930;
  t4484 = t4476 + t4482 + t4478 + t4483;
  t4498 = 3.2*t4420*t4158;
  t4500 = 3.2*t4401*t4196;
  t4501 = t4492 + t4497 + t4498 + t4499 + t4500;
  t4503 = 3.2*t4420*t4206;
  t4504 = 3.2*t4401*t4226;
  t4505 = t4497 + t4503 + t4499 + t4504;
  t3951 = -1.*t3327*t3680;
  t3952 = t3870 + t3951;
  t3948 = -1.*t3327*t3854;
  t3949 = t3948 + t3681;
  t4516 = 3.2*t3952*t3801;
  t4518 = -1.*t3327*t3676;
  t4519 = -1.*t3378*t3879;
  t4520 = t4518 + t4519;
  t4521 = 3.2*t3865*t4520;
  t4512 = t3376*t3378;
  t4513 = t3327*t3380;
  t4514 = t4512 + t4513;
  t4515 = 6.8*t4514*t3613;
  t4133 = -1.*t3327*t4087;
  t4534 = t3954*t3378;
  t4535 = t3327*t4010;
  t4536 = t4534 + t4535;
  t4537 = 6.8*t4536*t4040;
  t4134 = t4132 + t4133;
  t4540 = -1.*t3327*t4125;
  t4080 = -1.*t3327*t4078;
  t4090 = t4080 + t4089;
  t4545 = 3.2*t4134*t4130;
  t4547 = -1.*t3378*t4164;
  t4548 = t4540 + t4547;
  t4549 = 3.2*t4137*t4548;
  t4517 = 3.2*t3952*t3856;
  t4522 = 3.2*t3949*t3909;
  t4523 = t4515 + t4516 + t4517 + t4521 + t4522;
  t4271 = -1.*t3811*t3680;
  t4274 = -2.*t3676*t3765;
  t4282 = -1.*t3676*t4281;
  t4283 = -2.*t3811*t3879;
  t4285 = t4271 + t4274 + t4275 + t4282 + t4283 + t4284;
  t4290 = 2.*t3676*t3811;
  t4292 = t3811*t3854;
  t4293 = 2.*t3680*t3765;
  t4294 = t3680*t4281;
  t4303 = t4290 + t4291 + t4292 + t4293 + t4294 + t4299;
  t4560 = 3.2*t3801*t3881;
  t4562 = t4268 + t4519;
  t4563 = 3.2*t3865*t4562;
  t4525 = 3.2*t3952*t3926;
  t4526 = 3.2*t3949*t3930;
  t4527 = t4516 + t4525 + t4521 + t4526;
  t4569 = 3.2*t3856*t3881;
  t4570 = 3.2*t3926*t3881;
  t4571 = 3.2*t3896*t4324;
  t4572 = 3.2*t3682*t3909;
  t4573 = 3.2*t3682*t3930;
  t4574 = 3.2*t3682*t4354;
  t4575 = t4560 + t4569 + t4570 + t4563 + t4571 + t4572 + t4573 + t4574;
  t4368 = -2.*t3676*t3924;
  t4369 = -2.*t3914*t3879;
  t4370 = t4312 + t4275 + t4368 + t4316 + t4369 + t4284;
  t4373 = 2.*t3676*t3914;
  t4374 = 2.*t3680*t3924;
  t4375 = t4373 + t4291 + t4339 + t4374 + t4353 + t4299;
  t4546 = 3.2*t4134*t4158;
  t4550 = 3.2*t4090*t4196;
  t4551 = t4537 + t4545 + t4546 + t4549 + t4550;
  t4407 = -1.*t4152*t4087;
  t4408 = -2.*t4125*t4128;
  t4414 = -1.*t4125*t4413;
  t4415 = -2.*t4152*t4164;
  t4417 = t4407 + t4408 + t4409 + t4414 + t4415 + t4416;
  t4422 = 2.*t4125*t4152;
  t4424 = t4152*t4078;
  t4425 = 2.*t4087*t4128;
  t4426 = t4087*t4413;
  t4428 = t4422 + t4423 + t4424 + t4425 + t4426 + t4427;
  t4590 = 3.2*t4130*t4166;
  t4592 = t4399 + t4547;
  t4593 = 3.2*t4137*t4592;
  t4553 = 3.2*t4134*t4206;
  t4554 = 3.2*t4090*t4226;
  t4555 = t4545 + t4553 + t4549 + t4554;
  t4599 = 3.2*t4158*t4166;
  t4600 = 3.2*t4206*t4166;
  t4601 = 3.2*t4191*t4441;
  t4602 = 3.2*t4142*t4196;
  t4603 = 3.2*t4142*t4226;
  t4604 = 3.2*t4142*t4450;
  t4605 = t4590 + t4599 + t4600 + t4593 + t4601 + t4602 + t4603 + t4604;
  t4459 = -2.*t4125*t4204;
  t4460 = -2.*t4201*t4164;
  t4461 = t4434 + t4409 + t4459 + t4438 + t4460 + t4416;
  t4464 = 2.*t4125*t4201;
  t4465 = 2.*t4087*t4204;
  t4466 = t4464 + t4423 + t4447 + t4465 + t4449 + t4427;
  t3912 = -0.5*var2[3]*t3911;
  t3944 = -0.5*var2[4]*t3936;
  t3946 = -2.88*t3327;
  t3950 = 3.2*t3949*t3801;
  t3953 = 3.2*t3952*t3865;
  t4131 = 3.2*t4090*t4130;
  t4138 = 3.2*t4134*t4137;
  t4139 = t3946 + t3632 + t3950 + t3953 + t4059 + t4131 + t4138;
  t4199 = -0.5*var2[5]*t4198;
  t4237 = -0.5*var2[6]*t4236;
  t4240 = -0.5*var2[2]*t3911;
  t4365 = -0.5*var2[2]*t3936;
  t4388 = -0.5*var2[2]*t4198;
  t4456 = -0.5*var2[2]*t4236;
  t4629 = 6.4*t3856*t3926;
  t4630 = 6.4*t3801*t4324;
  t4631 = 6.4*t3909*t3930;
  t4632 = 6.4*t3865*t4354;
  t4633 = t4629 + t4630 + t4631 + t4632;
  t4656 = 6.4*t4158*t4206;
  t4657 = 6.4*t4130*t4441;
  t4658 = 6.4*t4196*t4226;
  t4659 = 6.4*t4137*t4450;
  t4660 = t4656 + t4657 + t4658 + t4659;
  t4675 = 6.4*t3856*t3865;
  t4676 = 6.4*t3801*t3909;
  t4677 = t4675 + t4676;
  t4679 = 6.4*t3865*t3926;
  t4680 = 6.4*t3801*t3930;
  t4681 = t4679 + t4680;
  t4683 = 6.4*t4158*t4137;
  t4684 = 6.4*t4130*t4196;
  t4685 = t4683 + t4684;
  t4687 = 6.4*t4137*t4206;
  t4688 = 6.4*t4130*t4226;
  t4689 = t4687 + t4688;
  t4696 = t3718*t3641;
  t4697 = -0.24*t3638*t3641;
  t4698 = t4696 + t4697;
  t4700 = t3718*t3638;
  t4701 = Power(t3641,2);
  t4702 = 0.24*t4701;
  t4703 = t4700 + t4702;
  t4707 = -1.*t3718*t3641;
  t4708 = 0.24*t3638*t3641;
  t4709 = t4707 + t4708;
  t4710 = 3.2*t4709*t3856;
  t4711 = 3.2*t4698*t4324;
  t4712 = Power(t3638,2);
  t4713 = -0.24*t4712;
  t4714 = t4700 + t4713;
  t4715 = 3.2*t4714*t3909;
  t4716 = 3.2*t4703*t4354;
  t4717 = t4710 + t4711 + t4715 + t4716;
  t4735 = 3.2*t4703*t3856;
  t4736 = 3.2*t4698*t3909;
  t4737 = t4735 + t4736;
  t4739 = 3.2*t4714*t3801;
  t4740 = 3.2*t4709*t3865;
  t4741 = 3.2*t4703*t3926;
  t4742 = 3.2*t4698*t3930;
  t4743 = t4739 + t4740 + t4741 + t4742;
  t4761 = t4096*t4075;
  t4762 = -0.24*t4073*t4075;
  t4763 = t4761 + t4762;
  t4765 = t4096*t4073;
  t4766 = Power(t4075,2);
  t4767 = 0.24*t4766;
  t4768 = t4765 + t4767;
  t4772 = -1.*t4096*t4075;
  t4773 = 0.24*t4073*t4075;
  t4774 = t4772 + t4773;
  t4775 = 3.2*t4774*t4158;
  t4776 = 3.2*t4763*t4441;
  t4777 = Power(t4073,2);
  t4778 = -0.24*t4777;
  t4779 = t4765 + t4778;
  t4780 = 3.2*t4779*t4196;
  t4781 = 3.2*t4768*t4450;
  t4782 = t4775 + t4776 + t4780 + t4781;
  t4800 = 3.2*t4768*t4158;
  t4801 = 3.2*t4763*t4196;
  t4802 = t4800 + t4801;
  t4804 = 3.2*t4779*t4130;
  t4805 = 3.2*t4774*t4137;
  t4806 = 3.2*t4768*t4206;
  t4807 = 3.2*t4763*t4226;
  t4808 = t4804 + t4805 + t4806 + t4807;
  p_output1[0]=var2[2]*(t3912 + t3944 + t4199 + t4237 - 0.5*t4139*var2[2]);
  p_output1[1]=var2[2]*(t4240 - 0.5*(t3632 + t4247 + 6.4*t3856*t4253 + t4254 + 3.2*t4270*t4285 + 6.4*t3909*t4288 + 3.2*t4288*t4303)*var2[3] - 0.5*t4356*var2[4]);
  p_output1[2]=var2[2]*(t4365 - 0.5*t4356*var2[3] - 0.5*(t4247 + 6.4*t3926*t4253 + t4254 + 6.4*t3930*t4288 + 3.2*t4270*t4370 + 3.2*t4288*t4375)*var2[4]);
  p_output1[3]=var2[2]*(t4388 - 0.5*(t4059 + t4394 + 6.4*t4158*t4396 + t4397 + 3.2*t4401*t4417 + 6.4*t4196*t4420 + 3.2*t4420*t4428)*var2[5] - 0.5*t4452*var2[6]);
  p_output1[4]=var2[2]*(t4456 - 0.5*t4452*var2[5] - 0.5*(t4394 + 6.4*t4206*t4396 + t4397 + 6.4*t4226*t4420 + 3.2*t4401*t4461 + 3.2*t4420*t4466)*var2[6]);
  p_output1[5]=-1.*(-2.88*t3378 + 3.2*t3682*t3865 + 3.2*t3801*t3896 + 3.2*t4137*t4142 + 3.2*t4130*t4191 + t4475 + t4492)*var2[2] - 0.5*t4480*var2[3] - 0.5*t4484*var2[4] - 0.5*t4501*var2[5] - 0.5*t4505*var2[6];
  p_output1[6]=-0.5*t4480*var2[2];
  p_output1[7]=-0.5*t4484*var2[2];
  p_output1[8]=-0.5*t4501*var2[2];
  p_output1[9]=-0.5*t4505*var2[2];
  p_output1[10]=var2[2]*(-0.5*(2.88*t3378 + 3.2*t3801*(t3951 + t4241) + 3.2*t4130*(t4133 + t4392) + t4515 + 3.2*t3865*(t4269 + t4518) + t4537 + 3.2*t4137*(t4400 + t4540))*var2[2] - 0.5*t4523*var2[3] - 0.5*t4527*var2[4] - 0.5*t4551*var2[5] - 0.5*t4555*var2[6]);
  p_output1[11]=var2[2]*(-0.5*t4523*var2[2] - 0.5*(6.4*t3856*t3881 + 6.4*t3682*t3909 + 3.2*t3896*t4285 + 3.2*t3682*t4303 + t4515 + t4560 + t4563)*var2[3] - 0.5*t4575*var2[4]);
  p_output1[12]=var2[2]*(-0.5*t4527*var2[2] - 0.5*t4575*var2[3] - 0.5*(6.4*t3881*t3926 + 6.4*t3682*t3930 + 3.2*t3896*t4370 + 3.2*t3682*t4375 + t4560 + t4563)*var2[4]);
  p_output1[13]=var2[2]*(-0.5*t4551*var2[2] - 0.5*(6.4*t4158*t4166 + 6.4*t4142*t4196 + 3.2*t4191*t4417 + 3.2*t4142*t4428 + t4537 + t4590 + t4593)*var2[5] - 0.5*t4605*var2[6]);
  p_output1[14]=var2[2]*(-0.5*t4555*var2[2] - 0.5*t4605*var2[5] - 0.5*(6.4*t4166*t4206 + 6.4*t4142*t4226 + 3.2*t4191*t4461 + 3.2*t4142*t4466 + t4590 + t4593)*var2[6]);
  p_output1[15]=t3912 + t3944 + t4199 + t4237 - 1.*t4139*var2[2];
  p_output1[16]=t4240;
  p_output1[17]=t4365;
  p_output1[18]=t4388;
  p_output1[19]=t4456;
  p_output1[20]=var2[2]*(-0.5*(6.4*Power(t3856,2) + 6.4*Power(t3909,2) + 6.4*t3801*t4285 + 6.4*t3865*t4303)*var2[3] - 0.5*t4633*var2[4]);
  p_output1[21]=var2[2]*(-0.5*t4633*var2[3] - 0.5*(6.4*Power(t3926,2) + 6.4*Power(t3930,2) + 6.4*t3801*t4370 + 6.4*t3865*t4375)*var2[4]);
  p_output1[22]=var2[2]*(-0.5*(6.4*Power(t4158,2) + 6.4*Power(t4196,2) + 6.4*t4130*t4417 + 6.4*t4137*t4428)*var2[5] - 0.5*t4660*var2[6]);
  p_output1[23]=var2[2]*(-0.5*t4660*var2[5] - 0.5*(6.4*Power(t4206,2) + 6.4*Power(t4226,2) + 6.4*t4130*t4461 + 6.4*t4137*t4466)*var2[6]);
  p_output1[24]=-0.5*t4677*var2[3] - 0.5*t4681*var2[4] - 0.5*t4685*var2[5] - 0.5*t4689*var2[6];
  p_output1[25]=-0.5*t4677*var2[2];
  p_output1[26]=-0.5*t4681*var2[2];
  p_output1[27]=-0.5*t4685*var2[2];
  p_output1[28]=-0.5*t4689*var2[2];
  p_output1[29]=var2[2]*(-0.5*(3.2*t4285*t4698 + 3.2*t4303*t4703)*var2[3] - 0.5*t4717*var2[4]);
  p_output1[30]=var2[2]*(-0.5*t4717*var2[3] - 0.5*(3.2*t4370*t4698 + 3.2*t4375*t4703 + 3.2*t3801*t4709 + 6.4*t3926*t4709 + 3.2*t3865*(-1.*t3638*t3718 + 0.24*t4712) + 6.4*t3930*t4714)*var2[4]);
  p_output1[31]=-0.5*t4737*var2[3] - 0.5*t4743*var2[4];
  p_output1[32]=-0.5*t4737*var2[2];
  p_output1[33]=-0.5*t4743*var2[2];
  p_output1[34]=var2[2]*(-0.384*t4303*var2[3] - 0.384*t4354*var2[4]);
  p_output1[35]=var2[2]*(-0.384*t4354*var2[3] - 0.384*t4375*var2[4]);
  p_output1[36]=-0.384*t3856*var2[3] - 0.384*t3926*var2[4];
  p_output1[37]=-0.384*t3856*var2[2];
  p_output1[38]=-0.384*t3926*var2[2];
  p_output1[39]=var2[2]*(-0.5*(3.2*t4417*t4763 + 3.2*t4428*t4768)*var2[5] - 0.5*t4782*var2[6]);
  p_output1[40]=var2[2]*(-0.5*t4782*var2[5] - 0.5*(3.2*t4461*t4763 + 3.2*t4466*t4768 + 3.2*t4130*t4774 + 6.4*t4206*t4774 + 3.2*t4137*(-1.*t4073*t4096 + 0.24*t4777) + 6.4*t4226*t4779)*var2[6]);
  p_output1[41]=-0.5*t4802*var2[5] - 0.5*t4808*var2[6];
  p_output1[42]=-0.5*t4802*var2[2];
  p_output1[43]=-0.5*t4808*var2[2];
  p_output1[44]=var2[2]*(-0.384*t4428*var2[5] - 0.384*t4450*var2[6]);
  p_output1[45]=var2[2]*(-0.384*t4450*var2[5] - 0.384*t4466*var2[6]);
  p_output1[46]=-0.384*t4158*var2[5] - 0.384*t4206*var2[6];
  p_output1[47]=-0.384*t4158*var2[2];
  p_output1[48]=-0.384*t4206*var2[2];
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
