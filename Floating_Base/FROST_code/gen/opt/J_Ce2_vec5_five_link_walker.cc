/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:22:26 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1935;
  double t1903;
  double t1907;
  double t1936;
  double t1885;
  double t1962;
  double t2054;
  double t2061;
  double t2062;
  double t2064;
  double t2065;
  double t1922;
  double t1941;
  double t1959;
  double t2117;
  double t2119;
  double t2125;
  double t2154;
  double t2155;
  double t2160;
  double t2077;
  double t1960;
  double t1963;
  double t1965;
  double t1966;
  double t2026;
  double t2044;
  double t2085;
  double t2098;
  double t2099;
  double t2115;
  double t2129;
  double t2134;
  double t2202;
  double t2204;
  double t2212;
  double t2217;
  double t2218;
  double t2226;
  double t2228;
  double t2321;
  double t2358;
  double t5671;
  double t5672;
  double t5679;
  double t5699;
  double t5700;
  double t5729;
  double t5743;
  double t5744;
  double t5745;
  double t5785;
  double t5803;
  double t2078;
  double t2080;
  double t2081;
  double t2184;
  double t2187;
  double t2190;
  double t5842;
  double t5849;
  double t2137;
  double t2140;
  double t2145;
  double t2167;
  double t2174;
  double t2175;
  double t2299;
  double t5811;
  double t5812;
  double t5814;
  double t5688;
  double t5730;
  double t5731;
  double t5778;
  double t5779;
  double t5777;
  double t5808;
  double t5809;
  double t5900;
  double t5901;
  double t5823;
  double t5825;
  double t5822;
  double t5824;
  double t5826;
  double t5915;
  double t5916;
  double t5917;
  double t5850;
  double t5859;
  double t5860;
  double t5867;
  double t5868;
  double t5876;
  double t5877;
  double t5878;
  double t5881;
  double t5883;
  double t5884;
  double t5885;
  double t5886;
  double t5888;
  double t5889;
  double t5890;
  double t5891;
  double t5892;
  double t5896;
  double t5897;
  double t5898;
  double t5899;
  double t5907;
  double t5908;
  double t5918;
  double t5921;
  double t5937;
  double t5938;
  double t5941;
  double t5942;
  double t5990;
  double t5991;
  double t5992;
  double t5993;
  double t5994;
  double t5974;
  double t5975;
  double t5976;
  double t5978;
  double t5979;
  double t5980;
  double t5981;
  double t5982;
  double t5984;
  double t5985;
  double t5986;
  double t5987;
  double t5988;
  double t2248;
  double t2301;
  double t2207;
  double t2210;
  double t2198;
  double t2211;
  double t2242;
  double t2243;
  double t2315;
  double t2708;
  double t2762;
  double t5902;
  double t5903;
  double t5904;
  double t5909;
  double t5919;
  double t5920;
  double t5922;
  double t5924;
  double t5925;
  double t5929;
  double t5935;
  double t5936;
  double t5940;
  double t5943;
  double t6024;
  double t5950;
  double t5951;
  double t5952;
  double t6026;
  double t6028;
  double t6031;
  double t6032;
  double t6033;
  double t6034;
  double t6035;
  double t6036;
  double t6037;
  double t6038;
  double t6039;
  double t6040;
  double t6043;
  double t5959;
  double t5960;
  double t5961;
  double t5966;
  double t5967;
  double t5968;
  double t5983;
  double t5741;
  double t5810;
  double t5819;
  double t5827;
  double t5828;
  double t2136;
  double t2161;
  double t2182;
  double t2191;
  double t2194;
  double t2197;
  double t6066;
  double t5835;
  double t6016;
  double t6017;
  double t6018;
  double t6019;
  double t6020;
  double t5905;
  double t5906;
  double t5923;
  double t5930;
  double t5934;
  double t5944;
  double t5945;
  double t6041;
  double t6042;
  double t6044;
  double t6045;
  double t6046;
  double t6047;
  double t6048;
  double t5958;
  double t5962;
  double t5963;
  double t5969;
  double t5970;
  double t6058;
  double t6059;
  double t6060;
  double t6061;
  double t6062;
  double t5989;
  double t6068;
  double t6120;
  double t6121;
  double t6122;
  double t6123;
  double t6124;
  double t6116;
  double t6117;
  double t6118;
  double t6003;
  double t6004;
  double t6005;
  double t6006;
  double t6007;
  double t6025;
  double t6027;
  double t6029;
  double t5851;
  double t5861;
  double t5865;
  double t6079;
  double t6080;
  double t6081;
  double t6082;
  double t6083;
  double t6052;
  double t6053;
  double t6054;
  double t6055;
  double t6056;
  double t5949;
  double t5953;
  double t5954;
  double t5955;
  double t5956;
  double t6096;
  double t6097;
  double t6098;
  double t6099;
  double t6100;
  double t6101;
  double t6102;
  double t5995;
  double t6069;
  double t6125;
  double t6155;
  double t6156;
  double t6157;
  double t6169;
  double t6170;
  double t2046;
  t1935 = Cos(var1[3]);
  t1903 = Cos(var1[4]);
  t1907 = Sin(var1[3]);
  t1936 = Sin(var1[4]);
  t1885 = Sin(var1[2]);
  t1962 = Cos(var1[2]);
  t2054 = -1.*t1903;
  t2061 = 1. + t2054;
  t2062 = 0.4*t2061;
  t2064 = 0.64*t1903;
  t2065 = t2062 + t2064;
  t1922 = -1.*t1903*t1907;
  t1941 = -1.*t1935*t1936;
  t1959 = t1922 + t1941;
  t2117 = t1935*t1903;
  t2119 = -1.*t1907*t1936;
  t2125 = t2117 + t2119;
  t2154 = t1962*t1959;
  t2155 = -1.*t1885*t2125;
  t2160 = t2154 + t2155;
  t2077 = t2065*t1903;
  t1960 = -1.*t1885*t1959;
  t1963 = -1.*t1935*t1903;
  t1965 = t1907*t1936;
  t1966 = t1963 + t1965;
  t2026 = t1962*t1966;
  t2044 = t1960 + t2026;
  t2085 = t1903*t1907;
  t2098 = t1935*t1936;
  t2099 = t2085 + t2098;
  t2115 = -1.*t1885*t2099;
  t2129 = t1962*t2125;
  t2134 = t2115 + t2129;
  t2202 = t1885*t1959;
  t2204 = t2202 + t2129;
  t2212 = -1.*t1962*t2125;
  t2217 = t1960 + t2212;
  t2218 = t1962*t2099;
  t2226 = t1885*t2125;
  t2228 = t2218 + t2226;
  t2321 = t1885*t1966;
  t2358 = t2154 + t2321;
  t5671 = t2065*t1907;
  t5672 = 0.24*t1935*t1936;
  t5679 = t5671 + t5672;
  t5699 = t1935*t2065;
  t5700 = -0.24*t1907*t1936;
  t5729 = t5699 + t5700;
  t5743 = -0.24*t1903*t1907;
  t5744 = -0.24*t1935*t1936;
  t5745 = t5743 + t5744;
  t5785 = 0.24*t1935*t1903;
  t5803 = t5785 + t5700;
  t2078 = Power(t1903,2);
  t2080 = -0.24*t2078;
  t2081 = t2077 + t2080;
  t2184 = Power(t1936,2);
  t2187 = 0.24*t2184;
  t2190 = t2077 + t2187;
  t5842 = t1885*t2099;
  t5849 = t5842 + t2026;
  t2137 = t2065*t1936;
  t2140 = -0.24*t1903*t1936;
  t2145 = t2137 + t2140;
  t2167 = -1.*t2065*t1936;
  t2174 = 0.24*t1903*t1936;
  t2175 = t2167 + t2174;
  t2299 = -1.*t1885*t1966;
  t5811 = t5679*t2099;
  t5812 = t2125*t5729;
  t5814 = t5811 + t5812;
  t5688 = -1.*t5679*t2125;
  t5730 = -1.*t1959*t5729;
  t5731 = t5688 + t5730;
  t5778 = t5679*t2125;
  t5779 = t1959*t5729;
  t5777 = t5745*t2125;
  t5808 = t2099*t5803;
  t5809 = t5777 + t5778 + t5779 + t5808;
  t5900 = -1.*t2065*t1907;
  t5901 = t5900 + t5744;
  t5823 = -1.*t1959*t5679;
  t5825 = -1.*t5729*t1966;
  t5822 = -1.*t1959*t5745;
  t5824 = -1.*t2125*t5803;
  t5826 = t5822 + t5823 + t5824 + t5825;
  t5915 = -0.24*t1935*t1903;
  t5916 = 0.24*t1907*t1936;
  t5917 = t5915 + t5916;
  t5850 = -0.384*var2[4]*t5849;
  t5859 = 3.2*t2190*t5849;
  t5860 = 3.2*t2145*t2358;
  t5867 = 6.4*t2204*t2160;
  t5868 = 3.2*t2228*t2044;
  t5876 = 3.2*t2160*t5849;
  t5877 = t2218 + t2299;
  t5878 = 3.2*t2204*t5877;
  t5881 = 3.2*t2134*t2358;
  t5883 = 6.4*t2044*t2358;
  t5884 = t5867 + t5868 + t5876 + t5878 + t5881 + t5883;
  t5885 = -0.5*var2[1]*t5884;
  t5886 = Power(t2204,2);
  t5888 = 6.4*t5886;
  t5889 = 6.4*t2204*t5849;
  t5890 = 6.4*t2228*t2358;
  t5891 = Power(t2358,2);
  t5892 = 6.4*t5891;
  t5896 = t5888 + t5889 + t5890 + t5892;
  t5897 = -0.5*var2[0]*t5896;
  t5898 = 3.2*t5814*t5849;
  t5899 = 3.2*t5731*t2358;
  t5907 = -1.*t5745*t2125;
  t5908 = -1.*t2099*t5729;
  t5918 = -1.*t1959*t5917;
  t5921 = -1.*t5679*t1966;
  t5937 = t1959*t5679;
  t5938 = t5745*t2099;
  t5941 = t2125*t5917;
  t5942 = t5729*t1966;
  t5990 = 3.2*t2145*t2204;
  t5991 = 3.2*t2175*t2204;
  t5992 = 3.2*t2081*t2228;
  t5993 = 3.2*t2190*t2358;
  t5994 = t5990 + t5991 + t5992 + t5993;
  t5974 = 6.4*t2204*t2228;
  t5975 = 6.4*t2204*t2358;
  t5976 = t5974 + t5975;
  t5978 = 3.2*t2204*t2134;
  t5979 = 3.2*t2160*t2228;
  t5980 = 3.2*t2204*t2044;
  t5981 = 3.2*t2160*t2358;
  t5982 = t5978 + t5979 + t5980 + t5981;
  t5984 = 3.2*t2204*t5731;
  t5985 = 3.2*t2204*t5809;
  t5986 = 3.2*t5814*t2358;
  t5987 = 3.2*t2228*t5826;
  t5988 = t5984 + t5985 + t5986 + t5987;
  t2248 = -1.*t1962*t1959;
  t2301 = t2248 + t2299;
  t2207 = -1.*t1962*t2099;
  t2210 = t2207 + t2155;
  t2198 = 6.4*t2134*t2160;
  t2211 = 3.2*t2204*t2210;
  t2242 = 3.2*t2217*t2228;
  t2243 = 6.4*t2160*t2044;
  t2315 = 3.2*t2204*t2301;
  t2708 = 3.2*t2217*t2358;
  t2762 = t2198 + t2211 + t2242 + t2243 + t2315 + t2708;
  t5902 = t5901*t2125;
  t5903 = t2099*t5729;
  t5904 = t5902 + t5778 + t5779 + t5903;
  t5909 = -1.*t1959*t5803;
  t5919 = -1.*t5901*t1966;
  t5920 = -1.*t5745*t1966;
  t5922 = t5907 + t5730 + t5908 + t5909 + t5918 + t5919 + t5920 + t5921;
  t5924 = -1.*t1959*t5901;
  t5925 = -1.*t2125*t5729;
  t5929 = t5924 + t5823 + t5925 + t5825;
  t5935 = t1959*t5901;
  t5936 = t1959*t5745;
  t5940 = t2125*t5803;
  t5943 = t5935 + t5936 + t5937 + t5938 + t5812 + t5940 + t5941 + t5942;
  t6024 = -0.384*var2[4]*t5877;
  t5950 = -1.*t2065*t1903;
  t5951 = 0.24*t2078;
  t5952 = t5950 + t5951;
  t6026 = 3.2*t2145*t2044;
  t6028 = 3.2*t2190*t5877;
  t6031 = Power(t2160,2);
  t6032 = 6.4*t6031;
  t6033 = 6.4*t2134*t2044;
  t6034 = Power(t2044,2);
  t6035 = 6.4*t6034;
  t6036 = 6.4*t2160*t5877;
  t6037 = t6032 + t6033 + t6035 + t6036;
  t6038 = -0.5*var2[1]*t6037;
  t6039 = -0.5*var2[0]*t5884;
  t6040 = 3.2*t5731*t2044;
  t6043 = 3.2*t5814*t5877;
  t5959 = -2.*t1959*t5803;
  t5960 = -2.*t5745*t1966;
  t5961 = t5907 + t5908 + t5959 + t5918 + t5960 + t5921;
  t5966 = 2.*t1959*t5745;
  t5967 = 2.*t2125*t5803;
  t5968 = t5966 + t5937 + t5938 + t5967 + t5941 + t5942;
  t5983 = -0.5*var2[4]*t5982;
  t5741 = 3.2*t2160*t5731;
  t5810 = 3.2*t2160*t5809;
  t5819 = 3.2*t5814*t2044;
  t5827 = 3.2*t2134*t5826;
  t5828 = t5741 + t5810 + t5819 + t5827;
  t2136 = 3.2*t2081*t2134;
  t2161 = 3.2*t2145*t2160;
  t2182 = 3.2*t2175*t2160;
  t2191 = 3.2*t2190*t2044;
  t2194 = t2136 + t2161 + t2182 + t2191;
  t2197 = -0.5*var2[3]*t2194;
  t6066 = t2198 + t2243;
  t5835 = -0.5*var2[2]*t5828;
  t6016 = 3.2*t2217*t5731;
  t6017 = 3.2*t2217*t5809;
  t6018 = 3.2*t5814*t2301;
  t6019 = 3.2*t2210*t5826;
  t6020 = t6016 + t6017 + t6018 + t6019;
  t5905 = 3.2*t5904*t2358;
  t5906 = 3.2*t5809*t2358;
  t5923 = 3.2*t2228*t5922;
  t5930 = 3.2*t2204*t5929;
  t5934 = 3.2*t2204*t5826;
  t5944 = 3.2*t2204*t5943;
  t5945 = t5898 + t5899 + t5905 + t5906 + t5923 + t5930 + t5934 + t5944;
  t6041 = 3.2*t5904*t2044;
  t6042 = 3.2*t5809*t2044;
  t6044 = 3.2*t2134*t5922;
  t6045 = 3.2*t2160*t5929;
  t6046 = 3.2*t2160*t5826;
  t6047 = 3.2*t2160*t5943;
  t6048 = t6040 + t6041 + t6042 + t6043 + t6044 + t6045 + t6046 + t6047;
  t5958 = 6.4*t5809*t2358;
  t5962 = 3.2*t2228*t5961;
  t5963 = 6.4*t2204*t5826;
  t5969 = 3.2*t2204*t5968;
  t5970 = t5898 + t5899 + t5958 + t5962 + t5963 + t5969;
  t6058 = 6.4*t5809*t2044;
  t6059 = 3.2*t2134*t5961;
  t6060 = 6.4*t2160*t5826;
  t6061 = 3.2*t2160*t5968;
  t6062 = t6040 + t6058 + t6043 + t6059 + t6060 + t6061;
  t5989 = -0.5*var2[4]*t5988;
  t6068 = -0.5*var2[4]*t5828;
  t6120 = 3.2*t2081*t5731;
  t6121 = 3.2*t2175*t5814;
  t6122 = 3.2*t2190*t5809;
  t6123 = 3.2*t2145*t5826;
  t6124 = t6120 + t6121 + t6122 + t6123;
  t6116 = 6.4*t5814*t5809;
  t6117 = 6.4*t5731*t5826;
  t6118 = t6116 + t6117;
  t6003 = 3.2*t2145*t2217;
  t6004 = 3.2*t2175*t2217;
  t6005 = 3.2*t2081*t2210;
  t6006 = 3.2*t2190*t2301;
  t6007 = t6003 + t6004 + t6005 + t6006;
  t6025 = 3.2*t2081*t2160;
  t6027 = 3.2*t2175*t2044;
  t6029 = t6025 + t6026 + t6027 + t6028;
  t5851 = 3.2*t2081*t2204;
  t5861 = 3.2*t2175*t2358;
  t5865 = t5851 + t5859 + t5860 + t5861;
  t6079 = 3.2*t2175*t5904;
  t6080 = 3.2*t2145*t5922;
  t6081 = 3.2*t2081*t5929;
  t6082 = 3.2*t2190*t5943;
  t6083 = t6079 + t6080 + t6081 + t6082;
  t6052 = 3.2*t2175*t2134;
  t6053 = 6.4*t2081*t2160;
  t6054 = 3.2*t5952*t2160;
  t6055 = 6.4*t2175*t2044;
  t6056 = t6052 + t6053 + t6054 + t6026 + t6055 + t6028;
  t5949 = 6.4*t2081*t2204;
  t5953 = 3.2*t5952*t2204;
  t5954 = 3.2*t2175*t2228;
  t5955 = 6.4*t2175*t2358;
  t5956 = t5949 + t5953 + t5954 + t5859 + t5860 + t5955;
  t6096 = 3.2*t2175*t5731;
  t6097 = 3.2*t5952*t5814;
  t6098 = 6.4*t2175*t5809;
  t6099 = 3.2*t2145*t5961;
  t6100 = 6.4*t2081*t5826;
  t6101 = 3.2*t2190*t5968;
  t6102 = t6096 + t6097 + t6098 + t6099 + t6100 + t6101;
  t5995 = -0.5*var2[4]*t5994;
  t6069 = -0.5*var2[4]*t2194;
  t6125 = -0.5*var2[4]*t6124;
  t6155 = 6.4*t2081*t2145;
  t6156 = 6.4*t2175*t2190;
  t6157 = t6155 + t6156;
  t6169 = -0.384*var2[0]*t5849;
  t6170 = -0.384*var2[1]*t5877;
  t2046 = -0.384*var2[4]*t2044;
  p_output1[0]=(t2046 + t2197 + t5835 - 0.5*(6.4*t2044*t2204 + 6.4*t2134*t2204 + 6.4*t2160*t2228 + 6.4*t2160*t2358)*var2[0] - 0.5*t2762*var2[1])*var2[4];
  p_output1[1]=(t5850 + t5885 + t5897 - 0.5*t5945*var2[2] - 0.5*t5865*var2[3])*var2[4];
  p_output1[2]=(t5850 + t5885 + t5897 - 0.5*t5970*var2[2] - 0.5*t5956*var2[3])*var2[4];
  p_output1[3]=-0.5*t5976*var2[4];
  p_output1[4]=t5983;
  p_output1[5]=t5989;
  p_output1[6]=t5995;
  p_output1[7]=-0.5*t5976*var2[0] - 0.5*t5982*var2[1] - 0.5*t5988*var2[2] - 0.5*t5994*var2[3] - 0.768*t2358*var2[4];
  p_output1[8]=var2[4]*(-0.5*t2762*var2[0] - 0.5*(6.4*t2160*t2210 + 6.4*t2044*t2217 + 6.4*t2134*t2217 + 6.4*t2160*t2301)*var2[1] - 0.5*t6020*var2[2] - 0.5*t6007*var2[3] - 0.384*t2301*var2[4]);
  p_output1[9]=(t6024 + t6038 + t6039 - 0.5*t6048*var2[2] - 0.5*t6029*var2[3])*var2[4];
  p_output1[10]=(t6024 + t6038 + t6039 - 0.5*t6062*var2[2] - 0.5*t6056*var2[3])*var2[4];
  p_output1[11]=t5983;
  p_output1[12]=-0.5*t6066*var2[4];
  p_output1[13]=t6068;
  p_output1[14]=t6069;
  p_output1[15]=t2197 + t5835 - 0.5*t5982*var2[0] - 0.5*t6066*var2[1] - 0.768*t2044*var2[4];
  p_output1[16]=(-0.5*t5828*var2[0] - 0.5*t6020*var2[1])*var2[4];
  p_output1[17]=var2[4]*(-0.5*t5945*var2[0] - 0.5*t6048*var2[1] - 0.5*(6.4*t5809*t5904 + 6.4*t5731*t5922 + 6.4*t5826*t5929 + 6.4*t5814*t5943)*var2[2] - 0.5*t6083*var2[3] - 0.384*t5943*var2[4]);
  p_output1[18]=var2[4]*(-0.5*t5970*var2[0] - 0.5*t6062*var2[1] - 0.5*(6.4*Power(t5809,2) + 6.4*Power(t5826,2) + 6.4*t5731*t5961 + 6.4*t5814*t5968)*var2[2] - 0.5*t6102*var2[3] - 0.384*t5968*var2[4]);
  p_output1[19]=t5989;
  p_output1[20]=t6068;
  p_output1[21]=-0.5*t6118*var2[4];
  p_output1[22]=t6125;
  p_output1[23]=-0.5*t5988*var2[0] - 0.5*t5828*var2[1] - 0.5*t6118*var2[2] - 0.5*t6124*var2[3] - 0.768*t5809*var2[4];
  p_output1[24]=(-0.5*t2194*var2[0] - 0.5*t6007*var2[1])*var2[4];
  p_output1[25]=(-0.5*t5865*var2[0] - 0.5*t6029*var2[1] - 0.5*t6083*var2[2])*var2[4];
  p_output1[26]=var2[4]*(-0.5*t5956*var2[0] - 0.5*t6056*var2[1] - 0.5*t6102*var2[2] - 0.5*(6.4*Power(t2081,2) + 6.4*t2145*t2175 + 6.4*Power(t2175,2) + 6.4*t2190*t5952)*var2[3] - 0.384*t5952*var2[4]);
  p_output1[27]=t5995;
  p_output1[28]=t6069;
  p_output1[29]=t6125;
  p_output1[30]=-0.5*t6157*var2[4];
  p_output1[31]=-0.5*t5994*var2[0] - 0.5*t2194*var2[1] - 0.5*t6124*var2[2] - 0.5*t6157*var2[3] - 0.768*t2175*var2[4];
  p_output1[32]=(-0.384*t2044*var2[0] - 0.384*t2301*var2[1])*var2[4];
  p_output1[33]=(t6169 + t6170 - 0.384*t5943*var2[2])*var2[4];
  p_output1[34]=(t6169 + t6170 - 0.384*t5968*var2[2] - 0.384*t5952*var2[3])*var2[4];
  p_output1[35]=-0.384*t2358*var2[4];
  p_output1[36]=t2046;
  p_output1[37]=-0.384*t5809*var2[4];
  p_output1[38]=-0.384*t2175*var2[4];
  p_output1[39]=-0.384*t2358*var2[0] - 0.384*t2044*var2[1] - 0.384*t5809*var2[2] - 0.384*t2175*var2[3];
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
