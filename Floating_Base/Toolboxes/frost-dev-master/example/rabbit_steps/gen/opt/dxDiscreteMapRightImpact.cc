/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:54:02 GMT-04:00
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
  double t1462;
  double t1458;
  double t1459;
  double t1463;
  double t1639;
  double t1452;
  double t1460;
  double t1515;
  double t1540;
  double t1619;
  double t1640;
  double t1690;
  double t1702;
  double t1725;
  double t1864;
  double t2167;
  double t2187;
  double t2194;
  double t2248;
  double t2305;
  double t3026;
  double t2999;
  double t3009;
  double t3027;
  double t3023;
  double t3028;
  double t3031;
  double t3032;
  double t3033;
  double t3034;
  double t3035;
  double t3036;
  double t3037;
  double t3060;
  double t3067;
  double t3069;
  double t3073;
  double t3074;
  double t2004;
  double t2034;
  double t2106;
  double t2643;
  double t2673;
  double t2759;
  double t2887;
  double t2912;
  double t2913;
  double t3056;
  double t3057;
  double t3058;
  double t3219;
  double t3710;
  double t3763;
  double t3937;
  double t3978;
  double t4073;
  double t5298;
  double t5299;
  double t5300;
  double t5336;
  double t5337;
  double t5338;
  double t5386;
  double t5387;
  double t5388;
  double t5390;
  double t5391;
  double t5392;
  double t5447;
  double t5448;
  double t5449;
  double t5451;
  double t5452;
  double t5453;
  double t442;
  double t448;
  double t5304;
  double t5305;
  double t5307;
  double t1947;
  double t1979;
  double t5285;
  double t5289;
  double t5290;
  double t2497;
  double t2552;
  double t2555;
  double t5309;
  double t5310;
  double t2313;
  double t2330;
  double t2331;
  double t2389;
  double t2992;
  double t2997;
  double t5341;
  double t5342;
  double t5343;
  double t3041;
  double t3054;
  double t5330;
  double t5331;
  double t5334;
  double t3085;
  double t3086;
  double t3087;
  double t5345;
  double t5346;
  double t3075;
  double t3076;
  double t3079;
  double t3081;
  double t4592;
  double t4705;
  double t5355;
  double t5356;
  double t5357;
  double t5358;
  double t5361;
  double t5362;
  double t5369;
  double t5370;
  double t5353;
  double t5354;
  double t5293;
  double t5302;
  double t5308;
  double t5311;
  double t5335;
  double t5340;
  double t5344;
  double t5347;
  double t5351;
  double t5377;
  double t5378;
  double t5380;
  double t5381;
  double t5382;
  double t5383;
  double t5384;
  double t5389;
  double t5393;
  double t5394;
  double t5437;
  double t5438;
  double t5439;
  double t5441;
  double t5442;
  double t5443;
  double t5444;
  double t5445;
  double t5450;
  double t5454;
  double t5455;
  double t5457;
  double t5458;
  double t5459;
  double t5513;
  double t5514;
  double t5515;
  double t5379;
  double t5385;
  double t5436;
  double t5440;
  double t5446;
  double t5456;
  double t5460;
  double t5461;
  double t5494;
  double t5495;
  double t5496;
  double t5497;
  double t5498;
  double t5499;
  double t5500;
  double t5501;
  double t5504;
  double t5505;
  double t5506;
  double t5507;
  double t5508;
  double t5509;
  double t5510;
  double t5511;
  double t5512;
  double t5516;
  double t5517;
  double t5518;
  double t5519;
  double t5520;
  double t5521;
  double t5522;
  double t5466;
  double t5467;
  double t5468;
  double t5469;
  double t2144;
  double t2410;
  double t2959;
  double t2990;
  double t5526;
  double t5527;
  double t5528;
  double t5529;
  double t5556;
  double t5557;
  double t5523;
  double t5524;
  double t5472;
  double t5473;
  double t5474;
  double t5475;
  double t3059;
  double t3082;
  double t4183;
  double t4340;
  double t5534;
  double t5535;
  double t5536;
  double t5537;
  double t5589;
  double t5590;
  double t5531;
  double t5532;
  t1462 = Cos(var2[3]);
  t1458 = Cos(var2[4]);
  t1459 = Sin(var2[3]);
  t1463 = Sin(var2[4]);
  t1639 = Cos(var2[2]);
  t1452 = Sin(var2[2]);
  t1460 = -1.*t1458*t1459;
  t1515 = -1.*t1462*t1463;
  t1540 = t1460 + t1515;
  t1619 = t1452*t1540;
  t1640 = t1462*t1458;
  t1690 = -1.*t1459*t1463;
  t1702 = t1640 + t1690;
  t1725 = t1639*t1702;
  t1864 = t1619 + t1725;
  t2167 = -1.*t1458;
  t2187 = 1. + t2167;
  t2194 = 0.4*t2187;
  t2248 = 0.64*t1458;
  t2305 = t2194 + t2248;
  t3026 = Cos(var2[5]);
  t2999 = Cos(var2[6]);
  t3009 = Sin(var2[5]);
  t3027 = Sin(var2[6]);
  t3023 = -1.*t2999*t3009;
  t3028 = -1.*t3026*t3027;
  t3031 = t3023 + t3028;
  t3032 = t1452*t3031;
  t3033 = t3026*t2999;
  t3034 = -1.*t3009*t3027;
  t3035 = t3033 + t3034;
  t3036 = t1639*t3035;
  t3037 = t3032 + t3036;
  t3060 = -1.*t2999;
  t3067 = 1. + t3060;
  t3069 = 0.4*t3067;
  t3073 = 0.64*t2999;
  t3074 = t3069 + t3073;
  t2004 = t1639*t1462;
  t2034 = -1.*t1452*t1459;
  t2106 = t2004 + t2034;
  t2643 = t1458*t1459;
  t2673 = t1462*t1463;
  t2759 = t2643 + t2673;
  t2887 = t1639*t2759;
  t2912 = t1452*t1702;
  t2913 = t2887 + t2912;
  t3056 = t1639*t3026;
  t3057 = -1.*t1452*t3009;
  t3058 = t3056 + t3057;
  t3219 = t2999*t3009;
  t3710 = t3026*t3027;
  t3763 = t3219 + t3710;
  t3937 = t1639*t3763;
  t3978 = t1452*t3035;
  t4073 = t3937 + t3978;
  t5298 = t1462*t1452;
  t5299 = t1639*t1459;
  t5300 = t5298 + t5299;
  t5336 = t3026*t1452;
  t5337 = t1639*t3009;
  t5338 = t5336 + t5337;
  t5386 = t2305*t1459;
  t5387 = 0.24*t1462*t1463;
  t5388 = t5386 + t5387;
  t5390 = t1462*t2305;
  t5391 = -0.24*t1459*t1463;
  t5392 = t5390 + t5391;
  t5447 = t3074*t3009;
  t5448 = 0.24*t3026*t3027;
  t5449 = t5447 + t5448;
  t5451 = t3026*t3074;
  t5452 = -0.24*t3009*t3027;
  t5453 = t5451 + t5452;
  t442 = -1.*var1[6];
  t448 = var3[4] + t442;
  t5304 = t1639*t1540;
  t5305 = -1.*t1452*t1702;
  t5307 = t5304 + t5305;
  t1947 = -1.*var1[5];
  t1979 = var3[3] + t1947;
  t5285 = -1.*t1462*t1452;
  t5289 = -1.*t1639*t1459;
  t5290 = t5285 + t5289;
  t2497 = t2305*t1463;
  t2552 = -0.24*t1458*t1463;
  t2555 = t2497 + t2552;
  t5309 = -1.*t1452*t2759;
  t5310 = t5309 + t1725;
  t2313 = t2305*t1458;
  t2330 = Power(t1463,2);
  t2331 = 0.24*t2330;
  t2389 = t2313 + t2331;
  t2992 = -1.*var1[4];
  t2997 = var3[6] + t2992;
  t5341 = t1639*t3031;
  t5342 = -1.*t1452*t3035;
  t5343 = t5341 + t5342;
  t3041 = -1.*var1[3];
  t3054 = var3[5] + t3041;
  t5330 = -1.*t3026*t1452;
  t5331 = -1.*t1639*t3009;
  t5334 = t5330 + t5331;
  t3085 = t3074*t3027;
  t3086 = -0.24*t2999*t3027;
  t3087 = t3085 + t3086;
  t5345 = -1.*t1452*t3763;
  t5346 = t5345 + t3036;
  t3075 = t3074*t2999;
  t3076 = Power(t3027,2);
  t3079 = 0.24*t3076;
  t3081 = t3075 + t3079;
  t4592 = -1.*var1[1];
  t4705 = var3[1] + t4592;
  t5355 = Power(t1639,2);
  t5356 = 12.*t5355;
  t5357 = Power(t1452,2);
  t5358 = 12.*t5357;
  t5361 = Power(t2106,2);
  t5362 = 6.8*t5361;
  t5369 = Power(t3058,2);
  t5370 = 6.8*t5369;
  t5353 = -1.*var1[0];
  t5354 = var3[0] + t5353;
  t5293 = 6.8*t5290*t2106;
  t5302 = 6.8*t5300*t2106;
  t5308 = 3.2*t1864*t5307;
  t5311 = 3.2*t5310*t2913;
  t5335 = 6.8*t5334*t3058;
  t5340 = 6.8*t5338*t3058;
  t5344 = 3.2*t3037*t5343;
  t5347 = 3.2*t5346*t4073;
  t5351 = t5293 + t5302 + t5308 + t5311 + t5335 + t5340 + t5344 + t5347;
  t5377 = -1.*var1[2];
  t5378 = var3[2] + t5377;
  t5380 = Power(t1462,2);
  t5381 = 0.11*t5380;
  t5382 = Power(t1459,2);
  t5383 = 0.11*t5382;
  t5384 = t5381 + t5383;
  t5389 = -1.*t5388*t1702;
  t5393 = -1.*t1540*t5392;
  t5394 = t5389 + t5393;
  t5437 = t5388*t2759;
  t5438 = t1702*t5392;
  t5439 = t5437 + t5438;
  t5441 = Power(t3026,2);
  t5442 = 0.11*t5441;
  t5443 = Power(t3009,2);
  t5444 = 0.11*t5443;
  t5445 = t5442 + t5444;
  t5450 = -1.*t5449*t3035;
  t5454 = -1.*t3031*t5453;
  t5455 = t5450 + t5454;
  t5457 = t5449*t3763;
  t5458 = t3035*t5453;
  t5459 = t5457 + t5458;
  t5513 = -1.*t1639*t1462;
  t5514 = t1452*t1459;
  t5515 = t5513 + t5514;
  t5379 = 2.88*t1639;
  t5385 = 6.8*t2106*t5384;
  t5436 = 3.2*t2913*t5394;
  t5440 = 3.2*t1864*t5439;
  t5446 = 6.8*t3058*t5445;
  t5456 = 3.2*t4073*t5455;
  t5460 = 3.2*t3037*t5459;
  t5461 = t5379 + t5385 + t5436 + t5440 + t5446 + t5456 + t5460;
  t5494 = -2.88*t1452;
  t5495 = 6.8*t5290*t5384;
  t5496 = 3.2*t5310*t5394;
  t5497 = 3.2*t5307*t5439;
  t5498 = 6.8*t5334*t5445;
  t5499 = 3.2*t5346*t5455;
  t5500 = 3.2*t5343*t5459;
  t5501 = t5494 + t5495 + t5496 + t5497 + t5498 + t5499 + t5500;
  t5504 = 0.4*t2187*t2106;
  t5505 = -0.4*t5290*t1463;
  t5506 = t1458*t2106;
  t5507 = t5290*t1463;
  t5508 = t5506 + t5507;
  t5509 = 0.8*t5508;
  t5510 = t5504 + t5505 + t5509;
  t5511 = -1.*var4[0]*t5510;
  t5512 = 0.4*t2187*t5290;
  t5516 = -0.4*t5515*t1463;
  t5517 = t1458*t5290;
  t5518 = t5515*t1463;
  t5519 = t5517 + t5518;
  t5520 = 0.8*t5519;
  t5521 = t5512 + t5516 + t5520;
  t5522 = -1.*var4[2]*t5521;
  t5466 = 0.748*t5290;
  t5467 = 3.2*t2555*t5310;
  t5468 = 3.2*t2389*t5307;
  t5469 = t5466 + t5467 + t5468;
  t2144 = 0.748*t2106;
  t2410 = 3.2*t2389*t1864;
  t2959 = 3.2*t2555*t2913;
  t2990 = t2144 + t2410 + t2959;
  t5526 = 0.748*t5384;
  t5527 = 3.2*t2555*t5394;
  t5528 = 3.2*t2389*t5439;
  t5529 = 0.67 + t5526 + t5527 + t5528;
  t5556 = 0.768*t2389;
  t5557 = 0.2 + t5556;
  t5523 = 0.768*t5439;
  t5524 = 0.2 + t5523;
  t5472 = 0.748*t5334;
  t5473 = 3.2*t3087*t5346;
  t5474 = 3.2*t3081*t5343;
  t5475 = t5472 + t5473 + t5474;
  t3059 = 0.748*t3058;
  t3082 = 3.2*t3081*t3037;
  t4183 = 3.2*t3087*t4073;
  t4340 = t3059 + t3082 + t4183;
  t5534 = 0.748*t5445;
  t5535 = 3.2*t3087*t5455;
  t5536 = 3.2*t3081*t5459;
  t5537 = 0.67 + t5534 + t5535 + t5536;
  t5589 = 0.768*t3081;
  t5590 = 0.2 + t5589;
  t5531 = 0.768*t5459;
  t5532 = 0.2 + t5531;
  p_output1[0]=t1979*t2990 + 0.768*t2997*t3037 + t3054*t4340 + 0.768*t1864*t448 + t4705*t5351 + t5354*(3.2*Power(t1864,2) + 3.2*Power(t2913,2) + 3.2*Power(t3037,2) + 3.2*Power(t4073,2) + 6.8*Power(t5300,2) + 6.8*Power(t5338,2) + t5356 + t5358 + t5362 + t5370) + t5378*t5461 - 1.*var4[0];
  p_output1[1]=0.768*t448*t5307 + 0.768*t2997*t5343 + t5351*t5354 + t4705*(6.8*Power(t5290,2) + 3.2*Power(t5307,2) + 3.2*Power(t5310,2) + 6.8*Power(t5334,2) + 3.2*Power(t5343,2) + 3.2*Power(t5346,2) + t5356 + t5358 + t5362 + t5370) + t1979*t5469 + t3054*t5475 + t5378*t5501 - 1.*var4[2];
  p_output1[2]=t5378*(3.3612 + 6.8*Power(t5384,2) + 3.2*Power(t5394,2) + 3.2*Power(t5439,2) + 6.8*Power(t5445,2) + 3.2*Power(t5455,2) + 3.2*Power(t5459,2)) + t5354*t5461 + t4705*t5501 + t5511 + t5522 + t448*t5524 + t1979*t5529 + t2997*t5532 + t3054*t5537;
  p_output1[3]=t1979*(1.58228 + 3.2*Power(t2389,2) + 3.2*Power(t2555,2)) + t2990*t5354 + t4705*t5469 + t5511 + t5522 + t5378*t5529 + t448*t5557;
  p_output1[4]=1.2143199999999998*t448 + 0.768*t4705*t5307 + 0.768*t1864*t5354 + t5378*t5524 + t1979*t5557 - 1.*(-0.4*t1458*t2106 + 0.4*t1463*t5300 + 0.8*(-1.*t1463*t5300 + t5506))*var4[0] - 1.*(0.4*t1463*t2106 - 0.4*t1458*t5290 + 0.8*(-1.*t1463*t2106 + t5517))*var4[2];
  p_output1[5]=t3054*(1.58228 + 3.2*Power(t3081,2) + 3.2*Power(t3087,2)) + t4340*t5354 + t4705*t5475 + t5378*t5537 + t2997*t5590;
  p_output1[6]=1.2143199999999998*t2997 + 0.768*t4705*t5343 + 0.768*t3037*t5354 + t5378*t5532 + t3054*t5590;
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
