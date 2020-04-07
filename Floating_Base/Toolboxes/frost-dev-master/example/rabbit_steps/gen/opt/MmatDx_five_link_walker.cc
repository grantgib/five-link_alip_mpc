/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:51:26 GMT-04:00
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
  double t1802;
  double t1561;
  double t1666;
  double t1823;
  double t3821;
  double t744;
  double t1765;
  double t2083;
  double t3616;
  double t3647;
  double t3846;
  double t3873;
  double t3889;
  double t3916;
  double t3945;
  double t4001;
  double t4014;
  double t4024;
  double t4031;
  double t4034;
  double t4121;
  double t4118;
  double t4119;
  double t4122;
  double t4120;
  double t4123;
  double t4132;
  double t4140;
  double t4144;
  double t4149;
  double t4151;
  double t4152;
  double t4153;
  double t4169;
  double t4174;
  double t4176;
  double t4181;
  double t4182;
  double t3982;
  double t3989;
  double t3993;
  double t4096;
  double t4097;
  double t4098;
  double t4099;
  double t4102;
  double t4105;
  double t4155;
  double t4156;
  double t4157;
  double t4204;
  double t4205;
  double t4209;
  double t4210;
  double t4213;
  double t4214;
  double t4233;
  double t4234;
  double t4238;
  double t4264;
  double t4268;
  double t4270;
  double t4363;
  double t4369;
  double t4370;
  double t4372;
  double t4373;
  double t4374;
  double t4409;
  double t4410;
  double t4413;
  double t4415;
  double t4416;
  double t4417;
  double t4242;
  double t4243;
  double t4244;
  double t4226;
  double t4227;
  double t4228;
  double t4070;
  double t4073;
  double t4084;
  double t4251;
  double t4255;
  double t4045;
  double t4047;
  double t4056;
  double t4057;
  double t4274;
  double t4276;
  double t4278;
  double t4257;
  double t4258;
  double t4262;
  double t4194;
  double t4195;
  double t4196;
  double t4294;
  double t4295;
  double t4187;
  double t4189;
  double t4190;
  double t4192;
  double t4309;
  double t4310;
  double t4311;
  double t4315;
  double t4318;
  double t4319;
  double t4345;
  double t4346;
  double t4229;
  double t4239;
  double t4250;
  double t4256;
  double t4263;
  double t4272;
  double t4279;
  double t4302;
  double t4303;
  double t4357;
  double t4358;
  double t4359;
  double t4360;
  double t4361;
  double t4371;
  double t4375;
  double t4376;
  double t4378;
  double t4379;
  double t4380;
  double t4382;
  double t4383;
  double t4398;
  double t4401;
  double t4405;
  double t4414;
  double t4418;
  double t4419;
  double t4421;
  double t4422;
  double t4423;
  double t4356;
  double t4362;
  double t4377;
  double t4381;
  double t4407;
  double t4420;
  double t4424;
  double t4425;
  double t4460;
  double t4461;
  double t4462;
  double t4463;
  double t4465;
  double t4467;
  double t4468;
  double t4471;
  double t4429;
  double t4430;
  double t4431;
  double t4434;
  double t4000;
  double t4065;
  double t4113;
  double t4114;
  double t4477;
  double t4478;
  double t4479;
  double t4480;
  double t4511;
  double t4512;
  double t4474;
  double t4475;
  double t4437;
  double t4440;
  double t4441;
  double t4442;
  double t4165;
  double t4193;
  double t4215;
  double t4221;
  double t4485;
  double t4486;
  double t4487;
  double t4488;
  double t4530;
  double t4531;
  double t4482;
  double t4483;
  t1802 = Cos(var1[3]);
  t1561 = Cos(var1[4]);
  t1666 = Sin(var1[3]);
  t1823 = Sin(var1[4]);
  t3821 = Cos(var1[2]);
  t744 = Sin(var1[2]);
  t1765 = -1.*t1561*t1666;
  t2083 = -1.*t1802*t1823;
  t3616 = t1765 + t2083;
  t3647 = t744*t3616;
  t3846 = t1802*t1561;
  t3873 = -1.*t1666*t1823;
  t3889 = t3846 + t3873;
  t3916 = t3821*t3889;
  t3945 = t3647 + t3916;
  t4001 = -1.*t1561;
  t4014 = 1. + t4001;
  t4024 = 0.4*t4014;
  t4031 = 0.64*t1561;
  t4034 = t4024 + t4031;
  t4121 = Cos(var1[5]);
  t4118 = Cos(var1[6]);
  t4119 = Sin(var1[5]);
  t4122 = Sin(var1[6]);
  t4120 = -1.*t4118*t4119;
  t4123 = -1.*t4121*t4122;
  t4132 = t4120 + t4123;
  t4140 = t744*t4132;
  t4144 = t4121*t4118;
  t4149 = -1.*t4119*t4122;
  t4151 = t4144 + t4149;
  t4152 = t3821*t4151;
  t4153 = t4140 + t4152;
  t4169 = -1.*t4118;
  t4174 = 1. + t4169;
  t4176 = 0.4*t4174;
  t4181 = 0.64*t4118;
  t4182 = t4176 + t4181;
  t3982 = t3821*t1802;
  t3989 = -1.*t744*t1666;
  t3993 = t3982 + t3989;
  t4096 = t1561*t1666;
  t4097 = t1802*t1823;
  t4098 = t4096 + t4097;
  t4099 = t3821*t4098;
  t4102 = t744*t3889;
  t4105 = t4099 + t4102;
  t4155 = t3821*t4121;
  t4156 = -1.*t744*t4119;
  t4157 = t4155 + t4156;
  t4204 = t4118*t4119;
  t4205 = t4121*t4122;
  t4209 = t4204 + t4205;
  t4210 = t3821*t4209;
  t4213 = t744*t4151;
  t4214 = t4210 + t4213;
  t4233 = t1802*t744;
  t4234 = t3821*t1666;
  t4238 = t4233 + t4234;
  t4264 = t4121*t744;
  t4268 = t3821*t4119;
  t4270 = t4264 + t4268;
  t4363 = t4034*t1666;
  t4369 = 0.24*t1802*t1823;
  t4370 = t4363 + t4369;
  t4372 = t1802*t4034;
  t4373 = -0.24*t1666*t1823;
  t4374 = t4372 + t4373;
  t4409 = t4182*t4119;
  t4410 = 0.24*t4121*t4122;
  t4413 = t4409 + t4410;
  t4415 = t4121*t4182;
  t4416 = -0.24*t4119*t4122;
  t4417 = t4415 + t4416;
  t4242 = t3821*t3616;
  t4243 = -1.*t744*t3889;
  t4244 = t4242 + t4243;
  t4226 = -1.*t1802*t744;
  t4227 = -1.*t3821*t1666;
  t4228 = t4226 + t4227;
  t4070 = t4034*t1823;
  t4073 = -0.24*t1561*t1823;
  t4084 = t4070 + t4073;
  t4251 = -1.*t744*t4098;
  t4255 = t4251 + t3916;
  t4045 = t4034*t1561;
  t4047 = Power(t1823,2);
  t4056 = 0.24*t4047;
  t4057 = t4045 + t4056;
  t4274 = t3821*t4132;
  t4276 = -1.*t744*t4151;
  t4278 = t4274 + t4276;
  t4257 = -1.*t4121*t744;
  t4258 = -1.*t3821*t4119;
  t4262 = t4257 + t4258;
  t4194 = t4182*t4122;
  t4195 = -0.24*t4118*t4122;
  t4196 = t4194 + t4195;
  t4294 = -1.*t744*t4209;
  t4295 = t4294 + t4152;
  t4187 = t4182*t4118;
  t4189 = Power(t4122,2);
  t4190 = 0.24*t4189;
  t4192 = t4187 + t4190;
  t4309 = Power(t3821,2);
  t4310 = -12.*t4309;
  t4311 = Power(t744,2);
  t4315 = -12.*t4311;
  t4318 = Power(t3993,2);
  t4319 = -6.8*t4318;
  t4345 = Power(t4157,2);
  t4346 = -6.8*t4345;
  t4229 = -6.8*t4228*t3993;
  t4239 = -6.8*t4238*t3993;
  t4250 = -3.2*t3945*t4244;
  t4256 = -3.2*t4255*t4105;
  t4263 = -6.8*t4262*t4157;
  t4272 = -6.8*t4270*t4157;
  t4279 = -3.2*t4153*t4278;
  t4302 = -3.2*t4295*t4214;
  t4303 = t4229 + t4239 + t4250 + t4256 + t4263 + t4272 + t4279 + t4302;
  t4357 = Power(t1802,2);
  t4358 = 0.11*t4357;
  t4359 = Power(t1666,2);
  t4360 = 0.11*t4359;
  t4361 = t4358 + t4360;
  t4371 = -1.*t4370*t3889;
  t4375 = -1.*t3616*t4374;
  t4376 = t4371 + t4375;
  t4378 = t4370*t4098;
  t4379 = t3889*t4374;
  t4380 = t4378 + t4379;
  t4382 = Power(t4121,2);
  t4383 = 0.11*t4382;
  t4398 = Power(t4119,2);
  t4401 = 0.11*t4398;
  t4405 = t4383 + t4401;
  t4414 = -1.*t4413*t4151;
  t4418 = -1.*t4132*t4417;
  t4419 = t4414 + t4418;
  t4421 = t4413*t4209;
  t4422 = t4151*t4417;
  t4423 = t4421 + t4422;
  t4356 = -2.88*t3821;
  t4362 = -6.8*t3993*t4361;
  t4377 = -3.2*t4105*t4376;
  t4381 = -3.2*t3945*t4380;
  t4407 = -6.8*t4157*t4405;
  t4420 = -3.2*t4214*t4419;
  t4424 = -3.2*t4153*t4423;
  t4425 = t4356 + t4362 + t4377 + t4381 + t4407 + t4420 + t4424;
  t4460 = 2.88*t744;
  t4461 = -6.8*t4228*t4361;
  t4462 = -3.2*t4255*t4376;
  t4463 = -3.2*t4244*t4380;
  t4465 = -6.8*t4262*t4405;
  t4467 = -3.2*t4295*t4419;
  t4468 = -3.2*t4278*t4423;
  t4471 = t4460 + t4461 + t4462 + t4463 + t4465 + t4467 + t4468;
  t4429 = -0.748*t4228;
  t4430 = -3.2*t4084*t4255;
  t4431 = -3.2*t4057*t4244;
  t4434 = t4429 + t4430 + t4431;
  t4000 = -0.748*t3993;
  t4065 = -3.2*t4057*t3945;
  t4113 = -3.2*t4084*t4105;
  t4114 = t4000 + t4065 + t4113;
  t4477 = -0.748*t4361;
  t4478 = -3.2*t4084*t4376;
  t4479 = -3.2*t4057*t4380;
  t4480 = -0.67 + t4477 + t4478 + t4479;
  t4511 = -0.768*t4057;
  t4512 = -0.2 + t4511;
  t4474 = -0.768*t4380;
  t4475 = -0.2 + t4474;
  t4437 = -0.748*t4262;
  t4440 = -3.2*t4196*t4295;
  t4441 = -3.2*t4192*t4278;
  t4442 = t4437 + t4440 + t4441;
  t4165 = -0.748*t4157;
  t4193 = -3.2*t4192*t4153;
  t4215 = -3.2*t4196*t4214;
  t4221 = t4165 + t4193 + t4215;
  t4485 = -0.748*t4405;
  t4486 = -3.2*t4196*t4419;
  t4487 = -3.2*t4192*t4423;
  t4488 = -0.67 + t4485 + t4486 + t4487;
  t4530 = -0.768*t4192;
  t4531 = -0.2 + t4530;
  t4482 = -0.768*t4423;
  t4483 = -0.2 + t4482;
  p_output1[0]=(-3.2*Power(t3945,2) - 3.2*Power(t4105,2) - 3.2*Power(t4153,2) - 3.2*Power(t4214,2) - 6.8*Power(t4238,2) - 6.8*Power(t4270,2) + t4310 + t4315 + t4319 + t4346)*var2[0] + t4303*var2[1] + t4425*var2[2] + t4114*var2[3] - 0.768*t3945*var2[4] + t4221*var2[5] - 0.768*t4153*var2[6];
  p_output1[1]=t4303*var2[0] + (-6.8*Power(t4228,2) - 3.2*Power(t4244,2) - 3.2*Power(t4255,2) - 6.8*Power(t4262,2) - 3.2*Power(t4278,2) - 3.2*Power(t4295,2) + t4310 + t4315 + t4319 + t4346)*var2[1] + t4471*var2[2] + t4434*var2[3] - 0.768*t4244*var2[4] + t4442*var2[5] - 0.768*t4278*var2[6];
  p_output1[2]=t4425*var2[0] + t4471*var2[1] + (-3.3612 - 6.8*Power(t4361,2) - 3.2*Power(t4376,2) - 3.2*Power(t4380,2) - 6.8*Power(t4405,2) - 3.2*Power(t4419,2) - 3.2*Power(t4423,2))*var2[2] + t4480*var2[3] + t4475*var2[4] + t4488*var2[5] + t4483*var2[6];
  p_output1[3]=t4114*var2[0] + t4434*var2[1] + t4480*var2[2] + (-1.58228 - 3.2*Power(t4057,2) - 3.2*Power(t4084,2))*var2[3] + t4512*var2[4];
  p_output1[4]=-0.768*t3945*var2[0] - 0.768*t4244*var2[1] + t4475*var2[2] + t4512*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t4221*var2[0] + t4442*var2[1] + t4488*var2[2] + (-1.58228 - 3.2*Power(t4192,2) - 3.2*Power(t4196,2))*var2[5] + t4531*var2[6];
  p_output1[6]=-0.768*t4153*var2[0] - 0.768*t4278*var2[1] + t4483*var2[2] + t4531*var2[5] - 1.2143199999999998*var2[6];
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

#include "MmatDx_five_link_walker.hh"

namespace RightStance
{

void MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
