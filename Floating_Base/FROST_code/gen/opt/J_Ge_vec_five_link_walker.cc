/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:10 GMT-04:00
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
  double t10820;
  double t14834;
  double t14847;
  double t14854;
  double t14855;
  double t15117;
  double t15122;
  double t15128;
  double t15215;
  double t15216;
  double t15218;
  double t15219;
  double t15274;
  double t15275;
  double t15276;
  double t15277;
  double t15278;
  double t15280;
  double t15284;
  double t15288;
  double t15292;
  double t15293;
  double t15123;
  double t15129;
  double t15206;
  double t15211;
  double t15221;
  double t15222;
  double t15224;
  double t15225;
  double t15269;
  double t15270;
  double t15273;
  double t15304;
  double t15305;
  double t15306;
  double t15279;
  double t15281;
  double t15282;
  double t15283;
  double t15294;
  double t15295;
  double t15296;
  double t15297;
  double t15298;
  double t15299;
  double t15300;
  double t15315;
  double t15316;
  double t15317;
  double t15302;
  double t15303;
  double t15307;
  double t15308;
  double t15309;
  double t15310;
  double t15311;
  double t15312;
  double t15324;
  double t15325;
  double t15326;
  double t15313;
  double t15314;
  double t15318;
  double t15319;
  double t15320;
  double t15321;
  double t15322;
  double t15323;
  double t15333;
  double t15334;
  double t15335;
  t10820 = Cos(var1[2]);
  t14834 = Cos(var1[3]);
  t14847 = -1.*t10820*t14834;
  t14854 = Sin(var1[2]);
  t14855 = Sin(var1[3]);
  t15117 = t14854*t14855;
  t15122 = t14847 + t15117;
  t15128 = Cos(var1[4]);
  t15215 = t14834*t14854;
  t15216 = t10820*t14855;
  t15218 = t15215 + t15216;
  t15219 = Sin(var1[4]);
  t15274 = Cos(var1[5]);
  t15275 = -1.*t10820*t15274;
  t15276 = Sin(var1[5]);
  t15277 = t14854*t15276;
  t15278 = t15275 + t15277;
  t15280 = Cos(var1[6]);
  t15284 = t15274*t14854;
  t15288 = t10820*t15276;
  t15292 = t15284 + t15288;
  t15293 = Sin(var1[6]);
  t15123 = -7.33788*t15122;
  t15129 = -1.*t15128;
  t15206 = 1. + t15129;
  t15211 = 0.4*t15206*t15122;
  t15221 = -0.4*t15218*t15219;
  t15222 = t15128*t15122;
  t15224 = t15218*t15219;
  t15225 = t15222 + t15224;
  t15269 = 0.64*t15225;
  t15270 = t15211 + t15221 + t15269;
  t15273 = -31.392000000000003*t15270;
  t15304 = -1.*t14834*t14854;
  t15305 = -1.*t10820*t14855;
  t15306 = t15304 + t15305;
  t15279 = -7.33788*t15278;
  t15281 = -1.*t15280;
  t15282 = 1. + t15281;
  t15283 = 0.4*t15282*t15278;
  t15294 = -0.4*t15292*t15293;
  t15295 = t15280*t15278;
  t15296 = t15292*t15293;
  t15297 = t15295 + t15296;
  t15298 = 0.64*t15297;
  t15299 = t15283 + t15294 + t15298;
  t15300 = -31.392000000000003*t15299;
  t15315 = -1.*t15274*t14854;
  t15316 = -1.*t10820*t15276;
  t15317 = t15315 + t15316;
  t15302 = t15123 + t15273;
  t15303 = -0.4*t15128*t15122;
  t15307 = 0.4*t15306*t15219;
  t15308 = -1.*t15306*t15219;
  t15309 = t15222 + t15308;
  t15310 = 0.64*t15309;
  t15311 = t15303 + t15307 + t15310;
  t15312 = -31.392000000000003*t15311;
  t15324 = t10820*t14834;
  t15325 = -1.*t14854*t14855;
  t15326 = t15324 + t15325;
  t15313 = t15279 + t15300;
  t15314 = -0.4*t15280*t15278;
  t15318 = 0.4*t15317*t15293;
  t15319 = -1.*t15317*t15293;
  t15320 = t15295 + t15319;
  t15321 = 0.64*t15320;
  t15322 = t15314 + t15318 + t15321;
  t15323 = -31.392000000000003*t15322;
  t15333 = t10820*t15274;
  t15334 = -1.*t14854*t15276;
  t15335 = t15333 + t15334;
  p_output1[0]=28.252799999999997*t10820 + t15123 + t15273 + t15279 + t15300;
  p_output1[1]=t15302;
  p_output1[2]=t15312;
  p_output1[3]=t15313;
  p_output1[4]=t15323;
  p_output1[5]=t15302;
  p_output1[6]=t15302;
  p_output1[7]=t15312;
  p_output1[8]=t15312;
  p_output1[9]=t15312;
  p_output1[10]=-31.392000000000003*(t15307 + 0.4*t15128*t15326 + 0.64*(t15308 - 1.*t15128*t15326));
  p_output1[11]=t15313;
  p_output1[12]=t15313;
  p_output1[13]=t15323;
  p_output1[14]=t15323;
  p_output1[15]=t15323;
  p_output1[16]=-31.392000000000003*(t15318 + 0.4*t15280*t15335 + 0.64*(t15319 - 1.*t15280*t15335));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_five_link_walker.hh"

namespace RightStance
{

void J_Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
