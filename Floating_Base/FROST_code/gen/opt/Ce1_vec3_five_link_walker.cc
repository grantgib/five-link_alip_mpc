/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:46 GMT-04:00
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
  double t301;
  double t3911;
  double t575;
  double t3599;
  double t4263;
  double t4339;
  double t4441;
  double t4590;
  double t4627;
  double t4284;
  double t4353;
  double t4354;
  double t4724;
  double t4746;
  double t4762;
  double t4773;
  double t4779;
  double t4376;
  double t4697;
  double t4703;
  double t4786;
  double t4794;
  double t8366;
  double t9910;
  double t9941;
  double t9948;
  double t10084;
  double t10085;
  double t10093;
  double t9978;
  double t9981;
  double t9988;
  double t10122;
  double t10125;
  double t10126;
  double t9907;
  double t9951;
  double t9952;
  double t9953;
  double t10071;
  double t10072;
  double t10112;
  double t10117;
  double t10118;
  double t10119;
  double t10129;
  double t10130;
  double t10131;
  double t10132;
  double t10135;
  double t10136;
  double t10171;
  double t10174;
  double t10138;
  double t10176;
  double t10181;
  double t10142;
  double t3340;
  double t3970;
  double t4035;
  double t4060;
  double t4085;
  double t4088;
  double t4151;
  double t4156;
  double t4157;
  double t10204;
  double t10226;
  double t10246;
  double t10249;
  double t10257;
  double t10258;
  double t10259;
  double t10262;
  double t10263;
  double t10264;
  double t10265;
  double t10266;
  double t10279;
  double t10282;
  double t10283;
  double t10267;
  double t10273;
  double t10277;
  double t10248;
  double t10250;
  double t10251;
  double t10284;
  double t10285;
  double t10286;
  double t10205;
  double t10230;
  double t10231;
  double t10232;
  double t10237;
  double t10240;
  double t10241;
  double t10242;
  double t10244;
  double t10260;
  double t10278;
  double t10287;
  double t10288;
  double t10299;
  double t10300;
  double t10293;
  double t10294;
  double t10295;
  double t10290;
  double t10310;
  double t10311;
  double t10312;
  double t10321;
  double t10322;
  double t10323;
  double t10306;
  double t10316;
  double t10317;
  double t10324;
  double t10325;
  double t10326;
  double t10327;
  double t10328;
  double t10329;
  double t10338;
  double t10339;
  double t10331;
  double t10341;
  double t10342;
  double t10333;
  double t10201;
  double t10202;
  double t10065;
  double t10094;
  double t10095;
  double t10198;
  double t10199;
  double t10137;
  double t10141;
  double t10143;
  double t10358;
  double t10175;
  double t10183;
  double t10185;
  double t10360;
  double t10361;
  double t10362;
  double t10363;
  double t10187;
  double t10188;
  double t10191;
  double t10354;
  double t10355;
  double t10356;
  double t10357;
  double t10291;
  double t10378;
  double t10379;
  double t10380;
  double t10381;
  double t10292;
  double t10315;
  double t10318;
  double t10319;
  double t10385;
  double t10254;
  double t10261;
  double t10330;
  double t10332;
  double t10334;
  double t10391;
  double t10340;
  double t10343;
  double t10344;
  double t10393;
  double t10394;
  double t10395;
  double t10346;
  double t10347;
  double t10348;
  double t10423;
  double t10424;
  double t10425;
  double t10426;
  double t10428;
  double t10429;
  double t10430;
  double t10452;
  double t10453;
  double t10454;
  double t10455;
  double t10457;
  double t10458;
  double t10459;
  t301 = Cos(var1[3]);
  t3911 = Sin(var1[3]);
  t575 = Sin(var1[2]);
  t3599 = Cos(var1[2]);
  t4263 = Cos(var1[4]);
  t4339 = Sin(var1[4]);
  t4441 = t301*t4263;
  t4590 = -1.*t3911*t4339;
  t4627 = t4441 + t4590;
  t4284 = -1.*t4263*t3911;
  t4353 = -1.*t301*t4339;
  t4354 = t4284 + t4353;
  t4724 = -1.*t4263;
  t4746 = 1. + t4724;
  t4762 = 0.4*t4746;
  t4773 = 0.64*t4263;
  t4779 = t4762 + t4773;
  t4376 = t575*t4354;
  t4697 = t3599*t4627;
  t4703 = t4376 + t4697;
  t4786 = t4779*t3911;
  t4794 = 0.24*t301*t4339;
  t8366 = t4786 + t4794;
  t9910 = t301*t4779;
  t9941 = -0.24*t3911*t4339;
  t9948 = t9910 + t9941;
  t10084 = t4263*t3911;
  t10085 = t301*t4339;
  t10093 = t10084 + t10085;
  t9978 = -1.*t4779*t3911;
  t9981 = -0.24*t301*t4339;
  t9988 = t9978 + t9981;
  t10122 = -1.*t301*t4263;
  t10125 = t3911*t4339;
  t10126 = t10122 + t10125;
  t9907 = -1.*t8366*t4627;
  t9951 = -1.*t4354*t9948;
  t9952 = t9907 + t9951;
  t9953 = 3.2*t4703*t9952;
  t10071 = t8366*t4627;
  t10072 = t4354*t9948;
  t10112 = t8366*t10093;
  t10117 = t4627*t9948;
  t10118 = t10112 + t10117;
  t10119 = t3599*t4354;
  t10129 = t575*t10126;
  t10130 = t10119 + t10129;
  t10131 = 3.2*t10118*t10130;
  t10132 = t3599*t10093;
  t10135 = t575*t4627;
  t10136 = t10132 + t10135;
  t10171 = -0.24*t4263*t3911;
  t10174 = t10171 + t9981;
  t10138 = -1.*t4354*t8366;
  t10176 = 0.24*t301*t4263;
  t10181 = t10176 + t9941;
  t10142 = -1.*t9948*t10126;
  t3340 = -1.*t301*t575;
  t3970 = -1.*t3599*t3911;
  t4035 = t3340 + t3970;
  t4060 = Power(t301,2);
  t4085 = 0.11*t4060;
  t4088 = Power(t3911,2);
  t4151 = 0.11*t4088;
  t4156 = t4085 + t4151;
  t4157 = 6.8*t4035*t4156;
  t10204 = Cos(var1[5]);
  t10226 = Sin(var1[5]);
  t10246 = Cos(var1[6]);
  t10249 = Sin(var1[6]);
  t10257 = t10204*t10246;
  t10258 = -1.*t10226*t10249;
  t10259 = t10257 + t10258;
  t10262 = -1.*t10246;
  t10263 = 1. + t10262;
  t10264 = 0.4*t10263;
  t10265 = 0.64*t10246;
  t10266 = t10264 + t10265;
  t10279 = -1.*t10246*t10226;
  t10282 = -1.*t10204*t10249;
  t10283 = t10279 + t10282;
  t10267 = t10266*t10226;
  t10273 = 0.24*t10204*t10249;
  t10277 = t10267 + t10273;
  t10248 = t10246*t10226;
  t10250 = t10204*t10249;
  t10251 = t10248 + t10250;
  t10284 = t10204*t10266;
  t10285 = -0.24*t10226*t10249;
  t10286 = t10284 + t10285;
  t10205 = -1.*t10204*t575;
  t10230 = -1.*t3599*t10226;
  t10231 = t10205 + t10230;
  t10232 = Power(t10204,2);
  t10237 = 0.11*t10232;
  t10240 = Power(t10226,2);
  t10241 = 0.11*t10240;
  t10242 = t10237 + t10241;
  t10244 = 6.8*t10231*t10242;
  t10260 = t3599*t10259;
  t10278 = -1.*t10277*t10259;
  t10287 = -1.*t10283*t10286;
  t10288 = t10278 + t10287;
  t10299 = t575*t10283;
  t10300 = t10299 + t10260;
  t10293 = t10277*t10251;
  t10294 = t10259*t10286;
  t10295 = t10293 + t10294;
  t10290 = t3599*t10283;
  t10310 = -1.*t10266*t10226;
  t10311 = -0.24*t10204*t10249;
  t10312 = t10310 + t10311;
  t10321 = -1.*t10204*t10246;
  t10322 = t10226*t10249;
  t10323 = t10321 + t10322;
  t10306 = 3.2*t10300*t10288;
  t10316 = t10277*t10259;
  t10317 = t10283*t10286;
  t10324 = t575*t10323;
  t10325 = t10290 + t10324;
  t10326 = 3.2*t10295*t10325;
  t10327 = t3599*t10251;
  t10328 = t575*t10259;
  t10329 = t10327 + t10328;
  t10338 = -0.24*t10246*t10226;
  t10339 = t10338 + t10311;
  t10331 = -1.*t10283*t10277;
  t10341 = 0.24*t10204*t10246;
  t10342 = t10341 + t10285;
  t10333 = -1.*t10286*t10323;
  t10201 = -1.*t575*t4627;
  t10202 = t10119 + t10201;
  t10065 = t9988*t4627;
  t10094 = t10093*t9948;
  t10095 = t10065 + t10071 + t10072 + t10094;
  t10198 = -1.*t575*t10093;
  t10199 = t10198 + t4697;
  t10137 = -1.*t4354*t9988;
  t10141 = -1.*t4627*t9948;
  t10143 = t10137 + t10138 + t10141 + t10142;
  t10358 = 3.2*t10202*t9952;
  t10175 = t10174*t4627;
  t10183 = t10093*t10181;
  t10185 = t10175 + t10071 + t10072 + t10183;
  t10360 = -1.*t575*t4354;
  t10361 = t3599*t10126;
  t10362 = t10360 + t10361;
  t10363 = 3.2*t10118*t10362;
  t10187 = -1.*t4354*t10174;
  t10188 = -1.*t4627*t10181;
  t10191 = t10187 + t10138 + t10188 + t10142;
  t10354 = -1.*t3599*t301;
  t10355 = t575*t3911;
  t10356 = t10354 + t10355;
  t10357 = 6.8*t10356*t4156;
  t10291 = -1.*t575*t10259;
  t10378 = -1.*t3599*t10204;
  t10379 = t575*t10226;
  t10380 = t10378 + t10379;
  t10381 = 6.8*t10380*t10242;
  t10292 = t10290 + t10291;
  t10315 = t10312*t10259;
  t10318 = t10251*t10286;
  t10319 = t10315 + t10316 + t10317 + t10318;
  t10385 = -1.*t575*t10283;
  t10254 = -1.*t575*t10251;
  t10261 = t10254 + t10260;
  t10330 = -1.*t10283*t10312;
  t10332 = -1.*t10259*t10286;
  t10334 = t10330 + t10331 + t10332 + t10333;
  t10391 = 3.2*t10292*t10288;
  t10340 = t10339*t10259;
  t10343 = t10251*t10342;
  t10344 = t10340 + t10316 + t10317 + t10343;
  t10393 = t3599*t10323;
  t10394 = t10385 + t10393;
  t10395 = 3.2*t10295*t10394;
  t10346 = -1.*t10283*t10339;
  t10347 = -1.*t10259*t10342;
  t10348 = t10346 + t10331 + t10347 + t10333;
  t10423 = t4779*t4263;
  t10424 = Power(t4339,2);
  t10425 = 0.24*t10424;
  t10426 = t10423 + t10425;
  t10428 = t4779*t4339;
  t10429 = -0.24*t4263*t4339;
  t10430 = t10428 + t10429;
  t10452 = t10266*t10246;
  t10453 = Power(t10249,2);
  t10454 = 0.24*t10453;
  t10455 = t10452 + t10454;
  t10457 = t10266*t10249;
  t10458 = -0.24*t10246*t10249;
  t10459 = t10457 + t10458;
  p_output1[0]=var2[2]*(-0.5*(3.2*t10118*t10202 + t10244 + 3.2*t10261*t10288 + 3.2*t10292*t10295 + t4157 - 2.88*t575 + 3.2*t10199*t9952)*var2[2] - 0.5*(t10131 + 3.2*t10136*t10143 + t4157 + 3.2*t10095*t4703 + t9953)*var2[3] - 0.5*(t10131 + 3.2*t10136*t10191 + 3.2*t10185*t4703 + t9953)*var2[4] - 0.5*(t10244 + t10306 + 3.2*t10300*t10319 + t10326 + 3.2*t10329*t10334)*var2[5] - 0.5*(t10306 + t10326 + 3.2*t10300*t10344 + 3.2*t10329*t10348)*var2[6]);
  p_output1[1]=var2[2]*(-0.5*(t10357 + t10381 - 2.88*t3599 + 3.2*t10288*(t10291 - 1.*t10251*t3599) + 3.2*t10295*(t10385 - 1.*t10259*t3599) + 3.2*t10118*(t10360 - 1.*t3599*t4627) + 3.2*(t10201 - 1.*t10093*t3599)*t9952)*var2[2] - 0.5*(3.2*t10143*t10199 + 3.2*t10095*t10202 + t10357 + t10358 + t10363)*var2[3] - 0.5*(3.2*t10191*t10199 + 3.2*t10185*t10202 + t10358 + t10363)*var2[4] - 0.5*(3.2*t10292*t10319 + 3.2*t10261*t10334 + t10381 + t10391 + t10395)*var2[5] - 0.5*(3.2*t10292*t10344 + 3.2*t10261*t10348 + t10391 + t10395)*var2[6]);
  p_output1[2]=var2[2]*(-0.5*(6.4*t10095*t10118 + 6.4*t10143*t9952)*var2[3] - 0.5*(6.4*t10118*t10185 + 6.4*t10191*t9952)*var2[4] - 0.5*(6.4*t10295*t10319 + 6.4*t10288*t10334)*var2[5] - 0.5*(6.4*t10295*t10344 + 6.4*t10288*t10348)*var2[6]);
  p_output1[3]=var2[2]*(-0.5*(3.2*t10095*t10426 + 3.2*t10143*t10430)*var2[3] - 0.5*(3.2*t10185*t10426 + 3.2*t10191*t10430 + 3.2*t10118*(0.24*t4263*t4339 - 1.*t4339*t4779) + 3.2*(t10423 - 0.24*Power(t4263,2))*t9952)*var2[4]);
  p_output1[4]=var2[2]*(-0.384*t10095*var2[3] - 0.384*t10185*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(3.2*t10319*t10455 + 3.2*t10334*t10459)*var2[5] - 0.5*(3.2*(0.24*t10246*t10249 - 1.*t10249*t10266)*t10295 + 3.2*t10288*(-0.24*Power(t10246,2) + t10452) + 3.2*t10344*t10455 + 3.2*t10348*t10459)*var2[6]);
  p_output1[6]=var2[2]*(-0.384*t10319*var2[5] - 0.384*t10344*var2[6]);
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

#include "Ce1_vec3_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
