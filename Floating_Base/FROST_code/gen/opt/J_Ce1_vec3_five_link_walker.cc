/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:48:45 GMT-04:00
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
  double t103;
  double t162;
  double t98;
  double t141;
  double t361;
  double t385;
  double t433;
  double t436;
  double t437;
  double t365;
  double t418;
  double t421;
  double t491;
  double t495;
  double t498;
  double t510;
  double t516;
  double t422;
  double t463;
  double t482;
  double t523;
  double t541;
  double t545;
  double t573;
  double t580;
  double t584;
  double t2920;
  double t2924;
  double t2928;
  double t2785;
  double t2786;
  double t2824;
  double t4412;
  double t4416;
  double t4447;
  double t546;
  double t1852;
  double t1878;
  double t2081;
  double t2877;
  double t2915;
  double t3166;
  double t4240;
  double t4276;
  double t4282;
  double t4471;
  double t4603;
  double t4626;
  double t4716;
  double t4757;
  double t4758;
  double t6460;
  double t6518;
  double t4784;
  double t6620;
  double t6625;
  double t4825;
  double t120;
  double t223;
  double t240;
  double t261;
  double t276;
  double t295;
  double t331;
  double t339;
  double t358;
  double t6727;
  double t6743;
  double t6771;
  double t6799;
  double t6822;
  double t6823;
  double t6824;
  double t6828;
  double t6829;
  double t6837;
  double t6845;
  double t6846;
  double t6851;
  double t6852;
  double t6854;
  double t6847;
  double t6848;
  double t6849;
  double t6784;
  double t6807;
  double t6814;
  double t6857;
  double t6861;
  double t6862;
  double t6730;
  double t6750;
  double t6751;
  double t6753;
  double t6754;
  double t6755;
  double t6759;
  double t6762;
  double t6770;
  double t6825;
  double t6850;
  double t6863;
  double t6864;
  double t6886;
  double t6889;
  double t6869;
  double t6875;
  double t6877;
  double t6866;
  double t6891;
  double t6892;
  double t6893;
  double t6909;
  double t6910;
  double t6911;
  double t6890;
  double t6895;
  double t6896;
  double t6912;
  double t6913;
  double t6914;
  double t6916;
  double t6920;
  double t6930;
  double t6949;
  double t6950;
  double t6934;
  double t6984;
  double t6996;
  double t6937;
  double t2873;
  double t3074;
  double t3085;
  double t3089;
  double t4769;
  double t4785;
  double t6455;
  double t6456;
  double t6457;
  double t7076;
  double t7090;
  double t7117;
  double t7118;
  double t7107;
  double t7108;
  double t7110;
  double t7047;
  double t7069;
  double t7070;
  double t7092;
  double t6601;
  double t6635;
  double t6637;
  double t7094;
  double t7095;
  double t7096;
  double t7101;
  double t7113;
  double t6646;
  double t6647;
  double t6691;
  double t7122;
  double t7160;
  double t7161;
  double t7150;
  double t6645;
  double t6696;
  double t6700;
  double t7155;
  double t7156;
  double t7158;
  double t7159;
  double t7162;
  double t7163;
  double t7164;
  double t7165;
  double t7166;
  double t7167;
  double t7168;
  double t7169;
  double t7170;
  double t7171;
  double t7173;
  double t7176;
  double t7177;
  double t7183;
  double t7184;
  double t6894;
  double t6897;
  double t6907;
  double t6908;
  double t6932;
  double t6935;
  double t6939;
  double t6940;
  double t6941;
  double t7251;
  double t7252;
  double t7280;
  double t7284;
  double t7265;
  double t7266;
  double t7267;
  double t7247;
  double t7249;
  double t7250;
  double t7254;
  double t6972;
  double t6998;
  double t7001;
  double t7258;
  double t7260;
  double t7261;
  double t7264;
  double t7271;
  double t7013;
  double t7014;
  double t7015;
  double t7294;
  double t7325;
  double t7326;
  double t7307;
  double t7012;
  double t7023;
  double t7025;
  double t7317;
  double t7322;
  double t7323;
  double t7324;
  double t7330;
  double t7340;
  double t7342;
  double t7343;
  double t7344;
  double t7345;
  double t7348;
  double t7349;
  double t7355;
  double t7356;
  double t7357;
  double t7358;
  double t7359;
  double t7360;
  double t7361;
  double t7399;
  double t7401;
  double t7389;
  double t7393;
  double t7397;
  double t7398;
  double t7422;
  double t7423;
  double t7424;
  double t7427;
  double t7453;
  double t7461;
  double t7400;
  double t7402;
  double t7403;
  double t7405;
  double t7406;
  double t7407;
  double t7458;
  double t7462;
  double t7465;
  double t7468;
  double t7469;
  double t7471;
  double t6711;
  double t6712;
  double t6708;
  double t6709;
  double t7521;
  double t7524;
  double t7526;
  double t7527;
  double t7528;
  double t7511;
  double t7515;
  double t7519;
  double t7520;
  double t6867;
  double t7549;
  double t7550;
  double t7551;
  double t7556;
  double t6868;
  double t7583;
  double t6820;
  double t6827;
  double t7596;
  double t7598;
  double t7599;
  double t7602;
  double t7522;
  double t7532;
  double t7533;
  double t7098;
  double t7100;
  double t7111;
  double t7112;
  double t7114;
  double t7121;
  double t7123;
  double t7124;
  double t7149;
  double t7151;
  double t7615;
  double t7620;
  double t7623;
  double t7535;
  double t7536;
  double t7537;
  double t7650;
  double t7652;
  double t7653;
  double t7655;
  double t7658;
  double t7659;
  double t7660;
  double t7194;
  double t7195;
  double t7196;
  double t7200;
  double t7201;
  double t7202;
  double t7597;
  double t7603;
  double t7604;
  double t7262;
  double t7263;
  double t7268;
  double t7269;
  double t7272;
  double t7289;
  double t7301;
  double t7305;
  double t7306;
  double t7308;
  double t7680;
  double t7683;
  double t7684;
  double t7606;
  double t7609;
  double t7610;
  double t7724;
  double t7726;
  double t7727;
  double t7728;
  double t7733;
  double t7734;
  double t7735;
  double t7369;
  double t7370;
  double t7371;
  double t7374;
  double t7375;
  double t7376;
  double t6458;
  double t6701;
  double t6702;
  double t6710;
  double t6715;
  double t6865;
  double t6878;
  double t6879;
  double t6942;
  double t7033;
  double t7046;
  double t7190;
  double t7246;
  double t7365;
  double t8248;
  double t8270;
  double t8272;
  double t8274;
  double t8313;
  double t8860;
  double t8882;
  double t8886;
  double t8897;
  double t8903;
  double t9267;
  double t9286;
  double t9292;
  double t9313;
  double t9314;
  double t9315;
  double t9363;
  double t9394;
  double t9401;
  double t9456;
  double t9480;
  double t9517;
  double t9741;
  double t9836;
  double t11662;
  double t11704;
  double t11741;
  double t11742;
  double t11743;
  double t11796;
  double t11797;
  double t11838;
  double t11843;
  double t11844;
  double t11845;
  double t11846;
  double t11847;
  double t11848;
  double t11849;
  double t11850;
  double t11965;
  double t11966;
  double t11985;
  double t11997;
  double t11998;
  double t11999;
  double t12000;
  double t12001;
  double t12062;
  double t12063;
  double t12064;
  double t12066;
  double t12067;
  double t12078;
  double t12079;
  double t12085;
  double t12086;
  double t12087;
  double t12093;
  double t12099;
  double t12117;
  double t12123;
  double t12125;
  double t12126;
  double t12127;
  double t12128;
  double t12256;
  double t12257;
  double t12258;
  double t12264;
  double t12266;
  double t12267;
  double t12268;
  double t12269;
  t103 = Cos(var1[3]);
  t162 = Sin(var1[3]);
  t98 = Cos(var1[2]);
  t141 = Sin(var1[2]);
  t361 = Cos(var1[4]);
  t385 = Sin(var1[4]);
  t433 = t103*t361;
  t436 = -1.*t162*t385;
  t437 = t433 + t436;
  t365 = -1.*t361*t162;
  t418 = -1.*t103*t385;
  t421 = t365 + t418;
  t491 = -1.*t361;
  t495 = 1. + t491;
  t498 = 0.4*t495;
  t510 = 0.64*t361;
  t516 = t498 + t510;
  t422 = t98*t421;
  t463 = -1.*t141*t437;
  t482 = t422 + t463;
  t523 = t516*t162;
  t541 = 0.24*t103*t385;
  t545 = t523 + t541;
  t573 = t103*t516;
  t580 = -0.24*t162*t385;
  t584 = t573 + t580;
  t2920 = t361*t162;
  t2924 = t103*t385;
  t2928 = t2920 + t2924;
  t2785 = -1.*t516*t162;
  t2786 = -0.24*t103*t385;
  t2824 = t2785 + t2786;
  t4412 = -1.*t103*t361;
  t4416 = t162*t385;
  t4447 = t4412 + t4416;
  t546 = -1.*t545*t437;
  t1852 = -1.*t421*t584;
  t1878 = t546 + t1852;
  t2081 = 3.2*t482*t1878;
  t2877 = t545*t437;
  t2915 = t421*t584;
  t3166 = t545*t2928;
  t4240 = t437*t584;
  t4276 = t3166 + t4240;
  t4282 = -1.*t141*t421;
  t4471 = t98*t4447;
  t4603 = t4282 + t4471;
  t4626 = 3.2*t4276*t4603;
  t4716 = -1.*t141*t2928;
  t4757 = t98*t437;
  t4758 = t4716 + t4757;
  t6460 = -0.24*t361*t162;
  t6518 = t6460 + t2786;
  t4784 = -1.*t421*t545;
  t6620 = 0.24*t103*t361;
  t6625 = t6620 + t580;
  t4825 = -1.*t584*t4447;
  t120 = -1.*t98*t103;
  t223 = t141*t162;
  t240 = t120 + t223;
  t261 = Power(t103,2);
  t276 = 0.11*t261;
  t295 = Power(t162,2);
  t331 = 0.11*t295;
  t339 = t276 + t331;
  t358 = 6.8*t240*t339;
  t6727 = Cos(var1[5]);
  t6743 = Sin(var1[5]);
  t6771 = Cos(var1[6]);
  t6799 = Sin(var1[6]);
  t6822 = t6727*t6771;
  t6823 = -1.*t6743*t6799;
  t6824 = t6822 + t6823;
  t6828 = -1.*t6771;
  t6829 = 1. + t6828;
  t6837 = 0.4*t6829;
  t6845 = 0.64*t6771;
  t6846 = t6837 + t6845;
  t6851 = -1.*t6771*t6743;
  t6852 = -1.*t6727*t6799;
  t6854 = t6851 + t6852;
  t6847 = t6846*t6743;
  t6848 = 0.24*t6727*t6799;
  t6849 = t6847 + t6848;
  t6784 = t6771*t6743;
  t6807 = t6727*t6799;
  t6814 = t6784 + t6807;
  t6857 = t6727*t6846;
  t6861 = -0.24*t6743*t6799;
  t6862 = t6857 + t6861;
  t6730 = -1.*t98*t6727;
  t6750 = t141*t6743;
  t6751 = t6730 + t6750;
  t6753 = Power(t6727,2);
  t6754 = 0.11*t6753;
  t6755 = Power(t6743,2);
  t6759 = 0.11*t6755;
  t6762 = t6754 + t6759;
  t6770 = 6.8*t6751*t6762;
  t6825 = -1.*t141*t6824;
  t6850 = -1.*t6849*t6824;
  t6863 = -1.*t6854*t6862;
  t6864 = t6850 + t6863;
  t6886 = t98*t6854;
  t6889 = t6886 + t6825;
  t6869 = t6849*t6814;
  t6875 = t6824*t6862;
  t6877 = t6869 + t6875;
  t6866 = -1.*t141*t6854;
  t6891 = -1.*t6846*t6743;
  t6892 = -0.24*t6727*t6799;
  t6893 = t6891 + t6892;
  t6909 = -1.*t6727*t6771;
  t6910 = t6743*t6799;
  t6911 = t6909 + t6910;
  t6890 = 3.2*t6889*t6864;
  t6895 = t6849*t6824;
  t6896 = t6854*t6862;
  t6912 = t98*t6911;
  t6913 = t6866 + t6912;
  t6914 = 3.2*t6877*t6913;
  t6916 = -1.*t141*t6814;
  t6920 = t98*t6824;
  t6930 = t6916 + t6920;
  t6949 = -0.24*t6771*t6743;
  t6950 = t6949 + t6892;
  t6934 = -1.*t6854*t6849;
  t6984 = 0.24*t6727*t6771;
  t6996 = t6984 + t6861;
  t6937 = -1.*t6862*t6911;
  t2873 = t2824*t437;
  t3074 = t2928*t584;
  t3085 = t2873 + t2877 + t2915 + t3074;
  t3089 = 3.2*t482*t3085;
  t4769 = -1.*t421*t2824;
  t4785 = -1.*t437*t584;
  t6455 = t4769 + t4784 + t4785 + t4825;
  t6456 = 3.2*t4758*t6455;
  t6457 = t358 + t2081 + t3089 + t4626 + t6456;
  t7076 = t141*t4447;
  t7090 = t422 + t7076;
  t7117 = t141*t421;
  t7118 = t7117 + t4757;
  t7107 = -1.*t103*t516;
  t7108 = 0.24*t162*t385;
  t7110 = t7107 + t7108;
  t7047 = t141*t2928;
  t7069 = t7047 + t4471;
  t7070 = 3.2*t4276*t7069;
  t7092 = 3.2*t1878*t7090;
  t6601 = t6518*t437;
  t6635 = t2928*t6625;
  t6637 = t6601 + t2877 + t2915 + t6635;
  t7094 = t98*t2928;
  t7095 = t141*t437;
  t7096 = t7094 + t7095;
  t7101 = -1.*t2928*t584;
  t7113 = -1.*t545*t4447;
  t6646 = -1.*t421*t6518;
  t6647 = -1.*t437*t6625;
  t6691 = t6646 + t4784 + t6647 + t4825;
  t7122 = t421*t545;
  t7160 = -0.24*t103*t361;
  t7161 = t7160 + t7108;
  t7150 = t584*t4447;
  t6645 = 3.2*t482*t6637;
  t6696 = 3.2*t4758*t6691;
  t6700 = t2081 + t6645 + t4626 + t6696;
  t7155 = 3.2*t3085*t7090;
  t7156 = 3.2*t6637*t7090;
  t7158 = -1.*t6518*t437;
  t7159 = -1.*t421*t6625;
  t7162 = -1.*t421*t7161;
  t7163 = -1.*t2824*t4447;
  t7164 = -1.*t6518*t4447;
  t7165 = t7158 + t1852 + t7101 + t7159 + t7162 + t7163 + t7164 + t7113;
  t7166 = 3.2*t7096*t7165;
  t7167 = 3.2*t7118*t6455;
  t7168 = 3.2*t7118*t6691;
  t7169 = t421*t2824;
  t7170 = t421*t6518;
  t7171 = t6518*t2928;
  t7173 = t437*t6625;
  t7176 = t437*t7161;
  t7177 = t7169 + t7170 + t7122 + t7171 + t4240 + t7173 + t7176 + t7150;
  t7183 = 3.2*t7118*t7177;
  t7184 = t7070 + t7092 + t7155 + t7156 + t7166 + t7167 + t7168 + t7183;
  t6894 = t6893*t6824;
  t6897 = t6814*t6862;
  t6907 = t6894 + t6895 + t6896 + t6897;
  t6908 = 3.2*t6889*t6907;
  t6932 = -1.*t6854*t6893;
  t6935 = -1.*t6824*t6862;
  t6939 = t6932 + t6934 + t6935 + t6937;
  t6940 = 3.2*t6930*t6939;
  t6941 = t6770 + t6890 + t6908 + t6914 + t6940;
  t7251 = t141*t6911;
  t7252 = t6886 + t7251;
  t7280 = t141*t6854;
  t7284 = t7280 + t6920;
  t7265 = -1.*t6727*t6846;
  t7266 = 0.24*t6743*t6799;
  t7267 = t7265 + t7266;
  t7247 = t141*t6814;
  t7249 = t7247 + t6912;
  t7250 = 3.2*t6877*t7249;
  t7254 = 3.2*t6864*t7252;
  t6972 = t6950*t6824;
  t6998 = t6814*t6996;
  t7001 = t6972 + t6895 + t6896 + t6998;
  t7258 = t98*t6814;
  t7260 = t141*t6824;
  t7261 = t7258 + t7260;
  t7264 = -1.*t6814*t6862;
  t7271 = -1.*t6849*t6911;
  t7013 = -1.*t6854*t6950;
  t7014 = -1.*t6824*t6996;
  t7015 = t7013 + t6934 + t7014 + t6937;
  t7294 = t6854*t6849;
  t7325 = -0.24*t6727*t6771;
  t7326 = t7325 + t7266;
  t7307 = t6862*t6911;
  t7012 = 3.2*t6889*t7001;
  t7023 = 3.2*t6930*t7015;
  t7025 = t6890 + t7012 + t6914 + t7023;
  t7317 = 3.2*t6907*t7252;
  t7322 = 3.2*t7001*t7252;
  t7323 = -1.*t6950*t6824;
  t7324 = -1.*t6854*t6996;
  t7330 = -1.*t6854*t7326;
  t7340 = -1.*t6893*t6911;
  t7342 = -1.*t6950*t6911;
  t7343 = t7323 + t6863 + t7264 + t7324 + t7330 + t7340 + t7342 + t7271;
  t7344 = 3.2*t7261*t7343;
  t7345 = 3.2*t7284*t6939;
  t7348 = 3.2*t7284*t7015;
  t7349 = t6854*t6893;
  t7355 = t6854*t6950;
  t7356 = t6950*t6814;
  t7357 = t6824*t6996;
  t7358 = t6824*t7326;
  t7359 = t7349 + t7355 + t7294 + t7356 + t6875 + t7357 + t7358 + t7307;
  t7360 = 3.2*t7284*t7359;
  t7361 = t7250 + t7254 + t7317 + t7322 + t7344 + t7345 + t7348 + t7360;
  t7399 = 3.2*t7118*t1878;
  t7401 = 3.2*t4276*t7090;
  t7389 = -1.*t103*t141;
  t7393 = -1.*t98*t162;
  t7397 = t7389 + t7393;
  t7398 = 6.8*t7397*t339;
  t7422 = -1.*t6727*t141;
  t7423 = -1.*t98*t6743;
  t7424 = t7422 + t7423;
  t7427 = 6.8*t7424*t6762;
  t7453 = 3.2*t7284*t6864;
  t7461 = 3.2*t6877*t7252;
  t7400 = 3.2*t7118*t3085;
  t7402 = 3.2*t7096*t6455;
  t7403 = t7398 + t7399 + t7400 + t7401 + t7402;
  t7405 = 3.2*t7118*t6637;
  t7406 = 3.2*t7096*t6691;
  t7407 = t7399 + t7405 + t7401 + t7406;
  t7458 = 3.2*t7284*t6907;
  t7462 = 3.2*t7261*t6939;
  t7465 = t7427 + t7453 + t7458 + t7461 + t7462;
  t7468 = 3.2*t7284*t7001;
  t7469 = 3.2*t7261*t7015;
  t7471 = t7453 + t7468 + t7461 + t7469;
  t6711 = -1.*t98*t437;
  t6712 = t4282 + t6711;
  t6708 = -1.*t98*t2928;
  t6709 = t6708 + t463;
  t7521 = 3.2*t6712*t1878;
  t7524 = -1.*t98*t421;
  t7526 = -1.*t141*t4447;
  t7527 = t7524 + t7526;
  t7528 = 3.2*t4276*t7527;
  t7511 = t103*t141;
  t7515 = t98*t162;
  t7519 = t7511 + t7515;
  t7520 = 6.8*t7519*t339;
  t6867 = -1.*t98*t6824;
  t7549 = t6727*t141;
  t7550 = t98*t6743;
  t7551 = t7549 + t7550;
  t7556 = 6.8*t7551*t6762;
  t6868 = t6866 + t6867;
  t7583 = -1.*t98*t6854;
  t6820 = -1.*t98*t6814;
  t6827 = t6820 + t6825;
  t7596 = 3.2*t6868*t6864;
  t7598 = -1.*t141*t6911;
  t7599 = t7583 + t7598;
  t7602 = 3.2*t6877*t7599;
  t7522 = 3.2*t6712*t3085;
  t7532 = 3.2*t6709*t6455;
  t7533 = t7520 + t7521 + t7522 + t7528 + t7532;
  t7098 = -1.*t2824*t437;
  t7100 = -2.*t421*t584;
  t7111 = -1.*t421*t7110;
  t7112 = -2.*t2824*t4447;
  t7114 = t7098 + t7100 + t7101 + t7111 + t7112 + t7113;
  t7121 = 2.*t421*t2824;
  t7123 = t2824*t2928;
  t7124 = 2.*t437*t584;
  t7149 = t437*t7110;
  t7151 = t7121 + t7122 + t7123 + t7124 + t7149 + t7150;
  t7615 = 3.2*t1878*t4603;
  t7620 = t7094 + t7526;
  t7623 = 3.2*t4276*t7620;
  t7535 = 3.2*t6712*t6637;
  t7536 = 3.2*t6709*t6691;
  t7537 = t7521 + t7535 + t7528 + t7536;
  t7650 = 3.2*t3085*t4603;
  t7652 = 3.2*t6637*t4603;
  t7653 = 3.2*t4758*t7165;
  t7655 = 3.2*t482*t6455;
  t7658 = 3.2*t482*t6691;
  t7659 = 3.2*t482*t7177;
  t7660 = t7615 + t7650 + t7652 + t7623 + t7653 + t7655 + t7658 + t7659;
  t7194 = -2.*t421*t6625;
  t7195 = -2.*t6518*t4447;
  t7196 = t7158 + t7101 + t7194 + t7162 + t7195 + t7113;
  t7200 = 2.*t421*t6518;
  t7201 = 2.*t437*t6625;
  t7202 = t7200 + t7122 + t7171 + t7201 + t7176 + t7150;
  t7597 = 3.2*t6868*t6907;
  t7603 = 3.2*t6827*t6939;
  t7604 = t7556 + t7596 + t7597 + t7602 + t7603;
  t7262 = -1.*t6893*t6824;
  t7263 = -2.*t6854*t6862;
  t7268 = -1.*t6854*t7267;
  t7269 = -2.*t6893*t6911;
  t7272 = t7262 + t7263 + t7264 + t7268 + t7269 + t7271;
  t7289 = 2.*t6854*t6893;
  t7301 = t6893*t6814;
  t7305 = 2.*t6824*t6862;
  t7306 = t6824*t7267;
  t7308 = t7289 + t7294 + t7301 + t7305 + t7306 + t7307;
  t7680 = 3.2*t6864*t6913;
  t7683 = t7258 + t7598;
  t7684 = 3.2*t6877*t7683;
  t7606 = 3.2*t6868*t7001;
  t7609 = 3.2*t6827*t7015;
  t7610 = t7596 + t7606 + t7602 + t7609;
  t7724 = 3.2*t6907*t6913;
  t7726 = 3.2*t7001*t6913;
  t7727 = 3.2*t6930*t7343;
  t7728 = 3.2*t6889*t6939;
  t7733 = 3.2*t6889*t7015;
  t7734 = 3.2*t6889*t7359;
  t7735 = t7680 + t7724 + t7726 + t7684 + t7727 + t7728 + t7733 + t7734;
  t7369 = -2.*t6854*t6996;
  t7370 = -2.*t6950*t6911;
  t7371 = t7323 + t7264 + t7369 + t7330 + t7370 + t7271;
  t7374 = 2.*t6854*t6950;
  t7375 = 2.*t6824*t6996;
  t7376 = t7374 + t7294 + t7356 + t7375 + t7358 + t7307;
  t6458 = -0.5*var2[3]*t6457;
  t6701 = -0.5*var2[4]*t6700;
  t6702 = -2.88*t98;
  t6710 = 3.2*t6709*t1878;
  t6715 = 3.2*t6712*t4276;
  t6865 = 3.2*t6827*t6864;
  t6878 = 3.2*t6868*t6877;
  t6879 = t6702 + t358 + t6710 + t6715 + t6770 + t6865 + t6878;
  t6942 = -0.5*var2[5]*t6941;
  t7033 = -0.5*var2[6]*t7025;
  t7046 = -0.5*var2[2]*t6457;
  t7190 = -0.5*var2[2]*t6700;
  t7246 = -0.5*var2[2]*t6941;
  t7365 = -0.5*var2[2]*t7025;
  t8248 = 6.4*t3085*t6637;
  t8270 = 6.4*t1878*t7165;
  t8272 = 6.4*t6455*t6691;
  t8274 = 6.4*t4276*t7177;
  t8313 = t8248 + t8270 + t8272 + t8274;
  t8860 = 6.4*t6907*t7001;
  t8882 = 6.4*t6864*t7343;
  t8886 = 6.4*t6939*t7015;
  t8897 = 6.4*t6877*t7359;
  t8903 = t8860 + t8882 + t8886 + t8897;
  t9267 = 6.4*t3085*t4276;
  t9286 = 6.4*t1878*t6455;
  t9292 = t9267 + t9286;
  t9313 = 6.4*t4276*t6637;
  t9314 = 6.4*t1878*t6691;
  t9315 = t9313 + t9314;
  t9363 = 6.4*t6907*t6877;
  t9394 = 6.4*t6864*t6939;
  t9401 = t9363 + t9394;
  t9456 = 6.4*t6877*t7001;
  t9480 = 6.4*t6864*t7015;
  t9517 = t9456 + t9480;
  t9741 = t516*t385;
  t9836 = -0.24*t361*t385;
  t11662 = t9741 + t9836;
  t11704 = t516*t361;
  t11741 = Power(t385,2);
  t11742 = 0.24*t11741;
  t11743 = t11704 + t11742;
  t11796 = -1.*t516*t385;
  t11797 = 0.24*t361*t385;
  t11838 = t11796 + t11797;
  t11843 = 3.2*t11838*t3085;
  t11844 = 3.2*t11662*t7165;
  t11845 = Power(t361,2);
  t11846 = -0.24*t11845;
  t11847 = t11704 + t11846;
  t11848 = 3.2*t11847*t6455;
  t11849 = 3.2*t11743*t7177;
  t11850 = t11843 + t11844 + t11848 + t11849;
  t11965 = 3.2*t11743*t3085;
  t11966 = 3.2*t11662*t6455;
  t11985 = t11965 + t11966;
  t11997 = 3.2*t11847*t1878;
  t11998 = 3.2*t11838*t4276;
  t11999 = 3.2*t11743*t6637;
  t12000 = 3.2*t11662*t6691;
  t12001 = t11997 + t11998 + t11999 + t12000;
  t12062 = t6846*t6799;
  t12063 = -0.24*t6771*t6799;
  t12064 = t12062 + t12063;
  t12066 = t6846*t6771;
  t12067 = Power(t6799,2);
  t12078 = 0.24*t12067;
  t12079 = t12066 + t12078;
  t12085 = -1.*t6846*t6799;
  t12086 = 0.24*t6771*t6799;
  t12087 = t12085 + t12086;
  t12093 = 3.2*t12087*t6907;
  t12099 = 3.2*t12064*t7343;
  t12117 = Power(t6771,2);
  t12123 = -0.24*t12117;
  t12125 = t12066 + t12123;
  t12126 = 3.2*t12125*t6939;
  t12127 = 3.2*t12079*t7359;
  t12128 = t12093 + t12099 + t12126 + t12127;
  t12256 = 3.2*t12079*t6907;
  t12257 = 3.2*t12064*t6939;
  t12258 = t12256 + t12257;
  t12264 = 3.2*t12125*t6864;
  t12266 = 3.2*t12087*t6877;
  t12267 = 3.2*t12079*t7001;
  t12268 = 3.2*t12064*t7015;
  t12269 = t12264 + t12266 + t12267 + t12268;
  p_output1[0]=var2[2]*(t6458 + t6701 + t6942 + t7033 - 0.5*t6879*var2[2]);
  p_output1[1]=var2[2]*(t7046 - 0.5*(t358 + t7070 + 6.4*t3085*t7090 + t7092 + 3.2*t7096*t7114 + 6.4*t6455*t7118 + 3.2*t7118*t7151)*var2[3] - 0.5*t7184*var2[4]);
  p_output1[2]=var2[2]*(t7190 - 0.5*t7184*var2[3] - 0.5*(t7070 + 6.4*t6637*t7090 + t7092 + 6.4*t6691*t7118 + 3.2*t7096*t7196 + 3.2*t7118*t7202)*var2[4]);
  p_output1[3]=var2[2]*(t7246 - 0.5*(t6770 + t7250 + 6.4*t6907*t7252 + t7254 + 3.2*t7261*t7272 + 6.4*t6939*t7284 + 3.2*t7284*t7308)*var2[5] - 0.5*t7361*var2[6]);
  p_output1[4]=var2[2]*(t7365 - 0.5*t7361*var2[5] - 0.5*(t7250 + 6.4*t7001*t7252 + t7254 + 6.4*t7015*t7284 + 3.2*t7261*t7371 + 3.2*t7284*t7376)*var2[6]);
  p_output1[5]=-1.*(-2.88*t141 + 3.2*t1878*t4758 + 3.2*t4276*t482 + 3.2*t6877*t6889 + 3.2*t6864*t6930 + t7398 + t7427)*var2[2] - 0.5*t7403*var2[3] - 0.5*t7407*var2[4] - 0.5*t7465*var2[5] - 0.5*t7471*var2[6];
  p_output1[6]=-0.5*t7403*var2[2];
  p_output1[7]=-0.5*t7407*var2[2];
  p_output1[8]=-0.5*t7465*var2[2];
  p_output1[9]=-0.5*t7471*var2[2];
  p_output1[10]=var2[2]*(-0.5*(2.88*t141 + 3.2*t1878*(t6711 + t7047) + 3.2*t6864*(t6867 + t7247) + t7520 + 3.2*t4276*(t7095 + t7524) + t7556 + 3.2*t6877*(t7260 + t7583))*var2[2] - 0.5*t7533*var2[3] - 0.5*t7537*var2[4] - 0.5*t7604*var2[5] - 0.5*t7610*var2[6]);
  p_output1[11]=var2[2]*(-0.5*t7533*var2[2] - 0.5*(6.4*t3085*t4603 + 6.4*t482*t6455 + 3.2*t4758*t7114 + 3.2*t482*t7151 + t7520 + t7615 + t7623)*var2[3] - 0.5*t7660*var2[4]);
  p_output1[12]=var2[2]*(-0.5*t7537*var2[2] - 0.5*t7660*var2[3] - 0.5*(6.4*t4603*t6637 + 6.4*t482*t6691 + 3.2*t4758*t7196 + 3.2*t482*t7202 + t7615 + t7623)*var2[4]);
  p_output1[13]=var2[2]*(-0.5*t7604*var2[2] - 0.5*(6.4*t6907*t6913 + 6.4*t6889*t6939 + 3.2*t6930*t7272 + 3.2*t6889*t7308 + t7556 + t7680 + t7684)*var2[5] - 0.5*t7735*var2[6]);
  p_output1[14]=var2[2]*(-0.5*t7610*var2[2] - 0.5*t7735*var2[5] - 0.5*(6.4*t6913*t7001 + 6.4*t6889*t7015 + 3.2*t6930*t7371 + 3.2*t6889*t7376 + t7680 + t7684)*var2[6]);
  p_output1[15]=t6458 + t6701 + t6942 + t7033 - 1.*t6879*var2[2];
  p_output1[16]=t7046;
  p_output1[17]=t7190;
  p_output1[18]=t7246;
  p_output1[19]=t7365;
  p_output1[20]=var2[2]*(-0.5*(6.4*Power(t3085,2) + 6.4*Power(t6455,2) + 6.4*t1878*t7114 + 6.4*t4276*t7151)*var2[3] - 0.5*t8313*var2[4]);
  p_output1[21]=var2[2]*(-0.5*t8313*var2[3] - 0.5*(6.4*Power(t6637,2) + 6.4*Power(t6691,2) + 6.4*t1878*t7196 + 6.4*t4276*t7202)*var2[4]);
  p_output1[22]=var2[2]*(-0.5*(6.4*Power(t6907,2) + 6.4*Power(t6939,2) + 6.4*t6864*t7272 + 6.4*t6877*t7308)*var2[5] - 0.5*t8903*var2[6]);
  p_output1[23]=var2[2]*(-0.5*t8903*var2[5] - 0.5*(6.4*Power(t7001,2) + 6.4*Power(t7015,2) + 6.4*t6864*t7371 + 6.4*t6877*t7376)*var2[6]);
  p_output1[24]=-0.5*t9292*var2[3] - 0.5*t9315*var2[4] - 0.5*t9401*var2[5] - 0.5*t9517*var2[6];
  p_output1[25]=-0.5*t9292*var2[2];
  p_output1[26]=-0.5*t9315*var2[2];
  p_output1[27]=-0.5*t9401*var2[2];
  p_output1[28]=-0.5*t9517*var2[2];
  p_output1[29]=var2[2]*(-0.5*(3.2*t11662*t7114 + 3.2*t11743*t7151)*var2[3] - 0.5*t11850*var2[4]);
  p_output1[30]=var2[2]*(-0.5*t11850*var2[3] - 0.5*(3.2*t11838*t1878 + 3.2*t4276*(0.24*t11845 - 1.*t361*t516) + 6.4*t11838*t6637 + 6.4*t11847*t6691 + 3.2*t11662*t7196 + 3.2*t11743*t7202)*var2[4]);
  p_output1[31]=-0.5*t11985*var2[3] - 0.5*t12001*var2[4];
  p_output1[32]=-0.5*t11985*var2[2];
  p_output1[33]=-0.5*t12001*var2[2];
  p_output1[34]=var2[2]*(-0.384*t7151*var2[3] - 0.384*t7177*var2[4]);
  p_output1[35]=var2[2]*(-0.384*t7177*var2[3] - 0.384*t7202*var2[4]);
  p_output1[36]=-0.384*t3085*var2[3] - 0.384*t6637*var2[4];
  p_output1[37]=-0.384*t3085*var2[2];
  p_output1[38]=-0.384*t6637*var2[2];
  p_output1[39]=var2[2]*(-0.5*(3.2*t12064*t7272 + 3.2*t12079*t7308)*var2[5] - 0.5*t12128*var2[6]);
  p_output1[40]=var2[2]*(-0.5*t12128*var2[5] - 0.5*(3.2*t12087*t6864 + 3.2*(0.24*t12117 - 1.*t6771*t6846)*t6877 + 6.4*t12087*t7001 + 6.4*t12125*t7015 + 3.2*t12064*t7371 + 3.2*t12079*t7376)*var2[6]);
  p_output1[41]=-0.5*t12258*var2[5] - 0.5*t12269*var2[6];
  p_output1[42]=-0.5*t12258*var2[2];
  p_output1[43]=-0.5*t12269*var2[2];
  p_output1[44]=var2[2]*(-0.384*t7308*var2[5] - 0.384*t7359*var2[6]);
  p_output1[45]=var2[2]*(-0.384*t7359*var2[5] - 0.384*t7376*var2[6]);
  p_output1[46]=-0.384*t6907*var2[5] - 0.384*t7001*var2[6];
  p_output1[47]=-0.384*t6907*var2[2];
  p_output1[48]=-0.384*t7001*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 49, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec3_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
