/*
 * Automatically Generated from Mathematica.
 * Wed 8 Sep 2021 02:57:24 GMT-04:00
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
  double t1723;
  double t1703;
  double t1714;
  double t1724;
  double t1702;
  double t1716;
  double t1726;
  double t1734;
  double t1750;
  double t1752;
  double t1753;
  double t1756;
  double t1761;
  double t1790;
  double t1793;
  double t1794;
  double t1772;
  double t1776;
  double t1777;
  double t1781;
  double t1789;
  double t1796;
  double t1797;
  double t1802;
  double t1803;
  double t1805;
  double t1807;
  double t1809;
  double t1826;
  double t1827;
  double t1828;
  double t1829;
  double t1831;
  double t1838;
  double t1840;
  double t1841;
  double t1842;
  double t1844;
  double t1846;
  double t1866;
  double t1868;
  double t1869;
  double t1857;
  double t1858;
  double t1861;
  double t1863;
  double t1864;
  double t1871;
  double t1872;
  double t1873;
  double t1874;
  double t1876;
  double t1877;
  double t1879;
  double t1737;
  double t1757;
  double t1762;
  double t1765;
  double t1766;
  double t1768;
  double t1771;
  double t1813;
  double t1815;
  double t1817;
  double t1890;
  double t1892;
  double t1894;
  double t1895;
  double t1896;
  double t1898;
  double t1900;
  double t1908;
  double t1909;
  double t1910;
  double t1903;
  double t1904;
  double t1906;
  double t1911;
  double t1912;
  double t1913;
  double t1914;
  double t1916;
  double t1917;
  double t1918;
  double t1940;
  double t1941;
  double t1942;
  double t1943;
  double t1944;
  double t1945;
  double t1946;
  double t1955;
  double t1957;
  double t1958;
  double t1987;
  double t1989;
  double t1997;
  double t2007;
  double t2008;
  double t2009;
  double t2010;
  double t2011;
  double t2012;
  double t2030;
  double t2038;
  double t2039;
  double t2040;
  double t2041;
  double t2042;
  double t2043;
  double t1930;
  double t1931;
  double t1822;
  double t1823;
  double t1832;
  double t1833;
  double t1835;
  double t2060;
  double t1934;
  double t1935;
  double t1936;
  double t2054;
  double t1991;
  double t1992;
  double t1993;
  double t1947;
  double t1952;
  double t1953;
  double t1959;
  double t1960;
  double t1962;
  double t1963;
  double t1966;
  double t1967;
  double t1968;
  double t1995;
  double t1996;
  double t1998;
  double t1999;
  double t2001;
  double t2002;
  double t2003;
  double t2014;
  double t2015;
  double t2016;
  double t1839;
  double t1845;
  double t1847;
  double t1848;
  double t1852;
  double t1853;
  double t1855;
  double t1881;
  double t1882;
  double t1883;
  double t1885;
  double t1886;
  double t1887;
  double t1970;
  double t1971;
  double t1972;
  double t2021;
  double t2024;
  double t2025;
  double t2028;
  double t2029;
  double t2031;
  double t2032;
  double t2033;
  double t2036;
  double t2037;
  double t2044;
  double t2045;
  double t2046;
  double t2069;
  double t2093;
  double t2101;
  double t2126;
  double t1994;
  double t2020;
  double t2068;
  double t2071;
  double t2072;
  double t2073;
  double t2074;
  double t2076;
  double t2077;
  double t2078;
  double t2080;
  double t2081;
  double t2082;
  double t2083;
  double t2084;
  double t2085;
  double t2087;
  double t2088;
  double t2089;
  double t2090;
  double t2091;
  double t2092;
  double t2094;
  double t2096;
  double t2097;
  double t2098;
  double t2134;
  double t2135;
  double t2151;
  double t2152;
  double t2153;
  double t2154;
  double t2155;
  double t2156;
  double t2157;
  double t2158;
  double t2159;
  double t2165;
  double t2166;
  double t2167;
  double t2168;
  double t2169;
  double t2170;
  double t2171;
  double t2172;
  double t2173;
  double t2026;
  double t2047;
  double t2099;
  double t2102;
  double t2103;
  double t2104;
  double t2105;
  double t2106;
  double t2107;
  double t2108;
  double t2109;
  double t2110;
  double t2115;
  double t2116;
  double t2117;
  double t2118;
  double t2119;
  double t2120;
  double t2121;
  double t2122;
  double t2124;
  double t2125;
  double t2127;
  double t2128;
  double t2129;
  double t2131;
  double t2136;
  double t2138;
  double t2195;
  double t2196;
  double t2197;
  double t2198;
  double t2199;
  double t2200;
  double t2201;
  double t2202;
  double t2203;
  double t2213;
  double t2214;
  double t2215;
  double t2216;
  double t2217;
  double t2218;
  double t2219;
  double t2220;
  double t2221;
  t1723 = Cos(var1[2]);
  t1703 = Cos(var1[5]);
  t1714 = Sin(var1[2]);
  t1724 = Sin(var1[5]);
  t1702 = Cos(var1[6]);
  t1716 = -1.*t1703*t1714;
  t1726 = -1.*t1723*t1724;
  t1734 = t1716 + t1726;
  t1750 = t1723*t1703;
  t1752 = -1.*t1714*t1724;
  t1753 = t1750 + t1752;
  t1756 = Sin(var1[6]);
  t1761 = t1702*t1734;
  t1790 = -1.*t1723*t1703;
  t1793 = t1714*t1724;
  t1794 = t1790 + t1793;
  t1772 = -1.*t1702;
  t1776 = 1. + t1772;
  t1777 = 0.4*t1776;
  t1781 = 0. + t1777;
  t1789 = t1781*t1734;
  t1796 = -0.4*t1756;
  t1797 = 0. + t1796;
  t1802 = t1794*t1797;
  t1803 = t1794*t1756;
  t1805 = t1761 + t1803;
  t1807 = 0.64*t1805;
  t1809 = t1789 + t1802 + t1807;
  t1826 = Cos(var1[3]);
  t1827 = -1.*t1826*t1714;
  t1828 = Sin(var1[3]);
  t1829 = -1.*t1723*t1828;
  t1831 = t1827 + t1829;
  t1838 = Cos(var1[4]);
  t1840 = t1723*t1826;
  t1841 = -1.*t1714*t1828;
  t1842 = t1840 + t1841;
  t1844 = Sin(var1[4]);
  t1846 = t1838*t1831;
  t1866 = -1.*t1723*t1826;
  t1868 = t1714*t1828;
  t1869 = t1866 + t1868;
  t1857 = -1.*t1838;
  t1858 = 1. + t1857;
  t1861 = 0.4*t1858;
  t1863 = 0. + t1861;
  t1864 = t1863*t1831;
  t1871 = -0.4*t1844;
  t1872 = 0. + t1871;
  t1873 = t1869*t1872;
  t1874 = t1869*t1844;
  t1876 = t1846 + t1874;
  t1877 = 0.64*t1876;
  t1879 = t1864 + t1873 + t1877;
  t1737 = -0.4*t1702*t1734;
  t1757 = 0.4*t1753*t1756;
  t1762 = -1.*t1753*t1756;
  t1765 = t1761 + t1762;
  t1766 = 0.64*t1765;
  t1768 = t1737 + t1757 + t1766;
  t1771 = var2[6]*t1768;
  t1813 = var2[2]*t1809;
  t1815 = var2[5]*t1809;
  t1817 = var2[1] + t1771 + t1813 + t1815;
  t1890 = t1781*t1753;
  t1892 = t1734*t1797;
  t1894 = t1702*t1753;
  t1895 = t1734*t1756;
  t1896 = t1894 + t1895;
  t1898 = 0.64*t1896;
  t1900 = t1890 + t1892 + t1898;
  t1908 = t1703*t1714;
  t1909 = t1723*t1724;
  t1910 = t1908 + t1909;
  t1903 = var2[2]*t1900;
  t1904 = var2[5]*t1900;
  t1906 = -0.4*t1702*t1753;
  t1911 = 0.4*t1910*t1756;
  t1912 = -1.*t1910*t1756;
  t1913 = t1894 + t1912;
  t1914 = 0.64*t1913;
  t1916 = t1906 + t1911 + t1914;
  t1917 = var2[6]*t1916;
  t1918 = var2[0] + t1903 + t1904 + t1917;
  t1940 = t1863*t1842;
  t1941 = t1831*t1872;
  t1942 = t1838*t1842;
  t1943 = t1831*t1844;
  t1944 = t1942 + t1943;
  t1945 = 0.64*t1944;
  t1946 = t1940 + t1941 + t1945;
  t1955 = t1826*t1714;
  t1957 = t1723*t1828;
  t1958 = t1955 + t1957;
  t1987 = -1.*var3[1];
  t1989 = 0. + t1987;
  t1997 = t1838*t1869;
  t2007 = t1863*t1869;
  t2008 = t1958*t1872;
  t2009 = t1958*t1844;
  t2010 = t1997 + t2009;
  t2011 = 0.64*t2010;
  t2012 = t2007 + t2008 + t2011;
  t2030 = t1702*t1794;
  t2038 = t1781*t1794;
  t2039 = t1910*t1797;
  t2040 = t1910*t1756;
  t2041 = t2030 + t2040;
  t2042 = 0.64*t2041;
  t2043 = t2038 + t2039 + t2042;
  t1930 = 0.24*var2[2]*t1723;
  t1931 = var2[0] + t1930;
  t1822 = -0.24*var2[2]*t1714;
  t1823 = var2[1] + t1822;
  t1832 = 0.11*var2[2]*t1831;
  t1833 = 0.11*var2[3]*t1831;
  t1835 = var2[1] + t1832 + t1833;
  t2060 = -1.*var3[2];
  t1934 = 0.11*var2[2]*t1842;
  t1935 = 0.11*var2[3]*t1842;
  t1936 = var2[0] + t1934 + t1935;
  t2054 = -1.*var3[0];
  t1991 = 0.11*var2[2]*t1869;
  t1992 = 0.11*var2[3]*t1869;
  t1993 = t1991 + t1992;
  t1947 = var2[2]*t1946;
  t1952 = var2[3]*t1946;
  t1953 = -0.4*t1838*t1842;
  t1959 = 0.4*t1958*t1844;
  t1960 = -1.*t1958*t1844;
  t1962 = t1942 + t1960;
  t1963 = 0.64*t1962;
  t1966 = t1953 + t1959 + t1963;
  t1967 = var2[4]*t1966;
  t1968 = var2[0] + t1947 + t1952 + t1967;
  t1995 = -0.4*t1838*t1869;
  t1996 = 0.4*t1831*t1844;
  t1998 = -1.*t1831*t1844;
  t1999 = t1997 + t1998;
  t2001 = 0.64*t1999;
  t2002 = t1995 + t1996 + t2001;
  t2003 = var2[4]*t2002;
  t2014 = var2[2]*t2012;
  t2015 = var2[3]*t2012;
  t2016 = t2003 + t2014 + t2015;
  t1839 = -0.4*t1838*t1831;
  t1845 = 0.4*t1842*t1844;
  t1847 = -1.*t1842*t1844;
  t1848 = t1846 + t1847;
  t1852 = 0.64*t1848;
  t1853 = t1839 + t1845 + t1852;
  t1855 = var2[4]*t1853;
  t1881 = var2[2]*t1879;
  t1882 = var2[3]*t1879;
  t1883 = var2[1] + t1855 + t1881 + t1882;
  t1885 = 0.11*var2[2]*t1734;
  t1886 = 0.11*var2[5]*t1734;
  t1887 = var2[1] + t1885 + t1886;
  t1970 = 0.11*var2[2]*t1753;
  t1971 = 0.11*var2[5]*t1753;
  t1972 = var2[0] + t1970 + t1971;
  t2021 = 0.11*var2[2]*t1794;
  t2024 = 0.11*var2[5]*t1794;
  t2025 = t2021 + t2024;
  t2028 = -0.4*t1702*t1794;
  t2029 = 0.4*t1734*t1756;
  t2031 = -1.*t1734*t1756;
  t2032 = t2030 + t2031;
  t2033 = 0.64*t2032;
  t2036 = t2028 + t2029 + t2033;
  t2037 = var2[6]*t2036;
  t2044 = var2[2]*t2043;
  t2045 = var2[5]*t2043;
  t2046 = t2037 + t2044 + t2045;
  t2069 = t1832 + t1833;
  t2093 = t1855 + t1881 + t1882;
  t2101 = t1885 + t1886;
  t2126 = t1771 + t1813 + t1815;
  t1994 = 6.8*t1989*t1993;
  t2020 = 3.2*t1989*t2016;
  t2068 = -0.11*t1842*t1835;
  t2071 = 0.11*t1842;
  t2072 = t2060 + var1[1] + t2071;
  t2073 = t2069*t2072;
  t2074 = 0.11*t1831*t1936;
  t2076 = 0.11*t1958;
  t2077 = t2054 + var1[0] + t2076;
  t2078 = -1.*t2077*t1993;
  t2080 = t2068 + t2073 + t2074 + t2078;
  t2081 = 6.8*t2080;
  t2082 = t1879*t1968;
  t2083 = t1863*t1958;
  t2084 = t1842*t1872;
  t2085 = t1838*t1958;
  t2087 = t1842*t1844;
  t2088 = t2085 + t2087;
  t2089 = 0.64*t2088;
  t2090 = 0. + t2054 + var1[0] + t2083 + t2084 + t2089;
  t2091 = -1.*t2090*t2016;
  t2092 = 0. + t2060 + var1[1] + t1940 + t1941 + t1945;
  t2094 = t2092*t2093;
  t2096 = -1.*t1946*t1883;
  t2097 = t2082 + t2091 + t2094 + t2096;
  t2098 = 3.2*t2097;
  t2134 = -6.8*t1989*t2069;
  t2135 = -3.2*t1989*t2093;
  t2151 = 0.4*t1838*t1842;
  t2152 = -1.*t1838*t1842;
  t2153 = t2152 + t1998;
  t2154 = 0.64*t2153;
  t2155 = t2151 + t1996 + t2154;
  t2156 = var2[4]*t2155;
  t2157 = var2[2]*t2002;
  t2158 = var2[3]*t2002;
  t2159 = t2156 + t2157 + t2158;
  t2165 = var2[2]*t1853;
  t2166 = var2[3]*t1853;
  t2167 = 0.4*t1838*t1958;
  t2168 = -1.*t1838*t1958;
  t2169 = t2168 + t1847;
  t2170 = 0.64*t2169;
  t2171 = t2167 + t1845 + t2170;
  t2172 = var2[4]*t2171;
  t2173 = t2165 + t2166 + t2172;
  t2026 = 6.8*t1989*t2025;
  t2047 = 3.2*t1989*t2046;
  t2099 = -0.11*t1753*t1887;
  t2102 = 0.11*t1753;
  t2103 = t2060 + var1[1] + t2102;
  t2104 = t2101*t2103;
  t2105 = 0.11*t1734*t1972;
  t2106 = 0.11*t1910;
  t2107 = t2054 + var1[0] + t2106;
  t2108 = -1.*t2107*t2025;
  t2109 = t2099 + t2104 + t2105 + t2108;
  t2110 = 6.8*t2109;
  t2115 = t1809*t1918;
  t2116 = t1781*t1910;
  t2117 = t1753*t1797;
  t2118 = t1702*t1910;
  t2119 = t1753*t1756;
  t2120 = t2118 + t2119;
  t2121 = 0.64*t2120;
  t2122 = 0. + t2054 + var1[0] + t2116 + t2117 + t2121;
  t2124 = -1.*t2122*t2046;
  t2125 = 0. + t2060 + var1[1] + t1890 + t1892 + t1898;
  t2127 = t2125*t2126;
  t2128 = -1.*t1900*t1817;
  t2129 = t2115 + t2124 + t2127 + t2128;
  t2131 = 3.2*t2129;
  t2136 = -6.8*t1989*t2101;
  t2138 = -3.2*t1989*t2126;
  t2195 = 0.4*t1702*t1753;
  t2196 = -1.*t1702*t1753;
  t2197 = t2196 + t2031;
  t2198 = 0.64*t2197;
  t2199 = t2195 + t2029 + t2198;
  t2200 = var2[6]*t2199;
  t2201 = var2[2]*t2036;
  t2202 = var2[5]*t2036;
  t2203 = t2200 + t2201 + t2202;
  t2213 = var2[2]*t1768;
  t2214 = var2[5]*t1768;
  t2215 = 0.4*t1702*t1910;
  t2216 = -1.*t1702*t1910;
  t2217 = t2216 + t1762;
  t2218 = 0.64*t2217;
  t2219 = t2215 + t1757 + t2218;
  t2220 = var2[6]*t2219;
  t2221 = t2213 + t2214 + t2220;
  p_output1[0]=-3.2*t1817*var4[1];
  p_output1[1]=-3.2*t1817 - 12.*t1823 - 6.8*t1835 - 3.2*t1883 - 6.8*t1887 + 3.2*(t1817*var4[0] - 1.*t1918*var4[2]);
  p_output1[2]=3.2*t1918*var4[1];
  p_output1[3]=-3.2*t1817*var4[4];
  p_output1[4]=3.2*t1918 + 12.*t1931 + 6.8*t1936 + 3.2*t1968 + 6.8*t1972 + 3.2*(t1817*var4[3] - 1.*t1918*var4[5]);
  p_output1[5]=3.2*t1918*var4[4];
  p_output1[6]=t1994 + t2020 + t2026 + t2047 - 2.88*t1723*t1989*var2[2] - 3.2*t1817*var4[7];
  p_output1[7]=t2081 + t2098 + t2110 + t2131 + 12.*(-0.24*t1723*t1823 - 0.24*t1714*t1931 + 0.24*t1723*(0.24*t1714 + t2054 + var1[0])*var2[2] - 0.24*t1714*(0.24*t1723 + t2060 + var1[1])*var2[2]) + 3.2*(t1817*var4[6] - 1.*t1918*var4[8]);
  p_output1[8]=t2134 + t2135 + t2136 + t2138 + 2.88*t1714*t1989*var2[2] + 3.2*t1918*var4[7];
  p_output1[9]=t1994 + t2020 - 3.2*t1817*var4[10];
  p_output1[10]=t2081 + t2098 + 3.2*(t1817*var4[9] - 1.*t1918*var4[11]);
  p_output1[11]=t2134 + t2135 + 3.2*t1918*var4[10];
  p_output1[12]=3.2*t1989*t2159 - 3.2*t1817*var4[13];
  p_output1[13]=3.2*(-1.*t1883*t1966 + t1853*t1968 - 1.*t2090*t2159 + t2092*t2173) + 3.2*(t1817*var4[12] - 1.*t1918*var4[14]);
  p_output1[14]=-3.2*t1989*t2173 + 3.2*t1918*var4[13];
  p_output1[15]=t2026 + t2047 - 3.2*t1817*var4[16];
  p_output1[16]=t2110 + t2131 + 3.2*(t1817*var4[15] - 1.*t1918*var4[17]);
  p_output1[17]=t2136 + t2138 + 3.2*t1918*var4[16];
  p_output1[18]=3.2*t1989*t2203 - 3.2*t1817*var4[19];
  p_output1[19]=3.2*(-1.*t1817*t1916 + t1768*t1918 - 1.*t2122*t2203 + t2125*t2221) + 3.2*(t1817*var4[18] - 1.*t1918*var4[20]);
  p_output1[20]=-3.2*t1989*t2221 + 3.2*t1918*var4[19];
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

#include "J_L_world_about_contact_point.hh"

namespace SymExpression
{

void J_L_world_about_contact_point_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
