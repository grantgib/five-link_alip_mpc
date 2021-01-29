/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:08:48 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t263;
  double t32;
  double t378;
  double t401;
  double t557;
  double t647;
  double t723;
  double t974;
  double t1000;
  double t1156;
  double t1163;
  double t1173;
  double t1175;
  double t1179;
  double t1180;
  double t1181;
  double t472;
  double t505;
  double t516;
  double t391;
  double t402;
  double t434;
  double t576;
  double t664;
  double t670;
  double t703;
  double t1001;
  double t1002;
  double t1036;
  double t1059;
  double t1060;
  double t1067;
  double t1092;
  double t1117;
  double t1168;
  double t1169;
  double t1170;
  double t1161;
  double t1164;
  double t1165;
  double t1174;
  double t1176;
  double t1177;
  double t1178;
  double t1182;
  double t1183;
  double t1186;
  double t1187;
  double t1188;
  double t1189;
  double t1190;
  double t1191;
  double t2358;
  double t2426;
  double t2432;
  double t2449;
  double t2471;
  double t2519;
  double t2567;
  double t2579;
  double t2620;
  double t2644;
  double t2660;
  double t3227;
  double t3239;
  double t3275;
  double t3319;
  double t3363;
  double t3483;
  double t3618;
  double t3658;
  double t3698;
  double t3792;
  double t3806;
  double t1457;
  double t1462;
  double t1470;
  double t1195;
  double t1210;
  double t1211;
  double t3976;
  double t3983;
  double t3993;
  double t1502;
  double t1535;
  double t3914;
  double t3916;
  double t3927;
  double t3938;
  double t1700;
  double t1788;
  double t1801;
  double t1625;
  double t1628;
  double t1640;
  double t4318;
  double t4366;
  double t4381;
  double t1851;
  double t1876;
  double t4165;
  double t4174;
  double t4239;
  double t4260;
  double t517;
  double t1171;
  double t2232;
  double t2286;
  double t2294;
  double t2305;
  double t2327;
  double t2592;
  double t2691;
  double t2694;
  double t2701;
  double t2717;
  double t2772;
  double t2890;
  double t2931;
  double t2955;
  double t2970;
  double t3033;
  double t3686;
  double t3838;
  double t3858;
  double t3861;
  double t3863;
  double t3876;
  double t4450;
  double t4451;
  double t4513;
  double t4517;
  double t4520;
  double t5590;
  double t5598;
  double t5599;
  double t5604;
  double t5605;
  double t4771;
  double t4815;
  double t4840;
  double t4895;
  double t5096;
  double t5146;
  double t5151;
  double t5161;
  double t5163;
  double t5174;
  double t5177;
  double t5189;
  double t5198;
  double t5206;
  double t5208;
  double t5545;
  double t5546;
  double t5549;
  double t5751;
  double t5753;
  double t5756;
  double t5608;
  double t5627;
  double t5628;
  double t5647;
  double t5648;
  double t5682;
  double t5690;
  double t5692;
  double t5696;
  double t5702;
  double t5709;
  double t5742;
  double t5761;
  double t5762;
  double t5779;
  double t6134;
  double t6135;
  double t5802;
  double t6160;
  double t6173;
  double t5822;
  double t4552;
  double t4564;
  double t4591;
  double t4627;
  double t4629;
  double t6317;
  double t6326;
  double t6329;
  double t6339;
  double t6354;
  double t4960;
  double t4971;
  double t5376;
  double t5384;
  double t5386;
  double t5403;
  double t5416;
  double t5422;
  double t5433;
  double t5442;
  double t5444;
  double t5557;
  double t6480;
  double t6482;
  double t6485;
  double t6357;
  double t6370;
  double t6371;
  double t6385;
  double t6399;
  double t6421;
  double t6429;
  double t6438;
  double t6451;
  double t6457;
  double t6467;
  double t6479;
  double t6491;
  double t6493;
  double t6537;
  double t6705;
  double t6711;
  double t6553;
  double t6720;
  double t6732;
  double t6557;
  double t35;
  double t271;
  double t451;
  double t1017;
  double t1154;
  double t1166;
  double t1184;
  double t1192;
  double t1212;
  double t1213;
  double t1481;
  double t1540;
  double t1641;
  double t1656;
  double t1848;
  double t1895;
  double t1942;
  double t197;
  double t332;
  double t524;
  double t5243;
  double t5274;
  double t1172;
  double t5468;
  double t5518;
  double t5211;
  double t5237;
  double t5336;
  double t5342;
  double t5456;
  double t5457;
  double t5528;
  double t5538;
  double t5239;
  double t5253;
  double t5275;
  double t5372;
  double t5462;
  double t5512;
  double t5525;
  double t5540;
  double t5541;
  double t1967;
  double t7312;
  double t7360;
  double t5714;
  double t7445;
  double t5758;
  double t5763;
  double t5767;
  double t5787;
  double t5813;
  double t5855;
  double t7483;
  double t5969;
  double t6023;
  double t6028;
  double t7484;
  double t5929;
  double t5932;
  double t5934;
  double t7488;
  double t7501;
  double t7509;
  double t6127;
  double t7534;
  double t6137;
  double t6212;
  double t6228;
  double t7540;
  double t6251;
  double t6263;
  double t6272;
  double t7339;
  double t7379;
  double t6474;
  double t7453;
  double t6487;
  double t6525;
  double t6526;
  double t6551;
  double t6556;
  double t6560;
  double t7580;
  double t6613;
  double t6619;
  double t6627;
  double t7581;
  double t6580;
  double t6584;
  double t6594;
  double t7582;
  double t7587;
  double t7588;
  double t6694;
  double t7593;
  double t6718;
  double t6738;
  double t6753;
  double t7597;
  double t6838;
  double t6850;
  double t6852;
  double t6955;
  double t6956;
  double t6957;
  double t6965;
  double t6974;
  double t6980;
  double t6986;
  double t6989;
  double t6990;
  double t6911;
  double t6928;
  double t5548;
  double t5551;
  double t5555;
  double t5559;
  double t5562;
  double t5581;
  double t4524;
  double t4531;
  double t4532;
  double t4634;
  double t4645;
  double t4721;
  double t2328;
  double t2699;
  double t2876;
  double t3057;
  double t3859;
  double t3904;
  double t3906;
  double t7162;
  double t7173;
  double t7177;
  double t7184;
  double t7185;
  double t7198;
  double t7213;
  double t7230;
  double t7449;
  double t7450;
  double t7465;
  double t7471;
  double t7472;
  double t7732;
  double t7738;
  double t7745;
  double t7747;
  double t7748;
  double t7750;
  double t7758;
  double t7761;
  double t7766;
  double t7767;
  double t7777;
  double t7778;
  double t7785;
  double t7797;
  double t7803;
  double t7804;
  double t7536;
  double t7550;
  double t7552;
  double t5778;
  double t5873;
  double t5888;
  double t7572;
  double t7574;
  double t7575;
  double t6238;
  double t6278;
  double t6281;
  double t7594;
  double t7610;
  double t7611;
  double t6530;
  double t6564;
  double t6571;
  double t7656;
  double t7658;
  double t7660;
  double t6803;
  double t6865;
  double t6903;
  double t7009;
  double t7016;
  double t7028;
  double t7029;
  double t7042;
  double t7048;
  double t7049;
  double t7086;
  double t7683;
  double t7690;
  double t7695;
  double t7698;
  double t7702;
  double t7707;
  double t7934;
  double t3909;
  double t3973;
  double t4028;
  double t4062;
  double t7236;
  double t7253;
  double t7261;
  double t7268;
  double t7711;
  double t7712;
  double t7713;
  double t7719;
  double t7315;
  double t7322;
  double t7326;
  double t7494;
  double t5630;
  double t7836;
  double t7841;
  double t7846;
  double t7917;
  double t7935;
  double t7936;
  double t7937;
  double t7938;
  double t7941;
  double t7942;
  double t7943;
  double t7945;
  double t7951;
  double t7953;
  double t7954;
  double t7955;
  double t7562;
  double t7563;
  double t7564;
  double t5938;
  double t6070;
  double t6080;
  double t7960;
  double t7962;
  double t7968;
  double t7969;
  double t7975;
  double t7087;
  double t7100;
  double t7101;
  double t7104;
  double t8171;
  double t8173;
  double t8178;
  double t8184;
  double t8312;
  double t8321;
  double t8239;
  double t8264;
  double t8267;
  double t8269;
  double t8273;
  double t8288;
  double t8290;
  double t8299;
  double t8300;
  double t8309;
  double t4111;
  double t7285;
  double t7720;
  double t7723;
  double t8367;
  double t8385;
  double t8710;
  double t8716;
  double t7105;
  double t7681;
  double t8186;
  double t8203;
  double t8598;
  double t8605;
  double t8730;
  double t4116;
  double t4312;
  double t4382;
  double t4383;
  double t7286;
  double t7288;
  double t7294;
  double t7296;
  double t7726;
  double t7727;
  double t7728;
  double t7729;
  double t7345;
  double t7347;
  double t7358;
  double t7583;
  double t6375;
  double t8015;
  double t8028;
  double t8033;
  double t7619;
  double t7622;
  double t7627;
  double t6608;
  double t6633;
  double t6640;
  double t8067;
  double t8070;
  double t8071;
  double t8074;
  double t8078;
  double t7118;
  double t7120;
  double t7125;
  double t7128;
  double t8209;
  double t8213;
  double t8235;
  double t8236;
  double t8822;
  double t8824;
  double t4411;
  double t7298;
  double t7730;
  double t7731;
  double t8827;
  double t8828;
  double t8896;
  double t8897;
  double t7138;
  double t7682;
  double t8237;
  double t8238;
  double t8890;
  double t8891;
  t263 = Sin(var2[2]);
  t32 = Cos(var2[2]);
  t378 = Cos(var2[3]);
  t401 = Sin(var2[3]);
  t557 = Cos(var2[4]);
  t647 = Sin(var2[4]);
  t723 = t378*t557;
  t974 = -1.*t401*t647;
  t1000 = t723 + t974;
  t1156 = Cos(var2[5]);
  t1163 = Sin(var2[5]);
  t1173 = Cos(var2[6]);
  t1175 = Sin(var2[6]);
  t1179 = t1156*t1173;
  t1180 = -1.*t1163*t1175;
  t1181 = t1179 + t1180;
  t472 = t32*t378;
  t505 = -1.*t263*t401;
  t516 = t472 + t505;
  t391 = t378*t263;
  t402 = t32*t401;
  t434 = t391 + t402;
  t576 = -1.*t557*t401;
  t664 = -1.*t378*t647;
  t670 = t576 + t664;
  t703 = t263*t670;
  t1001 = t32*t1000;
  t1002 = t703 + t1001;
  t1036 = t557*t401;
  t1059 = t378*t647;
  t1060 = t1036 + t1059;
  t1067 = t32*t1060;
  t1092 = t263*t1000;
  t1117 = t1067 + t1092;
  t1168 = t32*t1156;
  t1169 = -1.*t263*t1163;
  t1170 = t1168 + t1169;
  t1161 = t1156*t263;
  t1164 = t32*t1163;
  t1165 = t1161 + t1164;
  t1174 = -1.*t1173*t1163;
  t1176 = -1.*t1156*t1175;
  t1177 = t1174 + t1176;
  t1178 = t263*t1177;
  t1182 = t32*t1181;
  t1183 = t1178 + t1182;
  t1186 = t1173*t1163;
  t1187 = t1156*t1175;
  t1188 = t1186 + t1187;
  t1189 = t32*t1188;
  t1190 = t263*t1181;
  t1191 = t1189 + t1190;
  t2358 = -1.*t557;
  t2426 = 1. + t2358;
  t2432 = 0.4*t2426;
  t2449 = 0.64*t557;
  t2471 = t2432 + t2449;
  t2519 = t2471*t401;
  t2567 = 0.24*t378*t647;
  t2579 = t2519 + t2567;
  t2620 = t378*t2471;
  t2644 = -0.24*t401*t647;
  t2660 = t2620 + t2644;
  t3227 = -1.*t1173;
  t3239 = 1. + t3227;
  t3275 = 0.4*t3239;
  t3319 = 0.64*t1173;
  t3363 = t3275 + t3319;
  t3483 = t3363*t1163;
  t3618 = 0.24*t1156*t1175;
  t3658 = t3483 + t3618;
  t3698 = t1156*t3363;
  t3792 = -0.24*t1163*t1175;
  t3806 = t3698 + t3792;
  t1457 = t32*t670;
  t1462 = -1.*t263*t1000;
  t1470 = t1457 + t1462;
  t1195 = -1.*t378*t263;
  t1210 = -1.*t32*t401;
  t1211 = t1195 + t1210;
  t3976 = t2471*t647;
  t3983 = -0.24*t557*t647;
  t3993 = t3976 + t3983;
  t1502 = -1.*t263*t1060;
  t1535 = t1502 + t1001;
  t3914 = t2471*t557;
  t3916 = Power(t647,2);
  t3927 = 0.24*t3916;
  t3938 = t3914 + t3927;
  t1700 = t32*t1177;
  t1788 = -1.*t263*t1181;
  t1801 = t1700 + t1788;
  t1625 = -1.*t1156*t263;
  t1628 = -1.*t32*t1163;
  t1640 = t1625 + t1628;
  t4318 = t3363*t1175;
  t4366 = -0.24*t1173*t1175;
  t4381 = t4318 + t4366;
  t1851 = -1.*t263*t1188;
  t1876 = t1851 + t1182;
  t4165 = t3363*t1173;
  t4174 = Power(t1175,2);
  t4239 = 0.24*t4174;
  t4260 = t4165 + t4239;
  t517 = Power(t516,2);
  t1171 = Power(t1170,2);
  t2232 = Power(t378,2);
  t2286 = 0.11*t2232;
  t2294 = Power(t401,2);
  t2305 = 0.11*t2294;
  t2327 = t2286 + t2305;
  t2592 = -1.*t2579*t1000;
  t2691 = -1.*t670*t2660;
  t2694 = t2592 + t2691;
  t2701 = t2579*t1060;
  t2717 = t1000*t2660;
  t2772 = t2701 + t2717;
  t2890 = Power(t1156,2);
  t2931 = 0.11*t2890;
  t2955 = Power(t1163,2);
  t2970 = 0.11*t2955;
  t3033 = t2931 + t2970;
  t3686 = -1.*t3658*t1181;
  t3838 = -1.*t1177*t3806;
  t3858 = t3686 + t3838;
  t3861 = t3658*t1188;
  t3863 = t1181*t3806;
  t3876 = t3861 + t3863;
  t4450 = -1.*var1[4];
  t4451 = var3[4] + t4450;
  t4513 = -1.*var1[3];
  t4517 = var3[3] + t4513;
  t4520 = 0.748*t1211;
  t5590 = -1.*t378*t557;
  t5598 = t401*t647;
  t5599 = t5590 + t5598;
  t5604 = t263*t5599;
  t5605 = t1457 + t5604;
  t4771 = -1.*var1[0];
  t4815 = var3[0] + t4771;
  t4840 = 13.6*t1211*t516;
  t4895 = 13.6*t434*t516;
  t5096 = -1.*var1[1];
  t5146 = var3[1] + t5096;
  t5151 = Power(t1211,2);
  t5161 = 6.8*t5151;
  t5163 = 6.8*t1211*t434;
  t5174 = 6.8*t517;
  t5177 = -1.*t32*t378;
  t5189 = t263*t401;
  t5198 = t5177 + t5189;
  t5206 = 6.8*t516*t5198;
  t5208 = -1.*t263*t670;
  t5545 = -1.*var1[2];
  t5546 = var3[2] + t5545;
  t5549 = 6.8*t1211*t2327;
  t5751 = -1.*t2471*t401;
  t5753 = -0.24*t378*t647;
  t5756 = t5751 + t5753;
  t5608 = 0.768*t4451*t5605;
  t5627 = 3.2*t3993*t1002;
  t5628 = 3.2*t3938*t5605;
  t5647 = 6.4*t1002*t1117;
  t5648 = 6.4*t1002*t5605;
  t5682 = 3.2*t1002*t1535;
  t5690 = 3.2*t1470*t1117;
  t5692 = t32*t5599;
  t5696 = t5208 + t5692;
  t5702 = 3.2*t1002*t5696;
  t5709 = 3.2*t1470*t5605;
  t5742 = 3.2*t1002*t2694;
  t5761 = t2579*t1000;
  t5762 = t670*t2660;
  t5779 = 3.2*t2772*t5605;
  t6134 = -0.24*t557*t401;
  t6135 = t6134 + t5753;
  t5802 = -1.*t670*t2579;
  t6160 = 0.24*t378*t557;
  t6173 = t6160 + t2644;
  t5822 = -1.*t2660*t5599;
  t4552 = -1.*var1[6];
  t4564 = var3[6] + t4552;
  t4591 = -1.*var1[5];
  t4627 = var3[5] + t4591;
  t4629 = 0.748*t1640;
  t6317 = -1.*t1156*t1173;
  t6326 = t1163*t1175;
  t6329 = t6317 + t6326;
  t6339 = t263*t6329;
  t6354 = t1700 + t6339;
  t4960 = 13.6*t1640*t1170;
  t4971 = 13.6*t1165*t1170;
  t5376 = Power(t1640,2);
  t5384 = 6.8*t5376;
  t5386 = 6.8*t1640*t1165;
  t5403 = 6.8*t1171;
  t5416 = -1.*t32*t1156;
  t5422 = t263*t1163;
  t5433 = t5416 + t5422;
  t5442 = 6.8*t1170*t5433;
  t5444 = -1.*t263*t1177;
  t5557 = 6.8*t1640*t3033;
  t6480 = -1.*t3363*t1163;
  t6482 = -0.24*t1156*t1175;
  t6485 = t6480 + t6482;
  t6357 = 0.768*t4564*t6354;
  t6370 = 3.2*t4381*t1183;
  t6371 = 3.2*t4260*t6354;
  t6385 = 6.4*t1183*t1191;
  t6399 = 6.4*t1183*t6354;
  t6421 = 3.2*t1183*t1876;
  t6429 = 3.2*t1801*t1191;
  t6438 = t32*t6329;
  t6451 = t5444 + t6438;
  t6457 = 3.2*t1183*t6451;
  t6467 = 3.2*t1801*t6354;
  t6479 = 3.2*t1183*t3858;
  t6491 = t3658*t1181;
  t6493 = t1177*t3806;
  t6537 = 3.2*t3876*t6354;
  t6705 = -0.24*t1173*t1163;
  t6711 = t6705 + t6482;
  t6553 = -1.*t1177*t3658;
  t6720 = 0.24*t1156*t1173;
  t6732 = t6720 + t3792;
  t6557 = -1.*t3806*t6329;
  t35 = Power(t32,2);
  t271 = Power(t263,2);
  t451 = Power(t434,2);
  t1017 = Power(t1002,2);
  t1154 = Power(t1117,2);
  t1166 = Power(t1165,2);
  t1184 = Power(t1183,2);
  t1192 = Power(t1191,2);
  t1212 = -6.8*t1211*t516;
  t1213 = -6.8*t434*t516;
  t1481 = -3.2*t1002*t1470;
  t1540 = -3.2*t1535*t1117;
  t1641 = -6.8*t1640*t1170;
  t1656 = -6.8*t1165*t1170;
  t1848 = -3.2*t1183*t1801;
  t1895 = -3.2*t1876*t1191;
  t1942 = t1212 + t1213 + t1481 + t1540 + t1641 + t1656 + t1848 + t1895;
  t197 = -12.*t35;
  t332 = -12.*t271;
  t524 = -6.8*t517;
  t5243 = Power(t1535,2);
  t5274 = Power(t1470,2);
  t1172 = -6.8*t1171;
  t5468 = Power(t1876,2);
  t5518 = Power(t1801,2);
  t5211 = -1.*t32*t1000;
  t5237 = t5208 + t5211;
  t5336 = -1.*t32*t1060;
  t5342 = t5336 + t1462;
  t5456 = -1.*t32*t1181;
  t5457 = t5444 + t5456;
  t5528 = -1.*t32*t1188;
  t5538 = t5528 + t1788;
  t5239 = 3.2*t5237*t1002;
  t5253 = 3.2*t5243;
  t5275 = 3.2*t5274;
  t5372 = 3.2*t5342*t1117;
  t5462 = 3.2*t5457*t1183;
  t5512 = 3.2*t5468;
  t5525 = 3.2*t5518;
  t5540 = 3.2*t5538*t1191;
  t5541 = t5161 + t5163 + t5174 + t5206 + t5239 + t5253 + t5275 + t5372 + t5384 + t5386 + t5403 + t5442 + t5462 + t5512 + t5525 + t5540;
  t1967 = -2.88*t32;
  t7312 = 0.748*t5198;
  t7360 = 13.6*t1211*t5198;
  t5714 = t5161 + t5163 + t5174 + t5206 + t5682 + t5690 + t5702 + t5709;
  t7445 = 6.8*t5198*t2327;
  t5758 = t5756*t1000;
  t5763 = t1060*t2660;
  t5767 = t5758 + t5761 + t5762 + t5763;
  t5787 = -1.*t670*t5756;
  t5813 = -1.*t1000*t2660;
  t5855 = t5787 + t5802 + t5813 + t5822;
  t7483 = 0.768*t4451*t5696;
  t5969 = Power(t557,2);
  t6023 = -0.24*t5969;
  t6028 = t3914 + t6023;
  t7484 = 3.2*t3993*t1470;
  t5929 = -1.*t2471*t647;
  t5932 = 0.24*t557*t647;
  t5934 = t5929 + t5932;
  t7488 = 3.2*t3938*t5696;
  t7501 = 6.4*t1535*t1470;
  t7509 = 6.4*t1470*t5696;
  t6127 = t5682 + t5690 + t5702 + t5709;
  t7534 = 3.2*t1470*t2694;
  t6137 = t6135*t1000;
  t6212 = t1060*t6173;
  t6228 = t6137 + t5761 + t5762 + t6212;
  t7540 = 3.2*t2772*t5696;
  t6251 = -1.*t670*t6135;
  t6263 = -1.*t1000*t6173;
  t6272 = t6251 + t5802 + t6263 + t5822;
  t7339 = 0.748*t5433;
  t7379 = 13.6*t1640*t5433;
  t6474 = t5384 + t5386 + t5403 + t5442 + t6421 + t6429 + t6457 + t6467;
  t7453 = 6.8*t5433*t3033;
  t6487 = t6485*t1181;
  t6525 = t1188*t3806;
  t6526 = t6487 + t6491 + t6493 + t6525;
  t6551 = -1.*t1177*t6485;
  t6556 = -1.*t1181*t3806;
  t6560 = t6551 + t6553 + t6556 + t6557;
  t7580 = 0.768*t4564*t6451;
  t6613 = Power(t1173,2);
  t6619 = -0.24*t6613;
  t6627 = t4165 + t6619;
  t7581 = 3.2*t4381*t1801;
  t6580 = -1.*t3363*t1175;
  t6584 = 0.24*t1173*t1175;
  t6594 = t6580 + t6584;
  t7582 = 3.2*t4260*t6451;
  t7587 = 6.4*t1876*t1801;
  t7588 = 6.4*t1801*t6451;
  t6694 = t6421 + t6429 + t6457 + t6467;
  t7593 = 3.2*t1801*t3858;
  t6718 = t6711*t1181;
  t6738 = t1188*t6732;
  t6753 = t6718 + t6491 + t6493 + t6738;
  t7597 = 3.2*t3876*t6451;
  t6838 = -1.*t1177*t6711;
  t6850 = -1.*t1181*t6732;
  t6852 = t6838 + t6553 + t6850 + t6557;
  t6955 = 6.8*t1211*t516;
  t6956 = 6.8*t434*t516;
  t6957 = 3.2*t1002*t1470;
  t6965 = 3.2*t1535*t1117;
  t6974 = 6.8*t1640*t1170;
  t6980 = 6.8*t1165*t1170;
  t6986 = 3.2*t1183*t1801;
  t6989 = 3.2*t1876*t1191;
  t6990 = t6955 + t6956 + t6957 + t6965 + t6974 + t6980 + t6986 + t6989;
  t6911 = 12.*t35;
  t6928 = 12.*t271;
  t5548 = -2.88*t263;
  t5551 = 3.2*t1535*t2694;
  t5555 = 3.2*t1470*t2772;
  t5559 = 3.2*t1876*t3858;
  t5562 = 3.2*t1801*t3876;
  t5581 = t5548 + t5549 + t5551 + t5555 + t5557 + t5559 + t5562;
  t4524 = 3.2*t3993*t1535;
  t4531 = 3.2*t3938*t1470;
  t4532 = t4520 + t4524 + t4531;
  t4634 = 3.2*t4381*t1876;
  t4645 = 3.2*t4260*t1801;
  t4721 = t4629 + t4634 + t4645;
  t2328 = -6.8*t516*t2327;
  t2699 = -3.2*t1117*t2694;
  t2876 = -3.2*t1002*t2772;
  t3057 = -6.8*t1170*t3033;
  t3859 = -3.2*t1191*t3858;
  t3904 = -3.2*t1183*t3876;
  t3906 = t1967 + t2328 + t2699 + t2876 + t3057 + t3859 + t3904;
  t7162 = 2.88*t263;
  t7173 = -6.8*t1211*t2327;
  t7177 = -3.2*t1535*t2694;
  t7184 = -3.2*t1470*t2772;
  t7185 = -6.8*t1640*t3033;
  t7198 = -3.2*t1876*t3858;
  t7213 = -3.2*t1801*t3876;
  t7230 = t7162 + t7173 + t7177 + t7184 + t7185 + t7198 + t7213;
  t7449 = 3.2*t5342*t2694;
  t7450 = 3.2*t5237*t2772;
  t7465 = 3.2*t5538*t3858;
  t7471 = 3.2*t5457*t3876;
  t7472 = t1967 + t7445 + t7449 + t7450 + t7453 + t7465 + t7471;
  t7732 = 0.4*t2426*t5198;
  t7738 = -0.4*t434*t647;
  t7745 = t557*t5198;
  t7747 = t434*t647;
  t7748 = t7745 + t7747;
  t7750 = 0.8*t7748;
  t7758 = t7732 + t7738 + t7750;
  t7761 = -1.*var4[2]*t7758;
  t7766 = 0.4*t2426*t1211;
  t7767 = -0.4*t5198*t647;
  t7777 = t557*t1211;
  t7778 = t5198*t647;
  t7785 = t7777 + t7778;
  t7797 = 0.8*t7785;
  t7803 = t7766 + t7767 + t7797;
  t7804 = -1.*var4[0]*t7803;
  t7536 = 3.2*t1470*t5767;
  t7550 = 3.2*t1535*t5855;
  t7552 = t7445 + t7534 + t7536 + t7540 + t7550;
  t5778 = 3.2*t1002*t5767;
  t5873 = 3.2*t1117*t5855;
  t5888 = t5549 + t5742 + t5778 + t5779 + t5873;
  t7572 = 3.2*t1470*t6228;
  t7574 = 3.2*t1535*t6272;
  t7575 = t7534 + t7572 + t7540 + t7574;
  t6238 = 3.2*t1002*t6228;
  t6278 = 3.2*t1117*t6272;
  t6281 = t5742 + t6238 + t5779 + t6278;
  t7594 = 3.2*t1801*t6526;
  t7610 = 3.2*t1876*t6560;
  t7611 = t7453 + t7593 + t7594 + t7597 + t7610;
  t6530 = 3.2*t1183*t6526;
  t6564 = 3.2*t1191*t6560;
  t6571 = t5557 + t6479 + t6530 + t6537 + t6564;
  t7656 = 3.2*t1801*t6753;
  t7658 = 3.2*t1876*t6852;
  t7660 = t7593 + t7656 + t7597 + t7658;
  t6803 = 3.2*t1183*t6753;
  t6865 = 3.2*t1191*t6852;
  t6903 = t6479 + t6803 + t6537 + t6865;
  t7009 = 2.88*t32;
  t7016 = 6.8*t516*t2327;
  t7028 = 3.2*t1117*t2694;
  t7029 = 3.2*t1002*t2772;
  t7042 = 6.8*t1170*t3033;
  t7048 = 3.2*t1191*t3858;
  t7049 = 3.2*t1183*t3876;
  t7086 = t7009 + t7016 + t7028 + t7029 + t7042 + t7048 + t7049;
  t7683 = Power(t2327,2);
  t7690 = Power(t2694,2);
  t7695 = Power(t2772,2);
  t7698 = Power(t3033,2);
  t7702 = Power(t3858,2);
  t7707 = Power(t3876,2);
  t7934 = 0.4*t1211*t647;
  t3909 = -0.748*t516;
  t3973 = -3.2*t3938*t1002;
  t4028 = -3.2*t3993*t1117;
  t4062 = t3909 + t3973 + t4028;
  t7236 = -0.748*t1211;
  t7253 = -3.2*t3993*t1535;
  t7261 = -3.2*t3938*t1470;
  t7268 = t7236 + t7253 + t7261;
  t7711 = -0.748*t2327;
  t7712 = -3.2*t3993*t2694;
  t7713 = -3.2*t3938*t2772;
  t7719 = -0.67 + t7711 + t7712 + t7713;
  t7315 = 3.2*t3938*t5237;
  t7322 = 3.2*t3993*t5342;
  t7326 = t7312 + t7315 + t7322;
  t7494 = t7312 + t7484 + t7488;
  t5630 = t4520 + t5627 + t5628;
  t7836 = 3.2*t3938*t5767;
  t7841 = 3.2*t3993*t5855;
  t7846 = t7836 + t7841;
  t7917 = -0.4*t557*t5198;
  t7935 = -1.*t1211*t647;
  t7936 = t7745 + t7935;
  t7937 = 0.8*t7936;
  t7938 = t7917 + t7934 + t7937;
  t7941 = -1.*var4[2]*t7938;
  t7942 = -0.4*t557*t1211;
  t7943 = 0.4*t516*t647;
  t7945 = -1.*t516*t647;
  t7951 = t7777 + t7945;
  t7953 = 0.8*t7951;
  t7954 = t7942 + t7943 + t7953;
  t7955 = -1.*var4[0]*t7954;
  t7562 = 3.2*t6028*t1535;
  t7563 = 3.2*t5934*t1470;
  t7564 = t7562 + t7484 + t7563 + t7488;
  t5938 = 3.2*t5934*t1002;
  t6070 = 3.2*t6028*t1117;
  t6080 = t5627 + t5938 + t6070 + t5628;
  t7960 = 3.2*t6028*t2694;
  t7962 = 3.2*t5934*t2772;
  t7968 = 3.2*t3938*t6228;
  t7969 = 3.2*t3993*t6272;
  t7975 = t7960 + t7962 + t7968 + t7969;
  t7087 = 0.748*t516;
  t7100 = 3.2*t3938*t1002;
  t7101 = 3.2*t3993*t1117;
  t7104 = t7087 + t7100 + t7101;
  t8171 = 0.748*t2327;
  t8173 = 3.2*t3993*t2694;
  t8178 = 3.2*t3938*t2772;
  t8184 = 0.67 + t8171 + t8173 + t8178;
  t8312 = Power(t3993,2);
  t8321 = Power(t3938,2);
  t8239 = -0.4*t2426*t516;
  t8264 = t557*t516;
  t8267 = t1211*t647;
  t8269 = t8264 + t8267;
  t8273 = -0.8*t8269;
  t8288 = t8239 + t7934 + t8273;
  t8290 = -0.4*t2426*t1211;
  t8299 = 0.4*t5198*t647;
  t8300 = -0.8*t7785;
  t8309 = t8290 + t8299 + t8300;
  t4111 = -0.768*t1002;
  t7285 = -0.768*t1470;
  t7720 = -0.768*t2772;
  t7723 = -0.2 + t7720;
  t8367 = -0.768*t3938;
  t8385 = -0.2 + t8367;
  t8710 = 0.768*t5146*t5696;
  t8716 = 0.768*t4815*t5605;
  t7105 = 0.768*t1002;
  t7681 = 0.768*t1470;
  t8186 = 0.768*t2772;
  t8203 = 0.2 + t8186;
  t8598 = 0.768*t3938;
  t8605 = 0.2 + t8598;
  t8730 = 0.4*t557*t516;
  t4116 = -0.748*t1170;
  t4312 = -3.2*t4260*t1183;
  t4382 = -3.2*t4381*t1191;
  t4383 = t4116 + t4312 + t4382;
  t7286 = -0.748*t1640;
  t7288 = -3.2*t4381*t1876;
  t7294 = -3.2*t4260*t1801;
  t7296 = t7286 + t7288 + t7294;
  t7726 = -0.748*t3033;
  t7727 = -3.2*t4381*t3858;
  t7728 = -3.2*t4260*t3876;
  t7729 = -0.67 + t7726 + t7727 + t7728;
  t7345 = 3.2*t4260*t5457;
  t7347 = 3.2*t4381*t5538;
  t7358 = t7339 + t7345 + t7347;
  t7583 = t7339 + t7581 + t7582;
  t6375 = t4629 + t6370 + t6371;
  t8015 = 3.2*t4260*t6526;
  t8028 = 3.2*t4381*t6560;
  t8033 = t8015 + t8028;
  t7619 = 3.2*t6627*t1876;
  t7622 = 3.2*t6594*t1801;
  t7627 = t7619 + t7581 + t7622 + t7582;
  t6608 = 3.2*t6594*t1183;
  t6633 = 3.2*t6627*t1191;
  t6640 = t6370 + t6608 + t6633 + t6371;
  t8067 = 3.2*t6627*t3858;
  t8070 = 3.2*t6594*t3876;
  t8071 = 3.2*t4260*t6753;
  t8074 = 3.2*t4381*t6852;
  t8078 = t8067 + t8070 + t8071 + t8074;
  t7118 = 0.748*t1170;
  t7120 = 3.2*t4260*t1183;
  t7125 = 3.2*t4381*t1191;
  t7128 = t7118 + t7120 + t7125;
  t8209 = 0.748*t3033;
  t8213 = 3.2*t4381*t3858;
  t8235 = 3.2*t4260*t3876;
  t8236 = 0.67 + t8209 + t8213 + t8235;
  t8822 = Power(t4381,2);
  t8824 = Power(t4260,2);
  t4411 = -0.768*t1183;
  t7298 = -0.768*t1801;
  t7730 = -0.768*t3876;
  t7731 = -0.2 + t7730;
  t8827 = -0.768*t4260;
  t8828 = -0.2 + t8827;
  t8896 = 0.768*t5146*t6451;
  t8897 = 0.768*t4815*t6354;
  t7138 = 0.768*t1183;
  t7682 = 0.768*t1801;
  t8237 = 0.768*t3876;
  t8238 = 0.2 + t8237;
  t8890 = 0.768*t4260;
  t8891 = 0.2 + t8890;
  p_output1[0]=-3.2*t1017 - 3.2*t1154 - 6.8*t1166 + t1172 - 3.2*t1184 - 3.2*t1192 + t197 + t332 - 6.8*t451 + t524;
  p_output1[1]=t1942;
  p_output1[2]=t3906;
  p_output1[3]=t4062;
  p_output1[4]=t4111;
  p_output1[5]=t4383;
  p_output1[6]=t4411;
  p_output1[7]=0.768*t1470*t4451 + t4517*t4532 + 0.768*t1801*t4564 + t4627*t4721 + t4815*(6.4*t1002*t1470 + 6.4*t1117*t1535 + 6.4*t1183*t1801 + 6.4*t1191*t1876 + t4840 + t4895 + t4960 + t4971) + t5146*t5541 + t5546*t5581;
  p_output1[8]=t5608 + t4517*t5630 + t4815*(t4840 + t4895 + t5647 + t5648) + t5146*t5714 + t5546*t5888;
  p_output1[9]=t5608 + t4815*(t5647 + t5648) + t4517*t6080 + t5146*t6127 + t5546*t6281;
  p_output1[10]=t6357 + t4627*t6375 + t4815*(t4960 + t4971 + t6385 + t6399) + t5146*t6474 + t5546*t6571;
  p_output1[11]=t6357 + t4815*(t6385 + t6399) + t4627*t6640 + t5146*t6694 + t5546*t6903;
  p_output1[12]=3.2*t1017 + 3.2*t1154 + 6.8*t1166 + 3.2*t1184 + 3.2*t1192 + 6.8*t451 + t5174 + t5403 + t6911 + t6928;
  p_output1[13]=t6990;
  p_output1[14]=t7086;
  p_output1[15]=t7104;
  p_output1[16]=t7105;
  p_output1[17]=t7128;
  p_output1[18]=t7138;
  p_output1[19]=-1.;
  p_output1[20]=t1942;
  p_output1[21]=t1172 + t197 + t332 - 6.8*t5151 + t524 - 3.2*t5243 - 3.2*t5274 - 6.8*t5376 - 3.2*t5468 - 3.2*t5518;
  p_output1[22]=t7230;
  p_output1[23]=t7268;
  p_output1[24]=t7285;
  p_output1[25]=t7296;
  p_output1[26]=t7298;
  p_output1[27]=0.768*t4451*t5237 + 0.768*t4564*t5457 + t4815*t5541 + t4517*t7326 + t4627*t7358 + t5146*(t4840 + t4960 + 6.4*t1470*t5237 + 6.4*t1535*t5342 + 6.4*t1801*t5457 + 6.4*t1876*t5538 + t7360 + t7379) + t5546*t7472;
  p_output1[28]=t4815*t5714 + t7483 + t4517*t7494 + t5146*(t4840 + t7360 + t7501 + t7509) + t5546*t7552;
  p_output1[29]=t4815*t6127 + t7483 + t5146*(t7501 + t7509) + t4517*t7564 + t5546*t7575;
  p_output1[30]=t4815*t6474 + t7580 + t4627*t7583 + t5146*(t4960 + t7379 + t7587 + t7588) + t5546*t7611;
  p_output1[31]=t4815*t6694 + t7580 + t5146*(t7587 + t7588) + t4627*t7627 + t5546*t7660;
  p_output1[32]=t6990;
  p_output1[33]=t5161 + t5174 + t5253 + t5275 + t5384 + t5403 + t5512 + t5525 + t6911 + t6928;
  p_output1[34]=t5581;
  p_output1[35]=t4532;
  p_output1[36]=t7681;
  p_output1[37]=t4721;
  p_output1[38]=t7682;
  p_output1[39]=-1.;
  p_output1[40]=t3906;
  p_output1[41]=t7230;
  p_output1[42]=-3.3612 - 6.8*t7683 - 3.2*t7690 - 3.2*t7695 - 6.8*t7698 - 3.2*t7702 - 3.2*t7707;
  p_output1[43]=t7719;
  p_output1[44]=t7723;
  p_output1[45]=t7729;
  p_output1[46]=t7731;
  p_output1[47]=t4815*t5581 + t5146*t7472 + t7761 + t7804;
  p_output1[48]=0.768*t4451*t5767 + t5546*(6.4*t2772*t5767 + 6.4*t2694*t5855) + t4815*t5888 + t5146*t7552 + t7761 + t7804 + t4517*t7846;
  p_output1[49]=0.768*t4451*t6228 + t5546*(6.4*t2772*t6228 + 6.4*t2694*t6272) + t4815*t6281 + t5146*t7575 + t7941 + t7955 + t4517*t7975;
  p_output1[50]=0.768*t4564*t6526 + t5546*(6.4*t3876*t6526 + 6.4*t3858*t6560) + t4815*t6571 + t5146*t7611 + t4627*t8033;
  p_output1[51]=0.768*t4564*t6753 + t5546*(6.4*t3876*t6753 + 6.4*t3858*t6852) + t4815*t6903 + t5146*t7660 + t4627*t8078;
  p_output1[52]=t7086;
  p_output1[53]=t5581;
  p_output1[54]=3.3612 + 6.8*t7683 + 3.2*t7690 + 3.2*t7695 + 6.8*t7698 + 3.2*t7702 + 3.2*t7707;
  p_output1[55]=t8184;
  p_output1[56]=t8203;
  p_output1[57]=t8236;
  p_output1[58]=t8238;
  p_output1[59]=t8288;
  p_output1[60]=t8309;
  p_output1[61]=t4062;
  p_output1[62]=t7268;
  p_output1[63]=t7719;
  p_output1[64]=-1.58228 - 3.2*t8312 - 3.2*t8321;
  p_output1[65]=t8385;
  p_output1[66]=t4532*t4815 + t5146*t7326 + t7761 + t7804;
  p_output1[67]=t4815*t5630 + t5146*t7494 + t7761 + t7804 + t5546*t7846;
  p_output1[68]=0.768*t4451*t5934 + t4517*(6.4*t3938*t5934 + 6.4*t3993*t6028) + t4815*t6080 + t5146*t7564 + t7941 + t7955 + t5546*t7975;
  p_output1[69]=t7104;
  p_output1[70]=t4532;
  p_output1[71]=t8184;
  p_output1[72]=1.58228 + 3.2*t8312 + 3.2*t8321;
  p_output1[73]=t8605;
  p_output1[74]=t8288;
  p_output1[75]=t8309;
  p_output1[76]=t4111;
  p_output1[77]=t7285;
  p_output1[78]=t7723;
  p_output1[79]=t8385;
  p_output1[80]=-1.2143199999999998;
  p_output1[81]=0.768*t1470*t4815 + 0.768*t5146*t5237 + t7941 + t7955;
  p_output1[82]=0.768*t5546*t5767 + t7941 + t7955 + t8710 + t8716;
  p_output1[83]=0.768*t4517*t5934 + 0.768*t5546*t6228 + t8710 + t8716 - 1.*(0.4*t434*t557 + t7943 + 0.8*(-1.*t434*t557 + t7945))*var4[0] - 1.*(t7934 + 0.8*(-1.*t516*t557 + t7935) + t8730)*var4[2];
  p_output1[84]=t7105;
  p_output1[85]=t7681;
  p_output1[86]=t8203;
  p_output1[87]=t8605;
  p_output1[88]=1.2143199999999998;
  p_output1[89]=t7738 - 0.8*(-1.*t434*t647 + t8264) + t8730;
  p_output1[90]=0.4*t1211*t557 - 0.4*t516*t647 - 0.8*t7951;
  p_output1[91]=t4383;
  p_output1[92]=t7296;
  p_output1[93]=t7729;
  p_output1[94]=-1.58228 - 3.2*t8822 - 3.2*t8824;
  p_output1[95]=t8828;
  p_output1[96]=t4721*t4815 + t5146*t7358;
  p_output1[97]=t4815*t6375 + t5146*t7583 + t5546*t8033;
  p_output1[98]=0.768*t4564*t6594 + t4627*(6.4*t4260*t6594 + 6.4*t4381*t6627) + t4815*t6640 + t5146*t7627 + t5546*t8078;
  p_output1[99]=t7128;
  p_output1[100]=t4721;
  p_output1[101]=t8236;
  p_output1[102]=1.58228 + 3.2*t8822 + 3.2*t8824;
  p_output1[103]=t8891;
  p_output1[104]=t4411;
  p_output1[105]=t7298;
  p_output1[106]=t7731;
  p_output1[107]=t8828;
  p_output1[108]=-1.2143199999999998;
  p_output1[109]=0.768*t1801*t4815 + 0.768*t5146*t5457;
  p_output1[110]=0.768*t5546*t6526 + t8896 + t8897;
  p_output1[111]=0.768*t4627*t6594 + 0.768*t5546*t6753 + t8896 + t8897;
  p_output1[112]=t7138;
  p_output1[113]=t7682;
  p_output1[114]=t8238;
  p_output1[115]=t8891;
  p_output1[116]=1.2143199999999998;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 117, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMapRightImpact.hh"

namespace RightImpact
{

void J_dxDiscreteMapRightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE