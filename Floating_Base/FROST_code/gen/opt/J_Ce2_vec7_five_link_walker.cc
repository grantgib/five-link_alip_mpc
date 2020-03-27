/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:51:49 GMT-04:00
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
  double t7455;
  double t215;
  double t2885;
  double t7564;
  double t90;
  double t9346;
  double t9935;
  double t9936;
  double t10286;
  double t10338;
  double t10353;
  double t7454;
  double t7801;
  double t8200;
  double t10427;
  double t10437;
  double t10446;
  double t11565;
  double t11661;
  double t11698;
  double t10356;
  double t8879;
  double t9369;
  double t9646;
  double t9753;
  double t9805;
  double t9887;
  double t10364;
  double t10388;
  double t10418;
  double t10419;
  double t10447;
  double t10450;
  double t13096;
  double t13097;
  double t13102;
  double t13116;
  double t13119;
  double t13120;
  double t13121;
  double t13134;
  double t13139;
  double t13170;
  double t13178;
  double t13179;
  double t13183;
  double t13185;
  double t13186;
  double t13191;
  double t13192;
  double t13193;
  double t13200;
  double t13201;
  double t10357;
  double t10360;
  double t10361;
  double t12854;
  double t12855;
  double t13045;
  double t13224;
  double t13225;
  double t11382;
  double t11470;
  double t11489;
  double t11945;
  double t11979;
  double t12741;
  double t13125;
  double t13205;
  double t13206;
  double t13207;
  double t13180;
  double t13187;
  double t13188;
  double t13198;
  double t13199;
  double t13194;
  double t13202;
  double t13203;
  double t13259;
  double t13260;
  double t13210;
  double t13217;
  double t13209;
  double t13211;
  double t13218;
  double t13271;
  double t13272;
  double t13273;
  double t13226;
  double t13231;
  double t13232;
  double t13239;
  double t13240;
  double t13242;
  double t13243;
  double t13244;
  double t13245;
  double t13246;
  double t13247;
  double t13248;
  double t13249;
  double t13250;
  double t13251;
  double t13252;
  double t13253;
  double t13254;
  double t13255;
  double t13256;
  double t13257;
  double t13258;
  double t13268;
  double t13269;
  double t13274;
  double t13277;
  double t13287;
  double t13288;
  double t13290;
  double t13291;
  double t13337;
  double t13338;
  double t13339;
  double t13340;
  double t13341;
  double t13321;
  double t13322;
  double t13323;
  double t13325;
  double t13326;
  double t13327;
  double t13328;
  double t13329;
  double t13331;
  double t13332;
  double t13333;
  double t13334;
  double t13335;
  double t13124;
  double t13132;
  double t13098;
  double t13099;
  double t13091;
  double t13100;
  double t13122;
  double t13123;
  double t13133;
  double t13149;
  double t13150;
  double t13261;
  double t13262;
  double t13263;
  double t13270;
  double t13275;
  double t13276;
  double t13278;
  double t13280;
  double t13281;
  double t13282;
  double t13285;
  double t13286;
  double t13289;
  double t13292;
  double t13371;
  double t13299;
  double t13300;
  double t13301;
  double t13373;
  double t13375;
  double t13378;
  double t13379;
  double t13380;
  double t13381;
  double t13382;
  double t13383;
  double t13384;
  double t13385;
  double t13386;
  double t13387;
  double t13390;
  double t13308;
  double t13309;
  double t13310;
  double t13313;
  double t13314;
  double t13315;
  double t13330;
  double t13190;
  double t13204;
  double t13208;
  double t13219;
  double t13220;
  double t10451;
  double t11700;
  double t12752;
  double t13051;
  double t13052;
  double t13061;
  double t13413;
  double t13221;
  double t13363;
  double t13364;
  double t13365;
  double t13366;
  double t13367;
  double t13264;
  double t13265;
  double t13279;
  double t13283;
  double t13284;
  double t13293;
  double t13294;
  double t13388;
  double t13389;
  double t13391;
  double t13392;
  double t13393;
  double t13394;
  double t13395;
  double t13307;
  double t13311;
  double t13312;
  double t13316;
  double t13317;
  double t13405;
  double t13406;
  double t13407;
  double t13408;
  double t13409;
  double t13336;
  double t13415;
  double t13467;
  double t13468;
  double t13469;
  double t13470;
  double t13471;
  double t13463;
  double t13464;
  double t13465;
  double t13350;
  double t13351;
  double t13352;
  double t13353;
  double t13354;
  double t13372;
  double t13374;
  double t13376;
  double t13227;
  double t13236;
  double t13237;
  double t13426;
  double t13427;
  double t13428;
  double t13429;
  double t13430;
  double t13399;
  double t13400;
  double t13401;
  double t13402;
  double t13403;
  double t13298;
  double t13302;
  double t13303;
  double t13304;
  double t13305;
  double t13443;
  double t13444;
  double t13445;
  double t13446;
  double t13447;
  double t13448;
  double t13449;
  double t13342;
  double t13416;
  double t13472;
  double t13502;
  double t13503;
  double t13504;
  double t13516;
  double t13517;
  double t9907;
  t7455 = Cos(var1[5]);
  t215 = Cos(var1[6]);
  t2885 = Sin(var1[5]);
  t7564 = Sin(var1[6]);
  t90 = Sin(var1[2]);
  t9346 = Cos(var1[2]);
  t9935 = -1.*t215;
  t9936 = 1. + t9935;
  t10286 = 0.4*t9936;
  t10338 = 0.64*t215;
  t10353 = t10286 + t10338;
  t7454 = -1.*t215*t2885;
  t7801 = -1.*t7455*t7564;
  t8200 = t7454 + t7801;
  t10427 = t7455*t215;
  t10437 = -1.*t2885*t7564;
  t10446 = t10427 + t10437;
  t11565 = t9346*t8200;
  t11661 = -1.*t90*t10446;
  t11698 = t11565 + t11661;
  t10356 = t10353*t215;
  t8879 = -1.*t90*t8200;
  t9369 = -1.*t7455*t215;
  t9646 = t2885*t7564;
  t9753 = t9369 + t9646;
  t9805 = t9346*t9753;
  t9887 = t8879 + t9805;
  t10364 = t215*t2885;
  t10388 = t7455*t7564;
  t10418 = t10364 + t10388;
  t10419 = -1.*t90*t10418;
  t10447 = t9346*t10446;
  t10450 = t10419 + t10447;
  t13096 = t90*t8200;
  t13097 = t13096 + t10447;
  t13102 = -1.*t9346*t10446;
  t13116 = t8879 + t13102;
  t13119 = t9346*t10418;
  t13120 = t90*t10446;
  t13121 = t13119 + t13120;
  t13134 = t90*t9753;
  t13139 = t11565 + t13134;
  t13170 = t10353*t2885;
  t13178 = 0.24*t7455*t7564;
  t13179 = t13170 + t13178;
  t13183 = t7455*t10353;
  t13185 = -0.24*t2885*t7564;
  t13186 = t13183 + t13185;
  t13191 = -0.24*t215*t2885;
  t13192 = -0.24*t7455*t7564;
  t13193 = t13191 + t13192;
  t13200 = 0.24*t7455*t215;
  t13201 = t13200 + t13185;
  t10357 = Power(t215,2);
  t10360 = -0.24*t10357;
  t10361 = t10356 + t10360;
  t12854 = Power(t7564,2);
  t12855 = 0.24*t12854;
  t13045 = t10356 + t12855;
  t13224 = t90*t10418;
  t13225 = t13224 + t9805;
  t11382 = t10353*t7564;
  t11470 = -0.24*t215*t7564;
  t11489 = t11382 + t11470;
  t11945 = -1.*t10353*t7564;
  t11979 = 0.24*t215*t7564;
  t12741 = t11945 + t11979;
  t13125 = -1.*t90*t9753;
  t13205 = t13179*t10418;
  t13206 = t10446*t13186;
  t13207 = t13205 + t13206;
  t13180 = -1.*t13179*t10446;
  t13187 = -1.*t8200*t13186;
  t13188 = t13180 + t13187;
  t13198 = t13179*t10446;
  t13199 = t8200*t13186;
  t13194 = t13193*t10446;
  t13202 = t10418*t13201;
  t13203 = t13194 + t13198 + t13199 + t13202;
  t13259 = -1.*t10353*t2885;
  t13260 = t13259 + t13192;
  t13210 = -1.*t8200*t13179;
  t13217 = -1.*t13186*t9753;
  t13209 = -1.*t8200*t13193;
  t13211 = -1.*t10446*t13201;
  t13218 = t13209 + t13210 + t13211 + t13217;
  t13271 = -0.24*t7455*t215;
  t13272 = 0.24*t2885*t7564;
  t13273 = t13271 + t13272;
  t13226 = -0.384*var2[6]*t13225;
  t13231 = 3.2*t13045*t13225;
  t13232 = 3.2*t11489*t13139;
  t13239 = 6.4*t13097*t11698;
  t13240 = 3.2*t13121*t9887;
  t13242 = 3.2*t11698*t13225;
  t13243 = t13119 + t13125;
  t13244 = 3.2*t13097*t13243;
  t13245 = 3.2*t10450*t13139;
  t13246 = 6.4*t9887*t13139;
  t13247 = t13239 + t13240 + t13242 + t13244 + t13245 + t13246;
  t13248 = -0.5*var2[1]*t13247;
  t13249 = Power(t13097,2);
  t13250 = 6.4*t13249;
  t13251 = 6.4*t13097*t13225;
  t13252 = 6.4*t13121*t13139;
  t13253 = Power(t13139,2);
  t13254 = 6.4*t13253;
  t13255 = t13250 + t13251 + t13252 + t13254;
  t13256 = -0.5*var2[0]*t13255;
  t13257 = 3.2*t13207*t13225;
  t13258 = 3.2*t13188*t13139;
  t13268 = -1.*t13193*t10446;
  t13269 = -1.*t10418*t13186;
  t13274 = -1.*t8200*t13273;
  t13277 = -1.*t13179*t9753;
  t13287 = t8200*t13179;
  t13288 = t13193*t10418;
  t13290 = t10446*t13273;
  t13291 = t13186*t9753;
  t13337 = 3.2*t11489*t13097;
  t13338 = 3.2*t12741*t13097;
  t13339 = 3.2*t10361*t13121;
  t13340 = 3.2*t13045*t13139;
  t13341 = t13337 + t13338 + t13339 + t13340;
  t13321 = 6.4*t13097*t13121;
  t13322 = 6.4*t13097*t13139;
  t13323 = t13321 + t13322;
  t13325 = 3.2*t13097*t10450;
  t13326 = 3.2*t11698*t13121;
  t13327 = 3.2*t13097*t9887;
  t13328 = 3.2*t11698*t13139;
  t13329 = t13325 + t13326 + t13327 + t13328;
  t13331 = 3.2*t13097*t13188;
  t13332 = 3.2*t13097*t13203;
  t13333 = 3.2*t13207*t13139;
  t13334 = 3.2*t13121*t13218;
  t13335 = t13331 + t13332 + t13333 + t13334;
  t13124 = -1.*t9346*t8200;
  t13132 = t13124 + t13125;
  t13098 = -1.*t9346*t10418;
  t13099 = t13098 + t11661;
  t13091 = 6.4*t10450*t11698;
  t13100 = 3.2*t13097*t13099;
  t13122 = 3.2*t13116*t13121;
  t13123 = 6.4*t11698*t9887;
  t13133 = 3.2*t13097*t13132;
  t13149 = 3.2*t13116*t13139;
  t13150 = t13091 + t13100 + t13122 + t13123 + t13133 + t13149;
  t13261 = t13260*t10446;
  t13262 = t10418*t13186;
  t13263 = t13261 + t13198 + t13199 + t13262;
  t13270 = -1.*t8200*t13201;
  t13275 = -1.*t13260*t9753;
  t13276 = -1.*t13193*t9753;
  t13278 = t13268 + t13187 + t13269 + t13270 + t13274 + t13275 + t13276 + t13277;
  t13280 = -1.*t8200*t13260;
  t13281 = -1.*t10446*t13186;
  t13282 = t13280 + t13210 + t13281 + t13217;
  t13285 = t8200*t13260;
  t13286 = t8200*t13193;
  t13289 = t10446*t13201;
  t13292 = t13285 + t13286 + t13287 + t13288 + t13206 + t13289 + t13290 + t13291;
  t13371 = -0.384*var2[6]*t13243;
  t13299 = -1.*t10353*t215;
  t13300 = 0.24*t10357;
  t13301 = t13299 + t13300;
  t13373 = 3.2*t11489*t9887;
  t13375 = 3.2*t13045*t13243;
  t13378 = Power(t11698,2);
  t13379 = 6.4*t13378;
  t13380 = 6.4*t10450*t9887;
  t13381 = Power(t9887,2);
  t13382 = 6.4*t13381;
  t13383 = 6.4*t11698*t13243;
  t13384 = t13379 + t13380 + t13382 + t13383;
  t13385 = -0.5*var2[1]*t13384;
  t13386 = -0.5*var2[0]*t13247;
  t13387 = 3.2*t13188*t9887;
  t13390 = 3.2*t13207*t13243;
  t13308 = -2.*t8200*t13201;
  t13309 = -2.*t13193*t9753;
  t13310 = t13268 + t13269 + t13308 + t13274 + t13309 + t13277;
  t13313 = 2.*t8200*t13193;
  t13314 = 2.*t10446*t13201;
  t13315 = t13313 + t13287 + t13288 + t13314 + t13290 + t13291;
  t13330 = -0.5*var2[6]*t13329;
  t13190 = 3.2*t11698*t13188;
  t13204 = 3.2*t11698*t13203;
  t13208 = 3.2*t13207*t9887;
  t13219 = 3.2*t10450*t13218;
  t13220 = t13190 + t13204 + t13208 + t13219;
  t10451 = 3.2*t10361*t10450;
  t11700 = 3.2*t11489*t11698;
  t12752 = 3.2*t12741*t11698;
  t13051 = 3.2*t13045*t9887;
  t13052 = t10451 + t11700 + t12752 + t13051;
  t13061 = -0.5*var2[5]*t13052;
  t13413 = t13091 + t13123;
  t13221 = -0.5*var2[2]*t13220;
  t13363 = 3.2*t13116*t13188;
  t13364 = 3.2*t13116*t13203;
  t13365 = 3.2*t13207*t13132;
  t13366 = 3.2*t13099*t13218;
  t13367 = t13363 + t13364 + t13365 + t13366;
  t13264 = 3.2*t13263*t13139;
  t13265 = 3.2*t13203*t13139;
  t13279 = 3.2*t13121*t13278;
  t13283 = 3.2*t13097*t13282;
  t13284 = 3.2*t13097*t13218;
  t13293 = 3.2*t13097*t13292;
  t13294 = t13257 + t13258 + t13264 + t13265 + t13279 + t13283 + t13284 + t13293;
  t13388 = 3.2*t13263*t9887;
  t13389 = 3.2*t13203*t9887;
  t13391 = 3.2*t10450*t13278;
  t13392 = 3.2*t11698*t13282;
  t13393 = 3.2*t11698*t13218;
  t13394 = 3.2*t11698*t13292;
  t13395 = t13387 + t13388 + t13389 + t13390 + t13391 + t13392 + t13393 + t13394;
  t13307 = 6.4*t13203*t13139;
  t13311 = 3.2*t13121*t13310;
  t13312 = 6.4*t13097*t13218;
  t13316 = 3.2*t13097*t13315;
  t13317 = t13257 + t13258 + t13307 + t13311 + t13312 + t13316;
  t13405 = 6.4*t13203*t9887;
  t13406 = 3.2*t10450*t13310;
  t13407 = 6.4*t11698*t13218;
  t13408 = 3.2*t11698*t13315;
  t13409 = t13387 + t13405 + t13390 + t13406 + t13407 + t13408;
  t13336 = -0.5*var2[6]*t13335;
  t13415 = -0.5*var2[6]*t13220;
  t13467 = 3.2*t10361*t13188;
  t13468 = 3.2*t12741*t13207;
  t13469 = 3.2*t13045*t13203;
  t13470 = 3.2*t11489*t13218;
  t13471 = t13467 + t13468 + t13469 + t13470;
  t13463 = 6.4*t13207*t13203;
  t13464 = 6.4*t13188*t13218;
  t13465 = t13463 + t13464;
  t13350 = 3.2*t11489*t13116;
  t13351 = 3.2*t12741*t13116;
  t13352 = 3.2*t10361*t13099;
  t13353 = 3.2*t13045*t13132;
  t13354 = t13350 + t13351 + t13352 + t13353;
  t13372 = 3.2*t10361*t11698;
  t13374 = 3.2*t12741*t9887;
  t13376 = t13372 + t13373 + t13374 + t13375;
  t13227 = 3.2*t10361*t13097;
  t13236 = 3.2*t12741*t13139;
  t13237 = t13227 + t13231 + t13232 + t13236;
  t13426 = 3.2*t12741*t13263;
  t13427 = 3.2*t11489*t13278;
  t13428 = 3.2*t10361*t13282;
  t13429 = 3.2*t13045*t13292;
  t13430 = t13426 + t13427 + t13428 + t13429;
  t13399 = 3.2*t12741*t10450;
  t13400 = 6.4*t10361*t11698;
  t13401 = 3.2*t13301*t11698;
  t13402 = 6.4*t12741*t9887;
  t13403 = t13399 + t13400 + t13401 + t13373 + t13402 + t13375;
  t13298 = 6.4*t10361*t13097;
  t13302 = 3.2*t13301*t13097;
  t13303 = 3.2*t12741*t13121;
  t13304 = 6.4*t12741*t13139;
  t13305 = t13298 + t13302 + t13303 + t13231 + t13232 + t13304;
  t13443 = 3.2*t12741*t13188;
  t13444 = 3.2*t13301*t13207;
  t13445 = 6.4*t12741*t13203;
  t13446 = 3.2*t11489*t13310;
  t13447 = 6.4*t10361*t13218;
  t13448 = 3.2*t13045*t13315;
  t13449 = t13443 + t13444 + t13445 + t13446 + t13447 + t13448;
  t13342 = -0.5*var2[6]*t13341;
  t13416 = -0.5*var2[6]*t13052;
  t13472 = -0.5*var2[6]*t13471;
  t13502 = 6.4*t10361*t11489;
  t13503 = 6.4*t12741*t13045;
  t13504 = t13502 + t13503;
  t13516 = -0.384*var2[0]*t13225;
  t13517 = -0.384*var2[1]*t13243;
  t9907 = -0.384*var2[6]*t9887;
  p_output1[0]=(t13061 + t13221 + t9907 - 0.5*(6.4*t10450*t13097 + 6.4*t11698*t13121 + 6.4*t11698*t13139 + 6.4*t13097*t9887)*var2[0] - 0.5*t13150*var2[1])*var2[6];
  p_output1[1]=(t13226 + t13248 + t13256 - 0.5*t13294*var2[2] - 0.5*t13237*var2[5])*var2[6];
  p_output1[2]=(t13226 + t13248 + t13256 - 0.5*t13317*var2[2] - 0.5*t13305*var2[5])*var2[6];
  p_output1[3]=-0.5*t13323*var2[6];
  p_output1[4]=t13330;
  p_output1[5]=t13336;
  p_output1[6]=t13342;
  p_output1[7]=-0.5*t13323*var2[0] - 0.5*t13329*var2[1] - 0.5*t13335*var2[2] - 0.5*t13341*var2[5] - 0.768*t13139*var2[6];
  p_output1[8]=var2[6]*(-0.5*t13150*var2[0] - 0.5*(6.4*t11698*t13099 + 6.4*t10450*t13116 + 6.4*t11698*t13132 + 6.4*t13116*t9887)*var2[1] - 0.5*t13367*var2[2] - 0.5*t13354*var2[5] - 0.384*t13132*var2[6]);
  p_output1[9]=(t13371 + t13385 + t13386 - 0.5*t13395*var2[2] - 0.5*t13376*var2[5])*var2[6];
  p_output1[10]=(t13371 + t13385 + t13386 - 0.5*t13409*var2[2] - 0.5*t13403*var2[5])*var2[6];
  p_output1[11]=t13330;
  p_output1[12]=-0.5*t13413*var2[6];
  p_output1[13]=t13415;
  p_output1[14]=t13416;
  p_output1[15]=t13061 + t13221 - 0.5*t13329*var2[0] - 0.5*t13413*var2[1] - 0.768*t9887*var2[6];
  p_output1[16]=(-0.5*t13220*var2[0] - 0.5*t13367*var2[1])*var2[6];
  p_output1[17]=var2[6]*(-0.5*t13294*var2[0] - 0.5*t13395*var2[1] - 0.5*(6.4*t13203*t13263 + 6.4*t13188*t13278 + 6.4*t13218*t13282 + 6.4*t13207*t13292)*var2[2] - 0.5*t13430*var2[5] - 0.384*t13292*var2[6]);
  p_output1[18]=var2[6]*(-0.5*t13317*var2[0] - 0.5*t13409*var2[1] - 0.5*(6.4*Power(t13203,2) + 6.4*Power(t13218,2) + 6.4*t13188*t13310 + 6.4*t13207*t13315)*var2[2] - 0.5*t13449*var2[5] - 0.384*t13315*var2[6]);
  p_output1[19]=t13336;
  p_output1[20]=t13415;
  p_output1[21]=-0.5*t13465*var2[6];
  p_output1[22]=t13472;
  p_output1[23]=-0.5*t13335*var2[0] - 0.5*t13220*var2[1] - 0.5*t13465*var2[2] - 0.5*t13471*var2[5] - 0.768*t13203*var2[6];
  p_output1[24]=(-0.5*t13052*var2[0] - 0.5*t13354*var2[1])*var2[6];
  p_output1[25]=(-0.5*t13237*var2[0] - 0.5*t13376*var2[1] - 0.5*t13430*var2[2])*var2[6];
  p_output1[26]=var2[6]*(-0.5*t13305*var2[0] - 0.5*t13403*var2[1] - 0.5*t13449*var2[2] - 0.5*(6.4*Power(t10361,2) + 6.4*t11489*t12741 + 6.4*Power(t12741,2) + 6.4*t13045*t13301)*var2[5] - 0.384*t13301*var2[6]);
  p_output1[27]=t13342;
  p_output1[28]=t13416;
  p_output1[29]=t13472;
  p_output1[30]=-0.5*t13504*var2[6];
  p_output1[31]=-0.5*t13341*var2[0] - 0.5*t13052*var2[1] - 0.5*t13471*var2[2] - 0.5*t13504*var2[5] - 0.768*t12741*var2[6];
  p_output1[32]=(-0.384*t9887*var2[0] - 0.384*t13132*var2[1])*var2[6];
  p_output1[33]=(t13516 + t13517 - 0.384*t13292*var2[2])*var2[6];
  p_output1[34]=(t13516 + t13517 - 0.384*t13315*var2[2] - 0.384*t13301*var2[5])*var2[6];
  p_output1[35]=-0.384*t13139*var2[6];
  p_output1[36]=t9907;
  p_output1[37]=-0.384*t13203*var2[6];
  p_output1[38]=-0.384*t12741*var2[6];
  p_output1[39]=-0.384*t13139*var2[0] - 0.384*t9887*var2[1] - 0.384*t13203*var2[2] - 0.384*t12741*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec7_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
