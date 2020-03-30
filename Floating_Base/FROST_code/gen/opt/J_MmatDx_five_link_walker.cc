/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:48:25 GMT-04:00
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
  double t7943;
  double t7221;
  double t7405;
  double t7948;
  double t8020;
  double t6532;
  double t8031;
  double t8181;
  double t8184;
  double t8228;
  double t8229;
  double t8230;
  double t8232;
  double t8238;
  double t7406;
  double t7978;
  double t7993;
  double t8009;
  double t8185;
  double t8205;
  double t10741;
  double t9224;
  double t9308;
  double t10744;
  double t10960;
  double t13113;
  double t13202;
  double t14767;
  double t14811;
  double t14818;
  double t14823;
  double t14824;
  double t10655;
  double t10952;
  double t10953;
  double t10957;
  double t14057;
  double t14598;
  double t8211;
  double t8213;
  double t8217;
  double t14877;
  double t14878;
  double t14881;
  double t8304;
  double t8261;
  double t8262;
  double t8296;
  double t8302;
  double t8312;
  double t14679;
  double t14686;
  double t14689;
  double t14918;
  double t14919;
  double t14920;
  double t14855;
  double t14849;
  double t14850;
  double t14851;
  double t14852;
  double t14856;
  double t14889;
  double t14890;
  double t14891;
  double t14896;
  double t14899;
  double t14905;
  double t14907;
  double t14912;
  double t14925;
  double t14927;
  double t14928;
  double t14933;
  double t14934;
  double t14936;
  double t14937;
  double t14938;
  double t16135;
  double t16142;
  double t16220;
  double t16266;
  double t16291;
  double t16313;
  double t16657;
  double t16828;
  double t16930;
  double t17003;
  double t17013;
  double t17023;
  double t8221;
  double t8239;
  double t8246;
  double t8258;
  double t8375;
  double t8389;
  double t8463;
  double t8771;
  double t17834;
  double t17865;
  double t17966;
  double t17996;
  double t18007;
  double t14885;
  double t14892;
  double t14960;
  double t14969;
  double t14971;
  double t14972;
  double t14988;
  double t15012;
  double t15033;
  double t15037;
  double t15042;
  double t15045;
  double t16025;
  double t16028;
  double t16043;
  double t16057;
  double t16097;
  double t16098;
  double t16264;
  double t16367;
  double t16379;
  double t16393;
  double t16398;
  double t16440;
  double t19105;
  double t19157;
  double t19167;
  double t18032;
  double t18131;
  double t18252;
  double t18730;
  double t18784;
  double t18798;
  double t18815;
  double t18913;
  double t18998;
  double t19074;
  double t19088;
  double t19104;
  double t19199;
  double t19201;
  double t19251;
  double t20484;
  double t20486;
  double t19290;
  double t20489;
  double t20491;
  double t20417;
  double t14742;
  double t14828;
  double t14847;
  double t14848;
  double t14861;
  double t14862;
  double t14863;
  double t14866;
  double t20524;
  double t20546;
  double t20553;
  double t20560;
  double t20561;
  double t14923;
  double t14930;
  double t15083;
  double t15084;
  double t15119;
  double t15190;
  double t15218;
  double t15222;
  double t15310;
  double t15336;
  double t15361;
  double t15371;
  double t16472;
  double t16474;
  double t16544;
  double t16582;
  double t16583;
  double t16591;
  double t17002;
  double t17034;
  double t17035;
  double t17079;
  double t17081;
  double t17082;
  double t20652;
  double t20653;
  double t20664;
  double t20575;
  double t20576;
  double t20578;
  double t20585;
  double t20586;
  double t20604;
  double t20605;
  double t20606;
  double t20610;
  double t20611;
  double t20612;
  double t20616;
  double t20671;
  double t20754;
  double t20852;
  double t21056;
  double t21060;
  double t20873;
  double t21066;
  double t21067;
  double t20879;
  double t15048;
  double t15049;
  double t15078;
  double t15081;
  double t15591;
  double t15796;
  double t15944;
  double t15947;
  double t15056;
  double t15057;
  double t15067;
  double t15076;
  double t15077;
  double t15082;
  double t15800;
  double t15814;
  double t15906;
  double t15917;
  double t15928;
  double t15948;
  double t15984;
  double t21222;
  double t21257;
  double t19099;
  double t21277;
  double t19189;
  double t19202;
  double t19216;
  double t19256;
  double t20416;
  double t20419;
  double t21295;
  double t20467;
  double t20468;
  double t20470;
  double t21296;
  double t20434;
  double t20436;
  double t20463;
  double t21300;
  double t21305;
  double t21306;
  double t20482;
  double t21311;
  double t20488;
  double t20492;
  double t20493;
  double t21318;
  double t20499;
  double t20500;
  double t20508;
  double t21243;
  double t21261;
  double t20613;
  double t21282;
  double t20669;
  double t20759;
  double t20845;
  double t20864;
  double t20878;
  double t20897;
  double t21369;
  double t20995;
  double t21012;
  double t21019;
  double t21370;
  double t20902;
  double t20903;
  double t20940;
  double t21375;
  double t21378;
  double t21382;
  double t21052;
  double t21386;
  double t21061;
  double t21068;
  double t21069;
  double t21388;
  double t21081;
  double t21091;
  double t21092;
  double t21140;
  double t21142;
  double t21151;
  double t21152;
  double t21162;
  double t21163;
  double t21164;
  double t21165;
  double t21166;
  double t21099;
  double t21101;
  double t21109;
  double t21110;
  double t16023;
  double t16381;
  double t16461;
  double t17037;
  double t17083;
  double t17086;
  double t8315;
  double t8840;
  double t8931;
  double t14857;
  double t14869;
  double t14870;
  double t21276;
  double t21280;
  double t21281;
  double t21284;
  double t21288;
  double t21289;
  double t21317;
  double t21322;
  double t21323;
  double t19250;
  double t20420;
  double t20422;
  double t21343;
  double t21345;
  double t21346;
  double t20495;
  double t20513;
  double t20515;
  double t21387;
  double t21389;
  double t21390;
  double t20849;
  double t20898;
  double t20899;
  double t21418;
  double t21422;
  double t21423;
  double t21080;
  double t21093;
  double t21094;
  double t21169;
  double t21172;
  double t21180;
  double t21181;
  double t21184;
  double t21185;
  double t21186;
  double t21187;
  double t21223;
  double t21224;
  double t21232;
  double t21301;
  double t18257;
  double t21438;
  double t21439;
  double t21440;
  double t21329;
  double t21330;
  double t21331;
  double t20465;
  double t20471;
  double t20472;
  double t21450;
  double t21465;
  double t21468;
  double t21472;
  double t21474;
  double t21188;
  double t21189;
  double t21190;
  double t21199;
  double t21529;
  double t21530;
  double t21532;
  double t21534;
  double t21576;
  double t21577;
  double t21207;
  double t21427;
  double t21535;
  double t21538;
  double t21570;
  double t21571;
  double t21248;
  double t21249;
  double t21254;
  double t21376;
  double t20579;
  double t21487;
  double t21488;
  double t21489;
  double t21411;
  double t21412;
  double t21413;
  double t20959;
  double t21020;
  double t21026;
  double t21500;
  double t21501;
  double t21502;
  double t21503;
  double t21504;
  double t21211;
  double t21216;
  double t21218;
  double t21219;
  double t21539;
  double t21540;
  double t21541;
  double t21542;
  double t21609;
  double t21610;
  double t21220;
  double t21428;
  double t21543;
  double t21544;
  double t21603;
  double t21604;
  t7943 = Cos(var1[3]);
  t7221 = Cos(var1[4]);
  t7405 = Sin(var1[3]);
  t7948 = Sin(var1[4]);
  t8020 = Sin(var1[2]);
  t6532 = Cos(var1[2]);
  t8031 = t7943*t7221;
  t8181 = -1.*t7405*t7948;
  t8184 = t8031 + t8181;
  t8228 = -1.*t7221;
  t8229 = 1. + t8228;
  t8230 = 0.4*t8229;
  t8232 = 0.64*t7221;
  t8238 = t8230 + t8232;
  t7406 = -1.*t7221*t7405;
  t7978 = -1.*t7943*t7948;
  t7993 = t7406 + t7978;
  t8009 = t6532*t7993;
  t8185 = -1.*t8020*t8184;
  t8205 = t8009 + t8185;
  t10741 = Cos(var1[5]);
  t9224 = Cos(var1[6]);
  t9308 = Sin(var1[5]);
  t10744 = Sin(var1[6]);
  t10960 = t10741*t9224;
  t13113 = -1.*t9308*t10744;
  t13202 = t10960 + t13113;
  t14767 = -1.*t9224;
  t14811 = 1. + t14767;
  t14818 = 0.4*t14811;
  t14823 = 0.64*t9224;
  t14824 = t14818 + t14823;
  t10655 = -1.*t9224*t9308;
  t10952 = -1.*t10741*t10744;
  t10953 = t10655 + t10952;
  t10957 = t6532*t10953;
  t14057 = -1.*t8020*t13202;
  t14598 = t10957 + t14057;
  t8211 = -1.*t7943*t8020;
  t8213 = -1.*t6532*t7405;
  t8217 = t8211 + t8213;
  t14877 = t6532*t7943;
  t14878 = -1.*t8020*t7405;
  t14881 = t14877 + t14878;
  t8304 = t6532*t8184;
  t8261 = t7221*t7405;
  t8262 = t7943*t7948;
  t8296 = t8261 + t8262;
  t8302 = -1.*t8020*t8296;
  t8312 = t8302 + t8304;
  t14679 = -1.*t10741*t8020;
  t14686 = -1.*t6532*t9308;
  t14689 = t14679 + t14686;
  t14918 = t6532*t10741;
  t14919 = -1.*t8020*t9308;
  t14920 = t14918 + t14919;
  t14855 = t6532*t13202;
  t14849 = t9224*t9308;
  t14850 = t10741*t10744;
  t14851 = t14849 + t14850;
  t14852 = -1.*t8020*t14851;
  t14856 = t14852 + t14855;
  t14889 = t7943*t8020;
  t14890 = t6532*t7405;
  t14891 = t14889 + t14890;
  t14896 = t8020*t7993;
  t14899 = t14896 + t8304;
  t14905 = t6532*t8296;
  t14907 = t8020*t8184;
  t14912 = t14905 + t14907;
  t14925 = t10741*t8020;
  t14927 = t6532*t9308;
  t14928 = t14925 + t14927;
  t14933 = t8020*t10953;
  t14934 = t14933 + t14855;
  t14936 = t6532*t14851;
  t14937 = t8020*t13202;
  t14938 = t14936 + t14937;
  t16135 = t8238*t7405;
  t16142 = 0.24*t7943*t7948;
  t16220 = t16135 + t16142;
  t16266 = t7943*t8238;
  t16291 = -0.24*t7405*t7948;
  t16313 = t16266 + t16291;
  t16657 = t14824*t9308;
  t16828 = 0.24*t10741*t10744;
  t16930 = t16657 + t16828;
  t17003 = t10741*t14824;
  t17013 = -0.24*t9308*t10744;
  t17023 = t17003 + t17013;
  t8221 = -0.748*t8217;
  t8239 = t8238*t7948;
  t8246 = -0.24*t7221*t7948;
  t8258 = t8239 + t8246;
  t8375 = t8238*t7221;
  t8389 = Power(t7948,2);
  t8463 = 0.24*t8389;
  t8771 = t8375 + t8463;
  t17834 = -1.*t7943*t7221;
  t17865 = t7405*t7948;
  t17966 = t17834 + t17865;
  t17996 = t8020*t17966;
  t18007 = t8009 + t17996;
  t14885 = -13.6*t8217*t14881;
  t14892 = -13.6*t14891*t14881;
  t14960 = Power(t8217,2);
  t14969 = -6.8*t14960;
  t14971 = -6.8*t8217*t14891;
  t14972 = Power(t14881,2);
  t14988 = -6.8*t14972;
  t15012 = -1.*t6532*t7943;
  t15033 = t8020*t7405;
  t15037 = t15012 + t15033;
  t15042 = -6.8*t14881*t15037;
  t15045 = -1.*t8020*t7993;
  t16025 = Power(t7943,2);
  t16028 = 0.11*t16025;
  t16043 = Power(t7405,2);
  t16057 = 0.11*t16043;
  t16097 = t16028 + t16057;
  t16098 = -6.8*t8217*t16097;
  t16264 = -1.*t16220*t8184;
  t16367 = -1.*t7993*t16313;
  t16379 = t16264 + t16367;
  t16393 = t16220*t8296;
  t16398 = t8184*t16313;
  t16440 = t16393 + t16398;
  t19105 = -1.*t8238*t7405;
  t19157 = -0.24*t7943*t7948;
  t19167 = t19105 + t19157;
  t18032 = -0.768*var2[4]*t18007;
  t18131 = -3.2*t8258*t14899;
  t18252 = -3.2*t8771*t18007;
  t18730 = -6.4*t14899*t14912;
  t18784 = -6.4*t14899*t18007;
  t18798 = -3.2*t14899*t8312;
  t18815 = -3.2*t8205*t14912;
  t18913 = t6532*t17966;
  t18998 = t15045 + t18913;
  t19074 = -3.2*t14899*t18998;
  t19088 = -3.2*t8205*t18007;
  t19104 = -3.2*t14899*t16379;
  t19199 = t16220*t8184;
  t19201 = t7993*t16313;
  t19251 = -3.2*t16440*t18007;
  t20484 = -0.24*t7221*t7405;
  t20486 = t20484 + t19157;
  t19290 = -1.*t7993*t16220;
  t20489 = 0.24*t7943*t7221;
  t20491 = t20489 + t16291;
  t20417 = -1.*t16313*t17966;
  t14742 = -0.748*t14689;
  t14828 = t14824*t10744;
  t14847 = -0.24*t9224*t10744;
  t14848 = t14828 + t14847;
  t14861 = t14824*t9224;
  t14862 = Power(t10744,2);
  t14863 = 0.24*t14862;
  t14866 = t14861 + t14863;
  t20524 = -1.*t10741*t9224;
  t20546 = t9308*t10744;
  t20553 = t20524 + t20546;
  t20560 = t8020*t20553;
  t20561 = t10957 + t20560;
  t14923 = -13.6*t14689*t14920;
  t14930 = -13.6*t14928*t14920;
  t15083 = Power(t14689,2);
  t15084 = -6.8*t15083;
  t15119 = -6.8*t14689*t14928;
  t15190 = Power(t14920,2);
  t15218 = -6.8*t15190;
  t15222 = -1.*t6532*t10741;
  t15310 = t8020*t9308;
  t15336 = t15222 + t15310;
  t15361 = -6.8*t14920*t15336;
  t15371 = -1.*t8020*t10953;
  t16472 = Power(t10741,2);
  t16474 = 0.11*t16472;
  t16544 = Power(t9308,2);
  t16582 = 0.11*t16544;
  t16583 = t16474 + t16582;
  t16591 = -6.8*t14689*t16583;
  t17002 = -1.*t16930*t13202;
  t17034 = -1.*t10953*t17023;
  t17035 = t17002 + t17034;
  t17079 = t16930*t14851;
  t17081 = t13202*t17023;
  t17082 = t17079 + t17081;
  t20652 = -1.*t14824*t9308;
  t20653 = -0.24*t10741*t10744;
  t20664 = t20652 + t20653;
  t20575 = -0.768*var2[6]*t20561;
  t20576 = -3.2*t14848*t14934;
  t20578 = -3.2*t14866*t20561;
  t20585 = -6.4*t14934*t14938;
  t20586 = -6.4*t14934*t20561;
  t20604 = -3.2*t14934*t14856;
  t20605 = -3.2*t14598*t14938;
  t20606 = t6532*t20553;
  t20610 = t15371 + t20606;
  t20611 = -3.2*t14934*t20610;
  t20612 = -3.2*t14598*t20561;
  t20616 = -3.2*t14934*t17035;
  t20671 = t16930*t13202;
  t20754 = t10953*t17023;
  t20852 = -3.2*t17082*t20561;
  t21056 = -0.24*t9224*t9308;
  t21060 = t21056 + t20653;
  t20873 = -1.*t10953*t16930;
  t21066 = 0.24*t10741*t9224;
  t21067 = t21066 + t17013;
  t20879 = -1.*t17023*t20553;
  t15048 = -1.*t6532*t8184;
  t15049 = t15045 + t15048;
  t15078 = -1.*t6532*t8296;
  t15081 = t15078 + t8185;
  t15591 = -1.*t6532*t13202;
  t15796 = t15371 + t15591;
  t15944 = -1.*t6532*t14851;
  t15947 = t15944 + t14057;
  t15056 = -3.2*t15049*t14899;
  t15057 = Power(t8312,2);
  t15067 = -3.2*t15057;
  t15076 = Power(t8205,2);
  t15077 = -3.2*t15076;
  t15082 = -3.2*t15081*t14912;
  t15800 = -3.2*t15796*t14934;
  t15814 = Power(t14856,2);
  t15906 = -3.2*t15814;
  t15917 = Power(t14598,2);
  t15928 = -3.2*t15917;
  t15948 = -3.2*t15947*t14938;
  t15984 = t14969 + t14971 + t14988 + t15042 + t15056 + t15067 + t15077 + t15082 + t15084 + t15119 + t15218 + t15361 + t15800 + t15906 + t15928 + t15948;
  t21222 = -0.748*t15037;
  t21257 = -13.6*t8217*t15037;
  t19099 = t14969 + t14971 + t14988 + t15042 + t18798 + t18815 + t19074 + t19088;
  t21277 = -6.8*t15037*t16097;
  t19189 = t19167*t8184;
  t19202 = t8296*t16313;
  t19216 = t19189 + t19199 + t19201 + t19202;
  t19256 = -1.*t7993*t19167;
  t20416 = -1.*t8184*t16313;
  t20419 = t19256 + t19290 + t20416 + t20417;
  t21295 = -0.768*var2[4]*t18998;
  t20467 = Power(t7221,2);
  t20468 = -0.24*t20467;
  t20470 = t8375 + t20468;
  t21296 = -3.2*t8258*t8205;
  t20434 = -1.*t8238*t7948;
  t20436 = 0.24*t7221*t7948;
  t20463 = t20434 + t20436;
  t21300 = -3.2*t8771*t18998;
  t21305 = -6.4*t8312*t8205;
  t21306 = -6.4*t8205*t18998;
  t20482 = t18798 + t18815 + t19074 + t19088;
  t21311 = -3.2*t8205*t16379;
  t20488 = t20486*t8184;
  t20492 = t8296*t20491;
  t20493 = t20488 + t19199 + t19201 + t20492;
  t21318 = -3.2*t16440*t18998;
  t20499 = -1.*t7993*t20486;
  t20500 = -1.*t8184*t20491;
  t20508 = t20499 + t19290 + t20500 + t20417;
  t21243 = -0.748*t15336;
  t21261 = -13.6*t14689*t15336;
  t20613 = t15084 + t15119 + t15218 + t15361 + t20604 + t20605 + t20611 + t20612;
  t21282 = -6.8*t15336*t16583;
  t20669 = t20664*t13202;
  t20759 = t14851*t17023;
  t20845 = t20669 + t20671 + t20754 + t20759;
  t20864 = -1.*t10953*t20664;
  t20878 = -1.*t13202*t17023;
  t20897 = t20864 + t20873 + t20878 + t20879;
  t21369 = -0.768*var2[6]*t20610;
  t20995 = Power(t9224,2);
  t21012 = -0.24*t20995;
  t21019 = t14861 + t21012;
  t21370 = -3.2*t14848*t14598;
  t20902 = -1.*t14824*t10744;
  t20903 = 0.24*t9224*t10744;
  t20940 = t20902 + t20903;
  t21375 = -3.2*t14866*t20610;
  t21378 = -6.4*t14856*t14598;
  t21382 = -6.4*t14598*t20610;
  t21052 = t20604 + t20605 + t20611 + t20612;
  t21386 = -3.2*t14598*t17035;
  t21061 = t21060*t13202;
  t21068 = t14851*t21067;
  t21069 = t21061 + t20671 + t20754 + t21068;
  t21388 = -3.2*t17082*t20610;
  t21081 = -1.*t10953*t21060;
  t21091 = -1.*t13202*t21067;
  t21092 = t21081 + t20873 + t21091 + t20879;
  t21140 = -6.8*t8217*t14881;
  t21142 = -6.8*t14891*t14881;
  t21151 = -3.2*t14899*t8205;
  t21152 = -3.2*t8312*t14912;
  t21162 = -6.8*t14689*t14920;
  t21163 = -6.8*t14928*t14920;
  t21164 = -3.2*t14934*t14598;
  t21165 = -3.2*t14856*t14938;
  t21166 = t21140 + t21142 + t21151 + t21152 + t21162 + t21163 + t21164 + t21165;
  t21099 = Power(t6532,2);
  t21101 = -12.*t21099;
  t21109 = Power(t8020,2);
  t21110 = -12.*t21109;
  t16023 = 2.88*t8020;
  t16381 = -3.2*t8312*t16379;
  t16461 = -3.2*t8205*t16440;
  t17037 = -3.2*t14856*t17035;
  t17083 = -3.2*t14598*t17082;
  t17086 = t16023 + t16098 + t16381 + t16461 + t16591 + t17037 + t17083;
  t8315 = -3.2*t8258*t8312;
  t8840 = -3.2*t8771*t8205;
  t8931 = t8221 + t8315 + t8840;
  t14857 = -3.2*t14848*t14856;
  t14869 = -3.2*t14866*t14598;
  t14870 = t14742 + t14857 + t14869;
  t21276 = 2.88*t6532;
  t21280 = -3.2*t15081*t16379;
  t21281 = -3.2*t15049*t16440;
  t21284 = -3.2*t15947*t17035;
  t21288 = -3.2*t15796*t17082;
  t21289 = t21276 + t21277 + t21280 + t21281 + t21282 + t21284 + t21288;
  t21317 = -3.2*t8205*t19216;
  t21322 = -3.2*t8312*t20419;
  t21323 = t21277 + t21311 + t21317 + t21318 + t21322;
  t19250 = -3.2*t14899*t19216;
  t20420 = -3.2*t14912*t20419;
  t20422 = t16098 + t19104 + t19250 + t19251 + t20420;
  t21343 = -3.2*t8205*t20493;
  t21345 = -3.2*t8312*t20508;
  t21346 = t21311 + t21343 + t21318 + t21345;
  t20495 = -3.2*t14899*t20493;
  t20513 = -3.2*t14912*t20508;
  t20515 = t19104 + t20495 + t19251 + t20513;
  t21387 = -3.2*t14598*t20845;
  t21389 = -3.2*t14856*t20897;
  t21390 = t21282 + t21386 + t21387 + t21388 + t21389;
  t20849 = -3.2*t14934*t20845;
  t20898 = -3.2*t14938*t20897;
  t20899 = t16591 + t20616 + t20849 + t20852 + t20898;
  t21418 = -3.2*t14598*t21069;
  t21422 = -3.2*t14856*t21092;
  t21423 = t21386 + t21418 + t21388 + t21422;
  t21080 = -3.2*t14934*t21069;
  t21093 = -3.2*t14938*t21092;
  t21094 = t20616 + t21080 + t20852 + t21093;
  t21169 = -2.88*t6532;
  t21172 = -6.8*t14881*t16097;
  t21180 = -3.2*t14912*t16379;
  t21181 = -3.2*t14899*t16440;
  t21184 = -6.8*t14920*t16583;
  t21185 = -3.2*t14938*t17035;
  t21186 = -3.2*t14934*t17082;
  t21187 = t21169 + t21172 + t21180 + t21181 + t21184 + t21185 + t21186;
  t21223 = -3.2*t8771*t15049;
  t21224 = -3.2*t8258*t15081;
  t21232 = t21222 + t21223 + t21224;
  t21301 = t21222 + t21296 + t21300;
  t18257 = t8221 + t18131 + t18252;
  t21438 = -3.2*t8771*t19216;
  t21439 = -3.2*t8258*t20419;
  t21440 = t21438 + t21439;
  t21329 = -3.2*t20470*t8312;
  t21330 = -3.2*t20463*t8205;
  t21331 = t21329 + t21296 + t21330 + t21300;
  t20465 = -3.2*t20463*t14899;
  t20471 = -3.2*t20470*t14912;
  t20472 = t18131 + t20465 + t20471 + t18252;
  t21450 = -3.2*t20470*t16379;
  t21465 = -3.2*t20463*t16440;
  t21468 = -3.2*t8771*t20493;
  t21472 = -3.2*t8258*t20508;
  t21474 = t21450 + t21465 + t21468 + t21472;
  t21188 = -0.748*t14881;
  t21189 = -3.2*t8771*t14899;
  t21190 = -3.2*t8258*t14912;
  t21199 = t21188 + t21189 + t21190;
  t21529 = -0.748*t16097;
  t21530 = -3.2*t8258*t16379;
  t21532 = -3.2*t8771*t16440;
  t21534 = -0.67 + t21529 + t21530 + t21532;
  t21576 = -0.768*var2[1]*t18998;
  t21577 = -0.768*var2[0]*t18007;
  t21207 = -0.768*t14899;
  t21427 = -0.768*t8205;
  t21535 = -0.768*t16440;
  t21538 = -0.2 + t21535;
  t21570 = -0.768*t8771;
  t21571 = -0.2 + t21570;
  t21248 = -3.2*t14866*t15796;
  t21249 = -3.2*t14848*t15947;
  t21254 = t21243 + t21248 + t21249;
  t21376 = t21243 + t21370 + t21375;
  t20579 = t14742 + t20576 + t20578;
  t21487 = -3.2*t14866*t20845;
  t21488 = -3.2*t14848*t20897;
  t21489 = t21487 + t21488;
  t21411 = -3.2*t21019*t14856;
  t21412 = -3.2*t20940*t14598;
  t21413 = t21411 + t21370 + t21412 + t21375;
  t20959 = -3.2*t20940*t14934;
  t21020 = -3.2*t21019*t14938;
  t21026 = t20576 + t20959 + t21020 + t20578;
  t21500 = -3.2*t21019*t17035;
  t21501 = -3.2*t20940*t17082;
  t21502 = -3.2*t14866*t21069;
  t21503 = -3.2*t14848*t21092;
  t21504 = t21500 + t21501 + t21502 + t21503;
  t21211 = -0.748*t14920;
  t21216 = -3.2*t14866*t14934;
  t21218 = -3.2*t14848*t14938;
  t21219 = t21211 + t21216 + t21218;
  t21539 = -0.748*t16583;
  t21540 = -3.2*t14848*t17035;
  t21541 = -3.2*t14866*t17082;
  t21542 = -0.67 + t21539 + t21540 + t21541;
  t21609 = -0.768*var2[1]*t20610;
  t21610 = -0.768*var2[0]*t20561;
  t21220 = -0.768*t14934;
  t21428 = -0.768*t14598;
  t21543 = -0.768*t17082;
  t21544 = -0.2 + t21543;
  t21603 = -0.768*t14866;
  t21604 = -0.2 + t21603;
  p_output1[0]=(t14885 + t14892 + t14923 + t14930 - 6.4*t14598*t14934 - 6.4*t14856*t14938 - 6.4*t14899*t8205 - 6.4*t14912*t8312)*var2[0] + t15984*var2[1] + t17086*var2[2] + t8931*var2[3] - 0.768*t8205*var2[4] + t14870*var2[5] - 0.768*t14598*var2[6];
  p_output1[1]=t18032 + (t14885 + t14892 + t18730 + t18784)*var2[0] + t19099*var2[1] + t20422*var2[2] + t18257*var2[3];
  p_output1[2]=t18032 + (t18730 + t18784)*var2[0] + t20482*var2[1] + t20515*var2[2] + t20472*var2[3];
  p_output1[3]=t20575 + (t14923 + t14930 + t20585 + t20586)*var2[0] + t20613*var2[1] + t20899*var2[2] + t20579*var2[5];
  p_output1[4]=t20575 + (t20585 + t20586)*var2[0] + t21052*var2[1] + t21094*var2[2] + t21026*var2[5];
  p_output1[5]=-6.8*Power(t14891,2) - 3.2*Power(t14899,2) - 3.2*Power(t14912,2) - 6.8*Power(t14928,2) - 3.2*Power(t14934,2) - 3.2*Power(t14938,2) + t14988 + t15218 + t21101 + t21110;
  p_output1[6]=t21166;
  p_output1[7]=t21187;
  p_output1[8]=t21199;
  p_output1[9]=t21207;
  p_output1[10]=t21219;
  p_output1[11]=t21220;
  p_output1[12]=t15984*var2[0] + (t14885 + t14923 - 6.4*t14598*t15796 - 6.4*t14856*t15947 + t21257 + t21261 - 6.4*t15049*t8205 - 6.4*t15081*t8312)*var2[1] + t21289*var2[2] + t21232*var2[3] - 0.768*t15049*var2[4] + t21254*var2[5] - 0.768*t15796*var2[6];
  p_output1[13]=t21295 + t19099*var2[0] + (t14885 + t21257 + t21305 + t21306)*var2[1] + t21323*var2[2] + t21301*var2[3];
  p_output1[14]=t21295 + t20482*var2[0] + (t21305 + t21306)*var2[1] + t21346*var2[2] + t21331*var2[3];
  p_output1[15]=t21369 + t20613*var2[0] + (t14923 + t21261 + t21378 + t21382)*var2[1] + t21390*var2[2] + t21376*var2[5];
  p_output1[16]=t21369 + t21052*var2[0] + (t21378 + t21382)*var2[1] + t21423*var2[2] + t21413*var2[5];
  p_output1[17]=t21166;
  p_output1[18]=t14969 + t14988 + t15067 + t15077 + t15084 + t15218 + t15906 + t15928 + t21101 + t21110;
  p_output1[19]=t17086;
  p_output1[20]=t8931;
  p_output1[21]=t21427;
  p_output1[22]=t14870;
  p_output1[23]=t21428;
  p_output1[24]=t17086*var2[0] + t21289*var2[1];
  p_output1[25]=t20422*var2[0] + t21323*var2[1] + (-6.4*t16440*t19216 - 6.4*t16379*t20419)*var2[2] + t21440*var2[3] - 0.768*t19216*var2[4];
  p_output1[26]=t20515*var2[0] + t21346*var2[1] + (-6.4*t16440*t20493 - 6.4*t16379*t20508)*var2[2] + t21474*var2[3] - 0.768*t20493*var2[4];
  p_output1[27]=t20899*var2[0] + t21390*var2[1] + (-6.4*t17082*t20845 - 6.4*t17035*t20897)*var2[2] + t21489*var2[5] - 0.768*t20845*var2[6];
  p_output1[28]=t21094*var2[0] + t21423*var2[1] + (-6.4*t17082*t21069 - 6.4*t17035*t21092)*var2[2] + t21504*var2[5] - 0.768*t21069*var2[6];
  p_output1[29]=t21187;
  p_output1[30]=t17086;
  p_output1[31]=-3.3612 - 6.8*Power(t16097,2) - 3.2*Power(t16379,2) - 3.2*Power(t16440,2) - 6.8*Power(t16583,2) - 3.2*Power(t17035,2) - 3.2*Power(t17082,2);
  p_output1[32]=t21534;
  p_output1[33]=t21538;
  p_output1[34]=t21542;
  p_output1[35]=t21544;
  p_output1[36]=t8931*var2[0] + t21232*var2[1];
  p_output1[37]=t18257*var2[0] + t21301*var2[1] + t21440*var2[2];
  p_output1[38]=t20472*var2[0] + t21331*var2[1] + t21474*var2[2] + (-6.4*t20470*t8258 - 6.4*t20463*t8771)*var2[3] - 0.768*t20463*var2[4];
  p_output1[39]=t21199;
  p_output1[40]=t8931;
  p_output1[41]=t21534;
  p_output1[42]=-1.58228 - 3.2*Power(t8258,2) - 3.2*Power(t8771,2);
  p_output1[43]=t21571;
  p_output1[44]=-0.768*t8205*var2[0] - 0.768*t15049*var2[1];
  p_output1[45]=t21576 + t21577 - 0.768*t19216*var2[2];
  p_output1[46]=t21576 + t21577 - 0.768*t20493*var2[2] - 0.768*t20463*var2[3];
  p_output1[47]=t21207;
  p_output1[48]=t21427;
  p_output1[49]=t21538;
  p_output1[50]=t21571;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t14870*var2[0] + t21254*var2[1];
  p_output1[53]=t20579*var2[0] + t21376*var2[1] + t21489*var2[2];
  p_output1[54]=t21026*var2[0] + t21413*var2[1] + t21504*var2[2] + (-6.4*t14866*t20940 - 6.4*t14848*t21019)*var2[5] - 0.768*t20940*var2[6];
  p_output1[55]=t21219;
  p_output1[56]=t14870;
  p_output1[57]=t21542;
  p_output1[58]=-1.58228 - 3.2*Power(t14848,2) - 3.2*Power(t14866,2);
  p_output1[59]=t21604;
  p_output1[60]=-0.768*t14598*var2[0] - 0.768*t15796*var2[1];
  p_output1[61]=t21609 + t21610 - 0.768*t20845*var2[2];
  p_output1[62]=t21609 + t21610 - 0.768*t21069*var2[2] - 0.768*t20940*var2[5];
  p_output1[63]=t21220;
  p_output1[64]=t21428;
  p_output1[65]=t21544;
  p_output1[66]=t21604;
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
