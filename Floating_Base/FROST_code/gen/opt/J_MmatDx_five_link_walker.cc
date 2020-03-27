/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:48:26 GMT-04:00
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
  double t2076;
  double t281;
  double t287;
  double t2084;
  double t2114;
  double t180;
  double t2118;
  double t2124;
  double t2141;
  double t2175;
  double t2177;
  double t2186;
  double t2187;
  double t2190;
  double t2072;
  double t2098;
  double t2101;
  double t2102;
  double t2142;
  double t2147;
  double t3193;
  double t2748;
  double t2948;
  double t3636;
  double t4166;
  double t4186;
  double t4380;
  double t8148;
  double t8182;
  double t8200;
  double t8227;
  double t8228;
  double t3140;
  double t3771;
  double t3857;
  double t4090;
  double t4560;
  double t4619;
  double t2162;
  double t2163;
  double t2166;
  double t11330;
  double t11342;
  double t11362;
  double t2212;
  double t2200;
  double t2201;
  double t2207;
  double t2208;
  double t2217;
  double t4868;
  double t4937;
  double t7960;
  double t11402;
  double t11403;
  double t11404;
  double t8459;
  double t8330;
  double t8334;
  double t8388;
  double t8395;
  double t8909;
  double t11370;
  double t11371;
  double t11373;
  double t11380;
  double t11381;
  double t11385;
  double t11388;
  double t11396;
  double t11416;
  double t11417;
  double t11427;
  double t11429;
  double t11430;
  double t11434;
  double t11437;
  double t11445;
  double t11582;
  double t11591;
  double t11592;
  double t11597;
  double t11600;
  double t11601;
  double t11631;
  double t11637;
  double t11638;
  double t11643;
  double t11644;
  double t11645;
  double t2169;
  double t2192;
  double t2195;
  double t2196;
  double t2221;
  double t2243;
  double t2245;
  double t2246;
  double t11664;
  double t11665;
  double t11666;
  double t11667;
  double t11668;
  double t11363;
  double t11375;
  double t11455;
  double t11456;
  double t11459;
  double t11460;
  double t11463;
  double t11467;
  double t11468;
  double t11473;
  double t11474;
  double t11475;
  double t11575;
  double t11576;
  double t11578;
  double t11579;
  double t11580;
  double t11581;
  double t11596;
  double t11602;
  double t11608;
  double t11613;
  double t11614;
  double t11615;
  double t11695;
  double t11701;
  double t11702;
  double t11669;
  double t11675;
  double t11676;
  double t11679;
  double t11680;
  double t11683;
  double t11687;
  double t11688;
  double t11689;
  double t11690;
  double t11691;
  double t11694;
  double t11704;
  double t11705;
  double t11709;
  double t11745;
  double t11746;
  double t11711;
  double t11748;
  double t11749;
  double t11713;
  double t8115;
  double t8249;
  double t8254;
  double t8260;
  double t8997;
  double t9189;
  double t9247;
  double t11290;
  double t11764;
  double t11765;
  double t11766;
  double t11767;
  double t11768;
  double t11405;
  double t11428;
  double t11516;
  double t11517;
  double t11522;
  double t11523;
  double t11524;
  double t11525;
  double t11526;
  double t11527;
  double t11528;
  double t11529;
  double t11620;
  double t11621;
  double t11625;
  double t11626;
  double t11629;
  double t11630;
  double t11642;
  double t11649;
  double t11650;
  double t11654;
  double t11655;
  double t11656;
  double t11787;
  double t11790;
  double t11791;
  double t11769;
  double t11770;
  double t11771;
  double t11774;
  double t11775;
  double t11778;
  double t11779;
  double t11780;
  double t11781;
  double t11782;
  double t11783;
  double t11786;
  double t11793;
  double t11796;
  double t11800;
  double t11824;
  double t11825;
  double t11802;
  double t11827;
  double t11828;
  double t11804;
  double t11476;
  double t11487;
  double t11502;
  double t11505;
  double t11530;
  double t11531;
  double t11555;
  double t11560;
  double t11488;
  double t11498;
  double t11499;
  double t11500;
  double t11501;
  double t11508;
  double t11532;
  double t11533;
  double t11534;
  double t11543;
  double t11551;
  double t11562;
  double t11567;
  double t11884;
  double t11895;
  double t11692;
  double t11905;
  double t11703;
  double t11706;
  double t11707;
  double t11710;
  double t11712;
  double t11714;
  double t11914;
  double t11735;
  double t11736;
  double t11737;
  double t11915;
  double t11719;
  double t11720;
  double t11721;
  double t11916;
  double t11919;
  double t11920;
  double t11743;
  double t11924;
  double t11747;
  double t11750;
  double t11751;
  double t11926;
  double t11753;
  double t11754;
  double t11757;
  double t11890;
  double t11898;
  double t11784;
  double t11908;
  double t11792;
  double t11797;
  double t11798;
  double t11801;
  double t11803;
  double t11805;
  double t11943;
  double t11814;
  double t11815;
  double t11816;
  double t11944;
  double t11810;
  double t11811;
  double t11812;
  double t11945;
  double t11948;
  double t11949;
  double t11822;
  double t11953;
  double t11826;
  double t11829;
  double t11830;
  double t11955;
  double t11832;
  double t11833;
  double t11834;
  double t11856;
  double t11857;
  double t11858;
  double t11859;
  double t11860;
  double t11861;
  double t11862;
  double t11863;
  double t11864;
  double t11839;
  double t11840;
  double t11841;
  double t11842;
  double t11573;
  double t11609;
  double t11616;
  double t11651;
  double t11657;
  double t11661;
  double t2219;
  double t2264;
  double t2316;
  double t8975;
  double t11306;
  double t11316;
  double t11904;
  double t11906;
  double t11907;
  double t11909;
  double t11910;
  double t11911;
  double t11925;
  double t11927;
  double t11928;
  double t11708;
  double t11715;
  double t11716;
  double t11938;
  double t11939;
  double t11940;
  double t11752;
  double t11758;
  double t11759;
  double t11954;
  double t11956;
  double t11957;
  double t11799;
  double t11806;
  double t11807;
  double t11967;
  double t11968;
  double t11969;
  double t11831;
  double t11835;
  double t11836;
  double t11865;
  double t11866;
  double t11867;
  double t11868;
  double t11869;
  double t11870;
  double t11871;
  double t11872;
  double t11885;
  double t11886;
  double t11887;
  double t11917;
  double t11677;
  double t11979;
  double t11980;
  double t11981;
  double t11931;
  double t11932;
  double t11933;
  double t11734;
  double t11738;
  double t11739;
  double t11991;
  double t11992;
  double t11993;
  double t11994;
  double t11995;
  double t11873;
  double t11874;
  double t11875;
  double t11876;
  double t12043;
  double t12044;
  double t12045;
  double t12046;
  double t12082;
  double t12083;
  double t11877;
  double t11973;
  double t12047;
  double t12048;
  double t12076;
  double t12077;
  double t11891;
  double t11892;
  double t11893;
  double t11946;
  double t11772;
  double t12005;
  double t12006;
  double t12007;
  double t11960;
  double t11961;
  double t11962;
  double t11813;
  double t11817;
  double t11818;
  double t12017;
  double t12018;
  double t12019;
  double t12020;
  double t12021;
  double t11878;
  double t11879;
  double t11880;
  double t11881;
  double t12049;
  double t12050;
  double t12051;
  double t12052;
  double t12115;
  double t12116;
  double t11882;
  double t11974;
  double t12053;
  double t12054;
  double t12109;
  double t12110;
  t2076 = Cos(var1[3]);
  t281 = Cos(var1[4]);
  t287 = Sin(var1[3]);
  t2084 = Sin(var1[4]);
  t2114 = Sin(var1[2]);
  t180 = Cos(var1[2]);
  t2118 = t2076*t281;
  t2124 = -1.*t287*t2084;
  t2141 = t2118 + t2124;
  t2175 = -1.*t281;
  t2177 = 1. + t2175;
  t2186 = 0.4*t2177;
  t2187 = 0.64*t281;
  t2190 = t2186 + t2187;
  t2072 = -1.*t281*t287;
  t2098 = -1.*t2076*t2084;
  t2101 = t2072 + t2098;
  t2102 = t180*t2101;
  t2142 = -1.*t2114*t2141;
  t2147 = t2102 + t2142;
  t3193 = Cos(var1[5]);
  t2748 = Cos(var1[6]);
  t2948 = Sin(var1[5]);
  t3636 = Sin(var1[6]);
  t4166 = t3193*t2748;
  t4186 = -1.*t2948*t3636;
  t4380 = t4166 + t4186;
  t8148 = -1.*t2748;
  t8182 = 1. + t8148;
  t8200 = 0.4*t8182;
  t8227 = 0.64*t2748;
  t8228 = t8200 + t8227;
  t3140 = -1.*t2748*t2948;
  t3771 = -1.*t3193*t3636;
  t3857 = t3140 + t3771;
  t4090 = t180*t3857;
  t4560 = -1.*t2114*t4380;
  t4619 = t4090 + t4560;
  t2162 = -1.*t2076*t2114;
  t2163 = -1.*t180*t287;
  t2166 = t2162 + t2163;
  t11330 = t180*t2076;
  t11342 = -1.*t2114*t287;
  t11362 = t11330 + t11342;
  t2212 = t180*t2141;
  t2200 = t281*t287;
  t2201 = t2076*t2084;
  t2207 = t2200 + t2201;
  t2208 = -1.*t2114*t2207;
  t2217 = t2208 + t2212;
  t4868 = -1.*t3193*t2114;
  t4937 = -1.*t180*t2948;
  t7960 = t4868 + t4937;
  t11402 = t180*t3193;
  t11403 = -1.*t2114*t2948;
  t11404 = t11402 + t11403;
  t8459 = t180*t4380;
  t8330 = t2748*t2948;
  t8334 = t3193*t3636;
  t8388 = t8330 + t8334;
  t8395 = -1.*t2114*t8388;
  t8909 = t8395 + t8459;
  t11370 = t2076*t2114;
  t11371 = t180*t287;
  t11373 = t11370 + t11371;
  t11380 = t2114*t2101;
  t11381 = t11380 + t2212;
  t11385 = t180*t2207;
  t11388 = t2114*t2141;
  t11396 = t11385 + t11388;
  t11416 = t3193*t2114;
  t11417 = t180*t2948;
  t11427 = t11416 + t11417;
  t11429 = t2114*t3857;
  t11430 = t11429 + t8459;
  t11434 = t180*t8388;
  t11437 = t2114*t4380;
  t11445 = t11434 + t11437;
  t11582 = t2190*t287;
  t11591 = 0.24*t2076*t2084;
  t11592 = t11582 + t11591;
  t11597 = t2076*t2190;
  t11600 = -0.24*t287*t2084;
  t11601 = t11597 + t11600;
  t11631 = t8228*t2948;
  t11637 = 0.24*t3193*t3636;
  t11638 = t11631 + t11637;
  t11643 = t3193*t8228;
  t11644 = -0.24*t2948*t3636;
  t11645 = t11643 + t11644;
  t2169 = -0.748*t2166;
  t2192 = t2190*t2084;
  t2195 = -0.24*t281*t2084;
  t2196 = t2192 + t2195;
  t2221 = t2190*t281;
  t2243 = Power(t2084,2);
  t2245 = 0.24*t2243;
  t2246 = t2221 + t2245;
  t11664 = -1.*t2076*t281;
  t11665 = t287*t2084;
  t11666 = t11664 + t11665;
  t11667 = t2114*t11666;
  t11668 = t2102 + t11667;
  t11363 = -13.6*t2166*t11362;
  t11375 = -13.6*t11373*t11362;
  t11455 = Power(t2166,2);
  t11456 = -6.8*t11455;
  t11459 = -6.8*t2166*t11373;
  t11460 = Power(t11362,2);
  t11463 = -6.8*t11460;
  t11467 = -1.*t180*t2076;
  t11468 = t2114*t287;
  t11473 = t11467 + t11468;
  t11474 = -6.8*t11362*t11473;
  t11475 = -1.*t2114*t2101;
  t11575 = Power(t2076,2);
  t11576 = 0.11*t11575;
  t11578 = Power(t287,2);
  t11579 = 0.11*t11578;
  t11580 = t11576 + t11579;
  t11581 = -6.8*t2166*t11580;
  t11596 = -1.*t11592*t2141;
  t11602 = -1.*t2101*t11601;
  t11608 = t11596 + t11602;
  t11613 = t11592*t2207;
  t11614 = t2141*t11601;
  t11615 = t11613 + t11614;
  t11695 = -1.*t2190*t287;
  t11701 = -0.24*t2076*t2084;
  t11702 = t11695 + t11701;
  t11669 = -0.768*var2[4]*t11668;
  t11675 = -3.2*t2196*t11381;
  t11676 = -3.2*t2246*t11668;
  t11679 = -6.4*t11381*t11396;
  t11680 = -6.4*t11381*t11668;
  t11683 = -3.2*t11381*t2217;
  t11687 = -3.2*t2147*t11396;
  t11688 = t180*t11666;
  t11689 = t11475 + t11688;
  t11690 = -3.2*t11381*t11689;
  t11691 = -3.2*t2147*t11668;
  t11694 = -3.2*t11381*t11608;
  t11704 = t11592*t2141;
  t11705 = t2101*t11601;
  t11709 = -3.2*t11615*t11668;
  t11745 = -0.24*t281*t287;
  t11746 = t11745 + t11701;
  t11711 = -1.*t2101*t11592;
  t11748 = 0.24*t2076*t281;
  t11749 = t11748 + t11600;
  t11713 = -1.*t11601*t11666;
  t8115 = -0.748*t7960;
  t8249 = t8228*t3636;
  t8254 = -0.24*t2748*t3636;
  t8260 = t8249 + t8254;
  t8997 = t8228*t2748;
  t9189 = Power(t3636,2);
  t9247 = 0.24*t9189;
  t11290 = t8997 + t9247;
  t11764 = -1.*t3193*t2748;
  t11765 = t2948*t3636;
  t11766 = t11764 + t11765;
  t11767 = t2114*t11766;
  t11768 = t4090 + t11767;
  t11405 = -13.6*t7960*t11404;
  t11428 = -13.6*t11427*t11404;
  t11516 = Power(t7960,2);
  t11517 = -6.8*t11516;
  t11522 = -6.8*t7960*t11427;
  t11523 = Power(t11404,2);
  t11524 = -6.8*t11523;
  t11525 = -1.*t180*t3193;
  t11526 = t2114*t2948;
  t11527 = t11525 + t11526;
  t11528 = -6.8*t11404*t11527;
  t11529 = -1.*t2114*t3857;
  t11620 = Power(t3193,2);
  t11621 = 0.11*t11620;
  t11625 = Power(t2948,2);
  t11626 = 0.11*t11625;
  t11629 = t11621 + t11626;
  t11630 = -6.8*t7960*t11629;
  t11642 = -1.*t11638*t4380;
  t11649 = -1.*t3857*t11645;
  t11650 = t11642 + t11649;
  t11654 = t11638*t8388;
  t11655 = t4380*t11645;
  t11656 = t11654 + t11655;
  t11787 = -1.*t8228*t2948;
  t11790 = -0.24*t3193*t3636;
  t11791 = t11787 + t11790;
  t11769 = -0.768*var2[6]*t11768;
  t11770 = -3.2*t8260*t11430;
  t11771 = -3.2*t11290*t11768;
  t11774 = -6.4*t11430*t11445;
  t11775 = -6.4*t11430*t11768;
  t11778 = -3.2*t11430*t8909;
  t11779 = -3.2*t4619*t11445;
  t11780 = t180*t11766;
  t11781 = t11529 + t11780;
  t11782 = -3.2*t11430*t11781;
  t11783 = -3.2*t4619*t11768;
  t11786 = -3.2*t11430*t11650;
  t11793 = t11638*t4380;
  t11796 = t3857*t11645;
  t11800 = -3.2*t11656*t11768;
  t11824 = -0.24*t2748*t2948;
  t11825 = t11824 + t11790;
  t11802 = -1.*t3857*t11638;
  t11827 = 0.24*t3193*t2748;
  t11828 = t11827 + t11644;
  t11804 = -1.*t11645*t11766;
  t11476 = -1.*t180*t2141;
  t11487 = t11475 + t11476;
  t11502 = -1.*t180*t2207;
  t11505 = t11502 + t2142;
  t11530 = -1.*t180*t4380;
  t11531 = t11529 + t11530;
  t11555 = -1.*t180*t8388;
  t11560 = t11555 + t4560;
  t11488 = -3.2*t11487*t11381;
  t11498 = Power(t2217,2);
  t11499 = -3.2*t11498;
  t11500 = Power(t2147,2);
  t11501 = -3.2*t11500;
  t11508 = -3.2*t11505*t11396;
  t11532 = -3.2*t11531*t11430;
  t11533 = Power(t8909,2);
  t11534 = -3.2*t11533;
  t11543 = Power(t4619,2);
  t11551 = -3.2*t11543;
  t11562 = -3.2*t11560*t11445;
  t11567 = t11456 + t11459 + t11463 + t11474 + t11488 + t11499 + t11501 + t11508 + t11517 + t11522 + t11524 + t11528 + t11532 + t11534 + t11551 + t11562;
  t11884 = -0.748*t11473;
  t11895 = -13.6*t2166*t11473;
  t11692 = t11456 + t11459 + t11463 + t11474 + t11683 + t11687 + t11690 + t11691;
  t11905 = -6.8*t11473*t11580;
  t11703 = t11702*t2141;
  t11706 = t2207*t11601;
  t11707 = t11703 + t11704 + t11705 + t11706;
  t11710 = -1.*t2101*t11702;
  t11712 = -1.*t2141*t11601;
  t11714 = t11710 + t11711 + t11712 + t11713;
  t11914 = -0.768*var2[4]*t11689;
  t11735 = Power(t281,2);
  t11736 = -0.24*t11735;
  t11737 = t2221 + t11736;
  t11915 = -3.2*t2196*t2147;
  t11719 = -1.*t2190*t2084;
  t11720 = 0.24*t281*t2084;
  t11721 = t11719 + t11720;
  t11916 = -3.2*t2246*t11689;
  t11919 = -6.4*t2217*t2147;
  t11920 = -6.4*t2147*t11689;
  t11743 = t11683 + t11687 + t11690 + t11691;
  t11924 = -3.2*t2147*t11608;
  t11747 = t11746*t2141;
  t11750 = t2207*t11749;
  t11751 = t11747 + t11704 + t11705 + t11750;
  t11926 = -3.2*t11615*t11689;
  t11753 = -1.*t2101*t11746;
  t11754 = -1.*t2141*t11749;
  t11757 = t11753 + t11711 + t11754 + t11713;
  t11890 = -0.748*t11527;
  t11898 = -13.6*t7960*t11527;
  t11784 = t11517 + t11522 + t11524 + t11528 + t11778 + t11779 + t11782 + t11783;
  t11908 = -6.8*t11527*t11629;
  t11792 = t11791*t4380;
  t11797 = t8388*t11645;
  t11798 = t11792 + t11793 + t11796 + t11797;
  t11801 = -1.*t3857*t11791;
  t11803 = -1.*t4380*t11645;
  t11805 = t11801 + t11802 + t11803 + t11804;
  t11943 = -0.768*var2[6]*t11781;
  t11814 = Power(t2748,2);
  t11815 = -0.24*t11814;
  t11816 = t8997 + t11815;
  t11944 = -3.2*t8260*t4619;
  t11810 = -1.*t8228*t3636;
  t11811 = 0.24*t2748*t3636;
  t11812 = t11810 + t11811;
  t11945 = -3.2*t11290*t11781;
  t11948 = -6.4*t8909*t4619;
  t11949 = -6.4*t4619*t11781;
  t11822 = t11778 + t11779 + t11782 + t11783;
  t11953 = -3.2*t4619*t11650;
  t11826 = t11825*t4380;
  t11829 = t8388*t11828;
  t11830 = t11826 + t11793 + t11796 + t11829;
  t11955 = -3.2*t11656*t11781;
  t11832 = -1.*t3857*t11825;
  t11833 = -1.*t4380*t11828;
  t11834 = t11832 + t11802 + t11833 + t11804;
  t11856 = -6.8*t2166*t11362;
  t11857 = -6.8*t11373*t11362;
  t11858 = -3.2*t11381*t2147;
  t11859 = -3.2*t2217*t11396;
  t11860 = -6.8*t7960*t11404;
  t11861 = -6.8*t11427*t11404;
  t11862 = -3.2*t11430*t4619;
  t11863 = -3.2*t8909*t11445;
  t11864 = t11856 + t11857 + t11858 + t11859 + t11860 + t11861 + t11862 + t11863;
  t11839 = Power(t180,2);
  t11840 = -12.*t11839;
  t11841 = Power(t2114,2);
  t11842 = -12.*t11841;
  t11573 = 2.88*t2114;
  t11609 = -3.2*t2217*t11608;
  t11616 = -3.2*t2147*t11615;
  t11651 = -3.2*t8909*t11650;
  t11657 = -3.2*t4619*t11656;
  t11661 = t11573 + t11581 + t11609 + t11616 + t11630 + t11651 + t11657;
  t2219 = -3.2*t2196*t2217;
  t2264 = -3.2*t2246*t2147;
  t2316 = t2169 + t2219 + t2264;
  t8975 = -3.2*t8260*t8909;
  t11306 = -3.2*t11290*t4619;
  t11316 = t8115 + t8975 + t11306;
  t11904 = 2.88*t180;
  t11906 = -3.2*t11505*t11608;
  t11907 = -3.2*t11487*t11615;
  t11909 = -3.2*t11560*t11650;
  t11910 = -3.2*t11531*t11656;
  t11911 = t11904 + t11905 + t11906 + t11907 + t11908 + t11909 + t11910;
  t11925 = -3.2*t2147*t11707;
  t11927 = -3.2*t2217*t11714;
  t11928 = t11905 + t11924 + t11925 + t11926 + t11927;
  t11708 = -3.2*t11381*t11707;
  t11715 = -3.2*t11396*t11714;
  t11716 = t11581 + t11694 + t11708 + t11709 + t11715;
  t11938 = -3.2*t2147*t11751;
  t11939 = -3.2*t2217*t11757;
  t11940 = t11924 + t11938 + t11926 + t11939;
  t11752 = -3.2*t11381*t11751;
  t11758 = -3.2*t11396*t11757;
  t11759 = t11694 + t11752 + t11709 + t11758;
  t11954 = -3.2*t4619*t11798;
  t11956 = -3.2*t8909*t11805;
  t11957 = t11908 + t11953 + t11954 + t11955 + t11956;
  t11799 = -3.2*t11430*t11798;
  t11806 = -3.2*t11445*t11805;
  t11807 = t11630 + t11786 + t11799 + t11800 + t11806;
  t11967 = -3.2*t4619*t11830;
  t11968 = -3.2*t8909*t11834;
  t11969 = t11953 + t11967 + t11955 + t11968;
  t11831 = -3.2*t11430*t11830;
  t11835 = -3.2*t11445*t11834;
  t11836 = t11786 + t11831 + t11800 + t11835;
  t11865 = -2.88*t180;
  t11866 = -6.8*t11362*t11580;
  t11867 = -3.2*t11396*t11608;
  t11868 = -3.2*t11381*t11615;
  t11869 = -6.8*t11404*t11629;
  t11870 = -3.2*t11445*t11650;
  t11871 = -3.2*t11430*t11656;
  t11872 = t11865 + t11866 + t11867 + t11868 + t11869 + t11870 + t11871;
  t11885 = -3.2*t2246*t11487;
  t11886 = -3.2*t2196*t11505;
  t11887 = t11884 + t11885 + t11886;
  t11917 = t11884 + t11915 + t11916;
  t11677 = t2169 + t11675 + t11676;
  t11979 = -3.2*t2246*t11707;
  t11980 = -3.2*t2196*t11714;
  t11981 = t11979 + t11980;
  t11931 = -3.2*t11737*t2217;
  t11932 = -3.2*t11721*t2147;
  t11933 = t11931 + t11915 + t11932 + t11916;
  t11734 = -3.2*t11721*t11381;
  t11738 = -3.2*t11737*t11396;
  t11739 = t11675 + t11734 + t11738 + t11676;
  t11991 = -3.2*t11737*t11608;
  t11992 = -3.2*t11721*t11615;
  t11993 = -3.2*t2246*t11751;
  t11994 = -3.2*t2196*t11757;
  t11995 = t11991 + t11992 + t11993 + t11994;
  t11873 = -0.748*t11362;
  t11874 = -3.2*t2246*t11381;
  t11875 = -3.2*t2196*t11396;
  t11876 = t11873 + t11874 + t11875;
  t12043 = -0.748*t11580;
  t12044 = -3.2*t2196*t11608;
  t12045 = -3.2*t2246*t11615;
  t12046 = -0.67 + t12043 + t12044 + t12045;
  t12082 = -0.768*var2[1]*t11689;
  t12083 = -0.768*var2[0]*t11668;
  t11877 = -0.768*t11381;
  t11973 = -0.768*t2147;
  t12047 = -0.768*t11615;
  t12048 = -0.2 + t12047;
  t12076 = -0.768*t2246;
  t12077 = -0.2 + t12076;
  t11891 = -3.2*t11290*t11531;
  t11892 = -3.2*t8260*t11560;
  t11893 = t11890 + t11891 + t11892;
  t11946 = t11890 + t11944 + t11945;
  t11772 = t8115 + t11770 + t11771;
  t12005 = -3.2*t11290*t11798;
  t12006 = -3.2*t8260*t11805;
  t12007 = t12005 + t12006;
  t11960 = -3.2*t11816*t8909;
  t11961 = -3.2*t11812*t4619;
  t11962 = t11960 + t11944 + t11961 + t11945;
  t11813 = -3.2*t11812*t11430;
  t11817 = -3.2*t11816*t11445;
  t11818 = t11770 + t11813 + t11817 + t11771;
  t12017 = -3.2*t11816*t11650;
  t12018 = -3.2*t11812*t11656;
  t12019 = -3.2*t11290*t11830;
  t12020 = -3.2*t8260*t11834;
  t12021 = t12017 + t12018 + t12019 + t12020;
  t11878 = -0.748*t11404;
  t11879 = -3.2*t11290*t11430;
  t11880 = -3.2*t8260*t11445;
  t11881 = t11878 + t11879 + t11880;
  t12049 = -0.748*t11629;
  t12050 = -3.2*t8260*t11650;
  t12051 = -3.2*t11290*t11656;
  t12052 = -0.67 + t12049 + t12050 + t12051;
  t12115 = -0.768*var2[1]*t11781;
  t12116 = -0.768*var2[0]*t11768;
  t11882 = -0.768*t11430;
  t11974 = -0.768*t4619;
  t12053 = -0.768*t11656;
  t12054 = -0.2 + t12053;
  t12109 = -0.768*t11290;
  t12110 = -0.2 + t12109;
  p_output1[0]=(t11363 + t11375 + t11405 + t11428 - 6.4*t11381*t2147 - 6.4*t11396*t2217 - 6.4*t11430*t4619 - 6.4*t11445*t8909)*var2[0] + t11567*var2[1] + t11661*var2[2] + t2316*var2[3] - 0.768*t2147*var2[4] + t11316*var2[5] - 0.768*t4619*var2[6];
  p_output1[1]=t11669 + (t11363 + t11375 + t11679 + t11680)*var2[0] + t11692*var2[1] + t11716*var2[2] + t11677*var2[3];
  p_output1[2]=t11669 + (t11679 + t11680)*var2[0] + t11743*var2[1] + t11759*var2[2] + t11739*var2[3];
  p_output1[3]=t11769 + (t11405 + t11428 + t11774 + t11775)*var2[0] + t11784*var2[1] + t11807*var2[2] + t11772*var2[5];
  p_output1[4]=t11769 + (t11774 + t11775)*var2[0] + t11822*var2[1] + t11836*var2[2] + t11818*var2[5];
  p_output1[5]=-6.8*Power(t11373,2) - 3.2*Power(t11381,2) - 3.2*Power(t11396,2) - 6.8*Power(t11427,2) - 3.2*Power(t11430,2) - 3.2*Power(t11445,2) + t11463 + t11524 + t11840 + t11842;
  p_output1[6]=t11864;
  p_output1[7]=t11872;
  p_output1[8]=t11876;
  p_output1[9]=t11877;
  p_output1[10]=t11881;
  p_output1[11]=t11882;
  p_output1[12]=t11567*var2[0] + (t11363 + t11405 + t11895 + t11898 - 6.4*t11487*t2147 - 6.4*t11505*t2217 - 6.4*t11531*t4619 - 6.4*t11560*t8909)*var2[1] + t11911*var2[2] + t11887*var2[3] - 0.768*t11487*var2[4] + t11893*var2[5] - 0.768*t11531*var2[6];
  p_output1[13]=t11914 + t11692*var2[0] + (t11363 + t11895 + t11919 + t11920)*var2[1] + t11928*var2[2] + t11917*var2[3];
  p_output1[14]=t11914 + t11743*var2[0] + (t11919 + t11920)*var2[1] + t11940*var2[2] + t11933*var2[3];
  p_output1[15]=t11943 + t11784*var2[0] + (t11405 + t11898 + t11948 + t11949)*var2[1] + t11957*var2[2] + t11946*var2[5];
  p_output1[16]=t11943 + t11822*var2[0] + (t11948 + t11949)*var2[1] + t11969*var2[2] + t11962*var2[5];
  p_output1[17]=t11864;
  p_output1[18]=t11456 + t11463 + t11499 + t11501 + t11517 + t11524 + t11534 + t11551 + t11840 + t11842;
  p_output1[19]=t11661;
  p_output1[20]=t2316;
  p_output1[21]=t11973;
  p_output1[22]=t11316;
  p_output1[23]=t11974;
  p_output1[24]=t11661*var2[0] + t11911*var2[1];
  p_output1[25]=t11716*var2[0] + t11928*var2[1] + (-6.4*t11615*t11707 - 6.4*t11608*t11714)*var2[2] + t11981*var2[3] - 0.768*t11707*var2[4];
  p_output1[26]=t11759*var2[0] + t11940*var2[1] + (-6.4*t11615*t11751 - 6.4*t11608*t11757)*var2[2] + t11995*var2[3] - 0.768*t11751*var2[4];
  p_output1[27]=t11807*var2[0] + t11957*var2[1] + (-6.4*t11656*t11798 - 6.4*t11650*t11805)*var2[2] + t12007*var2[5] - 0.768*t11798*var2[6];
  p_output1[28]=t11836*var2[0] + t11969*var2[1] + (-6.4*t11656*t11830 - 6.4*t11650*t11834)*var2[2] + t12021*var2[5] - 0.768*t11830*var2[6];
  p_output1[29]=t11872;
  p_output1[30]=t11661;
  p_output1[31]=-3.3612 - 6.8*Power(t11580,2) - 3.2*Power(t11608,2) - 3.2*Power(t11615,2) - 6.8*Power(t11629,2) - 3.2*Power(t11650,2) - 3.2*Power(t11656,2);
  p_output1[32]=t12046;
  p_output1[33]=t12048;
  p_output1[34]=t12052;
  p_output1[35]=t12054;
  p_output1[36]=t2316*var2[0] + t11887*var2[1];
  p_output1[37]=t11677*var2[0] + t11917*var2[1] + t11981*var2[2];
  p_output1[38]=t11739*var2[0] + t11933*var2[1] + t11995*var2[2] + (-6.4*t11737*t2196 - 6.4*t11721*t2246)*var2[3] - 0.768*t11721*var2[4];
  p_output1[39]=t11876;
  p_output1[40]=t2316;
  p_output1[41]=t12046;
  p_output1[42]=-1.58228 - 3.2*Power(t2196,2) - 3.2*Power(t2246,2);
  p_output1[43]=t12077;
  p_output1[44]=-0.768*t2147*var2[0] - 0.768*t11487*var2[1];
  p_output1[45]=t12082 + t12083 - 0.768*t11707*var2[2];
  p_output1[46]=t12082 + t12083 - 0.768*t11751*var2[2] - 0.768*t11721*var2[3];
  p_output1[47]=t11877;
  p_output1[48]=t11973;
  p_output1[49]=t12048;
  p_output1[50]=t12077;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t11316*var2[0] + t11893*var2[1];
  p_output1[53]=t11772*var2[0] + t11946*var2[1] + t12007*var2[2];
  p_output1[54]=t11818*var2[0] + t11962*var2[1] + t12021*var2[2] + (-6.4*t11290*t11812 - 6.4*t11816*t8260)*var2[5] - 0.768*t11812*var2[6];
  p_output1[55]=t11881;
  p_output1[56]=t11316;
  p_output1[57]=t12052;
  p_output1[58]=-1.58228 - 3.2*Power(t11290,2) - 3.2*Power(t8260,2);
  p_output1[59]=t12110;
  p_output1[60]=-0.768*t4619*var2[0] - 0.768*t11531*var2[1];
  p_output1[61]=t12115 + t12116 - 0.768*t11798*var2[2];
  p_output1[62]=t12115 + t12116 - 0.768*t11830*var2[2] - 0.768*t11812*var2[5];
  p_output1[63]=t11882;
  p_output1[64]=t11974;
  p_output1[65]=t12054;
  p_output1[66]=t12110;
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
