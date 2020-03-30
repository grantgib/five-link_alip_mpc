/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:06 GMT-04:00
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
  double t4964;
  double t4890;
  double t4910;
  double t5141;
  double t5198;
  double t3117;
  double t4930;
  double t5142;
  double t5172;
  double t5176;
  double t5199;
  double t5208;
  double t5209;
  double t5213;
  double t5214;
  double t5228;
  double t5231;
  double t5232;
  double t5235;
  double t5236;
  double t5275;
  double t5272;
  double t5273;
  double t5276;
  double t5274;
  double t5277;
  double t5278;
  double t5279;
  double t5280;
  double t5281;
  double t5282;
  double t5283;
  double t5284;
  double t5290;
  double t5291;
  double t5292;
  double t5293;
  double t5294;
  double t5218;
  double t5221;
  double t5222;
  double t5258;
  double t5260;
  double t5265;
  double t5266;
  double t5267;
  double t5268;
  double t5286;
  double t5287;
  double t5288;
  double t5303;
  double t5304;
  double t5305;
  double t5306;
  double t5307;
  double t5310;
  double t5318;
  double t5320;
  double t5321;
  double t5338;
  double t5339;
  double t5340;
  double t5401;
  double t5402;
  double t5403;
  double t5405;
  double t5406;
  double t5407;
  double t5426;
  double t5427;
  double t5428;
  double t5431;
  double t5432;
  double t5433;
  double t5323;
  double t5324;
  double t5325;
  double t5314;
  double t5315;
  double t5316;
  double t5254;
  double t5255;
  double t5256;
  double t5327;
  double t5328;
  double t5240;
  double t5241;
  double t5244;
  double t5248;
  double t5344;
  double t5347;
  double t5348;
  double t5330;
  double t5333;
  double t5334;
  double t5300;
  double t5301;
  double t5302;
  double t5350;
  double t5351;
  double t5295;
  double t5296;
  double t5297;
  double t5298;
  double t5364;
  double t5365;
  double t5366;
  double t5367;
  double t5374;
  double t5375;
  double t5382;
  double t5383;
  double t5317;
  double t5322;
  double t5326;
  double t5329;
  double t5335;
  double t5342;
  double t5349;
  double t5352;
  double t5354;
  double t5394;
  double t5395;
  double t5396;
  double t5397;
  double t5399;
  double t5404;
  double t5408;
  double t5409;
  double t5412;
  double t5413;
  double t5414;
  double t5420;
  double t5421;
  double t5422;
  double t5423;
  double t5424;
  double t5430;
  double t5434;
  double t5438;
  double t5440;
  double t5441;
  double t5442;
  double t5393;
  double t5400;
  double t5411;
  double t5417;
  double t5425;
  double t5439;
  double t5443;
  double t5445;
  double t5488;
  double t5490;
  double t5494;
  double t5495;
  double t5497;
  double t5498;
  double t5499;
  double t5500;
  double t5455;
  double t5456;
  double t5457;
  double t5458;
  double t5227;
  double t5253;
  double t5269;
  double t5270;
  double t5511;
  double t5512;
  double t5516;
  double t5517;
  double t5573;
  double t5574;
  double t5505;
  double t5506;
  double t5461;
  double t5462;
  double t5463;
  double t5464;
  double t5289;
  double t5299;
  double t5311;
  double t5312;
  double t5525;
  double t5526;
  double t5527;
  double t5531;
  double t5612;
  double t5613;
  double t5521;
  double t5522;
  t4964 = Cos(var1[3]);
  t4890 = Cos(var1[4]);
  t4910 = Sin(var1[3]);
  t5141 = Sin(var1[4]);
  t5198 = Cos(var1[2]);
  t3117 = Sin(var1[2]);
  t4930 = -1.*t4890*t4910;
  t5142 = -1.*t4964*t5141;
  t5172 = t4930 + t5142;
  t5176 = t3117*t5172;
  t5199 = t4964*t4890;
  t5208 = -1.*t4910*t5141;
  t5209 = t5199 + t5208;
  t5213 = t5198*t5209;
  t5214 = t5176 + t5213;
  t5228 = -1.*t4890;
  t5231 = 1. + t5228;
  t5232 = 0.4*t5231;
  t5235 = 0.64*t4890;
  t5236 = t5232 + t5235;
  t5275 = Cos(var1[5]);
  t5272 = Cos(var1[6]);
  t5273 = Sin(var1[5]);
  t5276 = Sin(var1[6]);
  t5274 = -1.*t5272*t5273;
  t5277 = -1.*t5275*t5276;
  t5278 = t5274 + t5277;
  t5279 = t3117*t5278;
  t5280 = t5275*t5272;
  t5281 = -1.*t5273*t5276;
  t5282 = t5280 + t5281;
  t5283 = t5198*t5282;
  t5284 = t5279 + t5283;
  t5290 = -1.*t5272;
  t5291 = 1. + t5290;
  t5292 = 0.4*t5291;
  t5293 = 0.64*t5272;
  t5294 = t5292 + t5293;
  t5218 = t5198*t4964;
  t5221 = -1.*t3117*t4910;
  t5222 = t5218 + t5221;
  t5258 = t4890*t4910;
  t5260 = t4964*t5141;
  t5265 = t5258 + t5260;
  t5266 = t5198*t5265;
  t5267 = t3117*t5209;
  t5268 = t5266 + t5267;
  t5286 = t5198*t5275;
  t5287 = -1.*t3117*t5273;
  t5288 = t5286 + t5287;
  t5303 = t5272*t5273;
  t5304 = t5275*t5276;
  t5305 = t5303 + t5304;
  t5306 = t5198*t5305;
  t5307 = t3117*t5282;
  t5310 = t5306 + t5307;
  t5318 = t4964*t3117;
  t5320 = t5198*t4910;
  t5321 = t5318 + t5320;
  t5338 = t5275*t3117;
  t5339 = t5198*t5273;
  t5340 = t5338 + t5339;
  t5401 = t5236*t4910;
  t5402 = 0.24*t4964*t5141;
  t5403 = t5401 + t5402;
  t5405 = t4964*t5236;
  t5406 = -0.24*t4910*t5141;
  t5407 = t5405 + t5406;
  t5426 = t5294*t5273;
  t5427 = 0.24*t5275*t5276;
  t5428 = t5426 + t5427;
  t5431 = t5275*t5294;
  t5432 = -0.24*t5273*t5276;
  t5433 = t5431 + t5432;
  t5323 = t5198*t5172;
  t5324 = -1.*t3117*t5209;
  t5325 = t5323 + t5324;
  t5314 = -1.*t4964*t3117;
  t5315 = -1.*t5198*t4910;
  t5316 = t5314 + t5315;
  t5254 = t5236*t5141;
  t5255 = -0.24*t4890*t5141;
  t5256 = t5254 + t5255;
  t5327 = -1.*t3117*t5265;
  t5328 = t5327 + t5213;
  t5240 = t5236*t4890;
  t5241 = Power(t5141,2);
  t5244 = 0.24*t5241;
  t5248 = t5240 + t5244;
  t5344 = t5198*t5278;
  t5347 = -1.*t3117*t5282;
  t5348 = t5344 + t5347;
  t5330 = -1.*t5275*t3117;
  t5333 = -1.*t5198*t5273;
  t5334 = t5330 + t5333;
  t5300 = t5294*t5276;
  t5301 = -0.24*t5272*t5276;
  t5302 = t5300 + t5301;
  t5350 = -1.*t3117*t5305;
  t5351 = t5350 + t5283;
  t5295 = t5294*t5272;
  t5296 = Power(t5276,2);
  t5297 = 0.24*t5296;
  t5298 = t5295 + t5297;
  t5364 = Power(t5198,2);
  t5365 = -12.*t5364;
  t5366 = Power(t3117,2);
  t5367 = -12.*t5366;
  t5374 = Power(t5222,2);
  t5375 = -6.8*t5374;
  t5382 = Power(t5288,2);
  t5383 = -6.8*t5382;
  t5317 = -6.8*t5316*t5222;
  t5322 = -6.8*t5321*t5222;
  t5326 = -3.2*t5214*t5325;
  t5329 = -3.2*t5328*t5268;
  t5335 = -6.8*t5334*t5288;
  t5342 = -6.8*t5340*t5288;
  t5349 = -3.2*t5284*t5348;
  t5352 = -3.2*t5351*t5310;
  t5354 = t5317 + t5322 + t5326 + t5329 + t5335 + t5342 + t5349 + t5352;
  t5394 = Power(t4964,2);
  t5395 = 0.11*t5394;
  t5396 = Power(t4910,2);
  t5397 = 0.11*t5396;
  t5399 = t5395 + t5397;
  t5404 = -1.*t5403*t5209;
  t5408 = -1.*t5172*t5407;
  t5409 = t5404 + t5408;
  t5412 = t5403*t5265;
  t5413 = t5209*t5407;
  t5414 = t5412 + t5413;
  t5420 = Power(t5275,2);
  t5421 = 0.11*t5420;
  t5422 = Power(t5273,2);
  t5423 = 0.11*t5422;
  t5424 = t5421 + t5423;
  t5430 = -1.*t5428*t5282;
  t5434 = -1.*t5278*t5433;
  t5438 = t5430 + t5434;
  t5440 = t5428*t5305;
  t5441 = t5282*t5433;
  t5442 = t5440 + t5441;
  t5393 = -2.88*t5198;
  t5400 = -6.8*t5222*t5399;
  t5411 = -3.2*t5268*t5409;
  t5417 = -3.2*t5214*t5414;
  t5425 = -6.8*t5288*t5424;
  t5439 = -3.2*t5310*t5438;
  t5443 = -3.2*t5284*t5442;
  t5445 = t5393 + t5400 + t5411 + t5417 + t5425 + t5439 + t5443;
  t5488 = 2.88*t3117;
  t5490 = -6.8*t5316*t5399;
  t5494 = -3.2*t5328*t5409;
  t5495 = -3.2*t5325*t5414;
  t5497 = -6.8*t5334*t5424;
  t5498 = -3.2*t5351*t5438;
  t5499 = -3.2*t5348*t5442;
  t5500 = t5488 + t5490 + t5494 + t5495 + t5497 + t5498 + t5499;
  t5455 = -0.748*t5316;
  t5456 = -3.2*t5256*t5328;
  t5457 = -3.2*t5248*t5325;
  t5458 = t5455 + t5456 + t5457;
  t5227 = -0.748*t5222;
  t5253 = -3.2*t5248*t5214;
  t5269 = -3.2*t5256*t5268;
  t5270 = t5227 + t5253 + t5269;
  t5511 = -0.748*t5399;
  t5512 = -3.2*t5256*t5409;
  t5516 = -3.2*t5248*t5414;
  t5517 = -0.67 + t5511 + t5512 + t5516;
  t5573 = -0.768*t5248;
  t5574 = -0.2 + t5573;
  t5505 = -0.768*t5414;
  t5506 = -0.2 + t5505;
  t5461 = -0.748*t5334;
  t5462 = -3.2*t5302*t5351;
  t5463 = -3.2*t5298*t5348;
  t5464 = t5461 + t5462 + t5463;
  t5289 = -0.748*t5288;
  t5299 = -3.2*t5298*t5284;
  t5311 = -3.2*t5302*t5310;
  t5312 = t5289 + t5299 + t5311;
  t5525 = -0.748*t5424;
  t5526 = -3.2*t5302*t5438;
  t5527 = -3.2*t5298*t5442;
  t5531 = -0.67 + t5525 + t5526 + t5527;
  t5612 = -0.768*t5298;
  t5613 = -0.2 + t5612;
  t5521 = -0.768*t5442;
  t5522 = -0.2 + t5521;
  p_output1[0]=(-3.2*Power(t5214,2) - 3.2*Power(t5268,2) - 3.2*Power(t5284,2) - 3.2*Power(t5310,2) - 6.8*Power(t5321,2) - 6.8*Power(t5340,2) + t5365 + t5367 + t5375 + t5383)*var2[0] + t5354*var2[1] + t5445*var2[2] + t5270*var2[3] - 0.768*t5214*var2[4] + t5312*var2[5] - 0.768*t5284*var2[6];
  p_output1[1]=t5354*var2[0] + (-6.8*Power(t5316,2) - 3.2*Power(t5325,2) - 3.2*Power(t5328,2) - 6.8*Power(t5334,2) - 3.2*Power(t5348,2) - 3.2*Power(t5351,2) + t5365 + t5367 + t5375 + t5383)*var2[1] + t5500*var2[2] + t5458*var2[3] - 0.768*t5325*var2[4] + t5464*var2[5] - 0.768*t5348*var2[6];
  p_output1[2]=t5445*var2[0] + t5500*var2[1] + (-3.3612 - 6.8*Power(t5399,2) - 3.2*Power(t5409,2) - 3.2*Power(t5414,2) - 6.8*Power(t5424,2) - 3.2*Power(t5438,2) - 3.2*Power(t5442,2))*var2[2] + t5517*var2[3] + t5506*var2[4] + t5531*var2[5] + t5522*var2[6];
  p_output1[3]=t5270*var2[0] + t5458*var2[1] + t5517*var2[2] + (-1.58228 - 3.2*Power(t5248,2) - 3.2*Power(t5256,2))*var2[3] + t5574*var2[4];
  p_output1[4]=-0.768*t5214*var2[0] - 0.768*t5325*var2[1] + t5506*var2[2] + t5574*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t5312*var2[0] + t5464*var2[1] + t5531*var2[2] + (-1.58228 - 3.2*Power(t5298,2) - 3.2*Power(t5302,2))*var2[5] + t5613*var2[6];
  p_output1[6]=-0.768*t5284*var2[0] - 0.768*t5348*var2[1] + t5522*var2[2] + t5613*var2[5] - 1.2143199999999998*var2[6];
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
