/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:38 GMT-05:00
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
  double t1852;
  double t1845;
  double t1850;
  double t1866;
  double t1892;
  double t1816;
  double t1851;
  double t1885;
  double t1890;
  double t1891;
  double t1903;
  double t1907;
  double t1918;
  double t1922;
  double t1923;
  double t1939;
  double t1940;
  double t1941;
  double t1942;
  double t1943;
  double t2011;
  double t2008;
  double t2009;
  double t2012;
  double t2010;
  double t2021;
  double t2022;
  double t2025;
  double t2026;
  double t2033;
  double t2034;
  double t2039;
  double t2042;
  double t2051;
  double t2052;
  double t2053;
  double t2054;
  double t2055;
  double t2077;
  double t2078;
  double t2079;
  double t1935;
  double t1936;
  double t1937;
  double t1966;
  double t1962;
  double t1963;
  double t1964;
  double t1965;
  double t1967;
  double t2112;
  double t2115;
  double t2116;
  double t2044;
  double t2046;
  double t2048;
  double t2068;
  double t2064;
  double t2065;
  double t2066;
  double t2067;
  double t2069;
  double t2080;
  double t2081;
  double t2082;
  double t2099;
  double t2098;
  double t2106;
  double t2085;
  double t2094;
  double t2117;
  double t2119;
  double t2121;
  double t2129;
  double t2128;
  double t2130;
  double t2125;
  double t2126;
  double t2187;
  double t2188;
  double t2189;
  double t2191;
  double t2192;
  double t2193;
  double t2207;
  double t2208;
  double t2209;
  double t2211;
  double t2212;
  double t2213;
  double t1938;
  double t1959;
  double t1960;
  double t1961;
  double t1944;
  double t1955;
  double t1956;
  double t1957;
  double t2225;
  double t2226;
  double t2227;
  double t2228;
  double t2229;
  double t2083;
  double t2084;
  double t2134;
  double t2135;
  double t2136;
  double t2137;
  double t2138;
  double t2139;
  double t2140;
  double t2141;
  double t2142;
  double t2145;
  double t2148;
  double t2154;
  double t2155;
  double t2156;
  double t2181;
  double t2182;
  double t2183;
  double t2184;
  double t2185;
  double t2186;
  double t2190;
  double t2194;
  double t2195;
  double t2197;
  double t2198;
  double t2199;
  double t2248;
  double t2249;
  double t2250;
  double t2230;
  double t2231;
  double t2232;
  double t2235;
  double t2236;
  double t2239;
  double t2240;
  double t2241;
  double t2242;
  double t2243;
  double t2244;
  double t2247;
  double t2252;
  double t2253;
  double t2257;
  double t2282;
  double t2283;
  double t2259;
  double t2285;
  double t2286;
  double t2261;
  double t2050;
  double t2061;
  double t2062;
  double t2063;
  double t2056;
  double t2057;
  double t2058;
  double t2059;
  double t2298;
  double t2299;
  double t2300;
  double t2301;
  double t2302;
  double t2123;
  double t2124;
  double t2158;
  double t2159;
  double t2160;
  double t2161;
  double t2162;
  double t2163;
  double t2164;
  double t2165;
  double t2166;
  double t2167;
  double t2168;
  double t2174;
  double t2175;
  double t2176;
  double t2201;
  double t2202;
  double t2203;
  double t2204;
  double t2205;
  double t2206;
  double t2210;
  double t2214;
  double t2215;
  double t2217;
  double t2218;
  double t2219;
  double t2321;
  double t2322;
  double t2323;
  double t2303;
  double t2304;
  double t2305;
  double t2308;
  double t2309;
  double t2312;
  double t2313;
  double t2314;
  double t2315;
  double t2316;
  double t2317;
  double t2320;
  double t2325;
  double t2326;
  double t2330;
  double t2355;
  double t2356;
  double t2332;
  double t2358;
  double t2359;
  double t2334;
  t1852 = Cos(var1[3]);
  t1845 = Cos(var1[4]);
  t1850 = Sin(var1[3]);
  t1866 = Sin(var1[4]);
  t1892 = Cos(var1[2]);
  t1816 = Sin(var1[2]);
  t1851 = -1.*t1845*t1850;
  t1885 = -1.*t1852*t1866;
  t1890 = t1851 + t1885;
  t1891 = -1.*t1816*t1890;
  t1903 = t1852*t1845;
  t1907 = -1.*t1850*t1866;
  t1918 = t1903 + t1907;
  t1922 = -1.*t1892*t1918;
  t1923 = t1891 + t1922;
  t1939 = -1.*t1845;
  t1940 = 1. + t1939;
  t1941 = 0.4*t1940;
  t1942 = 0.64*t1845;
  t1943 = t1941 + t1942;
  t2011 = Cos(var1[5]);
  t2008 = Cos(var1[6]);
  t2009 = Sin(var1[5]);
  t2012 = Sin(var1[6]);
  t2010 = -1.*t2008*t2009;
  t2021 = -1.*t2011*t2012;
  t2022 = t2010 + t2021;
  t2025 = -1.*t1816*t2022;
  t2026 = t2011*t2008;
  t2033 = -1.*t2009*t2012;
  t2034 = t2026 + t2033;
  t2039 = -1.*t1892*t2034;
  t2042 = t2025 + t2039;
  t2051 = -1.*t2008;
  t2052 = 1. + t2051;
  t2053 = 0.4*t2052;
  t2054 = 0.64*t2008;
  t2055 = t2053 + t2054;
  t2077 = -1.*t1852*t1816;
  t2078 = -1.*t1892*t1850;
  t2079 = t2077 + t2078;
  t1935 = -1.*t1892*t1852;
  t1936 = t1816*t1850;
  t1937 = t1935 + t1936;
  t1966 = -1.*t1816*t1918;
  t1962 = t1845*t1850;
  t1963 = t1852*t1866;
  t1964 = t1962 + t1963;
  t1965 = -1.*t1892*t1964;
  t1967 = t1965 + t1966;
  t2112 = -1.*t2011*t1816;
  t2115 = -1.*t1892*t2009;
  t2116 = t2112 + t2115;
  t2044 = -1.*t1892*t2011;
  t2046 = t1816*t2009;
  t2048 = t2044 + t2046;
  t2068 = -1.*t1816*t2034;
  t2064 = t2008*t2009;
  t2065 = t2011*t2012;
  t2066 = t2064 + t2065;
  t2067 = -1.*t1892*t2066;
  t2069 = t2067 + t2068;
  t2080 = t1892*t1852;
  t2081 = -1.*t1816*t1850;
  t2082 = t2080 + t2081;
  t2099 = t1892*t1918;
  t2098 = -1.*t1816*t1964;
  t2106 = t2098 + t2099;
  t2085 = t1892*t1890;
  t2094 = t2085 + t1966;
  t2117 = t1892*t2011;
  t2119 = -1.*t1816*t2009;
  t2121 = t2117 + t2119;
  t2129 = t1892*t2034;
  t2128 = -1.*t1816*t2066;
  t2130 = t2128 + t2129;
  t2125 = t1892*t2022;
  t2126 = t2125 + t2068;
  t2187 = t1943*t1850;
  t2188 = 0.24*t1852*t1866;
  t2189 = t2187 + t2188;
  t2191 = t1852*t1943;
  t2192 = -0.24*t1850*t1866;
  t2193 = t2191 + t2192;
  t2207 = t2055*t2009;
  t2208 = 0.24*t2011*t2012;
  t2209 = t2207 + t2208;
  t2211 = t2011*t2055;
  t2212 = -0.24*t2009*t2012;
  t2213 = t2211 + t2212;
  t1938 = -0.748*t1937;
  t1959 = t1943*t1866;
  t1960 = -0.24*t1845*t1866;
  t1961 = t1959 + t1960;
  t1944 = t1943*t1845;
  t1955 = Power(t1866,2);
  t1956 = 0.24*t1955;
  t1957 = t1944 + t1956;
  t2225 = -1.*t1852*t1845;
  t2226 = t1850*t1866;
  t2227 = t2225 + t2226;
  t2228 = t1892*t2227;
  t2229 = t1891 + t2228;
  t2083 = -13.6*t2079*t2082;
  t2084 = -13.6*t2079*t1937;
  t2134 = Power(t2079,2);
  t2135 = -6.8*t2134;
  t2136 = t1852*t1816;
  t2137 = t1892*t1850;
  t2138 = t2136 + t2137;
  t2139 = -6.8*t2079*t2138;
  t2140 = Power(t2082,2);
  t2141 = -6.8*t2140;
  t2142 = -6.8*t2082*t1937;
  t2145 = t1816*t1890;
  t2148 = t2145 + t2099;
  t2154 = t1892*t1964;
  t2155 = t1816*t1918;
  t2156 = t2154 + t2155;
  t2181 = Power(t1852,2);
  t2182 = 0.11*t2181;
  t2183 = Power(t1850,2);
  t2184 = 0.11*t2183;
  t2185 = t2182 + t2184;
  t2186 = -6.8*t1937*t2185;
  t2190 = -1.*t2189*t1918;
  t2194 = -1.*t1890*t2193;
  t2195 = t2190 + t2194;
  t2197 = t2189*t1964;
  t2198 = t1918*t2193;
  t2199 = t2197 + t2198;
  t2248 = -1.*t1943*t1850;
  t2249 = -0.24*t1852*t1866;
  t2250 = t2248 + t2249;
  t2230 = 0.384*var2[4]*t2229;
  t2231 = -3.2*t1961*t2094;
  t2232 = -3.2*t1957*t2229;
  t2235 = -6.4*t2106*t2094;
  t2236 = -6.4*t2094*t2229;
  t2239 = -3.2*t2148*t2106;
  t2240 = -3.2*t2094*t2156;
  t2241 = -3.2*t2148*t2229;
  t2242 = t1816*t2227;
  t2243 = t2085 + t2242;
  t2244 = -3.2*t2094*t2243;
  t2247 = -3.2*t2094*t2195;
  t2252 = t2189*t1918;
  t2253 = t1890*t2193;
  t2257 = -3.2*t2199*t2229;
  t2282 = -0.24*t1845*t1850;
  t2283 = t2282 + t2249;
  t2259 = -1.*t1890*t2189;
  t2285 = 0.24*t1852*t1845;
  t2286 = t2285 + t2192;
  t2261 = -1.*t2193*t2227;
  t2050 = -0.748*t2048;
  t2061 = t2055*t2012;
  t2062 = -0.24*t2008*t2012;
  t2063 = t2061 + t2062;
  t2056 = t2055*t2008;
  t2057 = Power(t2012,2);
  t2058 = 0.24*t2057;
  t2059 = t2056 + t2058;
  t2298 = -1.*t2011*t2008;
  t2299 = t2009*t2012;
  t2300 = t2298 + t2299;
  t2301 = t1892*t2300;
  t2302 = t2025 + t2301;
  t2123 = -13.6*t2116*t2121;
  t2124 = -13.6*t2116*t2048;
  t2158 = Power(t2116,2);
  t2159 = -6.8*t2158;
  t2160 = t2011*t1816;
  t2161 = t1892*t2009;
  t2162 = t2160 + t2161;
  t2163 = -6.8*t2116*t2162;
  t2164 = Power(t2121,2);
  t2165 = -6.8*t2164;
  t2166 = -6.8*t2121*t2048;
  t2167 = t1816*t2022;
  t2168 = t2167 + t2129;
  t2174 = t1892*t2066;
  t2175 = t1816*t2034;
  t2176 = t2174 + t2175;
  t2201 = Power(t2011,2);
  t2202 = 0.11*t2201;
  t2203 = Power(t2009,2);
  t2204 = 0.11*t2203;
  t2205 = t2202 + t2204;
  t2206 = -6.8*t2048*t2205;
  t2210 = -1.*t2209*t2034;
  t2214 = -1.*t2022*t2213;
  t2215 = t2210 + t2214;
  t2217 = t2209*t2066;
  t2218 = t2034*t2213;
  t2219 = t2217 + t2218;
  t2321 = -1.*t2055*t2009;
  t2322 = -0.24*t2011*t2012;
  t2323 = t2321 + t2322;
  t2303 = 0.384*var2[6]*t2302;
  t2304 = -3.2*t2063*t2126;
  t2305 = -3.2*t2059*t2302;
  t2308 = -6.4*t2130*t2126;
  t2309 = -6.4*t2126*t2302;
  t2312 = -3.2*t2168*t2130;
  t2313 = -3.2*t2126*t2176;
  t2314 = -3.2*t2168*t2302;
  t2315 = t1816*t2300;
  t2316 = t2125 + t2315;
  t2317 = -3.2*t2126*t2316;
  t2320 = -3.2*t2126*t2215;
  t2325 = t2209*t2034;
  t2326 = t2022*t2213;
  t2330 = -3.2*t2219*t2302;
  t2355 = -0.24*t2008*t2009;
  t2356 = t2355 + t2322;
  t2332 = -1.*t2022*t2209;
  t2358 = 0.24*t2011*t2008;
  t2359 = t2358 + t2212;
  t2334 = -1.*t2213*t2300;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(-0.5*(-3.2*Power(t2094,2) - 3.2*Power(t2106,2) - 3.2*Power(t2126,2) - 3.2*Power(t2130,2) + t2135 + t2139 + t2141 + t2142 - 3.2*t1923*t2148 - 3.2*t1967*t2156 + t2159 + t2163 + t2165 + t2166 - 3.2*t2042*t2168 - 3.2*t2069*t2176)*var2[0] - 0.5*(t2083 + t2084 - 6.4*t1923*t2094 - 6.4*t1967*t2106 + t2123 + t2124 - 6.4*t2042*t2126 - 6.4*t2069*t2130)*var2[1] - 0.5*(2.88*t1892 + t2186 - 3.2*t1967*t2195 - 3.2*t1923*t2199 + t2206 - 3.2*t2069*t2215 - 3.2*t2042*t2219)*var2[2] - 0.5*(t1938 - 3.2*t1923*t1957 - 3.2*t1961*t1967)*var2[3] + 0.384*t1923*var2[4] - 0.5*(t2050 - 3.2*t2042*t2059 - 3.2*t2063*t2069)*var2[5] + 0.384*t2042*var2[6]);
  p_output1[3]=var2[1]*(t2230 - 0.5*(t2135 + t2139 + t2141 + t2142 + t2239 + t2240 + t2241 + t2244)*var2[0] - 0.5*(t2083 + t2084 + t2235 + t2236)*var2[1] - 0.5*(t2186 + t2247 - 3.2*t2094*(t1964*t2193 + t1918*t2250 + t2252 + t2253) + t2257 - 3.2*t2106*(-1.*t1918*t2193 - 1.*t1890*t2250 + t2259 + t2261))*var2[2] - 0.5*(t1938 + t2231 + t2232)*var2[3]);
  p_output1[4]=var2[1]*(t2230 - 0.5*(t2239 + t2240 + t2241 + t2244)*var2[0] - 0.5*(t2235 + t2236)*var2[1] - 0.5*(t2247 + t2257 - 3.2*t2106*(t2259 + t2261 - 1.*t1890*t2283 - 1.*t1918*t2286) - 3.2*t2094*(t2252 + t2253 + t1918*t2283 + t1964*t2286))*var2[2] - 0.5*(-3.2*(0.24*t1845*t1866 - 1.*t1866*t1943)*t2094 - 3.2*(-0.24*Power(t1845,2) + t1944)*t2106 + t2231 + t2232)*var2[3]);
  p_output1[5]=var2[1]*(t2303 - 0.5*(t2159 + t2163 + t2165 + t2166 + t2312 + t2313 + t2314 + t2317)*var2[0] - 0.5*(t2123 + t2124 + t2308 + t2309)*var2[1] - 0.5*(t2206 + t2320 - 3.2*t2126*(t2066*t2213 + t2034*t2323 + t2325 + t2326) + t2330 - 3.2*t2130*(-1.*t2034*t2213 - 1.*t2022*t2323 + t2332 + t2334))*var2[2] - 0.5*(t2050 + t2304 + t2305)*var2[5]);
  p_output1[6]=var2[1]*(t2303 - 0.5*(t2312 + t2313 + t2314 + t2317)*var2[0] - 0.5*(t2308 + t2309)*var2[1] - 0.5*(t2320 + t2330 - 3.2*t2130*(t2332 + t2334 - 1.*t2022*t2356 - 1.*t2034*t2359) - 3.2*t2126*(t2325 + t2326 + t2034*t2356 + t2066*t2359))*var2[2] - 0.5*(-3.2*(0.24*t2008*t2012 - 1.*t2012*t2055)*t2126 - 3.2*(-0.24*Power(t2008,2) + t2056)*t2130 + t2304 + t2305)*var2[5]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec2_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
