/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:51:42 GMT-04:00
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
  double t214;
  double t177;
  double t193;
  double t226;
  double t2672;
  double t137;
  double t209;
  double t486;
  double t2316;
  double t8118;
  double t8159;
  double t9122;
  double t9523;
  double t9578;
  double t2670;
  double t4092;
  double t4153;
  double t4197;
  double t4298;
  double t4337;
  double t10281;
  double t10282;
  double t10283;
  double t10238;
  double t10241;
  double t10263;
  double t6638;
  double t6952;
  double t7298;
  double t10285;
  double t10287;
  double t10288;
  double t9913;
  double t9916;
  double t9933;
  double t9905;
  double t9958;
  double t9976;
  double t10306;
  double t10294;
  double t10295;
  double t10296;
  double t10310;
  double t10312;
  double t10322;
  double t10323;
  double t10298;
  double t10308;
  double t10324;
  double t10325;
  double t10326;
  double t10334;
  double t10335;
  double t10379;
  double t10380;
  double t10381;
  double t10383;
  double t10385;
  double t10386;
  double t10392;
  double t10393;
  double t10394;
  double t8038;
  double t10211;
  double t10224;
  double t10225;
  double t10226;
  double t10421;
  double t10422;
  double t9695;
  double t9754;
  double t9883;
  double t10284;
  double t10290;
  double t10291;
  double t10293;
  double t10330;
  double t10341;
  double t10342;
  double t10345;
  double t10346;
  double t10349;
  double t10352;
  double t10367;
  double t10368;
  double t10375;
  double t10376;
  double t10377;
  double t10378;
  double t10402;
  double t10403;
  double t10406;
  double t10382;
  double t10387;
  double t10389;
  double t10395;
  double t10396;
  double t10397;
  double t10398;
  double t10399;
  double t10408;
  double t10409;
  double t10410;
  double t10411;
  double t10412;
  double t10462;
  double t10463;
  double t10464;
  double t10423;
  double t10424;
  double t10425;
  double t10428;
  double t10429;
  double t10430;
  double t10431;
  double t10432;
  double t10433;
  double t10435;
  double t10438;
  double t10439;
  double t10442;
  double t10443;
  double t10444;
  double t10445;
  double t10448;
  double t10449;
  double t12934;
  double t12937;
  double t10461;
  double t12947;
  double t12959;
  double t10470;
  double t10488;
  double t12986;
  double t12987;
  double t11497;
  double t13053;
  double t13055;
  double t13058;
  double t13059;
  double t13060;
  double t13062;
  double t13063;
  double t13064;
  double t13065;
  double t13066;
  double t13072;
  double t13073;
  double t13074;
  double t13075;
  double t13077;
  double t13078;
  double t13079;
  double t13080;
  double t13081;
  double t13082;
  double t10329;
  double t10331;
  double t10316;
  double t10318;
  double t10309;
  double t10321;
  double t10327;
  double t10328;
  double t10333;
  double t10336;
  double t10337;
  double t13103;
  double t13117;
  double t13118;
  double t10436;
  double t13126;
  double t10453;
  double t10455;
  double t10468;
  double t10469;
  double t10482;
  double t10486;
  double t11208;
  double t11316;
  double t11398;
  double t11515;
  double t13135;
  double t11736;
  double t11769;
  double t11818;
  double t13136;
  double t11962;
  double t12706;
  double t12707;
  double t13137;
  double t13140;
  double t13141;
  double t13142;
  double t13146;
  double t13147;
  double t13148;
  double t12742;
  double t13152;
  double t12938;
  double t12960;
  double t12961;
  double t13154;
  double t12984;
  double t12985;
  double t12988;
  double t12989;
  double t12990;
  double t12996;
  double t12999;
  double t13000;
  double t13001;
  double t13003;
  double t13009;
  double t13010;
  double t13011;
  double t13018;
  double t13037;
  double t13076;
  double t10390;
  double t10401;
  double t10407;
  double t10415;
  double t10416;
  double t4534;
  double t9993;
  double t10229;
  double t10234;
  double t13181;
  double t13182;
  double t10417;
  double t13127;
  double t13128;
  double t13129;
  double t13130;
  double t13131;
  double t10452;
  double t10483;
  double t10485;
  double t11641;
  double t11648;
  double t13153;
  double t13155;
  double t13156;
  double t13159;
  double t13160;
  double t12868;
  double t12965;
  double t12997;
  double t12998;
  double t13002;
  double t13038;
  double t13039;
  double t13171;
  double t13172;
  double t13173;
  double t13174;
  double t13175;
  double t13176;
  double t13177;
  double t13083;
  double t13184;
  double t13228;
  double t13229;
  double t13230;
  double t13107;
  double t13114;
  double t13115;
  double t13138;
  double t10426;
  double t13195;
  double t13196;
  double t13197;
  double t13164;
  double t13165;
  double t13166;
  double t11860;
  double t12708;
  double t12740;
  double t13212;
  double t13213;
  double t13214;
  double t13215;
  double t13216;
  double t13092;
  double t13093;
  double t13094;
  double t13095;
  double t10235;
  double t13233;
  double t13234;
  double t13235;
  double t13266;
  double t13267;
  double t13101;
  double t13189;
  double t13241;
  t214 = Cos(var1[5]);
  t177 = Cos(var1[6]);
  t193 = Sin(var1[5]);
  t226 = Sin(var1[6]);
  t2672 = Cos(var1[2]);
  t137 = Sin(var1[2]);
  t209 = -1.*t177*t193;
  t486 = -1.*t214*t226;
  t2316 = t209 + t486;
  t8118 = -1.*t177;
  t8159 = 1. + t8118;
  t9122 = 0.4*t8159;
  t9523 = 0.64*t177;
  t9578 = t9122 + t9523;
  t2670 = -1.*t137*t2316;
  t4092 = -1.*t214*t177;
  t4153 = t193*t226;
  t4197 = t4092 + t4153;
  t4298 = t2672*t4197;
  t4337 = t2670 + t4298;
  t10281 = t2672*t214;
  t10282 = -1.*t137*t193;
  t10283 = t10281 + t10282;
  t10238 = -1.*t214*t137;
  t10241 = -1.*t2672*t193;
  t10263 = t10238 + t10241;
  t6638 = -1.*t2672*t214;
  t6952 = t137*t193;
  t7298 = t6638 + t6952;
  t10285 = t214*t137;
  t10287 = t2672*t193;
  t10288 = t10285 + t10287;
  t9913 = t214*t177;
  t9916 = -1.*t193*t226;
  t9933 = t9913 + t9916;
  t9905 = t2672*t2316;
  t9958 = -1.*t137*t9933;
  t9976 = t9905 + t9958;
  t10306 = t2672*t9933;
  t10294 = t177*t193;
  t10295 = t214*t226;
  t10296 = t10294 + t10295;
  t10310 = t137*t2316;
  t10312 = t10310 + t10306;
  t10322 = -1.*t2672*t9933;
  t10323 = t2670 + t10322;
  t10298 = -1.*t137*t10296;
  t10308 = t10298 + t10306;
  t10324 = t2672*t10296;
  t10325 = t137*t9933;
  t10326 = t10324 + t10325;
  t10334 = t137*t4197;
  t10335 = t9905 + t10334;
  t10379 = t9578*t193;
  t10380 = 0.24*t214*t226;
  t10381 = t10379 + t10380;
  t10383 = t214*t9578;
  t10385 = -0.24*t193*t226;
  t10386 = t10383 + t10385;
  t10392 = -1.*t9578*t193;
  t10393 = -0.24*t214*t226;
  t10394 = t10392 + t10393;
  t8038 = 0.748*t7298;
  t10211 = t9578*t177;
  t10224 = Power(t226,2);
  t10225 = 0.24*t10224;
  t10226 = t10211 + t10225;
  t10421 = t137*t10296;
  t10422 = t10421 + t4298;
  t9695 = t9578*t226;
  t9754 = -0.24*t177*t226;
  t9883 = t9695 + t9754;
  t10284 = 20.4*t10263*t10283;
  t10290 = 6.8*t10288*t10283;
  t10291 = 20.4*t10263*t7298;
  t10293 = 6.8*t10288*t7298;
  t10330 = -1.*t137*t4197;
  t10341 = Power(t10263,2);
  t10342 = 13.6*t10341;
  t10345 = 13.6*t10263*t10288;
  t10346 = Power(t10283,2);
  t10349 = 13.6*t10346;
  t10352 = 13.6*t10283*t7298;
  t10367 = Power(t214,2);
  t10368 = 0.11*t10367;
  t10375 = Power(t193,2);
  t10376 = 0.11*t10375;
  t10377 = t10368 + t10376;
  t10378 = 6.8*t7298*t10377;
  t10402 = t10381*t10296;
  t10403 = t9933*t10386;
  t10406 = t10402 + t10403;
  t10382 = -1.*t10381*t9933;
  t10387 = -1.*t2316*t10386;
  t10389 = t10382 + t10387;
  t10395 = t10394*t9933;
  t10396 = t10381*t9933;
  t10397 = t2316*t10386;
  t10398 = t10296*t10386;
  t10399 = t10395 + t10396 + t10397 + t10398;
  t10408 = -1.*t2316*t10394;
  t10409 = -1.*t2316*t10381;
  t10410 = -1.*t9933*t10386;
  t10411 = -1.*t10386*t4197;
  t10412 = t10408 + t10409 + t10410 + t10411;
  t10462 = -1.*t214*t9578;
  t10463 = 0.24*t193*t226;
  t10464 = t10462 + t10463;
  t10423 = -0.384*var2[6]*t10422;
  t10424 = 3.2*t10226*t10422;
  t10425 = 3.2*t9883*t10335;
  t10428 = 6.4*t10312*t9976;
  t10429 = 3.2*t10326*t4337;
  t10430 = 3.2*t9976*t10422;
  t10431 = t10324 + t10330;
  t10432 = 3.2*t10312*t10431;
  t10433 = 3.2*t10308*t10335;
  t10435 = 6.4*t4337*t10335;
  t10438 = Power(t10312,2);
  t10439 = 6.4*t10438;
  t10442 = 6.4*t10312*t10422;
  t10443 = 6.4*t10326*t10335;
  t10444 = Power(t10335,2);
  t10445 = 6.4*t10444;
  t10448 = 3.2*t10406*t10422;
  t10449 = 3.2*t10389*t10335;
  t12934 = -0.24*t177*t193;
  t12937 = t12934 + t10393;
  t10461 = -1.*t10296*t10386;
  t12947 = 0.24*t214*t177;
  t12959 = t12947 + t10385;
  t10470 = -1.*t10381*t4197;
  t10488 = t2316*t10381;
  t12986 = -0.24*t214*t177;
  t12987 = t12986 + t10463;
  t11497 = t10386*t4197;
  t13053 = 13.6*t10263*t10283;
  t13055 = 13.6*t10288*t10283;
  t13058 = 6.4*t10312*t10326;
  t13059 = 6.4*t10312*t10335;
  t13060 = t13053 + t13055 + t13058 + t13059;
  t13062 = 6.8*t10341;
  t13063 = 6.8*t10263*t10288;
  t13064 = 6.8*t10346;
  t13065 = 6.8*t10283*t7298;
  t13066 = 3.2*t10312*t10308;
  t13072 = 3.2*t9976*t10326;
  t13073 = 3.2*t10312*t4337;
  t13074 = 3.2*t9976*t10335;
  t13075 = t13062 + t13063 + t13064 + t13065 + t13066 + t13072 + t13073 + t13074;
  t13077 = 6.8*t10263*t10377;
  t13078 = 3.2*t10312*t10389;
  t13079 = 3.2*t10312*t10399;
  t13080 = 3.2*t10406*t10335;
  t13081 = 3.2*t10326*t10412;
  t13082 = t13077 + t13078 + t13079 + t13080 + t13081;
  t10329 = -1.*t2672*t2316;
  t10331 = t10329 + t10330;
  t10316 = -1.*t2672*t10296;
  t10318 = t10316 + t9958;
  t10309 = 6.4*t10308*t9976;
  t10321 = 3.2*t10312*t10318;
  t10327 = 3.2*t10323*t10326;
  t10328 = 6.4*t9976*t4337;
  t10333 = 3.2*t10312*t10331;
  t10336 = 3.2*t10323*t10335;
  t10337 = t10284 + t10290 + t10291 + t10293 + t10309 + t10321 + t10327 + t10328 + t10333 + t10336;
  t13103 = 0.748*t10288;
  t13117 = Power(t7298,2);
  t13118 = 13.6*t13117;
  t10436 = t10284 + t10290 + t10291 + t10293 + t10428 + t10429 + t10430 + t10432 + t10433 + t10435;
  t13126 = 6.8*t10288*t10377;
  t10453 = -1.*t10394*t9933;
  t10455 = -2.*t2316*t10386;
  t10468 = -1.*t2316*t10464;
  t10469 = -2.*t10394*t4197;
  t10482 = t10453 + t10455 + t10461 + t10468 + t10469 + t10470;
  t10486 = 2.*t2316*t10394;
  t11208 = t10394*t10296;
  t11316 = 2.*t9933*t10386;
  t11398 = t9933*t10464;
  t11515 = t10486 + t10488 + t11208 + t11316 + t11398 + t11497;
  t13135 = -0.384*var2[6]*t10431;
  t11736 = Power(t177,2);
  t11769 = -0.24*t11736;
  t11818 = t10211 + t11769;
  t13136 = 3.2*t9883*t4337;
  t11962 = -1.*t9578*t226;
  t12706 = 0.24*t177*t226;
  t12707 = t11962 + t12706;
  t13137 = 3.2*t10226*t10431;
  t13140 = Power(t9976,2);
  t13141 = 6.4*t13140;
  t13142 = 6.4*t10308*t4337;
  t13146 = Power(t4337,2);
  t13147 = 6.4*t13146;
  t13148 = 6.4*t9976*t10431;
  t12742 = t10428 + t10429 + t10430 + t10432 + t10433 + t10435;
  t13152 = 3.2*t10389*t4337;
  t12938 = t12937*t9933;
  t12960 = t10296*t12959;
  t12961 = t12938 + t10396 + t10397 + t12960;
  t13154 = 3.2*t10406*t10431;
  t12984 = -1.*t12937*t9933;
  t12985 = -1.*t2316*t12959;
  t12988 = -1.*t2316*t12987;
  t12989 = -1.*t10394*t4197;
  t12990 = -1.*t12937*t4197;
  t12996 = t12984 + t10387 + t10461 + t12985 + t12988 + t12989 + t12990 + t10470;
  t12999 = -1.*t2316*t12937;
  t13000 = -1.*t9933*t12959;
  t13001 = t12999 + t10409 + t13000 + t10411;
  t13003 = t2316*t10394;
  t13009 = t2316*t12937;
  t13010 = t12937*t10296;
  t13011 = t9933*t12959;
  t13018 = t9933*t12987;
  t13037 = t13003 + t13009 + t10488 + t13010 + t10403 + t13011 + t13018 + t11497;
  t13076 = -0.5*var2[5]*t13075;
  t10390 = 3.2*t9976*t10389;
  t10401 = 3.2*t9976*t10399;
  t10407 = 3.2*t10406*t4337;
  t10415 = 3.2*t10308*t10412;
  t10416 = t10378 + t10390 + t10401 + t10407 + t10415;
  t4534 = -0.384*var2[6]*t4337;
  t9993 = 3.2*t9883*t9976;
  t10229 = 3.2*t10226*t4337;
  t10234 = t8038 + t9993 + t10229;
  t13181 = 13.6*t10263*t7298;
  t13182 = t13053 + t13181 + t10309 + t10328;
  t10417 = -0.5*var2[2]*t10416;
  t13127 = 3.2*t10323*t10389;
  t13128 = 3.2*t10323*t10399;
  t13129 = 3.2*t10406*t10331;
  t13130 = 3.2*t10318*t10412;
  t13131 = t13126 + t13127 + t13128 + t13129 + t13130;
  t10452 = 6.4*t10399*t10335;
  t10483 = 3.2*t10326*t10482;
  t10485 = 6.4*t10312*t10412;
  t11641 = 3.2*t10312*t11515;
  t11648 = t10378 + t10448 + t10449 + t10452 + t10483 + t10485 + t11641;
  t13153 = 6.4*t10399*t4337;
  t13155 = 3.2*t10308*t10482;
  t13156 = 6.4*t9976*t10412;
  t13159 = 3.2*t9976*t11515;
  t13160 = t13126 + t13152 + t13153 + t13154 + t13155 + t13156 + t13159;
  t12868 = 3.2*t10399*t10335;
  t12965 = 3.2*t12961*t10335;
  t12997 = 3.2*t10326*t12996;
  t12998 = 3.2*t10312*t10412;
  t13002 = 3.2*t10312*t13001;
  t13038 = 3.2*t10312*t13037;
  t13039 = t10448 + t10449 + t12868 + t12965 + t12997 + t12998 + t13002 + t13038;
  t13171 = 3.2*t10399*t4337;
  t13172 = 3.2*t12961*t4337;
  t13173 = 3.2*t10308*t12996;
  t13174 = 3.2*t9976*t10412;
  t13175 = 3.2*t9976*t13001;
  t13176 = 3.2*t9976*t13037;
  t13177 = t13152 + t13171 + t13172 + t13154 + t13173 + t13174 + t13175 + t13176;
  t13083 = -0.5*var2[5]*t13082;
  t13184 = -0.5*var2[5]*t10416;
  t13228 = 6.4*t10399*t10406;
  t13229 = 6.4*t10389*t10412;
  t13230 = t13228 + t13229;
  t13107 = 3.2*t9883*t10323;
  t13114 = 3.2*t10226*t10331;
  t13115 = t13103 + t13107 + t13114;
  t13138 = t13103 + t13136 + t13137;
  t10426 = t8038 + t10424 + t10425;
  t13195 = 3.2*t9883*t10482;
  t13196 = 3.2*t10226*t11515;
  t13197 = t13195 + t13196;
  t13164 = 3.2*t11818*t9976;
  t13165 = 3.2*t12707*t4337;
  t13166 = t13164 + t13136 + t13165 + t13137;
  t11860 = 3.2*t11818*t10312;
  t12708 = 3.2*t12707*t10335;
  t12740 = t11860 + t10424 + t10425 + t12708;
  t13212 = 3.2*t12707*t10399;
  t13213 = 3.2*t9883*t12996;
  t13214 = 3.2*t11818*t10412;
  t13215 = 3.2*t10226*t13037;
  t13216 = t13212 + t13213 + t13214 + t13215;
  t13092 = 0.748*t10263;
  t13093 = 3.2*t9883*t10312;
  t13094 = 3.2*t10226*t10335;
  t13095 = t13092 + t13093 + t13094;
  t10235 = -0.5*var2[5]*t10234;
  t13233 = 3.2*t10226*t10399;
  t13234 = 3.2*t9883*t10412;
  t13235 = t13233 + t13234;
  t13266 = -0.384*var2[0]*t10422;
  t13267 = -0.384*var2[1]*t10431;
  t13101 = -0.384*var2[5]*t10335;
  t13189 = -0.384*var2[5]*t4337;
  t13241 = -0.384*var2[5]*t10399;
  p_output1[0]=(t10235 + t10417 + t4534 - 0.5*(6.4*t10308*t10312 + t10342 + t10345 + t10349 + t10352 + 6.4*t10312*t4337 + 6.4*t10326*t9976 + 6.4*t10335*t9976)*var2[0] - 0.5*t10337*var2[1])*var2[5];
  p_output1[1]=var2[5]*(t10423 - 0.5*(t10342 + t10345 + t10349 + t10352 + t10439 + t10442 + t10443 + t10445)*var2[0] - 0.5*t10436*var2[1] - 0.5*t11648*var2[2] - 0.5*t10426*var2[5]);
  p_output1[2]=var2[5]*(t10423 - 0.5*(t10439 + t10442 + t10443 + t10445)*var2[0] - 0.5*t12742*var2[1] - 0.5*t13039*var2[2] - 0.5*t12740*var2[5]);
  p_output1[3]=-0.5*t13060*var2[5];
  p_output1[4]=t13076;
  p_output1[5]=t13083;
  p_output1[6]=-0.5*t13060*var2[0] - 0.5*t13075*var2[1] - 0.5*t13082*var2[2] - 1.*t13095*var2[5] - 0.384*t10335*var2[6];
  p_output1[7]=t13101;
  p_output1[8]=var2[5]*(-0.5*t10337*var2[0] - 0.5*(6.4*t10308*t10323 + t10342 + t10345 + t10352 + t13118 + 6.4*t10323*t4337 + 6.4*t10318*t9976 + 6.4*t10331*t9976)*var2[1] - 0.5*t13131*var2[2] - 0.5*t13115*var2[5] - 0.384*t10331*var2[6]);
  p_output1[9]=var2[5]*(t13135 - 0.5*t10436*var2[0] - 0.5*(t10342 + t10345 + t10352 + t13118 + t13141 + t13142 + t13147 + t13148)*var2[1] - 0.5*t13160*var2[2] - 0.5*t13138*var2[5]);
  p_output1[10]=var2[5]*(t13135 - 0.5*t12742*var2[0] - 0.5*(t13141 + t13142 + t13147 + t13148)*var2[1] - 0.5*t13177*var2[2] - 0.5*t13166*var2[5]);
  p_output1[11]=t13076;
  p_output1[12]=-0.5*t13182*var2[5];
  p_output1[13]=t13184;
  p_output1[14]=t10417 + t4534 - 0.5*t13075*var2[0] - 0.5*t13182*var2[1] - 1.*t10234*var2[5];
  p_output1[15]=t13189;
  p_output1[16]=(-0.5*t10416*var2[0] - 0.5*t13131*var2[1])*var2[5];
  p_output1[17]=var2[5]*(-0.5*t11648*var2[0] - 0.5*t13160*var2[1] - 0.5*(6.4*Power(t10399,2) + 6.4*Power(t10412,2) + 6.4*t10389*t10482 + 6.4*t10406*t11515)*var2[2] - 0.5*t13197*var2[5] - 0.384*t11515*var2[6]);
  p_output1[18]=var2[5]*(-0.5*t13039*var2[0] - 0.5*t13177*var2[1] - 0.5*(6.4*t10399*t12961 + 6.4*t10389*t12996 + 6.4*t10412*t13001 + 6.4*t10406*t13037)*var2[2] - 0.5*t13216*var2[5] - 0.384*t13037*var2[6]);
  p_output1[19]=t13083;
  p_output1[20]=t13184;
  p_output1[21]=-0.5*t13230*var2[5];
  p_output1[22]=-0.5*t13082*var2[0] - 0.5*t10416*var2[1] - 0.5*t13230*var2[2] - 1.*t13235*var2[5] - 0.384*t10399*var2[6];
  p_output1[23]=t13241;
  p_output1[24]=(-0.5*t10234*var2[0] - 0.5*t13115*var2[1])*var2[5];
  p_output1[25]=(-0.5*t10426*var2[0] - 0.5*t13138*var2[1] - 0.5*t13197*var2[2])*var2[5];
  p_output1[26]=(-0.5*t12740*var2[0] - 0.5*t13166*var2[1] - 0.5*t13216*var2[2])*var2[5];
  p_output1[27]=-0.5*t13095*var2[5];
  p_output1[28]=t10235;
  p_output1[29]=-0.5*t13235*var2[5];
  p_output1[30]=-0.5*t13095*var2[0] - 0.5*t10234*var2[1] - 0.5*t13235*var2[2];
  p_output1[31]=(-0.384*t4337*var2[0] - 0.384*t10331*var2[1])*var2[5];
  p_output1[32]=(t13266 + t13267 - 0.384*t11515*var2[2])*var2[5];
  p_output1[33]=(t13266 + t13267 - 0.384*t13037*var2[2])*var2[5];
  p_output1[34]=t13101;
  p_output1[35]=t13189;
  p_output1[36]=t13241;
  p_output1[37]=-0.384*t10335*var2[0] - 0.384*t4337*var2[1] - 0.384*t10399*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 38, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec6_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
