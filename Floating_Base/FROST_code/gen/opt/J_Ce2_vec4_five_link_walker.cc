/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:49:35 GMT-04:00
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
  double t1944;
  double t29;
  double t1728;
  double t2231;
  double t4582;
  double t8;
  double t1938;
  double t2689;
  double t3040;
  double t7614;
  double t7620;
  double t7633;
  double t7704;
  double t7730;
  double t3179;
  double t4848;
  double t4949;
  double t5008;
  double t5041;
  double t5807;
  double t8605;
  double t8606;
  double t8607;
  double t8601;
  double t8602;
  double t8604;
  double t6810;
  double t7156;
  double t7552;
  double t8612;
  double t8617;
  double t8618;
  double t7818;
  double t7864;
  double t7883;
  double t7791;
  double t7888;
  double t7999;
  double t12799;
  double t9435;
  double t10111;
  double t10379;
  double t15903;
  double t16125;
  double t17344;
  double t17986;
  double t11717;
  double t15878;
  double t18058;
  double t18963;
  double t20131;
  double t20226;
  double t20245;
  double t21452;
  double t21461;
  double t21462;
  double t21602;
  double t21606;
  double t21629;
  double t21718;
  double t21728;
  double t21742;
  double t7571;
  double t8060;
  double t8062;
  double t8596;
  double t8597;
  double t21969;
  double t21974;
  double t7750;
  double t7752;
  double t7753;
  double t8608;
  double t8619;
  double t9314;
  double t9358;
  double t20202;
  double t20620;
  double t20690;
  double t20691;
  double t20758;
  double t20774;
  double t20812;
  double t21048;
  double t21062;
  double t21089;
  double t21302;
  double t21402;
  double t21405;
  double t21833;
  double t21834;
  double t21835;
  double t21471;
  double t21633;
  double t21695;
  double t21752;
  double t21753;
  double t21795;
  double t21796;
  double t21797;
  double t21875;
  double t21876;
  double t21886;
  double t21920;
  double t21934;
  double t22055;
  double t22056;
  double t22057;
  double t21989;
  double t21990;
  double t21995;
  double t22005;
  double t22006;
  double t22008;
  double t22009;
  double t22012;
  double t22013;
  double t22014;
  double t22017;
  double t22018;
  double t22019;
  double t22020;
  double t22029;
  double t22030;
  double t22041;
  double t22042;
  double t22124;
  double t22125;
  double t22051;
  double t22127;
  double t22128;
  double t22063;
  double t22076;
  double t22134;
  double t22135;
  double t22088;
  double t22161;
  double t22162;
  double t22163;
  double t22164;
  double t22165;
  double t22167;
  double t22168;
  double t22169;
  double t22170;
  double t22171;
  double t22172;
  double t22173;
  double t22174;
  double t22175;
  double t22177;
  double t22178;
  double t22179;
  double t22180;
  double t22181;
  double t22182;
  double t20201;
  double t20214;
  double t16331;
  double t16457;
  double t15895;
  double t16993;
  double t20197;
  double t20199;
  double t20216;
  double t20258;
  double t20259;
  double t22200;
  double t22205;
  double t22206;
  double t22015;
  double t22214;
  double t22049;
  double t22050;
  double t22058;
  double t22062;
  double t22064;
  double t22075;
  double t22082;
  double t22083;
  double t22084;
  double t22089;
  double t22223;
  double t22105;
  double t22106;
  double t22107;
  double t22224;
  double t22109;
  double t22114;
  double t22115;
  double t22225;
  double t22228;
  double t22229;
  double t22230;
  double t22231;
  double t22232;
  double t22233;
  double t22119;
  double t22237;
  double t22126;
  double t22129;
  double t22130;
  double t22239;
  double t22132;
  double t22133;
  double t22136;
  double t22137;
  double t22138;
  double t22139;
  double t22142;
  double t22143;
  double t22144;
  double t22146;
  double t22147;
  double t22148;
  double t22149;
  double t22150;
  double t22151;
  double t22176;
  double t21696;
  double t21831;
  double t21874;
  double t21938;
  double t21954;
  double t5829;
  double t8029;
  double t8598;
  double t8599;
  double t22264;
  double t22265;
  double t21955;
  double t22215;
  double t22216;
  double t22217;
  double t22218;
  double t22219;
  double t22043;
  double t22069;
  double t22074;
  double t22090;
  double t22091;
  double t22238;
  double t22240;
  double t22241;
  double t22242;
  double t22243;
  double t22123;
  double t22131;
  double t22140;
  double t22141;
  double t22145;
  double t22152;
  double t22153;
  double t22254;
  double t22255;
  double t22256;
  double t22257;
  double t22258;
  double t22259;
  double t22260;
  double t22187;
  double t22267;
  double t22311;
  double t22312;
  double t22313;
  double t22201;
  double t22202;
  double t22203;
  double t22226;
  double t22003;
  double t22278;
  double t22279;
  double t22280;
  double t22247;
  double t22248;
  double t22249;
  double t22108;
  double t22116;
  double t22117;
  double t22295;
  double t22296;
  double t22297;
  double t22298;
  double t22299;
  double t22189;
  double t22190;
  double t22191;
  double t22192;
  double t8600;
  double t22316;
  double t22317;
  double t22318;
  double t22349;
  double t22350;
  double t22198;
  double t22272;
  double t22324;
  t1944 = Cos(var1[3]);
  t29 = Cos(var1[4]);
  t1728 = Sin(var1[3]);
  t2231 = Sin(var1[4]);
  t4582 = Cos(var1[2]);
  t8 = Sin(var1[2]);
  t1938 = -1.*t29*t1728;
  t2689 = -1.*t1944*t2231;
  t3040 = t1938 + t2689;
  t7614 = -1.*t29;
  t7620 = 1. + t7614;
  t7633 = 0.4*t7620;
  t7704 = 0.64*t29;
  t7730 = t7633 + t7704;
  t3179 = -1.*t8*t3040;
  t4848 = -1.*t1944*t29;
  t4949 = t1728*t2231;
  t5008 = t4848 + t4949;
  t5041 = t4582*t5008;
  t5807 = t3179 + t5041;
  t8605 = t4582*t1944;
  t8606 = -1.*t8*t1728;
  t8607 = t8605 + t8606;
  t8601 = -1.*t1944*t8;
  t8602 = -1.*t4582*t1728;
  t8604 = t8601 + t8602;
  t6810 = -1.*t4582*t1944;
  t7156 = t8*t1728;
  t7552 = t6810 + t7156;
  t8612 = t1944*t8;
  t8617 = t4582*t1728;
  t8618 = t8612 + t8617;
  t7818 = t1944*t29;
  t7864 = -1.*t1728*t2231;
  t7883 = t7818 + t7864;
  t7791 = t4582*t3040;
  t7888 = -1.*t8*t7883;
  t7999 = t7791 + t7888;
  t12799 = t4582*t7883;
  t9435 = t29*t1728;
  t10111 = t1944*t2231;
  t10379 = t9435 + t10111;
  t15903 = t8*t3040;
  t16125 = t15903 + t12799;
  t17344 = -1.*t4582*t7883;
  t17986 = t3179 + t17344;
  t11717 = -1.*t8*t10379;
  t15878 = t11717 + t12799;
  t18058 = t4582*t10379;
  t18963 = t8*t7883;
  t20131 = t18058 + t18963;
  t20226 = t8*t5008;
  t20245 = t7791 + t20226;
  t21452 = t7730*t1728;
  t21461 = 0.24*t1944*t2231;
  t21462 = t21452 + t21461;
  t21602 = t1944*t7730;
  t21606 = -0.24*t1728*t2231;
  t21629 = t21602 + t21606;
  t21718 = -1.*t7730*t1728;
  t21728 = -0.24*t1944*t2231;
  t21742 = t21718 + t21728;
  t7571 = 0.748*t7552;
  t8060 = t7730*t29;
  t8062 = Power(t2231,2);
  t8596 = 0.24*t8062;
  t8597 = t8060 + t8596;
  t21969 = t8*t10379;
  t21974 = t21969 + t5041;
  t7750 = t7730*t2231;
  t7752 = -0.24*t29*t2231;
  t7753 = t7750 + t7752;
  t8608 = 20.4*t8604*t8607;
  t8619 = 6.8*t8618*t8607;
  t9314 = 20.4*t8604*t7552;
  t9358 = 6.8*t8618*t7552;
  t20202 = -1.*t8*t5008;
  t20620 = Power(t8604,2);
  t20690 = 13.6*t20620;
  t20691 = 13.6*t8604*t8618;
  t20758 = Power(t8607,2);
  t20774 = 13.6*t20758;
  t20812 = 13.6*t8607*t7552;
  t21048 = Power(t1944,2);
  t21062 = 0.11*t21048;
  t21089 = Power(t1728,2);
  t21302 = 0.11*t21089;
  t21402 = t21062 + t21302;
  t21405 = 6.8*t7552*t21402;
  t21833 = t21462*t10379;
  t21834 = t7883*t21629;
  t21835 = t21833 + t21834;
  t21471 = -1.*t21462*t7883;
  t21633 = -1.*t3040*t21629;
  t21695 = t21471 + t21633;
  t21752 = t21742*t7883;
  t21753 = t21462*t7883;
  t21795 = t3040*t21629;
  t21796 = t10379*t21629;
  t21797 = t21752 + t21753 + t21795 + t21796;
  t21875 = -1.*t3040*t21742;
  t21876 = -1.*t3040*t21462;
  t21886 = -1.*t7883*t21629;
  t21920 = -1.*t21629*t5008;
  t21934 = t21875 + t21876 + t21886 + t21920;
  t22055 = -1.*t1944*t7730;
  t22056 = 0.24*t1728*t2231;
  t22057 = t22055 + t22056;
  t21989 = -0.384*var2[4]*t21974;
  t21990 = 3.2*t8597*t21974;
  t21995 = 3.2*t7753*t20245;
  t22005 = 6.4*t16125*t7999;
  t22006 = 3.2*t20131*t5807;
  t22008 = 3.2*t7999*t21974;
  t22009 = t18058 + t20202;
  t22012 = 3.2*t16125*t22009;
  t22013 = 3.2*t15878*t20245;
  t22014 = 6.4*t5807*t20245;
  t22017 = Power(t16125,2);
  t22018 = 6.4*t22017;
  t22019 = 6.4*t16125*t21974;
  t22020 = 6.4*t20131*t20245;
  t22029 = Power(t20245,2);
  t22030 = 6.4*t22029;
  t22041 = 3.2*t21835*t21974;
  t22042 = 3.2*t21695*t20245;
  t22124 = -0.24*t29*t1728;
  t22125 = t22124 + t21728;
  t22051 = -1.*t10379*t21629;
  t22127 = 0.24*t1944*t29;
  t22128 = t22127 + t21606;
  t22063 = -1.*t21462*t5008;
  t22076 = t3040*t21462;
  t22134 = -0.24*t1944*t29;
  t22135 = t22134 + t22056;
  t22088 = t21629*t5008;
  t22161 = 13.6*t8604*t8607;
  t22162 = 13.6*t8618*t8607;
  t22163 = 6.4*t16125*t20131;
  t22164 = 6.4*t16125*t20245;
  t22165 = t22161 + t22162 + t22163 + t22164;
  t22167 = 6.8*t20620;
  t22168 = 6.8*t8604*t8618;
  t22169 = 6.8*t20758;
  t22170 = 6.8*t8607*t7552;
  t22171 = 3.2*t16125*t15878;
  t22172 = 3.2*t7999*t20131;
  t22173 = 3.2*t16125*t5807;
  t22174 = 3.2*t7999*t20245;
  t22175 = t22167 + t22168 + t22169 + t22170 + t22171 + t22172 + t22173 + t22174;
  t22177 = 6.8*t8604*t21402;
  t22178 = 3.2*t16125*t21695;
  t22179 = 3.2*t16125*t21797;
  t22180 = 3.2*t21835*t20245;
  t22181 = 3.2*t20131*t21934;
  t22182 = t22177 + t22178 + t22179 + t22180 + t22181;
  t20201 = -1.*t4582*t3040;
  t20214 = t20201 + t20202;
  t16331 = -1.*t4582*t10379;
  t16457 = t16331 + t7888;
  t15895 = 6.4*t15878*t7999;
  t16993 = 3.2*t16125*t16457;
  t20197 = 3.2*t17986*t20131;
  t20199 = 6.4*t7999*t5807;
  t20216 = 3.2*t16125*t20214;
  t20258 = 3.2*t17986*t20245;
  t20259 = t8608 + t8619 + t9314 + t9358 + t15895 + t16993 + t20197 + t20199 + t20216 + t20258;
  t22200 = 0.748*t8618;
  t22205 = Power(t7552,2);
  t22206 = 13.6*t22205;
  t22015 = t8608 + t8619 + t9314 + t9358 + t22005 + t22006 + t22008 + t22012 + t22013 + t22014;
  t22214 = 6.8*t8618*t21402;
  t22049 = -1.*t21742*t7883;
  t22050 = -2.*t3040*t21629;
  t22058 = -1.*t3040*t22057;
  t22062 = -2.*t21742*t5008;
  t22064 = t22049 + t22050 + t22051 + t22058 + t22062 + t22063;
  t22075 = 2.*t3040*t21742;
  t22082 = t21742*t10379;
  t22083 = 2.*t7883*t21629;
  t22084 = t7883*t22057;
  t22089 = t22075 + t22076 + t22082 + t22083 + t22084 + t22088;
  t22223 = -0.384*var2[4]*t22009;
  t22105 = Power(t29,2);
  t22106 = -0.24*t22105;
  t22107 = t8060 + t22106;
  t22224 = 3.2*t7753*t5807;
  t22109 = -1.*t7730*t2231;
  t22114 = 0.24*t29*t2231;
  t22115 = t22109 + t22114;
  t22225 = 3.2*t8597*t22009;
  t22228 = Power(t7999,2);
  t22229 = 6.4*t22228;
  t22230 = 6.4*t15878*t5807;
  t22231 = Power(t5807,2);
  t22232 = 6.4*t22231;
  t22233 = 6.4*t7999*t22009;
  t22119 = t22005 + t22006 + t22008 + t22012 + t22013 + t22014;
  t22237 = 3.2*t21695*t5807;
  t22126 = t22125*t7883;
  t22129 = t10379*t22128;
  t22130 = t22126 + t21753 + t21795 + t22129;
  t22239 = 3.2*t21835*t22009;
  t22132 = -1.*t22125*t7883;
  t22133 = -1.*t3040*t22128;
  t22136 = -1.*t3040*t22135;
  t22137 = -1.*t21742*t5008;
  t22138 = -1.*t22125*t5008;
  t22139 = t22132 + t21633 + t22051 + t22133 + t22136 + t22137 + t22138 + t22063;
  t22142 = -1.*t3040*t22125;
  t22143 = -1.*t7883*t22128;
  t22144 = t22142 + t21876 + t22143 + t21920;
  t22146 = t3040*t21742;
  t22147 = t3040*t22125;
  t22148 = t22125*t10379;
  t22149 = t7883*t22128;
  t22150 = t7883*t22135;
  t22151 = t22146 + t22147 + t22076 + t22148 + t21834 + t22149 + t22150 + t22088;
  t22176 = -0.5*var2[3]*t22175;
  t21696 = 3.2*t7999*t21695;
  t21831 = 3.2*t7999*t21797;
  t21874 = 3.2*t21835*t5807;
  t21938 = 3.2*t15878*t21934;
  t21954 = t21405 + t21696 + t21831 + t21874 + t21938;
  t5829 = -0.384*var2[4]*t5807;
  t8029 = 3.2*t7753*t7999;
  t8598 = 3.2*t8597*t5807;
  t8599 = t7571 + t8029 + t8598;
  t22264 = 13.6*t8604*t7552;
  t22265 = t22161 + t22264 + t15895 + t20199;
  t21955 = -0.5*var2[2]*t21954;
  t22215 = 3.2*t17986*t21695;
  t22216 = 3.2*t17986*t21797;
  t22217 = 3.2*t21835*t20214;
  t22218 = 3.2*t16457*t21934;
  t22219 = t22214 + t22215 + t22216 + t22217 + t22218;
  t22043 = 6.4*t21797*t20245;
  t22069 = 3.2*t20131*t22064;
  t22074 = 6.4*t16125*t21934;
  t22090 = 3.2*t16125*t22089;
  t22091 = t21405 + t22041 + t22042 + t22043 + t22069 + t22074 + t22090;
  t22238 = 6.4*t21797*t5807;
  t22240 = 3.2*t15878*t22064;
  t22241 = 6.4*t7999*t21934;
  t22242 = 3.2*t7999*t22089;
  t22243 = t22214 + t22237 + t22238 + t22239 + t22240 + t22241 + t22242;
  t22123 = 3.2*t21797*t20245;
  t22131 = 3.2*t22130*t20245;
  t22140 = 3.2*t20131*t22139;
  t22141 = 3.2*t16125*t21934;
  t22145 = 3.2*t16125*t22144;
  t22152 = 3.2*t16125*t22151;
  t22153 = t22041 + t22042 + t22123 + t22131 + t22140 + t22141 + t22145 + t22152;
  t22254 = 3.2*t21797*t5807;
  t22255 = 3.2*t22130*t5807;
  t22256 = 3.2*t15878*t22139;
  t22257 = 3.2*t7999*t21934;
  t22258 = 3.2*t7999*t22144;
  t22259 = 3.2*t7999*t22151;
  t22260 = t22237 + t22254 + t22255 + t22239 + t22256 + t22257 + t22258 + t22259;
  t22187 = -0.5*var2[3]*t22182;
  t22267 = -0.5*var2[3]*t21954;
  t22311 = 6.4*t21797*t21835;
  t22312 = 6.4*t21695*t21934;
  t22313 = t22311 + t22312;
  t22201 = 3.2*t7753*t17986;
  t22202 = 3.2*t8597*t20214;
  t22203 = t22200 + t22201 + t22202;
  t22226 = t22200 + t22224 + t22225;
  t22003 = t7571 + t21990 + t21995;
  t22278 = 3.2*t7753*t22064;
  t22279 = 3.2*t8597*t22089;
  t22280 = t22278 + t22279;
  t22247 = 3.2*t22107*t7999;
  t22248 = 3.2*t22115*t5807;
  t22249 = t22247 + t22224 + t22248 + t22225;
  t22108 = 3.2*t22107*t16125;
  t22116 = 3.2*t22115*t20245;
  t22117 = t22108 + t21990 + t21995 + t22116;
  t22295 = 3.2*t22115*t21797;
  t22296 = 3.2*t7753*t22139;
  t22297 = 3.2*t22107*t21934;
  t22298 = 3.2*t8597*t22151;
  t22299 = t22295 + t22296 + t22297 + t22298;
  t22189 = 0.748*t8604;
  t22190 = 3.2*t7753*t16125;
  t22191 = 3.2*t8597*t20245;
  t22192 = t22189 + t22190 + t22191;
  t8600 = -0.5*var2[3]*t8599;
  t22316 = 3.2*t8597*t21797;
  t22317 = 3.2*t7753*t21934;
  t22318 = t22316 + t22317;
  t22349 = -0.384*var2[0]*t21974;
  t22350 = -0.384*var2[1]*t22009;
  t22198 = -0.384*var2[3]*t20245;
  t22272 = -0.384*var2[3]*t5807;
  t22324 = -0.384*var2[3]*t21797;
  p_output1[0]=(t21955 + t5829 + t8600 - 0.5*(6.4*t15878*t16125 + t20690 + t20691 + t20774 + t20812 + 6.4*t16125*t5807 + 6.4*t20131*t7999 + 6.4*t20245*t7999)*var2[0] - 0.5*t20259*var2[1])*var2[3];
  p_output1[1]=var2[3]*(t21989 - 0.5*(t20690 + t20691 + t20774 + t20812 + t22018 + t22019 + t22020 + t22030)*var2[0] - 0.5*t22015*var2[1] - 0.5*t22091*var2[2] - 0.5*t22003*var2[3]);
  p_output1[2]=var2[3]*(t21989 - 0.5*(t22018 + t22019 + t22020 + t22030)*var2[0] - 0.5*t22119*var2[1] - 0.5*t22153*var2[2] - 0.5*t22117*var2[3]);
  p_output1[3]=-0.5*t22165*var2[3];
  p_output1[4]=t22176;
  p_output1[5]=t22187;
  p_output1[6]=-0.5*t22165*var2[0] - 0.5*t22175*var2[1] - 0.5*t22182*var2[2] - 1.*t22192*var2[3] - 0.384*t20245*var2[4];
  p_output1[7]=t22198;
  p_output1[8]=var2[3]*(-0.5*t20259*var2[0] - 0.5*(6.4*t15878*t17986 + t20690 + t20691 + t20812 + t22206 + 6.4*t17986*t5807 + 6.4*t16457*t7999 + 6.4*t20214*t7999)*var2[1] - 0.5*t22219*var2[2] - 0.5*t22203*var2[3] - 0.384*t20214*var2[4]);
  p_output1[9]=var2[3]*(t22223 - 0.5*t22015*var2[0] - 0.5*(t20690 + t20691 + t20812 + t22206 + t22229 + t22230 + t22232 + t22233)*var2[1] - 0.5*t22243*var2[2] - 0.5*t22226*var2[3]);
  p_output1[10]=var2[3]*(t22223 - 0.5*t22119*var2[0] - 0.5*(t22229 + t22230 + t22232 + t22233)*var2[1] - 0.5*t22260*var2[2] - 0.5*t22249*var2[3]);
  p_output1[11]=t22176;
  p_output1[12]=-0.5*t22265*var2[3];
  p_output1[13]=t22267;
  p_output1[14]=t21955 + t5829 - 0.5*t22175*var2[0] - 0.5*t22265*var2[1] - 1.*t8599*var2[3];
  p_output1[15]=t22272;
  p_output1[16]=(-0.5*t21954*var2[0] - 0.5*t22219*var2[1])*var2[3];
  p_output1[17]=var2[3]*(-0.5*t22091*var2[0] - 0.5*t22243*var2[1] - 0.5*(6.4*Power(t21797,2) + 6.4*Power(t21934,2) + 6.4*t21695*t22064 + 6.4*t21835*t22089)*var2[2] - 0.5*t22280*var2[3] - 0.384*t22089*var2[4]);
  p_output1[18]=var2[3]*(-0.5*t22153*var2[0] - 0.5*t22260*var2[1] - 0.5*(6.4*t21797*t22130 + 6.4*t21695*t22139 + 6.4*t21934*t22144 + 6.4*t21835*t22151)*var2[2] - 0.5*t22299*var2[3] - 0.384*t22151*var2[4]);
  p_output1[19]=t22187;
  p_output1[20]=t22267;
  p_output1[21]=-0.5*t22313*var2[3];
  p_output1[22]=-0.5*t22182*var2[0] - 0.5*t21954*var2[1] - 0.5*t22313*var2[2] - 1.*t22318*var2[3] - 0.384*t21797*var2[4];
  p_output1[23]=t22324;
  p_output1[24]=(-0.5*t8599*var2[0] - 0.5*t22203*var2[1])*var2[3];
  p_output1[25]=(-0.5*t22003*var2[0] - 0.5*t22226*var2[1] - 0.5*t22280*var2[2])*var2[3];
  p_output1[26]=(-0.5*t22117*var2[0] - 0.5*t22249*var2[1] - 0.5*t22299*var2[2])*var2[3];
  p_output1[27]=-0.5*t22192*var2[3];
  p_output1[28]=t8600;
  p_output1[29]=-0.5*t22318*var2[3];
  p_output1[30]=-0.5*t22192*var2[0] - 0.5*t8599*var2[1] - 0.5*t22318*var2[2];
  p_output1[31]=(-0.384*t5807*var2[0] - 0.384*t20214*var2[1])*var2[3];
  p_output1[32]=(t22349 + t22350 - 0.384*t22089*var2[2])*var2[3];
  p_output1[33]=(t22349 + t22350 - 0.384*t22151*var2[2])*var2[3];
  p_output1[34]=t22198;
  p_output1[35]=t22272;
  p_output1[36]=t22324;
  p_output1[37]=-0.384*t20245*var2[0] - 0.384*t5807*var2[1] - 0.384*t21797*var2[2];
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

#include "J_Ce2_vec4_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
