/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 16:38:59 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t2243;
  double t2232;
  double t2241;
  double t2244;
  double t2252;
  double t2257;
  double t2258;
  double t2242;
  double t2246;
  double t2248;
  double t2265;
  double t2267;
  double t2269;
  double t2270;
  double t2271;
  double t2272;
  double t2259;
  double t2262;
  double t2278;
  double t2279;
  double t2281;
  double t2283;
  double t2287;
  double t2288;
  double t2300;
  double t2290;
  double t2301;
  double t2313;
  double t2314;
  t2243 = Cos(var1[2]);
  t2232 = Cos(var1[5]);
  t2241 = Sin(var1[2]);
  t2244 = Sin(var1[5]);
  t2252 = t2243*t2232;
  t2257 = -1.*t2241*t2244;
  t2258 = t2252 + t2257;
  t2242 = t2232*t2241;
  t2246 = t2243*t2244;
  t2248 = t2242 + t2246;
  t2265 = -1.*t2232*t2241;
  t2267 = -1.*t2243*t2244;
  t2269 = t2265 + t2267;
  t2270 = 6.8*t2269*t2258;
  t2271 = 6.8*t2248*t2258;
  t2272 = t2270 + t2271;
  t2259 = Power(t2258,2);
  t2262 = 6.8*t2259;
  t2278 = Power(t2232,2);
  t2279 = 0.11*t2278;
  t2281 = Power(t2244,2);
  t2283 = 0.11*t2281;
  t2287 = t2279 + t2283;
  t2288 = 6.8*t2258*t2287;
  t2300 = 6.8*t2269*t2287;
  t2290 = 0.748*t2258;
  t2301 = 0.748*t2269;
  t2313 = 0.748*t2287;
  t2314 = 0.47 + t2313;
  p_output1[0]=6.8*Power(t2248,2) + t2262;
  p_output1[1]=t2272;
  p_output1[2]=t2288;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t2290;
  p_output1[6]=0;
  p_output1[7]=t2272;
  p_output1[8]=t2262 + 6.8*Power(t2269,2);
  p_output1[9]=t2300;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2301;
  p_output1[13]=0;
  p_output1[14]=t2288;
  p_output1[15]=t2300;
  p_output1[16]=0.47 + 6.8*Power(t2287,2);
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=t2314;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t2290;
  p_output1[36]=t2301;
  p_output1[37]=t2314;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0.55228;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Mmat3_five_link_walker.hh"

namespace SymFunction
{

void Mmat3_five_link_walker_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
