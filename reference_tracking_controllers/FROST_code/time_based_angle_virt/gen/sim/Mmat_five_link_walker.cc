/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:34:32 GMT-05:00
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
  double t5249;
  double t1935;
  double t5254;
  double t5256;
  double t5269;
  double t5271;
  double t5275;
  double t5276;
  double t5277;
  double t5290;
  double t5292;
  double t5302;
  double t5304;
  double t5308;
  double t5309;
  double t5310;
  double t5264;
  double t5265;
  double t5266;
  double t5255;
  double t5257;
  double t5261;
  double t5270;
  double t5272;
  double t5273;
  double t5274;
  double t5278;
  double t5279;
  double t5282;
  double t5283;
  double t5284;
  double t5285;
  double t5286;
  double t5287;
  double t5297;
  double t5298;
  double t5299;
  double t5291;
  double t5293;
  double t5294;
  double t5303;
  double t5305;
  double t5306;
  double t5307;
  double t5311;
  double t5312;
  double t5315;
  double t5316;
  double t5317;
  double t5318;
  double t5319;
  double t5320;
  double t5356;
  double t5357;
  double t5358;
  double t5359;
  double t5360;
  double t5361;
  double t5362;
  double t5363;
  double t5365;
  double t5366;
  double t5367;
  double t5381;
  double t5382;
  double t5383;
  double t5384;
  double t5385;
  double t5386;
  double t5387;
  double t5388;
  double t5390;
  double t5391;
  double t5392;
  double t5324;
  double t5325;
  double t5326;
  double t5327;
  double t5328;
  double t5329;
  double t5330;
  double t5331;
  double t5332;
  double t5333;
  double t5334;
  double t5335;
  double t5336;
  double t5337;
  double t5338;
  double t5339;
  double t5340;
  double t5341;
  double t5342;
  double t5343;
  double t5344;
  double t5345;
  double t5346;
  double t5347;
  double t5348;
  double t2758;
  double t5242;
  double t5250;
  double t5251;
  double t5267;
  double t5268;
  double t5300;
  double t5301;
  double t5350;
  double t5351;
  double t5352;
  double t5353;
  double t5354;
  double t5364;
  double t5368;
  double t5369;
  double t5371;
  double t5372;
  double t5373;
  double t5375;
  double t5376;
  double t5377;
  double t5378;
  double t5379;
  double t5389;
  double t5393;
  double t5394;
  double t5396;
  double t5397;
  double t5398;
  double t5407;
  double t5408;
  double t5409;
  double t5402;
  double t5403;
  double t5404;
  double t5405;
  double t5419;
  double t5420;
  double t5421;
  double t5414;
  double t5415;
  double t5416;
  double t5417;
  double t5349;
  double t5355;
  double t5370;
  double t5374;
  double t5380;
  double t5395;
  double t5399;
  double t5400;
  double t5438;
  double t5439;
  double t5440;
  double t5441;
  double t5442;
  double t5443;
  double t5444;
  double t5445;
  double t5401;
  double t5406;
  double t5410;
  double t5411;
  double t5446;
  double t5447;
  double t5448;
  double t5449;
  double t5469;
  double t5470;
  double t5471;
  double t5472;
  double t5412;
  double t5450;
  double t5473;
  double t5474;
  double t5486;
  double t5487;
  double t5413;
  double t5418;
  double t5422;
  double t5423;
  double t5451;
  double t5452;
  double t5453;
  double t5454;
  double t5475;
  double t5476;
  double t5477;
  double t5478;
  double t5424;
  double t5455;
  double t5479;
  double t5480;
  double t5493;
  double t5494;
  t5249 = Sin(var1[2]);
  t1935 = Cos(var1[2]);
  t5254 = Cos(var1[3]);
  t5256 = Sin(var1[3]);
  t5269 = Cos(var1[4]);
  t5271 = Sin(var1[4]);
  t5275 = t5254*t5269;
  t5276 = -1.*t5256*t5271;
  t5277 = t5275 + t5276;
  t5290 = Cos(var1[5]);
  t5292 = Sin(var1[5]);
  t5302 = Cos(var1[6]);
  t5304 = Sin(var1[6]);
  t5308 = t5290*t5302;
  t5309 = -1.*t5292*t5304;
  t5310 = t5308 + t5309;
  t5264 = t1935*t5254;
  t5265 = -1.*t5249*t5256;
  t5266 = t5264 + t5265;
  t5255 = t5254*t5249;
  t5257 = t1935*t5256;
  t5261 = t5255 + t5257;
  t5270 = -1.*t5269*t5256;
  t5272 = -1.*t5254*t5271;
  t5273 = t5270 + t5272;
  t5274 = t5249*t5273;
  t5278 = t1935*t5277;
  t5279 = t5274 + t5278;
  t5282 = t5269*t5256;
  t5283 = t5254*t5271;
  t5284 = t5282 + t5283;
  t5285 = t1935*t5284;
  t5286 = t5249*t5277;
  t5287 = t5285 + t5286;
  t5297 = t1935*t5290;
  t5298 = -1.*t5249*t5292;
  t5299 = t5297 + t5298;
  t5291 = t5290*t5249;
  t5293 = t1935*t5292;
  t5294 = t5291 + t5293;
  t5303 = -1.*t5302*t5292;
  t5305 = -1.*t5290*t5304;
  t5306 = t5303 + t5305;
  t5307 = t5249*t5306;
  t5311 = t1935*t5310;
  t5312 = t5307 + t5311;
  t5315 = t5302*t5292;
  t5316 = t5290*t5304;
  t5317 = t5315 + t5316;
  t5318 = t1935*t5317;
  t5319 = t5249*t5310;
  t5320 = t5318 + t5319;
  t5356 = -1.*t5269;
  t5357 = 1. + t5356;
  t5358 = 0.4*t5357;
  t5359 = 0.64*t5269;
  t5360 = t5358 + t5359;
  t5361 = t5360*t5256;
  t5362 = 0.24*t5254*t5271;
  t5363 = t5361 + t5362;
  t5365 = t5254*t5360;
  t5366 = -0.24*t5256*t5271;
  t5367 = t5365 + t5366;
  t5381 = -1.*t5302;
  t5382 = 1. + t5381;
  t5383 = 0.4*t5382;
  t5384 = 0.64*t5302;
  t5385 = t5383 + t5384;
  t5386 = t5385*t5292;
  t5387 = 0.24*t5290*t5304;
  t5388 = t5386 + t5387;
  t5390 = t5290*t5385;
  t5391 = -0.24*t5292*t5304;
  t5392 = t5390 + t5391;
  t5324 = -1.*t5254*t5249;
  t5325 = -1.*t1935*t5256;
  t5326 = t5324 + t5325;
  t5327 = 6.8*t5326*t5266;
  t5328 = 6.8*t5261*t5266;
  t5329 = t1935*t5273;
  t5330 = -1.*t5249*t5277;
  t5331 = t5329 + t5330;
  t5332 = 3.2*t5279*t5331;
  t5333 = -1.*t5249*t5284;
  t5334 = t5333 + t5278;
  t5335 = 3.2*t5334*t5287;
  t5336 = -1.*t5290*t5249;
  t5337 = -1.*t1935*t5292;
  t5338 = t5336 + t5337;
  t5339 = 6.8*t5338*t5299;
  t5340 = 6.8*t5294*t5299;
  t5341 = t1935*t5306;
  t5342 = -1.*t5249*t5310;
  t5343 = t5341 + t5342;
  t5344 = 3.2*t5312*t5343;
  t5345 = -1.*t5249*t5317;
  t5346 = t5345 + t5311;
  t5347 = 3.2*t5346*t5320;
  t5348 = t5327 + t5328 + t5332 + t5335 + t5339 + t5340 + t5344 + t5347;
  t2758 = Power(t1935,2);
  t5242 = 12.*t2758;
  t5250 = Power(t5249,2);
  t5251 = 12.*t5250;
  t5267 = Power(t5266,2);
  t5268 = 6.8*t5267;
  t5300 = Power(t5299,2);
  t5301 = 6.8*t5300;
  t5350 = Power(t5254,2);
  t5351 = 0.11*t5350;
  t5352 = Power(t5256,2);
  t5353 = 0.11*t5352;
  t5354 = t5351 + t5353;
  t5364 = -1.*t5363*t5277;
  t5368 = -1.*t5273*t5367;
  t5369 = t5364 + t5368;
  t5371 = t5363*t5284;
  t5372 = t5277*t5367;
  t5373 = t5371 + t5372;
  t5375 = Power(t5290,2);
  t5376 = 0.11*t5375;
  t5377 = Power(t5292,2);
  t5378 = 0.11*t5377;
  t5379 = t5376 + t5378;
  t5389 = -1.*t5388*t5310;
  t5393 = -1.*t5306*t5392;
  t5394 = t5389 + t5393;
  t5396 = t5388*t5317;
  t5397 = t5310*t5392;
  t5398 = t5396 + t5397;
  t5407 = t5360*t5271;
  t5408 = -0.24*t5269*t5271;
  t5409 = t5407 + t5408;
  t5402 = t5360*t5269;
  t5403 = Power(t5271,2);
  t5404 = 0.24*t5403;
  t5405 = t5402 + t5404;
  t5419 = t5385*t5304;
  t5420 = -0.24*t5302*t5304;
  t5421 = t5419 + t5420;
  t5414 = t5385*t5302;
  t5415 = Power(t5304,2);
  t5416 = 0.24*t5415;
  t5417 = t5414 + t5416;
  t5349 = 2.88*t1935;
  t5355 = 6.8*t5266*t5354;
  t5370 = 3.2*t5287*t5369;
  t5374 = 3.2*t5279*t5373;
  t5380 = 6.8*t5299*t5379;
  t5395 = 3.2*t5320*t5394;
  t5399 = 3.2*t5312*t5398;
  t5400 = t5349 + t5355 + t5370 + t5374 + t5380 + t5395 + t5399;
  t5438 = -2.88*t5249;
  t5439 = 6.8*t5326*t5354;
  t5440 = 3.2*t5334*t5369;
  t5441 = 3.2*t5331*t5373;
  t5442 = 6.8*t5338*t5379;
  t5443 = 3.2*t5346*t5394;
  t5444 = 3.2*t5343*t5398;
  t5445 = t5438 + t5439 + t5440 + t5441 + t5442 + t5443 + t5444;
  t5401 = 0.748*t5266;
  t5406 = 3.2*t5405*t5279;
  t5410 = 3.2*t5409*t5287;
  t5411 = t5401 + t5406 + t5410;
  t5446 = 0.748*t5326;
  t5447 = 3.2*t5409*t5334;
  t5448 = 3.2*t5405*t5331;
  t5449 = t5446 + t5447 + t5448;
  t5469 = 0.748*t5354;
  t5470 = 3.2*t5409*t5369;
  t5471 = 3.2*t5405*t5373;
  t5472 = 0.67 + t5469 + t5470 + t5471;
  t5412 = 0.768*t5279;
  t5450 = 0.768*t5331;
  t5473 = 0.768*t5373;
  t5474 = 0.2 + t5473;
  t5486 = 0.768*t5405;
  t5487 = 0.2 + t5486;
  t5413 = 0.748*t5299;
  t5418 = 3.2*t5417*t5312;
  t5422 = 3.2*t5421*t5320;
  t5423 = t5413 + t5418 + t5422;
  t5451 = 0.748*t5338;
  t5452 = 3.2*t5421*t5346;
  t5453 = 3.2*t5417*t5343;
  t5454 = t5451 + t5452 + t5453;
  t5475 = 0.748*t5379;
  t5476 = 3.2*t5421*t5394;
  t5477 = 3.2*t5417*t5398;
  t5478 = 0.67 + t5475 + t5476 + t5477;
  t5424 = 0.768*t5312;
  t5455 = 0.768*t5343;
  t5479 = 0.768*t5398;
  t5480 = 0.2 + t5479;
  t5493 = 0.768*t5417;
  t5494 = 0.2 + t5493;
  p_output1[0]=t5242 + t5251 + 6.8*Power(t5261,2) + t5268 + 3.2*Power(t5279,2) + 3.2*Power(t5287,2) + 6.8*Power(t5294,2) + t5301 + 3.2*Power(t5312,2) + 3.2*Power(t5320,2);
  p_output1[1]=t5348;
  p_output1[2]=t5400;
  p_output1[3]=t5411;
  p_output1[4]=t5412;
  p_output1[5]=t5423;
  p_output1[6]=t5424;
  p_output1[7]=t5348;
  p_output1[8]=t5242 + t5251 + t5268 + t5301 + 6.8*Power(t5326,2) + 3.2*Power(t5331,2) + 3.2*Power(t5334,2) + 6.8*Power(t5338,2) + 3.2*Power(t5343,2) + 3.2*Power(t5346,2);
  p_output1[9]=t5445;
  p_output1[10]=t5449;
  p_output1[11]=t5450;
  p_output1[12]=t5454;
  p_output1[13]=t5455;
  p_output1[14]=t5400;
  p_output1[15]=t5445;
  p_output1[16]=3.3612 + 6.8*Power(t5354,2) + 3.2*Power(t5369,2) + 3.2*Power(t5373,2) + 6.8*Power(t5379,2) + 3.2*Power(t5394,2) + 3.2*Power(t5398,2);
  p_output1[17]=t5472;
  p_output1[18]=t5474;
  p_output1[19]=t5478;
  p_output1[20]=t5480;
  p_output1[21]=t5411;
  p_output1[22]=t5449;
  p_output1[23]=t5472;
  p_output1[24]=1.58228 + 3.2*Power(t5405,2) + 3.2*Power(t5409,2);
  p_output1[25]=t5487;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t5412;
  p_output1[29]=t5450;
  p_output1[30]=t5474;
  p_output1[31]=t5487;
  p_output1[32]=1.2143199999999998;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t5423;
  p_output1[36]=t5454;
  p_output1[37]=t5478;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.58228 + 3.2*Power(t5417,2) + 3.2*Power(t5421,2);
  p_output1[41]=t5494;
  p_output1[42]=t5424;
  p_output1[43]=t5455;
  p_output1[44]=t5480;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=t5494;
  p_output1[48]=1.2143199999999998;
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

#include "Mmat_five_link_walker.hh"

namespace SymFunction
{

void Mmat_five_link_walker_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
