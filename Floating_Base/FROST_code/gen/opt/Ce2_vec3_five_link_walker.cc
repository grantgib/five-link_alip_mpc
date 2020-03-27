/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:46:55 GMT-04:00
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
  double t10212;
  double t8044;
  double t8045;
  double t10213;
  double t10227;
  double t3206;
  double t10229;
  double t10234;
  double t10235;
  double t10279;
  double t10280;
  double t10281;
  double t10282;
  double t10283;
  double t10211;
  double t10224;
  double t10225;
  double t10226;
  double t10238;
  double t10239;
  double t10304;
  double t10301;
  double t10302;
  double t10305;
  double t10309;
  double t10310;
  double t10311;
  double t10319;
  double t10320;
  double t10321;
  double t10322;
  double t10323;
  double t10303;
  double t10306;
  double t10307;
  double t10308;
  double t10312;
  double t10313;
  double t10241;
  double t10259;
  double t10262;
  double t10341;
  double t10342;
  double t10343;
  double t10291;
  double t10287;
  double t10288;
  double t10289;
  double t10290;
  double t10292;
  double t10315;
  double t10316;
  double t10317;
  double t10356;
  double t10357;
  double t10358;
  double t10331;
  double t10327;
  double t10328;
  double t10329;
  double t10330;
  double t10332;
  double t10345;
  double t10346;
  double t10347;
  double t10349;
  double t10350;
  double t10352;
  double t10353;
  double t10354;
  double t10360;
  double t10361;
  double t10362;
  double t10364;
  double t10365;
  double t10367;
  double t10368;
  double t10369;
  double t10422;
  double t10423;
  double t10424;
  double t10426;
  double t10427;
  double t10428;
  double t10442;
  double t10443;
  double t10444;
  double t10446;
  double t10447;
  double t10448;
  double t10382;
  double t10383;
  double t10384;
  double t10378;
  double t10379;
  double t10380;
  double t10294;
  double t10295;
  double t10296;
  double t10297;
  double t10284;
  double t10285;
  double t10286;
  double t10390;
  double t10391;
  double t10402;
  double t10403;
  double t10404;
  double t10398;
  double t10399;
  double t10400;
  double t10334;
  double t10335;
  double t10336;
  double t10337;
  double t10324;
  double t10325;
  double t10326;
  double t10410;
  double t10411;
  double t10344;
  double t10359;
  double t10373;
  double t10374;
  double t10375;
  double t10376;
  double t10377;
  double t10381;
  double t10385;
  double t10386;
  double t10387;
  double t10388;
  double t10389;
  double t10392;
  double t10393;
  double t10394;
  double t10395;
  double t10396;
  double t10397;
  double t10401;
  double t10405;
  double t10406;
  double t10407;
  double t10408;
  double t10409;
  double t10412;
  double t10413;
  double t10416;
  double t10417;
  double t10418;
  double t10419;
  double t10420;
  double t10425;
  double t10429;
  double t10430;
  double t10432;
  double t10433;
  double t10434;
  double t10436;
  double t10437;
  double t10438;
  double t10439;
  double t10440;
  double t10445;
  double t10449;
  double t10450;
  double t10452;
  double t10453;
  double t10454;
  double t10481;
  double t10482;
  double t10483;
  double t10484;
  double t10485;
  double t10486;
  double t10487;
  double t10488;
  double t10415;
  double t10421;
  double t10431;
  double t10435;
  double t10441;
  double t10451;
  double t10455;
  double t10456;
  double t10263;
  double t10293;
  double t10298;
  double t10299;
  double t10461;
  double t10462;
  double t10463;
  double t10464;
  double t10318;
  double t10333;
  double t10338;
  double t10339;
  double t10467;
  double t10468;
  double t10469;
  double t10470;
  t10212 = Cos(var1[3]);
  t8044 = Cos(var1[4]);
  t8045 = Sin(var1[3]);
  t10213 = Sin(var1[4]);
  t10227 = Sin(var1[2]);
  t3206 = Cos(var1[2]);
  t10229 = t10212*t8044;
  t10234 = -1.*t8045*t10213;
  t10235 = t10229 + t10234;
  t10279 = -1.*t8044;
  t10280 = 1. + t10279;
  t10281 = 0.4*t10280;
  t10282 = 0.64*t8044;
  t10283 = t10281 + t10282;
  t10211 = -1.*t8044*t8045;
  t10224 = -1.*t10212*t10213;
  t10225 = t10211 + t10224;
  t10226 = t3206*t10225;
  t10238 = -1.*t10227*t10235;
  t10239 = t10226 + t10238;
  t10304 = Cos(var1[5]);
  t10301 = Cos(var1[6]);
  t10302 = Sin(var1[5]);
  t10305 = Sin(var1[6]);
  t10309 = t10304*t10301;
  t10310 = -1.*t10302*t10305;
  t10311 = t10309 + t10310;
  t10319 = -1.*t10301;
  t10320 = 1. + t10319;
  t10321 = 0.4*t10320;
  t10322 = 0.64*t10301;
  t10323 = t10321 + t10322;
  t10303 = -1.*t10301*t10302;
  t10306 = -1.*t10304*t10305;
  t10307 = t10303 + t10306;
  t10308 = t3206*t10307;
  t10312 = -1.*t10227*t10311;
  t10313 = t10308 + t10312;
  t10241 = -1.*t10212*t10227;
  t10259 = -1.*t3206*t8045;
  t10262 = t10241 + t10259;
  t10341 = t3206*t10212;
  t10342 = -1.*t10227*t8045;
  t10343 = t10341 + t10342;
  t10291 = t3206*t10235;
  t10287 = t8044*t8045;
  t10288 = t10212*t10213;
  t10289 = t10287 + t10288;
  t10290 = -1.*t10227*t10289;
  t10292 = t10290 + t10291;
  t10315 = -1.*t10304*t10227;
  t10316 = -1.*t3206*t10302;
  t10317 = t10315 + t10316;
  t10356 = t3206*t10304;
  t10357 = -1.*t10227*t10302;
  t10358 = t10356 + t10357;
  t10331 = t3206*t10311;
  t10327 = t10301*t10302;
  t10328 = t10304*t10305;
  t10329 = t10327 + t10328;
  t10330 = -1.*t10227*t10329;
  t10332 = t10330 + t10331;
  t10345 = t10212*t10227;
  t10346 = t3206*t8045;
  t10347 = t10345 + t10346;
  t10349 = t10227*t10225;
  t10350 = t10349 + t10291;
  t10352 = t3206*t10289;
  t10353 = t10227*t10235;
  t10354 = t10352 + t10353;
  t10360 = t10304*t10227;
  t10361 = t3206*t10302;
  t10362 = t10360 + t10361;
  t10364 = t10227*t10307;
  t10365 = t10364 + t10331;
  t10367 = t3206*t10329;
  t10368 = t10227*t10311;
  t10369 = t10367 + t10368;
  t10422 = t10283*t8045;
  t10423 = 0.24*t10212*t10213;
  t10424 = t10422 + t10423;
  t10426 = t10212*t10283;
  t10427 = -0.24*t8045*t10213;
  t10428 = t10426 + t10427;
  t10442 = t10323*t10302;
  t10443 = 0.24*t10304*t10305;
  t10444 = t10442 + t10443;
  t10446 = t10304*t10323;
  t10447 = -0.24*t10302*t10305;
  t10448 = t10446 + t10447;
  t10382 = -1.*t10227*t10225;
  t10383 = -1.*t3206*t10235;
  t10384 = t10382 + t10383;
  t10378 = -1.*t3206*t10212;
  t10379 = t10227*t8045;
  t10380 = t10378 + t10379;
  t10294 = t10283*t8044;
  t10295 = Power(t10213,2);
  t10296 = 0.24*t10295;
  t10297 = t10294 + t10296;
  t10284 = t10283*t10213;
  t10285 = -0.24*t8044*t10213;
  t10286 = t10284 + t10285;
  t10390 = -1.*t3206*t10289;
  t10391 = t10390 + t10238;
  t10402 = -1.*t10227*t10307;
  t10403 = -1.*t3206*t10311;
  t10404 = t10402 + t10403;
  t10398 = -1.*t3206*t10304;
  t10399 = t10227*t10302;
  t10400 = t10398 + t10399;
  t10334 = t10323*t10301;
  t10335 = Power(t10305,2);
  t10336 = 0.24*t10335;
  t10337 = t10334 + t10336;
  t10324 = t10323*t10305;
  t10325 = -0.24*t10301*t10305;
  t10326 = t10324 + t10325;
  t10410 = -1.*t3206*t10329;
  t10411 = t10410 + t10312;
  t10344 = 13.6*t10262*t10343;
  t10359 = 13.6*t10317*t10358;
  t10373 = Power(t10262,2);
  t10374 = 6.8*t10373;
  t10375 = 6.8*t10262*t10347;
  t10376 = Power(t10343,2);
  t10377 = 6.8*t10376;
  t10381 = 6.8*t10343*t10380;
  t10385 = 3.2*t10384*t10350;
  t10386 = Power(t10292,2);
  t10387 = 3.2*t10386;
  t10388 = Power(t10239,2);
  t10389 = 3.2*t10388;
  t10392 = 3.2*t10391*t10354;
  t10393 = Power(t10317,2);
  t10394 = 6.8*t10393;
  t10395 = 6.8*t10317*t10362;
  t10396 = Power(t10358,2);
  t10397 = 6.8*t10396;
  t10401 = 6.8*t10358*t10400;
  t10405 = 3.2*t10404*t10365;
  t10406 = Power(t10332,2);
  t10407 = 3.2*t10406;
  t10408 = Power(t10313,2);
  t10409 = 3.2*t10408;
  t10412 = 3.2*t10411*t10369;
  t10413 = t10374 + t10375 + t10377 + t10381 + t10385 + t10387 + t10389 + t10392 + t10394 + t10395 + t10397 + t10401 + t10405 + t10407 + t10409 + t10412;
  t10416 = Power(t10212,2);
  t10417 = 0.11*t10416;
  t10418 = Power(t8045,2);
  t10419 = 0.11*t10418;
  t10420 = t10417 + t10419;
  t10425 = -1.*t10424*t10235;
  t10429 = -1.*t10225*t10428;
  t10430 = t10425 + t10429;
  t10432 = t10424*t10289;
  t10433 = t10235*t10428;
  t10434 = t10432 + t10433;
  t10436 = Power(t10304,2);
  t10437 = 0.11*t10436;
  t10438 = Power(t10302,2);
  t10439 = 0.11*t10438;
  t10440 = t10437 + t10439;
  t10445 = -1.*t10444*t10311;
  t10449 = -1.*t10307*t10448;
  t10450 = t10445 + t10449;
  t10452 = t10444*t10329;
  t10453 = t10311*t10448;
  t10454 = t10452 + t10453;
  t10481 = -2.88*t3206;
  t10482 = 6.8*t10380*t10420;
  t10483 = 3.2*t10391*t10430;
  t10484 = 3.2*t10384*t10434;
  t10485 = 6.8*t10400*t10440;
  t10486 = 3.2*t10411*t10450;
  t10487 = 3.2*t10404*t10454;
  t10488 = t10481 + t10482 + t10483 + t10484 + t10485 + t10486 + t10487;
  t10415 = -2.88*t10227;
  t10421 = 6.8*t10262*t10420;
  t10431 = 3.2*t10292*t10430;
  t10435 = 3.2*t10239*t10434;
  t10441 = 6.8*t10317*t10440;
  t10451 = 3.2*t10332*t10450;
  t10455 = 3.2*t10313*t10454;
  t10456 = t10415 + t10421 + t10431 + t10435 + t10441 + t10451 + t10455;
  t10263 = 0.748*t10262;
  t10293 = 3.2*t10286*t10292;
  t10298 = 3.2*t10297*t10239;
  t10299 = t10263 + t10293 + t10298;
  t10461 = 0.748*t10380;
  t10462 = 3.2*t10297*t10384;
  t10463 = 3.2*t10286*t10391;
  t10464 = t10461 + t10462 + t10463;
  t10318 = 0.748*t10317;
  t10333 = 3.2*t10326*t10332;
  t10338 = 3.2*t10337*t10313;
  t10339 = t10318 + t10333 + t10338;
  t10467 = 0.748*t10400;
  t10468 = 3.2*t10337*t10404;
  t10469 = 3.2*t10326*t10411;
  t10470 = t10467 + t10468 + t10469;
  p_output1[0]=var2[2]*(-0.5*(t10344 + 13.6*t10343*t10347 + 6.4*t10239*t10350 + 6.4*t10292*t10354 + t10359 + 13.6*t10358*t10362 + 6.4*t10313*t10365 + 6.4*t10332*t10369)*var2[0] - 0.5*t10413*var2[1] - 0.5*t10456*var2[2] - 0.5*t10299*var2[3] - 0.384*t10239*var2[4] - 0.5*t10339*var2[5] - 0.384*t10313*var2[6]);
  p_output1[1]=var2[2]*(-0.5*t10413*var2[0] - 0.5*(t10344 + t10359 + 13.6*t10262*t10380 + 6.4*t10239*t10384 + 6.4*t10292*t10391 + 13.6*t10317*t10400 + 6.4*t10313*t10404 + 6.4*t10332*t10411)*var2[1] - 0.5*t10488*var2[2] - 0.5*t10464*var2[3] - 0.384*t10384*var2[4] - 0.5*t10470*var2[5] - 0.384*t10404*var2[6]);
  p_output1[2]=(-0.5*t10456*var2[0] - 0.5*t10488*var2[1])*var2[2];
  p_output1[3]=(-0.5*t10299*var2[0] - 0.5*t10464*var2[1])*var2[2];
  p_output1[4]=(-0.384*t10239*var2[0] - 0.384*t10384*var2[1])*var2[2];
  p_output1[5]=(-0.5*t10339*var2[0] - 0.5*t10470*var2[1])*var2[2];
  p_output1[6]=(-0.384*t10313*var2[0] - 0.384*t10404*var2[1])*var2[2];
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

#include "Ce2_vec3_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
