/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:48 GMT-04:00
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
  double t3672;
  double t435;
  double t3637;
  double t3686;
  double t4154;
  double t154;
  double t3643;
  double t3871;
  double t4058;
  double t4416;
  double t4434;
  double t4460;
  double t4463;
  double t4464;
  double t4099;
  double t4201;
  double t4273;
  double t4276;
  double t4352;
  double t4401;
  double t8839;
  double t8852;
  double t9028;
  double t8470;
  double t8801;
  double t8837;
  double t4404;
  double t4411;
  double t4412;
  double t9140;
  double t9167;
  double t9171;
  double t4660;
  double t4667;
  double t4668;
  double t4626;
  double t4669;
  double t4780;
  double t10367;
  double t9650;
  double t9741;
  double t10186;
  double t11751;
  double t11821;
  double t13150;
  double t13151;
  double t10364;
  double t10369;
  double t13152;
  double t13153;
  double t13197;
  double t13614;
  double t13626;
  double t13685;
  double t13704;
  double t13705;
  double t13712;
  double t13718;
  double t13719;
  double t13726;
  double t13727;
  double t13728;
  double t4413;
  double t4827;
  double t4828;
  double t7950;
  double t8140;
  double t13761;
  double t13762;
  double t4478;
  double t4603;
  double t4625;
  double t9139;
  double t9178;
  double t9473;
  double t9547;
  double t13599;
  double t13651;
  double t13652;
  double t13653;
  double t13654;
  double t13655;
  double t13656;
  double t13668;
  double t13669;
  double t13670;
  double t13676;
  double t13677;
  double t13678;
  double t13740;
  double t13741;
  double t13742;
  double t13706;
  double t13720;
  double t13722;
  double t13729;
  double t13730;
  double t13731;
  double t13732;
  double t13733;
  double t13744;
  double t13745;
  double t13746;
  double t13747;
  double t13748;
  double t13800;
  double t13801;
  double t13802;
  double t13763;
  double t13764;
  double t13765;
  double t13768;
  double t13769;
  double t13770;
  double t13774;
  double t13781;
  double t13782;
  double t13783;
  double t13786;
  double t13787;
  double t13788;
  double t13789;
  double t13790;
  double t13791;
  double t13794;
  double t13795;
  double t13841;
  double t13842;
  double t13799;
  double t13844;
  double t13845;
  double t13805;
  double t13813;
  double t13851;
  double t13852;
  double t13817;
  double t13874;
  double t13875;
  double t13876;
  double t13877;
  double t13878;
  double t13880;
  double t13881;
  double t13882;
  double t13883;
  double t13884;
  double t13885;
  double t13886;
  double t13887;
  double t13888;
  double t13890;
  double t13891;
  double t13892;
  double t13893;
  double t13894;
  double t13895;
  double t13528;
  double t13600;
  double t11831;
  double t13146;
  double t10370;
  double t13148;
  double t13487;
  double t13492;
  double t13601;
  double t13627;
  double t13628;
  double t13909;
  double t13914;
  double t13915;
  double t13784;
  double t13923;
  double t13797;
  double t13798;
  double t13803;
  double t13804;
  double t13806;
  double t13809;
  double t13814;
  double t13815;
  double t13816;
  double t13818;
  double t13932;
  double t13826;
  double t13827;
  double t13828;
  double t13933;
  double t13830;
  double t13831;
  double t13832;
  double t13934;
  double t13937;
  double t13938;
  double t13939;
  double t13940;
  double t13941;
  double t13942;
  double t13836;
  double t13946;
  double t13843;
  double t13846;
  double t13847;
  double t13948;
  double t13849;
  double t13850;
  double t13853;
  double t13854;
  double t13855;
  double t13856;
  double t13859;
  double t13860;
  double t13861;
  double t13863;
  double t13864;
  double t13865;
  double t13866;
  double t13867;
  double t13868;
  double t13889;
  double t13725;
  double t13739;
  double t13743;
  double t13749;
  double t13750;
  double t4402;
  double t4808;
  double t8161;
  double t8458;
  double t13973;
  double t13974;
  double t13758;
  double t13924;
  double t13925;
  double t13926;
  double t13927;
  double t13928;
  double t13796;
  double t13807;
  double t13808;
  double t13819;
  double t13820;
  double t13947;
  double t13949;
  double t13950;
  double t13951;
  double t13952;
  double t13840;
  double t13848;
  double t13857;
  double t13858;
  double t13862;
  double t13869;
  double t13870;
  double t13963;
  double t13964;
  double t13965;
  double t13966;
  double t13967;
  double t13968;
  double t13969;
  double t13896;
  double t13976;
  double t14020;
  double t14021;
  double t14022;
  double t13910;
  double t13911;
  double t13912;
  double t13935;
  double t13766;
  double t13987;
  double t13988;
  double t13989;
  double t13956;
  double t13957;
  double t13958;
  double t13829;
  double t13833;
  double t13834;
  double t14004;
  double t14005;
  double t14006;
  double t14007;
  double t14008;
  double t13898;
  double t13899;
  double t13900;
  double t13901;
  double t8460;
  double t14025;
  double t14026;
  double t14027;
  double t14058;
  double t14059;
  double t13907;
  double t13981;
  double t14033;
  t3672 = Cos(var1[5]);
  t435 = Cos(var1[6]);
  t3637 = Sin(var1[5]);
  t3686 = Sin(var1[6]);
  t4154 = Cos(var1[2]);
  t154 = Sin(var1[2]);
  t3643 = -1.*t435*t3637;
  t3871 = -1.*t3672*t3686;
  t4058 = t3643 + t3871;
  t4416 = -1.*t435;
  t4434 = 1. + t4416;
  t4460 = 0.4*t4434;
  t4463 = 0.64*t435;
  t4464 = t4460 + t4463;
  t4099 = -1.*t154*t4058;
  t4201 = -1.*t3672*t435;
  t4273 = t3637*t3686;
  t4276 = t4201 + t4273;
  t4352 = t4154*t4276;
  t4401 = t4099 + t4352;
  t8839 = t4154*t3672;
  t8852 = -1.*t154*t3637;
  t9028 = t8839 + t8852;
  t8470 = -1.*t3672*t154;
  t8801 = -1.*t4154*t3637;
  t8837 = t8470 + t8801;
  t4404 = -1.*t4154*t3672;
  t4411 = t154*t3637;
  t4412 = t4404 + t4411;
  t9140 = t3672*t154;
  t9167 = t4154*t3637;
  t9171 = t9140 + t9167;
  t4660 = t3672*t435;
  t4667 = -1.*t3637*t3686;
  t4668 = t4660 + t4667;
  t4626 = t4154*t4058;
  t4669 = -1.*t154*t4668;
  t4780 = t4626 + t4669;
  t10367 = t4154*t4668;
  t9650 = t435*t3637;
  t9741 = t3672*t3686;
  t10186 = t9650 + t9741;
  t11751 = t154*t4058;
  t11821 = t11751 + t10367;
  t13150 = -1.*t4154*t4668;
  t13151 = t4099 + t13150;
  t10364 = -1.*t154*t10186;
  t10369 = t10364 + t10367;
  t13152 = t4154*t10186;
  t13153 = t154*t4668;
  t13197 = t13152 + t13153;
  t13614 = t154*t4276;
  t13626 = t4626 + t13614;
  t13685 = t4464*t3637;
  t13704 = 0.24*t3672*t3686;
  t13705 = t13685 + t13704;
  t13712 = t3672*t4464;
  t13718 = -0.24*t3637*t3686;
  t13719 = t13712 + t13718;
  t13726 = -1.*t4464*t3637;
  t13727 = -0.24*t3672*t3686;
  t13728 = t13726 + t13727;
  t4413 = 0.748*t4412;
  t4827 = t4464*t435;
  t4828 = Power(t3686,2);
  t7950 = 0.24*t4828;
  t8140 = t4827 + t7950;
  t13761 = t154*t10186;
  t13762 = t13761 + t4352;
  t4478 = t4464*t3686;
  t4603 = -0.24*t435*t3686;
  t4625 = t4478 + t4603;
  t9139 = 20.4*t8837*t9028;
  t9178 = 6.8*t9171*t9028;
  t9473 = 20.4*t8837*t4412;
  t9547 = 6.8*t9171*t4412;
  t13599 = -1.*t154*t4276;
  t13651 = Power(t8837,2);
  t13652 = 13.6*t13651;
  t13653 = 13.6*t8837*t9171;
  t13654 = Power(t9028,2);
  t13655 = 13.6*t13654;
  t13656 = 13.6*t9028*t4412;
  t13668 = Power(t3672,2);
  t13669 = 0.11*t13668;
  t13670 = Power(t3637,2);
  t13676 = 0.11*t13670;
  t13677 = t13669 + t13676;
  t13678 = 6.8*t4412*t13677;
  t13740 = t13705*t10186;
  t13741 = t4668*t13719;
  t13742 = t13740 + t13741;
  t13706 = -1.*t13705*t4668;
  t13720 = -1.*t4058*t13719;
  t13722 = t13706 + t13720;
  t13729 = t13728*t4668;
  t13730 = t13705*t4668;
  t13731 = t4058*t13719;
  t13732 = t10186*t13719;
  t13733 = t13729 + t13730 + t13731 + t13732;
  t13744 = -1.*t4058*t13728;
  t13745 = -1.*t4058*t13705;
  t13746 = -1.*t4668*t13719;
  t13747 = -1.*t13719*t4276;
  t13748 = t13744 + t13745 + t13746 + t13747;
  t13800 = -1.*t3672*t4464;
  t13801 = 0.24*t3637*t3686;
  t13802 = t13800 + t13801;
  t13763 = -0.384*var2[6]*t13762;
  t13764 = 3.2*t8140*t13762;
  t13765 = 3.2*t4625*t13626;
  t13768 = 6.4*t11821*t4780;
  t13769 = 3.2*t13197*t4401;
  t13770 = 3.2*t4780*t13762;
  t13774 = t13152 + t13599;
  t13781 = 3.2*t11821*t13774;
  t13782 = 3.2*t10369*t13626;
  t13783 = 6.4*t4401*t13626;
  t13786 = Power(t11821,2);
  t13787 = 6.4*t13786;
  t13788 = 6.4*t11821*t13762;
  t13789 = 6.4*t13197*t13626;
  t13790 = Power(t13626,2);
  t13791 = 6.4*t13790;
  t13794 = 3.2*t13742*t13762;
  t13795 = 3.2*t13722*t13626;
  t13841 = -0.24*t435*t3637;
  t13842 = t13841 + t13727;
  t13799 = -1.*t10186*t13719;
  t13844 = 0.24*t3672*t435;
  t13845 = t13844 + t13718;
  t13805 = -1.*t13705*t4276;
  t13813 = t4058*t13705;
  t13851 = -0.24*t3672*t435;
  t13852 = t13851 + t13801;
  t13817 = t13719*t4276;
  t13874 = 13.6*t8837*t9028;
  t13875 = 13.6*t9171*t9028;
  t13876 = 6.4*t11821*t13197;
  t13877 = 6.4*t11821*t13626;
  t13878 = t13874 + t13875 + t13876 + t13877;
  t13880 = 6.8*t13651;
  t13881 = 6.8*t8837*t9171;
  t13882 = 6.8*t13654;
  t13883 = 6.8*t9028*t4412;
  t13884 = 3.2*t11821*t10369;
  t13885 = 3.2*t4780*t13197;
  t13886 = 3.2*t11821*t4401;
  t13887 = 3.2*t4780*t13626;
  t13888 = t13880 + t13881 + t13882 + t13883 + t13884 + t13885 + t13886 + t13887;
  t13890 = 6.8*t8837*t13677;
  t13891 = 3.2*t11821*t13722;
  t13892 = 3.2*t11821*t13733;
  t13893 = 3.2*t13742*t13626;
  t13894 = 3.2*t13197*t13748;
  t13895 = t13890 + t13891 + t13892 + t13893 + t13894;
  t13528 = -1.*t4154*t4058;
  t13600 = t13528 + t13599;
  t11831 = -1.*t4154*t10186;
  t13146 = t11831 + t4669;
  t10370 = 6.4*t10369*t4780;
  t13148 = 3.2*t11821*t13146;
  t13487 = 3.2*t13151*t13197;
  t13492 = 6.4*t4780*t4401;
  t13601 = 3.2*t11821*t13600;
  t13627 = 3.2*t13151*t13626;
  t13628 = t9139 + t9178 + t9473 + t9547 + t10370 + t13148 + t13487 + t13492 + t13601 + t13627;
  t13909 = 0.748*t9171;
  t13914 = Power(t4412,2);
  t13915 = 13.6*t13914;
  t13784 = t9139 + t9178 + t9473 + t9547 + t13768 + t13769 + t13770 + t13781 + t13782 + t13783;
  t13923 = 6.8*t9171*t13677;
  t13797 = -1.*t13728*t4668;
  t13798 = -2.*t4058*t13719;
  t13803 = -1.*t4058*t13802;
  t13804 = -2.*t13728*t4276;
  t13806 = t13797 + t13798 + t13799 + t13803 + t13804 + t13805;
  t13809 = 2.*t4058*t13728;
  t13814 = t13728*t10186;
  t13815 = 2.*t4668*t13719;
  t13816 = t4668*t13802;
  t13818 = t13809 + t13813 + t13814 + t13815 + t13816 + t13817;
  t13932 = -0.384*var2[6]*t13774;
  t13826 = Power(t435,2);
  t13827 = -0.24*t13826;
  t13828 = t4827 + t13827;
  t13933 = 3.2*t4625*t4401;
  t13830 = -1.*t4464*t3686;
  t13831 = 0.24*t435*t3686;
  t13832 = t13830 + t13831;
  t13934 = 3.2*t8140*t13774;
  t13937 = Power(t4780,2);
  t13938 = 6.4*t13937;
  t13939 = 6.4*t10369*t4401;
  t13940 = Power(t4401,2);
  t13941 = 6.4*t13940;
  t13942 = 6.4*t4780*t13774;
  t13836 = t13768 + t13769 + t13770 + t13781 + t13782 + t13783;
  t13946 = 3.2*t13722*t4401;
  t13843 = t13842*t4668;
  t13846 = t10186*t13845;
  t13847 = t13843 + t13730 + t13731 + t13846;
  t13948 = 3.2*t13742*t13774;
  t13849 = -1.*t13842*t4668;
  t13850 = -1.*t4058*t13845;
  t13853 = -1.*t4058*t13852;
  t13854 = -1.*t13728*t4276;
  t13855 = -1.*t13842*t4276;
  t13856 = t13849 + t13720 + t13799 + t13850 + t13853 + t13854 + t13855 + t13805;
  t13859 = -1.*t4058*t13842;
  t13860 = -1.*t4668*t13845;
  t13861 = t13859 + t13745 + t13860 + t13747;
  t13863 = t4058*t13728;
  t13864 = t4058*t13842;
  t13865 = t13842*t10186;
  t13866 = t4668*t13845;
  t13867 = t4668*t13852;
  t13868 = t13863 + t13864 + t13813 + t13865 + t13741 + t13866 + t13867 + t13817;
  t13889 = -0.5*var2[5]*t13888;
  t13725 = 3.2*t4780*t13722;
  t13739 = 3.2*t4780*t13733;
  t13743 = 3.2*t13742*t4401;
  t13749 = 3.2*t10369*t13748;
  t13750 = t13678 + t13725 + t13739 + t13743 + t13749;
  t4402 = -0.384*var2[6]*t4401;
  t4808 = 3.2*t4625*t4780;
  t8161 = 3.2*t8140*t4401;
  t8458 = t4413 + t4808 + t8161;
  t13973 = 13.6*t8837*t4412;
  t13974 = t13874 + t13973 + t10370 + t13492;
  t13758 = -0.5*var2[2]*t13750;
  t13924 = 3.2*t13151*t13722;
  t13925 = 3.2*t13151*t13733;
  t13926 = 3.2*t13742*t13600;
  t13927 = 3.2*t13146*t13748;
  t13928 = t13923 + t13924 + t13925 + t13926 + t13927;
  t13796 = 6.4*t13733*t13626;
  t13807 = 3.2*t13197*t13806;
  t13808 = 6.4*t11821*t13748;
  t13819 = 3.2*t11821*t13818;
  t13820 = t13678 + t13794 + t13795 + t13796 + t13807 + t13808 + t13819;
  t13947 = 6.4*t13733*t4401;
  t13949 = 3.2*t10369*t13806;
  t13950 = 6.4*t4780*t13748;
  t13951 = 3.2*t4780*t13818;
  t13952 = t13923 + t13946 + t13947 + t13948 + t13949 + t13950 + t13951;
  t13840 = 3.2*t13733*t13626;
  t13848 = 3.2*t13847*t13626;
  t13857 = 3.2*t13197*t13856;
  t13858 = 3.2*t11821*t13748;
  t13862 = 3.2*t11821*t13861;
  t13869 = 3.2*t11821*t13868;
  t13870 = t13794 + t13795 + t13840 + t13848 + t13857 + t13858 + t13862 + t13869;
  t13963 = 3.2*t13733*t4401;
  t13964 = 3.2*t13847*t4401;
  t13965 = 3.2*t10369*t13856;
  t13966 = 3.2*t4780*t13748;
  t13967 = 3.2*t4780*t13861;
  t13968 = 3.2*t4780*t13868;
  t13969 = t13946 + t13963 + t13964 + t13948 + t13965 + t13966 + t13967 + t13968;
  t13896 = -0.5*var2[5]*t13895;
  t13976 = -0.5*var2[5]*t13750;
  t14020 = 6.4*t13733*t13742;
  t14021 = 6.4*t13722*t13748;
  t14022 = t14020 + t14021;
  t13910 = 3.2*t4625*t13151;
  t13911 = 3.2*t8140*t13600;
  t13912 = t13909 + t13910 + t13911;
  t13935 = t13909 + t13933 + t13934;
  t13766 = t4413 + t13764 + t13765;
  t13987 = 3.2*t4625*t13806;
  t13988 = 3.2*t8140*t13818;
  t13989 = t13987 + t13988;
  t13956 = 3.2*t13828*t4780;
  t13957 = 3.2*t13832*t4401;
  t13958 = t13956 + t13933 + t13957 + t13934;
  t13829 = 3.2*t13828*t11821;
  t13833 = 3.2*t13832*t13626;
  t13834 = t13829 + t13764 + t13765 + t13833;
  t14004 = 3.2*t13832*t13733;
  t14005 = 3.2*t4625*t13856;
  t14006 = 3.2*t13828*t13748;
  t14007 = 3.2*t8140*t13868;
  t14008 = t14004 + t14005 + t14006 + t14007;
  t13898 = 0.748*t8837;
  t13899 = 3.2*t4625*t11821;
  t13900 = 3.2*t8140*t13626;
  t13901 = t13898 + t13899 + t13900;
  t8460 = -0.5*var2[5]*t8458;
  t14025 = 3.2*t8140*t13733;
  t14026 = 3.2*t4625*t13748;
  t14027 = t14025 + t14026;
  t14058 = -0.384*var2[0]*t13762;
  t14059 = -0.384*var2[1]*t13774;
  t13907 = -0.384*var2[5]*t13626;
  t13981 = -0.384*var2[5]*t4401;
  t14033 = -0.384*var2[5]*t13733;
  p_output1[0]=(t13758 + t4402 + t8460 - 0.5*(6.4*t10369*t11821 + t13652 + t13653 + t13655 + t13656 + 6.4*t11821*t4401 + 6.4*t13197*t4780 + 6.4*t13626*t4780)*var2[0] - 0.5*t13628*var2[1])*var2[5];
  p_output1[1]=var2[5]*(t13763 - 0.5*(t13652 + t13653 + t13655 + t13656 + t13787 + t13788 + t13789 + t13791)*var2[0] - 0.5*t13784*var2[1] - 0.5*t13820*var2[2] - 0.5*t13766*var2[5]);
  p_output1[2]=var2[5]*(t13763 - 0.5*(t13787 + t13788 + t13789 + t13791)*var2[0] - 0.5*t13836*var2[1] - 0.5*t13870*var2[2] - 0.5*t13834*var2[5]);
  p_output1[3]=-0.5*t13878*var2[5];
  p_output1[4]=t13889;
  p_output1[5]=t13896;
  p_output1[6]=-0.5*t13878*var2[0] - 0.5*t13888*var2[1] - 0.5*t13895*var2[2] - 1.*t13901*var2[5] - 0.384*t13626*var2[6];
  p_output1[7]=t13907;
  p_output1[8]=var2[5]*(-0.5*t13628*var2[0] - 0.5*(6.4*t10369*t13151 + t13652 + t13653 + t13656 + t13915 + 6.4*t13151*t4401 + 6.4*t13146*t4780 + 6.4*t13600*t4780)*var2[1] - 0.5*t13928*var2[2] - 0.5*t13912*var2[5] - 0.384*t13600*var2[6]);
  p_output1[9]=var2[5]*(t13932 - 0.5*t13784*var2[0] - 0.5*(t13652 + t13653 + t13656 + t13915 + t13938 + t13939 + t13941 + t13942)*var2[1] - 0.5*t13952*var2[2] - 0.5*t13935*var2[5]);
  p_output1[10]=var2[5]*(t13932 - 0.5*t13836*var2[0] - 0.5*(t13938 + t13939 + t13941 + t13942)*var2[1] - 0.5*t13969*var2[2] - 0.5*t13958*var2[5]);
  p_output1[11]=t13889;
  p_output1[12]=-0.5*t13974*var2[5];
  p_output1[13]=t13976;
  p_output1[14]=t13758 + t4402 - 0.5*t13888*var2[0] - 0.5*t13974*var2[1] - 1.*t8458*var2[5];
  p_output1[15]=t13981;
  p_output1[16]=(-0.5*t13750*var2[0] - 0.5*t13928*var2[1])*var2[5];
  p_output1[17]=var2[5]*(-0.5*t13820*var2[0] - 0.5*t13952*var2[1] - 0.5*(6.4*Power(t13733,2) + 6.4*Power(t13748,2) + 6.4*t13722*t13806 + 6.4*t13742*t13818)*var2[2] - 0.5*t13989*var2[5] - 0.384*t13818*var2[6]);
  p_output1[18]=var2[5]*(-0.5*t13870*var2[0] - 0.5*t13969*var2[1] - 0.5*(6.4*t13733*t13847 + 6.4*t13722*t13856 + 6.4*t13748*t13861 + 6.4*t13742*t13868)*var2[2] - 0.5*t14008*var2[5] - 0.384*t13868*var2[6]);
  p_output1[19]=t13896;
  p_output1[20]=t13976;
  p_output1[21]=-0.5*t14022*var2[5];
  p_output1[22]=-0.5*t13895*var2[0] - 0.5*t13750*var2[1] - 0.5*t14022*var2[2] - 1.*t14027*var2[5] - 0.384*t13733*var2[6];
  p_output1[23]=t14033;
  p_output1[24]=(-0.5*t8458*var2[0] - 0.5*t13912*var2[1])*var2[5];
  p_output1[25]=(-0.5*t13766*var2[0] - 0.5*t13935*var2[1] - 0.5*t13989*var2[2])*var2[5];
  p_output1[26]=(-0.5*t13834*var2[0] - 0.5*t13958*var2[1] - 0.5*t14008*var2[2])*var2[5];
  p_output1[27]=-0.5*t13901*var2[5];
  p_output1[28]=t8460;
  p_output1[29]=-0.5*t14027*var2[5];
  p_output1[30]=-0.5*t13901*var2[0] - 0.5*t8458*var2[1] - 0.5*t14027*var2[2];
  p_output1[31]=(-0.384*t4401*var2[0] - 0.384*t13600*var2[1])*var2[5];
  p_output1[32]=(t14058 + t14059 - 0.384*t13818*var2[2])*var2[5];
  p_output1[33]=(t14058 + t14059 - 0.384*t13868*var2[2])*var2[5];
  p_output1[34]=t13907;
  p_output1[35]=t13981;
  p_output1[36]=t14033;
  p_output1[37]=-0.384*t13626*var2[0] - 0.384*t4401*var2[1] - 0.384*t13733*var2[2];
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

#include "J_Ce2_vec6_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
