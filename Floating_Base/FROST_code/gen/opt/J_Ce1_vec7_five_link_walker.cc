/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:51:02 GMT-04:00
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
  double t4360;
  double t363;
  double t3018;
  double t4361;
  double t302;
  double t3118;
  double t5117;
  double t5131;
  double t5132;
  double t5133;
  double t5151;
  double t5152;
  double t5156;
  double t5160;
  double t5161;
  double t5174;
  double t5177;
  double t5178;
  double t5182;
  double t5183;
  double t5173;
  double t5184;
  double t5189;
  double t5190;
  double t5192;
  double t5140;
  double t5141;
  double t5147;
  double t5193;
  double t5194;
  double t5195;
  double t5205;
  double t5206;
  double t5219;
  double t5227;
  double t5228;
  double t5236;
  double t5241;
  double t5234;
  double t5242;
  double t5243;
  double t5244;
  double t5248;
  double t5148;
  double t5149;
  double t5163;
  double t5150;
  double t5162;
  double t5263;
  double t5264;
  double t5265;
  double t5267;
  double t5268;
  double t5269;
  double t5271;
  double t5272;
  double t5323;
  double t5326;
  double t5330;
  double t5274;
  double t5317;
  double t5318;
  double t5319;
  double t5350;
  double t5351;
  double t5336;
  double t5342;
  double t5349;
  double t5352;
  double t5353;
  double t5354;
  double t5355;
  double t5356;
  double t5357;
  double t5366;
  double t5367;
  double t5368;
  double t5369;
  double t5385;
  double t5387;
  double t5388;
  double t5389;
  double t5390;
  t4360 = Cos(var1[5]);
  t363 = Cos(var1[6]);
  t3018 = Sin(var1[5]);
  t4361 = Sin(var1[6]);
  t302 = Sin(var1[2]);
  t3118 = -1.*t363*t3018;
  t5117 = -1.*t4360*t4361;
  t5131 = t3118 + t5117;
  t5132 = -1.*t302*t5131;
  t5133 = Cos(var1[2]);
  t5151 = -1.*t4360*t363;
  t5152 = t3018*t4361;
  t5156 = t5151 + t5152;
  t5160 = t5133*t5156;
  t5161 = t5132 + t5160;
  t5174 = t363*t3018;
  t5177 = t4360*t4361;
  t5178 = t5174 + t5177;
  t5182 = t302*t5178;
  t5183 = t5182 + t5160;
  t5173 = -0.384*var2[2]*t5161;
  t5184 = -0.384*var2[5]*t5183;
  t5189 = -0.384*var2[6]*t5183;
  t5190 = t5173 + t5184 + t5189;
  t5192 = var2[6]*t5190;
  t5140 = t4360*t363;
  t5141 = -1.*t3018*t4361;
  t5147 = t5140 + t5141;
  t5193 = t5133*t5131;
  t5194 = -1.*t302*t5147;
  t5195 = t5193 + t5194;
  t5205 = t302*t5156;
  t5206 = t5193 + t5205;
  t5219 = -1.*t5133*t5131;
  t5227 = -1.*t302*t5156;
  t5228 = t5219 + t5227;
  t5236 = t5133*t5178;
  t5241 = t5236 + t5227;
  t5234 = -0.384*var2[2]*t5228;
  t5242 = -0.384*var2[5]*t5241;
  t5243 = -0.384*var2[6]*t5241;
  t5244 = t5234 + t5242 + t5243;
  t5248 = var2[6]*t5244;
  t5148 = -1.*t5133*t5147;
  t5149 = t5132 + t5148;
  t5163 = -0.384*var2[6]*t5161;
  t5150 = -0.384*var2[2]*t5149;
  t5162 = -0.384*var2[5]*t5161;
  t5263 = -1.*t363;
  t5264 = 1. + t5263;
  t5265 = 0.4*t5264;
  t5267 = 0.64*t363;
  t5268 = t5265 + t5267;
  t5269 = -1.*t5268*t3018;
  t5271 = -0.24*t4360*t4361;
  t5272 = t5269 + t5271;
  t5323 = t4360*t5268;
  t5326 = -0.24*t3018*t4361;
  t5330 = t5323 + t5326;
  t5274 = t5268*t3018;
  t5317 = 0.24*t4360*t4361;
  t5318 = t5274 + t5317;
  t5319 = t5131*t5318;
  t5350 = -0.24*t363*t3018;
  t5351 = t5350 + t5271;
  t5336 = 0.24*t3018*t4361;
  t5342 = t5330*t5156;
  t5349 = t5131*t5272;
  t5352 = t5131*t5351;
  t5353 = t5351*t5178;
  t5354 = t5147*t5330;
  t5355 = 0.24*t4360*t363;
  t5356 = t5355 + t5326;
  t5357 = t5147*t5356;
  t5366 = -0.24*t4360*t363;
  t5367 = t5366 + t5336;
  t5368 = t5147*t5367;
  t5369 = t5349 + t5352 + t5319 + t5353 + t5354 + t5357 + t5368 + t5342;
  t5385 = t5272*t5147;
  t5387 = t5318*t5147;
  t5388 = t5131*t5330;
  t5389 = t5178*t5330;
  t5390 = t5385 + t5387 + t5388 + t5389;
  p_output1[0]=(t5150 + t5162 + t5163)*var2[6];
  p_output1[1]=t5192;
  p_output1[2]=t5192;
  p_output1[3]=-0.384*t5195*var2[6];
  p_output1[4]=-0.384*t5206*var2[6];
  p_output1[5]=-0.384*t5195*var2[2] - 0.384*t5206*var2[5] - 0.768*t5206*var2[6];
  p_output1[6]=var2[6]*(-0.384*(t302*t5147 + t5219)*var2[2] - 0.384*t5228*var2[5] - 0.384*t5228*var2[6]);
  p_output1[7]=t5248;
  p_output1[8]=t5248;
  p_output1[9]=-0.384*t5149*var2[6];
  p_output1[10]=t5163;
  p_output1[11]=t5150 + t5162 - 0.768*t5161*var2[6];
  p_output1[12]=var2[6]*(-0.384*(2.*t5131*t5272 + t5178*t5272 + t5319 + 2.*t5147*t5330 + t5147*(-1.*t4360*t5268 + t5336) + t5342)*var2[5] - 0.384*t5369*var2[6]);
  p_output1[13]=var2[6]*(-0.384*t5369*var2[5] - 0.384*(t5319 + t5342 + 2.*t5131*t5351 + t5353 + 2.*t5147*t5356 + t5368)*var2[6]);
  p_output1[14]=-0.384*t5390*var2[6];
  p_output1[15]=-0.384*t5390*var2[5] - 0.768*(t5147*t5351 + t5178*t5356 + t5387 + t5388)*var2[6];
  p_output1[16]=-0.384*(0.24*Power(t363,2) - 1.*t363*t5268)*Power(var2[6],2);
  p_output1[17]=-0.768*(0.24*t363*t4361 - 1.*t4361*t5268)*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec7_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
