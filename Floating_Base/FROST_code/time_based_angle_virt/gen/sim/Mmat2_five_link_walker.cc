/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 16:38:57 GMT-05:00
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
  double t2235;
  double t2224;
  double t2228;
  double t2237;
  double t2246;
  double t2247;
  double t2248;
  double t2232;
  double t2241;
  double t2242;
  double t2255;
  double t2256;
  double t2257;
  double t2258;
  double t2259;
  double t2262;
  double t2249;
  double t2250;
  double t2263;
  double t2265;
  double t2267;
  double t2269;
  double t2270;
  double t2271;
  double t2283;
  double t2272;
  double t2287;
  double t2294;
  double t2295;
  t2235 = Cos(var1[2]);
  t2224 = Cos(var1[3]);
  t2228 = Sin(var1[2]);
  t2237 = Sin(var1[3]);
  t2246 = t2235*t2224;
  t2247 = -1.*t2228*t2237;
  t2248 = t2246 + t2247;
  t2232 = t2224*t2228;
  t2241 = t2235*t2237;
  t2242 = t2232 + t2241;
  t2255 = -1.*t2224*t2228;
  t2256 = -1.*t2235*t2237;
  t2257 = t2255 + t2256;
  t2258 = 6.8*t2257*t2248;
  t2259 = 6.8*t2242*t2248;
  t2262 = t2258 + t2259;
  t2249 = Power(t2248,2);
  t2250 = 6.8*t2249;
  t2263 = Power(t2224,2);
  t2265 = 0.11*t2263;
  t2267 = Power(t2237,2);
  t2269 = 0.11*t2267;
  t2270 = t2265 + t2269;
  t2271 = 6.8*t2248*t2270;
  t2283 = 6.8*t2257*t2270;
  t2272 = 0.748*t2248;
  t2287 = 0.748*t2257;
  t2294 = 0.748*t2270;
  t2295 = 0.47 + t2294;
  p_output1[0]=6.8*Power(t2242,2) + t2250;
  p_output1[1]=t2262;
  p_output1[2]=t2271;
  p_output1[3]=t2272;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=t2262;
  p_output1[8]=t2250 + 6.8*Power(t2257,2);
  p_output1[9]=t2283;
  p_output1[10]=t2287;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=t2271;
  p_output1[15]=t2283;
  p_output1[16]=0.47 + 6.8*Power(t2270,2);
  p_output1[17]=t2295;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=t2272;
  p_output1[22]=t2287;
  p_output1[23]=t2295;
  p_output1[24]=0.55228;
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
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
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

#include "Mmat2_five_link_walker.hh"

namespace SymFunction
{

void Mmat2_five_link_walker_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
