/*
 * Automatically Generated from Mathematica.
 * Wed 8 Sep 2021 02:57:14 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t1687;
  double t1666;
  double t1674;
  double t1688;
  double t1657;
  double t1675;
  double t1692;
  double t1699;
  double t1703;
  double t1705;
  double t1709;
  double t1711;
  double t1716;
  double t1751;
  double t1752;
  double t1753;
  double t1728;
  double t1733;
  double t1734;
  double t1737;
  double t1750;
  double t1756;
  double t1757;
  double t1761;
  double t1762;
  double t1765;
  double t1766;
  double t1768;
  double t1783;
  double t1784;
  double t1785;
  double t1786;
  double t1787;
  double t1795;
  double t1797;
  double t1798;
  double t1799;
  double t1801;
  double t1803;
  double t1819;
  double t1821;
  double t1822;
  double t1810;
  double t1811;
  double t1813;
  double t1815;
  double t1817;
  double t1823;
  double t1825;
  double t1826;
  double t1827;
  double t1828;
  double t1829;
  double t1831;
  double t1702;
  double t1714;
  double t1722;
  double t1723;
  double t1724;
  double t1725;
  double t1726;
  double t1771;
  double t1772;
  double t1773;
  double t1842;
  double t1844;
  double t1845;
  double t1846;
  double t1847;
  double t1848;
  double t1850;
  double t1857;
  double t1858;
  double t1859;
  double t1852;
  double t1853;
  double t1855;
  double t1861;
  double t1862;
  double t1863;
  double t1864;
  double t1865;
  double t1866;
  double t1867;
  double t1885;
  double t1886;
  double t1887;
  double t1888;
  double t1889;
  double t1890;
  double t1891;
  double t1896;
  double t1898;
  double t1899;
  double t1922;
  double t1924;
  double t1932;
  double t1940;
  double t1941;
  double t1942;
  double t1943;
  double t1944;
  double t1945;
  double t1960;
  double t1968;
  double t1969;
  double t1970;
  double t1971;
  double t1972;
  double t1973;
  double t1877;
  double t1878;
  double t1777;
  double t1778;
  double t1789;
  double t1790;
  double t1793;
  double t1988;
  double t1881;
  double t1882;
  double t1883;
  double t1983;
  double t1926;
  double t1927;
  double t1928;
  double t1892;
  double t1894;
  double t1895;
  double t1900;
  double t1901;
  double t1903;
  double t1904;
  double t1905;
  double t1906;
  double t1907;
  double t1930;
  double t1931;
  double t1933;
  double t1934;
  double t1935;
  double t1936;
  double t1937;
  double t1946;
  double t1947;
  double t1948;
  double t1796;
  double t1802;
  double t1804;
  double t1805;
  double t1807;
  double t1808;
  double t1809;
  double t1832;
  double t1833;
  double t1834;
  double t1837;
  double t1838;
  double t1839;
  double t1909;
  double t1910;
  double t1911;
  double t1953;
  double t1955;
  double t1956;
  double t1958;
  double t1959;
  double t1961;
  double t1962;
  double t1963;
  double t1966;
  double t1967;
  double t1974;
  double t1975;
  double t1976;
  double t1997;
  double t2020;
  double t2028;
  double t2053;
  double t1929;
  double t1952;
  double t1996;
  double t1998;
  double t1999;
  double t2001;
  double t2002;
  double t2003;
  double t2004;
  double t2005;
  double t2007;
  double t2008;
  double t2009;
  double t2010;
  double t2011;
  double t2012;
  double t2014;
  double t2015;
  double t2016;
  double t2017;
  double t2018;
  double t2019;
  double t2021;
  double t2023;
  double t2024;
  double t2025;
  double t2061;
  double t2062;
  double t2078;
  double t2079;
  double t2080;
  double t2081;
  double t2082;
  double t2083;
  double t2084;
  double t2085;
  double t2086;
  double t2092;
  double t2093;
  double t2094;
  double t2095;
  double t2096;
  double t2097;
  double t2098;
  double t2099;
  double t2100;
  double t1957;
  double t1977;
  double t2026;
  double t2029;
  double t2030;
  double t2031;
  double t2032;
  double t2033;
  double t2034;
  double t2035;
  double t2036;
  double t2037;
  double t2042;
  double t2043;
  double t2044;
  double t2045;
  double t2046;
  double t2047;
  double t2048;
  double t2049;
  double t2051;
  double t2052;
  double t2054;
  double t2055;
  double t2056;
  double t2058;
  double t2063;
  double t2065;
  double t2122;
  double t2123;
  double t2124;
  double t2125;
  double t2126;
  double t2127;
  double t2128;
  double t2129;
  double t2130;
  double t2140;
  double t2141;
  double t2142;
  double t2143;
  double t2144;
  double t2145;
  double t2146;
  double t2147;
  double t2148;
  t1687 = Cos(var1[2]);
  t1666 = Cos(var1[5]);
  t1674 = Sin(var1[2]);
  t1688 = Sin(var1[5]);
  t1657 = Cos(var1[6]);
  t1675 = -1.*t1666*t1674;
  t1692 = -1.*t1687*t1688;
  t1699 = t1675 + t1692;
  t1703 = t1687*t1666;
  t1705 = -1.*t1674*t1688;
  t1709 = t1703 + t1705;
  t1711 = Sin(var1[6]);
  t1716 = t1657*t1699;
  t1751 = -1.*t1687*t1666;
  t1752 = t1674*t1688;
  t1753 = t1751 + t1752;
  t1728 = -1.*t1657;
  t1733 = 1. + t1728;
  t1734 = 0.4*t1733;
  t1737 = 0. + t1734;
  t1750 = t1737*t1699;
  t1756 = -0.4*t1711;
  t1757 = 0. + t1756;
  t1761 = t1753*t1757;
  t1762 = t1753*t1711;
  t1765 = t1716 + t1762;
  t1766 = 0.64*t1765;
  t1768 = t1750 + t1761 + t1766;
  t1783 = Cos(var1[3]);
  t1784 = -1.*t1783*t1674;
  t1785 = Sin(var1[3]);
  t1786 = -1.*t1687*t1785;
  t1787 = t1784 + t1786;
  t1795 = Cos(var1[4]);
  t1797 = t1687*t1783;
  t1798 = -1.*t1674*t1785;
  t1799 = t1797 + t1798;
  t1801 = Sin(var1[4]);
  t1803 = t1795*t1787;
  t1819 = -1.*t1687*t1783;
  t1821 = t1674*t1785;
  t1822 = t1819 + t1821;
  t1810 = -1.*t1795;
  t1811 = 1. + t1810;
  t1813 = 0.4*t1811;
  t1815 = 0. + t1813;
  t1817 = t1815*t1787;
  t1823 = -0.4*t1801;
  t1825 = 0. + t1823;
  t1826 = t1822*t1825;
  t1827 = t1822*t1801;
  t1828 = t1803 + t1827;
  t1829 = 0.64*t1828;
  t1831 = t1817 + t1826 + t1829;
  t1702 = -0.4*t1657*t1699;
  t1714 = 0.4*t1709*t1711;
  t1722 = -1.*t1709*t1711;
  t1723 = t1716 + t1722;
  t1724 = 0.64*t1723;
  t1725 = t1702 + t1714 + t1724;
  t1726 = var2[6]*t1725;
  t1771 = var2[2]*t1768;
  t1772 = var2[5]*t1768;
  t1773 = var2[1] + t1726 + t1771 + t1772;
  t1842 = t1737*t1709;
  t1844 = t1699*t1757;
  t1845 = t1657*t1709;
  t1846 = t1699*t1711;
  t1847 = t1845 + t1846;
  t1848 = 0.64*t1847;
  t1850 = t1842 + t1844 + t1848;
  t1857 = t1666*t1674;
  t1858 = t1687*t1688;
  t1859 = t1857 + t1858;
  t1852 = var2[2]*t1850;
  t1853 = var2[5]*t1850;
  t1855 = -0.4*t1657*t1709;
  t1861 = 0.4*t1859*t1711;
  t1862 = -1.*t1859*t1711;
  t1863 = t1845 + t1862;
  t1864 = 0.64*t1863;
  t1865 = t1855 + t1861 + t1864;
  t1866 = var2[6]*t1865;
  t1867 = var2[0] + t1852 + t1853 + t1866;
  t1885 = t1815*t1799;
  t1886 = t1787*t1825;
  t1887 = t1795*t1799;
  t1888 = t1787*t1801;
  t1889 = t1887 + t1888;
  t1890 = 0.64*t1889;
  t1891 = t1885 + t1886 + t1890;
  t1896 = t1783*t1674;
  t1898 = t1687*t1785;
  t1899 = t1896 + t1898;
  t1922 = -1.*var3[1];
  t1924 = 0. + t1922;
  t1932 = t1795*t1822;
  t1940 = t1815*t1822;
  t1941 = t1899*t1825;
  t1942 = t1899*t1801;
  t1943 = t1932 + t1942;
  t1944 = 0.64*t1943;
  t1945 = t1940 + t1941 + t1944;
  t1960 = t1657*t1753;
  t1968 = t1737*t1753;
  t1969 = t1859*t1757;
  t1970 = t1859*t1711;
  t1971 = t1960 + t1970;
  t1972 = 0.64*t1971;
  t1973 = t1968 + t1969 + t1972;
  t1877 = 0.24*var2[2]*t1687;
  t1878 = var2[0] + t1877;
  t1777 = -0.24*var2[2]*t1674;
  t1778 = var2[1] + t1777;
  t1789 = 0.11*var2[2]*t1787;
  t1790 = 0.11*var2[3]*t1787;
  t1793 = var2[1] + t1789 + t1790;
  t1988 = -1.*var3[2];
  t1881 = 0.11*var2[2]*t1799;
  t1882 = 0.11*var2[3]*t1799;
  t1883 = var2[0] + t1881 + t1882;
  t1983 = -1.*var3[0];
  t1926 = 0.11*var2[2]*t1822;
  t1927 = 0.11*var2[3]*t1822;
  t1928 = t1926 + t1927;
  t1892 = var2[2]*t1891;
  t1894 = var2[3]*t1891;
  t1895 = -0.4*t1795*t1799;
  t1900 = 0.4*t1899*t1801;
  t1901 = -1.*t1899*t1801;
  t1903 = t1887 + t1901;
  t1904 = 0.64*t1903;
  t1905 = t1895 + t1900 + t1904;
  t1906 = var2[4]*t1905;
  t1907 = var2[0] + t1892 + t1894 + t1906;
  t1930 = -0.4*t1795*t1822;
  t1931 = 0.4*t1787*t1801;
  t1933 = -1.*t1787*t1801;
  t1934 = t1932 + t1933;
  t1935 = 0.64*t1934;
  t1936 = t1930 + t1931 + t1935;
  t1937 = var2[4]*t1936;
  t1946 = var2[2]*t1945;
  t1947 = var2[3]*t1945;
  t1948 = t1937 + t1946 + t1947;
  t1796 = -0.4*t1795*t1787;
  t1802 = 0.4*t1799*t1801;
  t1804 = -1.*t1799*t1801;
  t1805 = t1803 + t1804;
  t1807 = 0.64*t1805;
  t1808 = t1796 + t1802 + t1807;
  t1809 = var2[4]*t1808;
  t1832 = var2[2]*t1831;
  t1833 = var2[3]*t1831;
  t1834 = var2[1] + t1809 + t1832 + t1833;
  t1837 = 0.11*var2[2]*t1699;
  t1838 = 0.11*var2[5]*t1699;
  t1839 = var2[1] + t1837 + t1838;
  t1909 = 0.11*var2[2]*t1709;
  t1910 = 0.11*var2[5]*t1709;
  t1911 = var2[0] + t1909 + t1910;
  t1953 = 0.11*var2[2]*t1753;
  t1955 = 0.11*var2[5]*t1753;
  t1956 = t1953 + t1955;
  t1958 = -0.4*t1657*t1753;
  t1959 = 0.4*t1699*t1711;
  t1961 = -1.*t1699*t1711;
  t1962 = t1960 + t1961;
  t1963 = 0.64*t1962;
  t1966 = t1958 + t1959 + t1963;
  t1967 = var2[6]*t1966;
  t1974 = var2[2]*t1973;
  t1975 = var2[5]*t1973;
  t1976 = t1967 + t1974 + t1975;
  t1997 = t1789 + t1790;
  t2020 = t1809 + t1832 + t1833;
  t2028 = t1837 + t1838;
  t2053 = t1726 + t1771 + t1772;
  t1929 = 6.8*t1924*t1928;
  t1952 = 3.2*t1924*t1948;
  t1996 = -0.11*t1799*t1793;
  t1998 = 0.11*t1799;
  t1999 = t1988 + var1[1] + t1998;
  t2001 = t1997*t1999;
  t2002 = 0.11*t1787*t1883;
  t2003 = 0.11*t1899;
  t2004 = t1983 + var1[0] + t2003;
  t2005 = -1.*t2004*t1928;
  t2007 = t1996 + t2001 + t2002 + t2005;
  t2008 = 6.8*t2007;
  t2009 = t1831*t1907;
  t2010 = t1815*t1899;
  t2011 = t1799*t1825;
  t2012 = t1795*t1899;
  t2014 = t1799*t1801;
  t2015 = t2012 + t2014;
  t2016 = 0.64*t2015;
  t2017 = 0. + t1983 + var1[0] + t2010 + t2011 + t2016;
  t2018 = -1.*t2017*t1948;
  t2019 = 0. + t1988 + var1[1] + t1885 + t1886 + t1890;
  t2021 = t2019*t2020;
  t2023 = -1.*t1891*t1834;
  t2024 = t2009 + t2018 + t2021 + t2023;
  t2025 = 3.2*t2024;
  t2061 = -6.8*t1924*t1997;
  t2062 = -3.2*t1924*t2020;
  t2078 = 0.4*t1795*t1799;
  t2079 = -1.*t1795*t1799;
  t2080 = t2079 + t1933;
  t2081 = 0.64*t2080;
  t2082 = t2078 + t1931 + t2081;
  t2083 = var2[4]*t2082;
  t2084 = var2[2]*t1936;
  t2085 = var2[3]*t1936;
  t2086 = t2083 + t2084 + t2085;
  t2092 = var2[2]*t1808;
  t2093 = var2[3]*t1808;
  t2094 = 0.4*t1795*t1899;
  t2095 = -1.*t1795*t1899;
  t2096 = t2095 + t1804;
  t2097 = 0.64*t2096;
  t2098 = t2094 + t1802 + t2097;
  t2099 = var2[4]*t2098;
  t2100 = t2092 + t2093 + t2099;
  t1957 = 6.8*t1924*t1956;
  t1977 = 3.2*t1924*t1976;
  t2026 = -0.11*t1709*t1839;
  t2029 = 0.11*t1709;
  t2030 = t1988 + var1[1] + t2029;
  t2031 = t2028*t2030;
  t2032 = 0.11*t1699*t1911;
  t2033 = 0.11*t1859;
  t2034 = t1983 + var1[0] + t2033;
  t2035 = -1.*t2034*t1956;
  t2036 = t2026 + t2031 + t2032 + t2035;
  t2037 = 6.8*t2036;
  t2042 = t1768*t1867;
  t2043 = t1737*t1859;
  t2044 = t1709*t1757;
  t2045 = t1657*t1859;
  t2046 = t1709*t1711;
  t2047 = t2045 + t2046;
  t2048 = 0.64*t2047;
  t2049 = 0. + t1983 + var1[0] + t2043 + t2044 + t2048;
  t2051 = -1.*t2049*t1976;
  t2052 = 0. + t1988 + var1[1] + t1842 + t1844 + t1848;
  t2054 = t2052*t2053;
  t2055 = -1.*t1850*t1773;
  t2056 = t2042 + t2051 + t2054 + t2055;
  t2058 = 3.2*t2056;
  t2063 = -6.8*t1924*t2028;
  t2065 = -3.2*t1924*t2053;
  t2122 = 0.4*t1657*t1709;
  t2123 = -1.*t1657*t1709;
  t2124 = t2123 + t1961;
  t2125 = 0.64*t2124;
  t2126 = t2122 + t1959 + t2125;
  t2127 = var2[6]*t2126;
  t2128 = var2[2]*t1966;
  t2129 = var2[5]*t1966;
  t2130 = t2127 + t2128 + t2129;
  t2140 = var2[2]*t1725;
  t2141 = var2[5]*t1725;
  t2142 = 0.4*t1657*t1859;
  t2143 = -1.*t1657*t1859;
  t2144 = t2143 + t1722;
  t2145 = 0.64*t2144;
  t2146 = t2142 + t1714 + t2145;
  t2147 = var2[6]*t2146;
  t2148 = t2140 + t2141 + t2147;
  p_output1[0]=-3.2*t1773*var4[1];
  p_output1[1]=-3.2*t1773 - 12.*t1778 - 6.8*t1793 - 3.2*t1834 - 6.8*t1839 + 3.2*(t1773*var4[0] - 1.*t1867*var4[2]);
  p_output1[2]=3.2*t1867*var4[1];
  p_output1[3]=-3.2*t1773*var4[4];
  p_output1[4]=3.2*t1867 + 12.*t1878 + 6.8*t1883 + 3.2*t1907 + 6.8*t1911 + 3.2*(t1773*var4[3] - 1.*t1867*var4[5]);
  p_output1[5]=3.2*t1867*var4[4];
  p_output1[6]=t1929 + t1952 + t1957 + t1977 - 2.88*t1687*t1924*var2[2] - 3.2*t1773*var4[7];
  p_output1[7]=t2008 + t2025 + t2037 + t2058 + 12.*(-0.24*t1687*t1778 - 0.24*t1674*t1878 + 0.24*t1687*(0.24*t1674 + t1983 + var1[0])*var2[2] - 0.24*t1674*(0.24*t1687 + t1988 + var1[1])*var2[2]) + 3.2*(t1773*var4[6] - 1.*t1867*var4[8]);
  p_output1[8]=t2061 + t2062 + t2063 + t2065 + 2.88*t1674*t1924*var2[2] + 3.2*t1867*var4[7];
  p_output1[9]=t1929 + t1952 - 3.2*t1773*var4[10];
  p_output1[10]=t2008 + t2025 + 3.2*(t1773*var4[9] - 1.*t1867*var4[11]);
  p_output1[11]=t2061 + t2062 + 3.2*t1867*var4[10];
  p_output1[12]=3.2*t1924*t2086 - 3.2*t1773*var4[13];
  p_output1[13]=3.2*(-1.*t1834*t1905 + t1808*t1907 - 1.*t2017*t2086 + t2019*t2100) + 3.2*(t1773*var4[12] - 1.*t1867*var4[14]);
  p_output1[14]=-3.2*t1924*t2100 + 3.2*t1867*var4[13];
  p_output1[15]=t1957 + t1977 - 3.2*t1773*var4[16];
  p_output1[16]=t2037 + t2058 + 3.2*(t1773*var4[15] - 1.*t1867*var4[17]);
  p_output1[17]=t2063 + t2065 + 3.2*t1867*var4[16];
  p_output1[18]=3.2*t1924*t2130 - 3.2*t1773*var4[19];
  p_output1[19]=3.2*(-1.*t1773*t1865 + t1725*t1867 - 1.*t2049*t2130 + t2052*t2148) + 3.2*(t1773*var4[18] - 1.*t1867*var4[20]);
  p_output1[20]=-3.2*t1924*t2148 + 3.2*t1867*var4[19];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 7) && 
      !(mrows == 7 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_L_world_about_contact_point_src.hh"

namespace SymExpression
{

void J_L_world_about_contact_point_src_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
