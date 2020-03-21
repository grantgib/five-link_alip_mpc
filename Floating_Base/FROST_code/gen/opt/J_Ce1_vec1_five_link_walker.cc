/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:17 GMT-04:00
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
  double t348;
  double t213;
  double t281;
  double t925;
  double t208;
  double t946;
  double t951;
  double t952;
  double t954;
  double t955;
  double t287;
  double t926;
  double t932;
  double t962;
  double t978;
  double t979;
  double t945;
  double t956;
  double t991;
  double t1007;
  double t1008;
  double t1014;
  double t1015;
  double t1016;
  double t1026;
  double t1027;
  double t1031;
  double t1038;
  double t1039;
  double t1042;
  double t980;
  double t988;
  double t990;
  double t1009;
  double t1010;
  double t1011;
  double t1012;
  double t1013;
  double t1018;
  double t1019;
  double t1020;
  double t1021;
  double t1022;
  double t1023;
  double t1032;
  double t1033;
  double t1034;
  double t1035;
  double t1036;
  double t1037;
  double t1043;
  double t1044;
  double t1046;
  double t1047;
  double t1048;
  double t1057;
  double t1087;
  double t1088;
  double t1089;
  double t1090;
  double t1091;
  double t1116;
  double t1117;
  double t3083;
  double t4149;
  double t4327;
  double t4228;
  double t4382;
  double t4510;
  double t4572;
  double t4761;
  double t4921;
  double t4961;
  double t4965;
  double t4966;
  double t4969;
  double t4997;
  double t4959;
  double t4962;
  double t4970;
  double t4971;
  double t4996;
  double t5054;
  double t5067;
  double t5068;
  double t5087;
  double t4546;
  double t5096;
  double t5097;
  double t5098;
  double t1092;
  double t1093;
  double t1098;
  double t1100;
  double t1113;
  double t1114;
  double t3118;
  double t3261;
  double t3264;
  double t3287;
  double t3640;
  double t4083;
  double t5094;
  double t5095;
  double t5099;
  double t5105;
  double t5106;
  double t5108;
  double t5109;
  double t5110;
  double t1058;
  double t5124;
  double t5125;
  double t5126;
  double t5127;
  double t5128;
  double t5131;
  double t5132;
  double t5133;
  double t1024;
  double t5134;
  double t5135;
  double t5116;
  double t5146;
  double t5147;
  double t5148;
  double t5149;
  double t5150;
  double t5151;
  double t5152;
  double t5153;
  double t5113;
  double t5154;
  double t5155;
  double t5166;
  double t5167;
  double t5171;
  double t5172;
  double t5177;
  double t5178;
  double t5185;
  double t5186;
  double t5175;
  double t5176;
  double t5179;
  double t5181;
  double t5182;
  double t5173;
  double t5168;
  double t5189;
  double t5187;
  double t1083;
  double t1084;
  double t1060;
  double t1061;
  double t5198;
  double t5199;
  double t5200;
  double t5201;
  double t5202;
  double t5203;
  double t5204;
  double t5205;
  double t5206;
  double t5209;
  double t5210;
  double t5211;
  double t5212;
  double t4922;
  double t4958;
  double t5064;
  double t5065;
  double t5232;
  double t5224;
  double t5227;
  double t5228;
  double t5229;
  double t5245;
  double t5246;
  double t5247;
  double t5248;
  double t5249;
  double t5250;
  double t5251;
  double t5252;
  double t5213;
  double t5261;
  double t5262;
  double t5263;
  double t5264;
  double t5265;
  double t5267;
  double t5207;
  double t5268;
  double t5269;
  double t5256;
  double t5280;
  double t5281;
  double t5283;
  double t5286;
  double t5287;
  double t5288;
  double t5254;
  double t5289;
  double t5290;
  double t5300;
  double t5302;
  double t5303;
  double t5304;
  double t5308;
  double t5309;
  double t5310;
  double t5311;
  double t1071;
  double t1073;
  double t4972;
  double t5061;
  double t5320;
  double t5321;
  double t5322;
  double t5323;
  double t5330;
  double t5331;
  double t5335;
  double t5336;
  double t5316;
  double t5317;
  double t5318;
  double t5319;
  double t5324;
  double t5325;
  double t5326;
  double t5327;
  double t5328;
  double t5314;
  double t5305;
  double t5339;
  double t5337;
  double t5357;
  double t5358;
  double t5360;
  double t5361;
  double t5365;
  double t5366;
  double t5367;
  double t5368;
  double t5370;
  double t5371;
  double t5372;
  double t5378;
  double t5379;
  double t5380;
  double t5369;
  double t5375;
  double t5376;
  double t5377;
  double t5382;
  double t5383;
  double t5388;
  double t5389;
  double t5390;
  double t5393;
  double t5402;
  double t5403;
  double t5395;
  double t5405;
  double t5407;
  double t5397;
  double t5351;
  double t5352;
  double t5353;
  double t5354;
  double t5355;
  double t5356;
  double t5433;
  double t5435;
  double t5436;
  double t5437;
  double t5438;
  double t5439;
  double t5440;
  double t5444;
  double t5446;
  double t5447;
  double t5448;
  double t5424;
  double t5428;
  double t5429;
  double t5430;
  double t5431;
  double t5432;
  double t5445;
  double t5449;
  double t5450;
  double t5452;
  double t5454;
  double t5455;
  double t5460;
  double t5462;
  double t5464;
  double t5459;
  double t5466;
  double t5467;
  double t5471;
  double t5487;
  double t5488;
  double t5474;
  double t5490;
  double t5491;
  double t5476;
  double t5381;
  double t5384;
  double t5385;
  double t5387;
  double t5394;
  double t5396;
  double t5398;
  double t5399;
  double t5400;
  double t5534;
  double t5535;
  double t5536;
  double t5510;
  double t5520;
  double t5404;
  double t5408;
  double t5409;
  double t5533;
  double t5542;
  double t5414;
  double t5415;
  double t5416;
  double t5548;
  double t5576;
  double t5577;
  double t5556;
  double t5410;
  double t5417;
  double t5418;
  double t5564;
  double t5569;
  double t5571;
  double t5575;
  double t5578;
  double t5580;
  double t5581;
  double t5582;
  double t5583;
  double t5587;
  double t5588;
  double t5589;
  double t5590;
  double t5591;
  double t5595;
  double t5596;
  double t5597;
  double t5602;
  double t5603;
  double t5465;
  double t5468;
  double t5469;
  double t5470;
  double t5473;
  double t5475;
  double t5479;
  double t5480;
  double t5481;
  double t8225;
  double t8226;
  double t8244;
  double t7933;
  double t7960;
  double t5489;
  double t5492;
  double t5496;
  double t8159;
  double t8372;
  double t5498;
  double t5499;
  double t5501;
  double t8401;
  double t11558;
  double t11629;
  double t8489;
  double t5497;
  double t5502;
  double t5503;
  double t9709;
  double t9836;
  double t11548;
  double t11550;
  double t11640;
  double t11641;
  double t11650;
  double t11656;
  double t11662;
  double t11670;
  double t11671;
  double t11676;
  double t11690;
  double t11693;
  double t11694;
  double t11697;
  double t11700;
  double t11706;
  double t11707;
  double t11788;
  double t11798;
  double t11780;
  double t11834;
  double t11846;
  double t11852;
  double t11826;
  double t11828;
  double t11833;
  double t11837;
  double t11838;
  double t11841;
  double t11792;
  double t11799;
  double t11808;
  double t11818;
  double t11819;
  double t11823;
  double t11851;
  double t11853;
  double t11854;
  double t11866;
  double t11876;
  double t11877;
  double t11897;
  double t11912;
  double t11916;
  double t11917;
  double t11899;
  double t11904;
  double t11905;
  double t11908;
  double t11925;
  double t11936;
  double t11937;
  double t11948;
  double t11949;
  double t11950;
  double t11976;
  double t11977;
  double t11954;
  double t11957;
  double t11965;
  double t11951;
  double t11966;
  double t11971;
  double t11980;
  double t11981;
  double t11982;
  double t12040;
  double t12050;
  double t12051;
  double t12041;
  double t12045;
  double t12046;
  double t12057;
  double t12062;
  double t12063;
  double t12064;
  double t12091;
  double t12092;
  double t12093;
  double t12094;
  double t12098;
  double t12106;
  double t12110;
  double t12116;
  double t12117;
  double t12118;
  double t12111;
  double t12112;
  double t12113;
  double t12114;
  double t12127;
  double t12128;
  double t12129;
  double t12131;
  double t12132;
  double t12136;
  double t12152;
  double t12153;
  double t12138;
  double t12139;
  double t12140;
  double t12137;
  double t12141;
  double t12142;
  double t12156;
  double t12157;
  double t12158;
  double t12187;
  double t12192;
  double t12193;
  double t12188;
  double t12189;
  double t12190;
  double t12194;
  double t12196;
  double t12197;
  double t12198;
  double t12213;
  double t12214;
  double t12215;
  double t12216;
  double t12217;
  double t12223;
  t348 = Cos(var1[3]);
  t213 = Cos(var1[4]);
  t281 = Sin(var1[3]);
  t925 = Sin(var1[4]);
  t208 = Sin(var1[2]);
  t946 = Cos(var1[2]);
  t951 = t348*t213;
  t952 = -1.*t281*t925;
  t954 = t951 + t952;
  t955 = t946*t954;
  t287 = -1.*t213*t281;
  t926 = -1.*t348*t925;
  t932 = t287 + t926;
  t962 = t213*t281;
  t978 = t348*t925;
  t979 = t962 + t978;
  t945 = t208*t932;
  t956 = t945 + t955;
  t991 = t946*t932;
  t1007 = -1.*t208*t954;
  t1008 = t991 + t1007;
  t1014 = -1.*t348*t213;
  t1015 = t281*t925;
  t1016 = t1014 + t1015;
  t1026 = -1.*t348*t208;
  t1027 = -1.*t946*t281;
  t1031 = t1026 + t1027;
  t1038 = t946*t348;
  t1039 = -1.*t208*t281;
  t1042 = t1038 + t1039;
  t980 = -1.*t208*t979;
  t988 = t980 + t955;
  t990 = 6.4*t956*t988;
  t1009 = t946*t979;
  t1010 = t208*t954;
  t1011 = t1009 + t1010;
  t1012 = 6.4*t1008*t1011;
  t1013 = -1.*t208*t932;
  t1018 = t946*t1016;
  t1019 = t1013 + t1018;
  t1020 = 6.4*t956*t1019;
  t1021 = t208*t1016;
  t1022 = t991 + t1021;
  t1023 = 6.4*t1008*t1022;
  t1032 = Power(t1031,2);
  t1033 = 13.6*t1032;
  t1034 = t348*t208;
  t1035 = t946*t281;
  t1036 = t1034 + t1035;
  t1037 = 13.6*t1031*t1036;
  t1043 = Power(t1042,2);
  t1044 = 13.6*t1043;
  t1046 = -1.*t946*t348;
  t1047 = t208*t281;
  t1048 = t1046 + t1047;
  t1057 = 13.6*t1042*t1048;
  t1087 = Cos(var1[5]);
  t1088 = -1.*t1087*t208;
  t1089 = Sin(var1[5]);
  t1090 = -1.*t946*t1089;
  t1091 = t1088 + t1090;
  t1116 = t946*t1087;
  t1117 = -1.*t208*t1089;
  t3083 = t1116 + t1117;
  t4149 = Cos(var1[6]);
  t4327 = Sin(var1[6]);
  t4228 = -1.*t4149*t1089;
  t4382 = -1.*t1087*t4327;
  t4510 = t4228 + t4382;
  t4572 = t1087*t4149;
  t4761 = -1.*t1089*t4327;
  t4921 = t4572 + t4761;
  t4961 = t946*t4921;
  t4965 = t4149*t1089;
  t4966 = t1087*t4327;
  t4969 = t4965 + t4966;
  t4997 = -1.*t208*t4921;
  t4959 = t208*t4510;
  t4962 = t4959 + t4961;
  t4970 = -1.*t208*t4969;
  t4971 = t4970 + t4961;
  t4996 = t946*t4510;
  t5054 = t4996 + t4997;
  t5067 = t946*t4969;
  t5068 = t208*t4921;
  t5087 = t5067 + t5068;
  t4546 = -1.*t208*t4510;
  t5096 = -1.*t1087*t4149;
  t5097 = t1089*t4327;
  t5098 = t5096 + t5097;
  t1092 = Power(t1091,2);
  t1093 = 13.6*t1092;
  t1098 = t1087*t208;
  t1100 = t946*t1089;
  t1113 = t1098 + t1100;
  t1114 = 13.6*t1091*t1113;
  t3118 = Power(t3083,2);
  t3261 = 13.6*t3118;
  t3264 = -1.*t946*t1087;
  t3287 = t208*t1089;
  t3640 = t3264 + t3287;
  t4083 = 13.6*t3083*t3640;
  t5094 = 6.4*t4962*t4971;
  t5095 = 6.4*t5054*t5087;
  t5099 = t946*t5098;
  t5105 = t4546 + t5099;
  t5106 = 6.4*t4962*t5105;
  t5108 = t208*t5098;
  t5109 = t4996 + t5108;
  t5110 = 6.4*t5054*t5109;
  t1058 = t1033 + t1037 + t1044 + t1057 + t990 + t1012 + t1020 + t1023;
  t5124 = Power(t956,2);
  t5125 = 6.4*t5124;
  t5126 = t208*t979;
  t5127 = t5126 + t1018;
  t5128 = 6.4*t956*t5127;
  t5131 = 6.4*t1011*t1022;
  t5132 = Power(t1022,2);
  t5133 = 6.4*t5132;
  t1024 = t990 + t1012 + t1020 + t1023;
  t5134 = t5125 + t5128 + t5131 + t5133;
  t5135 = -0.5*var2[4]*t5134;
  t5116 = t1093 + t1114 + t3261 + t4083 + t5094 + t5095 + t5106 + t5110;
  t5146 = Power(t4962,2);
  t5147 = 6.4*t5146;
  t5148 = t208*t4969;
  t5149 = t5148 + t5099;
  t5150 = 6.4*t4962*t5149;
  t5151 = 6.4*t5087*t5109;
  t5152 = Power(t5109,2);
  t5153 = 6.4*t5152;
  t5113 = t5094 + t5095 + t5106 + t5110;
  t5154 = t5147 + t5150 + t5151 + t5153;
  t5155 = -0.5*var2[6]*t5154;
  t5166 = 6.4*t956*t1011;
  t5167 = 6.4*t956*t1022;
  t5171 = 13.6*t1031*t1042;
  t5172 = 13.6*t1036*t1042;
  t5177 = 13.6*t1091*t3083;
  t5178 = 13.6*t1113*t3083;
  t5185 = 6.4*t4962*t5087;
  t5186 = 6.4*t4962*t5109;
  t5175 = 6.4*t956*t1008;
  t5176 = 6.4*t988*t1011;
  t5179 = 6.4*t4962*t5054;
  t5181 = 6.4*t4971*t5087;
  t5182 = t5171 + t5172 + t5175 + t5176 + t5177 + t5178 + t5179 + t5181;
  t5173 = t5171 + t5172 + t5166 + t5167;
  t5168 = t5166 + t5167;
  t5189 = t5177 + t5178 + t5185 + t5186;
  t5187 = t5185 + t5186;
  t1083 = -1.*t946*t979;
  t1084 = t1083 + t1007;
  t1060 = -1.*t946*t954;
  t1061 = t1013 + t1060;
  t5198 = 6.4*t988*t1008;
  t5199 = 3.2*t956*t1084;
  t5200 = 3.2*t1061*t1011;
  t5201 = 6.4*t1008*t1019;
  t5202 = -1.*t946*t932;
  t5203 = -1.*t208*t1016;
  t5204 = t5202 + t5203;
  t5205 = 3.2*t956*t5204;
  t5206 = 3.2*t1061*t1022;
  t5209 = 20.4*t1031*t1042;
  t5210 = 6.8*t1036*t1042;
  t5211 = 20.4*t1031*t1048;
  t5212 = 6.8*t1036*t1048;
  t4922 = -1.*t946*t4921;
  t4958 = t4546 + t4922;
  t5064 = -1.*t946*t4969;
  t5065 = t5064 + t4997;
  t5232 = -1.*t946*t4510;
  t5224 = 20.4*t1091*t3083;
  t5227 = 6.8*t1113*t3083;
  t5228 = 20.4*t1091*t3640;
  t5229 = 6.8*t1113*t3640;
  t5245 = 6.4*t4971*t5054;
  t5246 = 3.2*t4962*t5065;
  t5247 = 3.2*t4958*t5087;
  t5248 = 6.4*t5054*t5105;
  t5249 = -1.*t208*t5098;
  t5250 = t5232 + t5249;
  t5251 = 3.2*t4962*t5250;
  t5252 = 3.2*t4958*t5109;
  t5213 = t5209 + t5210 + t5211 + t5212 + t5198 + t5199 + t5200 + t5201 + t5205 + t5206;
  t5261 = 3.2*t1011*t1019;
  t5262 = 3.2*t1008*t5127;
  t5263 = t1009 + t5203;
  t5264 = 3.2*t956*t5263;
  t5265 = 3.2*t988*t1022;
  t5267 = 6.4*t1019*t1022;
  t5207 = t5198 + t5199 + t5200 + t5201 + t5205 + t5206;
  t5268 = t5175 + t5261 + t5262 + t5264 + t5265 + t5267;
  t5269 = -0.5*var2[4]*t5268;
  t5256 = t5224 + t5227 + t5228 + t5229 + t5245 + t5246 + t5247 + t5248 + t5251 + t5252;
  t5280 = 3.2*t5087*t5105;
  t5281 = 3.2*t5054*t5149;
  t5283 = t5067 + t5249;
  t5286 = 3.2*t4962*t5283;
  t5287 = 3.2*t4971*t5109;
  t5288 = 6.4*t5105*t5109;
  t5254 = t5245 + t5246 + t5247 + t5248 + t5251 + t5252;
  t5289 = t5179 + t5280 + t5281 + t5286 + t5287 + t5288;
  t5290 = -0.5*var2[6]*t5289;
  t5300 = 3.2*t956*t988;
  t5302 = 3.2*t1008*t1011;
  t5303 = 3.2*t956*t1019;
  t5304 = 3.2*t1008*t1022;
  t5308 = 6.8*t1032;
  t5309 = 6.8*t1031*t1036;
  t5310 = 6.8*t1043;
  t5311 = 6.8*t1042*t1048;
  t1071 = Power(t988,2);
  t1073 = Power(t1008,2);
  t4972 = Power(t4971,2);
  t5061 = Power(t5054,2);
  t5320 = 6.8*t1092;
  t5321 = 6.8*t1091*t1113;
  t5322 = 6.8*t3118;
  t5323 = 6.8*t3083*t3640;
  t5330 = 3.2*t4962*t4971;
  t5331 = 3.2*t5054*t5087;
  t5335 = 3.2*t4962*t5105;
  t5336 = 3.2*t5054*t5109;
  t5316 = 3.2*t1061*t956;
  t5317 = 3.2*t1071;
  t5318 = 3.2*t1073;
  t5319 = 3.2*t1084*t1011;
  t5324 = 3.2*t4958*t4962;
  t5325 = 3.2*t4972;
  t5326 = 3.2*t5061;
  t5327 = 3.2*t5065*t5087;
  t5328 = t5308 + t5309 + t5310 + t5311 + t5316 + t5317 + t5318 + t5319 + t5320 + t5321 + t5322 + t5323 + t5324 + t5325 + t5326 + t5327;
  t5314 = t5308 + t5309 + t5310 + t5311 + t5300 + t5302 + t5303 + t5304;
  t5305 = t5300 + t5302 + t5303 + t5304;
  t5339 = t5320 + t5321 + t5322 + t5323 + t5330 + t5331 + t5335 + t5336;
  t5337 = t5330 + t5331 + t5335 + t5336;
  t5357 = -1.*t213;
  t5358 = 1. + t5357;
  t5360 = 0.4*t5358;
  t5361 = 0.64*t213;
  t5365 = t5360 + t5361;
  t5366 = t5365*t281;
  t5367 = 0.24*t348*t925;
  t5368 = t5366 + t5367;
  t5370 = t348*t5365;
  t5371 = -0.24*t281*t925;
  t5372 = t5370 + t5371;
  t5378 = -1.*t5365*t281;
  t5379 = -0.24*t348*t925;
  t5380 = t5378 + t5379;
  t5369 = -1.*t5368*t954;
  t5375 = -1.*t932*t5372;
  t5376 = t5369 + t5375;
  t5377 = 3.2*t1008*t5376;
  t5382 = t5368*t954;
  t5383 = t932*t5372;
  t5388 = t5368*t979;
  t5389 = t954*t5372;
  t5390 = t5388 + t5389;
  t5393 = 3.2*t5390*t1019;
  t5402 = -0.24*t213*t281;
  t5403 = t5402 + t5379;
  t5395 = -1.*t932*t5368;
  t5405 = 0.24*t348*t213;
  t5407 = t5405 + t5371;
  t5397 = -1.*t5372*t1016;
  t5351 = Power(t348,2);
  t5352 = 0.11*t5351;
  t5353 = Power(t281,2);
  t5354 = 0.11*t5353;
  t5355 = t5352 + t5354;
  t5356 = 6.8*t1048*t5355;
  t5433 = -1.*t4149;
  t5435 = 1. + t5433;
  t5436 = 0.4*t5435;
  t5437 = 0.64*t4149;
  t5438 = t5436 + t5437;
  t5439 = t5438*t1089;
  t5440 = 0.24*t1087*t4327;
  t5444 = t5439 + t5440;
  t5446 = t1087*t5438;
  t5447 = -0.24*t1089*t4327;
  t5448 = t5446 + t5447;
  t5424 = Power(t1087,2);
  t5428 = 0.11*t5424;
  t5429 = Power(t1089,2);
  t5430 = 0.11*t5429;
  t5431 = t5428 + t5430;
  t5432 = 6.8*t3640*t5431;
  t5445 = -1.*t5444*t4921;
  t5449 = -1.*t4510*t5448;
  t5450 = t5445 + t5449;
  t5452 = t5444*t4969;
  t5454 = t4921*t5448;
  t5455 = t5452 + t5454;
  t5460 = -1.*t5438*t1089;
  t5462 = -0.24*t1087*t4327;
  t5464 = t5460 + t5462;
  t5459 = 3.2*t5054*t5450;
  t5466 = t5444*t4921;
  t5467 = t4510*t5448;
  t5471 = 3.2*t5455*t5105;
  t5487 = -0.24*t4149*t1089;
  t5488 = t5487 + t5462;
  t5474 = -1.*t4510*t5444;
  t5490 = 0.24*t1087*t4149;
  t5491 = t5490 + t5447;
  t5476 = -1.*t5448*t5098;
  t5381 = t5380*t954;
  t5384 = t979*t5372;
  t5385 = t5381 + t5382 + t5383 + t5384;
  t5387 = 3.2*t1008*t5385;
  t5394 = -1.*t932*t5380;
  t5396 = -1.*t954*t5372;
  t5398 = t5394 + t5395 + t5396 + t5397;
  t5399 = 3.2*t988*t5398;
  t5400 = t5356 + t5377 + t5387 + t5393 + t5399;
  t5534 = -1.*t348*t5365;
  t5535 = 0.24*t281*t925;
  t5536 = t5534 + t5535;
  t5510 = 3.2*t5390*t5127;
  t5520 = 3.2*t5376*t1022;
  t5404 = t5403*t954;
  t5408 = t979*t5407;
  t5409 = t5404 + t5382 + t5383 + t5408;
  t5533 = -1.*t979*t5372;
  t5542 = -1.*t5368*t1016;
  t5414 = -1.*t932*t5403;
  t5415 = -1.*t954*t5407;
  t5416 = t5414 + t5395 + t5415 + t5397;
  t5548 = t932*t5368;
  t5576 = -0.24*t348*t213;
  t5577 = t5576 + t5535;
  t5556 = t5372*t1016;
  t5410 = 3.2*t1008*t5409;
  t5417 = 3.2*t988*t5416;
  t5418 = t5377 + t5410 + t5393 + t5417;
  t5564 = 3.2*t5385*t1022;
  t5569 = 3.2*t5409*t1022;
  t5571 = -1.*t5403*t954;
  t5575 = -1.*t932*t5407;
  t5578 = -1.*t932*t5577;
  t5580 = -1.*t5380*t1016;
  t5581 = -1.*t5403*t1016;
  t5582 = t5571 + t5375 + t5533 + t5575 + t5578 + t5580 + t5581 + t5542;
  t5583 = 3.2*t1011*t5582;
  t5587 = 3.2*t956*t5398;
  t5588 = 3.2*t956*t5416;
  t5589 = t932*t5380;
  t5590 = t932*t5403;
  t5591 = t5403*t979;
  t5595 = t954*t5407;
  t5596 = t954*t5577;
  t5597 = t5589 + t5590 + t5548 + t5591 + t5389 + t5595 + t5596 + t5556;
  t5602 = 3.2*t956*t5597;
  t5603 = t5510 + t5520 + t5564 + t5569 + t5583 + t5587 + t5588 + t5602;
  t5465 = t5464*t4921;
  t5468 = t4969*t5448;
  t5469 = t5465 + t5466 + t5467 + t5468;
  t5470 = 3.2*t5054*t5469;
  t5473 = -1.*t4510*t5464;
  t5475 = -1.*t4921*t5448;
  t5479 = t5473 + t5474 + t5475 + t5476;
  t5480 = 3.2*t4971*t5479;
  t5481 = t5432 + t5459 + t5470 + t5471 + t5480;
  t8225 = -1.*t1087*t5438;
  t8226 = 0.24*t1089*t4327;
  t8244 = t8225 + t8226;
  t7933 = 3.2*t5455*t5149;
  t7960 = 3.2*t5450*t5109;
  t5489 = t5488*t4921;
  t5492 = t4969*t5491;
  t5496 = t5489 + t5466 + t5467 + t5492;
  t8159 = -1.*t4969*t5448;
  t8372 = -1.*t5444*t5098;
  t5498 = -1.*t4510*t5488;
  t5499 = -1.*t4921*t5491;
  t5501 = t5498 + t5474 + t5499 + t5476;
  t8401 = t4510*t5444;
  t11558 = -0.24*t1087*t4149;
  t11629 = t11558 + t8226;
  t8489 = t5448*t5098;
  t5497 = 3.2*t5054*t5496;
  t5502 = 3.2*t4971*t5501;
  t5503 = t5459 + t5497 + t5471 + t5502;
  t9709 = 3.2*t5469*t5109;
  t9836 = 3.2*t5496*t5109;
  t11548 = -1.*t5488*t4921;
  t11550 = -1.*t4510*t5491;
  t11640 = -1.*t4510*t11629;
  t11641 = -1.*t5464*t5098;
  t11650 = -1.*t5488*t5098;
  t11656 = t11548 + t5449 + t8159 + t11550 + t11640 + t11641 + t11650 + t8372;
  t11662 = 3.2*t5087*t11656;
  t11670 = 3.2*t4962*t5479;
  t11671 = 3.2*t4962*t5501;
  t11676 = t4510*t5464;
  t11690 = t4510*t5488;
  t11693 = t5488*t4969;
  t11694 = t4921*t5491;
  t11697 = t4921*t11629;
  t11700 = t11676 + t11690 + t8401 + t11693 + t5454 + t11694 + t11697 + t8489;
  t11706 = 3.2*t4962*t11700;
  t11707 = t7933 + t7960 + t9709 + t9836 + t11662 + t11670 + t11671 + t11706;
  t11788 = 3.2*t956*t5376;
  t11798 = 3.2*t5390*t1022;
  t11780 = 6.8*t1031*t5355;
  t11834 = 6.8*t1091*t5431;
  t11846 = 3.2*t4962*t5450;
  t11852 = 3.2*t5455*t5109;
  t11826 = -2.88*t208;
  t11828 = 3.2*t988*t5376;
  t11833 = 3.2*t1008*t5390;
  t11837 = 3.2*t4971*t5450;
  t11838 = 3.2*t5054*t5455;
  t11841 = t11826 + t11780 + t11828 + t11833 + t11834 + t11837 + t11838;
  t11792 = 3.2*t956*t5385;
  t11799 = 3.2*t1011*t5398;
  t11808 = t11780 + t11788 + t11792 + t11798 + t11799;
  t11818 = 3.2*t956*t5409;
  t11819 = 3.2*t1011*t5416;
  t11823 = t11788 + t11818 + t11798 + t11819;
  t11851 = 3.2*t4962*t5469;
  t11853 = 3.2*t5087*t5479;
  t11854 = t11834 + t11846 + t11851 + t11852 + t11853;
  t11866 = 3.2*t4962*t5496;
  t11876 = 3.2*t5087*t5501;
  t11877 = t11846 + t11866 + t11852 + t11876;
  t11897 = 0.748*t1048;
  t11912 = t5365*t925;
  t11916 = -0.24*t213*t925;
  t11917 = t11912 + t11916;
  t11899 = t5365*t213;
  t11904 = Power(t925,2);
  t11905 = 0.24*t11904;
  t11908 = t11899 + t11905;
  t11925 = 3.2*t11917*t1008;
  t11936 = 3.2*t11908*t1019;
  t11937 = t11897 + t11925 + t11936;
  t11948 = Power(t213,2);
  t11949 = -0.24*t11948;
  t11950 = t11899 + t11949;
  t11976 = 3.2*t11908*t5127;
  t11977 = 3.2*t11917*t1022;
  t11954 = -1.*t5365*t925;
  t11957 = 0.24*t213*t925;
  t11965 = t11954 + t11957;
  t11951 = 3.2*t11950*t988;
  t11966 = 3.2*t11965*t1008;
  t11971 = t11951 + t11925 + t11966 + t11936;
  t11980 = 3.2*t11950*t956;
  t11981 = 3.2*t11965*t1022;
  t11982 = t11980 + t11976 + t11977 + t11981;
  t12040 = 0.748*t1031;
  t12050 = 3.2*t11917*t956;
  t12051 = 3.2*t11908*t1022;
  t12041 = 3.2*t11917*t988;
  t12045 = 3.2*t11908*t1008;
  t12046 = t12040 + t12041 + t12045;
  t12057 = t12040 + t12050 + t12051;
  t12062 = 3.2*t11965*t956;
  t12063 = 3.2*t11950*t1011;
  t12064 = t12050 + t12062 + t12063 + t12051;
  t12091 = -0.384*var2[2]*t1019;
  t12092 = -0.384*var2[3]*t5127;
  t12093 = -0.384*var2[4]*t5127;
  t12094 = t12091 + t12092 + t12093;
  t12098 = var2[0]*t12094;
  t12106 = -0.384*var2[0]*t1022;
  t12110 = 0.748*t3640;
  t12116 = t5438*t4327;
  t12117 = -0.24*t4149*t4327;
  t12118 = t12116 + t12117;
  t12111 = t5438*t4149;
  t12112 = Power(t4327,2);
  t12113 = 0.24*t12112;
  t12114 = t12111 + t12113;
  t12127 = 3.2*t12118*t5054;
  t12128 = 3.2*t12114*t5105;
  t12129 = t12110 + t12127 + t12128;
  t12131 = Power(t4149,2);
  t12132 = -0.24*t12131;
  t12136 = t12111 + t12132;
  t12152 = 3.2*t12114*t5149;
  t12153 = 3.2*t12118*t5109;
  t12138 = -1.*t5438*t4327;
  t12139 = 0.24*t4149*t4327;
  t12140 = t12138 + t12139;
  t12137 = 3.2*t12136*t4971;
  t12141 = 3.2*t12140*t5054;
  t12142 = t12137 + t12127 + t12141 + t12128;
  t12156 = 3.2*t12136*t4962;
  t12157 = 3.2*t12140*t5109;
  t12158 = t12156 + t12152 + t12153 + t12157;
  t12187 = 0.748*t1091;
  t12192 = 3.2*t12118*t4962;
  t12193 = 3.2*t12114*t5109;
  t12188 = 3.2*t12118*t4971;
  t12189 = 3.2*t12114*t5054;
  t12190 = t12187 + t12188 + t12189;
  t12194 = t12187 + t12192 + t12193;
  t12196 = 3.2*t12140*t4962;
  t12197 = 3.2*t12136*t5087;
  t12198 = t12192 + t12196 + t12197 + t12193;
  t12213 = -0.384*var2[2]*t5105;
  t12214 = -0.384*var2[5]*t5149;
  t12215 = -0.384*var2[6]*t5149;
  t12216 = t12213 + t12214 + t12215;
  t12217 = var2[0]*t12216;
  t12223 = -0.384*var2[0]*t5109;
  p_output1[0]=var2[0]*(-0.5*(t1033 + t1037 + t1044 + t1057 + 6.4*t1071 + 6.4*t1073 + 6.4*t1011*t1084 + t1093 + t1114 + t3261 + t4083 + 6.4*t4958*t4962 + 6.4*t4972 + 6.4*t5061 + 6.4*t5065*t5087 + 6.4*t1061*t956)*var2[2] - 0.5*t1058*var2[3] - 0.5*t1024*var2[4] - 0.5*t5116*var2[5] - 0.5*t5113*var2[6]);
  p_output1[1]=var2[0]*(t5135 - 0.5*t1058*var2[2] - 0.5*(t1033 + t1037 + t1044 + t1057 + t5125 + t5128 + t5131 + t5133)*var2[3]);
  p_output1[2]=var2[0]*(t5135 - 0.5*t1024*var2[2] - 0.5*t5134*var2[3]);
  p_output1[3]=var2[0]*(t5155 - 0.5*t5116*var2[2] - 0.5*(t1093 + t1114 + t3261 + t4083 + t5147 + t5150 + t5151 + t5153)*var2[5]);
  p_output1[4]=var2[0]*(t5155 - 0.5*t5113*var2[2] - 0.5*t5154*var2[5]);
  p_output1[5]=-0.5*t5182*var2[2] - 0.5*t5173*var2[3] - 0.5*t5168*var2[4] - 0.5*t5189*var2[5] - 0.5*t5187*var2[6];
  p_output1[6]=-0.5*t5182*var2[0];
  p_output1[7]=-0.5*t5173*var2[0];
  p_output1[8]=-0.5*t5168*var2[0];
  p_output1[9]=-0.5*t5189*var2[0];
  p_output1[10]=-0.5*t5187*var2[0];
  p_output1[11]=var2[0]*(-0.5*(9.6*t1008*t1061 + 9.6*t4958*t5054 + 9.6*t4971*t5065 + 3.2*t1011*(t1060 + t5126) + 3.2*t5087*(t4922 + t5148) + t5209 + t5210 + t5211 + t5212 + t5224 + t5227 + t5228 + t5229 + 3.2*t4962*(t5068 + t5232) + 3.2*(t1010 + t5202)*t956 + 9.6*t1084*t988)*var2[2] - 0.5*t5213*var2[3] - 0.5*t5207*var2[4] - 0.5*t5256*var2[5] - 0.5*t5254*var2[6]);
  p_output1[12]=var2[0]*(t5269 - 0.5*t5213*var2[2] - 0.5*(t5175 + t5209 + t5210 + t5211 + t5212 + t5261 + t5262 + t5264 + t5265 + t5267)*var2[3]);
  p_output1[13]=var2[0]*(t5269 - 0.5*t5207*var2[2] - 0.5*t5268*var2[3]);
  p_output1[14]=var2[0]*(t5290 - 0.5*t5256*var2[2] - 0.5*(t5179 + t5224 + t5227 + t5228 + t5229 + t5280 + t5281 + t5286 + t5287 + t5288)*var2[5]);
  p_output1[15]=var2[0]*(t5290 - 0.5*t5254*var2[2] - 0.5*t5289*var2[5]);
  p_output1[16]=-0.5*t5328*var2[2] - 0.5*t5314*var2[3] - 0.5*t5305*var2[4] - 0.5*t5339*var2[5] - 0.5*t5337*var2[6];
  p_output1[17]=-0.5*t5328*var2[0];
  p_output1[18]=-0.5*t5314*var2[0];
  p_output1[19]=-0.5*t5305*var2[0];
  p_output1[20]=-0.5*t5339*var2[0];
  p_output1[21]=-0.5*t5337*var2[0];
  p_output1[22]=var2[0]*(-0.5*(t5356 + 3.2*t1084*t5376 + 3.2*t1061*t5390 + t5432 + 3.2*t5065*t5450 + 3.2*t4958*t5455 - 2.88*t946)*var2[2] - 0.5*t5400*var2[3] - 0.5*t5418*var2[4] - 0.5*t5481*var2[5] - 0.5*t5503*var2[6]);
  p_output1[23]=var2[0]*(-0.5*t5400*var2[2] - 0.5*(t5356 + 6.4*t1022*t5385 + t5510 + t5520 + 3.2*t1011*(-2.*t1016*t5380 + t5533 + t5542 - 2.*t5372*t932 - 1.*t5536*t932 - 1.*t5380*t954) + 6.4*t5398*t956 + 3.2*t956*(t5548 + t5556 + 2.*t5380*t932 + 2.*t5372*t954 + t5536*t954 + t5380*t979))*var2[3] - 0.5*t5603*var2[4]);
  p_output1[24]=var2[0]*(-0.5*t5418*var2[2] - 0.5*t5603*var2[3] - 0.5*(6.4*t1022*t5409 + t5510 + t5520 + 3.2*t1011*(-2.*t1016*t5403 + t5533 + t5542 + t5571 + t5578 - 2.*t5407*t932) + 6.4*t5416*t956 + 3.2*(t5548 + t5556 + t5591 + t5596 + 2.*t5403*t932 + 2.*t5407*t954)*t956)*var2[4]);
  p_output1[25]=var2[0]*(-0.5*t5481*var2[2] - 0.5*(t5432 + 6.4*t5109*t5469 + 6.4*t4962*t5479 + t7933 + t7960 + 3.2*t5087*(-2.*t4510*t5448 - 1.*t4921*t5464 - 2.*t5098*t5464 + t8159 - 1.*t4510*t8244 + t8372) + 3.2*t4962*(2.*t4921*t5448 + 2.*t4510*t5464 + t4969*t5464 + t4921*t8244 + t8401 + t8489))*var2[5] - 0.5*t11707*var2[6]);
  p_output1[26]=var2[0]*(-0.5*t5503*var2[2] - 0.5*t11707*var2[5] - 0.5*(6.4*t5109*t5496 + 6.4*t4962*t5501 + t7933 + t7960 + 3.2*t5087*(t11548 + t11640 - 2.*t5098*t5488 - 2.*t4510*t5491 + t8159 + t8372) + 3.2*t4962*(t11693 + t11697 + 2.*t4510*t5488 + 2.*t4921*t5491 + t8401 + t8489))*var2[6]);
  p_output1[27]=-0.5*t11841*var2[2] - 0.5*t11808*var2[3] - 0.5*t11823*var2[4] - 0.5*t11854*var2[5] - 0.5*t11877*var2[6];
  p_output1[28]=-0.5*t11841*var2[0];
  p_output1[29]=-0.5*t11808*var2[0];
  p_output1[30]=-0.5*t11823*var2[0];
  p_output1[31]=-0.5*t11854*var2[0];
  p_output1[32]=-0.5*t11877*var2[0];
  p_output1[33]=var2[0]*(-0.5*(t11897 + 3.2*t1061*t11908 + 3.2*t1084*t11917)*var2[2] - 0.5*t11937*var2[3] - 0.5*t11971*var2[4]);
  p_output1[34]=var2[0]*(-0.5*t11937*var2[2] - 0.5*(t11897 + t11976 + t11977)*var2[3] - 0.5*t11982*var2[4]);
  p_output1[35]=var2[0]*(-0.5*t11971*var2[2] - 0.5*t11982*var2[3] - 0.5*(3.2*t1011*t11965 + 6.4*t1022*t11965 + t11976 + t11977 + 6.4*t11950*t956 + 3.2*(0.24*t11948 - 1.*t213*t5365)*t956)*var2[4]);
  p_output1[36]=-0.5*t12046*var2[2] - 0.5*t12057*var2[3] - 0.5*t12064*var2[4];
  p_output1[37]=-0.5*t12046*var2[0];
  p_output1[38]=-0.5*t12057*var2[0];
  p_output1[39]=-0.5*t12064*var2[0];
  p_output1[40]=var2[0]*(-0.384*t1061*var2[2] - 0.384*t1019*var2[3] - 0.384*t1019*var2[4]);
  p_output1[41]=t12098;
  p_output1[42]=t12098;
  p_output1[43]=-0.384*t1008*var2[2] - 0.384*t1022*var2[3] - 0.384*t1022*var2[4];
  p_output1[44]=-0.384*t1008*var2[0];
  p_output1[45]=t12106;
  p_output1[46]=t12106;
  p_output1[47]=var2[0]*(-0.5*(t12110 + 3.2*t12114*t4958 + 3.2*t12118*t5065)*var2[2] - 0.5*t12129*var2[5] - 0.5*t12142*var2[6]);
  p_output1[48]=var2[0]*(-0.5*t12129*var2[2] - 0.5*(t12110 + t12152 + t12153)*var2[5] - 0.5*t12158*var2[6]);
  p_output1[49]=var2[0]*(-0.5*t12142*var2[2] - 0.5*t12158*var2[5] - 0.5*(t12152 + t12153 + 6.4*t12136*t4962 + 3.2*t12140*t5087 + 6.4*t12140*t5109 + 3.2*t4962*(0.24*t12131 - 1.*t4149*t5438))*var2[6]);
  p_output1[50]=-0.5*t12190*var2[2] - 0.5*t12194*var2[5] - 0.5*t12198*var2[6];
  p_output1[51]=-0.5*t12190*var2[0];
  p_output1[52]=-0.5*t12194*var2[0];
  p_output1[53]=-0.5*t12198*var2[0];
  p_output1[54]=var2[0]*(-0.384*t4958*var2[2] - 0.384*t5105*var2[5] - 0.384*t5105*var2[6]);
  p_output1[55]=t12217;
  p_output1[56]=t12217;
  p_output1[57]=-0.384*t5054*var2[2] - 0.384*t5109*var2[5] - 0.384*t5109*var2[6];
  p_output1[58]=-0.384*t5054*var2[0];
  p_output1[59]=t12223;
  p_output1[60]=t12223;
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
