/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:49:49 GMT-04:00
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
  double t1127;
  double t30;
  double t965;
  double t1584;
  double t1700;
  double t25;
  double t1066;
  double t1635;
  double t1697;
  double t1732;
  double t1733;
  double t1734;
  double t1736;
  double t1737;
  double t1699;
  double t1705;
  double t1706;
  double t1711;
  double t1718;
  double t1719;
  double t1777;
  double t1778;
  double t1781;
  double t1772;
  double t1774;
  double t1775;
  double t1726;
  double t1727;
  double t1729;
  double t1783;
  double t1784;
  double t1785;
  double t1743;
  double t1744;
  double t1745;
  double t1742;
  double t1746;
  double t1747;
  double t1796;
  double t1791;
  double t1792;
  double t1793;
  double t1801;
  double t1807;
  double t1818;
  double t1819;
  double t1795;
  double t1798;
  double t1820;
  double t1827;
  double t1828;
  double t2158;
  double t2188;
  double t6599;
  double t6637;
  double t6638;
  double t6667;
  double t6673;
  double t6674;
  double t6704;
  double t6709;
  double t6710;
  double t1730;
  double t1751;
  double t1758;
  double t1760;
  double t1761;
  double t6784;
  double t6785;
  double t1738;
  double t1739;
  double t1741;
  double t1782;
  double t1787;
  double t1788;
  double t1789;
  double t2052;
  double t2605;
  double t2606;
  double t2607;
  double t2879;
  double t2926;
  double t2927;
  double t5322;
  double t5854;
  double t6284;
  double t6366;
  double t6544;
  double t6545;
  double t6726;
  double t6727;
  double t6728;
  double t6639;
  double t6679;
  double t6698;
  double t6712;
  double t6715;
  double t6716;
  double t6717;
  double t6724;
  double t6731;
  double t6732;
  double t6736;
  double t6737;
  double t6738;
  double t7088;
  double t7091;
  double t7092;
  double t6786;
  double t6947;
  double t6952;
  double t6968;
  double t6986;
  double t6997;
  double t6998;
  double t7000;
  double t7001;
  double t7007;
  double t7016;
  double t7027;
  double t7028;
  double t7034;
  double t7035;
  double t7042;
  double t7046;
  double t7047;
  double t7162;
  double t7169;
  double t7051;
  double t7173;
  double t7174;
  double t7105;
  double t7113;
  double t7183;
  double t7184;
  double t7117;
  double t7257;
  double t7258;
  double t7259;
  double t7260;
  double t7261;
  double t7263;
  double t7264;
  double t7265;
  double t7266;
  double t7267;
  double t7268;
  double t7269;
  double t7270;
  double t7271;
  double t7273;
  double t7274;
  double t7275;
  double t7276;
  double t7277;
  double t7278;
  double t1907;
  double t2053;
  double t1808;
  double t1809;
  double t1799;
  double t1810;
  double t1829;
  double t1830;
  double t2057;
  double t2201;
  double t2249;
  double t7299;
  double t7304;
  double t7305;
  double t7008;
  double t7313;
  double t7049;
  double t7050;
  double t7098;
  double t7104;
  double t7107;
  double t7112;
  double t7114;
  double t7115;
  double t7116;
  double t7118;
  double t7322;
  double t7124;
  double t7125;
  double t7126;
  double t7323;
  double t7129;
  double t7130;
  double t7140;
  double t7324;
  double t7327;
  double t7328;
  double t7329;
  double t7330;
  double t7331;
  double t7332;
  double t7147;
  double t7336;
  double t7170;
  double t7175;
  double t7176;
  double t7338;
  double t7180;
  double t7181;
  double t7185;
  double t7186;
  double t7188;
  double t7189;
  double t7193;
  double t7194;
  double t7195;
  double t7197;
  double t7234;
  double t7237;
  double t7238;
  double t7244;
  double t7250;
  double t7272;
  double t6703;
  double t6725;
  double t6729;
  double t6740;
  double t6741;
  double t1720;
  double t1749;
  double t1767;
  double t1768;
  double t7363;
  double t7364;
  double t6744;
  double t7314;
  double t7315;
  double t7316;
  double t7317;
  double t7318;
  double t7048;
  double t7108;
  double t7110;
  double t7119;
  double t7120;
  double t7337;
  double t7339;
  double t7340;
  double t7341;
  double t7342;
  double t7161;
  double t7179;
  double t7190;
  double t7192;
  double t7196;
  double t7251;
  double t7252;
  double t7353;
  double t7354;
  double t7355;
  double t7356;
  double t7357;
  double t7358;
  double t7359;
  double t7282;
  double t7366;
  double t7414;
  double t7415;
  double t7416;
  double t7300;
  double t7301;
  double t7302;
  double t7325;
  double t6966;
  double t7377;
  double t7378;
  double t7379;
  double t7346;
  double t7347;
  double t7348;
  double t7128;
  double t7144;
  double t7145;
  double t7394;
  double t7395;
  double t7396;
  double t7397;
  double t7398;
  double t7284;
  double t7286;
  double t7290;
  double t7291;
  double t1771;
  double t7422;
  double t7423;
  double t7429;
  double t7482;
  double t7486;
  double t7297;
  double t7371;
  double t7435;
  t1127 = Cos(var1[5]);
  t30 = Cos(var1[6]);
  t965 = Sin(var1[5]);
  t1584 = Sin(var1[6]);
  t1700 = Cos(var1[2]);
  t25 = Sin(var1[2]);
  t1066 = -1.*t30*t965;
  t1635 = -1.*t1127*t1584;
  t1697 = t1066 + t1635;
  t1732 = -1.*t30;
  t1733 = 1. + t1732;
  t1734 = 0.4*t1733;
  t1736 = 0.64*t30;
  t1737 = t1734 + t1736;
  t1699 = -1.*t25*t1697;
  t1705 = -1.*t1127*t30;
  t1706 = t965*t1584;
  t1711 = t1705 + t1706;
  t1718 = t1700*t1711;
  t1719 = t1699 + t1718;
  t1777 = t1700*t1127;
  t1778 = -1.*t25*t965;
  t1781 = t1777 + t1778;
  t1772 = -1.*t1127*t25;
  t1774 = -1.*t1700*t965;
  t1775 = t1772 + t1774;
  t1726 = -1.*t1700*t1127;
  t1727 = t25*t965;
  t1729 = t1726 + t1727;
  t1783 = t1127*t25;
  t1784 = t1700*t965;
  t1785 = t1783 + t1784;
  t1743 = t1127*t30;
  t1744 = -1.*t965*t1584;
  t1745 = t1743 + t1744;
  t1742 = t1700*t1697;
  t1746 = -1.*t25*t1745;
  t1747 = t1742 + t1746;
  t1796 = t1700*t1745;
  t1791 = t30*t965;
  t1792 = t1127*t1584;
  t1793 = t1791 + t1792;
  t1801 = t25*t1697;
  t1807 = t1801 + t1796;
  t1818 = -1.*t1700*t1745;
  t1819 = t1699 + t1818;
  t1795 = -1.*t25*t1793;
  t1798 = t1795 + t1796;
  t1820 = t1700*t1793;
  t1827 = t25*t1745;
  t1828 = t1820 + t1827;
  t2158 = t25*t1711;
  t2188 = t1742 + t2158;
  t6599 = t1737*t965;
  t6637 = 0.24*t1127*t1584;
  t6638 = t6599 + t6637;
  t6667 = t1127*t1737;
  t6673 = -0.24*t965*t1584;
  t6674 = t6667 + t6673;
  t6704 = -1.*t1737*t965;
  t6709 = -0.24*t1127*t1584;
  t6710 = t6704 + t6709;
  t1730 = 0.748*t1729;
  t1751 = t1737*t30;
  t1758 = Power(t1584,2);
  t1760 = 0.24*t1758;
  t1761 = t1751 + t1760;
  t6784 = t25*t1793;
  t6785 = t6784 + t1718;
  t1738 = t1737*t1584;
  t1739 = -0.24*t30*t1584;
  t1741 = t1738 + t1739;
  t1782 = 20.4*t1775*t1781;
  t1787 = 6.8*t1785*t1781;
  t1788 = 20.4*t1775*t1729;
  t1789 = 6.8*t1785*t1729;
  t2052 = -1.*t25*t1711;
  t2605 = Power(t1775,2);
  t2606 = 13.6*t2605;
  t2607 = 13.6*t1775*t1785;
  t2879 = Power(t1781,2);
  t2926 = 13.6*t2879;
  t2927 = 13.6*t1781*t1729;
  t5322 = Power(t1127,2);
  t5854 = 0.11*t5322;
  t6284 = Power(t965,2);
  t6366 = 0.11*t6284;
  t6544 = t5854 + t6366;
  t6545 = 6.8*t1729*t6544;
  t6726 = t6638*t1793;
  t6727 = t1745*t6674;
  t6728 = t6726 + t6727;
  t6639 = -1.*t6638*t1745;
  t6679 = -1.*t1697*t6674;
  t6698 = t6639 + t6679;
  t6712 = t6710*t1745;
  t6715 = t6638*t1745;
  t6716 = t1697*t6674;
  t6717 = t1793*t6674;
  t6724 = t6712 + t6715 + t6716 + t6717;
  t6731 = -1.*t1697*t6710;
  t6732 = -1.*t1697*t6638;
  t6736 = -1.*t1745*t6674;
  t6737 = -1.*t6674*t1711;
  t6738 = t6731 + t6732 + t6736 + t6737;
  t7088 = -1.*t1127*t1737;
  t7091 = 0.24*t965*t1584;
  t7092 = t7088 + t7091;
  t6786 = -0.384*var2[6]*t6785;
  t6947 = 3.2*t1761*t6785;
  t6952 = 3.2*t1741*t2188;
  t6968 = 6.4*t1807*t1747;
  t6986 = 3.2*t1828*t1719;
  t6997 = 3.2*t1747*t6785;
  t6998 = t1820 + t2052;
  t7000 = 3.2*t1807*t6998;
  t7001 = 3.2*t1798*t2188;
  t7007 = 6.4*t1719*t2188;
  t7016 = Power(t1807,2);
  t7027 = 6.4*t7016;
  t7028 = 6.4*t1807*t6785;
  t7034 = 6.4*t1828*t2188;
  t7035 = Power(t2188,2);
  t7042 = 6.4*t7035;
  t7046 = 3.2*t6728*t6785;
  t7047 = 3.2*t6698*t2188;
  t7162 = -0.24*t30*t965;
  t7169 = t7162 + t6709;
  t7051 = -1.*t1793*t6674;
  t7173 = 0.24*t1127*t30;
  t7174 = t7173 + t6673;
  t7105 = -1.*t6638*t1711;
  t7113 = t1697*t6638;
  t7183 = -0.24*t1127*t30;
  t7184 = t7183 + t7091;
  t7117 = t6674*t1711;
  t7257 = 13.6*t1775*t1781;
  t7258 = 13.6*t1785*t1781;
  t7259 = 6.4*t1807*t1828;
  t7260 = 6.4*t1807*t2188;
  t7261 = t7257 + t7258 + t7259 + t7260;
  t7263 = 6.8*t2605;
  t7264 = 6.8*t1775*t1785;
  t7265 = 6.8*t2879;
  t7266 = 6.8*t1781*t1729;
  t7267 = 3.2*t1807*t1798;
  t7268 = 3.2*t1747*t1828;
  t7269 = 3.2*t1807*t1719;
  t7270 = 3.2*t1747*t2188;
  t7271 = t7263 + t7264 + t7265 + t7266 + t7267 + t7268 + t7269 + t7270;
  t7273 = 6.8*t1775*t6544;
  t7274 = 3.2*t1807*t6698;
  t7275 = 3.2*t1807*t6724;
  t7276 = 3.2*t6728*t2188;
  t7277 = 3.2*t1828*t6738;
  t7278 = t7273 + t7274 + t7275 + t7276 + t7277;
  t1907 = -1.*t1700*t1697;
  t2053 = t1907 + t2052;
  t1808 = -1.*t1700*t1793;
  t1809 = t1808 + t1746;
  t1799 = 6.4*t1798*t1747;
  t1810 = 3.2*t1807*t1809;
  t1829 = 3.2*t1819*t1828;
  t1830 = 6.4*t1747*t1719;
  t2057 = 3.2*t1807*t2053;
  t2201 = 3.2*t1819*t2188;
  t2249 = t1782 + t1787 + t1788 + t1789 + t1799 + t1810 + t1829 + t1830 + t2057 + t2201;
  t7299 = 0.748*t1785;
  t7304 = Power(t1729,2);
  t7305 = 13.6*t7304;
  t7008 = t1782 + t1787 + t1788 + t1789 + t6968 + t6986 + t6997 + t7000 + t7001 + t7007;
  t7313 = 6.8*t1785*t6544;
  t7049 = -1.*t6710*t1745;
  t7050 = -2.*t1697*t6674;
  t7098 = -1.*t1697*t7092;
  t7104 = -2.*t6710*t1711;
  t7107 = t7049 + t7050 + t7051 + t7098 + t7104 + t7105;
  t7112 = 2.*t1697*t6710;
  t7114 = t6710*t1793;
  t7115 = 2.*t1745*t6674;
  t7116 = t1745*t7092;
  t7118 = t7112 + t7113 + t7114 + t7115 + t7116 + t7117;
  t7322 = -0.384*var2[6]*t6998;
  t7124 = Power(t30,2);
  t7125 = -0.24*t7124;
  t7126 = t1751 + t7125;
  t7323 = 3.2*t1741*t1719;
  t7129 = -1.*t1737*t1584;
  t7130 = 0.24*t30*t1584;
  t7140 = t7129 + t7130;
  t7324 = 3.2*t1761*t6998;
  t7327 = Power(t1747,2);
  t7328 = 6.4*t7327;
  t7329 = 6.4*t1798*t1719;
  t7330 = Power(t1719,2);
  t7331 = 6.4*t7330;
  t7332 = 6.4*t1747*t6998;
  t7147 = t6968 + t6986 + t6997 + t7000 + t7001 + t7007;
  t7336 = 3.2*t6698*t1719;
  t7170 = t7169*t1745;
  t7175 = t1793*t7174;
  t7176 = t7170 + t6715 + t6716 + t7175;
  t7338 = 3.2*t6728*t6998;
  t7180 = -1.*t7169*t1745;
  t7181 = -1.*t1697*t7174;
  t7185 = -1.*t1697*t7184;
  t7186 = -1.*t6710*t1711;
  t7188 = -1.*t7169*t1711;
  t7189 = t7180 + t6679 + t7051 + t7181 + t7185 + t7186 + t7188 + t7105;
  t7193 = -1.*t1697*t7169;
  t7194 = -1.*t1745*t7174;
  t7195 = t7193 + t6732 + t7194 + t6737;
  t7197 = t1697*t6710;
  t7234 = t1697*t7169;
  t7237 = t7169*t1793;
  t7238 = t1745*t7174;
  t7244 = t1745*t7184;
  t7250 = t7197 + t7234 + t7113 + t7237 + t6727 + t7238 + t7244 + t7117;
  t7272 = -0.5*var2[5]*t7271;
  t6703 = 3.2*t1747*t6698;
  t6725 = 3.2*t1747*t6724;
  t6729 = 3.2*t6728*t1719;
  t6740 = 3.2*t1798*t6738;
  t6741 = t6545 + t6703 + t6725 + t6729 + t6740;
  t1720 = -0.384*var2[6]*t1719;
  t1749 = 3.2*t1741*t1747;
  t1767 = 3.2*t1761*t1719;
  t1768 = t1730 + t1749 + t1767;
  t7363 = 13.6*t1775*t1729;
  t7364 = t7257 + t7363 + t1799 + t1830;
  t6744 = -0.5*var2[2]*t6741;
  t7314 = 3.2*t1819*t6698;
  t7315 = 3.2*t1819*t6724;
  t7316 = 3.2*t6728*t2053;
  t7317 = 3.2*t1809*t6738;
  t7318 = t7313 + t7314 + t7315 + t7316 + t7317;
  t7048 = 6.4*t6724*t2188;
  t7108 = 3.2*t1828*t7107;
  t7110 = 6.4*t1807*t6738;
  t7119 = 3.2*t1807*t7118;
  t7120 = t6545 + t7046 + t7047 + t7048 + t7108 + t7110 + t7119;
  t7337 = 6.4*t6724*t1719;
  t7339 = 3.2*t1798*t7107;
  t7340 = 6.4*t1747*t6738;
  t7341 = 3.2*t1747*t7118;
  t7342 = t7313 + t7336 + t7337 + t7338 + t7339 + t7340 + t7341;
  t7161 = 3.2*t6724*t2188;
  t7179 = 3.2*t7176*t2188;
  t7190 = 3.2*t1828*t7189;
  t7192 = 3.2*t1807*t6738;
  t7196 = 3.2*t1807*t7195;
  t7251 = 3.2*t1807*t7250;
  t7252 = t7046 + t7047 + t7161 + t7179 + t7190 + t7192 + t7196 + t7251;
  t7353 = 3.2*t6724*t1719;
  t7354 = 3.2*t7176*t1719;
  t7355 = 3.2*t1798*t7189;
  t7356 = 3.2*t1747*t6738;
  t7357 = 3.2*t1747*t7195;
  t7358 = 3.2*t1747*t7250;
  t7359 = t7336 + t7353 + t7354 + t7338 + t7355 + t7356 + t7357 + t7358;
  t7282 = -0.5*var2[5]*t7278;
  t7366 = -0.5*var2[5]*t6741;
  t7414 = 6.4*t6724*t6728;
  t7415 = 6.4*t6698*t6738;
  t7416 = t7414 + t7415;
  t7300 = 3.2*t1741*t1819;
  t7301 = 3.2*t1761*t2053;
  t7302 = t7299 + t7300 + t7301;
  t7325 = t7299 + t7323 + t7324;
  t6966 = t1730 + t6947 + t6952;
  t7377 = 3.2*t1741*t7107;
  t7378 = 3.2*t1761*t7118;
  t7379 = t7377 + t7378;
  t7346 = 3.2*t7126*t1747;
  t7347 = 3.2*t7140*t1719;
  t7348 = t7346 + t7323 + t7347 + t7324;
  t7128 = 3.2*t7126*t1807;
  t7144 = 3.2*t7140*t2188;
  t7145 = t7128 + t6947 + t6952 + t7144;
  t7394 = 3.2*t7140*t6724;
  t7395 = 3.2*t1741*t7189;
  t7396 = 3.2*t7126*t6738;
  t7397 = 3.2*t1761*t7250;
  t7398 = t7394 + t7395 + t7396 + t7397;
  t7284 = 0.748*t1775;
  t7286 = 3.2*t1741*t1807;
  t7290 = 3.2*t1761*t2188;
  t7291 = t7284 + t7286 + t7290;
  t1771 = -0.5*var2[5]*t1768;
  t7422 = 3.2*t1761*t6724;
  t7423 = 3.2*t1741*t6738;
  t7429 = t7422 + t7423;
  t7482 = -0.384*var2[0]*t6785;
  t7486 = -0.384*var2[1]*t6998;
  t7297 = -0.384*var2[5]*t2188;
  t7371 = -0.384*var2[5]*t1719;
  t7435 = -0.384*var2[5]*t6724;
  p_output1[0]=(t1720 + t1771 + t6744 - 0.5*(6.4*t1719*t1807 + 6.4*t1798*t1807 + 6.4*t1747*t1828 + 6.4*t1747*t2188 + t2606 + t2607 + t2926 + t2927)*var2[0] - 0.5*t2249*var2[1])*var2[5];
  p_output1[1]=var2[5]*(t6786 - 0.5*(t2606 + t2607 + t2926 + t2927 + t7027 + t7028 + t7034 + t7042)*var2[0] - 0.5*t7008*var2[1] - 0.5*t7120*var2[2] - 0.5*t6966*var2[5]);
  p_output1[2]=var2[5]*(t6786 - 0.5*(t7027 + t7028 + t7034 + t7042)*var2[0] - 0.5*t7147*var2[1] - 0.5*t7252*var2[2] - 0.5*t7145*var2[5]);
  p_output1[3]=-0.5*t7261*var2[5];
  p_output1[4]=t7272;
  p_output1[5]=t7282;
  p_output1[6]=-0.5*t7261*var2[0] - 0.5*t7271*var2[1] - 0.5*t7278*var2[2] - 1.*t7291*var2[5] - 0.384*t2188*var2[6];
  p_output1[7]=t7297;
  p_output1[8]=var2[5]*(-0.5*t2249*var2[0] - 0.5*(6.4*t1747*t1809 + 6.4*t1719*t1819 + 6.4*t1798*t1819 + 6.4*t1747*t2053 + t2606 + t2607 + t2927 + t7305)*var2[1] - 0.5*t7318*var2[2] - 0.5*t7302*var2[5] - 0.384*t2053*var2[6]);
  p_output1[9]=var2[5]*(t7322 - 0.5*t7008*var2[0] - 0.5*(t2606 + t2607 + t2927 + t7305 + t7328 + t7329 + t7331 + t7332)*var2[1] - 0.5*t7342*var2[2] - 0.5*t7325*var2[5]);
  p_output1[10]=var2[5]*(t7322 - 0.5*t7147*var2[0] - 0.5*(t7328 + t7329 + t7331 + t7332)*var2[1] - 0.5*t7359*var2[2] - 0.5*t7348*var2[5]);
  p_output1[11]=t7272;
  p_output1[12]=-0.5*t7364*var2[5];
  p_output1[13]=t7366;
  p_output1[14]=t1720 + t6744 - 0.5*t7271*var2[0] - 0.5*t7364*var2[1] - 1.*t1768*var2[5];
  p_output1[15]=t7371;
  p_output1[16]=(-0.5*t6741*var2[0] - 0.5*t7318*var2[1])*var2[5];
  p_output1[17]=var2[5]*(-0.5*t7120*var2[0] - 0.5*t7342*var2[1] - 0.5*(6.4*Power(t6724,2) + 6.4*Power(t6738,2) + 6.4*t6698*t7107 + 6.4*t6728*t7118)*var2[2] - 0.5*t7379*var2[5] - 0.384*t7118*var2[6]);
  p_output1[18]=var2[5]*(-0.5*t7252*var2[0] - 0.5*t7359*var2[1] - 0.5*(6.4*t6724*t7176 + 6.4*t6698*t7189 + 6.4*t6738*t7195 + 6.4*t6728*t7250)*var2[2] - 0.5*t7398*var2[5] - 0.384*t7250*var2[6]);
  p_output1[19]=t7282;
  p_output1[20]=t7366;
  p_output1[21]=-0.5*t7416*var2[5];
  p_output1[22]=-0.5*t7278*var2[0] - 0.5*t6741*var2[1] - 0.5*t7416*var2[2] - 1.*t7429*var2[5] - 0.384*t6724*var2[6];
  p_output1[23]=t7435;
  p_output1[24]=(-0.5*t1768*var2[0] - 0.5*t7302*var2[1])*var2[5];
  p_output1[25]=(-0.5*t6966*var2[0] - 0.5*t7325*var2[1] - 0.5*t7379*var2[2])*var2[5];
  p_output1[26]=(-0.5*t7145*var2[0] - 0.5*t7348*var2[1] - 0.5*t7398*var2[2])*var2[5];
  p_output1[27]=-0.5*t7291*var2[5];
  p_output1[28]=t1771;
  p_output1[29]=-0.5*t7429*var2[5];
  p_output1[30]=-0.5*t7291*var2[0] - 0.5*t1768*var2[1] - 0.5*t7429*var2[2];
  p_output1[31]=(-0.384*t1719*var2[0] - 0.384*t2053*var2[1])*var2[5];
  p_output1[32]=(t7482 + t7486 - 0.384*t7118*var2[2])*var2[5];
  p_output1[33]=(t7482 + t7486 - 0.384*t7250*var2[2])*var2[5];
  p_output1[34]=t7297;
  p_output1[35]=t7371;
  p_output1[36]=t7435;
  p_output1[37]=-0.384*t2188*var2[0] - 0.384*t1719*var2[1] - 0.384*t6724*var2[2];
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
