/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:37 GMT-05:00
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
  double t1756;
  double t1753;
  double t1754;
  double t1757;
  double t1805;
  double t1708;
  double t1806;
  double t1812;
  double t1813;
  double t1826;
  double t1832;
  double t1833;
  double t1834;
  double t1835;
  double t1755;
  double t1770;
  double t1803;
  double t1804;
  double t1814;
  double t1815;
  double t1856;
  double t1853;
  double t1854;
  double t1857;
  double t1861;
  double t1862;
  double t1863;
  double t1871;
  double t1872;
  double t1873;
  double t1874;
  double t1875;
  double t1855;
  double t1858;
  double t1859;
  double t1860;
  double t1864;
  double t1865;
  double t1817;
  double t1823;
  double t1824;
  double t1893;
  double t1894;
  double t1895;
  double t1843;
  double t1839;
  double t1840;
  double t1841;
  double t1842;
  double t1844;
  double t1867;
  double t1868;
  double t1869;
  double t1908;
  double t1909;
  double t1910;
  double t1883;
  double t1879;
  double t1880;
  double t1881;
  double t1882;
  double t1884;
  double t1897;
  double t1898;
  double t1899;
  double t1901;
  double t1902;
  double t1904;
  double t1905;
  double t1906;
  double t1912;
  double t1913;
  double t1914;
  double t1916;
  double t1917;
  double t1919;
  double t1920;
  double t1921;
  double t1974;
  double t1975;
  double t1976;
  double t1978;
  double t1979;
  double t1980;
  double t1994;
  double t1995;
  double t1996;
  double t1998;
  double t1999;
  double t2001;
  double t1825;
  double t1836;
  double t1837;
  double t1838;
  double t1846;
  double t1847;
  double t1848;
  double t1849;
  double t2013;
  double t2014;
  double t2015;
  double t2016;
  double t2017;
  double t1896;
  double t1900;
  double t1925;
  double t1926;
  double t1927;
  double t1928;
  double t1929;
  double t1930;
  double t1931;
  double t1932;
  double t1933;
  double t1934;
  double t1968;
  double t1969;
  double t1970;
  double t1971;
  double t1972;
  double t1973;
  double t1977;
  double t1981;
  double t1982;
  double t1984;
  double t1985;
  double t1986;
  double t2036;
  double t2037;
  double t2038;
  double t2018;
  double t2019;
  double t2020;
  double t2023;
  double t2024;
  double t2027;
  double t2028;
  double t2029;
  double t2030;
  double t2031;
  double t2032;
  double t2035;
  double t2040;
  double t2041;
  double t2045;
  double t2070;
  double t2071;
  double t2047;
  double t2073;
  double t2074;
  double t2049;
  double t1870;
  double t1876;
  double t1877;
  double t1878;
  double t1886;
  double t1887;
  double t1888;
  double t1889;
  double t2086;
  double t2087;
  double t2088;
  double t2089;
  double t2090;
  double t1911;
  double t1915;
  double t1945;
  double t1946;
  double t1947;
  double t1948;
  double t1949;
  double t1950;
  double t1951;
  double t1952;
  double t1953;
  double t1954;
  double t1988;
  double t1989;
  double t1990;
  double t1991;
  double t1992;
  double t1993;
  double t1997;
  double t2002;
  double t2003;
  double t2005;
  double t2006;
  double t2007;
  double t2109;
  double t2110;
  double t2111;
  double t2091;
  double t2092;
  double t2093;
  double t2096;
  double t2097;
  double t2100;
  double t2101;
  double t2102;
  double t2103;
  double t2104;
  double t2105;
  double t2108;
  double t2113;
  double t2114;
  double t2118;
  double t2143;
  double t2144;
  double t2120;
  double t2146;
  double t2147;
  double t2122;
  t1756 = Cos(var1[3]);
  t1753 = Cos(var1[4]);
  t1754 = Sin(var1[3]);
  t1757 = Sin(var1[4]);
  t1805 = Sin(var1[2]);
  t1708 = Cos(var1[2]);
  t1806 = t1756*t1753;
  t1812 = -1.*t1754*t1757;
  t1813 = t1806 + t1812;
  t1826 = -1.*t1753;
  t1832 = 1. + t1826;
  t1833 = 0.4*t1832;
  t1834 = 0.64*t1753;
  t1835 = t1833 + t1834;
  t1755 = -1.*t1753*t1754;
  t1770 = -1.*t1756*t1757;
  t1803 = t1755 + t1770;
  t1804 = t1708*t1803;
  t1814 = -1.*t1805*t1813;
  t1815 = t1804 + t1814;
  t1856 = Cos(var1[5]);
  t1853 = Cos(var1[6]);
  t1854 = Sin(var1[5]);
  t1857 = Sin(var1[6]);
  t1861 = t1856*t1853;
  t1862 = -1.*t1854*t1857;
  t1863 = t1861 + t1862;
  t1871 = -1.*t1853;
  t1872 = 1. + t1871;
  t1873 = 0.4*t1872;
  t1874 = 0.64*t1853;
  t1875 = t1873 + t1874;
  t1855 = -1.*t1853*t1854;
  t1858 = -1.*t1856*t1857;
  t1859 = t1855 + t1858;
  t1860 = t1708*t1859;
  t1864 = -1.*t1805*t1863;
  t1865 = t1860 + t1864;
  t1817 = -1.*t1756*t1805;
  t1823 = -1.*t1708*t1754;
  t1824 = t1817 + t1823;
  t1893 = t1708*t1756;
  t1894 = -1.*t1805*t1754;
  t1895 = t1893 + t1894;
  t1843 = t1708*t1813;
  t1839 = t1753*t1754;
  t1840 = t1756*t1757;
  t1841 = t1839 + t1840;
  t1842 = -1.*t1805*t1841;
  t1844 = t1842 + t1843;
  t1867 = -1.*t1856*t1805;
  t1868 = -1.*t1708*t1854;
  t1869 = t1867 + t1868;
  t1908 = t1708*t1856;
  t1909 = -1.*t1805*t1854;
  t1910 = t1908 + t1909;
  t1883 = t1708*t1863;
  t1879 = t1853*t1854;
  t1880 = t1856*t1857;
  t1881 = t1879 + t1880;
  t1882 = -1.*t1805*t1881;
  t1884 = t1882 + t1883;
  t1897 = t1756*t1805;
  t1898 = t1708*t1754;
  t1899 = t1897 + t1898;
  t1901 = t1805*t1803;
  t1902 = t1901 + t1843;
  t1904 = t1708*t1841;
  t1905 = t1805*t1813;
  t1906 = t1904 + t1905;
  t1912 = t1856*t1805;
  t1913 = t1708*t1854;
  t1914 = t1912 + t1913;
  t1916 = t1805*t1859;
  t1917 = t1916 + t1883;
  t1919 = t1708*t1881;
  t1920 = t1805*t1863;
  t1921 = t1919 + t1920;
  t1974 = t1835*t1754;
  t1975 = 0.24*t1756*t1757;
  t1976 = t1974 + t1975;
  t1978 = t1756*t1835;
  t1979 = -0.24*t1754*t1757;
  t1980 = t1978 + t1979;
  t1994 = t1875*t1854;
  t1995 = 0.24*t1856*t1857;
  t1996 = t1994 + t1995;
  t1998 = t1856*t1875;
  t1999 = -0.24*t1854*t1857;
  t2001 = t1998 + t1999;
  t1825 = -0.748*t1824;
  t1836 = t1835*t1757;
  t1837 = -0.24*t1753*t1757;
  t1838 = t1836 + t1837;
  t1846 = t1835*t1753;
  t1847 = Power(t1757,2);
  t1848 = 0.24*t1847;
  t1849 = t1846 + t1848;
  t2013 = -1.*t1756*t1753;
  t2014 = t1754*t1757;
  t2015 = t2013 + t2014;
  t2016 = t1805*t2015;
  t2017 = t1804 + t2016;
  t1896 = -13.6*t1824*t1895;
  t1900 = -13.6*t1899*t1895;
  t1925 = Power(t1824,2);
  t1926 = -6.8*t1925;
  t1927 = -6.8*t1824*t1899;
  t1928 = Power(t1895,2);
  t1929 = -6.8*t1928;
  t1930 = -1.*t1708*t1756;
  t1931 = t1805*t1754;
  t1932 = t1930 + t1931;
  t1933 = -6.8*t1895*t1932;
  t1934 = -1.*t1805*t1803;
  t1968 = Power(t1756,2);
  t1969 = 0.11*t1968;
  t1970 = Power(t1754,2);
  t1971 = 0.11*t1970;
  t1972 = t1969 + t1971;
  t1973 = -6.8*t1824*t1972;
  t1977 = -1.*t1976*t1813;
  t1981 = -1.*t1803*t1980;
  t1982 = t1977 + t1981;
  t1984 = t1976*t1841;
  t1985 = t1813*t1980;
  t1986 = t1984 + t1985;
  t2036 = -1.*t1835*t1754;
  t2037 = -0.24*t1756*t1757;
  t2038 = t2036 + t2037;
  t2018 = 0.384*var2[4]*t2017;
  t2019 = -3.2*t1838*t1902;
  t2020 = -3.2*t1849*t2017;
  t2023 = -6.4*t1902*t1906;
  t2024 = -6.4*t1902*t2017;
  t2027 = -3.2*t1902*t1844;
  t2028 = -3.2*t1815*t1906;
  t2029 = t1708*t2015;
  t2030 = t1934 + t2029;
  t2031 = -3.2*t1902*t2030;
  t2032 = -3.2*t1815*t2017;
  t2035 = -3.2*t1902*t1982;
  t2040 = t1976*t1813;
  t2041 = t1803*t1980;
  t2045 = -3.2*t1986*t2017;
  t2070 = -0.24*t1753*t1754;
  t2071 = t2070 + t2037;
  t2047 = -1.*t1803*t1976;
  t2073 = 0.24*t1756*t1753;
  t2074 = t2073 + t1979;
  t2049 = -1.*t1980*t2015;
  t1870 = -0.748*t1869;
  t1876 = t1875*t1857;
  t1877 = -0.24*t1853*t1857;
  t1878 = t1876 + t1877;
  t1886 = t1875*t1853;
  t1887 = Power(t1857,2);
  t1888 = 0.24*t1887;
  t1889 = t1886 + t1888;
  t2086 = -1.*t1856*t1853;
  t2087 = t1854*t1857;
  t2088 = t2086 + t2087;
  t2089 = t1805*t2088;
  t2090 = t1860 + t2089;
  t1911 = -13.6*t1869*t1910;
  t1915 = -13.6*t1914*t1910;
  t1945 = Power(t1869,2);
  t1946 = -6.8*t1945;
  t1947 = -6.8*t1869*t1914;
  t1948 = Power(t1910,2);
  t1949 = -6.8*t1948;
  t1950 = -1.*t1708*t1856;
  t1951 = t1805*t1854;
  t1952 = t1950 + t1951;
  t1953 = -6.8*t1910*t1952;
  t1954 = -1.*t1805*t1859;
  t1988 = Power(t1856,2);
  t1989 = 0.11*t1988;
  t1990 = Power(t1854,2);
  t1991 = 0.11*t1990;
  t1992 = t1989 + t1991;
  t1993 = -6.8*t1869*t1992;
  t1997 = -1.*t1996*t1863;
  t2002 = -1.*t1859*t2001;
  t2003 = t1997 + t2002;
  t2005 = t1996*t1881;
  t2006 = t1863*t2001;
  t2007 = t2005 + t2006;
  t2109 = -1.*t1875*t1854;
  t2110 = -0.24*t1856*t1857;
  t2111 = t2109 + t2110;
  t2091 = 0.384*var2[6]*t2090;
  t2092 = -3.2*t1878*t1917;
  t2093 = -3.2*t1889*t2090;
  t2096 = -6.4*t1917*t1921;
  t2097 = -6.4*t1917*t2090;
  t2100 = -3.2*t1917*t1884;
  t2101 = -3.2*t1865*t1921;
  t2102 = t1708*t2088;
  t2103 = t1954 + t2102;
  t2104 = -3.2*t1917*t2103;
  t2105 = -3.2*t1865*t2090;
  t2108 = -3.2*t1917*t2003;
  t2113 = t1996*t1863;
  t2114 = t1859*t2001;
  t2118 = -3.2*t2007*t2090;
  t2143 = -0.24*t1853*t1854;
  t2144 = t2143 + t2110;
  t2120 = -1.*t1859*t1996;
  t2146 = 0.24*t1856*t1853;
  t2147 = t2146 + t1999;
  t2122 = -1.*t2001*t2088;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(-0.5*(t1896 + t1900 - 6.4*t1815*t1902 - 6.4*t1844*t1906 + t1911 + t1915 - 6.4*t1865*t1917 - 6.4*t1884*t1921)*var2[0] - 0.5*(-3.2*Power(t1815,2) - 3.2*Power(t1844,2) - 3.2*Power(t1865,2) - 3.2*Power(t1884,2) - 3.2*(t1814 - 1.*t1708*t1841)*t1906 - 3.2*(t1864 - 1.*t1708*t1881)*t1921 + t1926 + t1927 + t1929 + t1933 - 3.2*t1902*(-1.*t1708*t1813 + t1934) + t1946 + t1947 + t1949 + t1953 - 3.2*t1917*(-1.*t1708*t1863 + t1954))*var2[1] - 0.5*(2.88*t1805 + t1973 - 3.2*t1844*t1982 - 3.2*t1815*t1986 + t1993 - 3.2*t1884*t2003 - 3.2*t1865*t2007)*var2[2] - 0.5*(t1825 - 3.2*t1838*t1844 - 3.2*t1815*t1849)*var2[3] + 0.384*t1815*var2[4] - 0.5*(t1870 - 3.2*t1878*t1884 - 3.2*t1865*t1889)*var2[5] + 0.384*t1865*var2[6]);
  p_output1[3]=var2[0]*(t2018 - 0.5*(t1896 + t1900 + t2023 + t2024)*var2[0] - 0.5*(t1926 + t1927 + t1929 + t1933 + t2027 + t2028 + t2031 + t2032)*var2[1] - 0.5*(t1973 + t2035 - 3.2*t1902*(t1841*t1980 + t1813*t2038 + t2040 + t2041) + t2045 - 3.2*t1906*(-1.*t1813*t1980 - 1.*t1803*t2038 + t2047 + t2049))*var2[2] - 0.5*(t1825 + t2019 + t2020)*var2[3]);
  p_output1[4]=var2[0]*(t2018 - 0.5*(t2023 + t2024)*var2[0] - 0.5*(t2027 + t2028 + t2031 + t2032)*var2[1] - 0.5*(t2035 + t2045 - 3.2*t1906*(t2047 + t2049 - 1.*t1803*t2071 - 1.*t1813*t2074) - 3.2*t1902*(t2040 + t2041 + t1813*t2071 + t1841*t2074))*var2[2] - 0.5*(-3.2*(0.24*t1753*t1757 - 1.*t1757*t1835)*t1902 - 3.2*(-0.24*Power(t1753,2) + t1846)*t1906 + t2019 + t2020)*var2[3]);
  p_output1[5]=var2[0]*(t2091 - 0.5*(t1911 + t1915 + t2096 + t2097)*var2[0] - 0.5*(t1946 + t1947 + t1949 + t1953 + t2100 + t2101 + t2104 + t2105)*var2[1] - 0.5*(t1993 + t2108 - 3.2*t1917*(t1881*t2001 + t1863*t2111 + t2113 + t2114) + t2118 - 3.2*t1921*(-1.*t1863*t2001 - 1.*t1859*t2111 + t2120 + t2122))*var2[2] - 0.5*(t1870 + t2092 + t2093)*var2[5]);
  p_output1[6]=var2[0]*(t2091 - 0.5*(t2096 + t2097)*var2[0] - 0.5*(t2100 + t2101 + t2104 + t2105)*var2[1] - 0.5*(t2108 + t2118 - 3.2*t1921*(t2120 + t2122 - 1.*t1859*t2144 - 1.*t1863*t2147) - 3.2*t1917*(t2113 + t2114 + t1863*t2144 + t1881*t2147))*var2[2] - 0.5*(-3.2*(0.24*t1853*t1857 - 1.*t1857*t1875)*t1917 - 3.2*(-0.24*Power(t1853,2) + t1886)*t1921 + t2092 + t2093)*var2[5]);
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

#include "Ce3_vec1_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
