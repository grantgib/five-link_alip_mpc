/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:18 GMT-05:00
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
  double t3979;
  double t3185;
  double t3854;
  double t4041;
  double t4285;
  double t2571;
  double t4334;
  double t4410;
  double t4422;
  double t4877;
  double t4913;
  double t4915;
  double t4926;
  double t4932;
  double t3860;
  double t4074;
  double t4093;
  double t4242;
  double t4507;
  double t4527;
  double t6105;
  double t5935;
  double t5989;
  double t6335;
  double t6497;
  double t6503;
  double t6525;
  double t6753;
  double t6787;
  double t6818;
  double t6831;
  double t6836;
  double t6001;
  double t6422;
  double t6433;
  double t6468;
  double t6565;
  double t6570;
  double t4630;
  double t4672;
  double t4693;
  double t7589;
  double t7601;
  double t7632;
  double t5442;
  double t5233;
  double t5292;
  double t5316;
  double t5380;
  double t5524;
  double t6605;
  double t6637;
  double t6695;
  double t8540;
  double t8552;
  double t8655;
  double t7147;
  double t6912;
  double t7038;
  double t7063;
  double t7120;
  double t7177;
  double t7663;
  double t7669;
  double t7685;
  double t7898;
  double t7985;
  double t8206;
  double t8347;
  double t8420;
  double t8725;
  double t8747;
  double t8797;
  double t8853;
  double t8884;
  double t8943;
  double t8960;
  double t8963;
  double t10285;
  double t10300;
  double t10315;
  double t10339;
  double t10344;
  double t10345;
  double t10551;
  double t10571;
  double t10578;
  double t10621;
  double t10622;
  double t10624;
  double t4836;
  double t5090;
  double t5099;
  double t5110;
  double t5611;
  double t5619;
  double t5694;
  double t5706;
  double t10754;
  double t10758;
  double t10760;
  double t10788;
  double t10792;
  double t7638;
  double t7692;
  double t9019;
  double t9035;
  double t9037;
  double t9041;
  double t9048;
  double t9062;
  double t9077;
  double t9083;
  double t9097;
  double t9111;
  double t10201;
  double t10225;
  double t10232;
  double t10251;
  double t10256;
  double t10283;
  double t10316;
  double t10351;
  double t10362;
  double t10436;
  double t10446;
  double t10448;
  double t10909;
  double t10910;
  double t10913;
  double t10795;
  double t10802;
  double t10804;
  double t10832;
  double t10846;
  double t10856;
  double t10857;
  double t10860;
  double t10861;
  double t10867;
  double t10874;
  double t10900;
  double t10915;
  double t10923;
  double t10995;
  double t11387;
  double t11392;
  double t11034;
  double t11444;
  double t11446;
  double t11055;
  double t6718;
  double t6865;
  double t6891;
  double t6899;
  double t7307;
  double t7314;
  double t7316;
  double t7329;
  double t11610;
  double t11673;
  double t11835;
  double t11846;
  double t11847;
  double t8696;
  double t8831;
  double t9644;
  double t9777;
  double t9790;
  double t9808;
  double t9892;
  double t9924;
  double t10042;
  double t10064;
  double t10068;
  double t10083;
  double t10450;
  double t10452;
  double t10462;
  double t10466;
  double t10477;
  double t10505;
  double t10620;
  double t10629;
  double t10630;
  double t10647;
  double t10670;
  double t10678;
  double t11904;
  double t11905;
  double t11906;
  double t11854;
  double t11856;
  double t11857;
  double t11860;
  double t11861;
  double t11880;
  double t11885;
  double t11887;
  double t11892;
  double t11893;
  double t11898;
  double t11903;
  double t11939;
  double t11940;
  double t11949;
  double t12011;
  double t12013;
  double t11956;
  double t12017;
  double t12019;
  double t11961;
  double t9133;
  double t9134;
  double t9505;
  double t9528;
  double t10091;
  double t10092;
  double t10173;
  double t10178;
  double t9278;
  double t9329;
  double t9358;
  double t9484;
  double t9489;
  double t9583;
  double t10093;
  double t10117;
  double t10139;
  double t10145;
  double t10170;
  double t10179;
  double t10180;
  double t12274;
  double t12289;
  double t10896;
  double t12301;
  double t10914;
  double t10924;
  double t10978;
  double t11005;
  double t11037;
  double t11087;
  double t12315;
  double t11230;
  double t11253;
  double t11255;
  double t12316;
  double t11163;
  double t11186;
  double t11203;
  double t12317;
  double t12320;
  double t12321;
  double t11381;
  double t12325;
  double t11439;
  double t11459;
  double t11477;
  double t12327;
  double t11489;
  double t11505;
  double t11545;
  double t12284;
  double t12294;
  double t11900;
  double t12306;
  double t11907;
  double t11944;
  double t11945;
  double t11950;
  double t11957;
  double t11964;
  double t12348;
  double t11987;
  double t11993;
  double t11994;
  double t12349;
  double t11978;
  double t11980;
  double t11983;
  double t12350;
  double t12353;
  double t12354;
  double t12006;
  double t12358;
  double t12015;
  double t12021;
  double t12022;
  double t12360;
  double t12038;
  double t12045;
  double t12046;
  double t12191;
  double t12202;
  double t12208;
  double t12209;
  double t12210;
  double t12211;
  double t12212;
  double t12213;
  double t12214;
  double t12059;
  double t12060;
  double t12061;
  double t12062;
  double t10194;
  double t10371;
  double t10449;
  double t10631;
  double t10690;
  double t10691;
  double t5580;
  double t5752;
  double t5812;
  double t7260;
  double t7330;
  double t7419;
  double t12300;
  double t12302;
  double t12305;
  double t12307;
  double t12308;
  double t12311;
  double t12326;
  double t12328;
  double t12329;
  double t10983;
  double t11101;
  double t11102;
  double t12343;
  double t12344;
  double t12345;
  double t11487;
  double t11565;
  double t11584;
  double t12359;
  double t12363;
  double t12364;
  double t11948;
  double t11966;
  double t11967;
  double t12376;
  double t12377;
  double t12378;
  double t12037;
  double t12051;
  double t12052;
  double t12215;
  double t12221;
  double t12222;
  double t12223;
  double t12224;
  double t12225;
  double t12227;
  double t12228;
  double t12276;
  double t12278;
  double t12279;
  double t12318;
  double t10813;
  double t12388;
  double t12389;
  double t12390;
  double t12332;
  double t12333;
  double t12334;
  double t11225;
  double t11260;
  double t11269;
  double t12400;
  double t12401;
  double t12402;
  double t12403;
  double t12404;
  double t12230;
  double t12231;
  double t12232;
  double t12233;
  double t12452;
  double t12453;
  double t12454;
  double t12455;
  double t12492;
  double t12493;
  double t12234;
  double t12382;
  double t12456;
  double t12457;
  double t12486;
  double t12487;
  double t12285;
  double t12286;
  double t12287;
  double t12351;
  double t11858;
  double t12414;
  double t12415;
  double t12416;
  double t12367;
  double t12370;
  double t12371;
  double t11984;
  double t11998;
  double t11999;
  double t12426;
  double t12427;
  double t12428;
  double t12429;
  double t12430;
  double t12235;
  double t12236;
  double t12243;
  double t12258;
  double t12458;
  double t12459;
  double t12460;
  double t12461;
  double t12558;
  double t12559;
  double t12263;
  double t12383;
  double t12462;
  double t12463;
  double t12550;
  double t12551;
  t3979 = Cos(var1[3]);
  t3185 = Cos(var1[4]);
  t3854 = Sin(var1[3]);
  t4041 = Sin(var1[4]);
  t4285 = Sin(var1[2]);
  t2571 = Cos(var1[2]);
  t4334 = t3979*t3185;
  t4410 = -1.*t3854*t4041;
  t4422 = t4334 + t4410;
  t4877 = -1.*t3185;
  t4913 = 1. + t4877;
  t4915 = 0.4*t4913;
  t4926 = 0.64*t3185;
  t4932 = t4915 + t4926;
  t3860 = -1.*t3185*t3854;
  t4074 = -1.*t3979*t4041;
  t4093 = t3860 + t4074;
  t4242 = t2571*t4093;
  t4507 = -1.*t4285*t4422;
  t4527 = t4242 + t4507;
  t6105 = Cos(var1[5]);
  t5935 = Cos(var1[6]);
  t5989 = Sin(var1[5]);
  t6335 = Sin(var1[6]);
  t6497 = t6105*t5935;
  t6503 = -1.*t5989*t6335;
  t6525 = t6497 + t6503;
  t6753 = -1.*t5935;
  t6787 = 1. + t6753;
  t6818 = 0.4*t6787;
  t6831 = 0.64*t5935;
  t6836 = t6818 + t6831;
  t6001 = -1.*t5935*t5989;
  t6422 = -1.*t6105*t6335;
  t6433 = t6001 + t6422;
  t6468 = t2571*t6433;
  t6565 = -1.*t4285*t6525;
  t6570 = t6468 + t6565;
  t4630 = -1.*t3979*t4285;
  t4672 = -1.*t2571*t3854;
  t4693 = t4630 + t4672;
  t7589 = t2571*t3979;
  t7601 = -1.*t4285*t3854;
  t7632 = t7589 + t7601;
  t5442 = t2571*t4422;
  t5233 = t3185*t3854;
  t5292 = t3979*t4041;
  t5316 = t5233 + t5292;
  t5380 = -1.*t4285*t5316;
  t5524 = t5380 + t5442;
  t6605 = -1.*t6105*t4285;
  t6637 = -1.*t2571*t5989;
  t6695 = t6605 + t6637;
  t8540 = t2571*t6105;
  t8552 = -1.*t4285*t5989;
  t8655 = t8540 + t8552;
  t7147 = t2571*t6525;
  t6912 = t5935*t5989;
  t7038 = t6105*t6335;
  t7063 = t6912 + t7038;
  t7120 = -1.*t4285*t7063;
  t7177 = t7120 + t7147;
  t7663 = t3979*t4285;
  t7669 = t2571*t3854;
  t7685 = t7663 + t7669;
  t7898 = t4285*t4093;
  t7985 = t7898 + t5442;
  t8206 = t2571*t5316;
  t8347 = t4285*t4422;
  t8420 = t8206 + t8347;
  t8725 = t6105*t4285;
  t8747 = t2571*t5989;
  t8797 = t8725 + t8747;
  t8853 = t4285*t6433;
  t8884 = t8853 + t7147;
  t8943 = t2571*t7063;
  t8960 = t4285*t6525;
  t8963 = t8943 + t8960;
  t10285 = t4932*t3854;
  t10300 = 0.24*t3979*t4041;
  t10315 = t10285 + t10300;
  t10339 = t3979*t4932;
  t10344 = -0.24*t3854*t4041;
  t10345 = t10339 + t10344;
  t10551 = t6836*t5989;
  t10571 = 0.24*t6105*t6335;
  t10578 = t10551 + t10571;
  t10621 = t6105*t6836;
  t10622 = -0.24*t5989*t6335;
  t10624 = t10621 + t10622;
  t4836 = -0.748*t4693;
  t5090 = t4932*t4041;
  t5099 = -0.24*t3185*t4041;
  t5110 = t5090 + t5099;
  t5611 = t4932*t3185;
  t5619 = Power(t4041,2);
  t5694 = 0.24*t5619;
  t5706 = t5611 + t5694;
  t10754 = -1.*t3979*t3185;
  t10758 = t3854*t4041;
  t10760 = t10754 + t10758;
  t10788 = t4285*t10760;
  t10792 = t4242 + t10788;
  t7638 = -13.6*t4693*t7632;
  t7692 = -13.6*t7685*t7632;
  t9019 = Power(t4693,2);
  t9035 = -6.8*t9019;
  t9037 = -6.8*t4693*t7685;
  t9041 = Power(t7632,2);
  t9048 = -6.8*t9041;
  t9062 = -1.*t2571*t3979;
  t9077 = t4285*t3854;
  t9083 = t9062 + t9077;
  t9097 = -6.8*t7632*t9083;
  t9111 = -1.*t4285*t4093;
  t10201 = Power(t3979,2);
  t10225 = 0.11*t10201;
  t10232 = Power(t3854,2);
  t10251 = 0.11*t10232;
  t10256 = t10225 + t10251;
  t10283 = -6.8*t4693*t10256;
  t10316 = -1.*t10315*t4422;
  t10351 = -1.*t4093*t10345;
  t10362 = t10316 + t10351;
  t10436 = t10315*t5316;
  t10446 = t4422*t10345;
  t10448 = t10436 + t10446;
  t10909 = -1.*t4932*t3854;
  t10910 = -0.24*t3979*t4041;
  t10913 = t10909 + t10910;
  t10795 = -0.768*var2[4]*t10792;
  t10802 = -3.2*t5110*t7985;
  t10804 = -3.2*t5706*t10792;
  t10832 = -6.4*t7985*t8420;
  t10846 = -6.4*t7985*t10792;
  t10856 = -3.2*t7985*t5524;
  t10857 = -3.2*t4527*t8420;
  t10860 = t2571*t10760;
  t10861 = t9111 + t10860;
  t10867 = -3.2*t7985*t10861;
  t10874 = -3.2*t4527*t10792;
  t10900 = -3.2*t7985*t10362;
  t10915 = t10315*t4422;
  t10923 = t4093*t10345;
  t10995 = -3.2*t10448*t10792;
  t11387 = -0.24*t3185*t3854;
  t11392 = t11387 + t10910;
  t11034 = -1.*t4093*t10315;
  t11444 = 0.24*t3979*t3185;
  t11446 = t11444 + t10344;
  t11055 = -1.*t10345*t10760;
  t6718 = -0.748*t6695;
  t6865 = t6836*t6335;
  t6891 = -0.24*t5935*t6335;
  t6899 = t6865 + t6891;
  t7307 = t6836*t5935;
  t7314 = Power(t6335,2);
  t7316 = 0.24*t7314;
  t7329 = t7307 + t7316;
  t11610 = -1.*t6105*t5935;
  t11673 = t5989*t6335;
  t11835 = t11610 + t11673;
  t11846 = t4285*t11835;
  t11847 = t6468 + t11846;
  t8696 = -13.6*t6695*t8655;
  t8831 = -13.6*t8797*t8655;
  t9644 = Power(t6695,2);
  t9777 = -6.8*t9644;
  t9790 = -6.8*t6695*t8797;
  t9808 = Power(t8655,2);
  t9892 = -6.8*t9808;
  t9924 = -1.*t2571*t6105;
  t10042 = t4285*t5989;
  t10064 = t9924 + t10042;
  t10068 = -6.8*t8655*t10064;
  t10083 = -1.*t4285*t6433;
  t10450 = Power(t6105,2);
  t10452 = 0.11*t10450;
  t10462 = Power(t5989,2);
  t10466 = 0.11*t10462;
  t10477 = t10452 + t10466;
  t10505 = -6.8*t6695*t10477;
  t10620 = -1.*t10578*t6525;
  t10629 = -1.*t6433*t10624;
  t10630 = t10620 + t10629;
  t10647 = t10578*t7063;
  t10670 = t6525*t10624;
  t10678 = t10647 + t10670;
  t11904 = -1.*t6836*t5989;
  t11905 = -0.24*t6105*t6335;
  t11906 = t11904 + t11905;
  t11854 = -0.768*var2[6]*t11847;
  t11856 = -3.2*t6899*t8884;
  t11857 = -3.2*t7329*t11847;
  t11860 = -6.4*t8884*t8963;
  t11861 = -6.4*t8884*t11847;
  t11880 = -3.2*t8884*t7177;
  t11885 = -3.2*t6570*t8963;
  t11887 = t2571*t11835;
  t11892 = t10083 + t11887;
  t11893 = -3.2*t8884*t11892;
  t11898 = -3.2*t6570*t11847;
  t11903 = -3.2*t8884*t10630;
  t11939 = t10578*t6525;
  t11940 = t6433*t10624;
  t11949 = -3.2*t10678*t11847;
  t12011 = -0.24*t5935*t5989;
  t12013 = t12011 + t11905;
  t11956 = -1.*t6433*t10578;
  t12017 = 0.24*t6105*t5935;
  t12019 = t12017 + t10622;
  t11961 = -1.*t10624*t11835;
  t9133 = -1.*t2571*t4422;
  t9134 = t9111 + t9133;
  t9505 = -1.*t2571*t5316;
  t9528 = t9505 + t4507;
  t10091 = -1.*t2571*t6525;
  t10092 = t10083 + t10091;
  t10173 = -1.*t2571*t7063;
  t10178 = t10173 + t6565;
  t9278 = -3.2*t9134*t7985;
  t9329 = Power(t5524,2);
  t9358 = -3.2*t9329;
  t9484 = Power(t4527,2);
  t9489 = -3.2*t9484;
  t9583 = -3.2*t9528*t8420;
  t10093 = -3.2*t10092*t8884;
  t10117 = Power(t7177,2);
  t10139 = -3.2*t10117;
  t10145 = Power(t6570,2);
  t10170 = -3.2*t10145;
  t10179 = -3.2*t10178*t8963;
  t10180 = t9035 + t9037 + t9048 + t9097 + t9278 + t9358 + t9489 + t9583 + t9777 + t9790 + t9892 + t10068 + t10093 + t10139 + t10170 + t10179;
  t12274 = -0.748*t9083;
  t12289 = -13.6*t4693*t9083;
  t10896 = t9035 + t9037 + t9048 + t9097 + t10856 + t10857 + t10867 + t10874;
  t12301 = -6.8*t9083*t10256;
  t10914 = t10913*t4422;
  t10924 = t5316*t10345;
  t10978 = t10914 + t10915 + t10923 + t10924;
  t11005 = -1.*t4093*t10913;
  t11037 = -1.*t4422*t10345;
  t11087 = t11005 + t11034 + t11037 + t11055;
  t12315 = -0.768*var2[4]*t10861;
  t11230 = Power(t3185,2);
  t11253 = -0.24*t11230;
  t11255 = t5611 + t11253;
  t12316 = -3.2*t5110*t4527;
  t11163 = -1.*t4932*t4041;
  t11186 = 0.24*t3185*t4041;
  t11203 = t11163 + t11186;
  t12317 = -3.2*t5706*t10861;
  t12320 = -6.4*t5524*t4527;
  t12321 = -6.4*t4527*t10861;
  t11381 = t10856 + t10857 + t10867 + t10874;
  t12325 = -3.2*t4527*t10362;
  t11439 = t11392*t4422;
  t11459 = t5316*t11446;
  t11477 = t11439 + t10915 + t10923 + t11459;
  t12327 = -3.2*t10448*t10861;
  t11489 = -1.*t4093*t11392;
  t11505 = -1.*t4422*t11446;
  t11545 = t11489 + t11034 + t11505 + t11055;
  t12284 = -0.748*t10064;
  t12294 = -13.6*t6695*t10064;
  t11900 = t9777 + t9790 + t9892 + t10068 + t11880 + t11885 + t11893 + t11898;
  t12306 = -6.8*t10064*t10477;
  t11907 = t11906*t6525;
  t11944 = t7063*t10624;
  t11945 = t11907 + t11939 + t11940 + t11944;
  t11950 = -1.*t6433*t11906;
  t11957 = -1.*t6525*t10624;
  t11964 = t11950 + t11956 + t11957 + t11961;
  t12348 = -0.768*var2[6]*t11892;
  t11987 = Power(t5935,2);
  t11993 = -0.24*t11987;
  t11994 = t7307 + t11993;
  t12349 = -3.2*t6899*t6570;
  t11978 = -1.*t6836*t6335;
  t11980 = 0.24*t5935*t6335;
  t11983 = t11978 + t11980;
  t12350 = -3.2*t7329*t11892;
  t12353 = -6.4*t7177*t6570;
  t12354 = -6.4*t6570*t11892;
  t12006 = t11880 + t11885 + t11893 + t11898;
  t12358 = -3.2*t6570*t10630;
  t12015 = t12013*t6525;
  t12021 = t7063*t12019;
  t12022 = t12015 + t11939 + t11940 + t12021;
  t12360 = -3.2*t10678*t11892;
  t12038 = -1.*t6433*t12013;
  t12045 = -1.*t6525*t12019;
  t12046 = t12038 + t11956 + t12045 + t11961;
  t12191 = -6.8*t4693*t7632;
  t12202 = -6.8*t7685*t7632;
  t12208 = -3.2*t7985*t4527;
  t12209 = -3.2*t5524*t8420;
  t12210 = -6.8*t6695*t8655;
  t12211 = -6.8*t8797*t8655;
  t12212 = -3.2*t8884*t6570;
  t12213 = -3.2*t7177*t8963;
  t12214 = t12191 + t12202 + t12208 + t12209 + t12210 + t12211 + t12212 + t12213;
  t12059 = Power(t2571,2);
  t12060 = -12.*t12059;
  t12061 = Power(t4285,2);
  t12062 = -12.*t12061;
  t10194 = 2.88*t4285;
  t10371 = -3.2*t5524*t10362;
  t10449 = -3.2*t4527*t10448;
  t10631 = -3.2*t7177*t10630;
  t10690 = -3.2*t6570*t10678;
  t10691 = t10194 + t10283 + t10371 + t10449 + t10505 + t10631 + t10690;
  t5580 = -3.2*t5110*t5524;
  t5752 = -3.2*t5706*t4527;
  t5812 = t4836 + t5580 + t5752;
  t7260 = -3.2*t6899*t7177;
  t7330 = -3.2*t7329*t6570;
  t7419 = t6718 + t7260 + t7330;
  t12300 = 2.88*t2571;
  t12302 = -3.2*t9528*t10362;
  t12305 = -3.2*t9134*t10448;
  t12307 = -3.2*t10178*t10630;
  t12308 = -3.2*t10092*t10678;
  t12311 = t12300 + t12301 + t12302 + t12305 + t12306 + t12307 + t12308;
  t12326 = -3.2*t4527*t10978;
  t12328 = -3.2*t5524*t11087;
  t12329 = t12301 + t12325 + t12326 + t12327 + t12328;
  t10983 = -3.2*t7985*t10978;
  t11101 = -3.2*t8420*t11087;
  t11102 = t10283 + t10900 + t10983 + t10995 + t11101;
  t12343 = -3.2*t4527*t11477;
  t12344 = -3.2*t5524*t11545;
  t12345 = t12325 + t12343 + t12327 + t12344;
  t11487 = -3.2*t7985*t11477;
  t11565 = -3.2*t8420*t11545;
  t11584 = t10900 + t11487 + t10995 + t11565;
  t12359 = -3.2*t6570*t11945;
  t12363 = -3.2*t7177*t11964;
  t12364 = t12306 + t12358 + t12359 + t12360 + t12363;
  t11948 = -3.2*t8884*t11945;
  t11966 = -3.2*t8963*t11964;
  t11967 = t10505 + t11903 + t11948 + t11949 + t11966;
  t12376 = -3.2*t6570*t12022;
  t12377 = -3.2*t7177*t12046;
  t12378 = t12358 + t12376 + t12360 + t12377;
  t12037 = -3.2*t8884*t12022;
  t12051 = -3.2*t8963*t12046;
  t12052 = t11903 + t12037 + t11949 + t12051;
  t12215 = -2.88*t2571;
  t12221 = -6.8*t7632*t10256;
  t12222 = -3.2*t8420*t10362;
  t12223 = -3.2*t7985*t10448;
  t12224 = -6.8*t8655*t10477;
  t12225 = -3.2*t8963*t10630;
  t12227 = -3.2*t8884*t10678;
  t12228 = t12215 + t12221 + t12222 + t12223 + t12224 + t12225 + t12227;
  t12276 = -3.2*t5706*t9134;
  t12278 = -3.2*t5110*t9528;
  t12279 = t12274 + t12276 + t12278;
  t12318 = t12274 + t12316 + t12317;
  t10813 = t4836 + t10802 + t10804;
  t12388 = -3.2*t5706*t10978;
  t12389 = -3.2*t5110*t11087;
  t12390 = t12388 + t12389;
  t12332 = -3.2*t11255*t5524;
  t12333 = -3.2*t11203*t4527;
  t12334 = t12332 + t12316 + t12333 + t12317;
  t11225 = -3.2*t11203*t7985;
  t11260 = -3.2*t11255*t8420;
  t11269 = t10802 + t11225 + t11260 + t10804;
  t12400 = -3.2*t11255*t10362;
  t12401 = -3.2*t11203*t10448;
  t12402 = -3.2*t5706*t11477;
  t12403 = -3.2*t5110*t11545;
  t12404 = t12400 + t12401 + t12402 + t12403;
  t12230 = -0.748*t7632;
  t12231 = -3.2*t5706*t7985;
  t12232 = -3.2*t5110*t8420;
  t12233 = t12230 + t12231 + t12232;
  t12452 = -0.748*t10256;
  t12453 = -3.2*t5110*t10362;
  t12454 = -3.2*t5706*t10448;
  t12455 = -0.67 + t12452 + t12453 + t12454;
  t12492 = -0.768*var2[1]*t10861;
  t12493 = -0.768*var2[0]*t10792;
  t12234 = -0.768*t7985;
  t12382 = -0.768*t4527;
  t12456 = -0.768*t10448;
  t12457 = -0.2 + t12456;
  t12486 = -0.768*t5706;
  t12487 = -0.2 + t12486;
  t12285 = -3.2*t7329*t10092;
  t12286 = -3.2*t6899*t10178;
  t12287 = t12284 + t12285 + t12286;
  t12351 = t12284 + t12349 + t12350;
  t11858 = t6718 + t11856 + t11857;
  t12414 = -3.2*t7329*t11945;
  t12415 = -3.2*t6899*t11964;
  t12416 = t12414 + t12415;
  t12367 = -3.2*t11994*t7177;
  t12370 = -3.2*t11983*t6570;
  t12371 = t12367 + t12349 + t12370 + t12350;
  t11984 = -3.2*t11983*t8884;
  t11998 = -3.2*t11994*t8963;
  t11999 = t11856 + t11984 + t11998 + t11857;
  t12426 = -3.2*t11994*t10630;
  t12427 = -3.2*t11983*t10678;
  t12428 = -3.2*t7329*t12022;
  t12429 = -3.2*t6899*t12046;
  t12430 = t12426 + t12427 + t12428 + t12429;
  t12235 = -0.748*t8655;
  t12236 = -3.2*t7329*t8884;
  t12243 = -3.2*t6899*t8963;
  t12258 = t12235 + t12236 + t12243;
  t12458 = -0.748*t10477;
  t12459 = -3.2*t6899*t10630;
  t12460 = -3.2*t7329*t10678;
  t12461 = -0.67 + t12458 + t12459 + t12460;
  t12558 = -0.768*var2[1]*t11892;
  t12559 = -0.768*var2[0]*t11847;
  t12263 = -0.768*t8884;
  t12383 = -0.768*t6570;
  t12462 = -0.768*t10678;
  t12463 = -0.2 + t12462;
  t12550 = -0.768*t7329;
  t12551 = -0.2 + t12550;
  p_output1[0]=(t7638 + t7692 - 6.4*t4527*t7985 - 6.4*t5524*t8420 + t8696 + t8831 - 6.4*t6570*t8884 - 6.4*t7177*t8963)*var2[0] + t10180*var2[1] + t10691*var2[2] + t5812*var2[3] - 0.768*t4527*var2[4] + t7419*var2[5] - 0.768*t6570*var2[6];
  p_output1[1]=t10795 + (t10832 + t10846 + t7638 + t7692)*var2[0] + t10896*var2[1] + t11102*var2[2] + t10813*var2[3];
  p_output1[2]=t10795 + (t10832 + t10846)*var2[0] + t11381*var2[1] + t11584*var2[2] + t11269*var2[3];
  p_output1[3]=t11854 + (t11860 + t11861 + t8696 + t8831)*var2[0] + t11900*var2[1] + t11967*var2[2] + t11858*var2[5];
  p_output1[4]=t11854 + (t11860 + t11861)*var2[0] + t12006*var2[1] + t12052*var2[2] + t11999*var2[5];
  p_output1[5]=t12060 + t12062 - 6.8*Power(t7685,2) - 3.2*Power(t7985,2) - 3.2*Power(t8420,2) - 6.8*Power(t8797,2) - 3.2*Power(t8884,2) - 3.2*Power(t8963,2) + t9048 + t9892;
  p_output1[6]=t12214;
  p_output1[7]=t12228;
  p_output1[8]=t12233;
  p_output1[9]=t12234;
  p_output1[10]=t12258;
  p_output1[11]=t12263;
  p_output1[12]=t10180*var2[0] + (t12289 + t12294 - 6.4*t10092*t6570 - 6.4*t10178*t7177 + t7638 + t8696 - 6.4*t4527*t9134 - 6.4*t5524*t9528)*var2[1] + t12311*var2[2] + t12279*var2[3] - 0.768*t9134*var2[4] + t12287*var2[5] - 0.768*t10092*var2[6];
  p_output1[13]=t12315 + t10896*var2[0] + (t12289 + t12320 + t12321 + t7638)*var2[1] + t12329*var2[2] + t12318*var2[3];
  p_output1[14]=t12315 + t11381*var2[0] + (t12320 + t12321)*var2[1] + t12345*var2[2] + t12334*var2[3];
  p_output1[15]=t12348 + t11900*var2[0] + (t12294 + t12353 + t12354 + t8696)*var2[1] + t12364*var2[2] + t12351*var2[5];
  p_output1[16]=t12348 + t12006*var2[0] + (t12353 + t12354)*var2[1] + t12378*var2[2] + t12371*var2[5];
  p_output1[17]=t12214;
  p_output1[18]=t10139 + t10170 + t12060 + t12062 + t9035 + t9048 + t9358 + t9489 + t9777 + t9892;
  p_output1[19]=t10691;
  p_output1[20]=t5812;
  p_output1[21]=t12382;
  p_output1[22]=t7419;
  p_output1[23]=t12383;
  p_output1[24]=t10691*var2[0] + t12311*var2[1];
  p_output1[25]=t11102*var2[0] + t12329*var2[1] + (-6.4*t10448*t10978 - 6.4*t10362*t11087)*var2[2] + t12390*var2[3] - 0.768*t10978*var2[4];
  p_output1[26]=t11584*var2[0] + t12345*var2[1] + (-6.4*t10448*t11477 - 6.4*t10362*t11545)*var2[2] + t12404*var2[3] - 0.768*t11477*var2[4];
  p_output1[27]=t11967*var2[0] + t12364*var2[1] + (-6.4*t10678*t11945 - 6.4*t10630*t11964)*var2[2] + t12416*var2[5] - 0.768*t11945*var2[6];
  p_output1[28]=t12052*var2[0] + t12378*var2[1] + (-6.4*t10678*t12022 - 6.4*t10630*t12046)*var2[2] + t12430*var2[5] - 0.768*t12022*var2[6];
  p_output1[29]=t12228;
  p_output1[30]=t10691;
  p_output1[31]=-3.3612 - 6.8*Power(t10256,2) - 3.2*Power(t10362,2) - 3.2*Power(t10448,2) - 6.8*Power(t10477,2) - 3.2*Power(t10630,2) - 3.2*Power(t10678,2);
  p_output1[32]=t12455;
  p_output1[33]=t12457;
  p_output1[34]=t12461;
  p_output1[35]=t12463;
  p_output1[36]=t5812*var2[0] + t12279*var2[1];
  p_output1[37]=t10813*var2[0] + t12318*var2[1] + t12390*var2[2];
  p_output1[38]=t11269*var2[0] + t12334*var2[1] + t12404*var2[2] + (-6.4*t11255*t5110 - 6.4*t11203*t5706)*var2[3] - 0.768*t11203*var2[4];
  p_output1[39]=t12233;
  p_output1[40]=t5812;
  p_output1[41]=t12455;
  p_output1[42]=-1.58228 - 3.2*Power(t5110,2) - 3.2*Power(t5706,2);
  p_output1[43]=t12487;
  p_output1[44]=-0.768*t4527*var2[0] - 0.768*t9134*var2[1];
  p_output1[45]=t12492 + t12493 - 0.768*t10978*var2[2];
  p_output1[46]=t12492 + t12493 - 0.768*t11477*var2[2] - 0.768*t11203*var2[3];
  p_output1[47]=t12234;
  p_output1[48]=t12382;
  p_output1[49]=t12457;
  p_output1[50]=t12487;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t7419*var2[0] + t12287*var2[1];
  p_output1[53]=t11858*var2[0] + t12351*var2[1] + t12416*var2[2];
  p_output1[54]=t11999*var2[0] + t12371*var2[1] + t12430*var2[2] + (-6.4*t11994*t6899 - 6.4*t11983*t7329)*var2[5] - 0.768*t11983*var2[6];
  p_output1[55]=t12258;
  p_output1[56]=t7419;
  p_output1[57]=t12461;
  p_output1[58]=-1.58228 - 3.2*Power(t6899,2) - 3.2*Power(t7329,2);
  p_output1[59]=t12551;
  p_output1[60]=-0.768*t6570*var2[0] - 0.768*t10092*var2[1];
  p_output1[61]=t12558 + t12559 - 0.768*t11945*var2[2];
  p_output1[62]=t12558 + t12559 - 0.768*t12022*var2[2] - 0.768*t11983*var2[5];
  p_output1[63]=t12263;
  p_output1[64]=t12383;
  p_output1[65]=t12463;
  p_output1[66]=t12551;
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
