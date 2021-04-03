/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:08 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t47;
  double t154;
  double t157;
  double t179;
  double t180;
  double t256;
  double t318;
  double t379;
  double t391;
  double t392;
  double t406;
  double t534;
  double t539;
  double t635;
  double t644;
  double t664;
  double t884;
  double t912;
  double t919;
  double t924;
  double t928;
  double t930;
  double t939;
  double t945;
  double t967;
  double t968;
  double t973;
  double t993;
  double t1376;
  double t1291;
  double t1292;
  double t1377;
  double t1288;
  double t1295;
  double t1379;
  double t1380;
  double t1382;
  double t1383;
  double t1386;
  double t1388;
  double t1390;
  double t1391;
  double t1392;
  double t1423;
  double t1429;
  double t1437;
  double t1422;
  double t1494;
  double t1495;
  double t1496;
  double t1441;
  double t1506;
  double t1507;
  double t1505;
  double t1509;
  double t1514;
  double t1515;
  double t1517;
  double t1536;
  double t1537;
  double t1585;
  double t1590;
  double t1603;
  double t1606;
  double t1689;
  double t1690;
  double t1691;
  double t1694;
  double t1797;
  double t1683;
  double t1693;
  double t1828;
  double t1829;
  double t1884;
  double t1933;
  double t1989;
  double t1990;
  double t1998;
  double t2038;
  double t2076;
  double t2170;
  double t2411;
  double t2439;
  double t2259;
  double t2426;
  double t2448;
  double t2465;
  double t2622;
  double t2645;
  double t2646;
  double t2648;
  double t2673;
  double t2869;
  double t2881;
  double t2888;
  double t2725;
  double t2896;
  double t2949;
  double t3199;
  double t3340;
  double t3343;
  double t2656;
  double t1008;
  double t1043;
  double t3595;
  double t3598;
  double t3599;
  double t3438;
  double t3458;
  double t4702;
  double t4771;
  double t4785;
  double t4599;
  double t4689;
  double t4791;
  double t4919;
  double t4924;
  double t4925;
  double t4934;
  double t4957;
  double t5182;
  double t1595;
  double t1601;
  double t1609;
  double t1615;
  double t1616;
  double t1617;
  double t1618;
  double t1638;
  double t1654;
  double t3434;
  double t3468;
  double t3473;
  double t3483;
  double t3484;
  double t3487;
  double t3492;
  double t3512;
  double t1681;
  double t2174;
  double t4556;
  double t5468;
  double t1381;
  double t1389;
  double t1402;
  double t1403;
  double t1404;
  double t1405;
  double t1407;
  double t1413;
  double t1414;
  double t1660;
  double t1667;
  double t1674;
  double t2491;
  double t2652;
  double t2658;
  double t2663;
  double t2667;
  double t2669;
  double t3523;
  double t5551;
  double t5553;
  double t5554;
  double t5555;
  double t1439;
  double t3646;
  double t3653;
  double t6388;
  double t6398;
  double t6507;
  double t6518;
  double t6553;
  double t3796;
  double t2671;
  double t6615;
  double t6617;
  double t3671;
  double t3762;
  double t3798;
  double t3801;
  double t3819;
  double t6695;
  double t5557;
  double t6356;
  double t6358;
  double t6365;
  double t6705;
  double t6715;
  double t6717;
  double t6816;
  double t6831;
  double t6839;
  double t6845;
  double t6853;
  double t6872;
  double t6906;
  double t6922;
  double t6924;
  double t7118;
  double t7122;
  double t7129;
  double t7151;
  double t6303;
  double t6304;
  double t6309;
  double t6341;
  double t6370;
  double t6603;
  double t6604;
  double t6624;
  double t6627;
  double t6672;
  double t6688;
  double t6690;
  double t6720;
  double t6732;
  double t6733;
  double t6777;
  double t6779;
  double t6785;
  double t8486;
  double t8587;
  double t8589;
  double t8594;
  double t8624;
  double t8641;
  double t6496;
  double t6570;
  double t8479;
  double t8677;
  double t1421;
  double t9753;
  double t9755;
  double t10067;
  double t10075;
  double t10076;
  double t2675;
  double t2729;
  double t10231;
  double t10243;
  double t10264;
  double t10265;
  double t10266;
  double t10267;
  double t3602;
  double t3609;
  double t3631;
  double t3632;
  double t3654;
  double t3665;
  double t3666;
  double t3820;
  double t8719;
  double t8775;
  double t8782;
  double t8787;
  double t10771;
  double t10805;
  double t11164;
  double t11171;
  double t11173;
  double t11176;
  double t10065;
  double t10150;
  double t10750;
  double t11213;
  double t8916;
  t47 = -1.*var6[1];
  t154 = var6[0] + t47;
  t157 = Power(t154,-7);
  t179 = -1. + var7[0];
  t180 = -1. + var8[0];
  t256 = 1/t180;
  t318 = -1.*var1[0];
  t379 = t318 + var1[1];
  t391 = t179*t256*t379;
  t392 = t47 + var1[0] + t391;
  t406 = Power(t392,5);
  t534 = Power(t154,-6);
  t539 = Power(t392,4);
  t635 = 1/t154;
  t644 = -1.*t635*t392;
  t664 = 1. + t644;
  t884 = Power(t154,-5);
  t912 = Power(t392,3);
  t919 = Power(t664,2);
  t924 = Power(t154,-4);
  t928 = Power(t392,2);
  t930 = Power(t664,3);
  t939 = Power(t154,-3);
  t945 = Power(t664,4);
  t967 = Power(t154,-2);
  t968 = Power(t664,5);
  t973 = Power(t392,6);
  t993 = Power(t664,6);
  t1376 = Cos(var2[2]);
  t1291 = Cos(var2[3]);
  t1292 = Sin(var2[2]);
  t1377 = Sin(var2[3]);
  t1288 = Cos(var2[4]);
  t1295 = -1.*t1291*t1292;
  t1379 = -1.*t1376*t1377;
  t1380 = t1295 + t1379;
  t1382 = t1376*t1291;
  t1383 = -1.*t1292*t1377;
  t1386 = t1382 + t1383;
  t1388 = Sin(var2[4]);
  t1390 = t1288*t1380;
  t1391 = -1.*t1386*t1388;
  t1392 = t1390 + t1391;
  t1423 = -1.*t1288*t1386;
  t1429 = -1.*t1380*t1388;
  t1437 = t1423 + t1429;
  t1422 = -0.4*t1380*t1388;
  t1494 = -1.*t1376*t1291;
  t1495 = t1292*t1377;
  t1496 = t1494 + t1495;
  t1441 = 0.4*t1380*t1388;
  t1506 = t1288*t1496;
  t1507 = t1506 + t1429;
  t1505 = 0.4*t1288*t1496;
  t1509 = -0.8*t1507;
  t1514 = -0.4*t1288*t1496;
  t1515 = 0.64*t1507;
  t1517 = t1514 + t1441 + t1515;
  t1536 = 0.1*t1517;
  t1537 = t1505 + t1422 + t1509 + t1536;
  t1585 = -1.*t1288;
  t1590 = 1. + t1585;
  t1603 = t1496*t1388;
  t1606 = t1390 + t1603;
  t1689 = t1291*t1292;
  t1690 = t1376*t1377;
  t1691 = t1689 + t1690;
  t1694 = t1691*t1388;
  t1797 = t1506 + t1694;
  t1683 = -0.4*t1590*t1496;
  t1693 = 0.4*t1691*t1388;
  t1828 = -0.8*t1797;
  t1829 = 0.748*t1496;
  t1884 = 0.4*t1590*t1496;
  t1933 = -0.4*t1691*t1388;
  t1989 = 0.64*t1797;
  t1990 = t1884 + t1933 + t1989;
  t1998 = 3.2*t1990;
  t2038 = t1829 + t1998;
  t2076 = 0.03125*t2038;
  t2170 = t1683 + t1693 + t1828 + t2076;
  t2411 = Cos(var2[5]);
  t2439 = Sin(var2[5]);
  t2259 = Cos(var2[6]);
  t2426 = -1.*t2411*t1292;
  t2448 = -1.*t1376*t2439;
  t2465 = t2426 + t2448;
  t2622 = t1376*t2411;
  t2645 = -1.*t1292*t2439;
  t2646 = t2622 + t2645;
  t2648 = Sin(var2[6]);
  t2673 = 0.4*t2465*t2648;
  t2869 = -1.*t1376*t2411;
  t2881 = t1292*t2439;
  t2888 = t2869 + t2881;
  t2725 = -1.*t2465*t2648;
  t2896 = -0.4*t2259*t2888;
  t2949 = t2259*t2888;
  t3199 = t2949 + t2725;
  t3340 = 0.64*t3199;
  t3343 = t2896 + t2673 + t3340;
  t2656 = t2259*t2465;
  t1008 = Power(t392,7);
  t1043 = Power(t664,7);
  t3595 = t1288*t1386;
  t3598 = t1380*t1388;
  t3599 = t3595 + t3598;
  t3438 = -1.*t2259;
  t3458 = 1. + t3438;
  t4702 = t2411*t1292;
  t4771 = t1376*t2439;
  t4785 = t4702 + t4771;
  t4599 = 0.748*t2888;
  t4689 = 0.4*t3458*t2888;
  t4791 = -0.4*t4785*t2648;
  t4919 = t4785*t2648;
  t4924 = t2949 + t4919;
  t4925 = 0.64*t4924;
  t4934 = t4689 + t4791 + t4925;
  t4957 = 3.2*t4934;
  t5182 = t4599 + t4957;
  t1595 = -0.4*t1590*t1380;
  t1601 = 0.4*t1496*t1388;
  t1609 = -0.8*t1606;
  t1615 = 0.748*t1380;
  t1616 = 0.4*t1590*t1380;
  t1617 = -0.4*t1496*t1388;
  t1618 = 0.64*t1606;
  t1638 = t1616 + t1617 + t1618;
  t1654 = 3.2*t1638;
  t3434 = 0.748*t2465;
  t3468 = 0.4*t3458*t2465;
  t3473 = -0.4*t2888*t2648;
  t3483 = t2888*t2648;
  t3484 = t2656 + t3483;
  t3487 = 0.64*t3484;
  t3492 = t3468 + t3473 + t3487;
  t3512 = 3.2*t3492;
  t1681 = var3[4]*t1537;
  t2174 = var3[3]*t2170;
  t4556 = 0.1*var3[6]*t3343;
  t5468 = 0.03125*var3[5]*t5182;
  t1381 = 0.4*t1288*t1380;
  t1389 = -0.4*t1386*t1388;
  t1402 = -0.8*t1392;
  t1403 = -0.4*t1288*t1380;
  t1404 = 0.4*t1386*t1388;
  t1405 = 0.64*t1392;
  t1407 = t1403 + t1404 + t1405;
  t1413 = 0.1*t1407;
  t1414 = t1381 + t1389 + t1402 + t1413;
  t1660 = t1615 + t1654;
  t1667 = 0.03125*t1660;
  t1674 = t1595 + t1601 + t1609 + t1667;
  t2491 = -0.4*t2259*t2465;
  t2652 = 0.4*t2646*t2648;
  t2658 = -1.*t2646*t2648;
  t2663 = t2656 + t2658;
  t2667 = 0.64*t2663;
  t2669 = t2491 + t2652 + t2667;
  t3523 = t3434 + t3512;
  t5551 = -2.88*t1292;
  t5553 = t5551 + t1615 + t1654 + t3434 + t3512;
  t5554 = 0.03125*t5553;
  t5555 = t1595 + t1601 + t1609 + t5554;
  t1439 = 0.4*t1288*t1386;
  t3646 = 0.4*t1590*t1386;
  t3653 = 0.64*t3599;
  t6388 = -0.64*t1392;
  t6398 = t1381 + t1389 + t6388;
  t6507 = -0.748*t1380;
  t6518 = -3.2*t1638;
  t6553 = t6507 + t6518;
  t3796 = t2259*t2646;
  t2671 = 0.4*t2259*t2646;
  t6615 = -1.*t4785*t2648;
  t6617 = t3796 + t6615;
  t3671 = 0.4*t3458*t2646;
  t3762 = -0.4*t2465*t2648;
  t3798 = t2465*t2648;
  t3801 = t3796 + t3798;
  t3819 = 0.64*t3801;
  t6695 = 0.8*t3801;
  t5557 = -2.88*t1376;
  t6356 = -0.748*t1386;
  t6358 = t3646 + t1422 + t3653;
  t6365 = -3.2*t6358;
  t6705 = -0.748*t2646;
  t6715 = t3671 + t3762 + t3819;
  t6717 = -3.2*t6715;
  t6816 = 0.8*t2663;
  t6831 = 0.4*t2259*t2465;
  t6839 = -0.4*t2646*t2648;
  t6845 = -0.64*t2663;
  t6853 = t6831 + t6839 + t6845;
  t6872 = 0.1*t6853;
  t6906 = t2491 + t2652 + t6816 + t6872;
  t6922 = -1.*t2259*t4785;
  t6924 = t6922 + t2658;
  t7118 = 0.4*t3458*t4785;
  t7122 = t2259*t4785;
  t7129 = t2646*t2648;
  t7151 = t7122 + t7129;
  t6303 = -1.*t1691*t1388;
  t6304 = t3595 + t6303;
  t6309 = -0.64*t6304;
  t6341 = t1439 + t1933 + t6309;
  t6370 = t6356 + t6365;
  t6603 = -0.4*t2259*t2646;
  t6604 = 0.4*t4785*t2648;
  t6624 = 0.8*t6617;
  t6627 = -0.64*t6617;
  t6672 = t2671 + t4791 + t6627;
  t6688 = 0.1*t6672;
  t6690 = t6603 + t6604 + t6624 + t6688;
  t6720 = t6705 + t6717;
  t6732 = 0.03125*t6720;
  t6733 = t3671 + t3762 + t6695 + t6732;
  t6777 = t5557 + t6356 + t6365 + t6705 + t6717;
  t6779 = 0.03125*t6777;
  t6785 = t3671 + t3762 + t6695 + t6779;
  t8486 = 0.8*t3484;
  t8587 = -0.748*t2465;
  t8589 = -3.2*t3492;
  t8594 = t8587 + t8589;
  t8624 = 0.03125*t8594;
  t8641 = t3468 + t3473 + t8486 + t8624;
  t6496 = 0.1*var3[4]*t6398;
  t6570 = 0.03125*var3[3]*t6553;
  t8479 = var3[6]*t6906;
  t8677 = var3[5]*t8641;
  t1421 = -0.4*t1288*t1386;
  t9753 = -0.64*t1507;
  t9755 = t1505 + t1422 + t9753;
  t10067 = -0.748*t1496;
  t10075 = -3.2*t1990;
  t10076 = t10067 + t10075;
  t2675 = -1.*t2259*t2646;
  t2729 = t2675 + t2725;
  t10231 = 0.8*t3199;
  t10243 = 0.4*t2259*t2888;
  t10264 = -0.64*t3199;
  t10265 = t10243 + t3762 + t10264;
  t10266 = 0.1*t10265;
  t10267 = t2896 + t2673 + t10231 + t10266;
  t3602 = 0.24*t1376;
  t3609 = var2[1] + t3602;
  t3631 = 0.11*t1386;
  t3632 = var2[1] + t3631;
  t3654 = var2[1] + t3646 + t1422 + t3653;
  t3665 = 0.11*t2646;
  t3666 = var2[1] + t3665;
  t3820 = var2[1] + t3671 + t3762 + t3819;
  t8719 = 2.88*t1292;
  t8775 = t8719 + t6507 + t6518 + t8587 + t8589;
  t8782 = 0.03125*t8775;
  t8787 = t3468 + t3473 + t8486 + t8782;
  t10771 = 0.8*t4924;
  t10805 = -0.748*t2888;
  t11164 = -3.2*t4934;
  t11171 = t10805 + t11164;
  t11173 = 0.03125*t11171;
  t11176 = t4689 + t4791 + t10771 + t11173;
  t10065 = 0.1*var3[4]*t9755;
  t10150 = 0.03125*var3[3]*t10076;
  t10750 = var3[6]*t10267;
  t11213 = var3[5]*t11176;
  t8916 = var3[2]*t8787;
  p_output1[0]=var4[2] - 42.*t967*t968*var5[0] - 210.*t392*t939*t945*var5[4] + 84.*t967*t968*var5[4] - 420.*t924*t928*t930*var5[8] + 420.*t392*t939*t945*var5[8] - 42.*t967*t968*var5[8] - 420.*t884*t912*t919*var5[12] + 840.*t924*t928*t930*var5[12] - 210.*t392*t939*t945*var5[12] - 210.*t534*t539*t664*var5[16] + 840.*t884*t912*t919*var5[16] - 420.*t924*t928*t930*var5[16] - 42.*t157*t406*var5[20] + 420.*t534*t539*t664*var5[20] - 420.*t884*t912*t919*var5[20] + 84.*t157*t406*var5[24] - 210.*t534*t539*t664*var5[24] - 42.*t157*t406*var5[28] + (var2[2] - 1.*t1043*var5[0] - 7.*t392*t635*t993*var5[4] - 21.*t928*t967*t968*var5[8] - 35.*t912*t939*t945*var5[12] - 35.*t539*t924*t930*var5[16] - 21.*t406*t884*t919*var5[20] - 7.*t534*t664*t973*var5[24] - 1.*t1008*t157*var5[28])*var9[0] + (var3[2] + 7.*t635*t993*var5[0] + 42.*t392*t967*t968*var5[4] - 7.*t635*t993*var5[4] + 105.*t928*t939*t945*var5[8] - 42.*t392*t967*t968*var5[8] + 140.*t912*t924*t930*var5[12] - 105.*t928*t939*t945*var5[12] + 105.*t539*t884*t919*var5[16] - 140.*t912*t924*t930*var5[16] + 42.*t406*t534*t664*var5[20] - 105.*t539*t884*t919*var5[20] - 42.*t406*t534*t664*var5[24] + 7.*t157*t973*var5[24] - 7.*t157*t973*var5[28])*var9[1];
  p_output1[1]=var3[2]*(t1681 + t2174 + t4556 + t5468 + (t1683 + t1693 + t1828 + 0.03125*(t1829 + t1998 + t4599 + t4957 + t5557))*var3[2]) + (t1681 + t2174 + t2170*var3[2])*var3[3] + var3[4]*(t1537*var3[2] + t1537*var3[3] + (t1421 + t1422 - 0.8*t1437 + 0.1*(0.64*t1437 + t1439 + t1441))*var3[4]) + (t4556 + t5468 + 0.03125*t5182*var3[2])*var3[5] + var3[6]*(0.1*t3343*var3[2] + 0.1*t3343*var3[5] + 0.1*(t2671 + t2673 + 0.64*t2729)*var3[6]) + t5555*var4[2] + t1674*var4[3] + t1414*var4[4] + 0.03125*t3523*var4[5] + 0.1*t2669*var4[6] - 42.*t967*t968*var5[1] - 210.*t392*t939*t945*var5[5] + 84.*t967*t968*var5[5] - 420.*t924*t928*t930*var5[9] + 420.*t392*t939*t945*var5[9] - 42.*t967*t968*var5[9] - 420.*t884*t912*t919*var5[13] + 840.*t924*t928*t930*var5[13] - 210.*t392*t939*t945*var5[13] - 210.*t534*t539*t664*var5[17] + 840.*t884*t912*t919*var5[17] - 420.*t924*t928*t930*var5[17] - 42.*t157*t406*var5[21] + 420.*t534*t539*t664*var5[21] - 420.*t884*t912*t919*var5[21] + 84.*t157*t406*var5[25] - 210.*t534*t539*t664*var5[25] - 42.*t157*t406*var5[29] + (t1441 - 0.4*t1386*t1590 - 0.8*t3599 + 0.03125*(12.*t3609 + 6.8*t3632 + 3.2*t3654 + 6.8*t3666 + 3.2*t3820) - 1.*var2[1] - 1.*t1043*var5[1] - 7.*t392*t635*t993*var5[5] - 21.*t928*t967*t968*var5[9] - 35.*t912*t939*t945*var5[13] - 35.*t539*t924*t930*var5[17] - 21.*t406*t884*t919*var5[21] - 7.*t534*t664*t973*var5[25] - 1.*t1008*t157*var5[29])*var9[0] + (t5555*var3[2] + t1674*var3[3] + t1414*var3[4] + 0.03125*t3523*var3[5] + 0.1*t2669*var3[6] + 7.*t635*t993*var5[1] + 42.*t392*t967*t968*var5[5] - 7.*t635*t993*var5[5] + 105.*t928*t939*t945*var5[9] - 42.*t392*t967*t968*var5[9] + 140.*t912*t924*t930*var5[13] - 105.*t928*t939*t945*var5[13] + 105.*t539*t884*t919*var5[17] - 140.*t912*t924*t930*var5[17] + 42.*t406*t534*t664*var5[21] - 105.*t539*t884*t919*var5[21] - 42.*t406*t534*t664*var5[25] + 7.*t157*t973*var5[25] - 7.*t157*t973*var5[29])*var9[1];
  p_output1[2]=(t6496 + t6570 + t8479 + t8677 + t8916)*var3[2] + (t6496 + t6570 + 0.03125*t6553*var3[2])*var3[3] + var3[4]*(0.1*t6398*var3[2] - 0.1*t1407*var3[3] + 0.1*(t1389 - 0.4*t1288*t1691 - 0.64*(t1391 - 1.*t1288*t1691))*var3[4]) + (t8479 + t8677 + t8641*var3[2])*var3[5] + var3[6]*(t6906*var3[2] + t6906*var3[5] + (t2652 + 0.4*t2259*t4785 + 0.1*(-0.4*t2259*t4785 + t6839 - 0.64*t6924) + 0.8*t6924)*var3[6]) + t6785*var4[2] + 0.03125*t6370*var4[3] + 0.1*t6341*var4[4] + t6733*var4[5] + t6690*var4[6] - 42.*t967*t968*var5[2] - 210.*t392*t939*t945*var5[6] + 84.*t967*t968*var5[6] - 420.*t924*t928*t930*var5[10] + 420.*t392*t939*t945*var5[10] - 42.*t967*t968*var5[10] - 420.*t884*t912*t919*var5[14] + 840.*t924*t928*t930*var5[14] - 210.*t392*t939*t945*var5[14] - 210.*t534*t539*t664*var5[18] + 840.*t884*t912*t919*var5[18] - 420.*t924*t928*t930*var5[18] - 42.*t157*t406*var5[22] + 420.*t534*t539*t664*var5[22] - 420.*t884*t912*t919*var5[22] + 84.*t157*t406*var5[26] - 210.*t534*t539*t664*var5[26] - 42.*t157*t406*var5[30] + (t6839 + t7118 + 0.8*t7151 + var2[0] + 0.03125*(-12.*(0.24*t1292 + var2[0]) - 6.8*(0.11*t1691 + var2[0]) - 3.2*(t1389 + 0.4*t1590*t1691 + 0.64*(t1386*t1388 + t1288*t1691) + var2[0]) - 6.8*(0.11*t4785 + var2[0]) - 3.2*(t6839 + t7118 + 0.64*t7151 + var2[0])) - 1.*t1043*var5[2] - 7.*t392*t635*t993*var5[6] - 21.*t928*t967*t968*var5[10] - 35.*t912*t939*t945*var5[14] - 35.*t539*t924*t930*var5[18] - 21.*t406*t884*t919*var5[22] - 7.*t534*t664*t973*var5[26] - 1.*t1008*t157*var5[30])*var9[0] + (t6785*var3[2] + 0.03125*t6370*var3[3] + 0.1*t6341*var3[4] + t6733*var3[5] + t6690*var3[6] + 7.*t635*t993*var5[2] + 42.*t392*t967*t968*var5[6] - 7.*t635*t993*var5[6] + 105.*t928*t939*t945*var5[10] - 42.*t392*t967*t968*var5[10] + 140.*t912*t924*t930*var5[14] - 105.*t928*t939*t945*var5[14] + 105.*t539*t884*t919*var5[18] - 140.*t912*t924*t930*var5[18] + 42.*t406*t534*t664*var5[22] - 105.*t539*t884*t919*var5[22] - 42.*t406*t534*t664*var5[26] + 7.*t157*t973*var5[26] - 7.*t157*t973*var5[30])*var9[1];
  p_output1[3]=var3[2]*(t10065 + t10150 + t10750 + t11213 + (t10771 + 0.03125*(t10067 + t10075 + t10805 + t11164 + 2.88*t1376) + t4689 + t4791)*var3[2]) + (t10065 + t10150 + 0.03125*t10076*var3[2])*var3[3] + var3[4]*(0.1*t9755*var3[2] - 0.1*t1517*var3[3] + 0.1*(t1421 + t1422 - 0.64*t1437)*var3[4]) + (t10750 + t11213 + t11176*var3[2])*var3[5] + var3[6]*(t10267*var3[2] + t10267*var3[5] + (t2671 + t2673 + 0.8*t2729 + 0.1*(-0.64*t2729 + t3762 + t6603))*var3[6]) + t8787*var4[2] + 0.03125*t6553*var4[3] + 0.1*t6398*var4[4] + t8641*var4[5] + t6906*var4[6] - 42.*t967*t968*var5[3] - 210.*t392*t939*t945*var5[7] + 84.*t967*t968*var5[7] - 420.*t924*t928*t930*var5[11] + 420.*t392*t939*t945*var5[11] - 42.*t967*t968*var5[11] - 420.*t884*t912*t919*var5[15] + 840.*t924*t928*t930*var5[15] - 210.*t392*t939*t945*var5[15] - 210.*t534*t539*t664*var5[19] + 840.*t884*t912*t919*var5[19] - 420.*t924*t928*t930*var5[19] - 42.*t157*t406*var5[23] + 420.*t534*t539*t664*var5[23] - 420.*t884*t912*t919*var5[23] + 84.*t157*t406*var5[27] - 210.*t534*t539*t664*var5[27] - 42.*t157*t406*var5[31] + (t3671 + t3762 + 0.03125*(-12.*t3609 - 6.8*t3632 - 3.2*t3654 - 6.8*t3666 - 3.2*t3820) + t6695 + var2[1] - 1.*t1043*var5[3] - 7.*t392*t635*t993*var5[7] - 21.*t928*t967*t968*var5[11] - 35.*t912*t939*t945*var5[15] - 35.*t539*t924*t930*var5[19] - 21.*t406*t884*t919*var5[23] - 7.*t534*t664*t973*var5[27] - 1.*t1008*t157*var5[31])*var9[0] + (t6496 + t6570 + t8479 + t8677 + t8916 + 7.*t635*t993*var5[3] + 42.*t392*t967*t968*var5[7] - 7.*t635*t993*var5[7] + 105.*t928*t939*t945*var5[11] - 42.*t392*t967*t968*var5[11] + 140.*t912*t924*t930*var5[15] - 105.*t928*t939*t945*var5[15] + 105.*t539*t884*t919*var5[19] - 140.*t912*t924*t930*var5[19] + 42.*t406*t534*t664*var5[23] - 105.*t539*t884*t919*var5[23] - 42.*t406*t534*t664*var5[27] + 7.*t157*t973*var5[27] - 7.*t157*t973*var5[31])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 32 && ncols == 1) && 
      !(mrows == 1 && ncols == 32))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "d2y_time_RightStance.hh"

namespace RightStance
{

void d2y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
