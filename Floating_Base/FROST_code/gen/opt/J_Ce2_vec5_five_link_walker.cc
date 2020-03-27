/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:51:35 GMT-04:00
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
  double t3230;
  double t271;
  double t585;
  double t4052;
  double t253;
  double t4167;
  double t4459;
  double t4478;
  double t4668;
  double t4922;
  double t4960;
  double t2195;
  double t4054;
  double t4091;
  double t8115;
  double t8216;
  double t8217;
  double t9130;
  double t9139;
  double t9244;
  double t6804;
  double t4154;
  double t4229;
  double t4234;
  double t4297;
  double t4401;
  double t4413;
  double t7819;
  double t7950;
  double t8036;
  double t8043;
  double t8241;
  double t8242;
  double t9895;
  double t9896;
  double t9941;
  double t11410;
  double t11458;
  double t11547;
  double t11925;
  double t12678;
  double t12682;
  double t12774;
  double t12779;
  double t12780;
  double t12782;
  double t12783;
  double t12785;
  double t12795;
  double t12796;
  double t12797;
  double t12807;
  double t12808;
  double t7064;
  double t7316;
  double t7693;
  double t9837;
  double t9843;
  double t9874;
  double t12856;
  double t12857;
  double t8874;
  double t8891;
  double t9034;
  double t9408;
  double t9538;
  double t9584;
  double t12602;
  double t12822;
  double t12830;
  double t12831;
  double t12781;
  double t12790;
  double t12793;
  double t12799;
  double t12806;
  double t12798;
  double t12813;
  double t12820;
  double t12893;
  double t12894;
  double t12837;
  double t12839;
  double t12836;
  double t12838;
  double t12847;
  double t12909;
  double t12911;
  double t12912;
  double t12859;
  double t12861;
  double t12862;
  double t12869;
  double t12870;
  double t12871;
  double t12872;
  double t12873;
  double t12874;
  double t12875;
  double t12876;
  double t12877;
  double t12878;
  double t12879;
  double t12880;
  double t12886;
  double t12887;
  double t12888;
  double t12889;
  double t12890;
  double t12891;
  double t12892;
  double t12906;
  double t12907;
  double t12913;
  double t12916;
  double t12926;
  double t12927;
  double t12929;
  double t12930;
  double t12978;
  double t12979;
  double t12980;
  double t12981;
  double t12982;
  double t12962;
  double t12963;
  double t12964;
  double t12966;
  double t12967;
  double t12968;
  double t12969;
  double t12970;
  double t12972;
  double t12973;
  double t12974;
  double t12975;
  double t12976;
  double t12591;
  double t12617;
  double t9902;
  double t9903;
  double t9893;
  double t9934;
  double t12545;
  double t12546;
  double t12618;
  double t12683;
  double t12704;
  double t12895;
  double t12896;
  double t12900;
  double t12908;
  double t12914;
  double t12915;
  double t12917;
  double t12919;
  double t12920;
  double t12921;
  double t12924;
  double t12925;
  double t12928;
  double t12931;
  double t13012;
  double t12940;
  double t12941;
  double t12942;
  double t13014;
  double t13016;
  double t13019;
  double t13020;
  double t13021;
  double t13022;
  double t13023;
  double t13024;
  double t13025;
  double t13026;
  double t13027;
  double t13028;
  double t13031;
  double t12949;
  double t12950;
  double t12951;
  double t12954;
  double t12955;
  double t12956;
  double t12971;
  double t12794;
  double t12821;
  double t12832;
  double t12848;
  double t12849;
  double t8399;
  double t9323;
  double t9832;
  double t9875;
  double t9890;
  double t9892;
  double t13054;
  double t12852;
  double t13004;
  double t13005;
  double t13006;
  double t13007;
  double t13008;
  double t12901;
  double t12905;
  double t12918;
  double t12922;
  double t12923;
  double t12932;
  double t12933;
  double t13029;
  double t13030;
  double t13032;
  double t13033;
  double t13034;
  double t13035;
  double t13036;
  double t12948;
  double t12952;
  double t12953;
  double t12957;
  double t12958;
  double t13046;
  double t13047;
  double t13048;
  double t13049;
  double t13050;
  double t12977;
  double t13056;
  double t13108;
  double t13109;
  double t13110;
  double t13111;
  double t13112;
  double t13104;
  double t13105;
  double t13106;
  double t12991;
  double t12992;
  double t12993;
  double t12994;
  double t12995;
  double t13013;
  double t13015;
  double t13017;
  double t12860;
  double t12863;
  double t12867;
  double t13067;
  double t13068;
  double t13069;
  double t13070;
  double t13071;
  double t13040;
  double t13041;
  double t13042;
  double t13043;
  double t13044;
  double t12939;
  double t12943;
  double t12944;
  double t12945;
  double t12946;
  double t13084;
  double t13085;
  double t13086;
  double t13087;
  double t13088;
  double t13089;
  double t13090;
  double t12983;
  double t13057;
  double t13113;
  double t13143;
  double t13144;
  double t13145;
  double t13157;
  double t13158;
  double t4434;
  t3230 = Cos(var1[3]);
  t271 = Cos(var1[4]);
  t585 = Sin(var1[3]);
  t4052 = Sin(var1[4]);
  t253 = Sin(var1[2]);
  t4167 = Cos(var1[2]);
  t4459 = -1.*t271;
  t4478 = 1. + t4459;
  t4668 = 0.4*t4478;
  t4922 = 0.64*t271;
  t4960 = t4668 + t4922;
  t2195 = -1.*t271*t585;
  t4054 = -1.*t3230*t4052;
  t4091 = t2195 + t4054;
  t8115 = t3230*t271;
  t8216 = -1.*t585*t4052;
  t8217 = t8115 + t8216;
  t9130 = t4167*t4091;
  t9139 = -1.*t253*t8217;
  t9244 = t9130 + t9139;
  t6804 = t4960*t271;
  t4154 = -1.*t253*t4091;
  t4229 = -1.*t3230*t271;
  t4234 = t585*t4052;
  t4297 = t4229 + t4234;
  t4401 = t4167*t4297;
  t4413 = t4154 + t4401;
  t7819 = t271*t585;
  t7950 = t3230*t4052;
  t8036 = t7819 + t7950;
  t8043 = -1.*t253*t8036;
  t8241 = t4167*t8217;
  t8242 = t8043 + t8241;
  t9895 = t253*t4091;
  t9896 = t9895 + t8241;
  t9941 = -1.*t4167*t8217;
  t11410 = t4154 + t9941;
  t11458 = t4167*t8036;
  t11547 = t253*t8217;
  t11925 = t11458 + t11547;
  t12678 = t253*t4297;
  t12682 = t9130 + t12678;
  t12774 = t4960*t585;
  t12779 = 0.24*t3230*t4052;
  t12780 = t12774 + t12779;
  t12782 = t3230*t4960;
  t12783 = -0.24*t585*t4052;
  t12785 = t12782 + t12783;
  t12795 = -0.24*t271*t585;
  t12796 = -0.24*t3230*t4052;
  t12797 = t12795 + t12796;
  t12807 = 0.24*t3230*t271;
  t12808 = t12807 + t12783;
  t7064 = Power(t271,2);
  t7316 = -0.24*t7064;
  t7693 = t6804 + t7316;
  t9837 = Power(t4052,2);
  t9843 = 0.24*t9837;
  t9874 = t6804 + t9843;
  t12856 = t253*t8036;
  t12857 = t12856 + t4401;
  t8874 = t4960*t4052;
  t8891 = -0.24*t271*t4052;
  t9034 = t8874 + t8891;
  t9408 = -1.*t4960*t4052;
  t9538 = 0.24*t271*t4052;
  t9584 = t9408 + t9538;
  t12602 = -1.*t253*t4297;
  t12822 = t12780*t8036;
  t12830 = t8217*t12785;
  t12831 = t12822 + t12830;
  t12781 = -1.*t12780*t8217;
  t12790 = -1.*t4091*t12785;
  t12793 = t12781 + t12790;
  t12799 = t12780*t8217;
  t12806 = t4091*t12785;
  t12798 = t12797*t8217;
  t12813 = t8036*t12808;
  t12820 = t12798 + t12799 + t12806 + t12813;
  t12893 = -1.*t4960*t585;
  t12894 = t12893 + t12796;
  t12837 = -1.*t4091*t12780;
  t12839 = -1.*t12785*t4297;
  t12836 = -1.*t4091*t12797;
  t12838 = -1.*t8217*t12808;
  t12847 = t12836 + t12837 + t12838 + t12839;
  t12909 = -0.24*t3230*t271;
  t12911 = 0.24*t585*t4052;
  t12912 = t12909 + t12911;
  t12859 = -0.384*var2[4]*t12857;
  t12861 = 3.2*t9874*t12857;
  t12862 = 3.2*t9034*t12682;
  t12869 = 6.4*t9896*t9244;
  t12870 = 3.2*t11925*t4413;
  t12871 = 3.2*t9244*t12857;
  t12872 = t11458 + t12602;
  t12873 = 3.2*t9896*t12872;
  t12874 = 3.2*t8242*t12682;
  t12875 = 6.4*t4413*t12682;
  t12876 = t12869 + t12870 + t12871 + t12873 + t12874 + t12875;
  t12877 = -0.5*var2[1]*t12876;
  t12878 = Power(t9896,2);
  t12879 = 6.4*t12878;
  t12880 = 6.4*t9896*t12857;
  t12886 = 6.4*t11925*t12682;
  t12887 = Power(t12682,2);
  t12888 = 6.4*t12887;
  t12889 = t12879 + t12880 + t12886 + t12888;
  t12890 = -0.5*var2[0]*t12889;
  t12891 = 3.2*t12831*t12857;
  t12892 = 3.2*t12793*t12682;
  t12906 = -1.*t12797*t8217;
  t12907 = -1.*t8036*t12785;
  t12913 = -1.*t4091*t12912;
  t12916 = -1.*t12780*t4297;
  t12926 = t4091*t12780;
  t12927 = t12797*t8036;
  t12929 = t8217*t12912;
  t12930 = t12785*t4297;
  t12978 = 3.2*t9034*t9896;
  t12979 = 3.2*t9584*t9896;
  t12980 = 3.2*t7693*t11925;
  t12981 = 3.2*t9874*t12682;
  t12982 = t12978 + t12979 + t12980 + t12981;
  t12962 = 6.4*t9896*t11925;
  t12963 = 6.4*t9896*t12682;
  t12964 = t12962 + t12963;
  t12966 = 3.2*t9896*t8242;
  t12967 = 3.2*t9244*t11925;
  t12968 = 3.2*t9896*t4413;
  t12969 = 3.2*t9244*t12682;
  t12970 = t12966 + t12967 + t12968 + t12969;
  t12972 = 3.2*t9896*t12793;
  t12973 = 3.2*t9896*t12820;
  t12974 = 3.2*t12831*t12682;
  t12975 = 3.2*t11925*t12847;
  t12976 = t12972 + t12973 + t12974 + t12975;
  t12591 = -1.*t4167*t4091;
  t12617 = t12591 + t12602;
  t9902 = -1.*t4167*t8036;
  t9903 = t9902 + t9139;
  t9893 = 6.4*t8242*t9244;
  t9934 = 3.2*t9896*t9903;
  t12545 = 3.2*t11410*t11925;
  t12546 = 6.4*t9244*t4413;
  t12618 = 3.2*t9896*t12617;
  t12683 = 3.2*t11410*t12682;
  t12704 = t9893 + t9934 + t12545 + t12546 + t12618 + t12683;
  t12895 = t12894*t8217;
  t12896 = t8036*t12785;
  t12900 = t12895 + t12799 + t12806 + t12896;
  t12908 = -1.*t4091*t12808;
  t12914 = -1.*t12894*t4297;
  t12915 = -1.*t12797*t4297;
  t12917 = t12906 + t12790 + t12907 + t12908 + t12913 + t12914 + t12915 + t12916;
  t12919 = -1.*t4091*t12894;
  t12920 = -1.*t8217*t12785;
  t12921 = t12919 + t12837 + t12920 + t12839;
  t12924 = t4091*t12894;
  t12925 = t4091*t12797;
  t12928 = t8217*t12808;
  t12931 = t12924 + t12925 + t12926 + t12927 + t12830 + t12928 + t12929 + t12930;
  t13012 = -0.384*var2[4]*t12872;
  t12940 = -1.*t4960*t271;
  t12941 = 0.24*t7064;
  t12942 = t12940 + t12941;
  t13014 = 3.2*t9034*t4413;
  t13016 = 3.2*t9874*t12872;
  t13019 = Power(t9244,2);
  t13020 = 6.4*t13019;
  t13021 = 6.4*t8242*t4413;
  t13022 = Power(t4413,2);
  t13023 = 6.4*t13022;
  t13024 = 6.4*t9244*t12872;
  t13025 = t13020 + t13021 + t13023 + t13024;
  t13026 = -0.5*var2[1]*t13025;
  t13027 = -0.5*var2[0]*t12876;
  t13028 = 3.2*t12793*t4413;
  t13031 = 3.2*t12831*t12872;
  t12949 = -2.*t4091*t12808;
  t12950 = -2.*t12797*t4297;
  t12951 = t12906 + t12907 + t12949 + t12913 + t12950 + t12916;
  t12954 = 2.*t4091*t12797;
  t12955 = 2.*t8217*t12808;
  t12956 = t12954 + t12926 + t12927 + t12955 + t12929 + t12930;
  t12971 = -0.5*var2[4]*t12970;
  t12794 = 3.2*t9244*t12793;
  t12821 = 3.2*t9244*t12820;
  t12832 = 3.2*t12831*t4413;
  t12848 = 3.2*t8242*t12847;
  t12849 = t12794 + t12821 + t12832 + t12848;
  t8399 = 3.2*t7693*t8242;
  t9323 = 3.2*t9034*t9244;
  t9832 = 3.2*t9584*t9244;
  t9875 = 3.2*t9874*t4413;
  t9890 = t8399 + t9323 + t9832 + t9875;
  t9892 = -0.5*var2[3]*t9890;
  t13054 = t9893 + t12546;
  t12852 = -0.5*var2[2]*t12849;
  t13004 = 3.2*t11410*t12793;
  t13005 = 3.2*t11410*t12820;
  t13006 = 3.2*t12831*t12617;
  t13007 = 3.2*t9903*t12847;
  t13008 = t13004 + t13005 + t13006 + t13007;
  t12901 = 3.2*t12900*t12682;
  t12905 = 3.2*t12820*t12682;
  t12918 = 3.2*t11925*t12917;
  t12922 = 3.2*t9896*t12921;
  t12923 = 3.2*t9896*t12847;
  t12932 = 3.2*t9896*t12931;
  t12933 = t12891 + t12892 + t12901 + t12905 + t12918 + t12922 + t12923 + t12932;
  t13029 = 3.2*t12900*t4413;
  t13030 = 3.2*t12820*t4413;
  t13032 = 3.2*t8242*t12917;
  t13033 = 3.2*t9244*t12921;
  t13034 = 3.2*t9244*t12847;
  t13035 = 3.2*t9244*t12931;
  t13036 = t13028 + t13029 + t13030 + t13031 + t13032 + t13033 + t13034 + t13035;
  t12948 = 6.4*t12820*t12682;
  t12952 = 3.2*t11925*t12951;
  t12953 = 6.4*t9896*t12847;
  t12957 = 3.2*t9896*t12956;
  t12958 = t12891 + t12892 + t12948 + t12952 + t12953 + t12957;
  t13046 = 6.4*t12820*t4413;
  t13047 = 3.2*t8242*t12951;
  t13048 = 6.4*t9244*t12847;
  t13049 = 3.2*t9244*t12956;
  t13050 = t13028 + t13046 + t13031 + t13047 + t13048 + t13049;
  t12977 = -0.5*var2[4]*t12976;
  t13056 = -0.5*var2[4]*t12849;
  t13108 = 3.2*t7693*t12793;
  t13109 = 3.2*t9584*t12831;
  t13110 = 3.2*t9874*t12820;
  t13111 = 3.2*t9034*t12847;
  t13112 = t13108 + t13109 + t13110 + t13111;
  t13104 = 6.4*t12831*t12820;
  t13105 = 6.4*t12793*t12847;
  t13106 = t13104 + t13105;
  t12991 = 3.2*t9034*t11410;
  t12992 = 3.2*t9584*t11410;
  t12993 = 3.2*t7693*t9903;
  t12994 = 3.2*t9874*t12617;
  t12995 = t12991 + t12992 + t12993 + t12994;
  t13013 = 3.2*t7693*t9244;
  t13015 = 3.2*t9584*t4413;
  t13017 = t13013 + t13014 + t13015 + t13016;
  t12860 = 3.2*t7693*t9896;
  t12863 = 3.2*t9584*t12682;
  t12867 = t12860 + t12861 + t12862 + t12863;
  t13067 = 3.2*t9584*t12900;
  t13068 = 3.2*t9034*t12917;
  t13069 = 3.2*t7693*t12921;
  t13070 = 3.2*t9874*t12931;
  t13071 = t13067 + t13068 + t13069 + t13070;
  t13040 = 3.2*t9584*t8242;
  t13041 = 6.4*t7693*t9244;
  t13042 = 3.2*t12942*t9244;
  t13043 = 6.4*t9584*t4413;
  t13044 = t13040 + t13041 + t13042 + t13014 + t13043 + t13016;
  t12939 = 6.4*t7693*t9896;
  t12943 = 3.2*t12942*t9896;
  t12944 = 3.2*t9584*t11925;
  t12945 = 6.4*t9584*t12682;
  t12946 = t12939 + t12943 + t12944 + t12861 + t12862 + t12945;
  t13084 = 3.2*t9584*t12793;
  t13085 = 3.2*t12942*t12831;
  t13086 = 6.4*t9584*t12820;
  t13087 = 3.2*t9034*t12951;
  t13088 = 6.4*t7693*t12847;
  t13089 = 3.2*t9874*t12956;
  t13090 = t13084 + t13085 + t13086 + t13087 + t13088 + t13089;
  t12983 = -0.5*var2[4]*t12982;
  t13057 = -0.5*var2[4]*t9890;
  t13113 = -0.5*var2[4]*t13112;
  t13143 = 6.4*t7693*t9034;
  t13144 = 6.4*t9584*t9874;
  t13145 = t13143 + t13144;
  t13157 = -0.384*var2[0]*t12857;
  t13158 = -0.384*var2[1]*t12872;
  t4434 = -0.384*var2[4]*t4413;
  p_output1[0]=(t12852 + t4434 + t9892 - 0.5*(6.4*t11925*t9244 + 6.4*t12682*t9244 + 6.4*t4413*t9896 + 6.4*t8242*t9896)*var2[0] - 0.5*t12704*var2[1])*var2[4];
  p_output1[1]=(t12859 + t12877 + t12890 - 0.5*t12933*var2[2] - 0.5*t12867*var2[3])*var2[4];
  p_output1[2]=(t12859 + t12877 + t12890 - 0.5*t12958*var2[2] - 0.5*t12946*var2[3])*var2[4];
  p_output1[3]=-0.5*t12964*var2[4];
  p_output1[4]=t12971;
  p_output1[5]=t12977;
  p_output1[6]=t12983;
  p_output1[7]=-0.5*t12964*var2[0] - 0.5*t12970*var2[1] - 0.5*t12976*var2[2] - 0.5*t12982*var2[3] - 0.768*t12682*var2[4];
  p_output1[8]=var2[4]*(-0.5*t12704*var2[0] - 0.5*(6.4*t11410*t4413 + 6.4*t11410*t8242 + 6.4*t12617*t9244 + 6.4*t9244*t9903)*var2[1] - 0.5*t13008*var2[2] - 0.5*t12995*var2[3] - 0.384*t12617*var2[4]);
  p_output1[9]=(t13012 + t13026 + t13027 - 0.5*t13036*var2[2] - 0.5*t13017*var2[3])*var2[4];
  p_output1[10]=(t13012 + t13026 + t13027 - 0.5*t13050*var2[2] - 0.5*t13044*var2[3])*var2[4];
  p_output1[11]=t12971;
  p_output1[12]=-0.5*t13054*var2[4];
  p_output1[13]=t13056;
  p_output1[14]=t13057;
  p_output1[15]=t12852 + t9892 - 0.5*t12970*var2[0] - 0.5*t13054*var2[1] - 0.768*t4413*var2[4];
  p_output1[16]=(-0.5*t12849*var2[0] - 0.5*t13008*var2[1])*var2[4];
  p_output1[17]=var2[4]*(-0.5*t12933*var2[0] - 0.5*t13036*var2[1] - 0.5*(6.4*t12820*t12900 + 6.4*t12793*t12917 + 6.4*t12847*t12921 + 6.4*t12831*t12931)*var2[2] - 0.5*t13071*var2[3] - 0.384*t12931*var2[4]);
  p_output1[18]=var2[4]*(-0.5*t12958*var2[0] - 0.5*t13050*var2[1] - 0.5*(6.4*Power(t12820,2) + 6.4*Power(t12847,2) + 6.4*t12793*t12951 + 6.4*t12831*t12956)*var2[2] - 0.5*t13090*var2[3] - 0.384*t12956*var2[4]);
  p_output1[19]=t12977;
  p_output1[20]=t13056;
  p_output1[21]=-0.5*t13106*var2[4];
  p_output1[22]=t13113;
  p_output1[23]=-0.5*t12976*var2[0] - 0.5*t12849*var2[1] - 0.5*t13106*var2[2] - 0.5*t13112*var2[3] - 0.768*t12820*var2[4];
  p_output1[24]=(-0.5*t9890*var2[0] - 0.5*t12995*var2[1])*var2[4];
  p_output1[25]=(-0.5*t12867*var2[0] - 0.5*t13017*var2[1] - 0.5*t13071*var2[2])*var2[4];
  p_output1[26]=var2[4]*(-0.5*t12946*var2[0] - 0.5*t13044*var2[1] - 0.5*t13090*var2[2] - 0.5*(6.4*Power(t7693,2) + 6.4*t9034*t9584 + 6.4*Power(t9584,2) + 6.4*t12942*t9874)*var2[3] - 0.384*t12942*var2[4]);
  p_output1[27]=t12983;
  p_output1[28]=t13057;
  p_output1[29]=t13113;
  p_output1[30]=-0.5*t13145*var2[4];
  p_output1[31]=-0.5*t12982*var2[0] - 0.5*t9890*var2[1] - 0.5*t13112*var2[2] - 0.5*t13145*var2[3] - 0.768*t9584*var2[4];
  p_output1[32]=(-0.384*t4413*var2[0] - 0.384*t12617*var2[1])*var2[4];
  p_output1[33]=(t13157 + t13158 - 0.384*t12931*var2[2])*var2[4];
  p_output1[34]=(t13157 + t13158 - 0.384*t12956*var2[2] - 0.384*t12942*var2[3])*var2[4];
  p_output1[35]=-0.384*t12682*var2[4];
  p_output1[36]=t4434;
  p_output1[37]=-0.384*t12820*var2[4];
  p_output1[38]=-0.384*t9584*var2[4];
  p_output1[39]=-0.384*t12682*var2[0] - 0.384*t4413*var2[1] - 0.384*t12820*var2[2] - 0.384*t9584*var2[3];
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
