/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:40 GMT-04:00
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
  double t8149;
  double t7801;
  double t7819;
  double t8152;
  double t9541;
  double t3018;
  double t8146;
  double t8167;
  double t9012;
  double t9130;
  double t9563;
  double t9711;
  double t9726;
  double t9744;
  double t9745;
  double t10353;
  double t10365;
  double t10366;
  double t10377;
  double t10382;
  double t12953;
  double t12950;
  double t12951;
  double t12954;
  double t12952;
  double t12955;
  double t12956;
  double t12957;
  double t12958;
  double t12978;
  double t12979;
  double t12981;
  double t12982;
  double t13024;
  double t13025;
  double t13026;
  double t13027;
  double t13030;
  double t13064;
  double t13065;
  double t13066;
  double t13056;
  double t13057;
  double t13063;
  double t10197;
  double t10289;
  double t10320;
  double t13068;
  double t13069;
  double t13070;
  double t12917;
  double t12888;
  double t12902;
  double t12909;
  double t12914;
  double t12918;
  double t13081;
  double t13087;
  double t13098;
  double t13099;
  double t13100;
  double t13095;
  double t13096;
  double t13097;
  double t12985;
  double t12986;
  double t12987;
  double t13102;
  double t13103;
  double t13104;
  double t13051;
  double t13047;
  double t13048;
  double t13049;
  double t13050;
  double t13052;
  double t13112;
  double t13118;
  double t13084;
  double t13085;
  double t13080;
  double t13082;
  double t13077;
  double t13078;
  double t13092;
  double t13093;
  double t13115;
  double t13116;
  double t13111;
  double t13113;
  double t13108;
  double t13109;
  double t13123;
  double t13124;
  double t13161;
  double t13162;
  double t13163;
  double t13165;
  double t13166;
  double t13167;
  double t13181;
  double t13182;
  double t13183;
  double t13185;
  double t13186;
  double t13187;
  double t10335;
  double t12855;
  double t12872;
  double t12873;
  double t10397;
  double t10398;
  double t10411;
  double t10412;
  double t13199;
  double t13200;
  double t13201;
  double t13202;
  double t13203;
  double t13067;
  double t13071;
  double t13072;
  double t13073;
  double t13086;
  double t13128;
  double t13129;
  double t13130;
  double t13131;
  double t13132;
  double t13133;
  double t13216;
  double t13217;
  double t13155;
  double t13156;
  double t13157;
  double t13158;
  double t13159;
  double t13160;
  double t13164;
  double t13168;
  double t13169;
  double t13171;
  double t13172;
  double t13173;
  double t13228;
  double t13229;
  double t13230;
  double t13204;
  double t13205;
  double t13206;
  double t13209;
  double t13210;
  double t13211;
  double t13212;
  double t13213;
  double t13214;
  double t13215;
  double t13218;
  double t13221;
  double t13222;
  double t13223;
  double t13224;
  double t13227;
  double t13232;
  double t13233;
  double t13237;
  double t13262;
  double t13263;
  double t13239;
  double t13265;
  double t13266;
  double t13241;
  double t12988;
  double t13041;
  double t13045;
  double t13046;
  double t13033;
  double t13037;
  double t13038;
  double t13039;
  double t13278;
  double t13279;
  double t13280;
  double t13281;
  double t13282;
  double t13101;
  double t13105;
  double t13106;
  double t13107;
  double t13117;
  double t13140;
  double t13141;
  double t13142;
  double t13143;
  double t13144;
  double t13145;
  double t13295;
  double t13296;
  double t13175;
  double t13176;
  double t13177;
  double t13178;
  double t13179;
  double t13180;
  double t13184;
  double t13188;
  double t13189;
  double t13191;
  double t13192;
  double t13193;
  double t13307;
  double t13308;
  double t13309;
  double t13283;
  double t13284;
  double t13285;
  double t13288;
  double t13289;
  double t13290;
  double t13291;
  double t13292;
  double t13293;
  double t13294;
  double t13297;
  double t13300;
  double t13301;
  double t13302;
  double t13303;
  double t13306;
  double t13311;
  double t13312;
  double t13316;
  double t13341;
  double t13342;
  double t13318;
  double t13344;
  double t13345;
  double t13320;
  double t13135;
  double t13137;
  double t13147;
  double t13149;
  double t13357;
  double t13358;
  double t13359;
  double t13360;
  double t13361;
  double t13362;
  double t13363;
  double t13364;
  double t13365;
  double t13367;
  double t13368;
  double t13369;
  double t13370;
  double t13371;
  double t13372;
  double t13373;
  double t13374;
  double t13375;
  double t13376;
  double t13377;
  double t13378;
  double t13379;
  double t13380;
  double t13381;
  double t13382;
  double t13383;
  double t13386;
  double t13387;
  double t13388;
  double t13389;
  double t13392;
  double t13393;
  double t13394;
  double t13395;
  double t13088;
  double t13090;
  double t13091;
  double t13119;
  double t13121;
  double t13122;
  double t13079;
  double t13083;
  double t13089;
  double t13094;
  double t13110;
  double t13114;
  double t13120;
  double t13125;
  double t13126;
  double t13414;
  double t13425;
  double t13426;
  double t13219;
  double t13445;
  double t13231;
  double t13234;
  double t13235;
  double t13238;
  double t13240;
  double t13242;
  double t13455;
  double t13456;
  double t13252;
  double t13253;
  double t13254;
  double t13248;
  double t13249;
  double t13250;
  double t13457;
  double t13460;
  double t13461;
  double t13462;
  double t13463;
  double t13258;
  double t13467;
  double t13264;
  double t13267;
  double t13268;
  double t13469;
  double t13270;
  double t13271;
  double t13272;
  double t13420;
  double t13433;
  double t13434;
  double t13298;
  double t13448;
  double t13310;
  double t13313;
  double t13314;
  double t13317;
  double t13319;
  double t13321;
  double t13488;
  double t13489;
  double t13331;
  double t13332;
  double t13333;
  double t13327;
  double t13328;
  double t13329;
  double t13490;
  double t13493;
  double t13494;
  double t13495;
  double t13496;
  double t13337;
  double t13500;
  double t13343;
  double t13346;
  double t13347;
  double t13502;
  double t13349;
  double t13350;
  double t13351;
  double t13384;
  double t10194;
  double t10422;
  double t12920;
  double t12926;
  double t12949;
  double t12983;
  double t13040;
  double t13053;
  double t13054;
  double t13055;
  double t13521;
  double t13522;
  double t13523;
  double t13524;
  double t13525;
  double t13526;
  double t13527;
  double t13154;
  double t13170;
  double t13174;
  double t13190;
  double t13194;
  double t13195;
  double t13444;
  double t13446;
  double t13447;
  double t13449;
  double t13450;
  double t13451;
  double t13236;
  double t13243;
  double t13244;
  double t13468;
  double t13470;
  double t13471;
  double t13269;
  double t13273;
  double t13274;
  double t13482;
  double t13483;
  double t13484;
  double t13315;
  double t13322;
  double t13323;
  double t13501;
  double t13503;
  double t13504;
  double t13348;
  double t13352;
  double t13353;
  double t13515;
  double t13516;
  double t13517;
  double t13399;
  double t13400;
  double t13401;
  double t13402;
  double t13403;
  double t13404;
  double t13405;
  double t13406;
  double t13196;
  double t13415;
  double t13416;
  double t13417;
  double t13207;
  double t13458;
  double t13251;
  double t13255;
  double t13256;
  double t13475;
  double t13476;
  double t13477;
  double t13409;
  double t13533;
  double t13580;
  double t13581;
  double t13582;
  double t13583;
  double t13410;
  double t13534;
  double t13421;
  double t13422;
  double t13423;
  double t13286;
  double t13491;
  double t13330;
  double t13334;
  double t13335;
  double t13508;
  double t13509;
  double t13510;
  double t13411;
  double t13535;
  double t13606;
  double t13607;
  double t13608;
  double t13609;
  double t13412;
  double t13536;
  t8149 = Cos(var1[3]);
  t7801 = Cos(var1[4]);
  t7819 = Sin(var1[3]);
  t8152 = Sin(var1[4]);
  t9541 = Cos(var1[2]);
  t3018 = Sin(var1[2]);
  t8146 = -1.*t7801*t7819;
  t8167 = -1.*t8149*t8152;
  t9012 = t8146 + t8167;
  t9130 = -1.*t3018*t9012;
  t9563 = t8149*t7801;
  t9711 = -1.*t7819*t8152;
  t9726 = t9563 + t9711;
  t9744 = -1.*t9541*t9726;
  t9745 = t9130 + t9744;
  t10353 = -1.*t7801;
  t10365 = 1. + t10353;
  t10366 = 0.4*t10365;
  t10377 = 0.64*t7801;
  t10382 = t10366 + t10377;
  t12953 = Cos(var1[5]);
  t12950 = Cos(var1[6]);
  t12951 = Sin(var1[5]);
  t12954 = Sin(var1[6]);
  t12952 = -1.*t12950*t12951;
  t12955 = -1.*t12953*t12954;
  t12956 = t12952 + t12955;
  t12957 = -1.*t3018*t12956;
  t12958 = t12953*t12950;
  t12978 = -1.*t12951*t12954;
  t12979 = t12958 + t12978;
  t12981 = -1.*t9541*t12979;
  t12982 = t12957 + t12981;
  t13024 = -1.*t12950;
  t13025 = 1. + t13024;
  t13026 = 0.4*t13025;
  t13027 = 0.64*t12950;
  t13030 = t13026 + t13027;
  t13064 = t9541*t8149;
  t13065 = -1.*t3018*t7819;
  t13066 = t13064 + t13065;
  t13056 = -1.*t8149*t3018;
  t13057 = -1.*t9541*t7819;
  t13063 = t13056 + t13057;
  t10197 = -1.*t9541*t8149;
  t10289 = t3018*t7819;
  t10320 = t10197 + t10289;
  t13068 = t8149*t3018;
  t13069 = t9541*t7819;
  t13070 = t13068 + t13069;
  t12917 = -1.*t3018*t9726;
  t12888 = t7801*t7819;
  t12902 = t8149*t8152;
  t12909 = t12888 + t12902;
  t12914 = -1.*t9541*t12909;
  t12918 = t12914 + t12917;
  t13081 = t9541*t9726;
  t13087 = t3018*t9726;
  t13098 = t9541*t12953;
  t13099 = -1.*t3018*t12951;
  t13100 = t13098 + t13099;
  t13095 = -1.*t12953*t3018;
  t13096 = -1.*t9541*t12951;
  t13097 = t13095 + t13096;
  t12985 = -1.*t9541*t12953;
  t12986 = t3018*t12951;
  t12987 = t12985 + t12986;
  t13102 = t12953*t3018;
  t13103 = t9541*t12951;
  t13104 = t13102 + t13103;
  t13051 = -1.*t3018*t12979;
  t13047 = t12950*t12951;
  t13048 = t12953*t12954;
  t13049 = t13047 + t13048;
  t13050 = -1.*t9541*t13049;
  t13052 = t13050 + t13051;
  t13112 = t9541*t12979;
  t13118 = t3018*t12979;
  t13084 = t3018*t9012;
  t13085 = t13084 + t13081;
  t13080 = -1.*t3018*t12909;
  t13082 = t13080 + t13081;
  t13077 = t9541*t9012;
  t13078 = t13077 + t12917;
  t13092 = t9541*t12909;
  t13093 = t13092 + t13087;
  t13115 = t3018*t12956;
  t13116 = t13115 + t13112;
  t13111 = -1.*t3018*t13049;
  t13113 = t13111 + t13112;
  t13108 = t9541*t12956;
  t13109 = t13108 + t13051;
  t13123 = t9541*t13049;
  t13124 = t13123 + t13118;
  t13161 = t10382*t7819;
  t13162 = 0.24*t8149*t8152;
  t13163 = t13161 + t13162;
  t13165 = t8149*t10382;
  t13166 = -0.24*t7819*t8152;
  t13167 = t13165 + t13166;
  t13181 = t13030*t12951;
  t13182 = 0.24*t12953*t12954;
  t13183 = t13181 + t13182;
  t13185 = t12953*t13030;
  t13186 = -0.24*t12951*t12954;
  t13187 = t13185 + t13186;
  t10335 = 0.748*t10320;
  t12855 = t10382*t8152;
  t12872 = -0.24*t7801*t8152;
  t12873 = t12855 + t12872;
  t10397 = t10382*t7801;
  t10398 = Power(t8152,2);
  t10411 = 0.24*t10398;
  t10412 = t10397 + t10411;
  t13199 = -1.*t8149*t7801;
  t13200 = t7819*t8152;
  t13201 = t13199 + t13200;
  t13202 = t9541*t13201;
  t13203 = t9130 + t13202;
  t13067 = 20.4*t13063*t13066;
  t13071 = 6.8*t13070*t13066;
  t13072 = 20.4*t13063*t10320;
  t13073 = 6.8*t13070*t10320;
  t13086 = -1.*t9541*t9012;
  t13128 = Power(t13063,2);
  t13129 = 13.6*t13128;
  t13130 = 13.6*t13063*t13070;
  t13131 = Power(t13066,2);
  t13132 = 13.6*t13131;
  t13133 = 13.6*t13066*t10320;
  t13216 = t3018*t13201;
  t13217 = t13077 + t13216;
  t13155 = Power(t8149,2);
  t13156 = 0.11*t13155;
  t13157 = Power(t7819,2);
  t13158 = 0.11*t13157;
  t13159 = t13156 + t13158;
  t13160 = 6.8*t10320*t13159;
  t13164 = -1.*t13163*t9726;
  t13168 = -1.*t9012*t13167;
  t13169 = t13164 + t13168;
  t13171 = t13163*t12909;
  t13172 = t9726*t13167;
  t13173 = t13171 + t13172;
  t13228 = -1.*t10382*t7819;
  t13229 = -0.24*t8149*t8152;
  t13230 = t13228 + t13229;
  t13204 = -0.384*var2[4]*t13203;
  t13205 = 3.2*t12873*t13078;
  t13206 = 3.2*t10412*t13203;
  t13209 = 6.4*t13082*t13078;
  t13210 = 3.2*t13085*t12918;
  t13211 = 3.2*t9745*t13093;
  t13212 = 6.4*t13078*t13203;
  t13213 = -1.*t3018*t13201;
  t13214 = t13086 + t13213;
  t13215 = 3.2*t13085*t13214;
  t13218 = 3.2*t9745*t13217;
  t13221 = 6.4*t13085*t13082;
  t13222 = 6.4*t13078*t13093;
  t13223 = 6.4*t13085*t13203;
  t13224 = 6.4*t13078*t13217;
  t13227 = 3.2*t13078*t13169;
  t13232 = t13163*t9726;
  t13233 = t9012*t13167;
  t13237 = 3.2*t13173*t13203;
  t13262 = -0.24*t7801*t7819;
  t13263 = t13262 + t13229;
  t13239 = -1.*t9012*t13163;
  t13265 = 0.24*t8149*t7801;
  t13266 = t13265 + t13166;
  t13241 = -1.*t13167*t13201;
  t12988 = 0.748*t12987;
  t13041 = t13030*t12954;
  t13045 = -0.24*t12950*t12954;
  t13046 = t13041 + t13045;
  t13033 = t13030*t12950;
  t13037 = Power(t12954,2);
  t13038 = 0.24*t13037;
  t13039 = t13033 + t13038;
  t13278 = -1.*t12953*t12950;
  t13279 = t12951*t12954;
  t13280 = t13278 + t13279;
  t13281 = t9541*t13280;
  t13282 = t12957 + t13281;
  t13101 = 20.4*t13097*t13100;
  t13105 = 6.8*t13104*t13100;
  t13106 = 20.4*t13097*t12987;
  t13107 = 6.8*t13104*t12987;
  t13117 = -1.*t9541*t12956;
  t13140 = Power(t13097,2);
  t13141 = 13.6*t13140;
  t13142 = 13.6*t13097*t13104;
  t13143 = Power(t13100,2);
  t13144 = 13.6*t13143;
  t13145 = 13.6*t13100*t12987;
  t13295 = t3018*t13280;
  t13296 = t13108 + t13295;
  t13175 = Power(t12953,2);
  t13176 = 0.11*t13175;
  t13177 = Power(t12951,2);
  t13178 = 0.11*t13177;
  t13179 = t13176 + t13178;
  t13180 = 6.8*t12987*t13179;
  t13184 = -1.*t13183*t12979;
  t13188 = -1.*t12956*t13187;
  t13189 = t13184 + t13188;
  t13191 = t13183*t13049;
  t13192 = t12979*t13187;
  t13193 = t13191 + t13192;
  t13307 = -1.*t13030*t12951;
  t13308 = -0.24*t12953*t12954;
  t13309 = t13307 + t13308;
  t13283 = -0.384*var2[6]*t13282;
  t13284 = 3.2*t13046*t13109;
  t13285 = 3.2*t13039*t13282;
  t13288 = 6.4*t13113*t13109;
  t13289 = 3.2*t13116*t13052;
  t13290 = 3.2*t12982*t13124;
  t13291 = 6.4*t13109*t13282;
  t13292 = -1.*t3018*t13280;
  t13293 = t13117 + t13292;
  t13294 = 3.2*t13116*t13293;
  t13297 = 3.2*t12982*t13296;
  t13300 = 6.4*t13116*t13113;
  t13301 = 6.4*t13109*t13124;
  t13302 = 6.4*t13116*t13282;
  t13303 = 6.4*t13109*t13296;
  t13306 = 3.2*t13109*t13189;
  t13311 = t13183*t12979;
  t13312 = t12956*t13187;
  t13316 = 3.2*t13193*t13282;
  t13341 = -0.24*t12950*t12951;
  t13342 = t13341 + t13308;
  t13318 = -1.*t12956*t13183;
  t13344 = 0.24*t12953*t12950;
  t13345 = t13344 + t13186;
  t13320 = -1.*t13187*t13280;
  t13135 = Power(t13082,2);
  t13137 = Power(t13078,2);
  t13147 = Power(t13113,2);
  t13149 = Power(t13109,2);
  t13357 = 13.6*t13063*t13066;
  t13358 = 13.6*t13070*t13066;
  t13359 = 6.4*t13085*t13078;
  t13360 = 6.4*t13082*t13093;
  t13361 = 13.6*t13097*t13100;
  t13362 = 13.6*t13104*t13100;
  t13363 = 6.4*t13116*t13109;
  t13364 = 6.4*t13113*t13124;
  t13365 = t13357 + t13358 + t13359 + t13360 + t13361 + t13362 + t13363 + t13364;
  t13367 = 6.8*t13128;
  t13368 = 6.8*t13063*t13070;
  t13369 = 6.8*t13131;
  t13370 = 6.8*t13066*t10320;
  t13371 = 3.2*t9745*t13085;
  t13372 = 3.2*t13135;
  t13373 = 3.2*t13137;
  t13374 = 3.2*t12918*t13093;
  t13375 = 6.8*t13140;
  t13376 = 6.8*t13097*t13104;
  t13377 = 6.8*t13143;
  t13378 = 6.8*t13100*t12987;
  t13379 = 3.2*t12982*t13116;
  t13380 = 3.2*t13147;
  t13381 = 3.2*t13149;
  t13382 = 3.2*t13052*t13124;
  t13383 = t13367 + t13368 + t13369 + t13370 + t13371 + t13372 + t13373 + t13374 + t13375 + t13376 + t13377 + t13378 + t13379 + t13380 + t13381 + t13382;
  t13386 = 0.748*t13063;
  t13387 = 3.2*t12873*t13082;
  t13388 = 3.2*t10412*t13078;
  t13389 = t13386 + t13387 + t13388;
  t13392 = 0.748*t13097;
  t13393 = 3.2*t13046*t13113;
  t13394 = 3.2*t13039*t13109;
  t13395 = t13392 + t13393 + t13394;
  t13088 = t13086 + t13087;
  t13090 = t3018*t12909;
  t13091 = t13090 + t9744;
  t13119 = t13117 + t13118;
  t13121 = t3018*t13049;
  t13122 = t13121 + t12981;
  t13079 = 9.6*t9745*t13078;
  t13083 = 9.6*t13082*t12918;
  t13089 = 3.2*t13085*t13088;
  t13094 = 3.2*t13091*t13093;
  t13110 = 9.6*t12982*t13109;
  t13114 = 9.6*t13113*t13052;
  t13120 = 3.2*t13116*t13119;
  t13125 = 3.2*t13122*t13124;
  t13126 = t13067 + t13071 + t13072 + t13073 + t13079 + t13083 + t13089 + t13094 + t13101 + t13105 + t13106 + t13107 + t13110 + t13114 + t13120 + t13125;
  t13414 = 0.748*t13070;
  t13425 = Power(t10320,2);
  t13426 = 13.6*t13425;
  t13219 = t13067 + t13071 + t13072 + t13073 + t13209 + t13210 + t13211 + t13212 + t13215 + t13218;
  t13445 = 6.8*t13070*t13159;
  t13231 = t13230*t9726;
  t13234 = t12909*t13167;
  t13235 = t13231 + t13232 + t13233 + t13234;
  t13238 = -1.*t9012*t13230;
  t13240 = -1.*t9726*t13167;
  t13242 = t13238 + t13239 + t13240 + t13241;
  t13455 = -0.384*var2[4]*t13214;
  t13456 = 3.2*t12873*t9745;
  t13252 = -1.*t10382*t8152;
  t13253 = 0.24*t7801*t8152;
  t13254 = t13252 + t13253;
  t13248 = Power(t7801,2);
  t13249 = -0.24*t13248;
  t13250 = t10397 + t13249;
  t13457 = 3.2*t10412*t13214;
  t13460 = 6.4*t9745*t13082;
  t13461 = 6.4*t13078*t12918;
  t13462 = 6.4*t9745*t13203;
  t13463 = 6.4*t13078*t13214;
  t13258 = t13209 + t13210 + t13211 + t13212 + t13215 + t13218;
  t13467 = 3.2*t9745*t13169;
  t13264 = t13263*t9726;
  t13267 = t12909*t13266;
  t13268 = t13264 + t13232 + t13233 + t13267;
  t13469 = 3.2*t13173*t13214;
  t13270 = -1.*t9012*t13263;
  t13271 = -1.*t9726*t13266;
  t13272 = t13270 + t13239 + t13271 + t13241;
  t13420 = 0.748*t13104;
  t13433 = Power(t12987,2);
  t13434 = 13.6*t13433;
  t13298 = t13101 + t13105 + t13106 + t13107 + t13288 + t13289 + t13290 + t13291 + t13294 + t13297;
  t13448 = 6.8*t13104*t13179;
  t13310 = t13309*t12979;
  t13313 = t13049*t13187;
  t13314 = t13310 + t13311 + t13312 + t13313;
  t13317 = -1.*t12956*t13309;
  t13319 = -1.*t12979*t13187;
  t13321 = t13317 + t13318 + t13319 + t13320;
  t13488 = -0.384*var2[6]*t13293;
  t13489 = 3.2*t13046*t12982;
  t13331 = -1.*t13030*t12954;
  t13332 = 0.24*t12950*t12954;
  t13333 = t13331 + t13332;
  t13327 = Power(t12950,2);
  t13328 = -0.24*t13327;
  t13329 = t13033 + t13328;
  t13490 = 3.2*t13039*t13293;
  t13493 = 6.4*t12982*t13113;
  t13494 = 6.4*t13109*t13052;
  t13495 = 6.4*t12982*t13282;
  t13496 = 6.4*t13109*t13293;
  t13337 = t13288 + t13289 + t13290 + t13291 + t13294 + t13297;
  t13500 = 3.2*t12982*t13189;
  t13343 = t13342*t12979;
  t13346 = t13049*t13345;
  t13347 = t13343 + t13311 + t13312 + t13346;
  t13502 = 3.2*t13193*t13293;
  t13349 = -1.*t12956*t13342;
  t13350 = -1.*t12979*t13345;
  t13351 = t13349 + t13318 + t13350 + t13320;
  t13384 = -0.5*var2[2]*t13383;
  t10194 = -0.384*var2[4]*t9745;
  t10422 = 3.2*t10412*t9745;
  t12920 = 3.2*t12873*t12918;
  t12926 = t10335 + t10422 + t12920;
  t12949 = -0.5*var2[3]*t12926;
  t12983 = -0.384*var2[6]*t12982;
  t13040 = 3.2*t13039*t12982;
  t13053 = 3.2*t13046*t13052;
  t13054 = t12988 + t13040 + t13053;
  t13055 = -0.5*var2[5]*t13054;
  t13521 = 13.6*t13063*t10320;
  t13522 = 6.4*t9745*t13078;
  t13523 = 6.4*t13082*t12918;
  t13524 = 13.6*t13097*t12987;
  t13525 = 6.4*t12982*t13109;
  t13526 = 6.4*t13113*t13052;
  t13527 = t13357 + t13521 + t13522 + t13523 + t13361 + t13524 + t13525 + t13526;
  t13154 = -2.88*t9541;
  t13170 = 3.2*t12918*t13169;
  t13174 = 3.2*t9745*t13173;
  t13190 = 3.2*t13052*t13189;
  t13194 = 3.2*t12982*t13193;
  t13195 = t13154 + t13160 + t13170 + t13174 + t13180 + t13190 + t13194;
  t13444 = 2.88*t3018;
  t13446 = 3.2*t13091*t13169;
  t13447 = 3.2*t13088*t13173;
  t13449 = 3.2*t13122*t13189;
  t13450 = 3.2*t13119*t13193;
  t13451 = t13444 + t13445 + t13446 + t13447 + t13448 + t13449 + t13450;
  t13236 = 3.2*t13078*t13235;
  t13243 = 3.2*t13082*t13242;
  t13244 = t13160 + t13227 + t13236 + t13237 + t13243;
  t13468 = 3.2*t9745*t13235;
  t13470 = 3.2*t12918*t13242;
  t13471 = t13445 + t13467 + t13468 + t13469 + t13470;
  t13269 = 3.2*t13078*t13268;
  t13273 = 3.2*t13082*t13272;
  t13274 = t13227 + t13269 + t13237 + t13273;
  t13482 = 3.2*t9745*t13268;
  t13483 = 3.2*t12918*t13272;
  t13484 = t13467 + t13482 + t13469 + t13483;
  t13315 = 3.2*t13109*t13314;
  t13322 = 3.2*t13113*t13321;
  t13323 = t13180 + t13306 + t13315 + t13316 + t13322;
  t13501 = 3.2*t12982*t13314;
  t13503 = 3.2*t13052*t13321;
  t13504 = t13448 + t13500 + t13501 + t13502 + t13503;
  t13348 = 3.2*t13109*t13347;
  t13352 = 3.2*t13113*t13351;
  t13353 = t13306 + t13348 + t13316 + t13352;
  t13515 = 3.2*t12982*t13347;
  t13516 = 3.2*t13052*t13351;
  t13517 = t13500 + t13515 + t13502 + t13516;
  t13399 = -2.88*t3018;
  t13400 = 6.8*t13063*t13159;
  t13401 = 3.2*t13082*t13169;
  t13402 = 3.2*t13078*t13173;
  t13403 = 6.8*t13097*t13179;
  t13404 = 3.2*t13113*t13189;
  t13405 = 3.2*t13109*t13193;
  t13406 = t13399 + t13400 + t13401 + t13402 + t13403 + t13404 + t13405;
  t13196 = -0.5*var2[2]*t13195;
  t13415 = 3.2*t12873*t13091;
  t13416 = 3.2*t10412*t13088;
  t13417 = t13414 + t13415 + t13416;
  t13207 = t10335 + t13205 + t13206;
  t13458 = t13414 + t13456 + t13457;
  t13251 = 3.2*t13250*t13082;
  t13255 = 3.2*t13254*t13078;
  t13256 = t13251 + t13205 + t13255 + t13206;
  t13475 = 3.2*t13254*t9745;
  t13476 = 3.2*t13250*t12918;
  t13477 = t13456 + t13475 + t13476 + t13457;
  t13409 = -0.5*var2[2]*t13389;
  t13533 = -0.5*var2[2]*t12926;
  t13580 = -0.384*var2[0]*t13203;
  t13581 = -0.384*var2[1]*t13214;
  t13582 = t13580 + t13581;
  t13583 = var2[2]*t13582;
  t13410 = -0.384*var2[2]*t13078;
  t13534 = -0.384*var2[2]*t9745;
  t13421 = 3.2*t13046*t13122;
  t13422 = 3.2*t13039*t13119;
  t13423 = t13420 + t13421 + t13422;
  t13286 = t12988 + t13284 + t13285;
  t13491 = t13420 + t13489 + t13490;
  t13330 = 3.2*t13329*t13113;
  t13334 = 3.2*t13333*t13109;
  t13335 = t13330 + t13284 + t13334 + t13285;
  t13508 = 3.2*t13333*t12982;
  t13509 = 3.2*t13329*t13052;
  t13510 = t13489 + t13508 + t13509 + t13490;
  t13411 = -0.5*var2[2]*t13395;
  t13535 = -0.5*var2[2]*t13054;
  t13606 = -0.384*var2[0]*t13282;
  t13607 = -0.384*var2[1]*t13293;
  t13608 = t13606 + t13607;
  t13609 = var2[2]*t13608;
  t13412 = -0.384*var2[2]*t13109;
  t13536 = -0.384*var2[2]*t12982;
  p_output1[0]=(t10194 + t12949 + t12983 + t13055 + t13196 - 0.5*(6.4*t12918*t13093 + 6.4*t12982*t13116 + 6.4*t13052*t13124 + t13129 + t13130 + t13132 + t13133 + 6.4*t13135 + 6.4*t13137 + t13141 + t13142 + t13144 + t13145 + 6.4*t13147 + 6.4*t13149 + 6.4*t13085*t9745)*var2[0] - 0.5*t13126*var2[1])*var2[2];
  p_output1[1]=var2[2]*(t13204 - 0.5*(t13129 + t13130 + t13132 + t13133 + t13221 + t13222 + t13223 + t13224)*var2[0] - 0.5*t13219*var2[1] - 0.5*t13244*var2[2] - 0.5*t13207*var2[3]);
  p_output1[2]=var2[2]*(t13204 - 0.5*(t13221 + t13222 + t13223 + t13224)*var2[0] - 0.5*t13258*var2[1] - 0.5*t13274*var2[2] - 0.5*t13256*var2[3]);
  p_output1[3]=var2[2]*(t13283 - 0.5*(t13141 + t13142 + t13144 + t13145 + t13300 + t13301 + t13302 + t13303)*var2[0] - 0.5*t13298*var2[1] - 0.5*t13323*var2[2] - 0.5*t13286*var2[5]);
  p_output1[4]=var2[2]*(t13283 - 0.5*(t13300 + t13301 + t13302 + t13303)*var2[0] - 0.5*t13337*var2[1] - 0.5*t13353*var2[2] - 0.5*t13335*var2[5]);
  p_output1[5]=-0.5*t13365*var2[2];
  p_output1[6]=t13384;
  p_output1[7]=-0.5*t13365*var2[0] - 0.5*t13383*var2[1] - 1.*t13406*var2[2] - 0.5*t13389*var2[3] - 0.384*t13078*var2[4] - 0.5*t13395*var2[5] - 0.384*t13109*var2[6];
  p_output1[8]=t13409;
  p_output1[9]=t13410;
  p_output1[10]=t13411;
  p_output1[11]=t13412;
  p_output1[12]=var2[2]*(-0.5*t13126*var2[0] - 0.5*(6.4*Power(t12918,2) + 6.4*Power(t12982,2) + 6.4*Power(t13052,2) + 6.4*t13078*t13088 + 6.4*t13082*t13091 + 6.4*t13109*t13119 + 6.4*t13113*t13122 + t13129 + t13130 + t13133 + t13141 + t13142 + t13145 + t13426 + t13434 + 6.4*Power(t9745,2))*var2[1] - 0.5*t13451*var2[2] - 0.5*t13417*var2[3] - 0.384*t13088*var2[4] - 0.5*t13423*var2[5] - 0.384*t13119*var2[6]);
  p_output1[13]=var2[2]*(t13455 - 0.5*t13219*var2[0] - 0.5*(t13129 + t13130 + t13133 + t13426 + t13460 + t13461 + t13462 + t13463)*var2[1] - 0.5*t13471*var2[2] - 0.5*t13458*var2[3]);
  p_output1[14]=var2[2]*(t13455 - 0.5*t13258*var2[0] - 0.5*(t13460 + t13461 + t13462 + t13463)*var2[1] - 0.5*t13484*var2[2] - 0.5*t13477*var2[3]);
  p_output1[15]=var2[2]*(t13488 - 0.5*t13298*var2[0] - 0.5*(t13141 + t13142 + t13145 + t13434 + t13493 + t13494 + t13495 + t13496)*var2[1] - 0.5*t13504*var2[2] - 0.5*t13491*var2[5]);
  p_output1[16]=var2[2]*(t13488 - 0.5*t13337*var2[0] - 0.5*(t13493 + t13494 + t13495 + t13496)*var2[1] - 0.5*t13517*var2[2] - 0.5*t13510*var2[5]);
  p_output1[17]=t13384;
  p_output1[18]=-0.5*t13527*var2[2];
  p_output1[19]=t10194 + t12949 + t12983 + t13055 - 0.5*t13383*var2[0] - 0.5*t13527*var2[1] - 1.*t13195*var2[2];
  p_output1[20]=t13533;
  p_output1[21]=t13534;
  p_output1[22]=t13535;
  p_output1[23]=t13536;
  p_output1[24]=(-0.5*t13195*var2[0] - 0.5*t13451*var2[1])*var2[2];
  p_output1[25]=(-0.5*t13244*var2[0] - 0.5*t13471*var2[1])*var2[2];
  p_output1[26]=(-0.5*t13274*var2[0] - 0.5*t13484*var2[1])*var2[2];
  p_output1[27]=(-0.5*t13323*var2[0] - 0.5*t13504*var2[1])*var2[2];
  p_output1[28]=(-0.5*t13353*var2[0] - 0.5*t13517*var2[1])*var2[2];
  p_output1[29]=-0.5*t13406*var2[2];
  p_output1[30]=t13196;
  p_output1[31]=-0.5*t13406*var2[0] - 0.5*t13195*var2[1];
  p_output1[32]=(-0.5*t12926*var2[0] - 0.5*t13417*var2[1])*var2[2];
  p_output1[33]=(-0.5*t13207*var2[0] - 0.5*t13458*var2[1])*var2[2];
  p_output1[34]=(-0.5*t13256*var2[0] - 0.5*t13477*var2[1])*var2[2];
  p_output1[35]=t13409;
  p_output1[36]=t13533;
  p_output1[37]=-0.5*t13389*var2[0] - 0.5*t12926*var2[1];
  p_output1[38]=(-0.384*t9745*var2[0] - 0.384*t13088*var2[1])*var2[2];
  p_output1[39]=t13583;
  p_output1[40]=t13583;
  p_output1[41]=t13410;
  p_output1[42]=t13534;
  p_output1[43]=-0.384*t13078*var2[0] - 0.384*t9745*var2[1];
  p_output1[44]=(-0.5*t13054*var2[0] - 0.5*t13423*var2[1])*var2[2];
  p_output1[45]=(-0.5*t13286*var2[0] - 0.5*t13491*var2[1])*var2[2];
  p_output1[46]=(-0.5*t13335*var2[0] - 0.5*t13510*var2[1])*var2[2];
  p_output1[47]=t13411;
  p_output1[48]=t13535;
  p_output1[49]=-0.5*t13395*var2[0] - 0.5*t13054*var2[1];
  p_output1[50]=(-0.384*t12982*var2[0] - 0.384*t13119*var2[1])*var2[2];
  p_output1[51]=t13609;
  p_output1[52]=t13609;
  p_output1[53]=t13412;
  p_output1[54]=t13536;
  p_output1[55]=-0.384*t13109*var2[0] - 0.384*t12982*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 56, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec3_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
