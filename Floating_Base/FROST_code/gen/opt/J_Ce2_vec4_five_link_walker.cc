/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:42 GMT-04:00
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
  double t1668;
  double t463;
  double t490;
  double t1713;
  double t1717;
  double t103;
  double t491;
  double t1714;
  double t1715;
  double t1783;
  double t1784;
  double t1785;
  double t1786;
  double t1792;
  double t1716;
  double t1730;
  double t1763;
  double t1764;
  double t1765;
  double t1766;
  double t1817;
  double t1818;
  double t1819;
  double t1814;
  double t1815;
  double t1816;
  double t1773;
  double t1774;
  double t1775;
  double t1821;
  double t1822;
  double t1823;
  double t1797;
  double t1798;
  double t1799;
  double t1796;
  double t1800;
  double t1801;
  double t1832;
  double t1828;
  double t1829;
  double t1830;
  double t1835;
  double t1836;
  double t1840;
  double t1841;
  double t1831;
  double t1833;
  double t1842;
  double t1843;
  double t1844;
  double t1855;
  double t1856;
  double t1881;
  double t1885;
  double t1886;
  double t1888;
  double t1889;
  double t1890;
  double t1894;
  double t1905;
  double t1906;
  double t1777;
  double t1803;
  double t1804;
  double t1806;
  double t1807;
  double t1940;
  double t1941;
  double t1793;
  double t1794;
  double t1795;
  double t1820;
  double t1824;
  double t1825;
  double t1827;
  double t1849;
  double t1860;
  double t1861;
  double t1862;
  double t1864;
  double t1865;
  double t1866;
  double t1874;
  double t1875;
  double t1876;
  double t1877;
  double t1879;
  double t1880;
  double t1913;
  double t1914;
  double t1928;
  double t1887;
  double t1891;
  double t1892;
  double t1907;
  double t1908;
  double t1909;
  double t1910;
  double t1911;
  double t1930;
  double t1931;
  double t1932;
  double t1933;
  double t1934;
  double t1978;
  double t1979;
  double t1982;
  double t1942;
  double t1944;
  double t1945;
  double t1949;
  double t1950;
  double t1951;
  double t1952;
  double t1953;
  double t1954;
  double t1955;
  double t1958;
  double t1959;
  double t1960;
  double t1961;
  double t1962;
  double t1964;
  double t1972;
  double t1973;
  double t2063;
  double t2064;
  double t1977;
  double t2068;
  double t2069;
  double t1987;
  double t1994;
  double t2080;
  double t2082;
  double t1999;
  double t7956;
  double t7959;
  double t8173;
  double t8175;
  double t8184;
  double t8217;
  double t8220;
  double t8224;
  double t8243;
  double t8272;
  double t8387;
  double t8388;
  double t8402;
  double t8409;
  double t8906;
  double t8977;
  double t9015;
  double t9024;
  double t9042;
  double t9183;
  double t1848;
  double t1853;
  double t1837;
  double t1838;
  double t1834;
  double t1839;
  double t1846;
  double t1847;
  double t1854;
  double t1857;
  double t1858;
  double t11934;
  double t13138;
  double t13139;
  double t1956;
  double t13198;
  double t1975;
  double t1976;
  double t1983;
  double t1986;
  double t1988;
  double t1991;
  double t1995;
  double t1996;
  double t1997;
  double t2001;
  double t13259;
  double t2033;
  double t2034;
  double t2046;
  double t13260;
  double t2048;
  double t2049;
  double t2050;
  double t13261;
  double t13277;
  double t13287;
  double t13299;
  double t13304;
  double t13305;
  double t13324;
  double t2056;
  double t13338;
  double t2065;
  double t2070;
  double t2071;
  double t13340;
  double t2074;
  double t2078;
  double t2103;
  double t2104;
  double t2106;
  double t2107;
  double t2753;
  double t2891;
  double t3700;
  double t4091;
  double t4096;
  double t4153;
  double t4163;
  double t4167;
  double t4234;
  double t8896;
  double t1893;
  double t1912;
  double t1929;
  double t1935;
  double t1936;
  double t1772;
  double t1802;
  double t1808;
  double t1809;
  double t13437;
  double t13438;
  double t1937;
  double t13208;
  double t13220;
  double t13225;
  double t13226;
  double t13245;
  double t1974;
  double t1989;
  double t1990;
  double t2005;
  double t2007;
  double t13339;
  double t13354;
  double t13355;
  double t13356;
  double t13366;
  double t2062;
  double t2073;
  double t2617;
  double t2735;
  double t4052;
  double t4313;
  double t4333;
  double t13419;
  double t13424;
  double t13427;
  double t13428;
  double t13429;
  double t13430;
  double t13431;
  double t9189;
  double t13440;
  double t13541;
  double t13542;
  double t13543;
  double t12107;
  double t13127;
  double t13134;
  double t13275;
  double t1946;
  double t13472;
  double t13473;
  double t13474;
  double t13396;
  double t13397;
  double t13398;
  double t2047;
  double t2051;
  double t2052;
  double t13511;
  double t13512;
  double t13513;
  double t13514;
  double t13518;
  double t9267;
  double t9275;
  double t9296;
  double t9408;
  double t1813;
  double t13546;
  double t13547;
  double t13548;
  double t13579;
  double t13584;
  double t9848;
  double t13453;
  double t13554;
  t1668 = Cos(var1[3]);
  t463 = Cos(var1[4]);
  t490 = Sin(var1[3]);
  t1713 = Sin(var1[4]);
  t1717 = Cos(var1[2]);
  t103 = Sin(var1[2]);
  t491 = -1.*t463*t490;
  t1714 = -1.*t1668*t1713;
  t1715 = t491 + t1714;
  t1783 = -1.*t463;
  t1784 = 1. + t1783;
  t1785 = 0.4*t1784;
  t1786 = 0.64*t463;
  t1792 = t1785 + t1786;
  t1716 = -1.*t103*t1715;
  t1730 = -1.*t1668*t463;
  t1763 = t490*t1713;
  t1764 = t1730 + t1763;
  t1765 = t1717*t1764;
  t1766 = t1716 + t1765;
  t1817 = t1717*t1668;
  t1818 = -1.*t103*t490;
  t1819 = t1817 + t1818;
  t1814 = -1.*t1668*t103;
  t1815 = -1.*t1717*t490;
  t1816 = t1814 + t1815;
  t1773 = -1.*t1717*t1668;
  t1774 = t103*t490;
  t1775 = t1773 + t1774;
  t1821 = t1668*t103;
  t1822 = t1717*t490;
  t1823 = t1821 + t1822;
  t1797 = t1668*t463;
  t1798 = -1.*t490*t1713;
  t1799 = t1797 + t1798;
  t1796 = t1717*t1715;
  t1800 = -1.*t103*t1799;
  t1801 = t1796 + t1800;
  t1832 = t1717*t1799;
  t1828 = t463*t490;
  t1829 = t1668*t1713;
  t1830 = t1828 + t1829;
  t1835 = t103*t1715;
  t1836 = t1835 + t1832;
  t1840 = -1.*t1717*t1799;
  t1841 = t1716 + t1840;
  t1831 = -1.*t103*t1830;
  t1833 = t1831 + t1832;
  t1842 = t1717*t1830;
  t1843 = t103*t1799;
  t1844 = t1842 + t1843;
  t1855 = t103*t1764;
  t1856 = t1796 + t1855;
  t1881 = t1792*t490;
  t1885 = 0.24*t1668*t1713;
  t1886 = t1881 + t1885;
  t1888 = t1668*t1792;
  t1889 = -0.24*t490*t1713;
  t1890 = t1888 + t1889;
  t1894 = -1.*t1792*t490;
  t1905 = -0.24*t1668*t1713;
  t1906 = t1894 + t1905;
  t1777 = 0.748*t1775;
  t1803 = t1792*t463;
  t1804 = Power(t1713,2);
  t1806 = 0.24*t1804;
  t1807 = t1803 + t1806;
  t1940 = t103*t1830;
  t1941 = t1940 + t1765;
  t1793 = t1792*t1713;
  t1794 = -0.24*t463*t1713;
  t1795 = t1793 + t1794;
  t1820 = 20.4*t1816*t1819;
  t1824 = 6.8*t1823*t1819;
  t1825 = 20.4*t1816*t1775;
  t1827 = 6.8*t1823*t1775;
  t1849 = -1.*t103*t1764;
  t1860 = Power(t1816,2);
  t1861 = 13.6*t1860;
  t1862 = 13.6*t1816*t1823;
  t1864 = Power(t1819,2);
  t1865 = 13.6*t1864;
  t1866 = 13.6*t1819*t1775;
  t1874 = Power(t1668,2);
  t1875 = 0.11*t1874;
  t1876 = Power(t490,2);
  t1877 = 0.11*t1876;
  t1879 = t1875 + t1877;
  t1880 = 6.8*t1775*t1879;
  t1913 = t1886*t1830;
  t1914 = t1799*t1890;
  t1928 = t1913 + t1914;
  t1887 = -1.*t1886*t1799;
  t1891 = -1.*t1715*t1890;
  t1892 = t1887 + t1891;
  t1907 = t1906*t1799;
  t1908 = t1886*t1799;
  t1909 = t1715*t1890;
  t1910 = t1830*t1890;
  t1911 = t1907 + t1908 + t1909 + t1910;
  t1930 = -1.*t1715*t1906;
  t1931 = -1.*t1715*t1886;
  t1932 = -1.*t1799*t1890;
  t1933 = -1.*t1890*t1764;
  t1934 = t1930 + t1931 + t1932 + t1933;
  t1978 = -1.*t1668*t1792;
  t1979 = 0.24*t490*t1713;
  t1982 = t1978 + t1979;
  t1942 = -0.384*var2[4]*t1941;
  t1944 = 3.2*t1807*t1941;
  t1945 = 3.2*t1795*t1856;
  t1949 = 6.4*t1836*t1801;
  t1950 = 3.2*t1844*t1766;
  t1951 = 3.2*t1801*t1941;
  t1952 = t1842 + t1849;
  t1953 = 3.2*t1836*t1952;
  t1954 = 3.2*t1833*t1856;
  t1955 = 6.4*t1766*t1856;
  t1958 = Power(t1836,2);
  t1959 = 6.4*t1958;
  t1960 = 6.4*t1836*t1941;
  t1961 = 6.4*t1844*t1856;
  t1962 = Power(t1856,2);
  t1964 = 6.4*t1962;
  t1972 = 3.2*t1928*t1941;
  t1973 = 3.2*t1892*t1856;
  t2063 = -0.24*t463*t490;
  t2064 = t2063 + t1905;
  t1977 = -1.*t1830*t1890;
  t2068 = 0.24*t1668*t463;
  t2069 = t2068 + t1889;
  t1987 = -1.*t1886*t1764;
  t1994 = t1715*t1886;
  t2080 = -0.24*t1668*t463;
  t2082 = t2080 + t1979;
  t1999 = t1890*t1764;
  t7956 = 13.6*t1816*t1819;
  t7959 = 13.6*t1823*t1819;
  t8173 = 6.4*t1836*t1844;
  t8175 = 6.4*t1836*t1856;
  t8184 = t7956 + t7959 + t8173 + t8175;
  t8217 = 6.8*t1860;
  t8220 = 6.8*t1816*t1823;
  t8224 = 6.8*t1864;
  t8243 = 6.8*t1819*t1775;
  t8272 = 3.2*t1836*t1833;
  t8387 = 3.2*t1801*t1844;
  t8388 = 3.2*t1836*t1766;
  t8402 = 3.2*t1801*t1856;
  t8409 = t8217 + t8220 + t8224 + t8243 + t8272 + t8387 + t8388 + t8402;
  t8906 = 6.8*t1816*t1879;
  t8977 = 3.2*t1836*t1892;
  t9015 = 3.2*t1836*t1911;
  t9024 = 3.2*t1928*t1856;
  t9042 = 3.2*t1844*t1934;
  t9183 = t8906 + t8977 + t9015 + t9024 + t9042;
  t1848 = -1.*t1717*t1715;
  t1853 = t1848 + t1849;
  t1837 = -1.*t1717*t1830;
  t1838 = t1837 + t1800;
  t1834 = 6.4*t1833*t1801;
  t1839 = 3.2*t1836*t1838;
  t1846 = 3.2*t1841*t1844;
  t1847 = 6.4*t1801*t1766;
  t1854 = 3.2*t1836*t1853;
  t1857 = 3.2*t1841*t1856;
  t1858 = t1820 + t1824 + t1825 + t1827 + t1834 + t1839 + t1846 + t1847 + t1854 + t1857;
  t11934 = 0.748*t1823;
  t13138 = Power(t1775,2);
  t13139 = 13.6*t13138;
  t1956 = t1820 + t1824 + t1825 + t1827 + t1949 + t1950 + t1951 + t1953 + t1954 + t1955;
  t13198 = 6.8*t1823*t1879;
  t1975 = -1.*t1906*t1799;
  t1976 = -2.*t1715*t1890;
  t1983 = -1.*t1715*t1982;
  t1986 = -2.*t1906*t1764;
  t1988 = t1975 + t1976 + t1977 + t1983 + t1986 + t1987;
  t1991 = 2.*t1715*t1906;
  t1995 = t1906*t1830;
  t1996 = 2.*t1799*t1890;
  t1997 = t1799*t1982;
  t2001 = t1991 + t1994 + t1995 + t1996 + t1997 + t1999;
  t13259 = -0.384*var2[4]*t1952;
  t2033 = Power(t463,2);
  t2034 = -0.24*t2033;
  t2046 = t1803 + t2034;
  t13260 = 3.2*t1795*t1766;
  t2048 = -1.*t1792*t1713;
  t2049 = 0.24*t463*t1713;
  t2050 = t2048 + t2049;
  t13261 = 3.2*t1807*t1952;
  t13277 = Power(t1801,2);
  t13287 = 6.4*t13277;
  t13299 = 6.4*t1833*t1766;
  t13304 = Power(t1766,2);
  t13305 = 6.4*t13304;
  t13324 = 6.4*t1801*t1952;
  t2056 = t1949 + t1950 + t1951 + t1953 + t1954 + t1955;
  t13338 = 3.2*t1892*t1766;
  t2065 = t2064*t1799;
  t2070 = t1830*t2069;
  t2071 = t2065 + t1908 + t1909 + t2070;
  t13340 = 3.2*t1928*t1952;
  t2074 = -1.*t2064*t1799;
  t2078 = -1.*t1715*t2069;
  t2103 = -1.*t1715*t2082;
  t2104 = -1.*t1906*t1764;
  t2106 = -1.*t2064*t1764;
  t2107 = t2074 + t1891 + t1977 + t2078 + t2103 + t2104 + t2106 + t1987;
  t2753 = -1.*t1715*t2064;
  t2891 = -1.*t1799*t2069;
  t3700 = t2753 + t1931 + t2891 + t1933;
  t4091 = t1715*t1906;
  t4096 = t1715*t2064;
  t4153 = t2064*t1830;
  t4163 = t1799*t2069;
  t4167 = t1799*t2082;
  t4234 = t4091 + t4096 + t1994 + t4153 + t1914 + t4163 + t4167 + t1999;
  t8896 = -0.5*var2[3]*t8409;
  t1893 = 3.2*t1801*t1892;
  t1912 = 3.2*t1801*t1911;
  t1929 = 3.2*t1928*t1766;
  t1935 = 3.2*t1833*t1934;
  t1936 = t1880 + t1893 + t1912 + t1929 + t1935;
  t1772 = -0.384*var2[4]*t1766;
  t1802 = 3.2*t1795*t1801;
  t1808 = 3.2*t1807*t1766;
  t1809 = t1777 + t1802 + t1808;
  t13437 = 13.6*t1816*t1775;
  t13438 = t7956 + t13437 + t1834 + t1847;
  t1937 = -0.5*var2[2]*t1936;
  t13208 = 3.2*t1841*t1892;
  t13220 = 3.2*t1841*t1911;
  t13225 = 3.2*t1928*t1853;
  t13226 = 3.2*t1838*t1934;
  t13245 = t13198 + t13208 + t13220 + t13225 + t13226;
  t1974 = 6.4*t1911*t1856;
  t1989 = 3.2*t1844*t1988;
  t1990 = 6.4*t1836*t1934;
  t2005 = 3.2*t1836*t2001;
  t2007 = t1880 + t1972 + t1973 + t1974 + t1989 + t1990 + t2005;
  t13339 = 6.4*t1911*t1766;
  t13354 = 3.2*t1833*t1988;
  t13355 = 6.4*t1801*t1934;
  t13356 = 3.2*t1801*t2001;
  t13366 = t13198 + t13338 + t13339 + t13340 + t13354 + t13355 + t13356;
  t2062 = 3.2*t1911*t1856;
  t2073 = 3.2*t2071*t1856;
  t2617 = 3.2*t1844*t2107;
  t2735 = 3.2*t1836*t1934;
  t4052 = 3.2*t1836*t3700;
  t4313 = 3.2*t1836*t4234;
  t4333 = t1972 + t1973 + t2062 + t2073 + t2617 + t2735 + t4052 + t4313;
  t13419 = 3.2*t1911*t1766;
  t13424 = 3.2*t2071*t1766;
  t13427 = 3.2*t1833*t2107;
  t13428 = 3.2*t1801*t1934;
  t13429 = 3.2*t1801*t3700;
  t13430 = 3.2*t1801*t4234;
  t13431 = t13338 + t13419 + t13424 + t13340 + t13427 + t13428 + t13429 + t13430;
  t9189 = -0.5*var2[3]*t9183;
  t13440 = -0.5*var2[3]*t1936;
  t13541 = 6.4*t1911*t1928;
  t13542 = 6.4*t1892*t1934;
  t13543 = t13541 + t13542;
  t12107 = 3.2*t1795*t1841;
  t13127 = 3.2*t1807*t1853;
  t13134 = t11934 + t12107 + t13127;
  t13275 = t11934 + t13260 + t13261;
  t1946 = t1777 + t1944 + t1945;
  t13472 = 3.2*t1795*t1988;
  t13473 = 3.2*t1807*t2001;
  t13474 = t13472 + t13473;
  t13396 = 3.2*t2046*t1801;
  t13397 = 3.2*t2050*t1766;
  t13398 = t13396 + t13260 + t13397 + t13261;
  t2047 = 3.2*t2046*t1836;
  t2051 = 3.2*t2050*t1856;
  t2052 = t2047 + t1944 + t1945 + t2051;
  t13511 = 3.2*t2050*t1911;
  t13512 = 3.2*t1795*t2107;
  t13513 = 3.2*t2046*t1934;
  t13514 = 3.2*t1807*t4234;
  t13518 = t13511 + t13512 + t13513 + t13514;
  t9267 = 0.748*t1816;
  t9275 = 3.2*t1795*t1836;
  t9296 = 3.2*t1807*t1856;
  t9408 = t9267 + t9275 + t9296;
  t1813 = -0.5*var2[3]*t1809;
  t13546 = 3.2*t1807*t1911;
  t13547 = 3.2*t1795*t1934;
  t13548 = t13546 + t13547;
  t13579 = -0.384*var2[0]*t1941;
  t13584 = -0.384*var2[1]*t1952;
  t9848 = -0.384*var2[3]*t1856;
  t13453 = -0.384*var2[3]*t1766;
  t13554 = -0.384*var2[3]*t1911;
  p_output1[0]=(t1772 + t1813 + t1937 - 0.5*(6.4*t1766*t1836 + 6.4*t1833*t1836 + 6.4*t1801*t1844 + 6.4*t1801*t1856 + t1861 + t1862 + t1865 + t1866)*var2[0] - 0.5*t1858*var2[1])*var2[3];
  p_output1[1]=var2[3]*(t1942 - 0.5*(t1861 + t1862 + t1865 + t1866 + t1959 + t1960 + t1961 + t1964)*var2[0] - 0.5*t1956*var2[1] - 0.5*t2007*var2[2] - 0.5*t1946*var2[3]);
  p_output1[2]=var2[3]*(t1942 - 0.5*(t1959 + t1960 + t1961 + t1964)*var2[0] - 0.5*t2056*var2[1] - 0.5*t4333*var2[2] - 0.5*t2052*var2[3]);
  p_output1[3]=-0.5*t8184*var2[3];
  p_output1[4]=t8896;
  p_output1[5]=t9189;
  p_output1[6]=-0.5*t8184*var2[0] - 0.5*t8409*var2[1] - 0.5*t9183*var2[2] - 1.*t9408*var2[3] - 0.384*t1856*var2[4];
  p_output1[7]=t9848;
  p_output1[8]=var2[3]*(-0.5*t1858*var2[0] - 0.5*(t13139 + 6.4*t1801*t1838 + 6.4*t1766*t1841 + 6.4*t1833*t1841 + 6.4*t1801*t1853 + t1861 + t1862 + t1866)*var2[1] - 0.5*t13245*var2[2] - 0.5*t13134*var2[3] - 0.384*t1853*var2[4]);
  p_output1[9]=var2[3]*(t13259 - 0.5*t1956*var2[0] - 0.5*(t13139 + t13287 + t13299 + t13305 + t13324 + t1861 + t1862 + t1866)*var2[1] - 0.5*t13366*var2[2] - 0.5*t13275*var2[3]);
  p_output1[10]=var2[3]*(t13259 - 0.5*t2056*var2[0] - 0.5*(t13287 + t13299 + t13305 + t13324)*var2[1] - 0.5*t13431*var2[2] - 0.5*t13398*var2[3]);
  p_output1[11]=t8896;
  p_output1[12]=-0.5*t13438*var2[3];
  p_output1[13]=t13440;
  p_output1[14]=t1772 + t1937 - 0.5*t8409*var2[0] - 0.5*t13438*var2[1] - 1.*t1809*var2[3];
  p_output1[15]=t13453;
  p_output1[16]=(-0.5*t1936*var2[0] - 0.5*t13245*var2[1])*var2[3];
  p_output1[17]=var2[3]*(-0.5*t2007*var2[0] - 0.5*t13366*var2[1] - 0.5*(6.4*Power(t1911,2) + 6.4*Power(t1934,2) + 6.4*t1892*t1988 + 6.4*t1928*t2001)*var2[2] - 0.5*t13474*var2[3] - 0.384*t2001*var2[4]);
  p_output1[18]=var2[3]*(-0.5*t4333*var2[0] - 0.5*t13431*var2[1] - 0.5*(6.4*t1911*t2071 + 6.4*t1892*t2107 + 6.4*t1934*t3700 + 6.4*t1928*t4234)*var2[2] - 0.5*t13518*var2[3] - 0.384*t4234*var2[4]);
  p_output1[19]=t9189;
  p_output1[20]=t13440;
  p_output1[21]=-0.5*t13543*var2[3];
  p_output1[22]=-0.5*t9183*var2[0] - 0.5*t1936*var2[1] - 0.5*t13543*var2[2] - 1.*t13548*var2[3] - 0.384*t1911*var2[4];
  p_output1[23]=t13554;
  p_output1[24]=(-0.5*t1809*var2[0] - 0.5*t13134*var2[1])*var2[3];
  p_output1[25]=(-0.5*t1946*var2[0] - 0.5*t13275*var2[1] - 0.5*t13474*var2[2])*var2[3];
  p_output1[26]=(-0.5*t2052*var2[0] - 0.5*t13398*var2[1] - 0.5*t13518*var2[2])*var2[3];
  p_output1[27]=-0.5*t9408*var2[3];
  p_output1[28]=t1813;
  p_output1[29]=-0.5*t13548*var2[3];
  p_output1[30]=-0.5*t9408*var2[0] - 0.5*t1809*var2[1] - 0.5*t13548*var2[2];
  p_output1[31]=(-0.384*t1766*var2[0] - 0.384*t1853*var2[1])*var2[3];
  p_output1[32]=(t13579 + t13584 - 0.384*t2001*var2[2])*var2[3];
  p_output1[33]=(t13579 + t13584 - 0.384*t4234*var2[2])*var2[3];
  p_output1[34]=t9848;
  p_output1[35]=t13453;
  p_output1[36]=t13554;
  p_output1[37]=-0.384*t1856*var2[0] - 0.384*t1766*var2[1] - 0.384*t1911*var2[2];
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
