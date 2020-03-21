/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:14 GMT-04:00
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
  double t11532;
  double t9099;
  double t9457;
  double t11533;
  double t11549;
  double t8215;
  double t11550;
  double t11551;
  double t11552;
  double t11602;
  double t11624;
  double t11625;
  double t11626;
  double t11627;
  double t11531;
  double t11546;
  double t11547;
  double t11548;
  double t11553;
  double t11554;
  double t11666;
  double t11663;
  double t11664;
  double t11667;
  double t11671;
  double t11672;
  double t11673;
  double t11685;
  double t11686;
  double t11687;
  double t11688;
  double t11689;
  double t11665;
  double t11668;
  double t11669;
  double t11670;
  double t11674;
  double t11675;
  double t11566;
  double t11567;
  double t11574;
  double t11707;
  double t11708;
  double t11709;
  double t11650;
  double t11640;
  double t11641;
  double t11642;
  double t11643;
  double t11654;
  double t11679;
  double t11682;
  double t11683;
  double t11722;
  double t11723;
  double t11724;
  double t11697;
  double t11693;
  double t11694;
  double t11695;
  double t11696;
  double t11698;
  double t11711;
  double t11712;
  double t11713;
  double t11715;
  double t11716;
  double t11718;
  double t11719;
  double t11720;
  double t11726;
  double t11727;
  double t11728;
  double t11730;
  double t11731;
  double t11733;
  double t11734;
  double t11735;
  double t11788;
  double t11789;
  double t11790;
  double t11792;
  double t11793;
  double t11794;
  double t11808;
  double t11809;
  double t11810;
  double t11812;
  double t11813;
  double t11814;
  double t11583;
  double t11629;
  double t11638;
  double t11639;
  double t11656;
  double t11657;
  double t11658;
  double t11659;
  double t11825;
  double t11826;
  double t11827;
  double t11828;
  double t11829;
  double t11710;
  double t11714;
  double t11739;
  double t11740;
  double t11741;
  double t11742;
  double t11743;
  double t11744;
  double t11745;
  double t11746;
  double t11747;
  double t11748;
  double t11782;
  double t11783;
  double t11784;
  double t11785;
  double t11786;
  double t11787;
  double t11791;
  double t11795;
  double t11796;
  double t11798;
  double t11799;
  double t11800;
  double t11848;
  double t11849;
  double t11850;
  double t11830;
  double t11831;
  double t11832;
  double t11835;
  double t11836;
  double t11839;
  double t11840;
  double t11841;
  double t11842;
  double t11843;
  double t11844;
  double t11847;
  double t11852;
  double t11853;
  double t11857;
  double t11881;
  double t11882;
  double t11859;
  double t11884;
  double t11885;
  double t11861;
  double t11684;
  double t11690;
  double t11691;
  double t11692;
  double t11700;
  double t11701;
  double t11702;
  double t11703;
  double t11896;
  double t11897;
  double t11898;
  double t11899;
  double t11900;
  double t11725;
  double t11729;
  double t11759;
  double t11760;
  double t11761;
  double t11762;
  double t11763;
  double t11764;
  double t11765;
  double t11766;
  double t11767;
  double t11768;
  double t11802;
  double t11803;
  double t11804;
  double t11805;
  double t11806;
  double t11807;
  double t11811;
  double t11815;
  double t11816;
  double t11818;
  double t11819;
  double t11820;
  double t11919;
  double t11920;
  double t11921;
  double t11901;
  double t11902;
  double t11903;
  double t11906;
  double t11907;
  double t11910;
  double t11911;
  double t11912;
  double t11913;
  double t11914;
  double t11915;
  double t11918;
  double t11923;
  double t11924;
  double t11928;
  double t11952;
  double t11953;
  double t11930;
  double t11955;
  double t11956;
  double t11932;
  double t11749;
  double t11750;
  double t11756;
  double t11757;
  double t11769;
  double t11770;
  double t11776;
  double t11777;
  double t11751;
  double t11752;
  double t11753;
  double t11754;
  double t11755;
  double t11758;
  double t11771;
  double t11772;
  double t11773;
  double t11774;
  double t11775;
  double t11778;
  double t11779;
  double t12012;
  double t12023;
  double t11845;
  double t12033;
  double t11851;
  double t11854;
  double t11855;
  double t11858;
  double t11860;
  double t11862;
  double t12042;
  double t11871;
  double t11872;
  double t11873;
  double t12043;
  double t11867;
  double t11868;
  double t11869;
  double t12044;
  double t12047;
  double t12048;
  double t11879;
  double t12052;
  double t11883;
  double t11886;
  double t11887;
  double t12054;
  double t11889;
  double t11890;
  double t11891;
  double t12018;
  double t12026;
  double t11916;
  double t12036;
  double t11922;
  double t11925;
  double t11926;
  double t11929;
  double t11931;
  double t11933;
  double t12071;
  double t11942;
  double t11943;
  double t11944;
  double t12072;
  double t11938;
  double t11939;
  double t11940;
  double t12073;
  double t12076;
  double t12077;
  double t11950;
  double t12081;
  double t11954;
  double t11957;
  double t11958;
  double t12083;
  double t11960;
  double t11961;
  double t11962;
  double t11984;
  double t11985;
  double t11986;
  double t11987;
  double t11988;
  double t11989;
  double t11990;
  double t11991;
  double t11992;
  double t11967;
  double t11968;
  double t11969;
  double t11970;
  double t11781;
  double t11797;
  double t11801;
  double t11817;
  double t11821;
  double t11822;
  double t11655;
  double t11660;
  double t11661;
  double t11699;
  double t11704;
  double t11705;
  double t12032;
  double t12034;
  double t12035;
  double t12037;
  double t12038;
  double t12039;
  double t12053;
  double t12055;
  double t12056;
  double t11856;
  double t11863;
  double t11864;
  double t12066;
  double t12067;
  double t12068;
  double t11888;
  double t11892;
  double t11893;
  double t12082;
  double t12084;
  double t12085;
  double t11927;
  double t11934;
  double t11935;
  double t12095;
  double t12096;
  double t12097;
  double t11959;
  double t11963;
  double t11964;
  double t11993;
  double t11994;
  double t11995;
  double t11996;
  double t11997;
  double t11998;
  double t11999;
  double t12000;
  double t12013;
  double t12014;
  double t12015;
  double t12045;
  double t11833;
  double t12107;
  double t12108;
  double t12109;
  double t12059;
  double t12060;
  double t12061;
  double t11870;
  double t11874;
  double t11875;
  double t12119;
  double t12120;
  double t12121;
  double t12122;
  double t12123;
  double t12001;
  double t12002;
  double t12003;
  double t12004;
  double t12171;
  double t12172;
  double t12173;
  double t12174;
  double t12210;
  double t12211;
  double t12005;
  double t12101;
  double t12175;
  double t12176;
  double t12204;
  double t12205;
  double t12019;
  double t12020;
  double t12021;
  double t12074;
  double t11904;
  double t12133;
  double t12134;
  double t12135;
  double t12088;
  double t12089;
  double t12090;
  double t11941;
  double t11945;
  double t11946;
  double t12145;
  double t12146;
  double t12147;
  double t12148;
  double t12149;
  double t12006;
  double t12007;
  double t12008;
  double t12009;
  double t12177;
  double t12178;
  double t12179;
  double t12180;
  double t12243;
  double t12244;
  double t12010;
  double t12102;
  double t12181;
  double t12182;
  double t12237;
  double t12238;
  t11532 = Cos(var1[3]);
  t9099 = Cos(var1[4]);
  t9457 = Sin(var1[3]);
  t11533 = Sin(var1[4]);
  t11549 = Sin(var1[2]);
  t8215 = Cos(var1[2]);
  t11550 = t11532*t9099;
  t11551 = -1.*t9457*t11533;
  t11552 = t11550 + t11551;
  t11602 = -1.*t9099;
  t11624 = 1. + t11602;
  t11625 = 0.4*t11624;
  t11626 = 0.64*t9099;
  t11627 = t11625 + t11626;
  t11531 = -1.*t9099*t9457;
  t11546 = -1.*t11532*t11533;
  t11547 = t11531 + t11546;
  t11548 = t8215*t11547;
  t11553 = -1.*t11549*t11552;
  t11554 = t11548 + t11553;
  t11666 = Cos(var1[5]);
  t11663 = Cos(var1[6]);
  t11664 = Sin(var1[5]);
  t11667 = Sin(var1[6]);
  t11671 = t11666*t11663;
  t11672 = -1.*t11664*t11667;
  t11673 = t11671 + t11672;
  t11685 = -1.*t11663;
  t11686 = 1. + t11685;
  t11687 = 0.4*t11686;
  t11688 = 0.64*t11663;
  t11689 = t11687 + t11688;
  t11665 = -1.*t11663*t11664;
  t11668 = -1.*t11666*t11667;
  t11669 = t11665 + t11668;
  t11670 = t8215*t11669;
  t11674 = -1.*t11549*t11673;
  t11675 = t11670 + t11674;
  t11566 = -1.*t11532*t11549;
  t11567 = -1.*t8215*t9457;
  t11574 = t11566 + t11567;
  t11707 = t8215*t11532;
  t11708 = -1.*t11549*t9457;
  t11709 = t11707 + t11708;
  t11650 = t8215*t11552;
  t11640 = t9099*t9457;
  t11641 = t11532*t11533;
  t11642 = t11640 + t11641;
  t11643 = -1.*t11549*t11642;
  t11654 = t11643 + t11650;
  t11679 = -1.*t11666*t11549;
  t11682 = -1.*t8215*t11664;
  t11683 = t11679 + t11682;
  t11722 = t8215*t11666;
  t11723 = -1.*t11549*t11664;
  t11724 = t11722 + t11723;
  t11697 = t8215*t11673;
  t11693 = t11663*t11664;
  t11694 = t11666*t11667;
  t11695 = t11693 + t11694;
  t11696 = -1.*t11549*t11695;
  t11698 = t11696 + t11697;
  t11711 = t11532*t11549;
  t11712 = t8215*t9457;
  t11713 = t11711 + t11712;
  t11715 = t11549*t11547;
  t11716 = t11715 + t11650;
  t11718 = t8215*t11642;
  t11719 = t11549*t11552;
  t11720 = t11718 + t11719;
  t11726 = t11666*t11549;
  t11727 = t8215*t11664;
  t11728 = t11726 + t11727;
  t11730 = t11549*t11669;
  t11731 = t11730 + t11697;
  t11733 = t8215*t11695;
  t11734 = t11549*t11673;
  t11735 = t11733 + t11734;
  t11788 = t11627*t9457;
  t11789 = 0.24*t11532*t11533;
  t11790 = t11788 + t11789;
  t11792 = t11532*t11627;
  t11793 = -0.24*t9457*t11533;
  t11794 = t11792 + t11793;
  t11808 = t11689*t11664;
  t11809 = 0.24*t11666*t11667;
  t11810 = t11808 + t11809;
  t11812 = t11666*t11689;
  t11813 = -0.24*t11664*t11667;
  t11814 = t11812 + t11813;
  t11583 = -0.748*t11574;
  t11629 = t11627*t11533;
  t11638 = -0.24*t9099*t11533;
  t11639 = t11629 + t11638;
  t11656 = t11627*t9099;
  t11657 = Power(t11533,2);
  t11658 = 0.24*t11657;
  t11659 = t11656 + t11658;
  t11825 = -1.*t11532*t9099;
  t11826 = t9457*t11533;
  t11827 = t11825 + t11826;
  t11828 = t11549*t11827;
  t11829 = t11548 + t11828;
  t11710 = -13.6*t11574*t11709;
  t11714 = -13.6*t11713*t11709;
  t11739 = Power(t11574,2);
  t11740 = -6.8*t11739;
  t11741 = -6.8*t11574*t11713;
  t11742 = Power(t11709,2);
  t11743 = -6.8*t11742;
  t11744 = -1.*t8215*t11532;
  t11745 = t11549*t9457;
  t11746 = t11744 + t11745;
  t11747 = -6.8*t11709*t11746;
  t11748 = -1.*t11549*t11547;
  t11782 = Power(t11532,2);
  t11783 = 0.11*t11782;
  t11784 = Power(t9457,2);
  t11785 = 0.11*t11784;
  t11786 = t11783 + t11785;
  t11787 = -6.8*t11574*t11786;
  t11791 = -1.*t11790*t11552;
  t11795 = -1.*t11547*t11794;
  t11796 = t11791 + t11795;
  t11798 = t11790*t11642;
  t11799 = t11552*t11794;
  t11800 = t11798 + t11799;
  t11848 = -1.*t11627*t9457;
  t11849 = -0.24*t11532*t11533;
  t11850 = t11848 + t11849;
  t11830 = -0.768*var2[4]*t11829;
  t11831 = -3.2*t11639*t11716;
  t11832 = -3.2*t11659*t11829;
  t11835 = -6.4*t11716*t11720;
  t11836 = -6.4*t11716*t11829;
  t11839 = -3.2*t11716*t11654;
  t11840 = -3.2*t11554*t11720;
  t11841 = t8215*t11827;
  t11842 = t11748 + t11841;
  t11843 = -3.2*t11716*t11842;
  t11844 = -3.2*t11554*t11829;
  t11847 = -3.2*t11716*t11796;
  t11852 = t11790*t11552;
  t11853 = t11547*t11794;
  t11857 = -3.2*t11800*t11829;
  t11881 = -0.24*t9099*t9457;
  t11882 = t11881 + t11849;
  t11859 = -1.*t11547*t11790;
  t11884 = 0.24*t11532*t9099;
  t11885 = t11884 + t11793;
  t11861 = -1.*t11794*t11827;
  t11684 = -0.748*t11683;
  t11690 = t11689*t11667;
  t11691 = -0.24*t11663*t11667;
  t11692 = t11690 + t11691;
  t11700 = t11689*t11663;
  t11701 = Power(t11667,2);
  t11702 = 0.24*t11701;
  t11703 = t11700 + t11702;
  t11896 = -1.*t11666*t11663;
  t11897 = t11664*t11667;
  t11898 = t11896 + t11897;
  t11899 = t11549*t11898;
  t11900 = t11670 + t11899;
  t11725 = -13.6*t11683*t11724;
  t11729 = -13.6*t11728*t11724;
  t11759 = Power(t11683,2);
  t11760 = -6.8*t11759;
  t11761 = -6.8*t11683*t11728;
  t11762 = Power(t11724,2);
  t11763 = -6.8*t11762;
  t11764 = -1.*t8215*t11666;
  t11765 = t11549*t11664;
  t11766 = t11764 + t11765;
  t11767 = -6.8*t11724*t11766;
  t11768 = -1.*t11549*t11669;
  t11802 = Power(t11666,2);
  t11803 = 0.11*t11802;
  t11804 = Power(t11664,2);
  t11805 = 0.11*t11804;
  t11806 = t11803 + t11805;
  t11807 = -6.8*t11683*t11806;
  t11811 = -1.*t11810*t11673;
  t11815 = -1.*t11669*t11814;
  t11816 = t11811 + t11815;
  t11818 = t11810*t11695;
  t11819 = t11673*t11814;
  t11820 = t11818 + t11819;
  t11919 = -1.*t11689*t11664;
  t11920 = -0.24*t11666*t11667;
  t11921 = t11919 + t11920;
  t11901 = -0.768*var2[6]*t11900;
  t11902 = -3.2*t11692*t11731;
  t11903 = -3.2*t11703*t11900;
  t11906 = -6.4*t11731*t11735;
  t11907 = -6.4*t11731*t11900;
  t11910 = -3.2*t11731*t11698;
  t11911 = -3.2*t11675*t11735;
  t11912 = t8215*t11898;
  t11913 = t11768 + t11912;
  t11914 = -3.2*t11731*t11913;
  t11915 = -3.2*t11675*t11900;
  t11918 = -3.2*t11731*t11816;
  t11923 = t11810*t11673;
  t11924 = t11669*t11814;
  t11928 = -3.2*t11820*t11900;
  t11952 = -0.24*t11663*t11664;
  t11953 = t11952 + t11920;
  t11930 = -1.*t11669*t11810;
  t11955 = 0.24*t11666*t11663;
  t11956 = t11955 + t11813;
  t11932 = -1.*t11814*t11898;
  t11749 = -1.*t8215*t11552;
  t11750 = t11748 + t11749;
  t11756 = -1.*t8215*t11642;
  t11757 = t11756 + t11553;
  t11769 = -1.*t8215*t11673;
  t11770 = t11768 + t11769;
  t11776 = -1.*t8215*t11695;
  t11777 = t11776 + t11674;
  t11751 = -3.2*t11750*t11716;
  t11752 = Power(t11654,2);
  t11753 = -3.2*t11752;
  t11754 = Power(t11554,2);
  t11755 = -3.2*t11754;
  t11758 = -3.2*t11757*t11720;
  t11771 = -3.2*t11770*t11731;
  t11772 = Power(t11698,2);
  t11773 = -3.2*t11772;
  t11774 = Power(t11675,2);
  t11775 = -3.2*t11774;
  t11778 = -3.2*t11777*t11735;
  t11779 = t11740 + t11741 + t11743 + t11747 + t11751 + t11753 + t11755 + t11758 + t11760 + t11761 + t11763 + t11767 + t11771 + t11773 + t11775 + t11778;
  t12012 = -0.748*t11746;
  t12023 = -13.6*t11574*t11746;
  t11845 = t11740 + t11741 + t11743 + t11747 + t11839 + t11840 + t11843 + t11844;
  t12033 = -6.8*t11746*t11786;
  t11851 = t11850*t11552;
  t11854 = t11642*t11794;
  t11855 = t11851 + t11852 + t11853 + t11854;
  t11858 = -1.*t11547*t11850;
  t11860 = -1.*t11552*t11794;
  t11862 = t11858 + t11859 + t11860 + t11861;
  t12042 = -0.768*var2[4]*t11842;
  t11871 = Power(t9099,2);
  t11872 = -0.24*t11871;
  t11873 = t11656 + t11872;
  t12043 = -3.2*t11639*t11554;
  t11867 = -1.*t11627*t11533;
  t11868 = 0.24*t9099*t11533;
  t11869 = t11867 + t11868;
  t12044 = -3.2*t11659*t11842;
  t12047 = -6.4*t11654*t11554;
  t12048 = -6.4*t11554*t11842;
  t11879 = t11839 + t11840 + t11843 + t11844;
  t12052 = -3.2*t11554*t11796;
  t11883 = t11882*t11552;
  t11886 = t11642*t11885;
  t11887 = t11883 + t11852 + t11853 + t11886;
  t12054 = -3.2*t11800*t11842;
  t11889 = -1.*t11547*t11882;
  t11890 = -1.*t11552*t11885;
  t11891 = t11889 + t11859 + t11890 + t11861;
  t12018 = -0.748*t11766;
  t12026 = -13.6*t11683*t11766;
  t11916 = t11760 + t11761 + t11763 + t11767 + t11910 + t11911 + t11914 + t11915;
  t12036 = -6.8*t11766*t11806;
  t11922 = t11921*t11673;
  t11925 = t11695*t11814;
  t11926 = t11922 + t11923 + t11924 + t11925;
  t11929 = -1.*t11669*t11921;
  t11931 = -1.*t11673*t11814;
  t11933 = t11929 + t11930 + t11931 + t11932;
  t12071 = -0.768*var2[6]*t11913;
  t11942 = Power(t11663,2);
  t11943 = -0.24*t11942;
  t11944 = t11700 + t11943;
  t12072 = -3.2*t11692*t11675;
  t11938 = -1.*t11689*t11667;
  t11939 = 0.24*t11663*t11667;
  t11940 = t11938 + t11939;
  t12073 = -3.2*t11703*t11913;
  t12076 = -6.4*t11698*t11675;
  t12077 = -6.4*t11675*t11913;
  t11950 = t11910 + t11911 + t11914 + t11915;
  t12081 = -3.2*t11675*t11816;
  t11954 = t11953*t11673;
  t11957 = t11695*t11956;
  t11958 = t11954 + t11923 + t11924 + t11957;
  t12083 = -3.2*t11820*t11913;
  t11960 = -1.*t11669*t11953;
  t11961 = -1.*t11673*t11956;
  t11962 = t11960 + t11930 + t11961 + t11932;
  t11984 = -6.8*t11574*t11709;
  t11985 = -6.8*t11713*t11709;
  t11986 = -3.2*t11716*t11554;
  t11987 = -3.2*t11654*t11720;
  t11988 = -6.8*t11683*t11724;
  t11989 = -6.8*t11728*t11724;
  t11990 = -3.2*t11731*t11675;
  t11991 = -3.2*t11698*t11735;
  t11992 = t11984 + t11985 + t11986 + t11987 + t11988 + t11989 + t11990 + t11991;
  t11967 = Power(t8215,2);
  t11968 = -12.*t11967;
  t11969 = Power(t11549,2);
  t11970 = -12.*t11969;
  t11781 = 2.88*t11549;
  t11797 = -3.2*t11654*t11796;
  t11801 = -3.2*t11554*t11800;
  t11817 = -3.2*t11698*t11816;
  t11821 = -3.2*t11675*t11820;
  t11822 = t11781 + t11787 + t11797 + t11801 + t11807 + t11817 + t11821;
  t11655 = -3.2*t11639*t11654;
  t11660 = -3.2*t11659*t11554;
  t11661 = t11583 + t11655 + t11660;
  t11699 = -3.2*t11692*t11698;
  t11704 = -3.2*t11703*t11675;
  t11705 = t11684 + t11699 + t11704;
  t12032 = 2.88*t8215;
  t12034 = -3.2*t11757*t11796;
  t12035 = -3.2*t11750*t11800;
  t12037 = -3.2*t11777*t11816;
  t12038 = -3.2*t11770*t11820;
  t12039 = t12032 + t12033 + t12034 + t12035 + t12036 + t12037 + t12038;
  t12053 = -3.2*t11554*t11855;
  t12055 = -3.2*t11654*t11862;
  t12056 = t12033 + t12052 + t12053 + t12054 + t12055;
  t11856 = -3.2*t11716*t11855;
  t11863 = -3.2*t11720*t11862;
  t11864 = t11787 + t11847 + t11856 + t11857 + t11863;
  t12066 = -3.2*t11554*t11887;
  t12067 = -3.2*t11654*t11891;
  t12068 = t12052 + t12066 + t12054 + t12067;
  t11888 = -3.2*t11716*t11887;
  t11892 = -3.2*t11720*t11891;
  t11893 = t11847 + t11888 + t11857 + t11892;
  t12082 = -3.2*t11675*t11926;
  t12084 = -3.2*t11698*t11933;
  t12085 = t12036 + t12081 + t12082 + t12083 + t12084;
  t11927 = -3.2*t11731*t11926;
  t11934 = -3.2*t11735*t11933;
  t11935 = t11807 + t11918 + t11927 + t11928 + t11934;
  t12095 = -3.2*t11675*t11958;
  t12096 = -3.2*t11698*t11962;
  t12097 = t12081 + t12095 + t12083 + t12096;
  t11959 = -3.2*t11731*t11958;
  t11963 = -3.2*t11735*t11962;
  t11964 = t11918 + t11959 + t11928 + t11963;
  t11993 = -2.88*t8215;
  t11994 = -6.8*t11709*t11786;
  t11995 = -3.2*t11720*t11796;
  t11996 = -3.2*t11716*t11800;
  t11997 = -6.8*t11724*t11806;
  t11998 = -3.2*t11735*t11816;
  t11999 = -3.2*t11731*t11820;
  t12000 = t11993 + t11994 + t11995 + t11996 + t11997 + t11998 + t11999;
  t12013 = -3.2*t11659*t11750;
  t12014 = -3.2*t11639*t11757;
  t12015 = t12012 + t12013 + t12014;
  t12045 = t12012 + t12043 + t12044;
  t11833 = t11583 + t11831 + t11832;
  t12107 = -3.2*t11659*t11855;
  t12108 = -3.2*t11639*t11862;
  t12109 = t12107 + t12108;
  t12059 = -3.2*t11873*t11654;
  t12060 = -3.2*t11869*t11554;
  t12061 = t12059 + t12043 + t12060 + t12044;
  t11870 = -3.2*t11869*t11716;
  t11874 = -3.2*t11873*t11720;
  t11875 = t11831 + t11870 + t11874 + t11832;
  t12119 = -3.2*t11873*t11796;
  t12120 = -3.2*t11869*t11800;
  t12121 = -3.2*t11659*t11887;
  t12122 = -3.2*t11639*t11891;
  t12123 = t12119 + t12120 + t12121 + t12122;
  t12001 = -0.748*t11709;
  t12002 = -3.2*t11659*t11716;
  t12003 = -3.2*t11639*t11720;
  t12004 = t12001 + t12002 + t12003;
  t12171 = -0.748*t11786;
  t12172 = -3.2*t11639*t11796;
  t12173 = -3.2*t11659*t11800;
  t12174 = -0.67 + t12171 + t12172 + t12173;
  t12210 = -0.768*var2[1]*t11842;
  t12211 = -0.768*var2[0]*t11829;
  t12005 = -0.768*t11716;
  t12101 = -0.768*t11554;
  t12175 = -0.768*t11800;
  t12176 = -0.2 + t12175;
  t12204 = -0.768*t11659;
  t12205 = -0.2 + t12204;
  t12019 = -3.2*t11703*t11770;
  t12020 = -3.2*t11692*t11777;
  t12021 = t12018 + t12019 + t12020;
  t12074 = t12018 + t12072 + t12073;
  t11904 = t11684 + t11902 + t11903;
  t12133 = -3.2*t11703*t11926;
  t12134 = -3.2*t11692*t11933;
  t12135 = t12133 + t12134;
  t12088 = -3.2*t11944*t11698;
  t12089 = -3.2*t11940*t11675;
  t12090 = t12088 + t12072 + t12089 + t12073;
  t11941 = -3.2*t11940*t11731;
  t11945 = -3.2*t11944*t11735;
  t11946 = t11902 + t11941 + t11945 + t11903;
  t12145 = -3.2*t11944*t11816;
  t12146 = -3.2*t11940*t11820;
  t12147 = -3.2*t11703*t11958;
  t12148 = -3.2*t11692*t11962;
  t12149 = t12145 + t12146 + t12147 + t12148;
  t12006 = -0.748*t11724;
  t12007 = -3.2*t11703*t11731;
  t12008 = -3.2*t11692*t11735;
  t12009 = t12006 + t12007 + t12008;
  t12177 = -0.748*t11806;
  t12178 = -3.2*t11692*t11816;
  t12179 = -3.2*t11703*t11820;
  t12180 = -0.67 + t12177 + t12178 + t12179;
  t12243 = -0.768*var2[1]*t11913;
  t12244 = -0.768*var2[0]*t11900;
  t12010 = -0.768*t11731;
  t12102 = -0.768*t11675;
  t12181 = -0.768*t11820;
  t12182 = -0.2 + t12181;
  t12237 = -0.768*t11703;
  t12238 = -0.2 + t12237;
  p_output1[0]=(t11710 + t11714 - 6.4*t11554*t11716 - 6.4*t11654*t11720 + t11725 + t11729 - 6.4*t11675*t11731 - 6.4*t11698*t11735)*var2[0] + t11779*var2[1] + t11822*var2[2] + t11661*var2[3] - 0.768*t11554*var2[4] + t11705*var2[5] - 0.768*t11675*var2[6];
  p_output1[1]=t11830 + (t11710 + t11714 + t11835 + t11836)*var2[0] + t11845*var2[1] + t11864*var2[2] + t11833*var2[3];
  p_output1[2]=t11830 + (t11835 + t11836)*var2[0] + t11879*var2[1] + t11893*var2[2] + t11875*var2[3];
  p_output1[3]=t11901 + (t11725 + t11729 + t11906 + t11907)*var2[0] + t11916*var2[1] + t11935*var2[2] + t11904*var2[5];
  p_output1[4]=t11901 + (t11906 + t11907)*var2[0] + t11950*var2[1] + t11964*var2[2] + t11946*var2[5];
  p_output1[5]=-6.8*Power(t11713,2) - 3.2*Power(t11716,2) - 3.2*Power(t11720,2) - 6.8*Power(t11728,2) - 3.2*Power(t11731,2) - 3.2*Power(t11735,2) + t11743 + t11763 + t11968 + t11970;
  p_output1[6]=t11992;
  p_output1[7]=t12000;
  p_output1[8]=t12004;
  p_output1[9]=t12005;
  p_output1[10]=t12009;
  p_output1[11]=t12010;
  p_output1[12]=t11779*var2[0] + (t11710 + t11725 - 6.4*t11554*t11750 - 6.4*t11654*t11757 - 6.4*t11675*t11770 - 6.4*t11698*t11777 + t12023 + t12026)*var2[1] + t12039*var2[2] + t12015*var2[3] - 0.768*t11750*var2[4] + t12021*var2[5] - 0.768*t11770*var2[6];
  p_output1[13]=t12042 + t11845*var2[0] + (t11710 + t12023 + t12047 + t12048)*var2[1] + t12056*var2[2] + t12045*var2[3];
  p_output1[14]=t12042 + t11879*var2[0] + (t12047 + t12048)*var2[1] + t12068*var2[2] + t12061*var2[3];
  p_output1[15]=t12071 + t11916*var2[0] + (t11725 + t12026 + t12076 + t12077)*var2[1] + t12085*var2[2] + t12074*var2[5];
  p_output1[16]=t12071 + t11950*var2[0] + (t12076 + t12077)*var2[1] + t12097*var2[2] + t12090*var2[5];
  p_output1[17]=t11992;
  p_output1[18]=t11740 + t11743 + t11753 + t11755 + t11760 + t11763 + t11773 + t11775 + t11968 + t11970;
  p_output1[19]=t11822;
  p_output1[20]=t11661;
  p_output1[21]=t12101;
  p_output1[22]=t11705;
  p_output1[23]=t12102;
  p_output1[24]=t11822*var2[0] + t12039*var2[1];
  p_output1[25]=t11864*var2[0] + t12056*var2[1] + (-6.4*t11800*t11855 - 6.4*t11796*t11862)*var2[2] + t12109*var2[3] - 0.768*t11855*var2[4];
  p_output1[26]=t11893*var2[0] + t12068*var2[1] + (-6.4*t11800*t11887 - 6.4*t11796*t11891)*var2[2] + t12123*var2[3] - 0.768*t11887*var2[4];
  p_output1[27]=t11935*var2[0] + t12085*var2[1] + (-6.4*t11820*t11926 - 6.4*t11816*t11933)*var2[2] + t12135*var2[5] - 0.768*t11926*var2[6];
  p_output1[28]=t11964*var2[0] + t12097*var2[1] + (-6.4*t11820*t11958 - 6.4*t11816*t11962)*var2[2] + t12149*var2[5] - 0.768*t11958*var2[6];
  p_output1[29]=t12000;
  p_output1[30]=t11822;
  p_output1[31]=-3.3612 - 6.8*Power(t11786,2) - 3.2*Power(t11796,2) - 3.2*Power(t11800,2) - 6.8*Power(t11806,2) - 3.2*Power(t11816,2) - 3.2*Power(t11820,2);
  p_output1[32]=t12174;
  p_output1[33]=t12176;
  p_output1[34]=t12180;
  p_output1[35]=t12182;
  p_output1[36]=t11661*var2[0] + t12015*var2[1];
  p_output1[37]=t11833*var2[0] + t12045*var2[1] + t12109*var2[2];
  p_output1[38]=t11875*var2[0] + t12061*var2[1] + t12123*var2[2] + (-6.4*t11659*t11869 - 6.4*t11639*t11873)*var2[3] - 0.768*t11869*var2[4];
  p_output1[39]=t12004;
  p_output1[40]=t11661;
  p_output1[41]=t12174;
  p_output1[42]=-1.58228 - 3.2*Power(t11639,2) - 3.2*Power(t11659,2);
  p_output1[43]=t12205;
  p_output1[44]=-0.768*t11554*var2[0] - 0.768*t11750*var2[1];
  p_output1[45]=t12210 + t12211 - 0.768*t11855*var2[2];
  p_output1[46]=t12210 + t12211 - 0.768*t11887*var2[2] - 0.768*t11869*var2[3];
  p_output1[47]=t12005;
  p_output1[48]=t12101;
  p_output1[49]=t12176;
  p_output1[50]=t12205;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t11705*var2[0] + t12021*var2[1];
  p_output1[53]=t11904*var2[0] + t12074*var2[1] + t12135*var2[2];
  p_output1[54]=t11946*var2[0] + t12090*var2[1] + t12149*var2[2] + (-6.4*t11703*t11940 - 6.4*t11692*t11944)*var2[5] - 0.768*t11940*var2[6];
  p_output1[55]=t12009;
  p_output1[56]=t11705;
  p_output1[57]=t12180;
  p_output1[58]=-1.58228 - 3.2*Power(t11692,2) - 3.2*Power(t11703,2);
  p_output1[59]=t12238;
  p_output1[60]=-0.768*t11675*var2[0] - 0.768*t11770*var2[1];
  p_output1[61]=t12243 + t12244 - 0.768*t11926*var2[2];
  p_output1[62]=t12243 + t12244 - 0.768*t11958*var2[2] - 0.768*t11940*var2[5];
  p_output1[63]=t12010;
  p_output1[64]=t12102;
  p_output1[65]=t12182;
  p_output1[66]=t12238;
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
