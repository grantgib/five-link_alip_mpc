/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:08:46 GMT-05:00
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
  double t1377;
  double t1113;
  double t1221;
  double t1381;
  double t1459;
  double t919;
  double t1376;
  double t1392;
  double t1393;
  double t1457;
  double t1462;
  double t1463;
  double t1464;
  double t1502;
  double t1527;
  double t1699;
  double t1707;
  double t1782;
  double t1787;
  double t1788;
  double t2387;
  double t2380;
  double t2382;
  double t2411;
  double t2386;
  double t2415;
  double t2423;
  double t2426;
  double t2432;
  double t2437;
  double t2447;
  double t2449;
  double t2466;
  double t2558;
  double t2560;
  double t2562;
  double t2568;
  double t2579;
  double t1628;
  double t1642;
  double t1676;
  double t2286;
  double t2305;
  double t2322;
  double t2327;
  double t2328;
  double t2332;
  double t2519;
  double t2520;
  double t2544;
  double t2691;
  double t2694;
  double t2695;
  double t2699;
  double t2701;
  double t2712;
  double t2890;
  double t2931;
  double t2933;
  double t3239;
  double t3275;
  double t3292;
  double t4062;
  double t4063;
  double t4098;
  double t4111;
  double t4118;
  double t4121;
  double t4239;
  double t4242;
  double t4243;
  double t4260;
  double t4278;
  double t4290;
  double t774;
  double t866;
  double t2970;
  double t2979;
  double t3003;
  double t1609;
  double t1627;
  double t2810;
  double t2815;
  double t2830;
  double t1851;
  double t1914;
  double t1949;
  double t3119;
  double t3123;
  double t1801;
  double t1806;
  double t1810;
  double t1825;
  double t2371;
  double t2373;
  double t3363;
  double t3412;
  double t3438;
  double t2483;
  double t2516;
  double t3162;
  double t3191;
  double t3194;
  double t2660;
  double t2663;
  double t2688;
  double t3503;
  double t3516;
  double t2592;
  double t2613;
  double t2631;
  double t2641;
  double t2780;
  double t2805;
  double t3651;
  double t3669;
  double t3677;
  double t3682;
  double t3724;
  double t3737;
  double t3868;
  double t3883;
  double t3644;
  double t3646;
  double t2887;
  double t2963;
  double t3004;
  double t3145;
  double t3232;
  double t3299;
  double t3482;
  double t3604;
  double t3605;
  double t3954;
  double t3970;
  double t3985;
  double t4017;
  double t4019;
  double t4025;
  double t4032;
  double t4108;
  double t4127;
  double t4138;
  double t4165;
  double t4174;
  double t4191;
  double t4193;
  double t4195;
  double t4197;
  double t4204;
  double t4224;
  double t4244;
  double t4291;
  double t4305;
  double t4312;
  double t4318;
  double t4338;
  double t4883;
  double t4895;
  double t4912;
  double t3980;
  double t4033;
  double t4144;
  double t4192;
  double t4232;
  double t4306;
  double t4369;
  double t4370;
  double t4650;
  double t4653;
  double t4656;
  double t4669;
  double t4695;
  double t4729;
  double t4737;
  double t4761;
  double t4802;
  double t4806;
  double t4834;
  double t4840;
  double t4855;
  double t4856;
  double t4865;
  double t4868;
  double t4871;
  double t4918;
  double t4956;
  double t4960;
  double t4968;
  double t4976;
  double t4983;
  double t4988;
  double t4412;
  double t4415;
  double t4421;
  double t4435;
  double t1696;
  double t1838;
  double t2340;
  double t2351;
  double t5045;
  double t5048;
  double t5050;
  double t5055;
  double t5353;
  double t5357;
  double t4989;
  double t4995;
  double t4454;
  double t4483;
  double t4493;
  double t4511;
  double t2549;
  double t2654;
  double t2728;
  double t2755;
  double t5100;
  double t5128;
  double t5129;
  double t5138;
  double t5566;
  double t5571;
  double t5065;
  double t5082;
  t1377 = Cos(var2[3]);
  t1113 = Cos(var2[4]);
  t1221 = Sin(var2[3]);
  t1381 = Sin(var2[4]);
  t1459 = Cos(var2[2]);
  t919 = Sin(var2[2]);
  t1376 = -1.*t1113*t1221;
  t1392 = -1.*t1377*t1381;
  t1393 = t1376 + t1392;
  t1457 = t919*t1393;
  t1462 = t1377*t1113;
  t1463 = -1.*t1221*t1381;
  t1464 = t1462 + t1463;
  t1502 = t1459*t1464;
  t1527 = t1457 + t1502;
  t1699 = -1.*t1113;
  t1707 = 1. + t1699;
  t1782 = 0.4*t1707;
  t1787 = 0.64*t1113;
  t1788 = t1782 + t1787;
  t2387 = Cos(var2[5]);
  t2380 = Cos(var2[6]);
  t2382 = Sin(var2[5]);
  t2411 = Sin(var2[6]);
  t2386 = -1.*t2380*t2382;
  t2415 = -1.*t2387*t2411;
  t2423 = t2386 + t2415;
  t2426 = t919*t2423;
  t2432 = t2387*t2380;
  t2437 = -1.*t2382*t2411;
  t2447 = t2432 + t2437;
  t2449 = t1459*t2447;
  t2466 = t2426 + t2449;
  t2558 = -1.*t2380;
  t2560 = 1. + t2558;
  t2562 = 0.4*t2560;
  t2568 = 0.64*t2380;
  t2579 = t2562 + t2568;
  t1628 = t1459*t1377;
  t1642 = -1.*t919*t1221;
  t1676 = t1628 + t1642;
  t2286 = t1113*t1221;
  t2305 = t1377*t1381;
  t2322 = t2286 + t2305;
  t2327 = t1459*t2322;
  t2328 = t919*t1464;
  t2332 = t2327 + t2328;
  t2519 = t1459*t2387;
  t2520 = -1.*t919*t2382;
  t2544 = t2519 + t2520;
  t2691 = t2380*t2382;
  t2694 = t2387*t2411;
  t2695 = t2691 + t2694;
  t2699 = t1459*t2695;
  t2701 = t919*t2447;
  t2712 = t2699 + t2701;
  t2890 = t1377*t919;
  t2931 = t1459*t1221;
  t2933 = t2890 + t2931;
  t3239 = t2387*t919;
  t3275 = t1459*t2382;
  t3292 = t3239 + t3275;
  t4062 = t1788*t1221;
  t4063 = 0.24*t1377*t1381;
  t4098 = t4062 + t4063;
  t4111 = t1377*t1788;
  t4118 = -0.24*t1221*t1381;
  t4121 = t4111 + t4118;
  t4239 = t2579*t2382;
  t4242 = 0.24*t2387*t2411;
  t4243 = t4239 + t4242;
  t4260 = t2387*t2579;
  t4278 = -0.24*t2382*t2411;
  t4290 = t4260 + t4278;
  t774 = -1.*var1[4];
  t866 = var3[4] + t774;
  t2970 = t1459*t1393;
  t2979 = -1.*t919*t1464;
  t3003 = t2970 + t2979;
  t1609 = -1.*var1[3];
  t1627 = var3[3] + t1609;
  t2810 = -1.*t1377*t919;
  t2815 = -1.*t1459*t1221;
  t2830 = t2810 + t2815;
  t1851 = t1788*t1381;
  t1914 = -0.24*t1113*t1381;
  t1949 = t1851 + t1914;
  t3119 = -1.*t919*t2322;
  t3123 = t3119 + t1502;
  t1801 = t1788*t1113;
  t1806 = Power(t1381,2);
  t1810 = 0.24*t1806;
  t1825 = t1801 + t1810;
  t2371 = -1.*var1[6];
  t2373 = var3[6] + t2371;
  t3363 = t1459*t2423;
  t3412 = -1.*t919*t2447;
  t3438 = t3363 + t3412;
  t2483 = -1.*var1[5];
  t2516 = var3[5] + t2483;
  t3162 = -1.*t2387*t919;
  t3191 = -1.*t1459*t2382;
  t3194 = t3162 + t3191;
  t2660 = t2579*t2411;
  t2663 = -0.24*t2380*t2411;
  t2688 = t2660 + t2663;
  t3503 = -1.*t919*t2695;
  t3516 = t3503 + t2449;
  t2592 = t2579*t2380;
  t2613 = Power(t2411,2);
  t2631 = 0.24*t2613;
  t2641 = t2592 + t2631;
  t2780 = -1.*var1[1];
  t2805 = var3[1] + t2780;
  t3651 = Power(t1459,2);
  t3669 = 12.*t3651;
  t3677 = Power(t919,2);
  t3682 = 12.*t3677;
  t3724 = Power(t1676,2);
  t3737 = 6.8*t3724;
  t3868 = Power(t2544,2);
  t3883 = 6.8*t3868;
  t3644 = -1.*var1[0];
  t3646 = var3[0] + t3644;
  t2887 = 6.8*t2830*t1676;
  t2963 = 6.8*t2933*t1676;
  t3004 = 3.2*t1527*t3003;
  t3145 = 3.2*t3123*t2332;
  t3232 = 6.8*t3194*t2544;
  t3299 = 6.8*t3292*t2544;
  t3482 = 3.2*t2466*t3438;
  t3604 = 3.2*t3516*t2712;
  t3605 = t2887 + t2963 + t3004 + t3145 + t3232 + t3299 + t3482 + t3604;
  t3954 = -1.*var1[2];
  t3970 = var3[2] + t3954;
  t3985 = Power(t1377,2);
  t4017 = 0.11*t3985;
  t4019 = Power(t1221,2);
  t4025 = 0.11*t4019;
  t4032 = t4017 + t4025;
  t4108 = -1.*t4098*t1464;
  t4127 = -1.*t1393*t4121;
  t4138 = t4108 + t4127;
  t4165 = t4098*t2322;
  t4174 = t1464*t4121;
  t4191 = t4165 + t4174;
  t4193 = Power(t2387,2);
  t4195 = 0.11*t4193;
  t4197 = Power(t2382,2);
  t4204 = 0.11*t4197;
  t4224 = t4195 + t4204;
  t4244 = -1.*t4243*t2447;
  t4291 = -1.*t2423*t4290;
  t4305 = t4244 + t4291;
  t4312 = t4243*t2695;
  t4318 = t2447*t4290;
  t4338 = t4312 + t4318;
  t4883 = -1.*t1459*t1377;
  t4895 = t919*t1221;
  t4912 = t4883 + t4895;
  t3980 = 2.88*t1459;
  t4033 = 6.8*t1676*t4032;
  t4144 = 3.2*t2332*t4138;
  t4192 = 3.2*t1527*t4191;
  t4232 = 6.8*t2544*t4224;
  t4306 = 3.2*t2712*t4305;
  t4369 = 3.2*t2466*t4338;
  t4370 = t3980 + t4033 + t4144 + t4192 + t4232 + t4306 + t4369;
  t4650 = -2.88*t919;
  t4653 = 6.8*t2830*t4032;
  t4656 = 3.2*t3123*t4138;
  t4669 = 3.2*t3003*t4191;
  t4695 = 6.8*t3194*t4224;
  t4729 = 3.2*t3516*t4305;
  t4737 = 3.2*t3438*t4338;
  t4761 = t4650 + t4653 + t4656 + t4669 + t4695 + t4729 + t4737;
  t4802 = 0.4*t1707*t1676;
  t4806 = -0.4*t2830*t1381;
  t4834 = t1113*t1676;
  t4840 = t2830*t1381;
  t4855 = t4834 + t4840;
  t4856 = 0.8*t4855;
  t4865 = t4802 + t4806 + t4856;
  t4868 = -1.*var4[0]*t4865;
  t4871 = 0.4*t1707*t2830;
  t4918 = -0.4*t4912*t1381;
  t4956 = t1113*t2830;
  t4960 = t4912*t1381;
  t4968 = t4956 + t4960;
  t4976 = 0.8*t4968;
  t4983 = t4871 + t4918 + t4976;
  t4988 = -1.*var4[2]*t4983;
  t4412 = 0.748*t2830;
  t4415 = 3.2*t1949*t3123;
  t4421 = 3.2*t1825*t3003;
  t4435 = t4412 + t4415 + t4421;
  t1696 = 0.748*t1676;
  t1838 = 3.2*t1825*t1527;
  t2340 = 3.2*t1949*t2332;
  t2351 = t1696 + t1838 + t2340;
  t5045 = 0.748*t4032;
  t5048 = 3.2*t1949*t4138;
  t5050 = 3.2*t1825*t4191;
  t5055 = 0.67 + t5045 + t5048 + t5050;
  t5353 = 0.768*t1825;
  t5357 = 0.2 + t5353;
  t4989 = 0.768*t4191;
  t4995 = 0.2 + t4989;
  t4454 = 0.748*t3194;
  t4483 = 3.2*t2688*t3516;
  t4493 = 3.2*t2641*t3438;
  t4511 = t4454 + t4483 + t4493;
  t2549 = 0.748*t2544;
  t2654 = 3.2*t2641*t2466;
  t2728 = 3.2*t2688*t2712;
  t2755 = t2549 + t2654 + t2728;
  t5100 = 0.748*t4224;
  t5128 = 3.2*t2688*t4305;
  t5129 = 3.2*t2641*t4338;
  t5138 = 0.67 + t5100 + t5128 + t5129;
  t5566 = 0.768*t2641;
  t5571 = 0.2 + t5566;
  t5065 = 0.768*t4338;
  t5082 = 0.2 + t5065;
  p_output1[0]=t1627*t2351 + 0.768*t2373*t2466 + t2516*t2755 + t2805*t3605 + t3646*(3.2*Power(t1527,2) + 3.2*Power(t2332,2) + 3.2*Power(t2466,2) + 3.2*Power(t2712,2) + 6.8*Power(t2933,2) + 6.8*Power(t3292,2) + t3669 + t3682 + t3737 + t3883) + t3970*t4370 + 0.768*t1527*t866 - 1.*var4[0];
  p_output1[1]=0.768*t2373*t3438 + t3605*t3646 + t2805*(6.8*Power(t2830,2) + 3.2*Power(t3003,2) + 3.2*Power(t3123,2) + 6.8*Power(t3194,2) + 3.2*Power(t3438,2) + 3.2*Power(t3516,2) + t3669 + t3682 + t3737 + t3883) + t1627*t4435 + t2516*t4511 + t3970*t4761 + 0.768*t3003*t866 - 1.*var4[2];
  p_output1[2]=t3970*(3.3612 + 6.8*Power(t4032,2) + 3.2*Power(t4138,2) + 3.2*Power(t4191,2) + 6.8*Power(t4224,2) + 3.2*Power(t4305,2) + 3.2*Power(t4338,2)) + t3646*t4370 + t2805*t4761 + t4868 + t4988 + t1627*t5055 + t2373*t5082 + t2516*t5138 + t4995*t866;
  p_output1[3]=t1627*(1.58228 + 3.2*Power(t1825,2) + 3.2*Power(t1949,2)) + t2351*t3646 + t2805*t4435 + t4868 + t4988 + t3970*t5055 + t5357*t866;
  p_output1[4]=0.768*t2805*t3003 + 0.768*t1527*t3646 + t3970*t4995 + t1627*t5357 + 1.2143199999999998*t866 - 1.*(-0.4*t1113*t1676 + 0.4*t1381*t2933 + 0.8*(-1.*t1381*t2933 + t4834))*var4[0] - 1.*(0.4*t1381*t1676 - 0.4*t1113*t2830 + 0.8*(-1.*t1381*t1676 + t4956))*var4[2];
  p_output1[5]=t2516*(1.58228 + 3.2*Power(t2641,2) + 3.2*Power(t2688,2)) + t2755*t3646 + t2805*t4511 + t3970*t5138 + t2373*t5571;
  p_output1[6]=1.2143199999999998*t2373 + 0.768*t2805*t3438 + 0.768*t2466*t3646 + t3970*t5082 + t2516*t5571;
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
