/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:50 GMT-04:00
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
  double t1810;
  double t342;
  double t1776;
  double t1811;
  double t285;
  double t1850;
  double t1883;
  double t1895;
  double t1896;
  double t1897;
  double t1898;
  double t1805;
  double t1812;
  double t1826;
  double t1917;
  double t1919;
  double t1920;
  double t1927;
  double t1967;
  double t1968;
  double t1899;
  double t1845;
  double t1851;
  double t1852;
  double t1863;
  double t1867;
  double t1878;
  double t1903;
  double t1904;
  double t1915;
  double t1916;
  double t1921;
  double t1922;
  double t2006;
  double t2008;
  double t2013;
  double t2014;
  double t2015;
  double t2016;
  double t2017;
  double t2025;
  double t2026;
  double t2043;
  double t2044;
  double t2045;
  double t2058;
  double t2059;
  double t2066;
  double t2077;
  double t2079;
  double t2081;
  double t2086;
  double t2088;
  double t1900;
  double t1901;
  double t1902;
  double t1984;
  double t1985;
  double t1992;
  double t2119;
  double t2120;
  double t1924;
  double t1925;
  double t1926;
  double t1970;
  double t1971;
  double t1980;
  double t2022;
  double t2095;
  double t2096;
  double t2097;
  double t2054;
  double t2072;
  double t2075;
  double t2084;
  double t2085;
  double t2083;
  double t2089;
  double t2090;
  double t2157;
  double t2158;
  double t2100;
  double t2102;
  double t2099;
  double t2101;
  double t2105;
  double t2168;
  double t2169;
  double t2170;
  double t2121;
  double t2123;
  double t2124;
  double t2128;
  double t2134;
  double t2135;
  double t2136;
  double t2141;
  double t2142;
  double t2143;
  double t2144;
  double t2145;
  double t2146;
  double t2147;
  double t2148;
  double t2149;
  double t2150;
  double t2151;
  double t2152;
  double t2153;
  double t2154;
  double t2155;
  double t2165;
  double t2166;
  double t2171;
  double t2174;
  double t2190;
  double t2191;
  double t2195;
  double t2196;
  double t2316;
  double t2318;
  double t2319;
  double t2694;
  double t2828;
  double t2272;
  double t2273;
  double t2274;
  double t2276;
  double t2277;
  double t2280;
  double t2281;
  double t2282;
  double t2285;
  double t2286;
  double t2290;
  double t2292;
  double t2294;
  double t2021;
  double t2023;
  double t2010;
  double t2011;
  double t2004;
  double t2012;
  double t2018;
  double t2019;
  double t2024;
  double t2027;
  double t2028;
  double t2159;
  double t2161;
  double t2162;
  double t2167;
  double t2172;
  double t2173;
  double t2175;
  double t2178;
  double t2179;
  double t2185;
  double t2188;
  double t2189;
  double t2192;
  double t2199;
  double t5223;
  double t2208;
  double t2209;
  double t2210;
  double t5226;
  double t5235;
  double t5239;
  double t5240;
  double t5284;
  double t5285;
  double t5295;
  double t5307;
  double t5312;
  double t5313;
  double t5332;
  double t5333;
  double t5346;
  double t2243;
  double t2245;
  double t2246;
  double t2260;
  double t2261;
  double t2262;
  double t2283;
  double t2076;
  double t2094;
  double t2098;
  double t2108;
  double t2114;
  double t1923;
  double t1969;
  double t1981;
  double t1993;
  double t1998;
  double t2002;
  double t5478;
  double t2115;
  double t4360;
  double t4361;
  double t4369;
  double t4386;
  double t4395;
  double t2163;
  double t2164;
  double t2177;
  double t2186;
  double t2187;
  double t2200;
  double t2201;
  double t5334;
  double t5344;
  double t5347;
  double t5348;
  double t5362;
  double t5363;
  double t5364;
  double t2242;
  double t2258;
  double t2259;
  double t2263;
  double t2264;
  double t5426;
  double t5427;
  double t5441;
  double t5442;
  double t5443;
  double t2315;
  double t5484;
  double t5624;
  double t5625;
  double t5626;
  double t5627;
  double t5628;
  double t5616;
  double t5617;
  double t5618;
  double t4101;
  double t4107;
  double t4152;
  double t4165;
  double t4192;
  double t5225;
  double t5233;
  double t5237;
  double t2122;
  double t2125;
  double t2126;
  double t5517;
  double t5518;
  double t5519;
  double t5522;
  double t5523;
  double t5392;
  double t5411;
  double t5412;
  double t5413;
  double t5423;
  double t2207;
  double t2212;
  double t2213;
  double t2217;
  double t2219;
  double t5552;
  double t5553;
  double t5559;
  double t5560;
  double t5561;
  double t5565;
  double t5567;
  double t3218;
  double t5485;
  double t5629;
  double t5662;
  double t5663;
  double t5664;
  double t5683;
  double t5684;
  double t1882;
  t1810 = Cos(var1[5]);
  t342 = Cos(var1[6]);
  t1776 = Sin(var1[5]);
  t1811 = Sin(var1[6]);
  t285 = Sin(var1[2]);
  t1850 = Cos(var1[2]);
  t1883 = -1.*t342;
  t1895 = 1. + t1883;
  t1896 = 0.4*t1895;
  t1897 = 0.64*t342;
  t1898 = t1896 + t1897;
  t1805 = -1.*t342*t1776;
  t1812 = -1.*t1810*t1811;
  t1826 = t1805 + t1812;
  t1917 = t1810*t342;
  t1919 = -1.*t1776*t1811;
  t1920 = t1917 + t1919;
  t1927 = t1850*t1826;
  t1967 = -1.*t285*t1920;
  t1968 = t1927 + t1967;
  t1899 = t1898*t342;
  t1845 = -1.*t285*t1826;
  t1851 = -1.*t1810*t342;
  t1852 = t1776*t1811;
  t1863 = t1851 + t1852;
  t1867 = t1850*t1863;
  t1878 = t1845 + t1867;
  t1903 = t342*t1776;
  t1904 = t1810*t1811;
  t1915 = t1903 + t1904;
  t1916 = -1.*t285*t1915;
  t1921 = t1850*t1920;
  t1922 = t1916 + t1921;
  t2006 = t285*t1826;
  t2008 = t2006 + t1921;
  t2013 = -1.*t1850*t1920;
  t2014 = t1845 + t2013;
  t2015 = t1850*t1915;
  t2016 = t285*t1920;
  t2017 = t2015 + t2016;
  t2025 = t285*t1863;
  t2026 = t1927 + t2025;
  t2043 = t1898*t1776;
  t2044 = 0.24*t1810*t1811;
  t2045 = t2043 + t2044;
  t2058 = t1810*t1898;
  t2059 = -0.24*t1776*t1811;
  t2066 = t2058 + t2059;
  t2077 = -0.24*t342*t1776;
  t2079 = -0.24*t1810*t1811;
  t2081 = t2077 + t2079;
  t2086 = 0.24*t1810*t342;
  t2088 = t2086 + t2059;
  t1900 = Power(t342,2);
  t1901 = -0.24*t1900;
  t1902 = t1899 + t1901;
  t1984 = Power(t1811,2);
  t1985 = 0.24*t1984;
  t1992 = t1899 + t1985;
  t2119 = t285*t1915;
  t2120 = t2119 + t1867;
  t1924 = t1898*t1811;
  t1925 = -0.24*t342*t1811;
  t1926 = t1924 + t1925;
  t1970 = -1.*t1898*t1811;
  t1971 = 0.24*t342*t1811;
  t1980 = t1970 + t1971;
  t2022 = -1.*t285*t1863;
  t2095 = t2045*t1915;
  t2096 = t1920*t2066;
  t2097 = t2095 + t2096;
  t2054 = -1.*t2045*t1920;
  t2072 = -1.*t1826*t2066;
  t2075 = t2054 + t2072;
  t2084 = t2045*t1920;
  t2085 = t1826*t2066;
  t2083 = t2081*t1920;
  t2089 = t1915*t2088;
  t2090 = t2083 + t2084 + t2085 + t2089;
  t2157 = -1.*t1898*t1776;
  t2158 = t2157 + t2079;
  t2100 = -1.*t1826*t2045;
  t2102 = -1.*t2066*t1863;
  t2099 = -1.*t1826*t2081;
  t2101 = -1.*t1920*t2088;
  t2105 = t2099 + t2100 + t2101 + t2102;
  t2168 = -0.24*t1810*t342;
  t2169 = 0.24*t1776*t1811;
  t2170 = t2168 + t2169;
  t2121 = -0.384*var2[6]*t2120;
  t2123 = 3.2*t1992*t2120;
  t2124 = 3.2*t1926*t2026;
  t2128 = 6.4*t2008*t1968;
  t2134 = 3.2*t2017*t1878;
  t2135 = 3.2*t1968*t2120;
  t2136 = t2015 + t2022;
  t2141 = 3.2*t2008*t2136;
  t2142 = 3.2*t1922*t2026;
  t2143 = 6.4*t1878*t2026;
  t2144 = t2128 + t2134 + t2135 + t2141 + t2142 + t2143;
  t2145 = -0.5*var2[1]*t2144;
  t2146 = Power(t2008,2);
  t2147 = 6.4*t2146;
  t2148 = 6.4*t2008*t2120;
  t2149 = 6.4*t2017*t2026;
  t2150 = Power(t2026,2);
  t2151 = 6.4*t2150;
  t2152 = t2147 + t2148 + t2149 + t2151;
  t2153 = -0.5*var2[0]*t2152;
  t2154 = 3.2*t2097*t2120;
  t2155 = 3.2*t2075*t2026;
  t2165 = -1.*t2081*t1920;
  t2166 = -1.*t1915*t2066;
  t2171 = -1.*t1826*t2170;
  t2174 = -1.*t2045*t1863;
  t2190 = t1826*t2045;
  t2191 = t2081*t1915;
  t2195 = t1920*t2170;
  t2196 = t2066*t1863;
  t2316 = 3.2*t1926*t2008;
  t2318 = 3.2*t1980*t2008;
  t2319 = 3.2*t1902*t2017;
  t2694 = 3.2*t1992*t2026;
  t2828 = t2316 + t2318 + t2319 + t2694;
  t2272 = 6.4*t2008*t2017;
  t2273 = 6.4*t2008*t2026;
  t2274 = t2272 + t2273;
  t2276 = 3.2*t2008*t1922;
  t2277 = 3.2*t1968*t2017;
  t2280 = 3.2*t2008*t1878;
  t2281 = 3.2*t1968*t2026;
  t2282 = t2276 + t2277 + t2280 + t2281;
  t2285 = 3.2*t2008*t2075;
  t2286 = 3.2*t2008*t2090;
  t2290 = 3.2*t2097*t2026;
  t2292 = 3.2*t2017*t2105;
  t2294 = t2285 + t2286 + t2290 + t2292;
  t2021 = -1.*t1850*t1826;
  t2023 = t2021 + t2022;
  t2010 = -1.*t1850*t1915;
  t2011 = t2010 + t1967;
  t2004 = 6.4*t1922*t1968;
  t2012 = 3.2*t2008*t2011;
  t2018 = 3.2*t2014*t2017;
  t2019 = 6.4*t1968*t1878;
  t2024 = 3.2*t2008*t2023;
  t2027 = 3.2*t2014*t2026;
  t2028 = t2004 + t2012 + t2018 + t2019 + t2024 + t2027;
  t2159 = t2158*t1920;
  t2161 = t1915*t2066;
  t2162 = t2159 + t2084 + t2085 + t2161;
  t2167 = -1.*t1826*t2088;
  t2172 = -1.*t2158*t1863;
  t2173 = -1.*t2081*t1863;
  t2175 = t2165 + t2072 + t2166 + t2167 + t2171 + t2172 + t2173 + t2174;
  t2178 = -1.*t1826*t2158;
  t2179 = -1.*t1920*t2066;
  t2185 = t2178 + t2100 + t2179 + t2102;
  t2188 = t1826*t2158;
  t2189 = t1826*t2081;
  t2192 = t1920*t2088;
  t2199 = t2188 + t2189 + t2190 + t2191 + t2096 + t2192 + t2195 + t2196;
  t5223 = -0.384*var2[6]*t2136;
  t2208 = -1.*t1898*t342;
  t2209 = 0.24*t1900;
  t2210 = t2208 + t2209;
  t5226 = 3.2*t1926*t1878;
  t5235 = 3.2*t1992*t2136;
  t5239 = Power(t1968,2);
  t5240 = 6.4*t5239;
  t5284 = 6.4*t1922*t1878;
  t5285 = Power(t1878,2);
  t5295 = 6.4*t5285;
  t5307 = 6.4*t1968*t2136;
  t5312 = t5240 + t5284 + t5295 + t5307;
  t5313 = -0.5*var2[1]*t5312;
  t5332 = -0.5*var2[0]*t2144;
  t5333 = 3.2*t2075*t1878;
  t5346 = 3.2*t2097*t2136;
  t2243 = -2.*t1826*t2088;
  t2245 = -2.*t2081*t1863;
  t2246 = t2165 + t2166 + t2243 + t2171 + t2245 + t2174;
  t2260 = 2.*t1826*t2081;
  t2261 = 2.*t1920*t2088;
  t2262 = t2260 + t2190 + t2191 + t2261 + t2195 + t2196;
  t2283 = -0.5*var2[6]*t2282;
  t2076 = 3.2*t1968*t2075;
  t2094 = 3.2*t1968*t2090;
  t2098 = 3.2*t2097*t1878;
  t2108 = 3.2*t1922*t2105;
  t2114 = t2076 + t2094 + t2098 + t2108;
  t1923 = 3.2*t1902*t1922;
  t1969 = 3.2*t1926*t1968;
  t1981 = 3.2*t1980*t1968;
  t1993 = 3.2*t1992*t1878;
  t1998 = t1923 + t1969 + t1981 + t1993;
  t2002 = -0.5*var2[5]*t1998;
  t5478 = t2004 + t2019;
  t2115 = -0.5*var2[2]*t2114;
  t4360 = 3.2*t2014*t2075;
  t4361 = 3.2*t2014*t2090;
  t4369 = 3.2*t2097*t2023;
  t4386 = 3.2*t2011*t2105;
  t4395 = t4360 + t4361 + t4369 + t4386;
  t2163 = 3.2*t2162*t2026;
  t2164 = 3.2*t2090*t2026;
  t2177 = 3.2*t2017*t2175;
  t2186 = 3.2*t2008*t2185;
  t2187 = 3.2*t2008*t2105;
  t2200 = 3.2*t2008*t2199;
  t2201 = t2154 + t2155 + t2163 + t2164 + t2177 + t2186 + t2187 + t2200;
  t5334 = 3.2*t2162*t1878;
  t5344 = 3.2*t2090*t1878;
  t5347 = 3.2*t1922*t2175;
  t5348 = 3.2*t1968*t2185;
  t5362 = 3.2*t1968*t2105;
  t5363 = 3.2*t1968*t2199;
  t5364 = t5333 + t5334 + t5344 + t5346 + t5347 + t5348 + t5362 + t5363;
  t2242 = 6.4*t2090*t2026;
  t2258 = 3.2*t2017*t2246;
  t2259 = 6.4*t2008*t2105;
  t2263 = 3.2*t2008*t2262;
  t2264 = t2154 + t2155 + t2242 + t2258 + t2259 + t2263;
  t5426 = 6.4*t2090*t1878;
  t5427 = 3.2*t1922*t2246;
  t5441 = 6.4*t1968*t2105;
  t5442 = 3.2*t1968*t2262;
  t5443 = t5333 + t5426 + t5346 + t5427 + t5441 + t5442;
  t2315 = -0.5*var2[6]*t2294;
  t5484 = -0.5*var2[6]*t2114;
  t5624 = 3.2*t1902*t2075;
  t5625 = 3.2*t1980*t2097;
  t5626 = 3.2*t1992*t2090;
  t5627 = 3.2*t1926*t2105;
  t5628 = t5624 + t5625 + t5626 + t5627;
  t5616 = 6.4*t2097*t2090;
  t5617 = 6.4*t2075*t2105;
  t5618 = t5616 + t5617;
  t4101 = 3.2*t1926*t2014;
  t4107 = 3.2*t1980*t2014;
  t4152 = 3.2*t1902*t2011;
  t4165 = 3.2*t1992*t2023;
  t4192 = t4101 + t4107 + t4152 + t4165;
  t5225 = 3.2*t1902*t1968;
  t5233 = 3.2*t1980*t1878;
  t5237 = t5225 + t5226 + t5233 + t5235;
  t2122 = 3.2*t1902*t2008;
  t2125 = 3.2*t1980*t2026;
  t2126 = t2122 + t2123 + t2124 + t2125;
  t5517 = 3.2*t1980*t2162;
  t5518 = 3.2*t1926*t2175;
  t5519 = 3.2*t1902*t2185;
  t5522 = 3.2*t1992*t2199;
  t5523 = t5517 + t5518 + t5519 + t5522;
  t5392 = 3.2*t1980*t1922;
  t5411 = 6.4*t1902*t1968;
  t5412 = 3.2*t2210*t1968;
  t5413 = 6.4*t1980*t1878;
  t5423 = t5392 + t5411 + t5412 + t5226 + t5413 + t5235;
  t2207 = 6.4*t1902*t2008;
  t2212 = 3.2*t2210*t2008;
  t2213 = 3.2*t1980*t2017;
  t2217 = 6.4*t1980*t2026;
  t2219 = t2207 + t2212 + t2213 + t2123 + t2124 + t2217;
  t5552 = 3.2*t1980*t2075;
  t5553 = 3.2*t2210*t2097;
  t5559 = 6.4*t1980*t2090;
  t5560 = 3.2*t1926*t2246;
  t5561 = 6.4*t1902*t2105;
  t5565 = 3.2*t1992*t2262;
  t5567 = t5552 + t5553 + t5559 + t5560 + t5561 + t5565;
  t3218 = -0.5*var2[6]*t2828;
  t5485 = -0.5*var2[6]*t1998;
  t5629 = -0.5*var2[6]*t5628;
  t5662 = 6.4*t1902*t1926;
  t5663 = 6.4*t1980*t1992;
  t5664 = t5662 + t5663;
  t5683 = -0.384*var2[0]*t2120;
  t5684 = -0.384*var2[1]*t2136;
  t1882 = -0.384*var2[6]*t1878;
  p_output1[0]=(t1882 + t2002 + t2115 - 0.5*(6.4*t1878*t2008 + 6.4*t1922*t2008 + 6.4*t1968*t2017 + 6.4*t1968*t2026)*var2[0] - 0.5*t2028*var2[1])*var2[6];
  p_output1[1]=(t2121 + t2145 + t2153 - 0.5*t2201*var2[2] - 0.5*t2126*var2[5])*var2[6];
  p_output1[2]=(t2121 + t2145 + t2153 - 0.5*t2264*var2[2] - 0.5*t2219*var2[5])*var2[6];
  p_output1[3]=-0.5*t2274*var2[6];
  p_output1[4]=t2283;
  p_output1[5]=t2315;
  p_output1[6]=t3218;
  p_output1[7]=-0.5*t2274*var2[0] - 0.5*t2282*var2[1] - 0.5*t2294*var2[2] - 0.5*t2828*var2[5] - 0.768*t2026*var2[6];
  p_output1[8]=var2[6]*(-0.5*t2028*var2[0] - 0.5*(6.4*t1968*t2011 + 6.4*t1878*t2014 + 6.4*t1922*t2014 + 6.4*t1968*t2023)*var2[1] - 0.5*t4395*var2[2] - 0.5*t4192*var2[5] - 0.384*t2023*var2[6]);
  p_output1[9]=(t5223 + t5313 + t5332 - 0.5*t5364*var2[2] - 0.5*t5237*var2[5])*var2[6];
  p_output1[10]=(t5223 + t5313 + t5332 - 0.5*t5443*var2[2] - 0.5*t5423*var2[5])*var2[6];
  p_output1[11]=t2283;
  p_output1[12]=-0.5*t5478*var2[6];
  p_output1[13]=t5484;
  p_output1[14]=t5485;
  p_output1[15]=t2002 + t2115 - 0.5*t2282*var2[0] - 0.5*t5478*var2[1] - 0.768*t1878*var2[6];
  p_output1[16]=(-0.5*t2114*var2[0] - 0.5*t4395*var2[1])*var2[6];
  p_output1[17]=var2[6]*(-0.5*t2201*var2[0] - 0.5*t5364*var2[1] - 0.5*(6.4*t2090*t2162 + 6.4*t2075*t2175 + 6.4*t2105*t2185 + 6.4*t2097*t2199)*var2[2] - 0.5*t5523*var2[5] - 0.384*t2199*var2[6]);
  p_output1[18]=var2[6]*(-0.5*t2264*var2[0] - 0.5*t5443*var2[1] - 0.5*(6.4*Power(t2090,2) + 6.4*Power(t2105,2) + 6.4*t2075*t2246 + 6.4*t2097*t2262)*var2[2] - 0.5*t5567*var2[5] - 0.384*t2262*var2[6]);
  p_output1[19]=t2315;
  p_output1[20]=t5484;
  p_output1[21]=-0.5*t5618*var2[6];
  p_output1[22]=t5629;
  p_output1[23]=-0.5*t2294*var2[0] - 0.5*t2114*var2[1] - 0.5*t5618*var2[2] - 0.5*t5628*var2[5] - 0.768*t2090*var2[6];
  p_output1[24]=(-0.5*t1998*var2[0] - 0.5*t4192*var2[1])*var2[6];
  p_output1[25]=(-0.5*t2126*var2[0] - 0.5*t5237*var2[1] - 0.5*t5523*var2[2])*var2[6];
  p_output1[26]=var2[6]*(-0.5*t2219*var2[0] - 0.5*t5423*var2[1] - 0.5*t5567*var2[2] - 0.5*(6.4*Power(t1902,2) + 6.4*t1926*t1980 + 6.4*Power(t1980,2) + 6.4*t1992*t2210)*var2[5] - 0.384*t2210*var2[6]);
  p_output1[27]=t3218;
  p_output1[28]=t5485;
  p_output1[29]=t5629;
  p_output1[30]=-0.5*t5664*var2[6];
  p_output1[31]=-0.5*t2828*var2[0] - 0.5*t1998*var2[1] - 0.5*t5628*var2[2] - 0.5*t5664*var2[5] - 0.768*t1980*var2[6];
  p_output1[32]=(-0.384*t1878*var2[0] - 0.384*t2023*var2[1])*var2[6];
  p_output1[33]=(t5683 + t5684 - 0.384*t2199*var2[2])*var2[6];
  p_output1[34]=(t5683 + t5684 - 0.384*t2262*var2[2] - 0.384*t2210*var2[5])*var2[6];
  p_output1[35]=-0.384*t2026*var2[6];
  p_output1[36]=t1882;
  p_output1[37]=-0.384*t2090*var2[6];
  p_output1[38]=-0.384*t1980*var2[6];
  p_output1[39]=-0.384*t2026*var2[0] - 0.384*t1878*var2[1] - 0.384*t2090*var2[2] - 0.384*t1980*var2[5];
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

#include "J_Ce2_vec7_five_link_walker.hh"

namespace RightStance
{

void J_Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
