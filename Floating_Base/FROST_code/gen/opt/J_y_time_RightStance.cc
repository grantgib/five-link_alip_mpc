/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 15:02:11 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t2174;
  double t2133;
  double t2149;
  double t2155;
  double t2167;
  double t2169;
  double t2178;
  double t2179;
  double t2182;
  double t2183;
  double t2184;
  double t2190;
  double t2191;
  double t2197;
  double t2198;
  double t2202;
  double t2203;
  double t2204;
  double t2212;
  double t2214;
  double t2216;
  double t2234;
  double t2235;
  double t2248;
  double t2291;
  double t2296;
  double t2315;
  double t2316;
  double t2285;
  double t2286;
  double t2287;
  double t2288;
  double t2289;
  double t2290;
  double t2295;
  t2174 = -1.*var4[1];
  t2133 = -1. + var5[0];
  t2149 = -1. + var6[0];
  t2155 = 1/t2149;
  t2167 = -1.*t2133*t2155;
  t2169 = 1. + t2167;
  t2178 = var4[0] + t2174;
  t2179 = Power(t2178,-5);
  t2182 = -1.*var1[0];
  t2183 = t2182 + var1[1];
  t2184 = t2133*t2155*t2183;
  t2190 = t2174 + var1[0] + t2184;
  t2191 = Power(t2190,4);
  t2197 = Power(t2178,-4);
  t2198 = Power(t2190,3);
  t2202 = 1/t2178;
  t2203 = -1.*t2202*t2190;
  t2204 = 1. + t2203;
  t2212 = Power(t2178,-3);
  t2214 = Power(t2190,2);
  t2216 = Power(t2204,2);
  t2234 = Power(t2178,-2);
  t2235 = Power(t2204,3);
  t2248 = Power(t2204,4);
  t2291 = Power(t2190,5);
  t2296 = Power(t2178,-6);
  t2315 = -1.*t2234*t2190;
  t2316 = t2202 + t2315;
  t2285 = Power(t2204,5);
  t2286 = -1.*t2285;
  t2287 = -5.*t2202*t2190*t2248;
  t2288 = -10.*t2234*t2214*t2235;
  t2289 = -10.*t2212*t2198*t2216;
  t2290 = -5.*t2197*t2191*t2204;
  t2295 = -1.*t2179*t2291;
  p_output1[0]=5.*t2169*t2202*t2248*var3[0] + 20.*t2169*t2190*t2234*t2235*var3[4] - 5.*t2169*t2202*t2248*var3[4] + 30.*t2169*t2212*t2214*t2216*var3[8] - 20.*t2169*t2190*t2234*t2235*var3[8] + 20.*t2169*t2197*t2198*t2204*var3[12] - 30.*t2169*t2212*t2214*t2216*var3[12] + 5.*t2169*t2179*t2191*var3[16] - 20.*t2169*t2197*t2198*t2204*var3[16] - 5.*t2169*t2179*t2191*var3[20];
  p_output1[1]=5.*t2133*t2155*t2202*t2248*var3[0] + 20.*t2133*t2155*t2190*t2234*t2235*var3[4] - 5.*t2133*t2155*t2202*t2248*var3[4] + 30.*t2133*t2155*t2212*t2214*t2216*var3[8] - 20.*t2133*t2155*t2190*t2234*t2235*var3[8] + 20.*t2133*t2155*t2197*t2198*t2204*var3[12] - 30.*t2133*t2155*t2212*t2214*t2216*var3[12] + 5.*t2133*t2155*t2179*t2191*var3[16] - 20.*t2133*t2155*t2197*t2198*t2204*var3[16] - 5.*t2133*t2155*t2179*t2191*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t2286;
  p_output1[4]=t2287;
  p_output1[5]=t2288;
  p_output1[6]=t2289;
  p_output1[7]=t2290;
  p_output1[8]=t2295;
  p_output1[9]=-5.*t2190*t2234*t2248*var3[0] - 20.*t2212*t2214*t2235*var3[4] + 5.*t2190*t2234*t2248*var3[4] - 30.*t2197*t2198*t2216*var3[8] + 20.*t2212*t2214*t2235*var3[8] - 20.*t2179*t2191*t2204*var3[12] + 30.*t2197*t2198*t2216*var3[12] + 20.*t2179*t2191*t2204*var3[16] - 5.*t2291*t2296*var3[16] + 5.*t2291*t2296*var3[20];
  p_output1[10]=-5.*t2248*t2316*var3[0] + 5.*t2202*t2248*var3[4] - 5.*t2190*t2234*t2248*var3[4] - 20.*t2190*t2202*t2235*t2316*var3[4] - 20.*t2212*t2214*t2235*var3[8] + 20.*t2190*t2234*t2235*var3[8] - 30.*t2214*t2216*t2234*t2316*var3[8] - 30.*t2197*t2198*t2216*var3[12] + 30.*t2212*t2214*t2216*var3[12] - 20.*t2198*t2204*t2212*t2316*var3[12] - 20.*t2179*t2191*t2204*var3[16] + 20.*t2197*t2198*t2204*var3[16] - 5.*t2191*t2197*t2316*var3[16] + 5.*t2179*t2191*var3[20] - 5.*t2291*t2296*var3[20];
  p_output1[11]=5.*t2169*t2202*t2248*var3[1] + 20.*t2169*t2190*t2234*t2235*var3[5] - 5.*t2169*t2202*t2248*var3[5] + 30.*t2169*t2212*t2214*t2216*var3[9] - 20.*t2169*t2190*t2234*t2235*var3[9] + 20.*t2169*t2197*t2198*t2204*var3[13] - 30.*t2169*t2212*t2214*t2216*var3[13] + 5.*t2169*t2179*t2191*var3[17] - 20.*t2169*t2197*t2198*t2204*var3[17] - 5.*t2169*t2179*t2191*var3[21];
  p_output1[12]=5.*t2133*t2155*t2202*t2248*var3[1] + 20.*t2133*t2155*t2190*t2234*t2235*var3[5] - 5.*t2133*t2155*t2202*t2248*var3[5] + 30.*t2133*t2155*t2212*t2214*t2216*var3[9] - 20.*t2133*t2155*t2190*t2234*t2235*var3[9] + 20.*t2133*t2155*t2197*t2198*t2204*var3[13] - 30.*t2133*t2155*t2212*t2214*t2216*var3[13] + 5.*t2133*t2155*t2179*t2191*var3[17] - 20.*t2133*t2155*t2197*t2198*t2204*var3[17] - 5.*t2133*t2155*t2179*t2191*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t2286;
  p_output1[15]=t2287;
  p_output1[16]=t2288;
  p_output1[17]=t2289;
  p_output1[18]=t2290;
  p_output1[19]=t2295;
  p_output1[20]=-5.*t2190*t2234*t2248*var3[1] - 20.*t2212*t2214*t2235*var3[5] + 5.*t2190*t2234*t2248*var3[5] - 30.*t2197*t2198*t2216*var3[9] + 20.*t2212*t2214*t2235*var3[9] - 20.*t2179*t2191*t2204*var3[13] + 30.*t2197*t2198*t2216*var3[13] + 20.*t2179*t2191*t2204*var3[17] - 5.*t2291*t2296*var3[17] + 5.*t2291*t2296*var3[21];
  p_output1[21]=-5.*t2248*t2316*var3[1] + 5.*t2202*t2248*var3[5] - 5.*t2190*t2234*t2248*var3[5] - 20.*t2190*t2202*t2235*t2316*var3[5] - 20.*t2212*t2214*t2235*var3[9] + 20.*t2190*t2234*t2235*var3[9] - 30.*t2214*t2216*t2234*t2316*var3[9] - 30.*t2197*t2198*t2216*var3[13] + 30.*t2212*t2214*t2216*var3[13] - 20.*t2198*t2204*t2212*t2316*var3[13] - 20.*t2179*t2191*t2204*var3[17] + 20.*t2197*t2198*t2204*var3[17] - 5.*t2191*t2197*t2316*var3[17] + 5.*t2179*t2191*var3[21] - 5.*t2291*t2296*var3[21];
  p_output1[22]=5.*t2169*t2202*t2248*var3[2] + 20.*t2169*t2190*t2234*t2235*var3[6] - 5.*t2169*t2202*t2248*var3[6] + 30.*t2169*t2212*t2214*t2216*var3[10] - 20.*t2169*t2190*t2234*t2235*var3[10] + 20.*t2169*t2197*t2198*t2204*var3[14] - 30.*t2169*t2212*t2214*t2216*var3[14] + 5.*t2169*t2179*t2191*var3[18] - 20.*t2169*t2197*t2198*t2204*var3[18] - 5.*t2169*t2179*t2191*var3[22];
  p_output1[23]=5.*t2133*t2155*t2202*t2248*var3[2] + 20.*t2133*t2155*t2190*t2234*t2235*var3[6] - 5.*t2133*t2155*t2202*t2248*var3[6] + 30.*t2133*t2155*t2212*t2214*t2216*var3[10] - 20.*t2133*t2155*t2190*t2234*t2235*var3[10] + 20.*t2133*t2155*t2197*t2198*t2204*var3[14] - 30.*t2133*t2155*t2212*t2214*t2216*var3[14] + 5.*t2133*t2155*t2179*t2191*var3[18] - 20.*t2133*t2155*t2197*t2198*t2204*var3[18] - 5.*t2133*t2155*t2179*t2191*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t2286;
  p_output1[26]=t2287;
  p_output1[27]=t2288;
  p_output1[28]=t2289;
  p_output1[29]=t2290;
  p_output1[30]=t2295;
  p_output1[31]=-5.*t2190*t2234*t2248*var3[2] - 20.*t2212*t2214*t2235*var3[6] + 5.*t2190*t2234*t2248*var3[6] - 30.*t2197*t2198*t2216*var3[10] + 20.*t2212*t2214*t2235*var3[10] - 20.*t2179*t2191*t2204*var3[14] + 30.*t2197*t2198*t2216*var3[14] + 20.*t2179*t2191*t2204*var3[18] - 5.*t2291*t2296*var3[18] + 5.*t2291*t2296*var3[22];
  p_output1[32]=-5.*t2248*t2316*var3[2] + 5.*t2202*t2248*var3[6] - 5.*t2190*t2234*t2248*var3[6] - 20.*t2190*t2202*t2235*t2316*var3[6] - 20.*t2212*t2214*t2235*var3[10] + 20.*t2190*t2234*t2235*var3[10] - 30.*t2214*t2216*t2234*t2316*var3[10] - 30.*t2197*t2198*t2216*var3[14] + 30.*t2212*t2214*t2216*var3[14] - 20.*t2198*t2204*t2212*t2316*var3[14] - 20.*t2179*t2191*t2204*var3[18] + 20.*t2197*t2198*t2204*var3[18] - 5.*t2191*t2197*t2316*var3[18] + 5.*t2179*t2191*var3[22] - 5.*t2291*t2296*var3[22];
  p_output1[33]=5.*t2169*t2202*t2248*var3[3] + 20.*t2169*t2190*t2234*t2235*var3[7] - 5.*t2169*t2202*t2248*var3[7] + 30.*t2169*t2212*t2214*t2216*var3[11] - 20.*t2169*t2190*t2234*t2235*var3[11] + 20.*t2169*t2197*t2198*t2204*var3[15] - 30.*t2169*t2212*t2214*t2216*var3[15] + 5.*t2169*t2179*t2191*var3[19] - 20.*t2169*t2197*t2198*t2204*var3[19] - 5.*t2169*t2179*t2191*var3[23];
  p_output1[34]=5.*t2133*t2155*t2202*t2248*var3[3] + 20.*t2133*t2155*t2190*t2234*t2235*var3[7] - 5.*t2133*t2155*t2202*t2248*var3[7] + 30.*t2133*t2155*t2212*t2214*t2216*var3[11] - 20.*t2133*t2155*t2190*t2234*t2235*var3[11] + 20.*t2133*t2155*t2197*t2198*t2204*var3[15] - 30.*t2133*t2155*t2212*t2214*t2216*var3[15] + 5.*t2133*t2155*t2179*t2191*var3[19] - 20.*t2133*t2155*t2197*t2198*t2204*var3[19] - 5.*t2133*t2155*t2179*t2191*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t2286;
  p_output1[37]=t2287;
  p_output1[38]=t2288;
  p_output1[39]=t2289;
  p_output1[40]=t2290;
  p_output1[41]=t2295;
  p_output1[42]=-5.*t2190*t2234*t2248*var3[3] - 20.*t2212*t2214*t2235*var3[7] + 5.*t2190*t2234*t2248*var3[7] - 30.*t2197*t2198*t2216*var3[11] + 20.*t2212*t2214*t2235*var3[11] - 20.*t2179*t2191*t2204*var3[15] + 30.*t2197*t2198*t2216*var3[15] + 20.*t2179*t2191*t2204*var3[19] - 5.*t2291*t2296*var3[19] + 5.*t2291*t2296*var3[23];
  p_output1[43]=-5.*t2248*t2316*var3[3] + 5.*t2202*t2248*var3[7] - 5.*t2190*t2234*t2248*var3[7] - 20.*t2190*t2202*t2235*t2316*var3[7] - 20.*t2212*t2214*t2235*var3[11] + 20.*t2190*t2234*t2235*var3[11] - 30.*t2214*t2216*t2234*t2316*var3[11] - 30.*t2197*t2198*t2216*var3[15] + 30.*t2212*t2214*t2216*var3[15] - 20.*t2198*t2204*t2212*t2316*var3[15] - 20.*t2179*t2191*t2204*var3[19] + 20.*t2197*t2198*t2204*var3[19] - 5.*t2191*t2197*t2316*var3[19] + 5.*t2179*t2191*var3[23] - 5.*t2291*t2296*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_RightStance.hh"

namespace RightStance
{

void J_y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
