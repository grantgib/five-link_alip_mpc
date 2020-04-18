/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 16:57:34 GMT-04:00
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
  double t4185;
  double t4180;
  double t4181;
  double t4186;
  double t4164;
  double t4182;
  double t4187;
  double t4188;
  double t4192;
  double t4193;
  double t4194;
  double t4195;
  double t4197;
  double t4206;
  double t4207;
  double t4208;
  double t4203;
  double t4204;
  double t4205;
  double t4209;
  double t4210;
  double t4211;
  double t4212;
  double t4213;
  double t4219;
  double t4226;
  double t4227;
  double t4228;
  double t4225;
  double t4229;
  double t4230;
  double t4231;
  double t4232;
  double t4233;
  double t4189;
  double t4196;
  double t4198;
  double t4199;
  double t4200;
  double t4201;
  double t4202;
  double t4214;
  double t4215;
  double t4216;
  double t4217;
  double t4218;
  double t4220;
  double t4221;
  double t4222;
  double t4223;
  double t4224;
  double t4234;
  double t4235;
  double t4236;
  t4185 = Cos(var1[2]);
  t4180 = Cos(var1[3]);
  t4181 = Sin(var1[2]);
  t4186 = Sin(var1[3]);
  t4164 = Cos(var1[4]);
  t4182 = -1.*t4180*t4181;
  t4187 = -1.*t4185*t4186;
  t4188 = t4182 + t4187;
  t4192 = t4185*t4180;
  t4193 = -1.*t4181*t4186;
  t4194 = t4192 + t4193;
  t4195 = Sin(var1[4]);
  t4197 = t4164*t4188;
  t4206 = -1.*t4185*t4180;
  t4207 = t4181*t4186;
  t4208 = t4206 + t4207;
  t4203 = -1.*t4164;
  t4204 = 1. + t4203;
  t4205 = 0.4*t4204*t4188;
  t4209 = -0.4*t4208*t4195;
  t4210 = t4208*t4195;
  t4211 = t4197 + t4210;
  t4212 = 0.8*t4211;
  t4213 = t4205 + t4209 + t4212;
  t4219 = t4164*t4208;
  t4226 = t4180*t4181;
  t4227 = t4185*t4186;
  t4228 = t4226 + t4227;
  t4225 = 0.4*t4204*t4208;
  t4229 = -0.4*t4228*t4195;
  t4230 = t4228*t4195;
  t4231 = t4219 + t4230;
  t4232 = 0.8*t4231;
  t4233 = t4225 + t4229 + t4232;
  t4189 = -0.4*t4164*t4188;
  t4196 = 0.4*t4194*t4195;
  t4198 = -1.*t4194*t4195;
  t4199 = t4197 + t4198;
  t4200 = 0.8*t4199;
  t4201 = t4189 + t4196 + t4200;
  t4202 = var2[4]*t4201;
  t4214 = var2[2]*t4213;
  t4215 = var2[3]*t4213;
  t4216 = t4202 + t4214 + t4215;
  t4217 = -0.4*t4164*t4208;
  t4218 = 0.4*t4188*t4195;
  t4220 = -1.*t4188*t4195;
  t4221 = t4219 + t4220;
  t4222 = 0.8*t4221;
  t4223 = t4217 + t4218 + t4222;
  t4224 = var2[4]*t4223;
  t4234 = var2[2]*t4233;
  t4235 = var2[3]*t4233;
  t4236 = t4224 + t4234 + t4235;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t4216;
  p_output1[7]=0;
  p_output1[8]=t4236;
  p_output1[9]=t4216;
  p_output1[10]=0;
  p_output1[11]=t4236;
  p_output1[12]=t4201*var2[2] + t4201*var2[3] + (t4196 + 0.4*t4164*t4228 + 0.8*(t4198 - 1.*t4164*t4228))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t4223*var2[2] + t4223*var2[3] + (0.4*t4164*t4194 + t4218 + 0.8*(-1.*t4164*t4194 + t4220))*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_RightToe_RightStance.hh"

namespace SymFunction
{

void dJh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
