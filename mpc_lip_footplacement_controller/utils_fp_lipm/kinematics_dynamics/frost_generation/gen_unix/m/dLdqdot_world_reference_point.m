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
  double t1840;
  double t1822;
  double t1825;
  double t1846;
  double t1813;
  double t1839;
  double t1848;
  double t1861;
  double t1873;
  double t1876;
  double t1884;
  double t1885;
  double t1890;
  double t1932;
  double t1935;
  double t1936;
  double t1909;
  double t1913;
  double t1920;
  double t1924;
  double t1926;
  double t1942;
  double t1943;
  double t1945;
  double t1957;
  double t1963;
  double t1967;
  double t1969;
  double t1977;
  double t1990;
  double t1991;
  double t1992;
  double t1995;
  double t1996;
  double t2003;
  double t2020;
  double t2021;
  double t2026;
  double t2030;
  double t2058;
  double t2061;
  double t2062;
  double t2064;
  double t2065;
  double t2066;
  double t2069;
  double t2076;
  double t2080;
  double t2082;
  double t1871;
  double t1889;
  double t1892;
  double t1896;
  double t1903;
  double t1904;
  double t1908;
  double t1970;
  double t1972;
  double t1973;
  double t2071;
  double t2072;
  double t2073;
  double t2083;
  double t2084;
  double t2085;
  double t2087;
  double t2088;
  double t2089;
  double t2094;
  double t2104;
  double t2105;
  double t2115;
  double t2007;
  double t2008;
  double t2010;
  double t2011;
  double t2120;
  double t2121;
  double t2126;
  double t2032;
  double t2033;
  double t2171;
  double t2172;
  double t2174;
  double t1978;
  double t1982;
  double t2116;
  double t2117;
  double t2127;
  double t2131;
  double t1997;
  double t2001;
  double t2014;
  double t2036;
  double t2037;
  double t2039;
  double t2040;
  double t2041;
  double t2042;
  double t2134;
  double t2135;
  double t2136;
  double t2137;
  double t2138;
  double t2140;
  double t2141;
  double t2170;
  double t2175;
  double t2176;
  double t2177;
  double t2178;
  double t2179;
  double t2180;
  double t2145;
  double t2147;
  double t2045;
  double t2047;
  double t2067;
  double t2150;
  double t2151;
  double t2153;
  double t2154;
  double t2155;
  double t2157;
  double t2158;
  double t2199;
  double t2169;
  double t2181;
  double t2192;
  double t2193;
  double t2195;
  double t2197;
  double t2200;
  double t2201;
  double t2202;
  double t2204;
  double t2220;
  double t2222;
  double t2236;
  double t2237;
  double t2238;
  double t2239;
  double t2240;
  double t2241;
  double t2245;
  double t2246;
  double t2247;
  double t2248;
  double t2249;
  double t2250;
  double t2182;
  double t2183;
  double t2205;
  double t2206;
  double t2207;
  double t2208;
  double t2209;
  double t2210;
  double t2211;
  double t2212;
  double t2223;
  double t2224;
  t1840 = Cos(var1[2]);
  t1822 = Cos(var1[5]);
  t1825 = Sin(var1[2]);
  t1846 = Sin(var1[5]);
  t1813 = Cos(var1[6]);
  t1839 = -1.*t1822*t1825;
  t1848 = -1.*t1840*t1846;
  t1861 = t1839 + t1848;
  t1873 = t1840*t1822;
  t1876 = -1.*t1825*t1846;
  t1884 = t1873 + t1876;
  t1885 = Sin(var1[6]);
  t1890 = t1813*t1861;
  t1932 = -1.*t1840*t1822;
  t1935 = t1825*t1846;
  t1936 = t1932 + t1935;
  t1909 = -1.*t1813;
  t1913 = 1. + t1909;
  t1920 = 0.4*t1913;
  t1924 = 0. + t1920;
  t1926 = t1924*t1861;
  t1942 = -0.4*t1885;
  t1943 = 0. + t1942;
  t1945 = t1936*t1943;
  t1957 = t1936*t1885;
  t1963 = t1890 + t1957;
  t1967 = 0.64*t1963;
  t1969 = t1926 + t1945 + t1967;
  t1977 = -1.*var3[2];
  t1990 = Cos(var1[3]);
  t1991 = t1840*t1990;
  t1992 = Sin(var1[3]);
  t1995 = -1.*t1825*t1992;
  t1996 = t1991 + t1995;
  t2003 = Cos(var1[4]);
  t2020 = -1.*t1990*t1825;
  t2021 = -1.*t1840*t1992;
  t2026 = t2020 + t2021;
  t2030 = Sin(var1[4]);
  t2058 = t1924*t1884;
  t2061 = t1861*t1943;
  t2062 = t1813*t1884;
  t2064 = t1861*t1885;
  t2065 = t2062 + t2064;
  t2066 = 0.64*t2065;
  t2069 = t2058 + t2061 + t2066;
  t2076 = t1822*t1825;
  t2080 = t1840*t1846;
  t2082 = t2076 + t2080;
  t1871 = -0.4*t1813*t1861;
  t1889 = 0.4*t1884*t1885;
  t1892 = -1.*t1884*t1885;
  t1896 = t1890 + t1892;
  t1903 = 0.64*t1896;
  t1904 = t1871 + t1889 + t1903;
  t1908 = var2[6]*t1904;
  t1970 = var2[2]*t1969;
  t1972 = var2[5]*t1969;
  t1973 = var2[1] + t1908 + t1970 + t1972;
  t2071 = var2[2]*t2069;
  t2072 = var2[5]*t2069;
  t2073 = -0.4*t1813*t1884;
  t2083 = 0.4*t2082*t1885;
  t2084 = -1.*t2082*t1885;
  t2085 = t2062 + t2084;
  t2087 = 0.64*t2085;
  t2088 = t2073 + t2083 + t2087;
  t2089 = var2[6]*t2088;
  t2094 = var2[0] + t2071 + t2072 + t2089;
  t2104 = -1.*var3[1];
  t2105 = 0. + t2104;
  t2115 = -1.*var3[0];
  t2007 = -1.*t2003;
  t2008 = 1. + t2007;
  t2010 = 0.4*t2008;
  t2011 = 0. + t2010;
  t2120 = t1990*t1825;
  t2121 = t1840*t1992;
  t2126 = t2120 + t2121;
  t2032 = -0.4*t2030;
  t2033 = 0. + t2032;
  t2171 = -1.*t1840*t1990;
  t2172 = t1825*t1992;
  t2174 = t2171 + t2172;
  t1978 = 0.24*t1840;
  t1982 = t1977 + var1[1] + t1978;
  t2116 = 0.24*t1825;
  t2117 = t2115 + var1[0] + t2116;
  t2127 = 0.11*t2126;
  t2131 = t2115 + var1[0] + t2127;
  t1997 = 0.11*t1996;
  t2001 = t1977 + var1[1] + t1997;
  t2014 = t2011*t1996;
  t2036 = t2026*t2033;
  t2037 = t2003*t1996;
  t2039 = t2026*t2030;
  t2040 = t2037 + t2039;
  t2041 = 0.64*t2040;
  t2042 = 0. + t1977 + var1[1] + t2014 + t2036 + t2041;
  t2134 = t2011*t2126;
  t2135 = t1996*t2033;
  t2136 = t2003*t2126;
  t2137 = t1996*t2030;
  t2138 = t2136 + t2137;
  t2140 = 0.64*t2138;
  t2141 = 0. + t2115 + var1[0] + t2134 + t2135 + t2140;
  t2170 = t2011*t2026;
  t2175 = t2174*t2033;
  t2176 = t2003*t2026;
  t2177 = t2174*t2030;
  t2178 = t2176 + t2177;
  t2179 = 0.64*t2178;
  t2180 = t2170 + t2175 + t2179;
  t2145 = 0.11*t2082;
  t2147 = t2115 + var1[0] + t2145;
  t2045 = 0.11*t1884;
  t2047 = t1977 + var1[1] + t2045;
  t2067 = 0. + t1977 + var1[1] + t2058 + t2061 + t2066;
  t2150 = t1924*t2082;
  t2151 = t1884*t1943;
  t2153 = t1813*t2082;
  t2154 = t1884*t1885;
  t2155 = t2153 + t2154;
  t2157 = 0.64*t2155;
  t2158 = 0. + t2115 + var1[0] + t2150 + t2151 + t2157;
  t2199 = t2014 + t2036 + t2041;
  t2169 = 0.748*t2105*t2026;
  t2181 = 3.2*t2105*t2180;
  t2192 = -0.11*t2026*t2131;
  t2193 = 0.11*t1996*t2001;
  t2195 = t2192 + t2193;
  t2197 = 6.8*t2195;
  t2200 = t2199*t2042;
  t2201 = -1.*t2141*t2180;
  t2202 = t2200 + t2201;
  t2204 = 3.2*t2202;
  t2220 = -0.748*t2105*t1996;
  t2222 = -3.2*t2105*t2199;
  t2236 = -0.4*t2003*t2026;
  t2237 = 0.4*t1996*t2030;
  t2238 = -1.*t1996*t2030;
  t2239 = t2176 + t2238;
  t2240 = 0.64*t2239;
  t2241 = t2236 + t2237 + t2240;
  t2245 = -0.4*t2003*t1996;
  t2246 = 0.4*t2126*t2030;
  t2247 = -1.*t2126*t2030;
  t2248 = t2037 + t2247;
  t2249 = 0.64*t2248;
  t2250 = t2245 + t2246 + t2249;
  t2182 = 0.748*t2105*t1861;
  t2183 = 3.2*t2105*t1969;
  t2205 = -0.11*t1861*t2147;
  t2206 = 0.11*t1884*t2047;
  t2207 = t2205 + t2206;
  t2208 = 6.8*t2207;
  t2209 = t2069*t2067;
  t2210 = -1.*t2158*t1969;
  t2211 = t2209 + t2210;
  t2212 = 3.2*t2211;
  t2223 = -0.748*t2105*t1884;
  t2224 = -3.2*t2105*t2069;
  p_output1[0]=-3.2*t1973*var4[1];
  p_output1[1]=12.*t1982 + 6.8*t2001 + 3.2*t2042 + 6.8*t2047 + 3.2*t2067 + 3.2*(t1973*var4[0] - 1.*t2094*var4[2]);
  p_output1[2]=-32.*t2105 + 3.2*t2094*var4[1];
  p_output1[3]=32.*t2105 - 3.2*t1973*var4[4];
  p_output1[4]=-12.*t2117 - 6.8*t2131 - 3.2*t2141 - 6.8*t2147 - 3.2*t2158 + 3.2*(t1973*var4[3] - 1.*t2094*var4[5]);
  p_output1[5]=3.2*t2094*var4[4];
  p_output1[6]=-2.88*t1825*t2105 + t2169 + t2181 + t2182 + t2183 - 3.2*t1973*var4[7];
  p_output1[7]=2.67 + 12.*(0.24*t1840*t1982 + 0.24*t1825*t2117) + t2197 + t2204 + t2208 + t2212 + 3.2*(t1973*var4[6] - 1.*t2094*var4[8]);
  p_output1[8]=-2.88*t1840*t2105 + t2220 + t2222 + t2223 + t2224 + 3.2*t2094*var4[7];
  p_output1[9]=t2169 + t2181 - 3.2*t1973*var4[10];
  p_output1[10]=0.6699999999999999 + t2197 + t2204 + 3.2*(t1973*var4[9] - 1.*t2094*var4[11]);
  p_output1[11]=t2220 + t2222 + 3.2*t2094*var4[10];
  p_output1[12]=3.2*t2105*t2241 - 3.2*t1973*var4[13];
  p_output1[13]=0.2 + 3.2*(-1.*t2141*t2241 + t2042*t2250) + 3.2*(t1973*var4[12] - 1.*t2094*var4[14]);
  p_output1[14]=-3.2*t2105*t2250 + 3.2*t2094*var4[13];
  p_output1[15]=t2182 + t2183 - 3.2*t1973*var4[16];
  p_output1[16]=0.6699999999999999 + t2208 + t2212 + 3.2*(t1973*var4[15] - 1.*t2094*var4[17]);
  p_output1[17]=t2223 + t2224 + 3.2*t2094*var4[16];
  p_output1[18]=3.2*t1904*t2105 - 3.2*t1973*var4[19];
  p_output1[19]=0.2 + 3.2*(t2067*t2088 - 1.*t1904*t2158) + 3.2*(t1973*var4[18] - 1.*t2094*var4[20]);
  p_output1[20]=-3.2*t2088*t2105 + 3.2*t2094*var4[19];
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

#include "dLdqdot_world_reference_point.hh"

namespace SymExpression
{

void dLdqdot_world_reference_point_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
