/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:45 GMT-04:00
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
  double t1871;
  double t1868;
  double t1869;
  double t1872;
  double t1859;
  double t1948;
  double t2053;
  double t2057;
  double t2060;
  double t2061;
  double t3072;
  double t1870;
  double t1873;
  double t1938;
  double t4458;
  double t4470;
  double t4521;
  double t4732;
  double t4752;
  double t7563;
  double t3343;
  double t1939;
  double t1957;
  double t1965;
  double t1966;
  double t2009;
  double t2030;
  double t4150;
  double t4399;
  double t4420;
  double t4442;
  double t4605;
  double t4608;
  double t9115;
  double t9142;
  double t9324;
  double t9505;
  double t9524;
  double t9542;
  double t9605;
  double t11764;
  double t11859;
  double t13246;
  double t13247;
  double t13257;
  double t13325;
  double t13326;
  double t13336;
  double t13407;
  double t13408;
  double t13413;
  double t13436;
  double t13439;
  double t3772;
  double t3817;
  double t4089;
  double t7935;
  double t8114;
  double t8118;
  double t13497;
  double t13498;
  double t4662;
  double t4691;
  double t4721;
  double t7841;
  double t7844;
  double t7848;
  double t9840;
  double t13452;
  double t13454;
  double t13459;
  double t13276;
  double t13385;
  double t13390;
  double t13432;
  double t13435;
  double t13418;
  double t13441;
  double t13442;
  double t13559;
  double t13560;
  double t13466;
  double t13479;
  double t13465;
  double t13478;
  double t13480;
  double t13569;
  double t13570;
  double t13571;
  double t13499;
  double t13506;
  double t13507;
  double t13529;
  double t13530;
  double t13531;
  double t13532;
  double t13537;
  double t13538;
  double t13539;
  double t13540;
  double t13544;
  double t13545;
  double t13549;
  double t13550;
  double t13551;
  double t13552;
  double t13553;
  double t13555;
  double t13556;
  double t13557;
  double t13558;
  double t13566;
  double t13567;
  double t13572;
  double t13575;
  double t13591;
  double t13592;
  double t13594;
  double t13595;
  double t13645;
  double t13646;
  double t13647;
  double t13648;
  double t13649;
  double t13629;
  double t13630;
  double t13631;
  double t13633;
  double t13634;
  double t13635;
  double t13636;
  double t13637;
  double t13639;
  double t13640;
  double t13641;
  double t13642;
  double t13643;
  double t9673;
  double t10434;
  double t9179;
  double t9247;
  double t8873;
  double t9300;
  double t9654;
  double t9672;
  double t10438;
  double t12035;
  double t13136;
  double t13561;
  double t13562;
  double t13563;
  double t13568;
  double t13573;
  double t13574;
  double t13576;
  double t13578;
  double t13585;
  double t13586;
  double t13589;
  double t13590;
  double t13593;
  double t13596;
  double t13679;
  double t13603;
  double t13604;
  double t13605;
  double t13681;
  double t13683;
  double t13686;
  double t13687;
  double t13688;
  double t13689;
  double t13690;
  double t13691;
  double t13692;
  double t13693;
  double t13694;
  double t13695;
  double t13698;
  double t13616;
  double t13617;
  double t13618;
  double t13621;
  double t13622;
  double t13623;
  double t13638;
  double t13391;
  double t13443;
  double t13464;
  double t13481;
  double t13485;
  double t4636;
  double t7833;
  double t7912;
  double t8216;
  double t8437;
  double t8831;
  double t13721;
  double t13486;
  double t13671;
  double t13672;
  double t13673;
  double t13674;
  double t13675;
  double t13564;
  double t13565;
  double t13577;
  double t13587;
  double t13588;
  double t13597;
  double t13598;
  double t13696;
  double t13697;
  double t13699;
  double t13700;
  double t13701;
  double t13702;
  double t13703;
  double t13615;
  double t13619;
  double t13620;
  double t13624;
  double t13625;
  double t13713;
  double t13714;
  double t13715;
  double t13716;
  double t13717;
  double t13644;
  double t13723;
  double t13775;
  double t13776;
  double t13777;
  double t13778;
  double t13779;
  double t13771;
  double t13772;
  double t13773;
  double t13658;
  double t13659;
  double t13660;
  double t13661;
  double t13662;
  double t13680;
  double t13682;
  double t13684;
  double t13505;
  double t13519;
  double t13520;
  double t13734;
  double t13735;
  double t13736;
  double t13737;
  double t13738;
  double t13707;
  double t13708;
  double t13709;
  double t13710;
  double t13711;
  double t13602;
  double t13610;
  double t13611;
  double t13612;
  double t13613;
  double t13751;
  double t13752;
  double t13753;
  double t13754;
  double t13755;
  double t13756;
  double t13757;
  double t13650;
  double t13724;
  double t13780;
  double t13810;
  double t13811;
  double t13812;
  double t13824;
  double t13825;
  double t2031;
  t1871 = Cos(var1[3]);
  t1868 = Cos(var1[4]);
  t1869 = Sin(var1[3]);
  t1872 = Sin(var1[4]);
  t1859 = Sin(var1[2]);
  t1948 = Cos(var1[2]);
  t2053 = -1.*t1868;
  t2057 = 1. + t2053;
  t2060 = 0.4*t2057;
  t2061 = 0.64*t1868;
  t3072 = t2060 + t2061;
  t1870 = -1.*t1868*t1869;
  t1873 = -1.*t1871*t1872;
  t1938 = t1870 + t1873;
  t4458 = t1871*t1868;
  t4470 = -1.*t1869*t1872;
  t4521 = t4458 + t4470;
  t4732 = t1948*t1938;
  t4752 = -1.*t1859*t4521;
  t7563 = t4732 + t4752;
  t3343 = t3072*t1868;
  t1939 = -1.*t1859*t1938;
  t1957 = -1.*t1871*t1868;
  t1965 = t1869*t1872;
  t1966 = t1957 + t1965;
  t2009 = t1948*t1966;
  t2030 = t1939 + t2009;
  t4150 = t1868*t1869;
  t4399 = t1871*t1872;
  t4420 = t4150 + t4399;
  t4442 = -1.*t1859*t4420;
  t4605 = t1948*t4521;
  t4608 = t4442 + t4605;
  t9115 = t1859*t1938;
  t9142 = t9115 + t4605;
  t9324 = -1.*t1948*t4521;
  t9505 = t1939 + t9324;
  t9524 = t1948*t4420;
  t9542 = t1859*t4521;
  t9605 = t9524 + t9542;
  t11764 = t1859*t1966;
  t11859 = t4732 + t11764;
  t13246 = t3072*t1869;
  t13247 = 0.24*t1871*t1872;
  t13257 = t13246 + t13247;
  t13325 = t1871*t3072;
  t13326 = -0.24*t1869*t1872;
  t13336 = t13325 + t13326;
  t13407 = -0.24*t1868*t1869;
  t13408 = -0.24*t1871*t1872;
  t13413 = t13407 + t13408;
  t13436 = 0.24*t1871*t1868;
  t13439 = t13436 + t13326;
  t3772 = Power(t1868,2);
  t3817 = -0.24*t3772;
  t4089 = t3343 + t3817;
  t7935 = Power(t1872,2);
  t8114 = 0.24*t7935;
  t8118 = t3343 + t8114;
  t13497 = t1859*t4420;
  t13498 = t13497 + t2009;
  t4662 = t3072*t1872;
  t4691 = -0.24*t1868*t1872;
  t4721 = t4662 + t4691;
  t7841 = -1.*t3072*t1872;
  t7844 = 0.24*t1868*t1872;
  t7848 = t7841 + t7844;
  t9840 = -1.*t1859*t1966;
  t13452 = t13257*t4420;
  t13454 = t4521*t13336;
  t13459 = t13452 + t13454;
  t13276 = -1.*t13257*t4521;
  t13385 = -1.*t1938*t13336;
  t13390 = t13276 + t13385;
  t13432 = t13257*t4521;
  t13435 = t1938*t13336;
  t13418 = t13413*t4521;
  t13441 = t4420*t13439;
  t13442 = t13418 + t13432 + t13435 + t13441;
  t13559 = -1.*t3072*t1869;
  t13560 = t13559 + t13408;
  t13466 = -1.*t1938*t13257;
  t13479 = -1.*t13336*t1966;
  t13465 = -1.*t1938*t13413;
  t13478 = -1.*t4521*t13439;
  t13480 = t13465 + t13466 + t13478 + t13479;
  t13569 = -0.24*t1871*t1868;
  t13570 = 0.24*t1869*t1872;
  t13571 = t13569 + t13570;
  t13499 = -0.384*var2[4]*t13498;
  t13506 = 3.2*t8118*t13498;
  t13507 = 3.2*t4721*t11859;
  t13529 = 6.4*t9142*t7563;
  t13530 = 3.2*t9605*t2030;
  t13531 = 3.2*t7563*t13498;
  t13532 = t9524 + t9840;
  t13537 = 3.2*t9142*t13532;
  t13538 = 3.2*t4608*t11859;
  t13539 = 6.4*t2030*t11859;
  t13540 = t13529 + t13530 + t13531 + t13537 + t13538 + t13539;
  t13544 = -0.5*var2[1]*t13540;
  t13545 = Power(t9142,2);
  t13549 = 6.4*t13545;
  t13550 = 6.4*t9142*t13498;
  t13551 = 6.4*t9605*t11859;
  t13552 = Power(t11859,2);
  t13553 = 6.4*t13552;
  t13555 = t13549 + t13550 + t13551 + t13553;
  t13556 = -0.5*var2[0]*t13555;
  t13557 = 3.2*t13459*t13498;
  t13558 = 3.2*t13390*t11859;
  t13566 = -1.*t13413*t4521;
  t13567 = -1.*t4420*t13336;
  t13572 = -1.*t1938*t13571;
  t13575 = -1.*t13257*t1966;
  t13591 = t1938*t13257;
  t13592 = t13413*t4420;
  t13594 = t4521*t13571;
  t13595 = t13336*t1966;
  t13645 = 3.2*t4721*t9142;
  t13646 = 3.2*t7848*t9142;
  t13647 = 3.2*t4089*t9605;
  t13648 = 3.2*t8118*t11859;
  t13649 = t13645 + t13646 + t13647 + t13648;
  t13629 = 6.4*t9142*t9605;
  t13630 = 6.4*t9142*t11859;
  t13631 = t13629 + t13630;
  t13633 = 3.2*t9142*t4608;
  t13634 = 3.2*t7563*t9605;
  t13635 = 3.2*t9142*t2030;
  t13636 = 3.2*t7563*t11859;
  t13637 = t13633 + t13634 + t13635 + t13636;
  t13639 = 3.2*t9142*t13390;
  t13640 = 3.2*t9142*t13442;
  t13641 = 3.2*t13459*t11859;
  t13642 = 3.2*t9605*t13480;
  t13643 = t13639 + t13640 + t13641 + t13642;
  t9673 = -1.*t1948*t1938;
  t10434 = t9673 + t9840;
  t9179 = -1.*t1948*t4420;
  t9247 = t9179 + t4752;
  t8873 = 6.4*t4608*t7563;
  t9300 = 3.2*t9142*t9247;
  t9654 = 3.2*t9505*t9605;
  t9672 = 6.4*t7563*t2030;
  t10438 = 3.2*t9142*t10434;
  t12035 = 3.2*t9505*t11859;
  t13136 = t8873 + t9300 + t9654 + t9672 + t10438 + t12035;
  t13561 = t13560*t4521;
  t13562 = t4420*t13336;
  t13563 = t13561 + t13432 + t13435 + t13562;
  t13568 = -1.*t1938*t13439;
  t13573 = -1.*t13560*t1966;
  t13574 = -1.*t13413*t1966;
  t13576 = t13566 + t13385 + t13567 + t13568 + t13572 + t13573 + t13574 + t13575;
  t13578 = -1.*t1938*t13560;
  t13585 = -1.*t4521*t13336;
  t13586 = t13578 + t13466 + t13585 + t13479;
  t13589 = t1938*t13560;
  t13590 = t1938*t13413;
  t13593 = t4521*t13439;
  t13596 = t13589 + t13590 + t13591 + t13592 + t13454 + t13593 + t13594 + t13595;
  t13679 = -0.384*var2[4]*t13532;
  t13603 = -1.*t3072*t1868;
  t13604 = 0.24*t3772;
  t13605 = t13603 + t13604;
  t13681 = 3.2*t4721*t2030;
  t13683 = 3.2*t8118*t13532;
  t13686 = Power(t7563,2);
  t13687 = 6.4*t13686;
  t13688 = 6.4*t4608*t2030;
  t13689 = Power(t2030,2);
  t13690 = 6.4*t13689;
  t13691 = 6.4*t7563*t13532;
  t13692 = t13687 + t13688 + t13690 + t13691;
  t13693 = -0.5*var2[1]*t13692;
  t13694 = -0.5*var2[0]*t13540;
  t13695 = 3.2*t13390*t2030;
  t13698 = 3.2*t13459*t13532;
  t13616 = -2.*t1938*t13439;
  t13617 = -2.*t13413*t1966;
  t13618 = t13566 + t13567 + t13616 + t13572 + t13617 + t13575;
  t13621 = 2.*t1938*t13413;
  t13622 = 2.*t4521*t13439;
  t13623 = t13621 + t13591 + t13592 + t13622 + t13594 + t13595;
  t13638 = -0.5*var2[4]*t13637;
  t13391 = 3.2*t7563*t13390;
  t13443 = 3.2*t7563*t13442;
  t13464 = 3.2*t13459*t2030;
  t13481 = 3.2*t4608*t13480;
  t13485 = t13391 + t13443 + t13464 + t13481;
  t4636 = 3.2*t4089*t4608;
  t7833 = 3.2*t4721*t7563;
  t7912 = 3.2*t7848*t7563;
  t8216 = 3.2*t8118*t2030;
  t8437 = t4636 + t7833 + t7912 + t8216;
  t8831 = -0.5*var2[3]*t8437;
  t13721 = t8873 + t9672;
  t13486 = -0.5*var2[2]*t13485;
  t13671 = 3.2*t9505*t13390;
  t13672 = 3.2*t9505*t13442;
  t13673 = 3.2*t13459*t10434;
  t13674 = 3.2*t9247*t13480;
  t13675 = t13671 + t13672 + t13673 + t13674;
  t13564 = 3.2*t13563*t11859;
  t13565 = 3.2*t13442*t11859;
  t13577 = 3.2*t9605*t13576;
  t13587 = 3.2*t9142*t13586;
  t13588 = 3.2*t9142*t13480;
  t13597 = 3.2*t9142*t13596;
  t13598 = t13557 + t13558 + t13564 + t13565 + t13577 + t13587 + t13588 + t13597;
  t13696 = 3.2*t13563*t2030;
  t13697 = 3.2*t13442*t2030;
  t13699 = 3.2*t4608*t13576;
  t13700 = 3.2*t7563*t13586;
  t13701 = 3.2*t7563*t13480;
  t13702 = 3.2*t7563*t13596;
  t13703 = t13695 + t13696 + t13697 + t13698 + t13699 + t13700 + t13701 + t13702;
  t13615 = 6.4*t13442*t11859;
  t13619 = 3.2*t9605*t13618;
  t13620 = 6.4*t9142*t13480;
  t13624 = 3.2*t9142*t13623;
  t13625 = t13557 + t13558 + t13615 + t13619 + t13620 + t13624;
  t13713 = 6.4*t13442*t2030;
  t13714 = 3.2*t4608*t13618;
  t13715 = 6.4*t7563*t13480;
  t13716 = 3.2*t7563*t13623;
  t13717 = t13695 + t13713 + t13698 + t13714 + t13715 + t13716;
  t13644 = -0.5*var2[4]*t13643;
  t13723 = -0.5*var2[4]*t13485;
  t13775 = 3.2*t4089*t13390;
  t13776 = 3.2*t7848*t13459;
  t13777 = 3.2*t8118*t13442;
  t13778 = 3.2*t4721*t13480;
  t13779 = t13775 + t13776 + t13777 + t13778;
  t13771 = 6.4*t13459*t13442;
  t13772 = 6.4*t13390*t13480;
  t13773 = t13771 + t13772;
  t13658 = 3.2*t4721*t9505;
  t13659 = 3.2*t7848*t9505;
  t13660 = 3.2*t4089*t9247;
  t13661 = 3.2*t8118*t10434;
  t13662 = t13658 + t13659 + t13660 + t13661;
  t13680 = 3.2*t4089*t7563;
  t13682 = 3.2*t7848*t2030;
  t13684 = t13680 + t13681 + t13682 + t13683;
  t13505 = 3.2*t4089*t9142;
  t13519 = 3.2*t7848*t11859;
  t13520 = t13505 + t13506 + t13507 + t13519;
  t13734 = 3.2*t7848*t13563;
  t13735 = 3.2*t4721*t13576;
  t13736 = 3.2*t4089*t13586;
  t13737 = 3.2*t8118*t13596;
  t13738 = t13734 + t13735 + t13736 + t13737;
  t13707 = 3.2*t7848*t4608;
  t13708 = 6.4*t4089*t7563;
  t13709 = 3.2*t13605*t7563;
  t13710 = 6.4*t7848*t2030;
  t13711 = t13707 + t13708 + t13709 + t13681 + t13710 + t13683;
  t13602 = 6.4*t4089*t9142;
  t13610 = 3.2*t13605*t9142;
  t13611 = 3.2*t7848*t9605;
  t13612 = 6.4*t7848*t11859;
  t13613 = t13602 + t13610 + t13611 + t13506 + t13507 + t13612;
  t13751 = 3.2*t7848*t13390;
  t13752 = 3.2*t13605*t13459;
  t13753 = 6.4*t7848*t13442;
  t13754 = 3.2*t4721*t13618;
  t13755 = 6.4*t4089*t13480;
  t13756 = 3.2*t8118*t13623;
  t13757 = t13751 + t13752 + t13753 + t13754 + t13755 + t13756;
  t13650 = -0.5*var2[4]*t13649;
  t13724 = -0.5*var2[4]*t8437;
  t13780 = -0.5*var2[4]*t13779;
  t13810 = 6.4*t4089*t4721;
  t13811 = 6.4*t7848*t8118;
  t13812 = t13810 + t13811;
  t13824 = -0.384*var2[0]*t13498;
  t13825 = -0.384*var2[1]*t13532;
  t2031 = -0.384*var2[4]*t2030;
  p_output1[0]=(t13486 + t2031 + t8831 - 0.5*(6.4*t11859*t7563 + 6.4*t2030*t9142 + 6.4*t4608*t9142 + 6.4*t7563*t9605)*var2[0] - 0.5*t13136*var2[1])*var2[4];
  p_output1[1]=(t13499 + t13544 + t13556 - 0.5*t13598*var2[2] - 0.5*t13520*var2[3])*var2[4];
  p_output1[2]=(t13499 + t13544 + t13556 - 0.5*t13625*var2[2] - 0.5*t13613*var2[3])*var2[4];
  p_output1[3]=-0.5*t13631*var2[4];
  p_output1[4]=t13638;
  p_output1[5]=t13644;
  p_output1[6]=t13650;
  p_output1[7]=-0.5*t13631*var2[0] - 0.5*t13637*var2[1] - 0.5*t13643*var2[2] - 0.5*t13649*var2[3] - 0.768*t11859*var2[4];
  p_output1[8]=var2[4]*(-0.5*t13136*var2[0] - 0.5*(6.4*t10434*t7563 + 6.4*t7563*t9247 + 6.4*t2030*t9505 + 6.4*t4608*t9505)*var2[1] - 0.5*t13675*var2[2] - 0.5*t13662*var2[3] - 0.384*t10434*var2[4]);
  p_output1[9]=(t13679 + t13693 + t13694 - 0.5*t13703*var2[2] - 0.5*t13684*var2[3])*var2[4];
  p_output1[10]=(t13679 + t13693 + t13694 - 0.5*t13717*var2[2] - 0.5*t13711*var2[3])*var2[4];
  p_output1[11]=t13638;
  p_output1[12]=-0.5*t13721*var2[4];
  p_output1[13]=t13723;
  p_output1[14]=t13724;
  p_output1[15]=t13486 + t8831 - 0.5*t13637*var2[0] - 0.5*t13721*var2[1] - 0.768*t2030*var2[4];
  p_output1[16]=(-0.5*t13485*var2[0] - 0.5*t13675*var2[1])*var2[4];
  p_output1[17]=var2[4]*(-0.5*t13598*var2[0] - 0.5*t13703*var2[1] - 0.5*(6.4*t13442*t13563 + 6.4*t13390*t13576 + 6.4*t13480*t13586 + 6.4*t13459*t13596)*var2[2] - 0.5*t13738*var2[3] - 0.384*t13596*var2[4]);
  p_output1[18]=var2[4]*(-0.5*t13625*var2[0] - 0.5*t13717*var2[1] - 0.5*(6.4*Power(t13442,2) + 6.4*Power(t13480,2) + 6.4*t13390*t13618 + 6.4*t13459*t13623)*var2[2] - 0.5*t13757*var2[3] - 0.384*t13623*var2[4]);
  p_output1[19]=t13644;
  p_output1[20]=t13723;
  p_output1[21]=-0.5*t13773*var2[4];
  p_output1[22]=t13780;
  p_output1[23]=-0.5*t13643*var2[0] - 0.5*t13485*var2[1] - 0.5*t13773*var2[2] - 0.5*t13779*var2[3] - 0.768*t13442*var2[4];
  p_output1[24]=(-0.5*t8437*var2[0] - 0.5*t13662*var2[1])*var2[4];
  p_output1[25]=(-0.5*t13520*var2[0] - 0.5*t13684*var2[1] - 0.5*t13738*var2[2])*var2[4];
  p_output1[26]=var2[4]*(-0.5*t13613*var2[0] - 0.5*t13711*var2[1] - 0.5*t13757*var2[2] - 0.5*(6.4*Power(t4089,2) + 6.4*t4721*t7848 + 6.4*Power(t7848,2) + 6.4*t13605*t8118)*var2[3] - 0.384*t13605*var2[4]);
  p_output1[27]=t13650;
  p_output1[28]=t13724;
  p_output1[29]=t13780;
  p_output1[30]=-0.5*t13812*var2[4];
  p_output1[31]=-0.5*t13649*var2[0] - 0.5*t8437*var2[1] - 0.5*t13779*var2[2] - 0.5*t13812*var2[3] - 0.768*t7848*var2[4];
  p_output1[32]=(-0.384*t2030*var2[0] - 0.384*t10434*var2[1])*var2[4];
  p_output1[33]=(t13824 + t13825 - 0.384*t13596*var2[2])*var2[4];
  p_output1[34]=(t13824 + t13825 - 0.384*t13623*var2[2] - 0.384*t13605*var2[3])*var2[4];
  p_output1[35]=-0.384*t11859*var2[4];
  p_output1[36]=t2031;
  p_output1[37]=-0.384*t13442*var2[4];
  p_output1[38]=-0.384*t7848*var2[4];
  p_output1[39]=-0.384*t11859*var2[0] - 0.384*t2030*var2[1] - 0.384*t13442*var2[2] - 0.384*t7848*var2[3];
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

#include "J_Ce2_vec5_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
