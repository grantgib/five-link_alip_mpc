/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 15:02:44 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t1791;
  double t1797;
  double t1845;
  double t1854;
  double t1884;
  double t1910;
  double t1911;
  double t1915;
  double t1925;
  double t1913;
  double t1933;
  double t1939;
  double t1952;
  double t1963;
  double t1966;
  double t1970;
  double t1982;
  double t1986;
  double t1995;
  double t1996;
  double t2005;
  double t2010;
  double t2025;
  double t2035;
  double t2013;
  double t2024;
  double t2038;
  double t2039;
  double t2053;
  double t2054;
  double t2059;
  double t2060;
  double t2063;
  double t2072;
  double t2089;
  double t2091;
  t1791 = 4.*var5[0];
  t1797 = t1791 + var7[0] + var3[0];
  t1845 = -1. + var8[0];
  t1854 = 1/t1845;
  t1884 = -1.*var1[0];
  t1910 = t1884 + var1[1];
  t1911 = -0.333333333333333*t1854*t1910;
  t1915 = 4.*var5[1];
  t1925 = t1915 + var7[1] + var3[1];
  t1913 = -1.33333333333333*t1854*t1910;
  t1933 = 4.*var5[2];
  t1939 = t1933 + var7[2] + var3[2];
  t1952 = 4.*var5[3];
  t1963 = t1952 + var7[3] + var3[3];
  t1966 = 4.*var5[4];
  t1970 = t1966 + var7[4] + var3[4];
  t1982 = 4.*var5[5];
  t1986 = t1982 + var7[5] + var3[5];
  t1995 = 4.*var5[6];
  t1996 = t1995 + var7[6] + var3[6];
  t2005 = -1.*var7[0];
  t2010 = t2005 + var3[0];
  t2025 = -1.*var7[1];
  t2035 = t2025 + var3[1];
  t2013 = -0.25*t1854*t1910;
  t2024 = 0.25*t1854*t1910;
  t2038 = -1.*var7[2];
  t2039 = t2038 + var3[2];
  t2053 = -1.*var7[3];
  t2054 = t2053 + var3[3];
  t2059 = -1.*var7[4];
  t2060 = t2059 + var3[4];
  t2063 = -1.*var7[5];
  t2072 = t2063 + var3[5];
  t2089 = -1.*var7[6];
  t2091 = t2089 + var3[6];
  p_output1[0]=0.333333333333333*t1797*t1854;
  p_output1[1]=-0.333333333333333*t1797*t1854;
  p_output1[2]=-1.;
  p_output1[3]=t1911;
  p_output1[4]=t1913;
  p_output1[5]=1.;
  p_output1[6]=t1911;
  p_output1[7]=0.333333333333333*t1854*t1925;
  p_output1[8]=-0.333333333333333*t1854*t1925;
  p_output1[9]=-1.;
  p_output1[10]=t1911;
  p_output1[11]=t1913;
  p_output1[12]=1.;
  p_output1[13]=t1911;
  p_output1[14]=0.333333333333333*t1854*t1939;
  p_output1[15]=-0.333333333333333*t1854*t1939;
  p_output1[16]=-1.;
  p_output1[17]=t1911;
  p_output1[18]=t1913;
  p_output1[19]=1.;
  p_output1[20]=t1911;
  p_output1[21]=0.333333333333333*t1854*t1963;
  p_output1[22]=-0.333333333333333*t1854*t1963;
  p_output1[23]=-1.;
  p_output1[24]=t1911;
  p_output1[25]=t1913;
  p_output1[26]=1.;
  p_output1[27]=t1911;
  p_output1[28]=0.333333333333333*t1854*t1970;
  p_output1[29]=-0.333333333333333*t1854*t1970;
  p_output1[30]=-1.;
  p_output1[31]=t1911;
  p_output1[32]=t1913;
  p_output1[33]=1.;
  p_output1[34]=t1911;
  p_output1[35]=0.333333333333333*t1854*t1986;
  p_output1[36]=-0.333333333333333*t1854*t1986;
  p_output1[37]=-1.;
  p_output1[38]=t1911;
  p_output1[39]=t1913;
  p_output1[40]=1.;
  p_output1[41]=t1911;
  p_output1[42]=0.333333333333333*t1854*t1996;
  p_output1[43]=-0.333333333333333*t1854*t1996;
  p_output1[44]=-1.;
  p_output1[45]=t1911;
  p_output1[46]=t1913;
  p_output1[47]=1.;
  p_output1[48]=t1911;
  p_output1[49]=0.25*t1854*t2010;
  p_output1[50]=-0.25*t1854*t2010;
  p_output1[51]=-0.5;
  p_output1[52]=t2013;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t2024;
  p_output1[56]=0.25*t1854*t2035;
  p_output1[57]=-0.25*t1854*t2035;
  p_output1[58]=-0.5;
  p_output1[59]=t2013;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t2024;
  p_output1[63]=0.25*t1854*t2039;
  p_output1[64]=-0.25*t1854*t2039;
  p_output1[65]=-0.5;
  p_output1[66]=t2013;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t2024;
  p_output1[70]=0.25*t1854*t2054;
  p_output1[71]=-0.25*t1854*t2054;
  p_output1[72]=-0.5;
  p_output1[73]=t2013;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t2024;
  p_output1[77]=0.25*t1854*t2060;
  p_output1[78]=-0.25*t1854*t2060;
  p_output1[79]=-0.5;
  p_output1[80]=t2013;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t2024;
  p_output1[84]=0.25*t1854*t2072;
  p_output1[85]=-0.25*t1854*t2072;
  p_output1[86]=-0.5;
  p_output1[87]=t2013;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t2024;
  p_output1[91]=0.25*t1854*t2091;
  p_output1[92]=-0.25*t1854*t2091;
  p_output1[93]=-0.5;
  p_output1[94]=t2013;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t2024;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 98, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_x.hh"

namespace RightStance
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
