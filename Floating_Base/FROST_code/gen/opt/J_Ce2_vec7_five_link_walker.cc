/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:49:55 GMT-04:00
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
  double t3041;
  double t1802;
  double t2298;
  double t3083;
  double t1028;
  double t3130;
  double t5402;
  double t6743;
  double t6760;
  double t6764;
  double t6833;
  double t2799;
  double t3088;
  double t3114;
  double t7123;
  double t7137;
  double t7146;
  double t7254;
  double t7256;
  double t7262;
  double t6967;
  double t3126;
  double t3221;
  double t4470;
  double t4598;
  double t4639;
  double t4832;
  double t7068;
  double t7069;
  double t7121;
  double t7122;
  double t7148;
  double t7153;
  double t7310;
  double t7311;
  double t7321;
  double t7326;
  double t7333;
  double t7334;
  double t7335;
  double t7352;
  double t7360;
  double t7374;
  double t7375;
  double t7376;
  double t7381;
  double t7382;
  double t7383;
  double t7387;
  double t7388;
  double t7389;
  double t7393;
  double t7399;
  double t7015;
  double t7043;
  double t7044;
  double t7296;
  double t7298;
  double t7303;
  double t7436;
  double t7444;
  double t7191;
  double t7199;
  double t7253;
  double t7292;
  double t7293;
  double t7294;
  double t7349;
  double t7403;
  double t7404;
  double t7407;
  double t7380;
  double t7384;
  double t7385;
  double t7391;
  double t7392;
  double t7390;
  double t7400;
  double t7401;
  double t7497;
  double t7498;
  double t7410;
  double t7418;
  double t7409;
  double t7413;
  double t7419;
  double t7507;
  double t7508;
  double t7509;
  double t7445;
  double t7447;
  double t7450;
  double t7454;
  double t7457;
  double t7458;
  double t7459;
  double t7460;
  double t7461;
  double t7462;
  double t7463;
  double t7466;
  double t7468;
  double t7471;
  double t7472;
  double t7473;
  double t7474;
  double t7477;
  double t7493;
  double t7494;
  double t7495;
  double t7496;
  double t7504;
  double t7505;
  double t7510;
  double t7513;
  double t7523;
  double t7524;
  double t7526;
  double t7527;
  double t7638;
  double t7639;
  double t7640;
  double t7641;
  double t7642;
  double t7602;
  double t7603;
  double t7604;
  double t7606;
  double t7607;
  double t7610;
  double t7612;
  double t7615;
  double t7617;
  double t7618;
  double t7621;
  double t7626;
  double t7630;
  double t7345;
  double t7350;
  double t7312;
  double t7319;
  double t7309;
  double t7320;
  double t7343;
  double t7344;
  double t7351;
  double t7361;
  double t7362;
  double t7499;
  double t7500;
  double t7501;
  double t7506;
  double t7511;
  double t7512;
  double t7514;
  double t7516;
  double t7517;
  double t7518;
  double t7521;
  double t7522;
  double t7525;
  double t7528;
  double t7672;
  double t7540;
  double t7541;
  double t7542;
  double t7675;
  double t7677;
  double t7684;
  double t7685;
  double t7686;
  double t7687;
  double t7692;
  double t7716;
  double t7718;
  double t7719;
  double t7720;
  double t7725;
  double t7867;
  double t7581;
  double t7582;
  double t7583;
  double t7590;
  double t7591;
  double t7594;
  double t7616;
  double t7386;
  double t7402;
  double t7408;
  double t7430;
  double t7431;
  double t7154;
  double t7283;
  double t7295;
  double t7306;
  double t7307;
  double t7308;
  double t9852;
  double t7432;
  double t7664;
  double t7665;
  double t7666;
  double t7667;
  double t7668;
  double t7502;
  double t7503;
  double t7515;
  double t7519;
  double t7520;
  double t7529;
  double t7531;
  double t7726;
  double t7727;
  double t7924;
  double t7997;
  double t8211;
  double t8264;
  double t8265;
  double t7576;
  double t7588;
  double t7589;
  double t7595;
  double t7596;
  double t8924;
  double t9209;
  double t9415;
  double t9465;
  double t9594;
  double t7637;
  double t9936;
  double t12153;
  double t12154;
  double t12155;
  double t12156;
  double t12157;
  double t12099;
  double t12100;
  double t12151;
  double t7651;
  double t7652;
  double t7653;
  double t7654;
  double t7655;
  double t7673;
  double t7676;
  double t7678;
  double t7446;
  double t7451;
  double t7452;
  double t10363;
  double t10364;
  double t10365;
  double t10366;
  double t10367;
  double t8513;
  double t8621;
  double t8625;
  double t8629;
  double t8922;
  double t7539;
  double t7543;
  double t7548;
  double t7572;
  double t7574;
  double t11708;
  double t11710;
  double t11711;
  double t11799;
  double t11975;
  double t11976;
  double t11981;
  double t7643;
  double t10149;
  double t12159;
  double t12279;
  double t12291;
  double t12292;
  double t12327;
  double t12328;
  double t4833;
  t3041 = Cos(var1[5]);
  t1802 = Cos(var1[6]);
  t2298 = Sin(var1[5]);
  t3083 = Sin(var1[6]);
  t1028 = Sin(var1[2]);
  t3130 = Cos(var1[2]);
  t5402 = -1.*t1802;
  t6743 = 1. + t5402;
  t6760 = 0.4*t6743;
  t6764 = 0.64*t1802;
  t6833 = t6760 + t6764;
  t2799 = -1.*t1802*t2298;
  t3088 = -1.*t3041*t3083;
  t3114 = t2799 + t3088;
  t7123 = t3041*t1802;
  t7137 = -1.*t2298*t3083;
  t7146 = t7123 + t7137;
  t7254 = t3130*t3114;
  t7256 = -1.*t1028*t7146;
  t7262 = t7254 + t7256;
  t6967 = t6833*t1802;
  t3126 = -1.*t1028*t3114;
  t3221 = -1.*t3041*t1802;
  t4470 = t2298*t3083;
  t4598 = t3221 + t4470;
  t4639 = t3130*t4598;
  t4832 = t3126 + t4639;
  t7068 = t1802*t2298;
  t7069 = t3041*t3083;
  t7121 = t7068 + t7069;
  t7122 = -1.*t1028*t7121;
  t7148 = t3130*t7146;
  t7153 = t7122 + t7148;
  t7310 = t1028*t3114;
  t7311 = t7310 + t7148;
  t7321 = -1.*t3130*t7146;
  t7326 = t3126 + t7321;
  t7333 = t3130*t7121;
  t7334 = t1028*t7146;
  t7335 = t7333 + t7334;
  t7352 = t1028*t4598;
  t7360 = t7254 + t7352;
  t7374 = t6833*t2298;
  t7375 = 0.24*t3041*t3083;
  t7376 = t7374 + t7375;
  t7381 = t3041*t6833;
  t7382 = -0.24*t2298*t3083;
  t7383 = t7381 + t7382;
  t7387 = -0.24*t1802*t2298;
  t7388 = -0.24*t3041*t3083;
  t7389 = t7387 + t7388;
  t7393 = 0.24*t3041*t1802;
  t7399 = t7393 + t7382;
  t7015 = Power(t1802,2);
  t7043 = -0.24*t7015;
  t7044 = t6967 + t7043;
  t7296 = Power(t3083,2);
  t7298 = 0.24*t7296;
  t7303 = t6967 + t7298;
  t7436 = t1028*t7121;
  t7444 = t7436 + t4639;
  t7191 = t6833*t3083;
  t7199 = -0.24*t1802*t3083;
  t7253 = t7191 + t7199;
  t7292 = -1.*t6833*t3083;
  t7293 = 0.24*t1802*t3083;
  t7294 = t7292 + t7293;
  t7349 = -1.*t1028*t4598;
  t7403 = t7376*t7121;
  t7404 = t7146*t7383;
  t7407 = t7403 + t7404;
  t7380 = -1.*t7376*t7146;
  t7384 = -1.*t3114*t7383;
  t7385 = t7380 + t7384;
  t7391 = t7376*t7146;
  t7392 = t3114*t7383;
  t7390 = t7389*t7146;
  t7400 = t7121*t7399;
  t7401 = t7390 + t7391 + t7392 + t7400;
  t7497 = -1.*t6833*t2298;
  t7498 = t7497 + t7388;
  t7410 = -1.*t3114*t7376;
  t7418 = -1.*t7383*t4598;
  t7409 = -1.*t3114*t7389;
  t7413 = -1.*t7146*t7399;
  t7419 = t7409 + t7410 + t7413 + t7418;
  t7507 = -0.24*t3041*t1802;
  t7508 = 0.24*t2298*t3083;
  t7509 = t7507 + t7508;
  t7445 = -0.384*var2[6]*t7444;
  t7447 = 3.2*t7303*t7444;
  t7450 = 3.2*t7253*t7360;
  t7454 = 6.4*t7311*t7262;
  t7457 = 3.2*t7335*t4832;
  t7458 = 3.2*t7262*t7444;
  t7459 = t7333 + t7349;
  t7460 = 3.2*t7311*t7459;
  t7461 = 3.2*t7153*t7360;
  t7462 = 6.4*t4832*t7360;
  t7463 = t7454 + t7457 + t7458 + t7460 + t7461 + t7462;
  t7466 = -0.5*var2[1]*t7463;
  t7468 = Power(t7311,2);
  t7471 = 6.4*t7468;
  t7472 = 6.4*t7311*t7444;
  t7473 = 6.4*t7335*t7360;
  t7474 = Power(t7360,2);
  t7477 = 6.4*t7474;
  t7493 = t7471 + t7472 + t7473 + t7477;
  t7494 = -0.5*var2[0]*t7493;
  t7495 = 3.2*t7407*t7444;
  t7496 = 3.2*t7385*t7360;
  t7504 = -1.*t7389*t7146;
  t7505 = -1.*t7121*t7383;
  t7510 = -1.*t3114*t7509;
  t7513 = -1.*t7376*t4598;
  t7523 = t3114*t7376;
  t7524 = t7389*t7121;
  t7526 = t7146*t7509;
  t7527 = t7383*t4598;
  t7638 = 3.2*t7253*t7311;
  t7639 = 3.2*t7294*t7311;
  t7640 = 3.2*t7044*t7335;
  t7641 = 3.2*t7303*t7360;
  t7642 = t7638 + t7639 + t7640 + t7641;
  t7602 = 6.4*t7311*t7335;
  t7603 = 6.4*t7311*t7360;
  t7604 = t7602 + t7603;
  t7606 = 3.2*t7311*t7153;
  t7607 = 3.2*t7262*t7335;
  t7610 = 3.2*t7311*t4832;
  t7612 = 3.2*t7262*t7360;
  t7615 = t7606 + t7607 + t7610 + t7612;
  t7617 = 3.2*t7311*t7385;
  t7618 = 3.2*t7311*t7401;
  t7621 = 3.2*t7407*t7360;
  t7626 = 3.2*t7335*t7419;
  t7630 = t7617 + t7618 + t7621 + t7626;
  t7345 = -1.*t3130*t3114;
  t7350 = t7345 + t7349;
  t7312 = -1.*t3130*t7121;
  t7319 = t7312 + t7256;
  t7309 = 6.4*t7153*t7262;
  t7320 = 3.2*t7311*t7319;
  t7343 = 3.2*t7326*t7335;
  t7344 = 6.4*t7262*t4832;
  t7351 = 3.2*t7311*t7350;
  t7361 = 3.2*t7326*t7360;
  t7362 = t7309 + t7320 + t7343 + t7344 + t7351 + t7361;
  t7499 = t7498*t7146;
  t7500 = t7121*t7383;
  t7501 = t7499 + t7391 + t7392 + t7500;
  t7506 = -1.*t3114*t7399;
  t7511 = -1.*t7498*t4598;
  t7512 = -1.*t7389*t4598;
  t7514 = t7504 + t7384 + t7505 + t7506 + t7510 + t7511 + t7512 + t7513;
  t7516 = -1.*t3114*t7498;
  t7517 = -1.*t7146*t7383;
  t7518 = t7516 + t7410 + t7517 + t7418;
  t7521 = t3114*t7498;
  t7522 = t3114*t7389;
  t7525 = t7146*t7399;
  t7528 = t7521 + t7522 + t7523 + t7524 + t7404 + t7525 + t7526 + t7527;
  t7672 = -0.384*var2[6]*t7459;
  t7540 = -1.*t6833*t1802;
  t7541 = 0.24*t7015;
  t7542 = t7540 + t7541;
  t7675 = 3.2*t7253*t4832;
  t7677 = 3.2*t7303*t7459;
  t7684 = Power(t7262,2);
  t7685 = 6.4*t7684;
  t7686 = 6.4*t7153*t4832;
  t7687 = Power(t4832,2);
  t7692 = 6.4*t7687;
  t7716 = 6.4*t7262*t7459;
  t7718 = t7685 + t7686 + t7692 + t7716;
  t7719 = -0.5*var2[1]*t7718;
  t7720 = -0.5*var2[0]*t7463;
  t7725 = 3.2*t7385*t4832;
  t7867 = 3.2*t7407*t7459;
  t7581 = -2.*t3114*t7399;
  t7582 = -2.*t7389*t4598;
  t7583 = t7504 + t7505 + t7581 + t7510 + t7582 + t7513;
  t7590 = 2.*t3114*t7389;
  t7591 = 2.*t7146*t7399;
  t7594 = t7590 + t7523 + t7524 + t7591 + t7526 + t7527;
  t7616 = -0.5*var2[6]*t7615;
  t7386 = 3.2*t7262*t7385;
  t7402 = 3.2*t7262*t7401;
  t7408 = 3.2*t7407*t4832;
  t7430 = 3.2*t7153*t7419;
  t7431 = t7386 + t7402 + t7408 + t7430;
  t7154 = 3.2*t7044*t7153;
  t7283 = 3.2*t7253*t7262;
  t7295 = 3.2*t7294*t7262;
  t7306 = 3.2*t7303*t4832;
  t7307 = t7154 + t7283 + t7295 + t7306;
  t7308 = -0.5*var2[5]*t7307;
  t9852 = t7309 + t7344;
  t7432 = -0.5*var2[2]*t7431;
  t7664 = 3.2*t7326*t7385;
  t7665 = 3.2*t7326*t7401;
  t7666 = 3.2*t7407*t7350;
  t7667 = 3.2*t7319*t7419;
  t7668 = t7664 + t7665 + t7666 + t7667;
  t7502 = 3.2*t7501*t7360;
  t7503 = 3.2*t7401*t7360;
  t7515 = 3.2*t7335*t7514;
  t7519 = 3.2*t7311*t7518;
  t7520 = 3.2*t7311*t7419;
  t7529 = 3.2*t7311*t7528;
  t7531 = t7495 + t7496 + t7502 + t7503 + t7515 + t7519 + t7520 + t7529;
  t7726 = 3.2*t7501*t4832;
  t7727 = 3.2*t7401*t4832;
  t7924 = 3.2*t7153*t7514;
  t7997 = 3.2*t7262*t7518;
  t8211 = 3.2*t7262*t7419;
  t8264 = 3.2*t7262*t7528;
  t8265 = t7725 + t7726 + t7727 + t7867 + t7924 + t7997 + t8211 + t8264;
  t7576 = 6.4*t7401*t7360;
  t7588 = 3.2*t7335*t7583;
  t7589 = 6.4*t7311*t7419;
  t7595 = 3.2*t7311*t7594;
  t7596 = t7495 + t7496 + t7576 + t7588 + t7589 + t7595;
  t8924 = 6.4*t7401*t4832;
  t9209 = 3.2*t7153*t7583;
  t9415 = 6.4*t7262*t7419;
  t9465 = 3.2*t7262*t7594;
  t9594 = t7725 + t8924 + t7867 + t9209 + t9415 + t9465;
  t7637 = -0.5*var2[6]*t7630;
  t9936 = -0.5*var2[6]*t7431;
  t12153 = 3.2*t7044*t7385;
  t12154 = 3.2*t7294*t7407;
  t12155 = 3.2*t7303*t7401;
  t12156 = 3.2*t7253*t7419;
  t12157 = t12153 + t12154 + t12155 + t12156;
  t12099 = 6.4*t7407*t7401;
  t12100 = 6.4*t7385*t7419;
  t12151 = t12099 + t12100;
  t7651 = 3.2*t7253*t7326;
  t7652 = 3.2*t7294*t7326;
  t7653 = 3.2*t7044*t7319;
  t7654 = 3.2*t7303*t7350;
  t7655 = t7651 + t7652 + t7653 + t7654;
  t7673 = 3.2*t7044*t7262;
  t7676 = 3.2*t7294*t4832;
  t7678 = t7673 + t7675 + t7676 + t7677;
  t7446 = 3.2*t7044*t7311;
  t7451 = 3.2*t7294*t7360;
  t7452 = t7446 + t7447 + t7450 + t7451;
  t10363 = 3.2*t7294*t7501;
  t10364 = 3.2*t7253*t7514;
  t10365 = 3.2*t7044*t7518;
  t10366 = 3.2*t7303*t7528;
  t10367 = t10363 + t10364 + t10365 + t10366;
  t8513 = 3.2*t7294*t7153;
  t8621 = 6.4*t7044*t7262;
  t8625 = 3.2*t7542*t7262;
  t8629 = 6.4*t7294*t4832;
  t8922 = t8513 + t8621 + t8625 + t7675 + t8629 + t7677;
  t7539 = 6.4*t7044*t7311;
  t7543 = 3.2*t7542*t7311;
  t7548 = 3.2*t7294*t7335;
  t7572 = 6.4*t7294*t7360;
  t7574 = t7539 + t7543 + t7548 + t7447 + t7450 + t7572;
  t11708 = 3.2*t7294*t7385;
  t11710 = 3.2*t7542*t7407;
  t11711 = 6.4*t7294*t7401;
  t11799 = 3.2*t7253*t7583;
  t11975 = 6.4*t7044*t7419;
  t11976 = 3.2*t7303*t7594;
  t11981 = t11708 + t11710 + t11711 + t11799 + t11975 + t11976;
  t7643 = -0.5*var2[6]*t7642;
  t10149 = -0.5*var2[6]*t7307;
  t12159 = -0.5*var2[6]*t12157;
  t12279 = 6.4*t7044*t7253;
  t12291 = 6.4*t7294*t7303;
  t12292 = t12279 + t12291;
  t12327 = -0.384*var2[0]*t7444;
  t12328 = -0.384*var2[1]*t7459;
  t4833 = -0.384*var2[6]*t4832;
  p_output1[0]=(t4833 + t7308 + t7432 - 0.5*(6.4*t4832*t7311 + 6.4*t7153*t7311 + 6.4*t7262*t7335 + 6.4*t7262*t7360)*var2[0] - 0.5*t7362*var2[1])*var2[6];
  p_output1[1]=(t7445 + t7466 + t7494 - 0.5*t7531*var2[2] - 0.5*t7452*var2[5])*var2[6];
  p_output1[2]=(t7445 + t7466 + t7494 - 0.5*t7596*var2[2] - 0.5*t7574*var2[5])*var2[6];
  p_output1[3]=-0.5*t7604*var2[6];
  p_output1[4]=t7616;
  p_output1[5]=t7637;
  p_output1[6]=t7643;
  p_output1[7]=-0.5*t7604*var2[0] - 0.5*t7615*var2[1] - 0.5*t7630*var2[2] - 0.5*t7642*var2[5] - 0.768*t7360*var2[6];
  p_output1[8]=var2[6]*(-0.5*t7362*var2[0] - 0.5*(6.4*t7262*t7319 + 6.4*t4832*t7326 + 6.4*t7153*t7326 + 6.4*t7262*t7350)*var2[1] - 0.5*t7668*var2[2] - 0.5*t7655*var2[5] - 0.384*t7350*var2[6]);
  p_output1[9]=(t7672 + t7719 + t7720 - 0.5*t8265*var2[2] - 0.5*t7678*var2[5])*var2[6];
  p_output1[10]=(t7672 + t7719 + t7720 - 0.5*t9594*var2[2] - 0.5*t8922*var2[5])*var2[6];
  p_output1[11]=t7616;
  p_output1[12]=-0.5*t9852*var2[6];
  p_output1[13]=t9936;
  p_output1[14]=t10149;
  p_output1[15]=t7308 + t7432 - 0.5*t7615*var2[0] - 0.5*t9852*var2[1] - 0.768*t4832*var2[6];
  p_output1[16]=(-0.5*t7431*var2[0] - 0.5*t7668*var2[1])*var2[6];
  p_output1[17]=var2[6]*(-0.5*t7531*var2[0] - 0.5*t8265*var2[1] - 0.5*(6.4*t7401*t7501 + 6.4*t7385*t7514 + 6.4*t7419*t7518 + 6.4*t7407*t7528)*var2[2] - 0.5*t10367*var2[5] - 0.384*t7528*var2[6]);
  p_output1[18]=var2[6]*(-0.5*t7596*var2[0] - 0.5*t9594*var2[1] - 0.5*(6.4*Power(t7401,2) + 6.4*Power(t7419,2) + 6.4*t7385*t7583 + 6.4*t7407*t7594)*var2[2] - 0.5*t11981*var2[5] - 0.384*t7594*var2[6]);
  p_output1[19]=t7637;
  p_output1[20]=t9936;
  p_output1[21]=-0.5*t12151*var2[6];
  p_output1[22]=t12159;
  p_output1[23]=-0.5*t7630*var2[0] - 0.5*t7431*var2[1] - 0.5*t12151*var2[2] - 0.5*t12157*var2[5] - 0.768*t7401*var2[6];
  p_output1[24]=(-0.5*t7307*var2[0] - 0.5*t7655*var2[1])*var2[6];
  p_output1[25]=(-0.5*t7452*var2[0] - 0.5*t7678*var2[1] - 0.5*t10367*var2[2])*var2[6];
  p_output1[26]=var2[6]*(-0.5*t7574*var2[0] - 0.5*t8922*var2[1] - 0.5*t11981*var2[2] - 0.5*(6.4*Power(t7044,2) + 6.4*t7253*t7294 + 6.4*Power(t7294,2) + 6.4*t7303*t7542)*var2[5] - 0.384*t7542*var2[6]);
  p_output1[27]=t7643;
  p_output1[28]=t10149;
  p_output1[29]=t12159;
  p_output1[30]=-0.5*t12292*var2[6];
  p_output1[31]=-0.5*t7642*var2[0] - 0.5*t7307*var2[1] - 0.5*t12157*var2[2] - 0.5*t12292*var2[5] - 0.768*t7294*var2[6];
  p_output1[32]=(-0.384*t4832*var2[0] - 0.384*t7350*var2[1])*var2[6];
  p_output1[33]=(t12327 + t12328 - 0.384*t7528*var2[2])*var2[6];
  p_output1[34]=(t12327 + t12328 - 0.384*t7594*var2[2] - 0.384*t7542*var2[5])*var2[6];
  p_output1[35]=-0.384*t7360*var2[6];
  p_output1[36]=t4833;
  p_output1[37]=-0.384*t7401*var2[6];
  p_output1[38]=-0.384*t7294*var2[6];
  p_output1[39]=-0.384*t7360*var2[0] - 0.384*t4832*var2[1] - 0.384*t7401*var2[2] - 0.384*t7294*var2[5];
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

#include "J_Ce2_vec7_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
