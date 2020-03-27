/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:51:28 GMT-04:00
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
  double t406;
  double t255;
  double t304;
  double t478;
  double t2617;
  double t254;
  double t341;
  double t490;
  double t493;
  double t4464;
  double t4516;
  double t4531;
  double t4729;
  double t5282;
  double t509;
  double t2905;
  double t2998;
  double t2999;
  double t3098;
  double t3700;
  double t6985;
  double t6989;
  double t7157;
  double t6977;
  double t6978;
  double t6983;
  double t4201;
  double t4357;
  double t4414;
  double t7217;
  double t7218;
  double t7243;
  double t5555;
  double t5556;
  double t5570;
  double t5550;
  double t5575;
  double t5577;
  double t8240;
  double t7956;
  double t8125;
  double t8183;
  double t8360;
  double t8671;
  double t8682;
  double t8683;
  double t8204;
  double t8262;
  double t8685;
  double t8686;
  double t8687;
  double t9269;
  double t9303;
  double t9968;
  double t9970;
  double t9975;
  double t11377;
  double t11379;
  double t11433;
  double t11555;
  double t11619;
  double t11792;
  double t4463;
  double t5580;
  double t5581;
  double t6459;
  double t6634;
  double t12555;
  double t12556;
  double t5493;
  double t5537;
  double t5548;
  double t7187;
  double t7470;
  double t7951;
  double t7952;
  double t9145;
  double t9603;
  double t9650;
  double t9693;
  double t9731;
  double t9812;
  double t9816;
  double t9945;
  double t9956;
  double t9957;
  double t9959;
  double t9961;
  double t9962;
  double t12383;
  double t12391;
  double t12395;
  double t9979;
  double t11444;
  double t11466;
  double t12014;
  double t12033;
  double t12035;
  double t12277;
  double t12300;
  double t12458;
  double t12459;
  double t12460;
  double t12480;
  double t12516;
  double t12638;
  double t12642;
  double t12643;
  double t12571;
  double t12576;
  double t12577;
  double t12592;
  double t12593;
  double t12594;
  double t12595;
  double t12596;
  double t12599;
  double t12600;
  double t12603;
  double t12604;
  double t12605;
  double t12606;
  double t12607;
  double t12616;
  double t12623;
  double t12628;
  double t12710;
  double t12711;
  double t12637;
  double t12713;
  double t12714;
  double t12649;
  double t12662;
  double t12720;
  double t12721;
  double t12671;
  double t12743;
  double t12748;
  double t12749;
  double t12750;
  double t12751;
  double t12753;
  double t12754;
  double t12755;
  double t12756;
  double t12757;
  double t12758;
  double t12759;
  double t12760;
  double t12761;
  double t12763;
  double t12764;
  double t12765;
  double t12766;
  double t12767;
  double t12768;
  double t9053;
  double t9192;
  double t8672;
  double t8674;
  double t8273;
  double t8681;
  double t8689;
  double t8691;
  double t9245;
  double t9325;
  double t9493;
  double t12786;
  double t12791;
  double t12792;
  double t12601;
  double t12800;
  double t12630;
  double t12636;
  double t12644;
  double t12645;
  double t12650;
  double t12661;
  double t12663;
  double t12669;
  double t12670;
  double t12675;
  double t12809;
  double t12684;
  double t12692;
  double t12693;
  double t12810;
  double t12695;
  double t12696;
  double t12701;
  double t12811;
  double t12814;
  double t12815;
  double t12816;
  double t12817;
  double t12818;
  double t12819;
  double t12705;
  double t12823;
  double t12712;
  double t12715;
  double t12716;
  double t12825;
  double t12718;
  double t12719;
  double t12722;
  double t12723;
  double t12724;
  double t12725;
  double t12728;
  double t12729;
  double t12730;
  double t12732;
  double t12733;
  double t12734;
  double t12735;
  double t12736;
  double t12737;
  double t12762;
  double t11554;
  double t12301;
  double t12414;
  double t12533;
  double t12536;
  double t4059;
  double t5578;
  double t6764;
  double t6767;
  double t12850;
  double t12851;
  double t12544;
  double t12801;
  double t12802;
  double t12803;
  double t12804;
  double t12805;
  double t12629;
  double t12651;
  double t12656;
  double t12676;
  double t12677;
  double t12824;
  double t12826;
  double t12827;
  double t12828;
  double t12829;
  double t12709;
  double t12717;
  double t12726;
  double t12727;
  double t12731;
  double t12738;
  double t12739;
  double t12840;
  double t12841;
  double t12842;
  double t12843;
  double t12844;
  double t12845;
  double t12846;
  double t12769;
  double t12853;
  double t12897;
  double t12898;
  double t12899;
  double t12787;
  double t12788;
  double t12789;
  double t12812;
  double t12587;
  double t12864;
  double t12865;
  double t12866;
  double t12833;
  double t12834;
  double t12835;
  double t12694;
  double t12702;
  double t12703;
  double t12881;
  double t12882;
  double t12883;
  double t12884;
  double t12885;
  double t12775;
  double t12776;
  double t12777;
  double t12778;
  double t6775;
  double t12902;
  double t12903;
  double t12904;
  double t12935;
  double t12936;
  double t12784;
  double t12858;
  double t12910;
  t406 = Cos(var1[3]);
  t255 = Cos(var1[4]);
  t304 = Sin(var1[3]);
  t478 = Sin(var1[4]);
  t2617 = Cos(var1[2]);
  t254 = Sin(var1[2]);
  t341 = -1.*t255*t304;
  t490 = -1.*t406*t478;
  t493 = t341 + t490;
  t4464 = -1.*t255;
  t4516 = 1. + t4464;
  t4531 = 0.4*t4516;
  t4729 = 0.64*t255;
  t5282 = t4531 + t4729;
  t509 = -1.*t254*t493;
  t2905 = -1.*t406*t255;
  t2998 = t304*t478;
  t2999 = t2905 + t2998;
  t3098 = t2617*t2999;
  t3700 = t509 + t3098;
  t6985 = t2617*t406;
  t6989 = -1.*t254*t304;
  t7157 = t6985 + t6989;
  t6977 = -1.*t406*t254;
  t6978 = -1.*t2617*t304;
  t6983 = t6977 + t6978;
  t4201 = -1.*t2617*t406;
  t4357 = t254*t304;
  t4414 = t4201 + t4357;
  t7217 = t406*t254;
  t7218 = t2617*t304;
  t7243 = t7217 + t7218;
  t5555 = t406*t255;
  t5556 = -1.*t304*t478;
  t5570 = t5555 + t5556;
  t5550 = t2617*t493;
  t5575 = -1.*t254*t5570;
  t5577 = t5550 + t5575;
  t8240 = t2617*t5570;
  t7956 = t255*t304;
  t8125 = t406*t478;
  t8183 = t7956 + t8125;
  t8360 = t254*t493;
  t8671 = t8360 + t8240;
  t8682 = -1.*t2617*t5570;
  t8683 = t509 + t8682;
  t8204 = -1.*t254*t8183;
  t8262 = t8204 + t8240;
  t8685 = t2617*t8183;
  t8686 = t254*t5570;
  t8687 = t8685 + t8686;
  t9269 = t254*t2999;
  t9303 = t5550 + t9269;
  t9968 = t5282*t304;
  t9970 = 0.24*t406*t478;
  t9975 = t9968 + t9970;
  t11377 = t406*t5282;
  t11379 = -0.24*t304*t478;
  t11433 = t11377 + t11379;
  t11555 = -1.*t5282*t304;
  t11619 = -0.24*t406*t478;
  t11792 = t11555 + t11619;
  t4463 = 0.748*t4414;
  t5580 = t5282*t255;
  t5581 = Power(t478,2);
  t6459 = 0.24*t5581;
  t6634 = t5580 + t6459;
  t12555 = t254*t8183;
  t12556 = t12555 + t3098;
  t5493 = t5282*t478;
  t5537 = -0.24*t255*t478;
  t5548 = t5493 + t5537;
  t7187 = 20.4*t6983*t7157;
  t7470 = 6.8*t7243*t7157;
  t7951 = 20.4*t6983*t4414;
  t7952 = 6.8*t7243*t4414;
  t9145 = -1.*t254*t2999;
  t9603 = Power(t6983,2);
  t9650 = 13.6*t9603;
  t9693 = 13.6*t6983*t7243;
  t9731 = Power(t7157,2);
  t9812 = 13.6*t9731;
  t9816 = 13.6*t7157*t4414;
  t9945 = Power(t406,2);
  t9956 = 0.11*t9945;
  t9957 = Power(t304,2);
  t9959 = 0.11*t9957;
  t9961 = t9956 + t9959;
  t9962 = 6.8*t4414*t9961;
  t12383 = t9975*t8183;
  t12391 = t5570*t11433;
  t12395 = t12383 + t12391;
  t9979 = -1.*t9975*t5570;
  t11444 = -1.*t493*t11433;
  t11466 = t9979 + t11444;
  t12014 = t11792*t5570;
  t12033 = t9975*t5570;
  t12035 = t493*t11433;
  t12277 = t8183*t11433;
  t12300 = t12014 + t12033 + t12035 + t12277;
  t12458 = -1.*t493*t11792;
  t12459 = -1.*t493*t9975;
  t12460 = -1.*t5570*t11433;
  t12480 = -1.*t11433*t2999;
  t12516 = t12458 + t12459 + t12460 + t12480;
  t12638 = -1.*t406*t5282;
  t12642 = 0.24*t304*t478;
  t12643 = t12638 + t12642;
  t12571 = -0.384*var2[4]*t12556;
  t12576 = 3.2*t6634*t12556;
  t12577 = 3.2*t5548*t9303;
  t12592 = 6.4*t8671*t5577;
  t12593 = 3.2*t8687*t3700;
  t12594 = 3.2*t5577*t12556;
  t12595 = t8685 + t9145;
  t12596 = 3.2*t8671*t12595;
  t12599 = 3.2*t8262*t9303;
  t12600 = 6.4*t3700*t9303;
  t12603 = Power(t8671,2);
  t12604 = 6.4*t12603;
  t12605 = 6.4*t8671*t12556;
  t12606 = 6.4*t8687*t9303;
  t12607 = Power(t9303,2);
  t12616 = 6.4*t12607;
  t12623 = 3.2*t12395*t12556;
  t12628 = 3.2*t11466*t9303;
  t12710 = -0.24*t255*t304;
  t12711 = t12710 + t11619;
  t12637 = -1.*t8183*t11433;
  t12713 = 0.24*t406*t255;
  t12714 = t12713 + t11379;
  t12649 = -1.*t9975*t2999;
  t12662 = t493*t9975;
  t12720 = -0.24*t406*t255;
  t12721 = t12720 + t12642;
  t12671 = t11433*t2999;
  t12743 = 13.6*t6983*t7157;
  t12748 = 13.6*t7243*t7157;
  t12749 = 6.4*t8671*t8687;
  t12750 = 6.4*t8671*t9303;
  t12751 = t12743 + t12748 + t12749 + t12750;
  t12753 = 6.8*t9603;
  t12754 = 6.8*t6983*t7243;
  t12755 = 6.8*t9731;
  t12756 = 6.8*t7157*t4414;
  t12757 = 3.2*t8671*t8262;
  t12758 = 3.2*t5577*t8687;
  t12759 = 3.2*t8671*t3700;
  t12760 = 3.2*t5577*t9303;
  t12761 = t12753 + t12754 + t12755 + t12756 + t12757 + t12758 + t12759 + t12760;
  t12763 = 6.8*t6983*t9961;
  t12764 = 3.2*t8671*t11466;
  t12765 = 3.2*t8671*t12300;
  t12766 = 3.2*t12395*t9303;
  t12767 = 3.2*t8687*t12516;
  t12768 = t12763 + t12764 + t12765 + t12766 + t12767;
  t9053 = -1.*t2617*t493;
  t9192 = t9053 + t9145;
  t8672 = -1.*t2617*t8183;
  t8674 = t8672 + t5575;
  t8273 = 6.4*t8262*t5577;
  t8681 = 3.2*t8671*t8674;
  t8689 = 3.2*t8683*t8687;
  t8691 = 6.4*t5577*t3700;
  t9245 = 3.2*t8671*t9192;
  t9325 = 3.2*t8683*t9303;
  t9493 = t7187 + t7470 + t7951 + t7952 + t8273 + t8681 + t8689 + t8691 + t9245 + t9325;
  t12786 = 0.748*t7243;
  t12791 = Power(t4414,2);
  t12792 = 13.6*t12791;
  t12601 = t7187 + t7470 + t7951 + t7952 + t12592 + t12593 + t12594 + t12596 + t12599 + t12600;
  t12800 = 6.8*t7243*t9961;
  t12630 = -1.*t11792*t5570;
  t12636 = -2.*t493*t11433;
  t12644 = -1.*t493*t12643;
  t12645 = -2.*t11792*t2999;
  t12650 = t12630 + t12636 + t12637 + t12644 + t12645 + t12649;
  t12661 = 2.*t493*t11792;
  t12663 = t11792*t8183;
  t12669 = 2.*t5570*t11433;
  t12670 = t5570*t12643;
  t12675 = t12661 + t12662 + t12663 + t12669 + t12670 + t12671;
  t12809 = -0.384*var2[4]*t12595;
  t12684 = Power(t255,2);
  t12692 = -0.24*t12684;
  t12693 = t5580 + t12692;
  t12810 = 3.2*t5548*t3700;
  t12695 = -1.*t5282*t478;
  t12696 = 0.24*t255*t478;
  t12701 = t12695 + t12696;
  t12811 = 3.2*t6634*t12595;
  t12814 = Power(t5577,2);
  t12815 = 6.4*t12814;
  t12816 = 6.4*t8262*t3700;
  t12817 = Power(t3700,2);
  t12818 = 6.4*t12817;
  t12819 = 6.4*t5577*t12595;
  t12705 = t12592 + t12593 + t12594 + t12596 + t12599 + t12600;
  t12823 = 3.2*t11466*t3700;
  t12712 = t12711*t5570;
  t12715 = t8183*t12714;
  t12716 = t12712 + t12033 + t12035 + t12715;
  t12825 = 3.2*t12395*t12595;
  t12718 = -1.*t12711*t5570;
  t12719 = -1.*t493*t12714;
  t12722 = -1.*t493*t12721;
  t12723 = -1.*t11792*t2999;
  t12724 = -1.*t12711*t2999;
  t12725 = t12718 + t11444 + t12637 + t12719 + t12722 + t12723 + t12724 + t12649;
  t12728 = -1.*t493*t12711;
  t12729 = -1.*t5570*t12714;
  t12730 = t12728 + t12459 + t12729 + t12480;
  t12732 = t493*t11792;
  t12733 = t493*t12711;
  t12734 = t12711*t8183;
  t12735 = t5570*t12714;
  t12736 = t5570*t12721;
  t12737 = t12732 + t12733 + t12662 + t12734 + t12391 + t12735 + t12736 + t12671;
  t12762 = -0.5*var2[3]*t12761;
  t11554 = 3.2*t5577*t11466;
  t12301 = 3.2*t5577*t12300;
  t12414 = 3.2*t12395*t3700;
  t12533 = 3.2*t8262*t12516;
  t12536 = t9962 + t11554 + t12301 + t12414 + t12533;
  t4059 = -0.384*var2[4]*t3700;
  t5578 = 3.2*t5548*t5577;
  t6764 = 3.2*t6634*t3700;
  t6767 = t4463 + t5578 + t6764;
  t12850 = 13.6*t6983*t4414;
  t12851 = t12743 + t12850 + t8273 + t8691;
  t12544 = -0.5*var2[2]*t12536;
  t12801 = 3.2*t8683*t11466;
  t12802 = 3.2*t8683*t12300;
  t12803 = 3.2*t12395*t9192;
  t12804 = 3.2*t8674*t12516;
  t12805 = t12800 + t12801 + t12802 + t12803 + t12804;
  t12629 = 6.4*t12300*t9303;
  t12651 = 3.2*t8687*t12650;
  t12656 = 6.4*t8671*t12516;
  t12676 = 3.2*t8671*t12675;
  t12677 = t9962 + t12623 + t12628 + t12629 + t12651 + t12656 + t12676;
  t12824 = 6.4*t12300*t3700;
  t12826 = 3.2*t8262*t12650;
  t12827 = 6.4*t5577*t12516;
  t12828 = 3.2*t5577*t12675;
  t12829 = t12800 + t12823 + t12824 + t12825 + t12826 + t12827 + t12828;
  t12709 = 3.2*t12300*t9303;
  t12717 = 3.2*t12716*t9303;
  t12726 = 3.2*t8687*t12725;
  t12727 = 3.2*t8671*t12516;
  t12731 = 3.2*t8671*t12730;
  t12738 = 3.2*t8671*t12737;
  t12739 = t12623 + t12628 + t12709 + t12717 + t12726 + t12727 + t12731 + t12738;
  t12840 = 3.2*t12300*t3700;
  t12841 = 3.2*t12716*t3700;
  t12842 = 3.2*t8262*t12725;
  t12843 = 3.2*t5577*t12516;
  t12844 = 3.2*t5577*t12730;
  t12845 = 3.2*t5577*t12737;
  t12846 = t12823 + t12840 + t12841 + t12825 + t12842 + t12843 + t12844 + t12845;
  t12769 = -0.5*var2[3]*t12768;
  t12853 = -0.5*var2[3]*t12536;
  t12897 = 6.4*t12300*t12395;
  t12898 = 6.4*t11466*t12516;
  t12899 = t12897 + t12898;
  t12787 = 3.2*t5548*t8683;
  t12788 = 3.2*t6634*t9192;
  t12789 = t12786 + t12787 + t12788;
  t12812 = t12786 + t12810 + t12811;
  t12587 = t4463 + t12576 + t12577;
  t12864 = 3.2*t5548*t12650;
  t12865 = 3.2*t6634*t12675;
  t12866 = t12864 + t12865;
  t12833 = 3.2*t12693*t5577;
  t12834 = 3.2*t12701*t3700;
  t12835 = t12833 + t12810 + t12834 + t12811;
  t12694 = 3.2*t12693*t8671;
  t12702 = 3.2*t12701*t9303;
  t12703 = t12694 + t12576 + t12577 + t12702;
  t12881 = 3.2*t12701*t12300;
  t12882 = 3.2*t5548*t12725;
  t12883 = 3.2*t12693*t12516;
  t12884 = 3.2*t6634*t12737;
  t12885 = t12881 + t12882 + t12883 + t12884;
  t12775 = 0.748*t6983;
  t12776 = 3.2*t5548*t8671;
  t12777 = 3.2*t6634*t9303;
  t12778 = t12775 + t12776 + t12777;
  t6775 = -0.5*var2[3]*t6767;
  t12902 = 3.2*t6634*t12300;
  t12903 = 3.2*t5548*t12516;
  t12904 = t12902 + t12903;
  t12935 = -0.384*var2[0]*t12556;
  t12936 = -0.384*var2[1]*t12595;
  t12784 = -0.384*var2[3]*t9303;
  t12858 = -0.384*var2[3]*t3700;
  t12910 = -0.384*var2[3]*t12300;
  p_output1[0]=(t12544 + t4059 + t6775 - 0.5*(6.4*t3700*t8671 + 6.4*t8262*t8671 + 6.4*t5577*t8687 + 6.4*t5577*t9303 + t9650 + t9693 + t9812 + t9816)*var2[0] - 0.5*t9493*var2[1])*var2[3];
  p_output1[1]=var2[3]*(t12571 - 0.5*(t12604 + t12605 + t12606 + t12616 + t9650 + t9693 + t9812 + t9816)*var2[0] - 0.5*t12601*var2[1] - 0.5*t12677*var2[2] - 0.5*t12587*var2[3]);
  p_output1[2]=var2[3]*(t12571 - 0.5*(t12604 + t12605 + t12606 + t12616)*var2[0] - 0.5*t12705*var2[1] - 0.5*t12739*var2[2] - 0.5*t12703*var2[3]);
  p_output1[3]=-0.5*t12751*var2[3];
  p_output1[4]=t12762;
  p_output1[5]=t12769;
  p_output1[6]=-0.5*t12751*var2[0] - 0.5*t12761*var2[1] - 0.5*t12768*var2[2] - 1.*t12778*var2[3] - 0.384*t9303*var2[4];
  p_output1[7]=t12784;
  p_output1[8]=var2[3]*(-0.5*t9493*var2[0] - 0.5*(t12792 + 6.4*t5577*t8674 + 6.4*t3700*t8683 + 6.4*t8262*t8683 + 6.4*t5577*t9192 + t9650 + t9693 + t9816)*var2[1] - 0.5*t12805*var2[2] - 0.5*t12789*var2[3] - 0.384*t9192*var2[4]);
  p_output1[9]=var2[3]*(t12809 - 0.5*t12601*var2[0] - 0.5*(t12792 + t12815 + t12816 + t12818 + t12819 + t9650 + t9693 + t9816)*var2[1] - 0.5*t12829*var2[2] - 0.5*t12812*var2[3]);
  p_output1[10]=var2[3]*(t12809 - 0.5*t12705*var2[0] - 0.5*(t12815 + t12816 + t12818 + t12819)*var2[1] - 0.5*t12846*var2[2] - 0.5*t12835*var2[3]);
  p_output1[11]=t12762;
  p_output1[12]=-0.5*t12851*var2[3];
  p_output1[13]=t12853;
  p_output1[14]=t12544 + t4059 - 0.5*t12761*var2[0] - 0.5*t12851*var2[1] - 1.*t6767*var2[3];
  p_output1[15]=t12858;
  p_output1[16]=(-0.5*t12536*var2[0] - 0.5*t12805*var2[1])*var2[3];
  p_output1[17]=var2[3]*(-0.5*t12677*var2[0] - 0.5*t12829*var2[1] - 0.5*(6.4*Power(t12300,2) + 6.4*Power(t12516,2) + 6.4*t11466*t12650 + 6.4*t12395*t12675)*var2[2] - 0.5*t12866*var2[3] - 0.384*t12675*var2[4]);
  p_output1[18]=var2[3]*(-0.5*t12739*var2[0] - 0.5*t12846*var2[1] - 0.5*(6.4*t12300*t12716 + 6.4*t11466*t12725 + 6.4*t12516*t12730 + 6.4*t12395*t12737)*var2[2] - 0.5*t12885*var2[3] - 0.384*t12737*var2[4]);
  p_output1[19]=t12769;
  p_output1[20]=t12853;
  p_output1[21]=-0.5*t12899*var2[3];
  p_output1[22]=-0.5*t12768*var2[0] - 0.5*t12536*var2[1] - 0.5*t12899*var2[2] - 1.*t12904*var2[3] - 0.384*t12300*var2[4];
  p_output1[23]=t12910;
  p_output1[24]=(-0.5*t6767*var2[0] - 0.5*t12789*var2[1])*var2[3];
  p_output1[25]=(-0.5*t12587*var2[0] - 0.5*t12812*var2[1] - 0.5*t12866*var2[2])*var2[3];
  p_output1[26]=(-0.5*t12703*var2[0] - 0.5*t12835*var2[1] - 0.5*t12885*var2[2])*var2[3];
  p_output1[27]=-0.5*t12778*var2[3];
  p_output1[28]=t6775;
  p_output1[29]=-0.5*t12904*var2[3];
  p_output1[30]=-0.5*t12778*var2[0] - 0.5*t6767*var2[1] - 0.5*t12904*var2[2];
  p_output1[31]=(-0.384*t3700*var2[0] - 0.384*t9192*var2[1])*var2[3];
  p_output1[32]=(t12935 + t12936 - 0.384*t12675*var2[2])*var2[3];
  p_output1[33]=(t12935 + t12936 - 0.384*t12737*var2[2])*var2[3];
  p_output1[34]=t12784;
  p_output1[35]=t12858;
  p_output1[36]=t12910;
  p_output1[37]=-0.384*t9303*var2[0] - 0.384*t3700*var2[1] - 0.384*t12300*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 38, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec4_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
