/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:38:12 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t3992;
  double t3961;
  double t3973;
  double t3993;
  double t4010;
  double t3954;
  double t3974;
  double t4001;
  double t4003;
  double t4007;
  double t4020;
  double t4052;
  double t4068;
  double t4070;
  double t4071;
  double t4110;
  double t4116;
  double t4117;
  double t4123;
  double t4124;
  double t4210;
  double t4202;
  double t4203;
  double t4218;
  double t4205;
  double t4228;
  double t4233;
  double t4236;
  double t4239;
  double t4247;
  double t4251;
  double t4263;
  double t4265;
  double t4300;
  double t4308;
  double t4309;
  double t4310;
  double t4312;
  double t4081;
  double t4085;
  double t4092;
  double t4143;
  double t4144;
  double t4145;
  double t4148;
  double t4150;
  double t4151;
  double t4281;
  double t4283;
  double t4289;
  double t4355;
  double t4364;
  double t4377;
  double t4379;
  double t4381;
  double t4397;
  double t4478;
  double t4481;
  double t4486;
  double t4574;
  double t4582;
  double t4589;
  double t4920;
  double t4931;
  double t4932;
  double t4937;
  double t4938;
  double t4962;
  double t5035;
  double t5039;
  double t5043;
  double t5047;
  double t5050;
  double t5052;
  double t3542;
  double t3795;
  double t4493;
  double t4496;
  double t4503;
  double t4073;
  double t4078;
  double t4434;
  double t4466;
  double t4468;
  double t4136;
  double t4141;
  double t4142;
  double t4527;
  double t4532;
  double t4125;
  double t4127;
  double t4129;
  double t4130;
  double t4177;
  double t4178;
  double t4595;
  double t4600;
  double t4604;
  double t4270;
  double t4278;
  double t4553;
  double t4557;
  double t4558;
  double t4346;
  double t4351;
  double t4354;
  double t4625;
  double t4626;
  double t4315;
  double t4323;
  double t4325;
  double t4332;
  double t4415;
  double t4432;
  double t4682;
  double t4713;
  double t4718;
  double t4720;
  double t4731;
  double t4797;
  double t4851;
  double t4859;
  double t4680;
  double t4681;
  double t4473;
  double t4491;
  double t4522;
  double t4550;
  double t4571;
  double t4591;
  double t4622;
  double t4633;
  double t4639;
  double t4891;
  double t4896;
  double t4899;
  double t4900;
  double t4903;
  double t4907;
  double t4912;
  double t4933;
  double t4963;
  double t4967;
  double t4970;
  double t4975;
  double t4979;
  double t4992;
  double t5016;
  double t5029;
  double t5031;
  double t5032;
  double t5046;
  double t5053;
  double t5063;
  double t5065;
  double t5067;
  double t5068;
  double t5202;
  double t5203;
  double t5204;
  double t4897;
  double t4914;
  double t4968;
  double t4990;
  double t5033;
  double t5064;
  double t5069;
  double t5070;
  double t5159;
  double t5162;
  double t5164;
  double t5165;
  double t5166;
  double t5167;
  double t5169;
  double t5178;
  double t5181;
  double t5183;
  double t5184;
  double t5185;
  double t5187;
  double t5191;
  double t5192;
  double t5194;
  double t5197;
  double t5207;
  double t5209;
  double t5210;
  double t5211;
  double t5213;
  double t5214;
  double t5215;
  double t5083;
  double t5085;
  double t5086;
  double t5088;
  double t4106;
  double t4132;
  double t4155;
  double t4156;
  double t5220;
  double t5221;
  double t5222;
  double t5223;
  double t5295;
  double t5296;
  double t5216;
  double t5217;
  double t5092;
  double t5093;
  double t5094;
  double t5095;
  double t4298;
  double t4336;
  double t4398;
  double t4399;
  double t5243;
  double t5244;
  double t5245;
  double t5246;
  double t5573;
  double t5574;
  double t5225;
  double t5226;
  t3992 = Cos(var2[3]);
  t3961 = Cos(var2[4]);
  t3973 = Sin(var2[3]);
  t3993 = Sin(var2[4]);
  t4010 = Cos(var2[2]);
  t3954 = Sin(var2[2]);
  t3974 = -1.*t3961*t3973;
  t4001 = -1.*t3992*t3993;
  t4003 = t3974 + t4001;
  t4007 = t3954*t4003;
  t4020 = t3992*t3961;
  t4052 = -1.*t3973*t3993;
  t4068 = t4020 + t4052;
  t4070 = t4010*t4068;
  t4071 = t4007 + t4070;
  t4110 = -1.*t3961;
  t4116 = 1. + t4110;
  t4117 = 0.4*t4116;
  t4123 = 0.64*t3961;
  t4124 = t4117 + t4123;
  t4210 = Cos(var2[5]);
  t4202 = Cos(var2[6]);
  t4203 = Sin(var2[5]);
  t4218 = Sin(var2[6]);
  t4205 = -1.*t4202*t4203;
  t4228 = -1.*t4210*t4218;
  t4233 = t4205 + t4228;
  t4236 = t3954*t4233;
  t4239 = t4210*t4202;
  t4247 = -1.*t4203*t4218;
  t4251 = t4239 + t4247;
  t4263 = t4010*t4251;
  t4265 = t4236 + t4263;
  t4300 = -1.*t4202;
  t4308 = 1. + t4300;
  t4309 = 0.4*t4308;
  t4310 = 0.64*t4202;
  t4312 = t4309 + t4310;
  t4081 = t4010*t3992;
  t4085 = -1.*t3954*t3973;
  t4092 = t4081 + t4085;
  t4143 = t3961*t3973;
  t4144 = t3992*t3993;
  t4145 = t4143 + t4144;
  t4148 = t4010*t4145;
  t4150 = t3954*t4068;
  t4151 = t4148 + t4150;
  t4281 = t4010*t4210;
  t4283 = -1.*t3954*t4203;
  t4289 = t4281 + t4283;
  t4355 = t4202*t4203;
  t4364 = t4210*t4218;
  t4377 = t4355 + t4364;
  t4379 = t4010*t4377;
  t4381 = t3954*t4251;
  t4397 = t4379 + t4381;
  t4478 = t3992*t3954;
  t4481 = t4010*t3973;
  t4486 = t4478 + t4481;
  t4574 = t4210*t3954;
  t4582 = t4010*t4203;
  t4589 = t4574 + t4582;
  t4920 = t4124*t3973;
  t4931 = 0.24*t3992*t3993;
  t4932 = t4920 + t4931;
  t4937 = t3992*t4124;
  t4938 = -0.24*t3973*t3993;
  t4962 = t4937 + t4938;
  t5035 = t4312*t4203;
  t5039 = 0.24*t4210*t4218;
  t5043 = t5035 + t5039;
  t5047 = t4210*t4312;
  t5050 = -0.24*t4203*t4218;
  t5052 = t5047 + t5050;
  t3542 = -1.*var1[6];
  t3795 = var3[4] + t3542;
  t4493 = t4010*t4003;
  t4496 = -1.*t3954*t4068;
  t4503 = t4493 + t4496;
  t4073 = -1.*var1[5];
  t4078 = var3[3] + t4073;
  t4434 = -1.*t3992*t3954;
  t4466 = -1.*t4010*t3973;
  t4468 = t4434 + t4466;
  t4136 = t4124*t3993;
  t4141 = -0.24*t3961*t3993;
  t4142 = t4136 + t4141;
  t4527 = -1.*t3954*t4145;
  t4532 = t4527 + t4070;
  t4125 = t4124*t3961;
  t4127 = Power(t3993,2);
  t4129 = 0.24*t4127;
  t4130 = t4125 + t4129;
  t4177 = -1.*var1[4];
  t4178 = var3[6] + t4177;
  t4595 = t4010*t4233;
  t4600 = -1.*t3954*t4251;
  t4604 = t4595 + t4600;
  t4270 = -1.*var1[3];
  t4278 = var3[5] + t4270;
  t4553 = -1.*t4210*t3954;
  t4557 = -1.*t4010*t4203;
  t4558 = t4553 + t4557;
  t4346 = t4312*t4218;
  t4351 = -0.24*t4202*t4218;
  t4354 = t4346 + t4351;
  t4625 = -1.*t3954*t4377;
  t4626 = t4625 + t4263;
  t4315 = t4312*t4202;
  t4323 = Power(t4218,2);
  t4325 = 0.24*t4323;
  t4332 = t4315 + t4325;
  t4415 = -1.*var1[1];
  t4432 = var3[1] + t4415;
  t4682 = Power(t4010,2);
  t4713 = 12.*t4682;
  t4718 = Power(t3954,2);
  t4720 = 12.*t4718;
  t4731 = Power(t4092,2);
  t4797 = 6.8*t4731;
  t4851 = Power(t4289,2);
  t4859 = 6.8*t4851;
  t4680 = -1.*var1[0];
  t4681 = var3[0] + t4680;
  t4473 = 6.8*t4468*t4092;
  t4491 = 6.8*t4486*t4092;
  t4522 = 3.2*t4071*t4503;
  t4550 = 3.2*t4532*t4151;
  t4571 = 6.8*t4558*t4289;
  t4591 = 6.8*t4589*t4289;
  t4622 = 3.2*t4265*t4604;
  t4633 = 3.2*t4626*t4397;
  t4639 = t4473 + t4491 + t4522 + t4550 + t4571 + t4591 + t4622 + t4633;
  t4891 = -1.*var1[2];
  t4896 = var3[2] + t4891;
  t4899 = Power(t3992,2);
  t4900 = 0.11*t4899;
  t4903 = Power(t3973,2);
  t4907 = 0.11*t4903;
  t4912 = t4900 + t4907;
  t4933 = -1.*t4932*t4068;
  t4963 = -1.*t4003*t4962;
  t4967 = t4933 + t4963;
  t4970 = t4932*t4145;
  t4975 = t4068*t4962;
  t4979 = t4970 + t4975;
  t4992 = Power(t4210,2);
  t5016 = 0.11*t4992;
  t5029 = Power(t4203,2);
  t5031 = 0.11*t5029;
  t5032 = t5016 + t5031;
  t5046 = -1.*t5043*t4251;
  t5053 = -1.*t4233*t5052;
  t5063 = t5046 + t5053;
  t5065 = t5043*t4377;
  t5067 = t4251*t5052;
  t5068 = t5065 + t5067;
  t5202 = -1.*t4010*t3992;
  t5203 = t3954*t3973;
  t5204 = t5202 + t5203;
  t4897 = 2.88*t4010;
  t4914 = 6.8*t4092*t4912;
  t4968 = 3.2*t4151*t4967;
  t4990 = 3.2*t4071*t4979;
  t5033 = 6.8*t4289*t5032;
  t5064 = 3.2*t4397*t5063;
  t5069 = 3.2*t4265*t5068;
  t5070 = t4897 + t4914 + t4968 + t4990 + t5033 + t5064 + t5069;
  t5159 = -2.88*t3954;
  t5162 = 6.8*t4468*t4912;
  t5164 = 3.2*t4532*t4967;
  t5165 = 3.2*t4503*t4979;
  t5166 = 6.8*t4558*t5032;
  t5167 = 3.2*t4626*t5063;
  t5169 = 3.2*t4604*t5068;
  t5178 = t5159 + t5162 + t5164 + t5165 + t5166 + t5167 + t5169;
  t5181 = 0.4*t4116*t4092;
  t5183 = -0.4*t4468*t3993;
  t5184 = t3961*t4092;
  t5185 = t4468*t3993;
  t5187 = t5184 + t5185;
  t5191 = 0.8*t5187;
  t5192 = t5181 + t5183 + t5191;
  t5194 = -1.*var4[0]*t5192;
  t5197 = 0.4*t4116*t4468;
  t5207 = -0.4*t5204*t3993;
  t5209 = t3961*t4468;
  t5210 = t5204*t3993;
  t5211 = t5209 + t5210;
  t5213 = 0.8*t5211;
  t5214 = t5197 + t5207 + t5213;
  t5215 = -1.*var4[2]*t5214;
  t5083 = 0.748*t4468;
  t5085 = 3.2*t4142*t4532;
  t5086 = 3.2*t4130*t4503;
  t5088 = t5083 + t5085 + t5086;
  t4106 = 0.748*t4092;
  t4132 = 3.2*t4130*t4071;
  t4155 = 3.2*t4142*t4151;
  t4156 = t4106 + t4132 + t4155;
  t5220 = 0.748*t4912;
  t5221 = 3.2*t4142*t4967;
  t5222 = 3.2*t4130*t4979;
  t5223 = 0.67 + t5220 + t5221 + t5222;
  t5295 = 0.768*t4130;
  t5296 = 0.2 + t5295;
  t5216 = 0.768*t4979;
  t5217 = 0.2 + t5216;
  t5092 = 0.748*t4558;
  t5093 = 3.2*t4354*t4626;
  t5094 = 3.2*t4332*t4604;
  t5095 = t5092 + t5093 + t5094;
  t4298 = 0.748*t4289;
  t4336 = 3.2*t4332*t4265;
  t4398 = 3.2*t4354*t4397;
  t4399 = t4298 + t4336 + t4398;
  t5243 = 0.748*t5032;
  t5244 = 3.2*t4354*t5063;
  t5245 = 3.2*t4332*t5068;
  t5246 = 0.67 + t5243 + t5244 + t5245;
  t5573 = 0.768*t4332;
  t5574 = 0.2 + t5573;
  t5225 = 0.768*t5068;
  t5226 = 0.2 + t5225;
  p_output1[0]=0.768*t3795*t4071 + t4078*t4156 + 0.768*t4178*t4265 + t4278*t4399 + t4432*t4639 + t4681*(3.2*Power(t4071,2) + 3.2*Power(t4151,2) + 3.2*Power(t4265,2) + 3.2*Power(t4397,2) + 6.8*Power(t4486,2) + 6.8*Power(t4589,2) + t4713 + t4720 + t4797 + t4859) + t4896*t5070 - 1.*var4[0];
  p_output1[1]=0.768*t3795*t4503 + 0.768*t4178*t4604 + t4639*t4681 + t4432*(6.8*Power(t4468,2) + 3.2*Power(t4503,2) + 3.2*Power(t4532,2) + 6.8*Power(t4558,2) + 3.2*Power(t4604,2) + 3.2*Power(t4626,2) + t4713 + t4720 + t4797 + t4859) + t4078*t5088 + t4278*t5095 + t4896*t5178 - 1.*var4[2];
  p_output1[2]=t4896*(3.3612 + 6.8*Power(t4912,2) + 3.2*Power(t4967,2) + 3.2*Power(t4979,2) + 6.8*Power(t5032,2) + 3.2*Power(t5063,2) + 3.2*Power(t5068,2)) + t4681*t5070 + t4432*t5178 + t5194 + t5215 + t3795*t5217 + t4078*t5223 + t4178*t5226 + t4278*t5246;
  p_output1[3]=t4078*(1.58228 + 3.2*Power(t4130,2) + 3.2*Power(t4142,2)) + t4156*t4681 + t4432*t5088 + t5194 + t5215 + t4896*t5223 + t3795*t5296;
  p_output1[4]=1.2143199999999998*t3795 + 0.768*t4432*t4503 + 0.768*t4071*t4681 + t4896*t5217 + t4078*t5296 - 1.*(-0.4*t3961*t4092 + 0.4*t3993*t4486 + 0.8*(-1.*t3993*t4486 + t5184))*var4[0] - 1.*(0.4*t3993*t4092 - 0.4*t3961*t4468 + 0.8*(-1.*t3993*t4092 + t5209))*var4[2];
  p_output1[5]=t4278*(1.58228 + 3.2*Power(t4332,2) + 3.2*Power(t4354,2)) + t4399*t4681 + t4432*t5095 + t4896*t5246 + t4178*t5574;
  p_output1[6]=1.2143199999999998*t4178 + 0.768*t4432*t4604 + 0.768*t4265*t4681 + t4896*t5226 + t4278*t5574;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMapRightImpact.hh"

namespace RightImpact
{

void dxDiscreteMapRightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
