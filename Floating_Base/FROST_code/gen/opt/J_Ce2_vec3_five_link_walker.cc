/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:49:29 GMT-04:00
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
  double t696;
  double t640;
  double t663;
  double t697;
  double t708;
  double t639;
  double t695;
  double t702;
  double t704;
  double t707;
  double t716;
  double t720;
  double t721;
  double t722;
  double t758;
  double t3356;
  double t4508;
  double t4510;
  double t4532;
  double t4544;
  double t4839;
  double t4825;
  double t4828;
  double t4840;
  double t4831;
  double t4841;
  double t4842;
  double t4843;
  double t4844;
  double t4845;
  double t4846;
  double t4847;
  double t4862;
  double t8310;
  double t8403;
  double t9191;
  double t9274;
  double t9311;
  double t15206;
  double t15209;
  double t15215;
  double t15104;
  double t15200;
  double t15204;
  double t812;
  double t813;
  double t831;
  double t15735;
  double t16019;
  double t16060;
  double t4813;
  double t4644;
  double t4649;
  double t4661;
  double t4809;
  double t4814;
  double t17600;
  double t17908;
  double t19703;
  double t19712;
  double t19719;
  double t19172;
  double t19254;
  double t19624;
  double t4864;
  double t4866;
  double t5994;
  double t20067;
  double t20069;
  double t20070;
  double t14460;
  double t11053;
  double t11055;
  double t12798;
  double t14145;
  double t14745;
  double t20109;
  double t20120;
  double t17641;
  double t17647;
  double t17583;
  double t17607;
  double t17111;
  double t17121;
  double t19082;
  double t19086;
  double t20114;
  double t20115;
  double t20106;
  double t20112;
  double t20098;
  double t20099;
  double t20125;
  double t20126;
  double t20305;
  double t20308;
  double t20320;
  double t20322;
  double t20325;
  double t20326;
  double t20520;
  double t20521;
  double t20538;
  double t20560;
  double t20566;
  double t20595;
  double t857;
  double t4628;
  double t4638;
  double t4640;
  double t4552;
  double t4617;
  double t4619;
  double t4620;
  double t20813;
  double t20814;
  double t20815;
  double t20824;
  double t20825;
  double t15302;
  double t17021;
  double t17040;
  double t17101;
  double t17846;
  double t20132;
  double t20133;
  double t20134;
  double t20191;
  double t20192;
  double t20193;
  double t20850;
  double t20851;
  double t20262;
  double t20264;
  double t20265;
  double t20266;
  double t20296;
  double t20302;
  double t20321;
  double t20327;
  double t20328;
  double t20421;
  double t20430;
  double t20466;
  double t21096;
  double t21100;
  double t21105;
  double t20829;
  double t20834;
  double t20835;
  double t20841;
  double t20842;
  double t20843;
  double t20844;
  double t20846;
  double t20847;
  double t20848;
  double t20853;
  double t20859;
  double t20863;
  double t20991;
  double t21047;
  double t21095;
  double t21112;
  double t21114;
  double t21204;
  double t21634;
  double t21671;
  double t21391;
  double t21675;
  double t21676;
  double t21424;
  double t8176;
  double t10938;
  double t10942;
  double t10977;
  double t9556;
  double t9759;
  double t9915;
  double t9916;
  double t21719;
  double t21720;
  double t21721;
  double t21722;
  double t21723;
  double t19720;
  double t20071;
  double t20082;
  double t20093;
  double t20117;
  double t20203;
  double t20204;
  double t20205;
  double t20206;
  double t20210;
  double t20211;
  double t21736;
  double t21737;
  double t20476;
  double t20498;
  double t20501;
  double t20503;
  double t20506;
  double t20509;
  double t20542;
  double t20599;
  double t20602;
  double t20637;
  double t20648;
  double t20665;
  double t21756;
  double t21757;
  double t21759;
  double t21724;
  double t21725;
  double t21726;
  double t21729;
  double t21730;
  double t21731;
  double t21732;
  double t21733;
  double t21734;
  double t21735;
  double t21740;
  double t21747;
  double t21748;
  double t21750;
  double t21751;
  double t21755;
  double t21761;
  double t21762;
  double t21787;
  double t21836;
  double t21837;
  double t21789;
  double t21847;
  double t21848;
  double t21791;
  double t20198;
  double t20200;
  double t20215;
  double t20225;
  double t21877;
  double t21878;
  double t21879;
  double t21880;
  double t21881;
  double t21882;
  double t21883;
  double t21884;
  double t21885;
  double t21887;
  double t21888;
  double t21889;
  double t21894;
  double t21898;
  double t21902;
  double t21903;
  double t21904;
  double t21905;
  double t21906;
  double t21907;
  double t21908;
  double t21909;
  double t21910;
  double t21911;
  double t21917;
  double t21918;
  double t21921;
  double t21928;
  double t21932;
  double t21933;
  double t21948;
  double t21949;
  double t21950;
  double t21951;
  double t18076;
  double t18109;
  double t18798;
  double t20121;
  double t20123;
  double t20124;
  double t17579;
  double t17609;
  double t18082;
  double t19137;
  double t20100;
  double t20113;
  double t20122;
  double t20129;
  double t20130;
  double t21979;
  double t21996;
  double t22002;
  double t20854;
  double t22022;
  double t21107;
  double t21119;
  double t21120;
  double t21331;
  double t21420;
  double t21425;
  double t22032;
  double t22033;
  double t21519;
  double t21520;
  double t21521;
  double t21481;
  double t21498;
  double t21517;
  double t22034;
  double t22037;
  double t22038;
  double t22039;
  double t22040;
  double t21605;
  double t22044;
  double t21674;
  double t21681;
  double t21682;
  double t22046;
  double t21685;
  double t21686;
  double t21687;
  double t21991;
  double t22010;
  double t22011;
  double t21741;
  double t22025;
  double t21760;
  double t21784;
  double t21785;
  double t21788;
  double t21790;
  double t21792;
  double t22065;
  double t22066;
  double t21802;
  double t21809;
  double t21813;
  double t21798;
  double t21799;
  double t21800;
  double t22067;
  double t22070;
  double t22071;
  double t22072;
  double t22073;
  double t21832;
  double t22077;
  double t21843;
  double t21849;
  double t21853;
  double t22079;
  double t21864;
  double t21865;
  double t21866;
  double t21919;
  double t803;
  double t4622;
  double t4815;
  double t4821;
  double t4822;
  double t4863;
  double t10937;
  double t15036;
  double t15041;
  double t15096;
  double t22098;
  double t22099;
  double t22100;
  double t22101;
  double t22102;
  double t22103;
  double t22104;
  double t20261;
  double t20329;
  double t20472;
  double t20621;
  double t20666;
  double t20669;
  double t22021;
  double t22023;
  double t22024;
  double t22026;
  double t22027;
  double t22028;
  double t21151;
  double t21430;
  double t21437;
  double t22045;
  double t22047;
  double t22048;
  double t21684;
  double t21689;
  double t21694;
  double t22059;
  double t22060;
  double t22061;
  double t21786;
  double t21793;
  double t21794;
  double t22078;
  double t22080;
  double t22081;
  double t21863;
  double t21869;
  double t21870;
  double t22092;
  double t22093;
  double t22094;
  double t21960;
  double t21961;
  double t21962;
  double t21963;
  double t21964;
  double t21965;
  double t21966;
  double t21967;
  double t20744;
  double t21983;
  double t21987;
  double t21988;
  double t20836;
  double t22035;
  double t21518;
  double t21587;
  double t21601;
  double t22052;
  double t22053;
  double t22054;
  double t21970;
  double t22110;
  double t22157;
  double t22158;
  double t22159;
  double t22160;
  double t21971;
  double t22111;
  double t21992;
  double t21993;
  double t21994;
  double t21727;
  double t22068;
  double t21801;
  double t21821;
  double t21827;
  double t22085;
  double t22086;
  double t22087;
  double t21972;
  double t22112;
  double t22183;
  double t22184;
  double t22185;
  double t22186;
  double t21973;
  double t22113;
  t696 = Cos(var1[3]);
  t640 = Cos(var1[4]);
  t663 = Sin(var1[3]);
  t697 = Sin(var1[4]);
  t708 = Cos(var1[2]);
  t639 = Sin(var1[2]);
  t695 = -1.*t640*t663;
  t702 = -1.*t696*t697;
  t704 = t695 + t702;
  t707 = -1.*t639*t704;
  t716 = t696*t640;
  t720 = -1.*t663*t697;
  t721 = t716 + t720;
  t722 = -1.*t708*t721;
  t758 = t707 + t722;
  t3356 = -1.*t640;
  t4508 = 1. + t3356;
  t4510 = 0.4*t4508;
  t4532 = 0.64*t640;
  t4544 = t4510 + t4532;
  t4839 = Cos(var1[5]);
  t4825 = Cos(var1[6]);
  t4828 = Sin(var1[5]);
  t4840 = Sin(var1[6]);
  t4831 = -1.*t4825*t4828;
  t4841 = -1.*t4839*t4840;
  t4842 = t4831 + t4841;
  t4843 = -1.*t639*t4842;
  t4844 = t4839*t4825;
  t4845 = -1.*t4828*t4840;
  t4846 = t4844 + t4845;
  t4847 = -1.*t708*t4846;
  t4862 = t4843 + t4847;
  t8310 = -1.*t4825;
  t8403 = 1. + t8310;
  t9191 = 0.4*t8403;
  t9274 = 0.64*t4825;
  t9311 = t9191 + t9274;
  t15206 = t708*t696;
  t15209 = -1.*t639*t663;
  t15215 = t15206 + t15209;
  t15104 = -1.*t696*t639;
  t15200 = -1.*t708*t663;
  t15204 = t15104 + t15200;
  t812 = -1.*t708*t696;
  t813 = t639*t663;
  t831 = t812 + t813;
  t15735 = t696*t639;
  t16019 = t708*t663;
  t16060 = t15735 + t16019;
  t4813 = -1.*t639*t721;
  t4644 = t640*t663;
  t4649 = t696*t697;
  t4661 = t4644 + t4649;
  t4809 = -1.*t708*t4661;
  t4814 = t4809 + t4813;
  t17600 = t708*t721;
  t17908 = t639*t721;
  t19703 = t708*t4839;
  t19712 = -1.*t639*t4828;
  t19719 = t19703 + t19712;
  t19172 = -1.*t4839*t639;
  t19254 = -1.*t708*t4828;
  t19624 = t19172 + t19254;
  t4864 = -1.*t708*t4839;
  t4866 = t639*t4828;
  t5994 = t4864 + t4866;
  t20067 = t4839*t639;
  t20069 = t708*t4828;
  t20070 = t20067 + t20069;
  t14460 = -1.*t639*t4846;
  t11053 = t4825*t4828;
  t11055 = t4839*t4840;
  t12798 = t11053 + t11055;
  t14145 = -1.*t708*t12798;
  t14745 = t14145 + t14460;
  t20109 = t708*t4846;
  t20120 = t639*t4846;
  t17641 = t639*t704;
  t17647 = t17641 + t17600;
  t17583 = -1.*t639*t4661;
  t17607 = t17583 + t17600;
  t17111 = t708*t704;
  t17121 = t17111 + t4813;
  t19082 = t708*t4661;
  t19086 = t19082 + t17908;
  t20114 = t639*t4842;
  t20115 = t20114 + t20109;
  t20106 = -1.*t639*t12798;
  t20112 = t20106 + t20109;
  t20098 = t708*t4842;
  t20099 = t20098 + t14460;
  t20125 = t708*t12798;
  t20126 = t20125 + t20120;
  t20305 = t4544*t663;
  t20308 = 0.24*t696*t697;
  t20320 = t20305 + t20308;
  t20322 = t696*t4544;
  t20325 = -0.24*t663*t697;
  t20326 = t20322 + t20325;
  t20520 = t9311*t4828;
  t20521 = 0.24*t4839*t4840;
  t20538 = t20520 + t20521;
  t20560 = t4839*t9311;
  t20566 = -0.24*t4828*t4840;
  t20595 = t20560 + t20566;
  t857 = 0.748*t831;
  t4628 = t4544*t697;
  t4638 = -0.24*t640*t697;
  t4640 = t4628 + t4638;
  t4552 = t4544*t640;
  t4617 = Power(t697,2);
  t4619 = 0.24*t4617;
  t4620 = t4552 + t4619;
  t20813 = -1.*t696*t640;
  t20814 = t663*t697;
  t20815 = t20813 + t20814;
  t20824 = t708*t20815;
  t20825 = t707 + t20824;
  t15302 = 20.4*t15204*t15215;
  t17021 = 6.8*t16060*t15215;
  t17040 = 20.4*t15204*t831;
  t17101 = 6.8*t16060*t831;
  t17846 = -1.*t708*t704;
  t20132 = Power(t15204,2);
  t20133 = 13.6*t20132;
  t20134 = 13.6*t15204*t16060;
  t20191 = Power(t15215,2);
  t20192 = 13.6*t20191;
  t20193 = 13.6*t15215*t831;
  t20850 = t639*t20815;
  t20851 = t17111 + t20850;
  t20262 = Power(t696,2);
  t20264 = 0.11*t20262;
  t20265 = Power(t663,2);
  t20266 = 0.11*t20265;
  t20296 = t20264 + t20266;
  t20302 = 6.8*t831*t20296;
  t20321 = -1.*t20320*t721;
  t20327 = -1.*t704*t20326;
  t20328 = t20321 + t20327;
  t20421 = t20320*t4661;
  t20430 = t721*t20326;
  t20466 = t20421 + t20430;
  t21096 = -1.*t4544*t663;
  t21100 = -0.24*t696*t697;
  t21105 = t21096 + t21100;
  t20829 = -0.384*var2[4]*t20825;
  t20834 = 3.2*t4640*t17121;
  t20835 = 3.2*t4620*t20825;
  t20841 = 6.4*t17607*t17121;
  t20842 = 3.2*t17647*t4814;
  t20843 = 3.2*t758*t19086;
  t20844 = 6.4*t17121*t20825;
  t20846 = -1.*t639*t20815;
  t20847 = t17846 + t20846;
  t20848 = 3.2*t17647*t20847;
  t20853 = 3.2*t758*t20851;
  t20859 = 6.4*t17647*t17607;
  t20863 = 6.4*t17121*t19086;
  t20991 = 6.4*t17647*t20825;
  t21047 = 6.4*t17121*t20851;
  t21095 = 3.2*t17121*t20328;
  t21112 = t20320*t721;
  t21114 = t704*t20326;
  t21204 = 3.2*t20466*t20825;
  t21634 = -0.24*t640*t663;
  t21671 = t21634 + t21100;
  t21391 = -1.*t704*t20320;
  t21675 = 0.24*t696*t640;
  t21676 = t21675 + t20325;
  t21424 = -1.*t20326*t20815;
  t8176 = 0.748*t5994;
  t10938 = t9311*t4840;
  t10942 = -0.24*t4825*t4840;
  t10977 = t10938 + t10942;
  t9556 = t9311*t4825;
  t9759 = Power(t4840,2);
  t9915 = 0.24*t9759;
  t9916 = t9556 + t9915;
  t21719 = -1.*t4839*t4825;
  t21720 = t4828*t4840;
  t21721 = t21719 + t21720;
  t21722 = t708*t21721;
  t21723 = t4843 + t21722;
  t19720 = 20.4*t19624*t19719;
  t20071 = 6.8*t20070*t19719;
  t20082 = 20.4*t19624*t5994;
  t20093 = 6.8*t20070*t5994;
  t20117 = -1.*t708*t4842;
  t20203 = Power(t19624,2);
  t20204 = 13.6*t20203;
  t20205 = 13.6*t19624*t20070;
  t20206 = Power(t19719,2);
  t20210 = 13.6*t20206;
  t20211 = 13.6*t19719*t5994;
  t21736 = t639*t21721;
  t21737 = t20098 + t21736;
  t20476 = Power(t4839,2);
  t20498 = 0.11*t20476;
  t20501 = Power(t4828,2);
  t20503 = 0.11*t20501;
  t20506 = t20498 + t20503;
  t20509 = 6.8*t5994*t20506;
  t20542 = -1.*t20538*t4846;
  t20599 = -1.*t4842*t20595;
  t20602 = t20542 + t20599;
  t20637 = t20538*t12798;
  t20648 = t4846*t20595;
  t20665 = t20637 + t20648;
  t21756 = -1.*t9311*t4828;
  t21757 = -0.24*t4839*t4840;
  t21759 = t21756 + t21757;
  t21724 = -0.384*var2[6]*t21723;
  t21725 = 3.2*t10977*t20099;
  t21726 = 3.2*t9916*t21723;
  t21729 = 6.4*t20112*t20099;
  t21730 = 3.2*t20115*t14745;
  t21731 = 3.2*t4862*t20126;
  t21732 = 6.4*t20099*t21723;
  t21733 = -1.*t639*t21721;
  t21734 = t20117 + t21733;
  t21735 = 3.2*t20115*t21734;
  t21740 = 3.2*t4862*t21737;
  t21747 = 6.4*t20115*t20112;
  t21748 = 6.4*t20099*t20126;
  t21750 = 6.4*t20115*t21723;
  t21751 = 6.4*t20099*t21737;
  t21755 = 3.2*t20099*t20602;
  t21761 = t20538*t4846;
  t21762 = t4842*t20595;
  t21787 = 3.2*t20665*t21723;
  t21836 = -0.24*t4825*t4828;
  t21837 = t21836 + t21757;
  t21789 = -1.*t4842*t20538;
  t21847 = 0.24*t4839*t4825;
  t21848 = t21847 + t20566;
  t21791 = -1.*t20595*t21721;
  t20198 = Power(t17607,2);
  t20200 = Power(t17121,2);
  t20215 = Power(t20112,2);
  t20225 = Power(t20099,2);
  t21877 = 13.6*t15204*t15215;
  t21878 = 13.6*t16060*t15215;
  t21879 = 6.4*t17647*t17121;
  t21880 = 6.4*t17607*t19086;
  t21881 = 13.6*t19624*t19719;
  t21882 = 13.6*t20070*t19719;
  t21883 = 6.4*t20115*t20099;
  t21884 = 6.4*t20112*t20126;
  t21885 = t21877 + t21878 + t21879 + t21880 + t21881 + t21882 + t21883 + t21884;
  t21887 = 6.8*t20132;
  t21888 = 6.8*t15204*t16060;
  t21889 = 6.8*t20191;
  t21894 = 6.8*t15215*t831;
  t21898 = 3.2*t758*t17647;
  t21902 = 3.2*t20198;
  t21903 = 3.2*t20200;
  t21904 = 3.2*t4814*t19086;
  t21905 = 6.8*t20203;
  t21906 = 6.8*t19624*t20070;
  t21907 = 6.8*t20206;
  t21908 = 6.8*t19719*t5994;
  t21909 = 3.2*t4862*t20115;
  t21910 = 3.2*t20215;
  t21911 = 3.2*t20225;
  t21917 = 3.2*t14745*t20126;
  t21918 = t21887 + t21888 + t21889 + t21894 + t21898 + t21902 + t21903 + t21904 + t21905 + t21906 + t21907 + t21908 + t21909 + t21910 + t21911 + t21917;
  t21921 = 0.748*t15204;
  t21928 = 3.2*t4640*t17607;
  t21932 = 3.2*t4620*t17121;
  t21933 = t21921 + t21928 + t21932;
  t21948 = 0.748*t19624;
  t21949 = 3.2*t10977*t20112;
  t21950 = 3.2*t9916*t20099;
  t21951 = t21948 + t21949 + t21950;
  t18076 = t17846 + t17908;
  t18109 = t639*t4661;
  t18798 = t18109 + t722;
  t20121 = t20117 + t20120;
  t20123 = t639*t12798;
  t20124 = t20123 + t4847;
  t17579 = 9.6*t758*t17121;
  t17609 = 9.6*t17607*t4814;
  t18082 = 3.2*t17647*t18076;
  t19137 = 3.2*t18798*t19086;
  t20100 = 9.6*t4862*t20099;
  t20113 = 9.6*t20112*t14745;
  t20122 = 3.2*t20115*t20121;
  t20129 = 3.2*t20124*t20126;
  t20130 = t15302 + t17021 + t17040 + t17101 + t17579 + t17609 + t18082 + t19137 + t19720 + t20071 + t20082 + t20093 + t20100 + t20113 + t20122 + t20129;
  t21979 = 0.748*t16060;
  t21996 = Power(t831,2);
  t22002 = 13.6*t21996;
  t20854 = t15302 + t17021 + t17040 + t17101 + t20841 + t20842 + t20843 + t20844 + t20848 + t20853;
  t22022 = 6.8*t16060*t20296;
  t21107 = t21105*t721;
  t21119 = t4661*t20326;
  t21120 = t21107 + t21112 + t21114 + t21119;
  t21331 = -1.*t704*t21105;
  t21420 = -1.*t721*t20326;
  t21425 = t21331 + t21391 + t21420 + t21424;
  t22032 = -0.384*var2[4]*t20847;
  t22033 = 3.2*t4640*t758;
  t21519 = -1.*t4544*t697;
  t21520 = 0.24*t640*t697;
  t21521 = t21519 + t21520;
  t21481 = Power(t640,2);
  t21498 = -0.24*t21481;
  t21517 = t4552 + t21498;
  t22034 = 3.2*t4620*t20847;
  t22037 = 6.4*t758*t17607;
  t22038 = 6.4*t17121*t4814;
  t22039 = 6.4*t758*t20825;
  t22040 = 6.4*t17121*t20847;
  t21605 = t20841 + t20842 + t20843 + t20844 + t20848 + t20853;
  t22044 = 3.2*t758*t20328;
  t21674 = t21671*t721;
  t21681 = t4661*t21676;
  t21682 = t21674 + t21112 + t21114 + t21681;
  t22046 = 3.2*t20466*t20847;
  t21685 = -1.*t704*t21671;
  t21686 = -1.*t721*t21676;
  t21687 = t21685 + t21391 + t21686 + t21424;
  t21991 = 0.748*t20070;
  t22010 = Power(t5994,2);
  t22011 = 13.6*t22010;
  t21741 = t19720 + t20071 + t20082 + t20093 + t21729 + t21730 + t21731 + t21732 + t21735 + t21740;
  t22025 = 6.8*t20070*t20506;
  t21760 = t21759*t4846;
  t21784 = t12798*t20595;
  t21785 = t21760 + t21761 + t21762 + t21784;
  t21788 = -1.*t4842*t21759;
  t21790 = -1.*t4846*t20595;
  t21792 = t21788 + t21789 + t21790 + t21791;
  t22065 = -0.384*var2[6]*t21734;
  t22066 = 3.2*t10977*t4862;
  t21802 = -1.*t9311*t4840;
  t21809 = 0.24*t4825*t4840;
  t21813 = t21802 + t21809;
  t21798 = Power(t4825,2);
  t21799 = -0.24*t21798;
  t21800 = t9556 + t21799;
  t22067 = 3.2*t9916*t21734;
  t22070 = 6.4*t4862*t20112;
  t22071 = 6.4*t20099*t14745;
  t22072 = 6.4*t4862*t21723;
  t22073 = 6.4*t20099*t21734;
  t21832 = t21729 + t21730 + t21731 + t21732 + t21735 + t21740;
  t22077 = 3.2*t4862*t20602;
  t21843 = t21837*t4846;
  t21849 = t12798*t21848;
  t21853 = t21843 + t21761 + t21762 + t21849;
  t22079 = 3.2*t20665*t21734;
  t21864 = -1.*t4842*t21837;
  t21865 = -1.*t4846*t21848;
  t21866 = t21864 + t21789 + t21865 + t21791;
  t21919 = -0.5*var2[2]*t21918;
  t803 = -0.384*var2[4]*t758;
  t4622 = 3.2*t4620*t758;
  t4815 = 3.2*t4640*t4814;
  t4821 = t857 + t4622 + t4815;
  t4822 = -0.5*var2[3]*t4821;
  t4863 = -0.384*var2[6]*t4862;
  t10937 = 3.2*t9916*t4862;
  t15036 = 3.2*t10977*t14745;
  t15041 = t8176 + t10937 + t15036;
  t15096 = -0.5*var2[5]*t15041;
  t22098 = 13.6*t15204*t831;
  t22099 = 6.4*t758*t17121;
  t22100 = 6.4*t17607*t4814;
  t22101 = 13.6*t19624*t5994;
  t22102 = 6.4*t4862*t20099;
  t22103 = 6.4*t20112*t14745;
  t22104 = t21877 + t22098 + t22099 + t22100 + t21881 + t22101 + t22102 + t22103;
  t20261 = -2.88*t708;
  t20329 = 3.2*t4814*t20328;
  t20472 = 3.2*t758*t20466;
  t20621 = 3.2*t14745*t20602;
  t20666 = 3.2*t4862*t20665;
  t20669 = t20261 + t20302 + t20329 + t20472 + t20509 + t20621 + t20666;
  t22021 = 2.88*t639;
  t22023 = 3.2*t18798*t20328;
  t22024 = 3.2*t18076*t20466;
  t22026 = 3.2*t20124*t20602;
  t22027 = 3.2*t20121*t20665;
  t22028 = t22021 + t22022 + t22023 + t22024 + t22025 + t22026 + t22027;
  t21151 = 3.2*t17121*t21120;
  t21430 = 3.2*t17607*t21425;
  t21437 = t20302 + t21095 + t21151 + t21204 + t21430;
  t22045 = 3.2*t758*t21120;
  t22047 = 3.2*t4814*t21425;
  t22048 = t22022 + t22044 + t22045 + t22046 + t22047;
  t21684 = 3.2*t17121*t21682;
  t21689 = 3.2*t17607*t21687;
  t21694 = t21095 + t21684 + t21204 + t21689;
  t22059 = 3.2*t758*t21682;
  t22060 = 3.2*t4814*t21687;
  t22061 = t22044 + t22059 + t22046 + t22060;
  t21786 = 3.2*t20099*t21785;
  t21793 = 3.2*t20112*t21792;
  t21794 = t20509 + t21755 + t21786 + t21787 + t21793;
  t22078 = 3.2*t4862*t21785;
  t22080 = 3.2*t14745*t21792;
  t22081 = t22025 + t22077 + t22078 + t22079 + t22080;
  t21863 = 3.2*t20099*t21853;
  t21869 = 3.2*t20112*t21866;
  t21870 = t21755 + t21863 + t21787 + t21869;
  t22092 = 3.2*t4862*t21853;
  t22093 = 3.2*t14745*t21866;
  t22094 = t22077 + t22092 + t22079 + t22093;
  t21960 = -2.88*t639;
  t21961 = 6.8*t15204*t20296;
  t21962 = 3.2*t17607*t20328;
  t21963 = 3.2*t17121*t20466;
  t21964 = 6.8*t19624*t20506;
  t21965 = 3.2*t20112*t20602;
  t21966 = 3.2*t20099*t20665;
  t21967 = t21960 + t21961 + t21962 + t21963 + t21964 + t21965 + t21966;
  t20744 = -0.5*var2[2]*t20669;
  t21983 = 3.2*t4640*t18798;
  t21987 = 3.2*t4620*t18076;
  t21988 = t21979 + t21983 + t21987;
  t20836 = t857 + t20834 + t20835;
  t22035 = t21979 + t22033 + t22034;
  t21518 = 3.2*t21517*t17607;
  t21587 = 3.2*t21521*t17121;
  t21601 = t21518 + t20834 + t21587 + t20835;
  t22052 = 3.2*t21521*t758;
  t22053 = 3.2*t21517*t4814;
  t22054 = t22033 + t22052 + t22053 + t22034;
  t21970 = -0.5*var2[2]*t21933;
  t22110 = -0.5*var2[2]*t4821;
  t22157 = -0.384*var2[0]*t20825;
  t22158 = -0.384*var2[1]*t20847;
  t22159 = t22157 + t22158;
  t22160 = var2[2]*t22159;
  t21971 = -0.384*var2[2]*t17121;
  t22111 = -0.384*var2[2]*t758;
  t21992 = 3.2*t10977*t20124;
  t21993 = 3.2*t9916*t20121;
  t21994 = t21991 + t21992 + t21993;
  t21727 = t8176 + t21725 + t21726;
  t22068 = t21991 + t22066 + t22067;
  t21801 = 3.2*t21800*t20112;
  t21821 = 3.2*t21813*t20099;
  t21827 = t21801 + t21725 + t21821 + t21726;
  t22085 = 3.2*t21813*t4862;
  t22086 = 3.2*t21800*t14745;
  t22087 = t22066 + t22085 + t22086 + t22067;
  t21972 = -0.5*var2[2]*t21951;
  t22112 = -0.5*var2[2]*t15041;
  t22183 = -0.384*var2[0]*t21723;
  t22184 = -0.384*var2[1]*t21734;
  t22185 = t22183 + t22184;
  t22186 = var2[2]*t22185;
  t21973 = -0.384*var2[2]*t20099;
  t22113 = -0.384*var2[2]*t4862;
  p_output1[0]=(t15096 + t20744 + t4822 + t4863 + t803 - 0.5*(6.4*t14745*t20126 + t20133 + t20134 + t20192 + t20193 + 6.4*t20198 + 6.4*t20200 + t20204 + t20205 + t20210 + t20211 + 6.4*t20215 + 6.4*t20225 + 6.4*t19086*t4814 + 6.4*t20115*t4862 + 6.4*t17647*t758)*var2[0] - 0.5*t20130*var2[1])*var2[2];
  p_output1[1]=var2[2]*(t20829 - 0.5*(t20133 + t20134 + t20192 + t20193 + t20859 + t20863 + t20991 + t21047)*var2[0] - 0.5*t20854*var2[1] - 0.5*t21437*var2[2] - 0.5*t20836*var2[3]);
  p_output1[2]=var2[2]*(t20829 - 0.5*(t20859 + t20863 + t20991 + t21047)*var2[0] - 0.5*t21605*var2[1] - 0.5*t21694*var2[2] - 0.5*t21601*var2[3]);
  p_output1[3]=var2[2]*(t21724 - 0.5*(t20204 + t20205 + t20210 + t20211 + t21747 + t21748 + t21750 + t21751)*var2[0] - 0.5*t21741*var2[1] - 0.5*t21794*var2[2] - 0.5*t21727*var2[5]);
  p_output1[4]=var2[2]*(t21724 - 0.5*(t21747 + t21748 + t21750 + t21751)*var2[0] - 0.5*t21832*var2[1] - 0.5*t21870*var2[2] - 0.5*t21827*var2[5]);
  p_output1[5]=-0.5*t21885*var2[2];
  p_output1[6]=t21919;
  p_output1[7]=-0.5*t21885*var2[0] - 0.5*t21918*var2[1] - 1.*t21967*var2[2] - 0.5*t21933*var2[3] - 0.384*t17121*var2[4] - 0.5*t21951*var2[5] - 0.384*t20099*var2[6];
  p_output1[8]=t21970;
  p_output1[9]=t21971;
  p_output1[10]=t21972;
  p_output1[11]=t21973;
  p_output1[12]=var2[2]*(-0.5*t20130*var2[0] - 0.5*(6.4*Power(t14745,2) + 6.4*t17121*t18076 + 6.4*t17607*t18798 + 6.4*t20099*t20121 + 6.4*t20112*t20124 + t20133 + t20134 + t20193 + t20204 + t20205 + t20211 + t22002 + t22011 + 6.4*Power(t4814,2) + 6.4*Power(t4862,2) + 6.4*Power(t758,2))*var2[1] - 0.5*t22028*var2[2] - 0.5*t21988*var2[3] - 0.384*t18076*var2[4] - 0.5*t21994*var2[5] - 0.384*t20121*var2[6]);
  p_output1[13]=var2[2]*(t22032 - 0.5*t20854*var2[0] - 0.5*(t20133 + t20134 + t20193 + t22002 + t22037 + t22038 + t22039 + t22040)*var2[1] - 0.5*t22048*var2[2] - 0.5*t22035*var2[3]);
  p_output1[14]=var2[2]*(t22032 - 0.5*t21605*var2[0] - 0.5*(t22037 + t22038 + t22039 + t22040)*var2[1] - 0.5*t22061*var2[2] - 0.5*t22054*var2[3]);
  p_output1[15]=var2[2]*(t22065 - 0.5*t21741*var2[0] - 0.5*(t20204 + t20205 + t20211 + t22011 + t22070 + t22071 + t22072 + t22073)*var2[1] - 0.5*t22081*var2[2] - 0.5*t22068*var2[5]);
  p_output1[16]=var2[2]*(t22065 - 0.5*t21832*var2[0] - 0.5*(t22070 + t22071 + t22072 + t22073)*var2[1] - 0.5*t22094*var2[2] - 0.5*t22087*var2[5]);
  p_output1[17]=t21919;
  p_output1[18]=-0.5*t22104*var2[2];
  p_output1[19]=t15096 + t4822 + t4863 + t803 - 0.5*t21918*var2[0] - 0.5*t22104*var2[1] - 1.*t20669*var2[2];
  p_output1[20]=t22110;
  p_output1[21]=t22111;
  p_output1[22]=t22112;
  p_output1[23]=t22113;
  p_output1[24]=(-0.5*t20669*var2[0] - 0.5*t22028*var2[1])*var2[2];
  p_output1[25]=(-0.5*t21437*var2[0] - 0.5*t22048*var2[1])*var2[2];
  p_output1[26]=(-0.5*t21694*var2[0] - 0.5*t22061*var2[1])*var2[2];
  p_output1[27]=(-0.5*t21794*var2[0] - 0.5*t22081*var2[1])*var2[2];
  p_output1[28]=(-0.5*t21870*var2[0] - 0.5*t22094*var2[1])*var2[2];
  p_output1[29]=-0.5*t21967*var2[2];
  p_output1[30]=t20744;
  p_output1[31]=-0.5*t21967*var2[0] - 0.5*t20669*var2[1];
  p_output1[32]=(-0.5*t4821*var2[0] - 0.5*t21988*var2[1])*var2[2];
  p_output1[33]=(-0.5*t20836*var2[0] - 0.5*t22035*var2[1])*var2[2];
  p_output1[34]=(-0.5*t21601*var2[0] - 0.5*t22054*var2[1])*var2[2];
  p_output1[35]=t21970;
  p_output1[36]=t22110;
  p_output1[37]=-0.5*t21933*var2[0] - 0.5*t4821*var2[1];
  p_output1[38]=(-0.384*t758*var2[0] - 0.384*t18076*var2[1])*var2[2];
  p_output1[39]=t22160;
  p_output1[40]=t22160;
  p_output1[41]=t21971;
  p_output1[42]=t22111;
  p_output1[43]=-0.384*t17121*var2[0] - 0.384*t758*var2[1];
  p_output1[44]=(-0.5*t15041*var2[0] - 0.5*t21994*var2[1])*var2[2];
  p_output1[45]=(-0.5*t21727*var2[0] - 0.5*t22068*var2[1])*var2[2];
  p_output1[46]=(-0.5*t21827*var2[0] - 0.5*t22087*var2[1])*var2[2];
  p_output1[47]=t21972;
  p_output1[48]=t22112;
  p_output1[49]=-0.5*t21951*var2[0] - 0.5*t15041*var2[1];
  p_output1[50]=(-0.384*t4862*var2[0] - 0.384*t20121*var2[1])*var2[2];
  p_output1[51]=t22186;
  p_output1[52]=t22186;
  p_output1[53]=t21973;
  p_output1[54]=t22113;
  p_output1[55]=-0.384*t20099*var2[0] - 0.384*t4862*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 56, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec3_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
