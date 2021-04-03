/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:06 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t573;
  double t325;
  double t366;
  double t393;
  double t498;
  double t529;
  double t629;
  double t645;
  double t648;
  double t688;
  double t689;
  double t774;
  double t792;
  double t1217;
  double t1367;
  double t1424;
  double t1511;
  double t1596;
  double t1710;
  double t1721;
  double t1785;
  double t1830;
  double t1898;
  double t1924;
  double t2037;
  double t2151;
  double t2175;
  double t2176;
  double t3906;
  double t5538;
  double t5543;
  double t5984;
  double t6021;
  double t7064;
  double t7191;
  double t7036;
  double t7206;
  double t7035;
  double t7169;
  double t7214;
  double t7220;
  double t7230;
  double t7260;
  double t7265;
  double t7291;
  double t7352;
  double t7375;
  double t7433;
  double t7718;
  double t7790;
  double t7818;
  double t7673;
  double t7676;
  double t7848;
  double t7869;
  double t8089;
  double t8111;
  double t8052;
  double t8091;
  double t8116;
  double t8131;
  double t8182;
  double t8231;
  double t8248;
  double t8258;
  double t8353;
  double t8523;
  double t8524;
  double t8541;
  double t7708;
  double t7824;
  double t7892;
  double t7894;
  double t7896;
  double t7946;
  double t7947;
  double t7952;
  double t7954;
  double t8431;
  double t8481;
  double t8483;
  double t8507;
  double t8583;
  double t8593;
  double t8626;
  double t8639;
  double t8646;
  double t8654;
  double t7224;
  double t7349;
  double t7435;
  double t7508;
  double t7516;
  double t7554;
  double t7557;
  double t7616;
  double t7664;
  double t7665;
  double t7964;
  double t7976;
  double t8010;
  double t8047;
  double t9244;
  double t9266;
  double t9315;
  double t9577;
  double t9701;
  double t8156;
  double t8344;
  double t8375;
  double t8384;
  double t8385;
  double t8389;
  double t8430;
  double t8773;
  double t8777;
  double t10164;
  double t10165;
  double t10167;
  double t10234;
  double t10239;
  double t10240;
  double t10232;
  double t10233;
  double t10242;
  double t10244;
  double t10245;
  double t10247;
  double t10248;
  double t10249;
  double t10251;
  double t10273;
  double t10274;
  double t10252;
  double t10254;
  double t10255;
  double t10257;
  double t10258;
  double t10259;
  double t10260;
  double t10262;
  double t10263;
  double t3951;
  double t4011;
  double t4022;
  double t4260;
  double t4489;
  double t4609;
  double t4640;
  double t4784;
  double t4883;
  double t4916;
  double t4940;
  double t5519;
  double t5520;
  double t5521;
  double t5536;
  double t5537;
  double t5539;
  double t5540;
  double t5541;
  double t5542;
  double t10271;
  double t10272;
  double t10296;
  double t10297;
  double t10298;
  double t10299;
  double t13221;
  double t13209;
  double t13210;
  double t13222;
  double t13342;
  double t13206;
  double t13207;
  double t13208;
  double t13211;
  double t13212;
  double t10276;
  double t10277;
  double t10278;
  double t10279;
  double t13213;
  double t13214;
  double t13215;
  double t13216;
  double t13217;
  double t13218;
  double t13219;
  double t13220;
  double t13380;
  double t13381;
  double t13382;
  double t13383;
  double t13443;
  double t13444;
  double t8900;
  double t13453;
  double t13454;
  double t13455;
  double t13456;
  double t13457;
  double t13459;
  double t13460;
  double t13461;
  double t13462;
  double t13463;
  double t13464;
  double t13465;
  double t13466;
  double t9709;
  double t13458;
  double t13467;
  double t13468;
  double t13469;
  double t13470;
  double t10168;
  double t13486;
  double t13487;
  double t13637;
  double t13622;
  double t13627;
  double t13638;
  double t13639;
  double t13618;
  double t13619;
  double t13620;
  double t13628;
  double t13629;
  double t9430;
  double t13630;
  double t13631;
  double t13632;
  double t13633;
  double t13634;
  double t13635;
  double t13636;
  double t13640;
  double t13641;
  double t13642;
  double t13643;
  double t10169;
  double t10171;
  double t13484;
  double t13387;
  double t13388;
  double t13404;
  double t13413;
  t573 = -1.*var5[1];
  t325 = -1. + var6[0];
  t366 = -1. + var7[0];
  t393 = 1/t366;
  t498 = -1.*t325*t393;
  t529 = 1. + t498;
  t629 = var5[0] + t573;
  t645 = Power(t629,-7);
  t648 = -1.*var1[0];
  t688 = t648 + var1[1];
  t689 = t325*t393*t688;
  t774 = t573 + var1[0] + t689;
  t792 = Power(t774,5);
  t1217 = Power(t629,-6);
  t1367 = Power(t774,4);
  t1424 = 1/t629;
  t1511 = -1.*t1424*t774;
  t1596 = 1. + t1511;
  t1710 = Power(t629,-5);
  t1721 = Power(t774,3);
  t1785 = Power(t1596,2);
  t1830 = Power(t629,-4);
  t1898 = Power(t774,2);
  t1924 = Power(t1596,3);
  t2037 = Power(t629,-3);
  t2151 = Power(t1596,4);
  t2175 = Power(t629,-2);
  t2176 = Power(t1596,5);
  t3906 = Power(t1596,6);
  t5538 = Power(t774,6);
  t5543 = Power(t629,-8);
  t5984 = -1.*t2175*t774;
  t6021 = t1424 + t5984;
  t7064 = Cos(var2[3]);
  t7191 = Sin(var2[2]);
  t7036 = Cos(var2[2]);
  t7206 = Sin(var2[3]);
  t7035 = Cos(var2[4]);
  t7169 = -1.*t7036*t7064;
  t7214 = t7191*t7206;
  t7220 = t7169 + t7214;
  t7230 = -1.*t7064*t7191;
  t7260 = -1.*t7036*t7206;
  t7265 = t7230 + t7260;
  t7291 = Sin(var2[4]);
  t7352 = t7035*t7220;
  t7375 = -1.*t7265*t7291;
  t7433 = t7352 + t7375;
  t7718 = t7064*t7191;
  t7790 = t7036*t7206;
  t7818 = t7718 + t7790;
  t7673 = -1.*t7035;
  t7676 = 1. + t7673;
  t7848 = t7818*t7291;
  t7869 = t7352 + t7848;
  t8089 = Cos(var2[5]);
  t8111 = Sin(var2[5]);
  t8052 = Cos(var2[6]);
  t8091 = -1.*t7036*t8089;
  t8116 = t7191*t8111;
  t8131 = t8091 + t8116;
  t8182 = -1.*t8089*t7191;
  t8231 = -1.*t7036*t8111;
  t8248 = t8182 + t8231;
  t8258 = Sin(var2[6]);
  t8353 = t8052*t8131;
  t8523 = t8089*t7191;
  t8524 = t7036*t8111;
  t8541 = t8523 + t8524;
  t7708 = -0.4*t7676*t7220;
  t7824 = 0.4*t7818*t7291;
  t7892 = -0.8*t7869;
  t7894 = 0.748*t7220;
  t7896 = 0.4*t7676*t7220;
  t7946 = -0.4*t7818*t7291;
  t7947 = 0.64*t7869;
  t7952 = t7896 + t7946 + t7947;
  t7954 = 3.2*t7952;
  t8431 = 0.748*t8131;
  t8481 = -1.*t8052;
  t8483 = 1. + t8481;
  t8507 = 0.4*t8483*t8131;
  t8583 = -0.4*t8541*t8258;
  t8593 = t8541*t8258;
  t8626 = t8353 + t8593;
  t8639 = 0.64*t8626;
  t8646 = t8507 + t8583 + t8639;
  t8654 = 3.2*t8646;
  t7224 = 0.4*t7035*t7220;
  t7349 = -0.4*t7265*t7291;
  t7435 = -0.8*t7433;
  t7508 = -0.4*t7035*t7220;
  t7516 = 0.4*t7265*t7291;
  t7554 = 0.64*t7433;
  t7557 = t7508 + t7516 + t7554;
  t7616 = 0.1*t7557;
  t7664 = t7224 + t7349 + t7435 + t7616;
  t7665 = var3[4]*t7664;
  t7964 = t7894 + t7954;
  t7976 = 0.03125*t7964;
  t8010 = t7708 + t7824 + t7892 + t7976;
  t8047 = var3[3]*t8010;
  t9244 = t7036*t7064;
  t9266 = -1.*t7191*t7206;
  t9315 = t9244 + t9266;
  t9577 = -1.*t7035*t9315;
  t9701 = t9577 + t7375;
  t8156 = -0.4*t8052*t8131;
  t8344 = 0.4*t8248*t8258;
  t8375 = -1.*t8248*t8258;
  t8384 = t8353 + t8375;
  t8385 = 0.64*t8384;
  t8389 = t8156 + t8344 + t8385;
  t8430 = 0.1*var3[6]*t8389;
  t8773 = t8431 + t8654;
  t8777 = 0.03125*var3[5]*t8773;
  t10164 = t7036*t8089;
  t10165 = -1.*t7191*t8111;
  t10167 = t10164 + t10165;
  t10234 = t7035*t7265;
  t10239 = t7220*t7291;
  t10240 = t10234 + t10239;
  t10232 = -0.4*t7676*t7265;
  t10233 = 0.4*t7220*t7291;
  t10242 = -0.8*t10240;
  t10244 = 0.748*t7265;
  t10245 = 0.4*t7676*t7265;
  t10247 = -0.4*t7220*t7291;
  t10248 = 0.64*t10240;
  t10249 = t10245 + t10247 + t10248;
  t10251 = 3.2*t10249;
  t10273 = -1.*t9315*t7291;
  t10274 = t10234 + t10273;
  t10252 = 0.748*t8248;
  t10254 = 0.4*t8483*t8248;
  t10255 = -0.4*t8131*t8258;
  t10257 = t8052*t8248;
  t10258 = t8131*t8258;
  t10259 = t10257 + t10258;
  t10260 = 0.64*t10259;
  t10262 = t10254 + t10255 + t10260;
  t10263 = 3.2*t10262;
  t3951 = 7.*t1424*t3906;
  t4011 = 42.*t2175*t774*t2176;
  t4022 = -7.*t1424*t3906;
  t4260 = t4011 + t4022;
  t4489 = 105.*t2037*t1898*t2151;
  t4609 = -42.*t2175*t774*t2176;
  t4640 = t4489 + t4609;
  t4784 = 140.*t1830*t1721*t1924;
  t4883 = -105.*t2037*t1898*t2151;
  t4916 = t4784 + t4883;
  t4940 = 105.*t1710*t1367*t1785;
  t5519 = -140.*t1830*t1721*t1924;
  t5520 = t4940 + t5519;
  t5521 = 42.*t1217*t792*t1596;
  t5536 = -105.*t1710*t1367*t1785;
  t5537 = t5521 + t5536;
  t5539 = 7.*t645*t5538;
  t5540 = -42.*t1217*t792*t1596;
  t5541 = t5539 + t5540;
  t5542 = -7.*t645*t5538;
  t10271 = 0.4*t7035*t7265;
  t10272 = -0.4*t9315*t7291;
  t10296 = -0.4*t8052*t8248;
  t10297 = 0.4*t10167*t8258;
  t10298 = -1.*t10167*t8258;
  t10299 = t10257 + t10298;
  t13221 = 0.8*t10259;
  t13209 = -0.748*t7265;
  t13210 = -3.2*t10249;
  t13222 = -0.748*t8248;
  t13342 = -3.2*t10262;
  t13206 = -0.64*t10274;
  t13207 = t10271 + t10272 + t13206;
  t13208 = 0.1*var3[4]*t13207;
  t13211 = t13209 + t13210;
  t13212 = 0.03125*var3[3]*t13211;
  t10276 = -0.4*t7035*t7265;
  t10277 = 0.4*t9315*t7291;
  t10278 = 0.64*t10274;
  t10279 = t10276 + t10277 + t10278;
  t13213 = 0.8*t10299;
  t13214 = 0.4*t8052*t8248;
  t13215 = -0.4*t10167*t8258;
  t13216 = -0.64*t10299;
  t13217 = t13214 + t13215 + t13216;
  t13218 = 0.1*t13217;
  t13219 = t10296 + t10297 + t13213 + t13218;
  t13220 = var3[6]*t13219;
  t13380 = t13222 + t13342;
  t13381 = 0.03125*t13380;
  t13382 = t10254 + t10255 + t13221 + t13381;
  t13383 = var3[5]*t13382;
  t13443 = -1.*t8052*t8541;
  t13444 = t13443 + t10298;
  t8900 = -2.88*t7036;
  t13453 = 0.4*t8483*t10167;
  t13454 = -0.4*t8248*t8258;
  t13455 = t8052*t10167;
  t13456 = t8248*t8258;
  t13457 = t13455 + t13456;
  t13459 = -0.748*t9315;
  t13460 = 0.4*t7676*t9315;
  t13461 = t7035*t9315;
  t13462 = t7265*t7291;
  t13463 = t13461 + t13462;
  t13464 = 0.64*t13463;
  t13465 = t13460 + t7349 + t13464;
  t13466 = -3.2*t13465;
  t9709 = 0.4*t7035*t9315;
  t13458 = 0.8*t13457;
  t13467 = -0.748*t10167;
  t13468 = 0.64*t13457;
  t13469 = t13453 + t13454 + t13468;
  t13470 = -3.2*t13469;
  t10168 = 0.4*t8052*t10167;
  t13486 = -1.*t8541*t8258;
  t13487 = t13455 + t13486;
  t13637 = 0.8*t8626;
  t13622 = -0.748*t7220;
  t13627 = -3.2*t7952;
  t13638 = -0.748*t8131;
  t13639 = -3.2*t8646;
  t13618 = -0.64*t7433;
  t13619 = t7224 + t7349 + t13618;
  t13620 = 0.1*var3[4]*t13619;
  t13628 = t13622 + t13627;
  t13629 = 0.03125*var3[3]*t13628;
  t9430 = -0.4*t7035*t9315;
  t13630 = 0.8*t8384;
  t13631 = 0.4*t8052*t8131;
  t13632 = -0.64*t8384;
  t13633 = t13631 + t13454 + t13632;
  t13634 = 0.1*t13633;
  t13635 = t8156 + t8344 + t13630 + t13634;
  t13636 = var3[6]*t13635;
  t13640 = t13638 + t13639;
  t13641 = 0.03125*t13640;
  t13642 = t8507 + t8583 + t13637 + t13641;
  t13643 = var3[5]*t13642;
  t10169 = -1.*t8052*t10167;
  t10171 = t10169 + t8375;
  t13484 = -0.4*t8052*t10167;
  t13387 = 2.88*t7191;
  t13388 = t13387 + t13209 + t13210 + t13222 + t13342;
  t13404 = 0.03125*t13388;
  t13413 = t10254 + t10255 + t13221 + t13404;
  p_output1[0]=-42.*t2175*t2176*t529*var4[0] + 84.*t2175*t2176*t529*var4[4] - 210.*t2037*t2151*t529*t774*var4[4] - 420.*t1830*t1898*t1924*t529*var4[8] - 42.*t2175*t2176*t529*var4[8] + 420.*t2037*t2151*t529*t774*var4[8] - 420.*t1710*t1721*t1785*t529*var4[12] + 840.*t1830*t1898*t1924*t529*var4[12] - 210.*t2037*t2151*t529*t774*var4[12] - 210.*t1217*t1367*t1596*t529*var4[16] + 840.*t1710*t1721*t1785*t529*var4[16] - 420.*t1830*t1898*t1924*t529*var4[16] + 420.*t1217*t1367*t1596*t529*var4[20] - 420.*t1710*t1721*t1785*t529*var4[20] - 42.*t529*t645*t792*var4[20] - 210.*t1217*t1367*t1596*t529*var4[24] + 84.*t529*t645*t792*var4[24] - 42.*t529*t645*t792*var4[28];
  p_output1[1]=-42.*t2175*t2176*t325*t393*var4[0] + 84.*t2175*t2176*t325*t393*var4[4] - 210.*t2037*t2151*t325*t393*t774*var4[4] - 420.*t1830*t1898*t1924*t325*t393*var4[8] - 42.*t2175*t2176*t325*t393*var4[8] + 420.*t2037*t2151*t325*t393*t774*var4[8] - 420.*t1710*t1721*t1785*t325*t393*var4[12] + 840.*t1830*t1898*t1924*t325*t393*var4[12] - 210.*t2037*t2151*t325*t393*t774*var4[12] - 210.*t1217*t1367*t1596*t325*t393*var4[16] + 840.*t1710*t1721*t1785*t325*t393*var4[16] - 420.*t1830*t1898*t1924*t325*t393*var4[16] + 420.*t1217*t1367*t1596*t325*t393*var4[20] - 420.*t1710*t1721*t1785*t325*t393*var4[20] - 42.*t325*t393*t645*t792*var4[20] - 210.*t1217*t1367*t1596*t325*t393*var4[24] + 84.*t325*t393*t645*t792*var4[24] - 42.*t325*t393*t645*t792*var4[28];
  p_output1[2]=1.;
  p_output1[3]=t3951;
  p_output1[4]=t4260;
  p_output1[5]=t4640;
  p_output1[6]=t4916;
  p_output1[7]=t5520;
  p_output1[8]=t5537;
  p_output1[9]=t5541;
  p_output1[10]=t5542;
  p_output1[11]=-7.*t2175*t3906*var4[0] + 42.*t2037*t2176*t774*var4[0] + 210.*t1830*t1898*t2151*var4[4] + 7.*t2175*t3906*var4[4] - 126.*t2037*t2176*t774*var4[4] + 420.*t1710*t1721*t1924*var4[8] - 525.*t1830*t1898*t2151*var4[8] + 84.*t2037*t2176*t774*var4[8] + 420.*t1217*t1367*t1785*var4[12] - 980.*t1710*t1721*t1924*var4[12] + 315.*t1830*t1898*t2151*var4[12] - 945.*t1217*t1367*t1785*var4[16] + 560.*t1710*t1721*t1924*var4[16] + 210.*t1596*t645*t792*var4[16] + 525.*t1217*t1367*t1785*var4[20] + 42.*t5538*t5543*var4[20] - 462.*t1596*t645*t792*var4[20] - 91.*t5538*t5543*var4[24] + 252.*t1596*t645*t792*var4[24] + 49.*t5538*t5543*var4[28];
  p_output1[12]=7.*t2175*t3906*var4[0] + 42.*t1424*t2176*t6021*var4[0] - 42.*t2175*t2176*var4[4] - 7.*t2175*t3906*var4[4] - 42.*t1424*t2176*t6021*var4[4] + 84.*t2037*t2176*t774*var4[4] + 210.*t2151*t2175*t6021*t774*var4[4] + 315.*t1830*t1898*t2151*var4[8] + 42.*t2175*t2176*var4[8] + 420.*t1898*t1924*t2037*t6021*var4[8] - 210.*t2037*t2151*t774*var4[8] - 84.*t2037*t2176*t774*var4[8] - 210.*t2151*t2175*t6021*t774*var4[8] + 560.*t1710*t1721*t1924*var4[12] - 420.*t1830*t1898*t1924*var4[12] - 315.*t1830*t1898*t2151*var4[12] + 420.*t1721*t1785*t1830*t6021*var4[12] - 420.*t1898*t1924*t2037*t6021*var4[12] + 210.*t2037*t2151*t774*var4[12] + 525.*t1217*t1367*t1785*var4[16] - 420.*t1710*t1721*t1785*var4[16] - 560.*t1710*t1721*t1924*var4[16] + 420.*t1830*t1898*t1924*var4[16] + 210.*t1367*t1596*t1710*t6021*var4[16] - 420.*t1721*t1785*t1830*t6021*var4[16] - 210.*t1217*t1367*t1596*var4[20] - 525.*t1217*t1367*t1785*var4[20] + 420.*t1710*t1721*t1785*var4[20] - 210.*t1367*t1596*t1710*t6021*var4[20] + 42.*t1217*t6021*t792*var4[20] + 252.*t1596*t645*t792*var4[20] + 210.*t1217*t1367*t1596*var4[24] + 49.*t5538*t5543*var4[24] - 42.*t1217*t6021*t792*var4[24] - 42.*t645*t792*var4[24] - 252.*t1596*t645*t792*var4[24] - 49.*t5538*t5543*var4[28] + 42.*t645*t792*var4[28];
  p_output1[13]=-42.*t2175*t2176*t529*var4[1] + 84.*t2175*t2176*t529*var4[5] - 210.*t2037*t2151*t529*t774*var4[5] - 420.*t1830*t1898*t1924*t529*var4[9] - 42.*t2175*t2176*t529*var4[9] + 420.*t2037*t2151*t529*t774*var4[9] - 420.*t1710*t1721*t1785*t529*var4[13] + 840.*t1830*t1898*t1924*t529*var4[13] - 210.*t2037*t2151*t529*t774*var4[13] - 210.*t1217*t1367*t1596*t529*var4[17] + 840.*t1710*t1721*t1785*t529*var4[17] - 420.*t1830*t1898*t1924*t529*var4[17] + 420.*t1217*t1367*t1596*t529*var4[21] - 420.*t1710*t1721*t1785*t529*var4[21] - 42.*t529*t645*t792*var4[21] - 210.*t1217*t1367*t1596*t529*var4[25] + 84.*t529*t645*t792*var4[25] - 42.*t529*t645*t792*var4[29];
  p_output1[14]=-42.*t2175*t2176*t325*t393*var4[1] + 84.*t2175*t2176*t325*t393*var4[5] - 210.*t2037*t2151*t325*t393*t774*var4[5] - 420.*t1830*t1898*t1924*t325*t393*var4[9] - 42.*t2175*t2176*t325*t393*var4[9] + 420.*t2037*t2151*t325*t393*t774*var4[9] - 420.*t1710*t1721*t1785*t325*t393*var4[13] + 840.*t1830*t1898*t1924*t325*t393*var4[13] - 210.*t2037*t2151*t325*t393*t774*var4[13] - 210.*t1217*t1367*t1596*t325*t393*var4[17] + 840.*t1710*t1721*t1785*t325*t393*var4[17] - 420.*t1830*t1898*t1924*t325*t393*var4[17] + 420.*t1217*t1367*t1596*t325*t393*var4[21] - 420.*t1710*t1721*t1785*t325*t393*var4[21] - 42.*t325*t393*t645*t792*var4[21] - 210.*t1217*t1367*t1596*t325*t393*var4[25] + 84.*t325*t393*t645*t792*var4[25] - 42.*t325*t393*t645*t792*var4[29];
  p_output1[15]=t7665 + t8047 + t8430 + t8777 + (t7708 + t7824 + t7892 + 0.03125*(t7894 + t7954 + t8431 + t8654 + t8900))*var3[2];
  p_output1[16]=t7665 + t8047 + t8010*var3[2];
  p_output1[17]=t7664*var3[2] + t7664*var3[3] + (t7349 + t9430 - 0.8*t9701 + 0.1*(t7516 + 0.64*t9701 + t9709))*var3[4];
  p_output1[18]=t8430 + t8777 + 0.03125*t8773*var3[2];
  p_output1[19]=0.1*t8389*var3[2] + 0.1*t8389*var3[5] + 0.1*(t10168 + 0.64*t10171 + t8344)*var3[6];
  p_output1[20]=t10232 + t10233 + t10242 + 0.03125*(t10244 + t10251 + t10252 + t10263 - 2.88*t7191);
  p_output1[21]=t10232 + t10233 + t10242 + 0.03125*(t10244 + t10251);
  p_output1[22]=t10271 + t10272 - 0.8*t10274 + 0.1*t10279;
  p_output1[23]=0.03125*(t10252 + t10263);
  p_output1[24]=0.1*(t10296 + t10297 + 0.64*t10299);
  p_output1[25]=t3951;
  p_output1[26]=t4260;
  p_output1[27]=t4640;
  p_output1[28]=t4916;
  p_output1[29]=t5520;
  p_output1[30]=t5537;
  p_output1[31]=t5541;
  p_output1[32]=t5542;
  p_output1[33]=-7.*t2175*t3906*var4[1] + 42.*t2037*t2176*t774*var4[1] + 210.*t1830*t1898*t2151*var4[5] + 7.*t2175*t3906*var4[5] - 126.*t2037*t2176*t774*var4[5] + 420.*t1710*t1721*t1924*var4[9] - 525.*t1830*t1898*t2151*var4[9] + 84.*t2037*t2176*t774*var4[9] + 420.*t1217*t1367*t1785*var4[13] - 980.*t1710*t1721*t1924*var4[13] + 315.*t1830*t1898*t2151*var4[13] - 945.*t1217*t1367*t1785*var4[17] + 560.*t1710*t1721*t1924*var4[17] + 210.*t1596*t645*t792*var4[17] + 525.*t1217*t1367*t1785*var4[21] + 42.*t5538*t5543*var4[21] - 462.*t1596*t645*t792*var4[21] - 91.*t5538*t5543*var4[25] + 252.*t1596*t645*t792*var4[25] + 49.*t5538*t5543*var4[29];
  p_output1[34]=7.*t2175*t3906*var4[1] + 42.*t1424*t2176*t6021*var4[1] - 42.*t2175*t2176*var4[5] - 7.*t2175*t3906*var4[5] - 42.*t1424*t2176*t6021*var4[5] + 84.*t2037*t2176*t774*var4[5] + 210.*t2151*t2175*t6021*t774*var4[5] + 315.*t1830*t1898*t2151*var4[9] + 42.*t2175*t2176*var4[9] + 420.*t1898*t1924*t2037*t6021*var4[9] - 210.*t2037*t2151*t774*var4[9] - 84.*t2037*t2176*t774*var4[9] - 210.*t2151*t2175*t6021*t774*var4[9] + 560.*t1710*t1721*t1924*var4[13] - 420.*t1830*t1898*t1924*var4[13] - 315.*t1830*t1898*t2151*var4[13] + 420.*t1721*t1785*t1830*t6021*var4[13] - 420.*t1898*t1924*t2037*t6021*var4[13] + 210.*t2037*t2151*t774*var4[13] + 525.*t1217*t1367*t1785*var4[17] - 420.*t1710*t1721*t1785*var4[17] - 560.*t1710*t1721*t1924*var4[17] + 420.*t1830*t1898*t1924*var4[17] + 210.*t1367*t1596*t1710*t6021*var4[17] - 420.*t1721*t1785*t1830*t6021*var4[17] - 210.*t1217*t1367*t1596*var4[21] - 525.*t1217*t1367*t1785*var4[21] + 420.*t1710*t1721*t1785*var4[21] - 210.*t1367*t1596*t1710*t6021*var4[21] + 42.*t1217*t6021*t792*var4[21] + 252.*t1596*t645*t792*var4[21] + 210.*t1217*t1367*t1596*var4[25] + 49.*t5538*t5543*var4[25] - 42.*t1217*t6021*t792*var4[25] - 42.*t645*t792*var4[25] - 252.*t1596*t645*t792*var4[25] - 49.*t5538*t5543*var4[29] + 42.*t645*t792*var4[29];
  p_output1[35]=-42.*t2175*t2176*t529*var4[2] + 84.*t2175*t2176*t529*var4[6] - 210.*t2037*t2151*t529*t774*var4[6] - 420.*t1830*t1898*t1924*t529*var4[10] - 42.*t2175*t2176*t529*var4[10] + 420.*t2037*t2151*t529*t774*var4[10] - 420.*t1710*t1721*t1785*t529*var4[14] + 840.*t1830*t1898*t1924*t529*var4[14] - 210.*t2037*t2151*t529*t774*var4[14] - 210.*t1217*t1367*t1596*t529*var4[18] + 840.*t1710*t1721*t1785*t529*var4[18] - 420.*t1830*t1898*t1924*t529*var4[18] + 420.*t1217*t1367*t1596*t529*var4[22] - 420.*t1710*t1721*t1785*t529*var4[22] - 42.*t529*t645*t792*var4[22] - 210.*t1217*t1367*t1596*t529*var4[26] + 84.*t529*t645*t792*var4[26] - 42.*t529*t645*t792*var4[30];
  p_output1[36]=-42.*t2175*t2176*t325*t393*var4[2] + 84.*t2175*t2176*t325*t393*var4[6] - 210.*t2037*t2151*t325*t393*t774*var4[6] - 420.*t1830*t1898*t1924*t325*t393*var4[10] - 42.*t2175*t2176*t325*t393*var4[10] + 420.*t2037*t2151*t325*t393*t774*var4[10] - 420.*t1710*t1721*t1785*t325*t393*var4[14] + 840.*t1830*t1898*t1924*t325*t393*var4[14] - 210.*t2037*t2151*t325*t393*t774*var4[14] - 210.*t1217*t1367*t1596*t325*t393*var4[18] + 840.*t1710*t1721*t1785*t325*t393*var4[18] - 420.*t1830*t1898*t1924*t325*t393*var4[18] + 420.*t1217*t1367*t1596*t325*t393*var4[22] - 420.*t1710*t1721*t1785*t325*t393*var4[22] - 42.*t325*t393*t645*t792*var4[22] - 210.*t1217*t1367*t1596*t325*t393*var4[26] + 84.*t325*t393*t645*t792*var4[26] - 42.*t325*t393*t645*t792*var4[30];
  p_output1[37]=t13208 + t13212 + t13220 + t13383 + t13413*var3[2];
  p_output1[38]=t13208 + t13212 + 0.03125*t13211*var3[2];
  p_output1[39]=0.1*t13207*var3[2] - 0.1*t10279*var3[3] + 0.1*(t10272 - 0.4*t7035*t7818 - 0.64*(t10273 - 1.*t7035*t7818))*var3[4];
  p_output1[40]=t13220 + t13383 + t13382*var3[2];
  p_output1[41]=t13219*var3[2] + t13219*var3[5] + (t10297 + 0.8*t13444 + 0.4*t8052*t8541 + 0.1*(t13215 - 0.64*t13444 - 0.4*t8052*t8541))*var3[6];
  p_output1[42]=t13453 + t13454 + t13458 + 0.03125*(t13459 + t13466 + t13467 + t13470 + t8900);
  p_output1[43]=0.03125*(t13459 + t13466);
  p_output1[44]=0.1*(-0.64*(t13461 - 1.*t7291*t7818) + t7946 + t9709);
  p_output1[45]=t13453 + t13454 + t13458 + 0.03125*(t13467 + t13470);
  p_output1[46]=t13484 + 0.8*t13487 + 0.4*t8258*t8541 + 0.1*(t10168 - 0.64*t13487 + t8583);
  p_output1[47]=t3951;
  p_output1[48]=t4260;
  p_output1[49]=t4640;
  p_output1[50]=t4916;
  p_output1[51]=t5520;
  p_output1[52]=t5537;
  p_output1[53]=t5541;
  p_output1[54]=t5542;
  p_output1[55]=-7.*t2175*t3906*var4[2] + 42.*t2037*t2176*t774*var4[2] + 210.*t1830*t1898*t2151*var4[6] + 7.*t2175*t3906*var4[6] - 126.*t2037*t2176*t774*var4[6] + 420.*t1710*t1721*t1924*var4[10] - 525.*t1830*t1898*t2151*var4[10] + 84.*t2037*t2176*t774*var4[10] + 420.*t1217*t1367*t1785*var4[14] - 980.*t1710*t1721*t1924*var4[14] + 315.*t1830*t1898*t2151*var4[14] - 945.*t1217*t1367*t1785*var4[18] + 560.*t1710*t1721*t1924*var4[18] + 210.*t1596*t645*t792*var4[18] + 525.*t1217*t1367*t1785*var4[22] + 42.*t5538*t5543*var4[22] - 462.*t1596*t645*t792*var4[22] - 91.*t5538*t5543*var4[26] + 252.*t1596*t645*t792*var4[26] + 49.*t5538*t5543*var4[30];
  p_output1[56]=7.*t2175*t3906*var4[2] + 42.*t1424*t2176*t6021*var4[2] - 42.*t2175*t2176*var4[6] - 7.*t2175*t3906*var4[6] - 42.*t1424*t2176*t6021*var4[6] + 84.*t2037*t2176*t774*var4[6] + 210.*t2151*t2175*t6021*t774*var4[6] + 315.*t1830*t1898*t2151*var4[10] + 42.*t2175*t2176*var4[10] + 420.*t1898*t1924*t2037*t6021*var4[10] - 210.*t2037*t2151*t774*var4[10] - 84.*t2037*t2176*t774*var4[10] - 210.*t2151*t2175*t6021*t774*var4[10] + 560.*t1710*t1721*t1924*var4[14] - 420.*t1830*t1898*t1924*var4[14] - 315.*t1830*t1898*t2151*var4[14] + 420.*t1721*t1785*t1830*t6021*var4[14] - 420.*t1898*t1924*t2037*t6021*var4[14] + 210.*t2037*t2151*t774*var4[14] + 525.*t1217*t1367*t1785*var4[18] - 420.*t1710*t1721*t1785*var4[18] - 560.*t1710*t1721*t1924*var4[18] + 420.*t1830*t1898*t1924*var4[18] + 210.*t1367*t1596*t1710*t6021*var4[18] - 420.*t1721*t1785*t1830*t6021*var4[18] - 210.*t1217*t1367*t1596*var4[22] - 525.*t1217*t1367*t1785*var4[22] + 420.*t1710*t1721*t1785*var4[22] - 210.*t1367*t1596*t1710*t6021*var4[22] + 42.*t1217*t6021*t792*var4[22] + 252.*t1596*t645*t792*var4[22] + 210.*t1217*t1367*t1596*var4[26] + 49.*t5538*t5543*var4[26] - 42.*t1217*t6021*t792*var4[26] - 42.*t645*t792*var4[26] - 252.*t1596*t645*t792*var4[26] - 49.*t5538*t5543*var4[30] + 42.*t645*t792*var4[30];
  p_output1[57]=-42.*t2175*t2176*t529*var4[3] + 84.*t2175*t2176*t529*var4[7] - 210.*t2037*t2151*t529*t774*var4[7] - 420.*t1830*t1898*t1924*t529*var4[11] - 42.*t2175*t2176*t529*var4[11] + 420.*t2037*t2151*t529*t774*var4[11] - 420.*t1710*t1721*t1785*t529*var4[15] + 840.*t1830*t1898*t1924*t529*var4[15] - 210.*t2037*t2151*t529*t774*var4[15] - 210.*t1217*t1367*t1596*t529*var4[19] + 840.*t1710*t1721*t1785*t529*var4[19] - 420.*t1830*t1898*t1924*t529*var4[19] + 420.*t1217*t1367*t1596*t529*var4[23] - 420.*t1710*t1721*t1785*t529*var4[23] - 42.*t529*t645*t792*var4[23] - 210.*t1217*t1367*t1596*t529*var4[27] + 84.*t529*t645*t792*var4[27] - 42.*t529*t645*t792*var4[31];
  p_output1[58]=-42.*t2175*t2176*t325*t393*var4[3] + 84.*t2175*t2176*t325*t393*var4[7] - 210.*t2037*t2151*t325*t393*t774*var4[7] - 420.*t1830*t1898*t1924*t325*t393*var4[11] - 42.*t2175*t2176*t325*t393*var4[11] + 420.*t2037*t2151*t325*t393*t774*var4[11] - 420.*t1710*t1721*t1785*t325*t393*var4[15] + 840.*t1830*t1898*t1924*t325*t393*var4[15] - 210.*t2037*t2151*t325*t393*t774*var4[15] - 210.*t1217*t1367*t1596*t325*t393*var4[19] + 840.*t1710*t1721*t1785*t325*t393*var4[19] - 420.*t1830*t1898*t1924*t325*t393*var4[19] + 420.*t1217*t1367*t1596*t325*t393*var4[23] - 420.*t1710*t1721*t1785*t325*t393*var4[23] - 42.*t325*t393*t645*t792*var4[23] - 210.*t1217*t1367*t1596*t325*t393*var4[27] + 84.*t325*t393*t645*t792*var4[27] - 42.*t325*t393*t645*t792*var4[31];
  p_output1[59]=t13620 + t13629 + t13636 + t13643 + (t13637 + 0.03125*(t13622 + t13627 + t13638 + t13639 + 2.88*t7036) + t8507 + t8583)*var3[2];
  p_output1[60]=t13620 + t13629 + 0.03125*t13628*var3[2];
  p_output1[61]=0.1*t13619*var3[2] - 0.1*t7557*var3[3] + 0.1*(t7349 + t9430 - 0.64*t9701)*var3[4];
  p_output1[62]=t13636 + t13643 + t13642*var3[2];
  p_output1[63]=t13635*var3[2] + t13635*var3[5] + (t10168 + 0.8*t10171 + 0.1*(-0.64*t10171 + t13454 + t13484) + t8344)*var3[6];
  p_output1[64]=t13413;
  p_output1[65]=0.03125*t13211;
  p_output1[66]=0.1*t13207;
  p_output1[67]=t13382;
  p_output1[68]=t13219;
  p_output1[69]=t3951;
  p_output1[70]=t4260;
  p_output1[71]=t4640;
  p_output1[72]=t4916;
  p_output1[73]=t5520;
  p_output1[74]=t5537;
  p_output1[75]=t5541;
  p_output1[76]=t5542;
  p_output1[77]=-7.*t2175*t3906*var4[3] + 42.*t2037*t2176*t774*var4[3] + 210.*t1830*t1898*t2151*var4[7] + 7.*t2175*t3906*var4[7] - 126.*t2037*t2176*t774*var4[7] + 420.*t1710*t1721*t1924*var4[11] - 525.*t1830*t1898*t2151*var4[11] + 84.*t2037*t2176*t774*var4[11] + 420.*t1217*t1367*t1785*var4[15] - 980.*t1710*t1721*t1924*var4[15] + 315.*t1830*t1898*t2151*var4[15] - 945.*t1217*t1367*t1785*var4[19] + 560.*t1710*t1721*t1924*var4[19] + 210.*t1596*t645*t792*var4[19] + 525.*t1217*t1367*t1785*var4[23] + 42.*t5538*t5543*var4[23] - 462.*t1596*t645*t792*var4[23] - 91.*t5538*t5543*var4[27] + 252.*t1596*t645*t792*var4[27] + 49.*t5538*t5543*var4[31];
  p_output1[78]=7.*t2175*t3906*var4[3] + 42.*t1424*t2176*t6021*var4[3] - 42.*t2175*t2176*var4[7] - 7.*t2175*t3906*var4[7] - 42.*t1424*t2176*t6021*var4[7] + 84.*t2037*t2176*t774*var4[7] + 210.*t2151*t2175*t6021*t774*var4[7] + 315.*t1830*t1898*t2151*var4[11] + 42.*t2175*t2176*var4[11] + 420.*t1898*t1924*t2037*t6021*var4[11] - 210.*t2037*t2151*t774*var4[11] - 84.*t2037*t2176*t774*var4[11] - 210.*t2151*t2175*t6021*t774*var4[11] + 560.*t1710*t1721*t1924*var4[15] - 420.*t1830*t1898*t1924*var4[15] - 315.*t1830*t1898*t2151*var4[15] + 420.*t1721*t1785*t1830*t6021*var4[15] - 420.*t1898*t1924*t2037*t6021*var4[15] + 210.*t2037*t2151*t774*var4[15] + 525.*t1217*t1367*t1785*var4[19] - 420.*t1710*t1721*t1785*var4[19] - 560.*t1710*t1721*t1924*var4[19] + 420.*t1830*t1898*t1924*var4[19] + 210.*t1367*t1596*t1710*t6021*var4[19] - 420.*t1721*t1785*t1830*t6021*var4[19] - 210.*t1217*t1367*t1596*var4[23] - 525.*t1217*t1367*t1785*var4[23] + 420.*t1710*t1721*t1785*var4[23] - 210.*t1367*t1596*t1710*t6021*var4[23] + 42.*t1217*t6021*t792*var4[23] + 252.*t1596*t645*t792*var4[23] + 210.*t1217*t1367*t1596*var4[27] + 49.*t5538*t5543*var4[27] - 42.*t1217*t6021*t792*var4[27] - 42.*t645*t792*var4[27] - 252.*t1596*t645*t792*var4[27] - 49.*t5538*t5543*var4[31] + 42.*t645*t792*var4[31];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 32 && ncols == 1) && 
      !(mrows == 1 && ncols == 32))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 79, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_time_RightStance.hh"

namespace RightStance
{

void J_d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
