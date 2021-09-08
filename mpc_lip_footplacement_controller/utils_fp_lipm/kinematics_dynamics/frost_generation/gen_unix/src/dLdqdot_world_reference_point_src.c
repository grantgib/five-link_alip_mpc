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
  double t1802;
  double t1781;
  double t1789;
  double t1805;
  double t1777;
  double t1797;
  double t1807;
  double t1813;
  double t1825;
  double t1832;
  double t1835;
  double t1837;
  double t1840;
  double t1882;
  double t1884;
  double t1885;
  double t1863;
  double t1868;
  double t1871;
  double t1873;
  double t1876;
  double t1889;
  double t1890;
  double t1892;
  double t1896;
  double t1903;
  double t1904;
  double t1906;
  double t1917;
  double t1925;
  double t1926;
  double t1927;
  double t1929;
  double t1930;
  double t1937;
  double t1952;
  double t1953;
  double t1957;
  double t1962;
  double t1990;
  double t1991;
  double t1992;
  double t1995;
  double t1996;
  double t1997;
  double t2002;
  double t2010;
  double t2011;
  double t2012;
  double t1822;
  double t1839;
  double t1845;
  double t1846;
  double t1848;
  double t1852;
  double t1861;
  double t1908;
  double t1909;
  double t1911;
  double t2003;
  double t2007;
  double t2008;
  double t2014;
  double t2015;
  double t2020;
  double t2021;
  double t2024;
  double t2026;
  double t2028;
  double t2038;
  double t2039;
  double t2048;
  double t1940;
  double t1941;
  double t1942;
  double t1943;
  double t2061;
  double t2062;
  double t2063;
  double t1963;
  double t1967;
  double t2111;
  double t2112;
  double t2113;
  double t1920;
  double t1921;
  double t2053;
  double t2056;
  double t2064;
  double t2065;
  double t1932;
  double t1935;
  double t1945;
  double t1969;
  double t1970;
  double t1972;
  double t1973;
  double t1974;
  double t1975;
  double t2067;
  double t2068;
  double t2069;
  double t2071;
  double t2072;
  double t2073;
  double t2074;
  double t2110;
  double t2114;
  double t2115;
  double t2116;
  double t2117;
  double t2118;
  double t2119;
  double t2080;
  double t2082;
  double t1978;
  double t1982;
  double t1999;
  double t2084;
  double t2085;
  double t2087;
  double t2088;
  double t2089;
  double t2094;
  double t2097;
  double t2144;
  double t2109;
  double t2120;
  double t2137;
  double t2138;
  double t2140;
  double t2141;
  double t2145;
  double t2146;
  double t2147;
  double t2149;
  double t2166;
  double t2167;
  double t2183;
  double t2184;
  double t2185;
  double t2186;
  double t2187;
  double t2188;
  double t2192;
  double t2193;
  double t2194;
  double t2195;
  double t2197;
  double t2198;
  double t2121;
  double t2126;
  double t2150;
  double t2151;
  double t2153;
  double t2154;
  double t2155;
  double t2156;
  double t2157;
  double t2158;
  double t2169;
  double t2170;
  t1802 = Cos(var1[2]);
  t1781 = Cos(var1[5]);
  t1789 = Sin(var1[2]);
  t1805 = Sin(var1[5]);
  t1777 = Cos(var1[6]);
  t1797 = -1.*t1781*t1789;
  t1807 = -1.*t1802*t1805;
  t1813 = t1797 + t1807;
  t1825 = t1802*t1781;
  t1832 = -1.*t1789*t1805;
  t1835 = t1825 + t1832;
  t1837 = Sin(var1[6]);
  t1840 = t1777*t1813;
  t1882 = -1.*t1802*t1781;
  t1884 = t1789*t1805;
  t1885 = t1882 + t1884;
  t1863 = -1.*t1777;
  t1868 = 1. + t1863;
  t1871 = 0.4*t1868;
  t1873 = 0. + t1871;
  t1876 = t1873*t1813;
  t1889 = -0.4*t1837;
  t1890 = 0. + t1889;
  t1892 = t1885*t1890;
  t1896 = t1885*t1837;
  t1903 = t1840 + t1896;
  t1904 = 0.64*t1903;
  t1906 = t1876 + t1892 + t1904;
  t1917 = -1.*var3[2];
  t1925 = Cos(var1[3]);
  t1926 = t1802*t1925;
  t1927 = Sin(var1[3]);
  t1929 = -1.*t1789*t1927;
  t1930 = t1926 + t1929;
  t1937 = Cos(var1[4]);
  t1952 = -1.*t1925*t1789;
  t1953 = -1.*t1802*t1927;
  t1957 = t1952 + t1953;
  t1962 = Sin(var1[4]);
  t1990 = t1873*t1835;
  t1991 = t1813*t1890;
  t1992 = t1777*t1835;
  t1995 = t1813*t1837;
  t1996 = t1992 + t1995;
  t1997 = 0.64*t1996;
  t2002 = t1990 + t1991 + t1997;
  t2010 = t1781*t1789;
  t2011 = t1802*t1805;
  t2012 = t2010 + t2011;
  t1822 = -0.4*t1777*t1813;
  t1839 = 0.4*t1835*t1837;
  t1845 = -1.*t1835*t1837;
  t1846 = t1840 + t1845;
  t1848 = 0.64*t1846;
  t1852 = t1822 + t1839 + t1848;
  t1861 = var2[6]*t1852;
  t1908 = var2[2]*t1906;
  t1909 = var2[5]*t1906;
  t1911 = var2[1] + t1861 + t1908 + t1909;
  t2003 = var2[2]*t2002;
  t2007 = var2[5]*t2002;
  t2008 = -0.4*t1777*t1835;
  t2014 = 0.4*t2012*t1837;
  t2015 = -1.*t2012*t1837;
  t2020 = t1992 + t2015;
  t2021 = 0.64*t2020;
  t2024 = t2008 + t2014 + t2021;
  t2026 = var2[6]*t2024;
  t2028 = var2[0] + t2003 + t2007 + t2026;
  t2038 = -1.*var3[1];
  t2039 = 0. + t2038;
  t2048 = -1.*var3[0];
  t1940 = -1.*t1937;
  t1941 = 1. + t1940;
  t1942 = 0.4*t1941;
  t1943 = 0. + t1942;
  t2061 = t1925*t1789;
  t2062 = t1802*t1927;
  t2063 = t2061 + t2062;
  t1963 = -0.4*t1962;
  t1967 = 0. + t1963;
  t2111 = -1.*t1802*t1925;
  t2112 = t1789*t1927;
  t2113 = t2111 + t2112;
  t1920 = 0.24*t1802;
  t1921 = t1917 + var1[1] + t1920;
  t2053 = 0.24*t1789;
  t2056 = t2048 + var1[0] + t2053;
  t2064 = 0.11*t2063;
  t2065 = t2048 + var1[0] + t2064;
  t1932 = 0.11*t1930;
  t1935 = t1917 + var1[1] + t1932;
  t1945 = t1943*t1930;
  t1969 = t1957*t1967;
  t1970 = t1937*t1930;
  t1972 = t1957*t1962;
  t1973 = t1970 + t1972;
  t1974 = 0.64*t1973;
  t1975 = 0. + t1917 + var1[1] + t1945 + t1969 + t1974;
  t2067 = t1943*t2063;
  t2068 = t1930*t1967;
  t2069 = t1937*t2063;
  t2071 = t1930*t1962;
  t2072 = t2069 + t2071;
  t2073 = 0.64*t2072;
  t2074 = 0. + t2048 + var1[0] + t2067 + t2068 + t2073;
  t2110 = t1943*t1957;
  t2114 = t2113*t1967;
  t2115 = t1937*t1957;
  t2116 = t2113*t1962;
  t2117 = t2115 + t2116;
  t2118 = 0.64*t2117;
  t2119 = t2110 + t2114 + t2118;
  t2080 = 0.11*t2012;
  t2082 = t2048 + var1[0] + t2080;
  t1978 = 0.11*t1835;
  t1982 = t1917 + var1[1] + t1978;
  t1999 = 0. + t1917 + var1[1] + t1990 + t1991 + t1997;
  t2084 = t1873*t2012;
  t2085 = t1835*t1890;
  t2087 = t1777*t2012;
  t2088 = t1835*t1837;
  t2089 = t2087 + t2088;
  t2094 = 0.64*t2089;
  t2097 = 0. + t2048 + var1[0] + t2084 + t2085 + t2094;
  t2144 = t1945 + t1969 + t1974;
  t2109 = 0.748*t2039*t1957;
  t2120 = 3.2*t2039*t2119;
  t2137 = -0.11*t1957*t2065;
  t2138 = 0.11*t1930*t1935;
  t2140 = t2137 + t2138;
  t2141 = 6.8*t2140;
  t2145 = t2144*t1975;
  t2146 = -1.*t2074*t2119;
  t2147 = t2145 + t2146;
  t2149 = 3.2*t2147;
  t2166 = -0.748*t2039*t1930;
  t2167 = -3.2*t2039*t2144;
  t2183 = -0.4*t1937*t1957;
  t2184 = 0.4*t1930*t1962;
  t2185 = -1.*t1930*t1962;
  t2186 = t2115 + t2185;
  t2187 = 0.64*t2186;
  t2188 = t2183 + t2184 + t2187;
  t2192 = -0.4*t1937*t1930;
  t2193 = 0.4*t2063*t1962;
  t2194 = -1.*t2063*t1962;
  t2195 = t1970 + t2194;
  t2197 = 0.64*t2195;
  t2198 = t2192 + t2193 + t2197;
  t2121 = 0.748*t2039*t1813;
  t2126 = 3.2*t2039*t1906;
  t2150 = -0.11*t1813*t2082;
  t2151 = 0.11*t1835*t1982;
  t2153 = t2150 + t2151;
  t2154 = 6.8*t2153;
  t2155 = t2002*t1999;
  t2156 = -1.*t2097*t1906;
  t2157 = t2155 + t2156;
  t2158 = 3.2*t2157;
  t2169 = -0.748*t2039*t1835;
  t2170 = -3.2*t2039*t2002;
  p_output1[0]=-3.2*t1911*var4[1];
  p_output1[1]=12.*t1921 + 6.8*t1935 + 3.2*t1975 + 6.8*t1982 + 3.2*t1999 + 3.2*(t1911*var4[0] - 1.*t2028*var4[2]);
  p_output1[2]=-32.*t2039 + 3.2*t2028*var4[1];
  p_output1[3]=32.*t2039 - 3.2*t1911*var4[4];
  p_output1[4]=-12.*t2056 - 6.8*t2065 - 3.2*t2074 - 6.8*t2082 - 3.2*t2097 + 3.2*(t1911*var4[3] - 1.*t2028*var4[5]);
  p_output1[5]=3.2*t2028*var4[4];
  p_output1[6]=-2.88*t1789*t2039 + t2109 + t2120 + t2121 + t2126 - 3.2*t1911*var4[7];
  p_output1[7]=2.67 + 12.*(0.24*t1802*t1921 + 0.24*t1789*t2056) + t2141 + t2149 + t2154 + t2158 + 3.2*(t1911*var4[6] - 1.*t2028*var4[8]);
  p_output1[8]=-2.88*t1802*t2039 + t2166 + t2167 + t2169 + t2170 + 3.2*t2028*var4[7];
  p_output1[9]=t2109 + t2120 - 3.2*t1911*var4[10];
  p_output1[10]=0.6699999999999999 + t2141 + t2149 + 3.2*(t1911*var4[9] - 1.*t2028*var4[11]);
  p_output1[11]=t2166 + t2167 + 3.2*t2028*var4[10];
  p_output1[12]=3.2*t2039*t2188 - 3.2*t1911*var4[13];
  p_output1[13]=0.2 + 3.2*(-1.*t2074*t2188 + t1975*t2198) + 3.2*(t1911*var4[12] - 1.*t2028*var4[14]);
  p_output1[14]=-3.2*t2039*t2198 + 3.2*t2028*var4[13];
  p_output1[15]=t2121 + t2126 - 3.2*t1911*var4[16];
  p_output1[16]=0.6699999999999999 + t2154 + t2158 + 3.2*(t1911*var4[15] - 1.*t2028*var4[17]);
  p_output1[17]=t2169 + t2170 + 3.2*t2028*var4[16];
  p_output1[18]=3.2*t1852*t2039 - 3.2*t1911*var4[19];
  p_output1[19]=0.2 + 3.2*(t1999*t2024 - 1.*t1852*t2097) + 3.2*(t1911*var4[18] - 1.*t2028*var4[20]);
  p_output1[20]=-3.2*t2024*t2039 + 3.2*t2028*var4[19];
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

#include "dLdqdot_world_reference_point_src.hh"

namespace SymExpression
{

void dLdqdot_world_reference_point_src_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
