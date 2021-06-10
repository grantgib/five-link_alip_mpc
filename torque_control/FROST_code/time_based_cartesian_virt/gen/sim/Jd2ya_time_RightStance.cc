/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 15:59:01 GMT-05:00
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
  double t4168;
  double t4170;
  double t4161;
  double t4174;
  double t4159;
  double t4169;
  double t4175;
  double t4176;
  double t4178;
  double t4179;
  double t4198;
  double t4199;
  double t4201;
  double t4213;
  double t4214;
  double t4216;
  double t4210;
  double t4211;
  double t4212;
  double t4217;
  double t4218;
  double t4219;
  double t4220;
  double t4229;
  double t4234;
  double t4235;
  double t4236;
  double t4238;
  double t4252;
  double t4254;
  double t4251;
  double t4253;
  double t4255;
  double t4256;
  double t4258;
  double t4259;
  double t4260;
  double t4261;
  double t4263;
  double t4272;
  double t4273;
  double t4274;
  double t4244;
  double t4245;
  double t4246;
  double t4247;
  double t4248;
  double t4269;
  double t4270;
  double t4271;
  double t4275;
  double t4276;
  double t4277;
  double t4278;
  double t4177;
  double t4200;
  double t4202;
  double t4206;
  double t4207;
  double t4208;
  double t4209;
  double t4231;
  double t4286;
  double t4293;
  double t4294;
  double t4295;
  double t4292;
  double t4296;
  double t4297;
  double t4298;
  double t4299;
  double t4230;
  double t4232;
  double t4233;
  double t4237;
  double t4239;
  double t4240;
  double t4241;
  double t4242;
  double t4243;
  double t4249;
  double t4250;
  double t4307;
  double t4308;
  double t4309;
  double t4310;
  double t4311;
  double t4312;
  double t4313;
  double t4314;
  double t4315;
  double t4257;
  double t4262;
  double t4264;
  double t4265;
  double t4266;
  double t4267;
  double t4268;
  double t4279;
  double t4280;
  double t4284;
  double t4285;
  double t4287;
  double t4288;
  double t4289;
  double t4290;
  double t4291;
  double t4300;
  double t4301;
  double t4281;
  double t4347;
  double t4348;
  double t4349;
  double t4350;
  double t4351;
  double t4352;
  double t4353;
  double t4354;
  double t4355;
  double t4356;
  double t4357;
  double t4358;
  t4168 = Cos(var1[3]);
  t4170 = Sin(var1[2]);
  t4161 = Cos(var1[2]);
  t4174 = Sin(var1[3]);
  t4159 = Cos(var1[4]);
  t4169 = -1.*t4161*t4168;
  t4175 = t4170*t4174;
  t4176 = t4169 + t4175;
  t4178 = -1.*t4168*t4170;
  t4179 = -1.*t4161*t4174;
  t4198 = t4178 + t4179;
  t4199 = Sin(var1[4]);
  t4201 = t4159*t4176;
  t4213 = t4168*t4170;
  t4214 = t4161*t4174;
  t4216 = t4213 + t4214;
  t4210 = -1.*t4159;
  t4211 = 1. + t4210;
  t4212 = -0.4*t4211*t4176;
  t4217 = 0.4*t4216*t4199;
  t4218 = t4216*t4199;
  t4219 = t4201 + t4218;
  t4220 = -0.8*t4219;
  t4229 = t4212 + t4217 + t4220;
  t4234 = t4161*t4168;
  t4235 = -1.*t4170*t4174;
  t4236 = t4234 + t4235;
  t4238 = t4159*t4198;
  t4252 = Cos(var1[5]);
  t4254 = Sin(var1[5]);
  t4251 = Cos(var1[6]);
  t4253 = -1.*t4252*t4170;
  t4255 = -1.*t4161*t4254;
  t4256 = t4253 + t4255;
  t4258 = t4161*t4252;
  t4259 = -1.*t4170*t4254;
  t4260 = t4258 + t4259;
  t4261 = Sin(var1[6]);
  t4263 = t4251*t4256;
  t4272 = -1.*t4161*t4252;
  t4273 = t4170*t4254;
  t4274 = t4272 + t4273;
  t4244 = -0.4*t4211*t4198;
  t4245 = 0.4*t4176*t4199;
  t4246 = t4176*t4199;
  t4247 = t4238 + t4246;
  t4248 = -0.8*t4247;
  t4269 = -1.*t4251;
  t4270 = 1. + t4269;
  t4271 = 0.4*t4270*t4256;
  t4275 = -0.4*t4274*t4261;
  t4276 = t4274*t4261;
  t4277 = t4263 + t4276;
  t4278 = 0.8*t4277;
  t4177 = 0.4*t4159*t4176;
  t4200 = -0.4*t4198*t4199;
  t4202 = -1.*t4198*t4199;
  t4206 = t4201 + t4202;
  t4207 = -0.8*t4206;
  t4208 = t4177 + t4200 + t4207;
  t4209 = var2[4]*t4208;
  t4231 = var2[3]*t4229;
  t4286 = t4251*t4274;
  t4293 = t4252*t4170;
  t4294 = t4161*t4254;
  t4295 = t4293 + t4294;
  t4292 = 0.4*t4270*t4274;
  t4296 = -0.4*t4295*t4261;
  t4297 = t4295*t4261;
  t4298 = t4286 + t4297;
  t4299 = 0.8*t4298;
  t4230 = var2[2]*t4229;
  t4232 = t4209 + t4230 + t4231;
  t4233 = 0.4*t4159*t4198;
  t4237 = -0.4*t4236*t4199;
  t4239 = -1.*t4236*t4199;
  t4240 = t4238 + t4239;
  t4241 = -0.8*t4240;
  t4242 = t4233 + t4237 + t4241;
  t4243 = var2[4]*t4242;
  t4249 = t4244 + t4245 + t4248;
  t4250 = var2[3]*t4249;
  t4307 = -0.4*t4159*t4236;
  t4308 = -1.*t4159*t4236;
  t4309 = t4308 + t4202;
  t4310 = -0.8*t4309;
  t4311 = t4307 + t4200 + t4310;
  t4312 = var2[4]*t4311;
  t4313 = var2[2]*t4208;
  t4314 = var2[3]*t4208;
  t4315 = t4312 + t4313 + t4314;
  t4257 = -0.4*t4251*t4256;
  t4262 = 0.4*t4260*t4261;
  t4264 = -1.*t4260*t4261;
  t4265 = t4263 + t4264;
  t4266 = 0.8*t4265;
  t4267 = t4257 + t4262 + t4266;
  t4268 = var2[6]*t4267;
  t4279 = t4271 + t4275 + t4278;
  t4280 = var2[5]*t4279;
  t4284 = -0.4*t4251*t4274;
  t4285 = 0.4*t4256*t4261;
  t4287 = -1.*t4256*t4261;
  t4288 = t4286 + t4287;
  t4289 = 0.8*t4288;
  t4290 = t4284 + t4285 + t4289;
  t4291 = var2[6]*t4290;
  t4300 = t4292 + t4296 + t4299;
  t4301 = var2[5]*t4300;
  t4281 = t4244 + t4245 + t4248 + t4271 + t4275 + t4278;
  t4347 = -0.4*t4211*t4236;
  t4348 = 0.4*t4198*t4199;
  t4349 = t4159*t4236;
  t4350 = t4198*t4199;
  t4351 = t4349 + t4350;
  t4352 = -0.8*t4351;
  t4353 = 0.4*t4270*t4260;
  t4354 = -0.4*t4256*t4261;
  t4355 = t4251*t4260;
  t4356 = t4256*t4261;
  t4357 = t4355 + t4356;
  t4358 = 0.8*t4357;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t4232;
  p_output1[10]=t4243 + t4250 + t4268 + t4280 + t4281*var2[2];
  p_output1[11]=t4209 + t4231 + t4291 + t4301 + (t4212 + t4217 + t4220 + t4292 + t4296 + t4299)*var2[2];
  p_output1[12]=0;
  p_output1[13]=t4232;
  p_output1[14]=t4243 + t4250 + t4249*var2[2];
  p_output1[15]=t4232;
  p_output1[16]=0;
  p_output1[17]=t4315;
  p_output1[18]=t4242*var2[2] + t4242*var2[3] + (-0.4*t4159*t4216 + t4237 - 0.8*(-1.*t4159*t4216 + t4239))*var2[4];
  p_output1[19]=t4315;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=t4268 + t4280 + t4279*var2[2];
  p_output1[23]=t4291 + t4301 + t4300*var2[2];
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=t4267*var2[2] + t4267*var2[5] + (t4262 + 0.4*t4251*t4295 + 0.8*(t4264 - 1.*t4251*t4295))*var2[6];
  p_output1[27]=t4290*var2[2] + t4290*var2[5] + (0.4*t4251*t4260 + t4285 + 0.8*(-1.*t4251*t4260 + t4287))*var2[6];
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=1.;
  p_output1[37]=t4249;
  p_output1[38]=t4347 + t4348 + t4352 + t4353 + t4354 + t4358;
  p_output1[39]=t4281;
  p_output1[40]=0;
  p_output1[41]=t4249;
  p_output1[42]=t4347 + t4348 + t4352;
  p_output1[43]=t4249;
  p_output1[44]=0;
  p_output1[45]=t4242;
  p_output1[46]=-0.4*t4199*t4216 + 0.4*t4159*t4236 - 0.8*(-1.*t4199*t4216 + t4349);
  p_output1[47]=t4242;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=t4353 + t4354 + t4358;
  p_output1[51]=t4279;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=-0.4*t4251*t4260 + 0.4*t4261*t4295 + 0.8*(-1.*t4261*t4295 + t4355);
  p_output1[55]=t4267;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jd2ya_time_RightStance.hh"

namespace SymFunction
{

void Jd2ya_time_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
