/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:50:14 GMT-04:00
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
  double t11;
  double t68;
  double t90;
  double t78;
  double t638;
  double t643;
  double t657;
  double t658;
  double t659;
  double t767;
  double t798;
  double t799;
  double t838;
  double t854;
  double t2698;
  double t2868;
  double t3244;
  double t858;
  double t1356;
  double t1763;
  double t642;
  double t647;
  double t652;
  double t4556;
  double t4557;
  double t4559;
  double t4719;
  double t4794;
  double t5404;
  double t5480;
  double t5583;
  double t5820;
  double t6258;
  double t6734;
  double t6735;
  double t6839;
  double t6879;
  double t6882;
  double t7073;
  double t7076;
  double t7083;
  double t6909;
  double t6960;
  double t7025;
  double t5472;
  double t5520;
  double t5523;
  double t7095;
  double t7134;
  double t7233;
  double t119;
  double t124;
  double t510;
  double t607;
  double t608;
  double t4594;
  double t2322;
  double t4577;
  double t4579;
  double t4621;
  double t4665;
  double t4674;
  double t5083;
  double t5103;
  double t5104;
  double t5125;
  double t5126;
  double t7569;
  double t7038;
  double t7247;
  double t7421;
  double t7814;
  double t7991;
  double t7992;
  double t72;
  double t101;
  double t112;
  double t622;
  double t664;
  double t10147;
  double t10199;
  double t4591;
  double t10710;
  double t10739;
  double t10740;
  double t10925;
  double t10927;
  double t10929;
  double t8202;
  double t8250;
  double t8252;
  double t8253;
  double t4611;
  double t10747;
  double t10769;
  double t10856;
  double t10860;
  double t10921;
  double t8410;
  double t656;
  double t717;
  double t10991;
  double t11001;
  double t11004;
  double t11006;
  double t11013;
  double t10361;
  double t10931;
  double t10932;
  double t10933;
  double t10944;
  double t10947;
  double t10950;
  double t11056;
  double t11057;
  double t11061;
  double t11062;
  double t11018;
  double t11058;
  double t11073;
  double t11074;
  double t11020;
  double t11027;
  double t11030;
  double t11103;
  double t11105;
  double t11279;
  double t4720;
  double t4917;
  double t4929;
  double t5403;
  double t6659;
  double t11962;
  double t11971;
  double t7536;
  double t12338;
  double t12350;
  double t12361;
  double t12449;
  double t12456;
  double t12533;
  double t8487;
  double t8626;
  double t8694;
  double t8738;
  double t7781;
  double t12369;
  double t12402;
  double t12403;
  double t12404;
  double t12412;
  double t9799;
  double t5532;
  double t6668;
  double t12598;
  double t12607;
  double t12614;
  double t12653;
  double t12713;
  double t12268;
  double t12535;
  double t12546;
  double t12555;
  double t12579;
  double t12585;
  double t12590;
  double t12883;
  double t13015;
  double t13050;
  double t13653;
  double t12735;
  double t13016;
  double t14502;
  double t14509;
  double t12756;
  double t12757;
  double t12762;
  double t14521;
  double t14524;
  double t14544;
  double t63;
  double t4581;
  double t4690;
  double t7438;
  double t8005;
  double t8008;
  double t14814;
  double t14826;
  double t14863;
  double t14888;
  double t14894;
  double t14897;
  double t14921;
  double t14932;
  double t14995;
  double t15286;
  double t15717;
  double t15750;
  double t15965;
  double t16036;
  double t10923;
  double t11014;
  double t11016;
  double t11017;
  double t11019;
  double t11033;
  double t11036;
  double t11037;
  double t11038;
  double t11045;
  double t18555;
  double t18652;
  double t18685;
  double t17883;
  double t18032;
  double t18454;
  double t18553;
  double t18691;
  double t18839;
  double t20426;
  double t8382;
  double t20823;
  double t20830;
  double t8416;
  double t20491;
  double t20495;
  double t20507;
  double t20517;
  double t20528;
  double t20545;
  double t20570;
  double t21280;
  double t21333;
  double t21181;
  double t20458;
  double t20481;
  double t20485;
  double t22568;
  double t22573;
  double t20615;
  double t20642;
  double t20654;
  double t20681;
  double t22564;
  double t22565;
  double t22566;
  double t22567;
  double t22574;
  double t22580;
  double t20798;
  double t20802;
  double t20831;
  double t21189;
  double t22595;
  double t22600;
  double t22601;
  double t22603;
  double t22604;
  double t22605;
  double t22195;
  double t22197;
  double t22199;
  double t22687;
  double t22688;
  double t22689;
  double t22690;
  double t22691;
  double t22695;
  double t22696;
  double t22698;
  double t11075;
  double t11293;
  double t11305;
  double t11336;
  double t11350;
  double t11354;
  double t11430;
  double t11456;
  double t11605;
  double t11613;
  double t22581;
  double t22589;
  double t22590;
  double t22592;
  double t22594;
  double t22606;
  double t22608;
  double t22609;
  double t22610;
  double t22612;
  double t22613;
  double t22614;
  double t22615;
  double t22616;
  double t22617;
  double t22655;
  double t22660;
  double t22661;
  double t22662;
  double t22663;
  double t22669;
  double t22670;
  double t22671;
  double t22672;
  double t22674;
  double t22675;
  double t22676;
  double t22677;
  double t22678;
  double t22679;
  double t22680;
  double t22681;
  double t22682;
  double t22683;
  double t22684;
  double t22685;
  double t22686;
  double t22724;
  double t22725;
  double t22733;
  double t22748;
  double t22749;
  double t22750;
  double t22827;
  double t22828;
  double t22829;
  double t22833;
  double t22834;
  double t22835;
  double t22836;
  double t22837;
  double t12444;
  double t12714;
  double t12727;
  double t12728;
  double t12738;
  double t12766;
  double t12767;
  double t12856;
  double t12857;
  double t12882;
  double t22859;
  double t22860;
  double t22861;
  double t22855;
  double t22856;
  double t22857;
  double t22858;
  double t22862;
  double t22863;
  double t22864;
  double t8746;
  double t22886;
  double t22887;
  double t9884;
  double t22869;
  double t22870;
  double t22871;
  double t22872;
  double t22873;
  double t22874;
  double t22875;
  double t22893;
  double t22894;
  double t22890;
  double t22866;
  double t22867;
  double t22868;
  double t22922;
  double t22923;
  double t22877;
  double t22878;
  double t22879;
  double t22880;
  double t22918;
  double t22919;
  double t22920;
  double t22921;
  double t22924;
  double t22925;
  double t22884;
  double t22885;
  double t22888;
  double t22891;
  double t22931;
  double t22932;
  double t22933;
  double t22934;
  double t22935;
  double t22936;
  double t22899;
  double t22901;
  double t22902;
  double t22969;
  double t22970;
  double t22971;
  double t22972;
  double t22973;
  double t22977;
  double t22978;
  double t22979;
  double t14518;
  double t14584;
  double t14589;
  double t14591;
  double t14608;
  double t14619;
  double t14634;
  double t14667;
  double t14795;
  double t14797;
  double t22926;
  double t22927;
  double t22928;
  double t22929;
  double t22930;
  double t22937;
  double t22938;
  double t22939;
  double t22940;
  double t22941;
  double t22942;
  double t22943;
  double t22944;
  double t22945;
  double t22946;
  double t22947;
  double t22948;
  double t22949;
  double t22950;
  double t22951;
  double t22952;
  double t22953;
  double t22954;
  double t22955;
  double t22956;
  double t22957;
  double t22958;
  double t22959;
  double t22960;
  double t22961;
  double t22962;
  double t22963;
  double t22964;
  double t22965;
  double t22966;
  double t22967;
  double t22968;
  double t22990;
  double t22991;
  double t22992;
  double t23000;
  double t23001;
  double t23002;
  double t23030;
  double t23031;
  double t23032;
  double t23036;
  double t23037;
  double t23038;
  double t23039;
  double t23040;
  t11 = Cos(var1[2]);
  t68 = Cos(var1[3]);
  t90 = Sin(var1[3]);
  t78 = Sin(var1[2]);
  t638 = Cos(var1[4]);
  t643 = Sin(var1[4]);
  t657 = t68*t638;
  t658 = -1.*t90*t643;
  t659 = t657 + t658;
  t767 = -1.*t638;
  t798 = 1. + t767;
  t799 = 0.4*t798;
  t838 = 0.64*t638;
  t854 = t799 + t838;
  t2698 = -1.*t638*t90;
  t2868 = -1.*t68*t643;
  t3244 = t2698 + t2868;
  t858 = t854*t90;
  t1356 = 0.24*t68*t643;
  t1763 = t858 + t1356;
  t642 = t638*t90;
  t647 = t68*t643;
  t652 = t642 + t647;
  t4556 = t68*t854;
  t4557 = -0.24*t90*t643;
  t4559 = t4556 + t4557;
  t4719 = Cos(var1[5]);
  t4794 = Sin(var1[5]);
  t5404 = Cos(var1[6]);
  t5480 = Sin(var1[6]);
  t5583 = t4719*t5404;
  t5820 = -1.*t4794*t5480;
  t6258 = t5583 + t5820;
  t6734 = -1.*t5404;
  t6735 = 1. + t6734;
  t6839 = 0.4*t6735;
  t6879 = 0.64*t5404;
  t6882 = t6839 + t6879;
  t7073 = -1.*t5404*t4794;
  t7076 = -1.*t4719*t5480;
  t7083 = t7073 + t7076;
  t6909 = t6882*t4794;
  t6960 = 0.24*t4719*t5480;
  t7025 = t6909 + t6960;
  t5472 = t5404*t4794;
  t5520 = t4719*t5480;
  t5523 = t5472 + t5520;
  t7095 = t4719*t6882;
  t7134 = -0.24*t4794*t5480;
  t7233 = t7095 + t7134;
  t119 = Power(t68,2);
  t124 = 0.11*t119;
  t510 = Power(t90,2);
  t607 = 0.11*t510;
  t608 = t124 + t607;
  t4594 = -1.*t11*t659;
  t2322 = -1.*t1763*t659;
  t4577 = -1.*t3244*t4559;
  t4579 = t2322 + t4577;
  t4621 = t1763*t652;
  t4665 = t659*t4559;
  t4674 = t4621 + t4665;
  t5083 = Power(t4719,2);
  t5103 = 0.11*t5083;
  t5104 = Power(t4794,2);
  t5125 = 0.11*t5104;
  t5126 = t5103 + t5125;
  t7569 = -1.*t11*t6258;
  t7038 = -1.*t7025*t6258;
  t7247 = -1.*t7083*t7233;
  t7421 = t7038 + t7247;
  t7814 = t7025*t5523;
  t7991 = t6258*t7233;
  t7992 = t7814 + t7991;
  t72 = -1.*t11*t68;
  t101 = t78*t90;
  t112 = t72 + t101;
  t622 = -6.8*t112*t608;
  t664 = -1.*t78*t659;
  t10147 = t11*t3244;
  t10199 = t10147 + t664;
  t4591 = -1.*t78*t3244;
  t10710 = -1.*t854*t90;
  t10739 = -0.24*t68*t643;
  t10740 = t10710 + t10739;
  t10925 = -1.*t68*t638;
  t10927 = t90*t643;
  t10929 = t10925 + t10927;
  t8202 = t68*t78;
  t8250 = t11*t90;
  t8252 = t8202 + t8250;
  t8253 = -6.8*t8252*t608;
  t4611 = t4591 + t4594;
  t10747 = t10740*t659;
  t10769 = t1763*t659;
  t10856 = t3244*t4559;
  t10860 = t652*t4559;
  t10921 = t10747 + t10769 + t10856 + t10860;
  t8410 = -1.*t11*t3244;
  t656 = -1.*t11*t652;
  t717 = t656 + t664;
  t10991 = -1.*t3244*t10740;
  t11001 = -1.*t3244*t1763;
  t11004 = -1.*t659*t4559;
  t11006 = -1.*t4559*t10929;
  t11013 = t10991 + t11001 + t11004 + t11006;
  t10361 = -3.2*t10199*t4579;
  t10931 = t11*t10929;
  t10932 = t4591 + t10931;
  t10933 = -3.2*t4674*t10932;
  t10944 = -1.*t78*t652;
  t10947 = t11*t659;
  t10950 = t10944 + t10947;
  t11056 = -0.24*t638*t90;
  t11057 = t11056 + t10739;
  t11061 = 0.24*t68*t638;
  t11062 = t11061 + t4557;
  t11018 = -3.2*t4611*t4579;
  t11058 = t11057*t659;
  t11073 = t652*t11062;
  t11074 = t11058 + t10769 + t10856 + t11073;
  t11020 = -1.*t78*t10929;
  t11027 = t8410 + t11020;
  t11030 = -3.2*t4674*t11027;
  t11103 = -1.*t3244*t11057;
  t11105 = -1.*t659*t11062;
  t11279 = t11103 + t11001 + t11105 + t11006;
  t4720 = -1.*t11*t4719;
  t4917 = t78*t4794;
  t4929 = t4720 + t4917;
  t5403 = -6.8*t4929*t5126;
  t6659 = -1.*t78*t6258;
  t11962 = t11*t7083;
  t11971 = t11962 + t6659;
  t7536 = -1.*t78*t7083;
  t12338 = -1.*t6882*t4794;
  t12350 = -0.24*t4719*t5480;
  t12361 = t12338 + t12350;
  t12449 = -1.*t4719*t5404;
  t12456 = t4794*t5480;
  t12533 = t12449 + t12456;
  t8487 = t4719*t78;
  t8626 = t11*t4794;
  t8694 = t8487 + t8626;
  t8738 = -6.8*t8694*t5126;
  t7781 = t7536 + t7569;
  t12369 = t12361*t6258;
  t12402 = t7025*t6258;
  t12403 = t7083*t7233;
  t12404 = t5523*t7233;
  t12412 = t12369 + t12402 + t12403 + t12404;
  t9799 = -1.*t11*t7083;
  t5532 = -1.*t11*t5523;
  t6668 = t5532 + t6659;
  t12598 = -1.*t7083*t12361;
  t12607 = -1.*t7083*t7025;
  t12614 = -1.*t6258*t7233;
  t12653 = -1.*t7233*t12533;
  t12713 = t12598 + t12607 + t12614 + t12653;
  t12268 = -3.2*t11971*t7421;
  t12535 = t11*t12533;
  t12546 = t7536 + t12535;
  t12555 = -3.2*t7992*t12546;
  t12579 = -1.*t78*t5523;
  t12585 = t11*t6258;
  t12590 = t12579 + t12585;
  t12883 = -0.24*t5404*t4794;
  t13015 = t12883 + t12350;
  t13050 = 0.24*t4719*t5404;
  t13653 = t13050 + t7134;
  t12735 = -3.2*t7781*t7421;
  t13016 = t13015*t6258;
  t14502 = t5523*t13653;
  t14509 = t13016 + t12402 + t12403 + t14502;
  t12756 = -1.*t78*t12533;
  t12757 = t9799 + t12756;
  t12762 = -3.2*t7992*t12757;
  t14521 = -1.*t7083*t13015;
  t14524 = -1.*t6258*t13653;
  t14544 = t14521 + t12607 + t14524 + t12653;
  t63 = 2.88*t11;
  t4581 = -3.2*t717*t4579;
  t4690 = -3.2*t4611*t4674;
  t7438 = -3.2*t6668*t7421;
  t8005 = -3.2*t7781*t7992;
  t8008 = t63 + t622 + t4581 + t4690 + t5403 + t7438 + t8005;
  t14814 = 2.88*t78;
  t14826 = -1.*t68*t78;
  t14863 = -1.*t11*t90;
  t14888 = t14826 + t14863;
  t14894 = -6.8*t14888*t608;
  t14897 = -3.2*t10950*t4579;
  t14921 = -3.2*t10199*t4674;
  t14932 = -1.*t4719*t78;
  t14995 = -1.*t11*t4794;
  t15286 = t14932 + t14995;
  t15717 = -6.8*t15286*t5126;
  t15750 = -3.2*t12590*t7421;
  t15965 = -3.2*t11971*t7992;
  t16036 = t14814 + t14894 + t14897 + t14921 + t15717 + t15750 + t15965;
  t10923 = -3.2*t10199*t10921;
  t11014 = -3.2*t10950*t11013;
  t11016 = t622 + t10361 + t10923 + t10933 + t11014;
  t11017 = -0.5*var2[0]*t11016;
  t11019 = -3.2*t4611*t10921;
  t11033 = -3.2*t717*t11013;
  t11036 = t8253 + t11018 + t11019 + t11030 + t11033;
  t11037 = -0.5*var2[1]*t11036;
  t11038 = t11017 + t11037;
  t11045 = var2[2]*t11038;
  t18555 = -1.*t68*t854;
  t18652 = 0.24*t90*t643;
  t18685 = t18555 + t18652;
  t17883 = 2.*t3244*t10740;
  t18032 = t3244*t1763;
  t18454 = t10740*t652;
  t18553 = 2.*t659*t4559;
  t18691 = t659*t18685;
  t18839 = t4559*t10929;
  t20426 = t17883 + t18032 + t18454 + t18553 + t18691 + t18839;
  t8382 = t78*t652;
  t20823 = t78*t10929;
  t20830 = t10147 + t20823;
  t8416 = t78*t659;
  t20491 = -1.*t10740*t659;
  t20495 = -2.*t3244*t4559;
  t20507 = -1.*t652*t4559;
  t20517 = -1.*t3244*t18685;
  t20528 = -2.*t10740*t10929;
  t20545 = -1.*t1763*t10929;
  t20570 = t20491 + t20495 + t20507 + t20517 + t20528 + t20545;
  t21280 = t78*t3244;
  t21333 = t21280 + t10947;
  t21181 = t11*t652;
  t20458 = t854*t643;
  t20481 = -0.24*t638*t643;
  t20485 = t20458 + t20481;
  t22568 = -0.24*t68*t638;
  t22573 = t22568 + t18652;
  t20615 = t854*t638;
  t20642 = Power(t643,2);
  t20654 = 0.24*t20642;
  t20681 = t20615 + t20654;
  t22564 = t3244*t10740;
  t22565 = t3244*t11057;
  t22566 = t11057*t652;
  t22567 = t659*t11062;
  t22574 = t659*t22573;
  t22580 = t22564 + t22565 + t18032 + t22566 + t4665 + t22567 + t22574 + t18839;
  t20798 = t8382 + t10931;
  t20802 = -3.2*t4674*t20798;
  t20831 = -3.2*t4579*t20830;
  t21189 = t21181 + t8416;
  t22595 = -1.*t11057*t659;
  t22600 = -1.*t3244*t11062;
  t22601 = -1.*t3244*t22573;
  t22603 = -1.*t10740*t10929;
  t22604 = -1.*t11057*t10929;
  t22605 = t22595 + t4577 + t20507 + t22600 + t22601 + t22603 + t22604 + t20545;
  t22195 = -3.2*t4579*t10932;
  t22197 = t21181 + t11020;
  t22199 = -3.2*t4674*t22197;
  t22687 = -3.2*t21333*t4579;
  t22688 = -3.2*t21333*t10921;
  t22689 = -3.2*t4674*t20830;
  t22690 = -3.2*t21189*t11013;
  t22691 = t14894 + t22687 + t22688 + t22689 + t22690;
  t22695 = -3.2*t20681*t10921;
  t22696 = -3.2*t20485*t11013;
  t22698 = t22695 + t22696;
  t11075 = -3.2*t10199*t11074;
  t11293 = -3.2*t10950*t11279;
  t11305 = t10361 + t11075 + t10933 + t11293;
  t11336 = -0.5*var2[0]*t11305;
  t11350 = -3.2*t4611*t11074;
  t11354 = -3.2*t717*t11279;
  t11430 = t11018 + t11350 + t11030 + t11354;
  t11456 = -0.5*var2[1]*t11430;
  t11605 = t11336 + t11456;
  t11613 = var2[2]*t11605;
  t22581 = 0.384*var2[4]*t22580;
  t22589 = -1.*t854*t643;
  t22590 = 0.24*t638*t643;
  t22592 = t22589 + t22590;
  t22594 = -3.2*t22592*t10921;
  t22606 = -3.2*t20485*t22605;
  t22608 = Power(t638,2);
  t22609 = -0.24*t22608;
  t22610 = t20615 + t22609;
  t22612 = -3.2*t22610*t11013;
  t22613 = -3.2*t20681*t22580;
  t22614 = t22594 + t22606 + t22612 + t22613;
  t22615 = -0.5*var2[3]*t22614;
  t22616 = -3.2*t10921*t20830;
  t22617 = -3.2*t11074*t20830;
  t22655 = -3.2*t21189*t22605;
  t22660 = -3.2*t21333*t11013;
  t22661 = -3.2*t21333*t11279;
  t22662 = -3.2*t21333*t22580;
  t22663 = t20802 + t20831 + t22616 + t22617 + t22655 + t22660 + t22661 + t22662;
  t22669 = -0.5*var2[0]*t22663;
  t22670 = -3.2*t10921*t10932;
  t22671 = -3.2*t11074*t10932;
  t22672 = -3.2*t10950*t22605;
  t22674 = -3.2*t10199*t11013;
  t22675 = -3.2*t10199*t11279;
  t22676 = -3.2*t10199*t22580;
  t22677 = t22195 + t22670 + t22671 + t22199 + t22672 + t22674 + t22675 + t22676;
  t22678 = -0.5*var2[1]*t22677;
  t22679 = -6.4*t10921*t11074;
  t22680 = -6.4*t4579*t22605;
  t22681 = -6.4*t11013*t11279;
  t22682 = -6.4*t4674*t22580;
  t22683 = t22679 + t22680 + t22681 + t22682;
  t22684 = -0.5*var2[2]*t22683;
  t22685 = t22581 + t22615 + t22669 + t22678 + t22684;
  t22686 = var2[2]*t22685;
  t22724 = 2.*t3244*t11057;
  t22725 = 2.*t659*t11062;
  t22733 = t22724 + t18032 + t22566 + t22725 + t22574 + t18839;
  t22748 = -2.*t3244*t11062;
  t22749 = -2.*t11057*t10929;
  t22750 = t22595 + t20507 + t22748 + t22601 + t22749 + t20545;
  t22827 = -3.2*t21333*t11074;
  t22828 = -3.2*t21189*t11279;
  t22829 = t22687 + t22827 + t22689 + t22828;
  t22833 = -3.2*t22610*t4579;
  t22834 = -3.2*t22592*t4674;
  t22835 = -3.2*t20681*t11074;
  t22836 = -3.2*t20485*t11279;
  t22837 = t22833 + t22834 + t22835 + t22836;
  t12444 = -3.2*t11971*t12412;
  t12714 = -3.2*t12590*t12713;
  t12727 = t5403 + t12268 + t12444 + t12555 + t12714;
  t12728 = -0.5*var2[0]*t12727;
  t12738 = -3.2*t7781*t12412;
  t12766 = -3.2*t6668*t12713;
  t12767 = t8738 + t12735 + t12738 + t12762 + t12766;
  t12856 = -0.5*var2[1]*t12767;
  t12857 = t12728 + t12856;
  t12882 = var2[2]*t12857;
  t22859 = -1.*t4719*t6882;
  t22860 = 0.24*t4794*t5480;
  t22861 = t22859 + t22860;
  t22855 = 2.*t7083*t12361;
  t22856 = t7083*t7025;
  t22857 = t12361*t5523;
  t22858 = 2.*t6258*t7233;
  t22862 = t6258*t22861;
  t22863 = t7233*t12533;
  t22864 = t22855 + t22856 + t22857 + t22858 + t22862 + t22863;
  t8746 = t78*t5523;
  t22886 = t78*t12533;
  t22887 = t11962 + t22886;
  t9884 = t78*t6258;
  t22869 = -1.*t12361*t6258;
  t22870 = -2.*t7083*t7233;
  t22871 = -1.*t5523*t7233;
  t22872 = -1.*t7083*t22861;
  t22873 = -2.*t12361*t12533;
  t22874 = -1.*t7025*t12533;
  t22875 = t22869 + t22870 + t22871 + t22872 + t22873 + t22874;
  t22893 = t78*t7083;
  t22894 = t22893 + t12585;
  t22890 = t11*t5523;
  t22866 = t6882*t5480;
  t22867 = -0.24*t5404*t5480;
  t22868 = t22866 + t22867;
  t22922 = -0.24*t4719*t5404;
  t22923 = t22922 + t22860;
  t22877 = t6882*t5404;
  t22878 = Power(t5480,2);
  t22879 = 0.24*t22878;
  t22880 = t22877 + t22879;
  t22918 = t7083*t12361;
  t22919 = t7083*t13015;
  t22920 = t13015*t5523;
  t22921 = t6258*t13653;
  t22924 = t6258*t22923;
  t22925 = t22918 + t22919 + t22856 + t22920 + t7991 + t22921 + t22924 + t22863;
  t22884 = t8746 + t12535;
  t22885 = -3.2*t7992*t22884;
  t22888 = -3.2*t7421*t22887;
  t22891 = t22890 + t9884;
  t22931 = -1.*t13015*t6258;
  t22932 = -1.*t7083*t13653;
  t22933 = -1.*t7083*t22923;
  t22934 = -1.*t12361*t12533;
  t22935 = -1.*t13015*t12533;
  t22936 = t22931 + t7247 + t22871 + t22932 + t22933 + t22934 + t22935 + t22874;
  t22899 = -3.2*t7421*t12546;
  t22901 = t22890 + t12756;
  t22902 = -3.2*t7992*t22901;
  t22969 = -3.2*t22894*t7421;
  t22970 = -3.2*t22894*t12412;
  t22971 = -3.2*t7992*t22887;
  t22972 = -3.2*t22891*t12713;
  t22973 = t15717 + t22969 + t22970 + t22971 + t22972;
  t22977 = -3.2*t22880*t12412;
  t22978 = -3.2*t22868*t12713;
  t22979 = t22977 + t22978;
  t14518 = -3.2*t11971*t14509;
  t14584 = -3.2*t12590*t14544;
  t14589 = t12268 + t14518 + t12555 + t14584;
  t14591 = -0.5*var2[0]*t14589;
  t14608 = -3.2*t7781*t14509;
  t14619 = -3.2*t6668*t14544;
  t14634 = t12735 + t14608 + t12762 + t14619;
  t14667 = -0.5*var2[1]*t14634;
  t14795 = t14591 + t14667;
  t14797 = var2[2]*t14795;
  t22926 = 0.384*var2[6]*t22925;
  t22927 = -1.*t6882*t5480;
  t22928 = 0.24*t5404*t5480;
  t22929 = t22927 + t22928;
  t22930 = -3.2*t22929*t12412;
  t22937 = -3.2*t22868*t22936;
  t22938 = Power(t5404,2);
  t22939 = -0.24*t22938;
  t22940 = t22877 + t22939;
  t22941 = -3.2*t22940*t12713;
  t22942 = -3.2*t22880*t22925;
  t22943 = t22930 + t22937 + t22941 + t22942;
  t22944 = -0.5*var2[5]*t22943;
  t22945 = -3.2*t12412*t22887;
  t22946 = -3.2*t14509*t22887;
  t22947 = -3.2*t22891*t22936;
  t22948 = -3.2*t22894*t12713;
  t22949 = -3.2*t22894*t14544;
  t22950 = -3.2*t22894*t22925;
  t22951 = t22885 + t22888 + t22945 + t22946 + t22947 + t22948 + t22949 + t22950;
  t22952 = -0.5*var2[0]*t22951;
  t22953 = -3.2*t12412*t12546;
  t22954 = -3.2*t14509*t12546;
  t22955 = -3.2*t12590*t22936;
  t22956 = -3.2*t11971*t12713;
  t22957 = -3.2*t11971*t14544;
  t22958 = -3.2*t11971*t22925;
  t22959 = t22899 + t22953 + t22954 + t22902 + t22955 + t22956 + t22957 + t22958;
  t22960 = -0.5*var2[1]*t22959;
  t22961 = -6.4*t12412*t14509;
  t22962 = -6.4*t7421*t22936;
  t22963 = -6.4*t12713*t14544;
  t22964 = -6.4*t7992*t22925;
  t22965 = t22961 + t22962 + t22963 + t22964;
  t22966 = -0.5*var2[2]*t22965;
  t22967 = t22926 + t22944 + t22952 + t22960 + t22966;
  t22968 = var2[2]*t22967;
  t22990 = 2.*t7083*t13015;
  t22991 = 2.*t6258*t13653;
  t22992 = t22990 + t22856 + t22920 + t22991 + t22924 + t22863;
  t23000 = -2.*t7083*t13653;
  t23001 = -2.*t13015*t12533;
  t23002 = t22931 + t22871 + t23000 + t22933 + t23001 + t22874;
  t23030 = -3.2*t22894*t14509;
  t23031 = -3.2*t22891*t14544;
  t23032 = t22969 + t23030 + t22971 + t23031;
  t23036 = -3.2*t22940*t7421;
  t23037 = -3.2*t22929*t7992;
  t23038 = -3.2*t22880*t14509;
  t23039 = -3.2*t22868*t14544;
  t23040 = t23036 + t23037 + t23038 + t23039;
  p_output1[0]=(-0.5*t8008*var2[0] - 0.5*(-2.88*t78 + t8253 - 3.2*t4579*(t4594 + t8382) - 3.2*t4674*(t8410 + t8416) + t8738 - 3.2*t7421*(t7569 + t8746) - 3.2*t7992*(t9799 + t9884))*var2[1])*var2[2];
  p_output1[1]=t11045;
  p_output1[2]=t11613;
  p_output1[3]=t12882;
  p_output1[4]=t14797;
  p_output1[5]=-0.5*t16036*var2[2];
  p_output1[6]=-0.5*t8008*var2[2];
  p_output1[7]=-0.5*t16036*var2[0] - 0.5*t8008*var2[1];
  p_output1[8]=t11045;
  p_output1[9]=var2[2]*(-0.5*(t20802 - 6.4*t10921*t20830 + t20831 - 3.2*t20570*t21189 - 6.4*t11013*t21333 - 3.2*t20426*t21333 + t622)*var2[0] - 0.5*(-6.4*t10921*t10932 - 6.4*t10199*t11013 - 3.2*t10199*t20426 - 3.2*t10950*t20570 + t22195 + t22199 + t8253)*var2[1] - 0.5*(-6.4*Power(t10921,2) - 6.4*Power(t11013,2) - 6.4*t20570*t4579 - 6.4*t20426*t4674)*var2[2] - 0.5*(-3.2*t20485*t20570 - 3.2*t20426*t20681)*var2[3] + 0.384*t20426*var2[4]);
  p_output1[10]=t22686;
  p_output1[11]=-0.5*t22691*var2[2];
  p_output1[12]=-0.5*t11016*var2[2];
  p_output1[13]=-0.5*t22691*var2[0] - 0.5*t11016*var2[1] - 1.*(-6.4*t11013*t4579 - 6.4*t10921*t4674)*var2[2] - 0.5*t22698*var2[3] + 0.384*t10921*var2[4];
  p_output1[14]=-0.5*t22698*var2[2];
  p_output1[15]=0.384*t10921*var2[2];
  p_output1[16]=t11613;
  p_output1[17]=t22686;
  p_output1[18]=var2[2]*(-0.5*(t20802 - 6.4*t11074*t20830 + t20831 - 6.4*t11279*t21333 - 3.2*t21333*t22733 - 3.2*t21189*t22750)*var2[0] - 0.5*(-6.4*t10932*t11074 - 6.4*t10199*t11279 + t22195 + t22199 - 3.2*t10199*t22733 - 3.2*t10950*t22750)*var2[1] - 0.5*(-6.4*Power(t11074,2) - 6.4*Power(t11279,2) - 6.4*t22750*t4579 - 6.4*t22733*t4674)*var2[2] - 0.5*(-6.4*t11074*t22592 - 6.4*t11279*t22610 - 3.2*t20681*t22733 - 3.2*t20485*t22750 - 3.2*t22592*t4579 - 3.2*t4674*(0.24*t22608 - 1.*t638*t854))*var2[3] + 0.384*t22733*var2[4]);
  p_output1[19]=-0.5*t22829*var2[2];
  p_output1[20]=-0.5*t11305*var2[2];
  p_output1[21]=-0.5*t22829*var2[0] - 0.5*t11305*var2[1] - 1.*(-6.4*t11279*t4579 - 6.4*t11074*t4674)*var2[2] - 0.5*t22837*var2[3] + 0.384*t11074*var2[4];
  p_output1[22]=-0.5*t22837*var2[2];
  p_output1[23]=0.384*t11074*var2[2];
  p_output1[24]=t12882;
  p_output1[25]=var2[2]*(-0.5*(t22885 - 6.4*t12412*t22887 + t22888 - 3.2*t22875*t22891 - 6.4*t12713*t22894 - 3.2*t22864*t22894 + t5403)*var2[0] - 0.5*(-6.4*t12412*t12546 - 6.4*t11971*t12713 - 3.2*t11971*t22864 - 3.2*t12590*t22875 + t22899 + t22902 + t8738)*var2[1] - 0.5*(-6.4*Power(t12412,2) - 6.4*Power(t12713,2) - 6.4*t22875*t7421 - 6.4*t22864*t7992)*var2[2] - 0.5*(-3.2*t22868*t22875 - 3.2*t22864*t22880)*var2[5] + 0.384*t22864*var2[6]);
  p_output1[26]=t22968;
  p_output1[27]=-0.5*t22973*var2[2];
  p_output1[28]=-0.5*t12727*var2[2];
  p_output1[29]=-0.5*t22973*var2[0] - 0.5*t12727*var2[1] - 1.*(-6.4*t12713*t7421 - 6.4*t12412*t7992)*var2[2] - 0.5*t22979*var2[5] + 0.384*t12412*var2[6];
  p_output1[30]=-0.5*t22979*var2[2];
  p_output1[31]=0.384*t12412*var2[2];
  p_output1[32]=t14797;
  p_output1[33]=t22968;
  p_output1[34]=var2[2]*(-0.5*(t22885 - 6.4*t14509*t22887 + t22888 - 6.4*t14544*t22894 - 3.2*t22894*t22992 - 3.2*t22891*t23002)*var2[0] - 0.5*(-6.4*t12546*t14509 - 6.4*t11971*t14544 + t22899 + t22902 - 3.2*t11971*t22992 - 3.2*t12590*t23002)*var2[1] - 0.5*(-6.4*Power(t14509,2) - 6.4*Power(t14544,2) - 6.4*t23002*t7421 - 6.4*t22992*t7992)*var2[2] - 0.5*(-6.4*t14509*t22929 - 6.4*t14544*t22940 - 3.2*t22880*t22992 - 3.2*t22868*t23002 - 3.2*t22929*t7421 - 3.2*(0.24*t22938 - 1.*t5404*t6882)*t7992)*var2[5] + 0.384*t22992*var2[6]);
  p_output1[35]=-0.5*t23032*var2[2];
  p_output1[36]=-0.5*t14589*var2[2];
  p_output1[37]=-0.5*t23032*var2[0] - 0.5*t14589*var2[1] - 1.*(-6.4*t14544*t7421 - 6.4*t14509*t7992)*var2[2] - 0.5*t23040*var2[5] + 0.384*t14509*var2[6];
  p_output1[38]=-0.5*t23040*var2[2];
  p_output1[39]=0.384*t14509*var2[2];
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
