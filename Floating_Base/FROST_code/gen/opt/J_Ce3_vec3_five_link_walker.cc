/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:52:09 GMT-04:00
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
  double t142;
  double t161;
  double t220;
  double t216;
  double t337;
  double t352;
  double t384;
  double t386;
  double t390;
  double t420;
  double t424;
  double t429;
  double t477;
  double t481;
  double t925;
  double t945;
  double t946;
  double t494;
  double t499;
  double t506;
  double t348;
  double t353;
  double t362;
  double t954;
  double t956;
  double t962;
  double t1019;
  double t1024;
  double t1088;
  double t1093;
  double t1324;
  double t1444;
  double t1580;
  double t1742;
  double t2102;
  double t2108;
  double t2122;
  double t2192;
  double t2725;
  double t2867;
  double t3027;
  double t2201;
  double t2221;
  double t2290;
  double t1089;
  double t1114;
  double t1116;
  double t3126;
  double t3191;
  double t3598;
  double t270;
  double t273;
  double t288;
  double t292;
  double t316;
  double t1007;
  double t507;
  double t978;
  double t980;
  double t1011;
  double t1013;
  double t1016;
  double t1035;
  double t1060;
  double t1061;
  double t1071;
  double t1072;
  double t4124;
  double t2684;
  double t3601;
  double t3870;
  double t4198;
  double t4218;
  double t4269;
  double t187;
  double t222;
  double t230;
  double t329;
  double t392;
  double t5019;
  double t6454;
  double t991;
  double t6574;
  double t6623;
  double t6675;
  double t6782;
  double t6790;
  double t6792;
  double t4376;
  double t4390;
  double t4394;
  double t4404;
  double t1010;
  double t6713;
  double t6718;
  double t6763;
  double t6766;
  double t6776;
  double t4450;
  double t368;
  double t411;
  double t6870;
  double t6871;
  double t6902;
  double t6921;
  double t6922;
  double t6506;
  double t6803;
  double t6818;
  double t6832;
  double t6833;
  double t6841;
  double t6858;
  double t6968;
  double t6969;
  double t6974;
  double t6975;
  double t6953;
  double t6973;
  double t6976;
  double t6981;
  double t6957;
  double t6958;
  double t6959;
  double t6987;
  double t6988;
  double t6990;
  double t1021;
  double t1033;
  double t1034;
  double t1084;
  double t1588;
  double t7018;
  double t7019;
  double t4090;
  double t7026;
  double t7027;
  double t7029;
  double t7050;
  double t7053;
  double t7054;
  double t4528;
  double t4544;
  double t4586;
  double t4677;
  double t4160;
  double t7034;
  double t7035;
  double t7036;
  double t7042;
  double t7043;
  double t4713;
  double t1319;
  double t1739;
  double t7079;
  double t7080;
  double t7083;
  double t7085;
  double t7087;
  double t7024;
  double t7055;
  double t7056;
  double t7060;
  double t7062;
  double t7071;
  double t7074;
  double t7146;
  double t7147;
  double t7204;
  double t7207;
  double t7125;
  double t7181;
  double t7211;
  double t7212;
  double t7129;
  double t7134;
  double t7136;
  double t7220;
  double t7223;
  double t7227;
  double t144;
  double t988;
  double t1018;
  double t4047;
  double t4292;
  double t4326;
  double t7295;
  double t7296;
  double t7297;
  double t7303;
  double t7313;
  double t7318;
  double t7320;
  double t7328;
  double t7331;
  double t7337;
  double t7339;
  double t7351;
  double t7353;
  double t7379;
  double t6778;
  double t6926;
  double t6927;
  double t6951;
  double t6954;
  double t6960;
  double t6961;
  double t6962;
  double t6964;
  double t6967;
  double t7509;
  double t7514;
  double t7517;
  double t7439;
  double t7440;
  double t7443;
  double t7507;
  double t7529;
  double t7530;
  double t7624;
  double t4411;
  double t8654;
  double t8655;
  double t4454;
  double t7673;
  double t7674;
  double t8046;
  double t8219;
  double t8221;
  double t8226;
  double t8247;
  double t8708;
  double t8726;
  double t8695;
  double t7648;
  double t7671;
  double t7672;
  double t9785;
  double t9876;
  double t8334;
  double t8354;
  double t8571;
  double t8583;
  double t9690;
  double t9706;
  double t9709;
  double t9775;
  double t9877;
  double t9942;
  double t8648;
  double t8653;
  double t8677;
  double t8704;
  double t10301;
  double t10305;
  double t10311;
  double t10319;
  double t10391;
  double t10440;
  double t8753;
  double t9069;
  double t9070;
  double t11760;
  double t11765;
  double t11773;
  double t11777;
  double t11809;
  double t11831;
  double t11892;
  double t11903;
  double t6982;
  double t6991;
  double t6992;
  double t6994;
  double t6997;
  double t7000;
  double t7004;
  double t7008;
  double t7010;
  double t7017;
  double t9946;
  double t9952;
  double t9966;
  double t10029;
  double t10037;
  double t10441;
  double t10454;
  double t10467;
  double t10481;
  double t10487;
  double t10899;
  double t11330;
  double t11371;
  double t11380;
  double t11388;
  double t11429;
  double t11431;
  double t11448;
  double t11453;
  double t11468;
  double t11537;
  double t11568;
  double t11582;
  double t11597;
  double t11605;
  double t11643;
  double t11654;
  double t11663;
  double t11665;
  double t11677;
  double t11688;
  double t11692;
  double t11695;
  double t11705;
  double t11717;
  double t11744;
  double t11750;
  double t11970;
  double t11971;
  double t11972;
  double t12029;
  double t12030;
  double t12041;
  double t12134;
  double t12135;
  double t12139;
  double t12146;
  double t12147;
  double t12150;
  double t12152;
  double t12154;
  double t7048;
  double t7089;
  double t7103;
  double t7104;
  double t7128;
  double t7138;
  double t7139;
  double t7141;
  double t7142;
  double t7144;
  double t12181;
  double t12182;
  double t12183;
  double t12171;
  double t12174;
  double t12176;
  double t12179;
  double t12184;
  double t12185;
  double t12186;
  double t4679;
  double t12229;
  double t12230;
  double t4720;
  double t12197;
  double t12202;
  double t12203;
  double t12204;
  double t12205;
  double t12206;
  double t12207;
  double t12244;
  double t12245;
  double t12237;
  double t12192;
  double t12194;
  double t12195;
  double t12356;
  double t12357;
  double t12210;
  double t12212;
  double t12213;
  double t12218;
  double t12348;
  double t12352;
  double t12353;
  double t12355;
  double t12358;
  double t12359;
  double t12225;
  double t12227;
  double t12232;
  double t12239;
  double t12389;
  double t12390;
  double t12392;
  double t12393;
  double t12396;
  double t12397;
  double t12261;
  double t12280;
  double t12283;
  double t12517;
  double t12518;
  double t12522;
  double t12524;
  double t12525;
  double t12540;
  double t12557;
  double t12558;
  double t7215;
  double t7233;
  double t7240;
  double t7277;
  double t7278;
  double t7281;
  double t7282;
  double t7285;
  double t7288;
  double t7291;
  double t12361;
  double t12363;
  double t12364;
  double t12385;
  double t12387;
  double t12398;
  double t12399;
  double t12400;
  double t12401;
  double t12404;
  double t12405;
  double t12406;
  double t12407;
  double t12408;
  double t12411;
  double t12421;
  double t12426;
  double t12427;
  double t12432;
  double t12433;
  double t12439;
  double t12440;
  double t12443;
  double t12454;
  double t12472;
  double t12474;
  double t12477;
  double t12481;
  double t12482;
  double t12494;
  double t12496;
  double t12497;
  double t12498;
  double t12504;
  double t12506;
  double t12511;
  double t12512;
  double t12582;
  double t12583;
  double t13424;
  double t14103;
  double t14104;
  double t14109;
  double t14176;
  double t14177;
  double t14178;
  double t14183;
  double t14185;
  double t14186;
  double t14187;
  double t14188;
  t142 = Cos(var1[2]);
  t161 = Cos(var1[3]);
  t220 = Sin(var1[3]);
  t216 = Sin(var1[2]);
  t337 = Cos(var1[4]);
  t352 = Sin(var1[4]);
  t384 = t161*t337;
  t386 = -1.*t220*t352;
  t390 = t384 + t386;
  t420 = -1.*t337;
  t424 = 1. + t420;
  t429 = 0.4*t424;
  t477 = 0.64*t337;
  t481 = t429 + t477;
  t925 = -1.*t337*t220;
  t945 = -1.*t161*t352;
  t946 = t925 + t945;
  t494 = t481*t220;
  t499 = 0.24*t161*t352;
  t506 = t494 + t499;
  t348 = t337*t220;
  t353 = t161*t352;
  t362 = t348 + t353;
  t954 = t161*t481;
  t956 = -0.24*t220*t352;
  t962 = t954 + t956;
  t1019 = Cos(var1[5]);
  t1024 = Sin(var1[5]);
  t1088 = Cos(var1[6]);
  t1093 = Sin(var1[6]);
  t1324 = t1019*t1088;
  t1444 = -1.*t1024*t1093;
  t1580 = t1324 + t1444;
  t1742 = -1.*t1088;
  t2102 = 1. + t1742;
  t2108 = 0.4*t2102;
  t2122 = 0.64*t1088;
  t2192 = t2108 + t2122;
  t2725 = -1.*t1088*t1024;
  t2867 = -1.*t1019*t1093;
  t3027 = t2725 + t2867;
  t2201 = t2192*t1024;
  t2221 = 0.24*t1019*t1093;
  t2290 = t2201 + t2221;
  t1089 = t1088*t1024;
  t1114 = t1019*t1093;
  t1116 = t1089 + t1114;
  t3126 = t1019*t2192;
  t3191 = -0.24*t1024*t1093;
  t3598 = t3126 + t3191;
  t270 = Power(t161,2);
  t273 = 0.11*t270;
  t288 = Power(t220,2);
  t292 = 0.11*t288;
  t316 = t273 + t292;
  t1007 = -1.*t142*t390;
  t507 = -1.*t506*t390;
  t978 = -1.*t946*t962;
  t980 = t507 + t978;
  t1011 = t506*t362;
  t1013 = t390*t962;
  t1016 = t1011 + t1013;
  t1035 = Power(t1019,2);
  t1060 = 0.11*t1035;
  t1061 = Power(t1024,2);
  t1071 = 0.11*t1061;
  t1072 = t1060 + t1071;
  t4124 = -1.*t142*t1580;
  t2684 = -1.*t2290*t1580;
  t3601 = -1.*t3027*t3598;
  t3870 = t2684 + t3601;
  t4198 = t2290*t1116;
  t4218 = t1580*t3598;
  t4269 = t4198 + t4218;
  t187 = -1.*t142*t161;
  t222 = t216*t220;
  t230 = t187 + t222;
  t329 = -6.8*t230*t316;
  t392 = -1.*t216*t390;
  t5019 = t142*t946;
  t6454 = t5019 + t392;
  t991 = -1.*t216*t946;
  t6574 = -1.*t481*t220;
  t6623 = -0.24*t161*t352;
  t6675 = t6574 + t6623;
  t6782 = -1.*t161*t337;
  t6790 = t220*t352;
  t6792 = t6782 + t6790;
  t4376 = t161*t216;
  t4390 = t142*t220;
  t4394 = t4376 + t4390;
  t4404 = -6.8*t4394*t316;
  t1010 = t991 + t1007;
  t6713 = t6675*t390;
  t6718 = t506*t390;
  t6763 = t946*t962;
  t6766 = t362*t962;
  t6776 = t6713 + t6718 + t6763 + t6766;
  t4450 = -1.*t142*t946;
  t368 = -1.*t142*t362;
  t411 = t368 + t392;
  t6870 = -1.*t946*t6675;
  t6871 = -1.*t946*t506;
  t6902 = -1.*t390*t962;
  t6921 = -1.*t962*t6792;
  t6922 = t6870 + t6871 + t6902 + t6921;
  t6506 = -3.2*t6454*t980;
  t6803 = t142*t6792;
  t6818 = t991 + t6803;
  t6832 = -3.2*t1016*t6818;
  t6833 = -1.*t216*t362;
  t6841 = t142*t390;
  t6858 = t6833 + t6841;
  t6968 = -0.24*t337*t220;
  t6969 = t6968 + t6623;
  t6974 = 0.24*t161*t337;
  t6975 = t6974 + t956;
  t6953 = -3.2*t1010*t980;
  t6973 = t6969*t390;
  t6976 = t362*t6975;
  t6981 = t6973 + t6718 + t6763 + t6976;
  t6957 = -1.*t216*t6792;
  t6958 = t4450 + t6957;
  t6959 = -3.2*t1016*t6958;
  t6987 = -1.*t946*t6969;
  t6988 = -1.*t390*t6975;
  t6990 = t6987 + t6871 + t6988 + t6921;
  t1021 = -1.*t142*t1019;
  t1033 = t216*t1024;
  t1034 = t1021 + t1033;
  t1084 = -6.8*t1034*t1072;
  t1588 = -1.*t216*t1580;
  t7018 = t142*t3027;
  t7019 = t7018 + t1588;
  t4090 = -1.*t216*t3027;
  t7026 = -1.*t2192*t1024;
  t7027 = -0.24*t1019*t1093;
  t7029 = t7026 + t7027;
  t7050 = -1.*t1019*t1088;
  t7053 = t1024*t1093;
  t7054 = t7050 + t7053;
  t4528 = t1019*t216;
  t4544 = t142*t1024;
  t4586 = t4528 + t4544;
  t4677 = -6.8*t4586*t1072;
  t4160 = t4090 + t4124;
  t7034 = t7029*t1580;
  t7035 = t2290*t1580;
  t7036 = t3027*t3598;
  t7042 = t1116*t3598;
  t7043 = t7034 + t7035 + t7036 + t7042;
  t4713 = -1.*t142*t3027;
  t1319 = -1.*t142*t1116;
  t1739 = t1319 + t1588;
  t7079 = -1.*t3027*t7029;
  t7080 = -1.*t3027*t2290;
  t7083 = -1.*t1580*t3598;
  t7085 = -1.*t3598*t7054;
  t7087 = t7079 + t7080 + t7083 + t7085;
  t7024 = -3.2*t7019*t3870;
  t7055 = t142*t7054;
  t7056 = t4090 + t7055;
  t7060 = -3.2*t4269*t7056;
  t7062 = -1.*t216*t1116;
  t7071 = t142*t1580;
  t7074 = t7062 + t7071;
  t7146 = -0.24*t1088*t1024;
  t7147 = t7146 + t7027;
  t7204 = 0.24*t1019*t1088;
  t7207 = t7204 + t3191;
  t7125 = -3.2*t4160*t3870;
  t7181 = t7147*t1580;
  t7211 = t1116*t7207;
  t7212 = t7181 + t7035 + t7036 + t7211;
  t7129 = -1.*t216*t7054;
  t7134 = t4713 + t7129;
  t7136 = -3.2*t4269*t7134;
  t7220 = -1.*t3027*t7147;
  t7223 = -1.*t1580*t7207;
  t7227 = t7220 + t7080 + t7223 + t7085;
  t144 = 2.88*t142;
  t988 = -3.2*t411*t980;
  t1018 = -3.2*t1010*t1016;
  t4047 = -3.2*t1739*t3870;
  t4292 = -3.2*t4160*t4269;
  t4326 = t144 + t329 + t988 + t1018 + t1084 + t4047 + t4292;
  t7295 = 2.88*t216;
  t7296 = -1.*t161*t216;
  t7297 = -1.*t142*t220;
  t7303 = t7296 + t7297;
  t7313 = -6.8*t7303*t316;
  t7318 = -3.2*t6858*t980;
  t7320 = -3.2*t6454*t1016;
  t7328 = -1.*t1019*t216;
  t7331 = -1.*t142*t1024;
  t7337 = t7328 + t7331;
  t7339 = -6.8*t7337*t1072;
  t7351 = -3.2*t7074*t3870;
  t7353 = -3.2*t7019*t4269;
  t7379 = t7295 + t7313 + t7318 + t7320 + t7339 + t7351 + t7353;
  t6778 = -3.2*t6454*t6776;
  t6926 = -3.2*t6858*t6922;
  t6927 = t329 + t6506 + t6778 + t6832 + t6926;
  t6951 = -0.5*var2[0]*t6927;
  t6954 = -3.2*t1010*t6776;
  t6960 = -3.2*t411*t6922;
  t6961 = t4404 + t6953 + t6954 + t6959 + t6960;
  t6962 = -0.5*var2[1]*t6961;
  t6964 = t6951 + t6962;
  t6967 = var2[2]*t6964;
  t7509 = -1.*t161*t481;
  t7514 = 0.24*t220*t352;
  t7517 = t7509 + t7514;
  t7439 = 2.*t946*t6675;
  t7440 = t946*t506;
  t7443 = t6675*t362;
  t7507 = 2.*t390*t962;
  t7529 = t390*t7517;
  t7530 = t962*t6792;
  t7624 = t7439 + t7440 + t7443 + t7507 + t7529 + t7530;
  t4411 = t216*t362;
  t8654 = t216*t6792;
  t8655 = t5019 + t8654;
  t4454 = t216*t390;
  t7673 = -1.*t6675*t390;
  t7674 = -2.*t946*t962;
  t8046 = -1.*t362*t962;
  t8219 = -1.*t946*t7517;
  t8221 = -2.*t6675*t6792;
  t8226 = -1.*t506*t6792;
  t8247 = t7673 + t7674 + t8046 + t8219 + t8221 + t8226;
  t8708 = t216*t946;
  t8726 = t8708 + t6841;
  t8695 = t142*t362;
  t7648 = t481*t352;
  t7671 = -0.24*t337*t352;
  t7672 = t7648 + t7671;
  t9785 = -0.24*t161*t337;
  t9876 = t9785 + t7514;
  t8334 = t481*t337;
  t8354 = Power(t352,2);
  t8571 = 0.24*t8354;
  t8583 = t8334 + t8571;
  t9690 = t946*t6675;
  t9706 = t946*t6969;
  t9709 = t6969*t362;
  t9775 = t390*t6975;
  t9877 = t390*t9876;
  t9942 = t9690 + t9706 + t7440 + t9709 + t1013 + t9775 + t9877 + t7530;
  t8648 = t4411 + t6803;
  t8653 = -3.2*t1016*t8648;
  t8677 = -3.2*t980*t8655;
  t8704 = t8695 + t4454;
  t10301 = -1.*t6969*t390;
  t10305 = -1.*t946*t6975;
  t10311 = -1.*t946*t9876;
  t10319 = -1.*t6675*t6792;
  t10391 = -1.*t6969*t6792;
  t10440 = t10301 + t978 + t8046 + t10305 + t10311 + t10319 + t10391 + t8226;
  t8753 = -3.2*t980*t6818;
  t9069 = t8695 + t6957;
  t9070 = -3.2*t1016*t9069;
  t11760 = -3.2*t8726*t980;
  t11765 = -3.2*t8726*t6776;
  t11773 = -3.2*t1016*t8655;
  t11777 = -3.2*t8704*t6922;
  t11809 = t7313 + t11760 + t11765 + t11773 + t11777;
  t11831 = -3.2*t8583*t6776;
  t11892 = -3.2*t7672*t6922;
  t11903 = t11831 + t11892;
  t6982 = -3.2*t6454*t6981;
  t6991 = -3.2*t6858*t6990;
  t6992 = t6506 + t6982 + t6832 + t6991;
  t6994 = -0.5*var2[0]*t6992;
  t6997 = -3.2*t1010*t6981;
  t7000 = -3.2*t411*t6990;
  t7004 = t6953 + t6997 + t6959 + t7000;
  t7008 = -0.5*var2[1]*t7004;
  t7010 = t6994 + t7008;
  t7017 = var2[2]*t7010;
  t9946 = 0.384*var2[4]*t9942;
  t9952 = -1.*t481*t352;
  t9966 = 0.24*t337*t352;
  t10029 = t9952 + t9966;
  t10037 = -3.2*t10029*t6776;
  t10441 = -3.2*t7672*t10440;
  t10454 = Power(t337,2);
  t10467 = -0.24*t10454;
  t10481 = t8334 + t10467;
  t10487 = -3.2*t10481*t6922;
  t10899 = -3.2*t8583*t9942;
  t11330 = t10037 + t10441 + t10487 + t10899;
  t11371 = -0.5*var2[3]*t11330;
  t11380 = -3.2*t6776*t8655;
  t11388 = -3.2*t6981*t8655;
  t11429 = -3.2*t8704*t10440;
  t11431 = -3.2*t8726*t6922;
  t11448 = -3.2*t8726*t6990;
  t11453 = -3.2*t8726*t9942;
  t11468 = t8653 + t8677 + t11380 + t11388 + t11429 + t11431 + t11448 + t11453;
  t11537 = -0.5*var2[0]*t11468;
  t11568 = -3.2*t6776*t6818;
  t11582 = -3.2*t6981*t6818;
  t11597 = -3.2*t6858*t10440;
  t11605 = -3.2*t6454*t6922;
  t11643 = -3.2*t6454*t6990;
  t11654 = -3.2*t6454*t9942;
  t11663 = t8753 + t11568 + t11582 + t9070 + t11597 + t11605 + t11643 + t11654;
  t11665 = -0.5*var2[1]*t11663;
  t11677 = -6.4*t6776*t6981;
  t11688 = -6.4*t980*t10440;
  t11692 = -6.4*t6922*t6990;
  t11695 = -6.4*t1016*t9942;
  t11705 = t11677 + t11688 + t11692 + t11695;
  t11717 = -0.5*var2[2]*t11705;
  t11744 = t9946 + t11371 + t11537 + t11665 + t11717;
  t11750 = var2[2]*t11744;
  t11970 = 2.*t946*t6969;
  t11971 = 2.*t390*t6975;
  t11972 = t11970 + t7440 + t9709 + t11971 + t9877 + t7530;
  t12029 = -2.*t946*t6975;
  t12030 = -2.*t6969*t6792;
  t12041 = t10301 + t8046 + t12029 + t10311 + t12030 + t8226;
  t12134 = -3.2*t8726*t6981;
  t12135 = -3.2*t8704*t6990;
  t12139 = t11760 + t12134 + t11773 + t12135;
  t12146 = -3.2*t10481*t980;
  t12147 = -3.2*t10029*t1016;
  t12150 = -3.2*t8583*t6981;
  t12152 = -3.2*t7672*t6990;
  t12154 = t12146 + t12147 + t12150 + t12152;
  t7048 = -3.2*t7019*t7043;
  t7089 = -3.2*t7074*t7087;
  t7103 = t1084 + t7024 + t7048 + t7060 + t7089;
  t7104 = -0.5*var2[0]*t7103;
  t7128 = -3.2*t4160*t7043;
  t7138 = -3.2*t1739*t7087;
  t7139 = t4677 + t7125 + t7128 + t7136 + t7138;
  t7141 = -0.5*var2[1]*t7139;
  t7142 = t7104 + t7141;
  t7144 = var2[2]*t7142;
  t12181 = -1.*t1019*t2192;
  t12182 = 0.24*t1024*t1093;
  t12183 = t12181 + t12182;
  t12171 = 2.*t3027*t7029;
  t12174 = t3027*t2290;
  t12176 = t7029*t1116;
  t12179 = 2.*t1580*t3598;
  t12184 = t1580*t12183;
  t12185 = t3598*t7054;
  t12186 = t12171 + t12174 + t12176 + t12179 + t12184 + t12185;
  t4679 = t216*t1116;
  t12229 = t216*t7054;
  t12230 = t7018 + t12229;
  t4720 = t216*t1580;
  t12197 = -1.*t7029*t1580;
  t12202 = -2.*t3027*t3598;
  t12203 = -1.*t1116*t3598;
  t12204 = -1.*t3027*t12183;
  t12205 = -2.*t7029*t7054;
  t12206 = -1.*t2290*t7054;
  t12207 = t12197 + t12202 + t12203 + t12204 + t12205 + t12206;
  t12244 = t216*t3027;
  t12245 = t12244 + t7071;
  t12237 = t142*t1116;
  t12192 = t2192*t1093;
  t12194 = -0.24*t1088*t1093;
  t12195 = t12192 + t12194;
  t12356 = -0.24*t1019*t1088;
  t12357 = t12356 + t12182;
  t12210 = t2192*t1088;
  t12212 = Power(t1093,2);
  t12213 = 0.24*t12212;
  t12218 = t12210 + t12213;
  t12348 = t3027*t7029;
  t12352 = t3027*t7147;
  t12353 = t7147*t1116;
  t12355 = t1580*t7207;
  t12358 = t1580*t12357;
  t12359 = t12348 + t12352 + t12174 + t12353 + t4218 + t12355 + t12358 + t12185;
  t12225 = t4679 + t7055;
  t12227 = -3.2*t4269*t12225;
  t12232 = -3.2*t3870*t12230;
  t12239 = t12237 + t4720;
  t12389 = -1.*t7147*t1580;
  t12390 = -1.*t3027*t7207;
  t12392 = -1.*t3027*t12357;
  t12393 = -1.*t7029*t7054;
  t12396 = -1.*t7147*t7054;
  t12397 = t12389 + t3601 + t12203 + t12390 + t12392 + t12393 + t12396 + t12206;
  t12261 = -3.2*t3870*t7056;
  t12280 = t12237 + t7129;
  t12283 = -3.2*t4269*t12280;
  t12517 = -3.2*t12245*t3870;
  t12518 = -3.2*t12245*t7043;
  t12522 = -3.2*t4269*t12230;
  t12524 = -3.2*t12239*t7087;
  t12525 = t7339 + t12517 + t12518 + t12522 + t12524;
  t12540 = -3.2*t12218*t7043;
  t12557 = -3.2*t12195*t7087;
  t12558 = t12540 + t12557;
  t7215 = -3.2*t7019*t7212;
  t7233 = -3.2*t7074*t7227;
  t7240 = t7024 + t7215 + t7060 + t7233;
  t7277 = -0.5*var2[0]*t7240;
  t7278 = -3.2*t4160*t7212;
  t7281 = -3.2*t1739*t7227;
  t7282 = t7125 + t7278 + t7136 + t7281;
  t7285 = -0.5*var2[1]*t7282;
  t7288 = t7277 + t7285;
  t7291 = var2[2]*t7288;
  t12361 = 0.384*var2[6]*t12359;
  t12363 = -1.*t2192*t1093;
  t12364 = 0.24*t1088*t1093;
  t12385 = t12363 + t12364;
  t12387 = -3.2*t12385*t7043;
  t12398 = -3.2*t12195*t12397;
  t12399 = Power(t1088,2);
  t12400 = -0.24*t12399;
  t12401 = t12210 + t12400;
  t12404 = -3.2*t12401*t7087;
  t12405 = -3.2*t12218*t12359;
  t12406 = t12387 + t12398 + t12404 + t12405;
  t12407 = -0.5*var2[5]*t12406;
  t12408 = -3.2*t7043*t12230;
  t12411 = -3.2*t7212*t12230;
  t12421 = -3.2*t12239*t12397;
  t12426 = -3.2*t12245*t7087;
  t12427 = -3.2*t12245*t7227;
  t12432 = -3.2*t12245*t12359;
  t12433 = t12227 + t12232 + t12408 + t12411 + t12421 + t12426 + t12427 + t12432;
  t12439 = -0.5*var2[0]*t12433;
  t12440 = -3.2*t7043*t7056;
  t12443 = -3.2*t7212*t7056;
  t12454 = -3.2*t7074*t12397;
  t12472 = -3.2*t7019*t7087;
  t12474 = -3.2*t7019*t7227;
  t12477 = -3.2*t7019*t12359;
  t12481 = t12261 + t12440 + t12443 + t12283 + t12454 + t12472 + t12474 + t12477;
  t12482 = -0.5*var2[1]*t12481;
  t12494 = -6.4*t7043*t7212;
  t12496 = -6.4*t3870*t12397;
  t12497 = -6.4*t7087*t7227;
  t12498 = -6.4*t4269*t12359;
  t12504 = t12494 + t12496 + t12497 + t12498;
  t12506 = -0.5*var2[2]*t12504;
  t12511 = t12361 + t12407 + t12439 + t12482 + t12506;
  t12512 = var2[2]*t12511;
  t12582 = 2.*t3027*t7147;
  t12583 = 2.*t1580*t7207;
  t13424 = t12582 + t12174 + t12353 + t12583 + t12358 + t12185;
  t14103 = -2.*t3027*t7207;
  t14104 = -2.*t7147*t7054;
  t14109 = t12389 + t12203 + t14103 + t12392 + t14104 + t12206;
  t14176 = -3.2*t12245*t7212;
  t14177 = -3.2*t12239*t7227;
  t14178 = t12517 + t14176 + t12522 + t14177;
  t14183 = -3.2*t12401*t3870;
  t14185 = -3.2*t12385*t4269;
  t14186 = -3.2*t12218*t7212;
  t14187 = -3.2*t12195*t7227;
  t14188 = t14183 + t14185 + t14186 + t14187;
  p_output1[0]=(-0.5*t4326*var2[0] - 0.5*(-2.88*t216 + t4404 - 3.2*t1016*(t4450 + t4454) + t4677 - 3.2*t3870*(t4124 + t4679) - 3.2*t4269*(t4713 + t4720) - 3.2*(t1007 + t4411)*t980)*var2[1])*var2[2];
  p_output1[1]=t6967;
  p_output1[2]=t7017;
  p_output1[3]=t7144;
  p_output1[4]=t7291;
  p_output1[5]=-0.5*t7379*var2[2];
  p_output1[6]=-0.5*t4326*var2[2];
  p_output1[7]=-0.5*t7379*var2[0] - 0.5*t4326*var2[1];
  p_output1[8]=t6967;
  p_output1[9]=var2[2]*(-0.5*(t329 + t8653 - 6.4*t6776*t8655 + t8677 - 3.2*t8247*t8704 - 6.4*t6922*t8726 - 3.2*t7624*t8726)*var2[0] - 0.5*(t4404 - 6.4*t6776*t6818 - 6.4*t6454*t6922 - 3.2*t6454*t7624 - 3.2*t6858*t8247 + t8753 + t9070)*var2[1] - 0.5*(-6.4*Power(t6776,2) - 6.4*Power(t6922,2) - 6.4*t1016*t7624 - 6.4*t8247*t980)*var2[2] - 0.5*(-3.2*t7672*t8247 - 3.2*t7624*t8583)*var2[3] + 0.384*t7624*var2[4]);
  p_output1[10]=t11750;
  p_output1[11]=-0.5*t11809*var2[2];
  p_output1[12]=-0.5*t6927*var2[2];
  p_output1[13]=-0.5*t11809*var2[0] - 0.5*t6927*var2[1] - 1.*(-6.4*t1016*t6776 - 6.4*t6922*t980)*var2[2] - 0.5*t11903*var2[3] + 0.384*t6776*var2[4];
  p_output1[14]=-0.5*t11903*var2[2];
  p_output1[15]=0.384*t6776*var2[2];
  p_output1[16]=t7017;
  p_output1[17]=t11750;
  p_output1[18]=var2[2]*(-0.5*(t8653 - 6.4*t6981*t8655 + t8677 - 3.2*t12041*t8704 - 3.2*t11972*t8726 - 6.4*t6990*t8726)*var2[0] - 0.5*(-3.2*t11972*t6454 - 3.2*t12041*t6858 - 6.4*t6818*t6981 - 6.4*t6454*t6990 + t8753 + t9070)*var2[1] - 0.5*(-6.4*t1016*t11972 - 6.4*Power(t6981,2) - 6.4*Power(t6990,2) - 6.4*t12041*t980)*var2[2] - 0.5*(-3.2*t1016*(0.24*t10454 - 1.*t337*t481) - 6.4*t10029*t6981 - 6.4*t10481*t6990 - 3.2*t12041*t7672 - 3.2*t11972*t8583 - 3.2*t10029*t980)*var2[3] + 0.384*t11972*var2[4]);
  p_output1[19]=-0.5*t12139*var2[2];
  p_output1[20]=-0.5*t6992*var2[2];
  p_output1[21]=-0.5*t12139*var2[0] - 0.5*t6992*var2[1] - 1.*(-6.4*t1016*t6981 - 6.4*t6990*t980)*var2[2] - 0.5*t12154*var2[3] + 0.384*t6981*var2[4];
  p_output1[22]=-0.5*t12154*var2[2];
  p_output1[23]=0.384*t6981*var2[2];
  p_output1[24]=t7144;
  p_output1[25]=var2[2]*(-0.5*(t1084 + t12227 + t12232 - 3.2*t12207*t12239 - 3.2*t12186*t12245 - 6.4*t12230*t7043 - 6.4*t12245*t7087)*var2[0] - 0.5*(t12261 + t12283 + t4677 - 3.2*t12186*t7019 - 6.4*t7043*t7056 - 3.2*t12207*t7074 - 6.4*t7019*t7087)*var2[1] - 0.5*(-6.4*t12207*t3870 - 6.4*t12186*t4269 - 6.4*Power(t7043,2) - 6.4*Power(t7087,2))*var2[2] - 0.5*(-3.2*t12195*t12207 - 3.2*t12186*t12218)*var2[5] + 0.384*t12186*var2[6]);
  p_output1[26]=t12512;
  p_output1[27]=-0.5*t12525*var2[2];
  p_output1[28]=-0.5*t7103*var2[2];
  p_output1[29]=-0.5*t12525*var2[0] - 0.5*t7103*var2[1] - 1.*(-6.4*t4269*t7043 - 6.4*t3870*t7087)*var2[2] - 0.5*t12558*var2[5] + 0.384*t7043*var2[6];
  p_output1[30]=-0.5*t12558*var2[2];
  p_output1[31]=0.384*t7043*var2[2];
  p_output1[32]=t7291;
  p_output1[33]=t12512;
  p_output1[34]=var2[2]*(-0.5*(t12227 + t12232 - 3.2*t12245*t13424 - 3.2*t12239*t14109 - 6.4*t12230*t7212 - 6.4*t12245*t7227)*var2[0] - 0.5*(t12261 + t12283 - 3.2*t13424*t7019 - 3.2*t14109*t7074 - 6.4*t7056*t7212 - 6.4*t7019*t7227)*var2[1] - 0.5*(-6.4*t14109*t3870 - 6.4*t13424*t4269 - 6.4*Power(t7212,2) - 6.4*Power(t7227,2))*var2[2] - 0.5*(-3.2*t12218*t13424 - 3.2*t12195*t14109 - 3.2*t12385*t3870 - 3.2*(0.24*t12399 - 1.*t1088*t2192)*t4269 - 6.4*t12385*t7212 - 6.4*t12401*t7227)*var2[5] + 0.384*t13424*var2[6]);
  p_output1[35]=-0.5*t14178*var2[2];
  p_output1[36]=-0.5*t7240*var2[2];
  p_output1[37]=-0.5*t14178*var2[0] - 0.5*t7240*var2[1] - 1.*(-6.4*t4269*t7212 - 6.4*t3870*t7227)*var2[2] - 0.5*t14188*var2[5] + 0.384*t7212*var2[6];
  p_output1[38]=-0.5*t14188*var2[2];
  p_output1[39]=0.384*t7212*var2[2];
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

#include "J_Ce3_vec3_five_link_walker.hh"

namespace RightStance
{

void J_Ce3_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
