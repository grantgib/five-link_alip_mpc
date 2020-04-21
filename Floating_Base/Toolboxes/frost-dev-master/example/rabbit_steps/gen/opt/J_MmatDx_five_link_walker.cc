/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:52:40 GMT-04:00
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
  double t2595;
  double t578;
  double t762;
  double t3603;
  double t4309;
  double t502;
  double t4314;
  double t4318;
  double t4319;
  double t4417;
  double t4426;
  double t4459;
  double t4460;
  double t4463;
  double t1433;
  double t3795;
  double t4252;
  double t4296;
  double t4332;
  double t4340;
  double t5269;
  double t5185;
  double t5186;
  double t5337;
  double t5484;
  double t5485;
  double t5490;
  double t5706;
  double t5732;
  double t5754;
  double t5756;
  double t5772;
  double t5199;
  double t5370;
  double t5378;
  double t5435;
  double t5521;
  double t5667;
  double t4345;
  double t4350;
  double t4359;
  double t6410;
  double t6434;
  double t6546;
  double t4758;
  double t4558;
  double t4567;
  double t4580;
  double t4670;
  double t4790;
  double t5692;
  double t5694;
  double t5698;
  double t6670;
  double t6677;
  double t6680;
  double t6155;
  double t5864;
  double t5916;
  double t5925;
  double t6127;
  double t6255;
  double t6558;
  double t6598;
  double t6600;
  double t6604;
  double t6619;
  double t6647;
  double t6650;
  double t6659;
  double t6710;
  double t6729;
  double t6792;
  double t6863;
  double t6867;
  double t6905;
  double t6926;
  double t6957;
  double t7537;
  double t7543;
  double t7551;
  double t7589;
  double t7596;
  double t7597;
  double t7658;
  double t7662;
  double t7663;
  double t7677;
  double t7689;
  double t7704;
  double t4404;
  double t4510;
  double t4523;
  double t4554;
  double t4879;
  double t4986;
  double t5010;
  double t5057;
  double t7760;
  double t7764;
  double t7773;
  double t7796;
  double t7797;
  double t6553;
  double t6602;
  double t7039;
  double t7045;
  double t7046;
  double t7047;
  double t7051;
  double t7059;
  double t7064;
  double t7067;
  double t7068;
  double t7071;
  double t7501;
  double t7513;
  double t7515;
  double t7530;
  double t7534;
  double t7536;
  double t7566;
  double t7599;
  double t7601;
  double t7631;
  double t7634;
  double t7636;
  double t7963;
  double t7966;
  double t7973;
  double t7824;
  double t7832;
  double t7833;
  double t7850;
  double t7852;
  double t7899;
  double t7906;
  double t7912;
  double t7919;
  double t7926;
  double t7947;
  double t7962;
  double t8016;
  double t8017;
  double t8024;
  double t8179;
  double t8189;
  double t8031;
  double t8193;
  double t8194;
  double t8037;
  double t5705;
  double t5775;
  double t5786;
  double t5860;
  double t6322;
  double t6332;
  double t6353;
  double t6365;
  double t8232;
  double t8235;
  double t8242;
  double t8243;
  double t8258;
  double t6693;
  double t6793;
  double t7239;
  double t7255;
  double t7263;
  double t7271;
  double t7276;
  double t7287;
  double t7289;
  double t7314;
  double t7326;
  double t7328;
  double t7639;
  double t7644;
  double t7652;
  double t7653;
  double t7654;
  double t7655;
  double t7670;
  double t7710;
  double t7712;
  double t7730;
  double t7736;
  double t7740;
  double t8329;
  double t8337;
  double t8340;
  double t8259;
  double t8263;
  double t8264;
  double t8282;
  double t8290;
  double t8295;
  double t8300;
  double t8301;
  double t8311;
  double t8312;
  double t8317;
  double t8328;
  double t8342;
  double t8350;
  double t8361;
  double t8460;
  double t8461;
  double t8367;
  double t8494;
  double t8495;
  double t8374;
  double t7074;
  double t7077;
  double t7193;
  double t7207;
  double t7341;
  double t7374;
  double t7396;
  double t7417;
  double t7115;
  double t7133;
  double t7146;
  double t7154;
  double t7190;
  double t7235;
  double t7376;
  double t7377;
  double t7380;
  double t7385;
  double t7394;
  double t7432;
  double t7442;
  double t8624;
  double t8652;
  double t7948;
  double t8667;
  double t7980;
  double t8021;
  double t8022;
  double t8026;
  double t8033;
  double t8044;
  double t8680;
  double t8123;
  double t8124;
  double t8125;
  double t8681;
  double t8108;
  double t8114;
  double t8120;
  double t8683;
  double t8690;
  double t8692;
  double t8174;
  double t8698;
  double t8192;
  double t8200;
  double t8204;
  double t8702;
  double t8212;
  double t8214;
  double t8217;
  double t8639;
  double t8658;
  double t8320;
  double t8670;
  double t8341;
  double t8352;
  double t8353;
  double t8365;
  double t8369;
  double t8380;
  double t8725;
  double t8441;
  double t8443;
  double t8445;
  double t8726;
  double t8428;
  double t8429;
  double t8430;
  double t8727;
  double t8747;
  double t8748;
  double t8458;
  double t8757;
  double t8462;
  double t8496;
  double t8497;
  double t8761;
  double t8501;
  double t8502;
  double t8503;
  double t8551;
  double t8552;
  double t8554;
  double t8555;
  double t8556;
  double t8558;
  double t8576;
  double t8580;
  double t8586;
  double t8517;
  double t8518;
  double t8520;
  double t8522;
  double t7448;
  double t7605;
  double t7638;
  double t7724;
  double t7744;
  double t7751;
  double t4839;
  double t5142;
  double t5160;
  double t6288;
  double t6383;
  double t6398;
  double t8666;
  double t8668;
  double t8669;
  double t8671;
  double t8673;
  double t8674;
  double t8701;
  double t8704;
  double t8705;
  double t8023;
  double t8057;
  double t8073;
  double t8715;
  double t8717;
  double t8718;
  double t8205;
  double t8220;
  double t8221;
  double t8758;
  double t8762;
  double t8763;
  double t8357;
  double t8401;
  double t8414;
  double t8775;
  double t8776;
  double t8777;
  double t8499;
  double t8504;
  double t8506;
  double t8590;
  double t8592;
  double t8594;
  double t8599;
  double t8601;
  double t8603;
  double t8605;
  double t8606;
  double t8626;
  double t8627;
  double t8631;
  double t8686;
  double t7838;
  double t8787;
  double t8788;
  double t8789;
  double t8708;
  double t8709;
  double t8710;
  double t8122;
  double t8126;
  double t8127;
  double t8810;
  double t8811;
  double t8812;
  double t8817;
  double t8818;
  double t8608;
  double t8609;
  double t8610;
  double t8611;
  double t8887;
  double t8888;
  double t8889;
  double t8890;
  double t8934;
  double t8935;
  double t8612;
  double t8781;
  double t8891;
  double t8892;
  double t8927;
  double t8928;
  double t8641;
  double t8642;
  double t8648;
  double t8735;
  double t8265;
  double t8833;
  double t8834;
  double t8836;
  double t8768;
  double t8769;
  double t8770;
  double t8439;
  double t8452;
  double t8453;
  double t8846;
  double t8847;
  double t8848;
  double t8849;
  double t8850;
  double t8614;
  double t8616;
  double t8618;
  double t8619;
  double t8893;
  double t8894;
  double t8895;
  double t8896;
  double t8973;
  double t8974;
  double t8622;
  double t8782;
  double t8897;
  double t8898;
  double t8967;
  double t8968;
  t2595 = Cos(var1[3]);
  t578 = Cos(var1[4]);
  t762 = Sin(var1[3]);
  t3603 = Sin(var1[4]);
  t4309 = Sin(var1[2]);
  t502 = Cos(var1[2]);
  t4314 = t2595*t578;
  t4318 = -1.*t762*t3603;
  t4319 = t4314 + t4318;
  t4417 = -1.*t578;
  t4426 = 1. + t4417;
  t4459 = 0.4*t4426;
  t4460 = 0.64*t578;
  t4463 = t4459 + t4460;
  t1433 = -1.*t578*t762;
  t3795 = -1.*t2595*t3603;
  t4252 = t1433 + t3795;
  t4296 = t502*t4252;
  t4332 = -1.*t4309*t4319;
  t4340 = t4296 + t4332;
  t5269 = Cos(var1[5]);
  t5185 = Cos(var1[6]);
  t5186 = Sin(var1[5]);
  t5337 = Sin(var1[6]);
  t5484 = t5269*t5185;
  t5485 = -1.*t5186*t5337;
  t5490 = t5484 + t5485;
  t5706 = -1.*t5185;
  t5732 = 1. + t5706;
  t5754 = 0.4*t5732;
  t5756 = 0.64*t5185;
  t5772 = t5754 + t5756;
  t5199 = -1.*t5185*t5186;
  t5370 = -1.*t5269*t5337;
  t5378 = t5199 + t5370;
  t5435 = t502*t5378;
  t5521 = -1.*t4309*t5490;
  t5667 = t5435 + t5521;
  t4345 = -1.*t2595*t4309;
  t4350 = -1.*t502*t762;
  t4359 = t4345 + t4350;
  t6410 = t502*t2595;
  t6434 = -1.*t4309*t762;
  t6546 = t6410 + t6434;
  t4758 = t502*t4319;
  t4558 = t578*t762;
  t4567 = t2595*t3603;
  t4580 = t4558 + t4567;
  t4670 = -1.*t4309*t4580;
  t4790 = t4670 + t4758;
  t5692 = -1.*t5269*t4309;
  t5694 = -1.*t502*t5186;
  t5698 = t5692 + t5694;
  t6670 = t502*t5269;
  t6677 = -1.*t4309*t5186;
  t6680 = t6670 + t6677;
  t6155 = t502*t5490;
  t5864 = t5185*t5186;
  t5916 = t5269*t5337;
  t5925 = t5864 + t5916;
  t6127 = -1.*t4309*t5925;
  t6255 = t6127 + t6155;
  t6558 = t2595*t4309;
  t6598 = t502*t762;
  t6600 = t6558 + t6598;
  t6604 = t4309*t4252;
  t6619 = t6604 + t4758;
  t6647 = t502*t4580;
  t6650 = t4309*t4319;
  t6659 = t6647 + t6650;
  t6710 = t5269*t4309;
  t6729 = t502*t5186;
  t6792 = t6710 + t6729;
  t6863 = t4309*t5378;
  t6867 = t6863 + t6155;
  t6905 = t502*t5925;
  t6926 = t4309*t5490;
  t6957 = t6905 + t6926;
  t7537 = t4463*t762;
  t7543 = 0.24*t2595*t3603;
  t7551 = t7537 + t7543;
  t7589 = t2595*t4463;
  t7596 = -0.24*t762*t3603;
  t7597 = t7589 + t7596;
  t7658 = t5772*t5186;
  t7662 = 0.24*t5269*t5337;
  t7663 = t7658 + t7662;
  t7677 = t5269*t5772;
  t7689 = -0.24*t5186*t5337;
  t7704 = t7677 + t7689;
  t4404 = -0.748*t4359;
  t4510 = t4463*t3603;
  t4523 = -0.24*t578*t3603;
  t4554 = t4510 + t4523;
  t4879 = t4463*t578;
  t4986 = Power(t3603,2);
  t5010 = 0.24*t4986;
  t5057 = t4879 + t5010;
  t7760 = -1.*t2595*t578;
  t7764 = t762*t3603;
  t7773 = t7760 + t7764;
  t7796 = t4309*t7773;
  t7797 = t4296 + t7796;
  t6553 = -13.6*t4359*t6546;
  t6602 = -13.6*t6600*t6546;
  t7039 = Power(t4359,2);
  t7045 = -6.8*t7039;
  t7046 = -6.8*t4359*t6600;
  t7047 = Power(t6546,2);
  t7051 = -6.8*t7047;
  t7059 = -1.*t502*t2595;
  t7064 = t4309*t762;
  t7067 = t7059 + t7064;
  t7068 = -6.8*t6546*t7067;
  t7071 = -1.*t4309*t4252;
  t7501 = Power(t2595,2);
  t7513 = 0.11*t7501;
  t7515 = Power(t762,2);
  t7530 = 0.11*t7515;
  t7534 = t7513 + t7530;
  t7536 = -6.8*t4359*t7534;
  t7566 = -1.*t7551*t4319;
  t7599 = -1.*t4252*t7597;
  t7601 = t7566 + t7599;
  t7631 = t7551*t4580;
  t7634 = t4319*t7597;
  t7636 = t7631 + t7634;
  t7963 = -1.*t4463*t762;
  t7966 = -0.24*t2595*t3603;
  t7973 = t7963 + t7966;
  t7824 = -0.768*var2[4]*t7797;
  t7832 = -3.2*t4554*t6619;
  t7833 = -3.2*t5057*t7797;
  t7850 = -6.4*t6619*t6659;
  t7852 = -6.4*t6619*t7797;
  t7899 = -3.2*t6619*t4790;
  t7906 = -3.2*t4340*t6659;
  t7912 = t502*t7773;
  t7919 = t7071 + t7912;
  t7926 = -3.2*t6619*t7919;
  t7947 = -3.2*t4340*t7797;
  t7962 = -3.2*t6619*t7601;
  t8016 = t7551*t4319;
  t8017 = t4252*t7597;
  t8024 = -3.2*t7636*t7797;
  t8179 = -0.24*t578*t762;
  t8189 = t8179 + t7966;
  t8031 = -1.*t4252*t7551;
  t8193 = 0.24*t2595*t578;
  t8194 = t8193 + t7596;
  t8037 = -1.*t7597*t7773;
  t5705 = -0.748*t5698;
  t5775 = t5772*t5337;
  t5786 = -0.24*t5185*t5337;
  t5860 = t5775 + t5786;
  t6322 = t5772*t5185;
  t6332 = Power(t5337,2);
  t6353 = 0.24*t6332;
  t6365 = t6322 + t6353;
  t8232 = -1.*t5269*t5185;
  t8235 = t5186*t5337;
  t8242 = t8232 + t8235;
  t8243 = t4309*t8242;
  t8258 = t5435 + t8243;
  t6693 = -13.6*t5698*t6680;
  t6793 = -13.6*t6792*t6680;
  t7239 = Power(t5698,2);
  t7255 = -6.8*t7239;
  t7263 = -6.8*t5698*t6792;
  t7271 = Power(t6680,2);
  t7276 = -6.8*t7271;
  t7287 = -1.*t502*t5269;
  t7289 = t4309*t5186;
  t7314 = t7287 + t7289;
  t7326 = -6.8*t6680*t7314;
  t7328 = -1.*t4309*t5378;
  t7639 = Power(t5269,2);
  t7644 = 0.11*t7639;
  t7652 = Power(t5186,2);
  t7653 = 0.11*t7652;
  t7654 = t7644 + t7653;
  t7655 = -6.8*t5698*t7654;
  t7670 = -1.*t7663*t5490;
  t7710 = -1.*t5378*t7704;
  t7712 = t7670 + t7710;
  t7730 = t7663*t5925;
  t7736 = t5490*t7704;
  t7740 = t7730 + t7736;
  t8329 = -1.*t5772*t5186;
  t8337 = -0.24*t5269*t5337;
  t8340 = t8329 + t8337;
  t8259 = -0.768*var2[6]*t8258;
  t8263 = -3.2*t5860*t6867;
  t8264 = -3.2*t6365*t8258;
  t8282 = -6.4*t6867*t6957;
  t8290 = -6.4*t6867*t8258;
  t8295 = -3.2*t6867*t6255;
  t8300 = -3.2*t5667*t6957;
  t8301 = t502*t8242;
  t8311 = t7328 + t8301;
  t8312 = -3.2*t6867*t8311;
  t8317 = -3.2*t5667*t8258;
  t8328 = -3.2*t6867*t7712;
  t8342 = t7663*t5490;
  t8350 = t5378*t7704;
  t8361 = -3.2*t7740*t8258;
  t8460 = -0.24*t5185*t5186;
  t8461 = t8460 + t8337;
  t8367 = -1.*t5378*t7663;
  t8494 = 0.24*t5269*t5185;
  t8495 = t8494 + t7689;
  t8374 = -1.*t7704*t8242;
  t7074 = -1.*t502*t4319;
  t7077 = t7071 + t7074;
  t7193 = -1.*t502*t4580;
  t7207 = t7193 + t4332;
  t7341 = -1.*t502*t5490;
  t7374 = t7328 + t7341;
  t7396 = -1.*t502*t5925;
  t7417 = t7396 + t5521;
  t7115 = -3.2*t7077*t6619;
  t7133 = Power(t4790,2);
  t7146 = -3.2*t7133;
  t7154 = Power(t4340,2);
  t7190 = -3.2*t7154;
  t7235 = -3.2*t7207*t6659;
  t7376 = -3.2*t7374*t6867;
  t7377 = Power(t6255,2);
  t7380 = -3.2*t7377;
  t7385 = Power(t5667,2);
  t7394 = -3.2*t7385;
  t7432 = -3.2*t7417*t6957;
  t7442 = t7045 + t7046 + t7051 + t7068 + t7115 + t7146 + t7190 + t7235 + t7255 + t7263 + t7276 + t7326 + t7376 + t7380 + t7394 + t7432;
  t8624 = -0.748*t7067;
  t8652 = -13.6*t4359*t7067;
  t7948 = t7045 + t7046 + t7051 + t7068 + t7899 + t7906 + t7926 + t7947;
  t8667 = -6.8*t7067*t7534;
  t7980 = t7973*t4319;
  t8021 = t4580*t7597;
  t8022 = t7980 + t8016 + t8017 + t8021;
  t8026 = -1.*t4252*t7973;
  t8033 = -1.*t4319*t7597;
  t8044 = t8026 + t8031 + t8033 + t8037;
  t8680 = -0.768*var2[4]*t7919;
  t8123 = Power(t578,2);
  t8124 = -0.24*t8123;
  t8125 = t4879 + t8124;
  t8681 = -3.2*t4554*t4340;
  t8108 = -1.*t4463*t3603;
  t8114 = 0.24*t578*t3603;
  t8120 = t8108 + t8114;
  t8683 = -3.2*t5057*t7919;
  t8690 = -6.4*t4790*t4340;
  t8692 = -6.4*t4340*t7919;
  t8174 = t7899 + t7906 + t7926 + t7947;
  t8698 = -3.2*t4340*t7601;
  t8192 = t8189*t4319;
  t8200 = t4580*t8194;
  t8204 = t8192 + t8016 + t8017 + t8200;
  t8702 = -3.2*t7636*t7919;
  t8212 = -1.*t4252*t8189;
  t8214 = -1.*t4319*t8194;
  t8217 = t8212 + t8031 + t8214 + t8037;
  t8639 = -0.748*t7314;
  t8658 = -13.6*t5698*t7314;
  t8320 = t7255 + t7263 + t7276 + t7326 + t8295 + t8300 + t8312 + t8317;
  t8670 = -6.8*t7314*t7654;
  t8341 = t8340*t5490;
  t8352 = t5925*t7704;
  t8353 = t8341 + t8342 + t8350 + t8352;
  t8365 = -1.*t5378*t8340;
  t8369 = -1.*t5490*t7704;
  t8380 = t8365 + t8367 + t8369 + t8374;
  t8725 = -0.768*var2[6]*t8311;
  t8441 = Power(t5185,2);
  t8443 = -0.24*t8441;
  t8445 = t6322 + t8443;
  t8726 = -3.2*t5860*t5667;
  t8428 = -1.*t5772*t5337;
  t8429 = 0.24*t5185*t5337;
  t8430 = t8428 + t8429;
  t8727 = -3.2*t6365*t8311;
  t8747 = -6.4*t6255*t5667;
  t8748 = -6.4*t5667*t8311;
  t8458 = t8295 + t8300 + t8312 + t8317;
  t8757 = -3.2*t5667*t7712;
  t8462 = t8461*t5490;
  t8496 = t5925*t8495;
  t8497 = t8462 + t8342 + t8350 + t8496;
  t8761 = -3.2*t7740*t8311;
  t8501 = -1.*t5378*t8461;
  t8502 = -1.*t5490*t8495;
  t8503 = t8501 + t8367 + t8502 + t8374;
  t8551 = -6.8*t4359*t6546;
  t8552 = -6.8*t6600*t6546;
  t8554 = -3.2*t6619*t4340;
  t8555 = -3.2*t4790*t6659;
  t8556 = -6.8*t5698*t6680;
  t8558 = -6.8*t6792*t6680;
  t8576 = -3.2*t6867*t5667;
  t8580 = -3.2*t6255*t6957;
  t8586 = t8551 + t8552 + t8554 + t8555 + t8556 + t8558 + t8576 + t8580;
  t8517 = Power(t502,2);
  t8518 = -12.*t8517;
  t8520 = Power(t4309,2);
  t8522 = -12.*t8520;
  t7448 = 2.88*t4309;
  t7605 = -3.2*t4790*t7601;
  t7638 = -3.2*t4340*t7636;
  t7724 = -3.2*t6255*t7712;
  t7744 = -3.2*t5667*t7740;
  t7751 = t7448 + t7536 + t7605 + t7638 + t7655 + t7724 + t7744;
  t4839 = -3.2*t4554*t4790;
  t5142 = -3.2*t5057*t4340;
  t5160 = t4404 + t4839 + t5142;
  t6288 = -3.2*t5860*t6255;
  t6383 = -3.2*t6365*t5667;
  t6398 = t5705 + t6288 + t6383;
  t8666 = 2.88*t502;
  t8668 = -3.2*t7207*t7601;
  t8669 = -3.2*t7077*t7636;
  t8671 = -3.2*t7417*t7712;
  t8673 = -3.2*t7374*t7740;
  t8674 = t8666 + t8667 + t8668 + t8669 + t8670 + t8671 + t8673;
  t8701 = -3.2*t4340*t8022;
  t8704 = -3.2*t4790*t8044;
  t8705 = t8667 + t8698 + t8701 + t8702 + t8704;
  t8023 = -3.2*t6619*t8022;
  t8057 = -3.2*t6659*t8044;
  t8073 = t7536 + t7962 + t8023 + t8024 + t8057;
  t8715 = -3.2*t4340*t8204;
  t8717 = -3.2*t4790*t8217;
  t8718 = t8698 + t8715 + t8702 + t8717;
  t8205 = -3.2*t6619*t8204;
  t8220 = -3.2*t6659*t8217;
  t8221 = t7962 + t8205 + t8024 + t8220;
  t8758 = -3.2*t5667*t8353;
  t8762 = -3.2*t6255*t8380;
  t8763 = t8670 + t8757 + t8758 + t8761 + t8762;
  t8357 = -3.2*t6867*t8353;
  t8401 = -3.2*t6957*t8380;
  t8414 = t7655 + t8328 + t8357 + t8361 + t8401;
  t8775 = -3.2*t5667*t8497;
  t8776 = -3.2*t6255*t8503;
  t8777 = t8757 + t8775 + t8761 + t8776;
  t8499 = -3.2*t6867*t8497;
  t8504 = -3.2*t6957*t8503;
  t8506 = t8328 + t8499 + t8361 + t8504;
  t8590 = -2.88*t502;
  t8592 = -6.8*t6546*t7534;
  t8594 = -3.2*t6659*t7601;
  t8599 = -3.2*t6619*t7636;
  t8601 = -6.8*t6680*t7654;
  t8603 = -3.2*t6957*t7712;
  t8605 = -3.2*t6867*t7740;
  t8606 = t8590 + t8592 + t8594 + t8599 + t8601 + t8603 + t8605;
  t8626 = -3.2*t5057*t7077;
  t8627 = -3.2*t4554*t7207;
  t8631 = t8624 + t8626 + t8627;
  t8686 = t8624 + t8681 + t8683;
  t7838 = t4404 + t7832 + t7833;
  t8787 = -3.2*t5057*t8022;
  t8788 = -3.2*t4554*t8044;
  t8789 = t8787 + t8788;
  t8708 = -3.2*t8125*t4790;
  t8709 = -3.2*t8120*t4340;
  t8710 = t8708 + t8681 + t8709 + t8683;
  t8122 = -3.2*t8120*t6619;
  t8126 = -3.2*t8125*t6659;
  t8127 = t7832 + t8122 + t8126 + t7833;
  t8810 = -3.2*t8125*t7601;
  t8811 = -3.2*t8120*t7636;
  t8812 = -3.2*t5057*t8204;
  t8817 = -3.2*t4554*t8217;
  t8818 = t8810 + t8811 + t8812 + t8817;
  t8608 = -0.748*t6546;
  t8609 = -3.2*t5057*t6619;
  t8610 = -3.2*t4554*t6659;
  t8611 = t8608 + t8609 + t8610;
  t8887 = -0.748*t7534;
  t8888 = -3.2*t4554*t7601;
  t8889 = -3.2*t5057*t7636;
  t8890 = -0.67 + t8887 + t8888 + t8889;
  t8934 = -0.768*var2[1]*t7919;
  t8935 = -0.768*var2[0]*t7797;
  t8612 = -0.768*t6619;
  t8781 = -0.768*t4340;
  t8891 = -0.768*t7636;
  t8892 = -0.2 + t8891;
  t8927 = -0.768*t5057;
  t8928 = -0.2 + t8927;
  t8641 = -3.2*t6365*t7374;
  t8642 = -3.2*t5860*t7417;
  t8648 = t8639 + t8641 + t8642;
  t8735 = t8639 + t8726 + t8727;
  t8265 = t5705 + t8263 + t8264;
  t8833 = -3.2*t6365*t8353;
  t8834 = -3.2*t5860*t8380;
  t8836 = t8833 + t8834;
  t8768 = -3.2*t8445*t6255;
  t8769 = -3.2*t8430*t5667;
  t8770 = t8768 + t8726 + t8769 + t8727;
  t8439 = -3.2*t8430*t6867;
  t8452 = -3.2*t8445*t6957;
  t8453 = t8263 + t8439 + t8452 + t8264;
  t8846 = -3.2*t8445*t7712;
  t8847 = -3.2*t8430*t7740;
  t8848 = -3.2*t6365*t8497;
  t8849 = -3.2*t5860*t8503;
  t8850 = t8846 + t8847 + t8848 + t8849;
  t8614 = -0.748*t6680;
  t8616 = -3.2*t6365*t6867;
  t8618 = -3.2*t5860*t6957;
  t8619 = t8614 + t8616 + t8618;
  t8893 = -0.748*t7654;
  t8894 = -3.2*t5860*t7712;
  t8895 = -3.2*t6365*t7740;
  t8896 = -0.67 + t8893 + t8894 + t8895;
  t8973 = -0.768*var2[1]*t8311;
  t8974 = -0.768*var2[0]*t8258;
  t8622 = -0.768*t6867;
  t8782 = -0.768*t5667;
  t8897 = -0.768*t7740;
  t8898 = -0.2 + t8897;
  t8967 = -0.768*t6365;
  t8968 = -0.2 + t8967;
  p_output1[0]=(t6553 + t6602 - 6.4*t4340*t6619 - 6.4*t4790*t6659 + t6693 + t6793 - 6.4*t5667*t6867 - 6.4*t6255*t6957)*var2[0] + t7442*var2[1] + t7751*var2[2] + t5160*var2[3] - 0.768*t4340*var2[4] + t6398*var2[5] - 0.768*t5667*var2[6];
  p_output1[1]=t7824 + (t6553 + t6602 + t7850 + t7852)*var2[0] + t7948*var2[1] + t8073*var2[2] + t7838*var2[3];
  p_output1[2]=t7824 + (t7850 + t7852)*var2[0] + t8174*var2[1] + t8221*var2[2] + t8127*var2[3];
  p_output1[3]=t8259 + (t6693 + t6793 + t8282 + t8290)*var2[0] + t8320*var2[1] + t8414*var2[2] + t8265*var2[5];
  p_output1[4]=t8259 + (t8282 + t8290)*var2[0] + t8458*var2[1] + t8506*var2[2] + t8453*var2[5];
  p_output1[5]=-6.8*Power(t6600,2) - 3.2*Power(t6619,2) - 3.2*Power(t6659,2) - 6.8*Power(t6792,2) - 3.2*Power(t6867,2) - 3.2*Power(t6957,2) + t7051 + t7276 + t8518 + t8522;
  p_output1[6]=t8586;
  p_output1[7]=t8606;
  p_output1[8]=t8611;
  p_output1[9]=t8612;
  p_output1[10]=t8619;
  p_output1[11]=t8622;
  p_output1[12]=t7442*var2[0] + (t6553 + t6693 - 6.4*t4340*t7077 - 6.4*t4790*t7207 - 6.4*t5667*t7374 - 6.4*t6255*t7417 + t8652 + t8658)*var2[1] + t8674*var2[2] + t8631*var2[3] - 0.768*t7077*var2[4] + t8648*var2[5] - 0.768*t7374*var2[6];
  p_output1[13]=t8680 + t7948*var2[0] + (t6553 + t8652 + t8690 + t8692)*var2[1] + t8705*var2[2] + t8686*var2[3];
  p_output1[14]=t8680 + t8174*var2[0] + (t8690 + t8692)*var2[1] + t8718*var2[2] + t8710*var2[3];
  p_output1[15]=t8725 + t8320*var2[0] + (t6693 + t8658 + t8747 + t8748)*var2[1] + t8763*var2[2] + t8735*var2[5];
  p_output1[16]=t8725 + t8458*var2[0] + (t8747 + t8748)*var2[1] + t8777*var2[2] + t8770*var2[5];
  p_output1[17]=t8586;
  p_output1[18]=t7045 + t7051 + t7146 + t7190 + t7255 + t7276 + t7380 + t7394 + t8518 + t8522;
  p_output1[19]=t7751;
  p_output1[20]=t5160;
  p_output1[21]=t8781;
  p_output1[22]=t6398;
  p_output1[23]=t8782;
  p_output1[24]=t7751*var2[0] + t8674*var2[1];
  p_output1[25]=t8073*var2[0] + t8705*var2[1] + (-6.4*t7636*t8022 - 6.4*t7601*t8044)*var2[2] + t8789*var2[3] - 0.768*t8022*var2[4];
  p_output1[26]=t8221*var2[0] + t8718*var2[1] + (-6.4*t7636*t8204 - 6.4*t7601*t8217)*var2[2] + t8818*var2[3] - 0.768*t8204*var2[4];
  p_output1[27]=t8414*var2[0] + t8763*var2[1] + (-6.4*t7740*t8353 - 6.4*t7712*t8380)*var2[2] + t8836*var2[5] - 0.768*t8353*var2[6];
  p_output1[28]=t8506*var2[0] + t8777*var2[1] + (-6.4*t7740*t8497 - 6.4*t7712*t8503)*var2[2] + t8850*var2[5] - 0.768*t8497*var2[6];
  p_output1[29]=t8606;
  p_output1[30]=t7751;
  p_output1[31]=-3.3612 - 6.8*Power(t7534,2) - 3.2*Power(t7601,2) - 3.2*Power(t7636,2) - 6.8*Power(t7654,2) - 3.2*Power(t7712,2) - 3.2*Power(t7740,2);
  p_output1[32]=t8890;
  p_output1[33]=t8892;
  p_output1[34]=t8896;
  p_output1[35]=t8898;
  p_output1[36]=t5160*var2[0] + t8631*var2[1];
  p_output1[37]=t7838*var2[0] + t8686*var2[1] + t8789*var2[2];
  p_output1[38]=t8127*var2[0] + t8710*var2[1] + t8818*var2[2] + (-6.4*t5057*t8120 - 6.4*t4554*t8125)*var2[3] - 0.768*t8120*var2[4];
  p_output1[39]=t8611;
  p_output1[40]=t5160;
  p_output1[41]=t8890;
  p_output1[42]=-1.58228 - 3.2*Power(t4554,2) - 3.2*Power(t5057,2);
  p_output1[43]=t8928;
  p_output1[44]=-0.768*t4340*var2[0] - 0.768*t7077*var2[1];
  p_output1[45]=t8934 + t8935 - 0.768*t8022*var2[2];
  p_output1[46]=t8934 + t8935 - 0.768*t8204*var2[2] - 0.768*t8120*var2[3];
  p_output1[47]=t8612;
  p_output1[48]=t8781;
  p_output1[49]=t8892;
  p_output1[50]=t8928;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t6398*var2[0] + t8648*var2[1];
  p_output1[53]=t8265*var2[0] + t8735*var2[1] + t8836*var2[2];
  p_output1[54]=t8453*var2[0] + t8770*var2[1] + t8850*var2[2] + (-6.4*t6365*t8430 - 6.4*t5860*t8445)*var2[5] - 0.768*t8430*var2[6];
  p_output1[55]=t8619;
  p_output1[56]=t6398;
  p_output1[57]=t8896;
  p_output1[58]=-1.58228 - 3.2*Power(t5860,2) - 3.2*Power(t6365,2);
  p_output1[59]=t8968;
  p_output1[60]=-0.768*t5667*var2[0] - 0.768*t7374*var2[1];
  p_output1[61]=t8973 + t8974 - 0.768*t8353*var2[2];
  p_output1[62]=t8973 + t8974 - 0.768*t8497*var2[2] - 0.768*t8430*var2[5];
  p_output1[63]=t8622;
  p_output1[64]=t8782;
  p_output1[65]=t8898;
  p_output1[66]=t8968;
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
