/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:50:20 GMT-04:00
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
  double t2264;
  double t840;
  double t2180;
  double t231;
  double t2287;
  double t172;
  double t2265;
  double t2266;
  double t2267;
  double t2268;
  double t2269;
  double t2364;
  double t2373;
  double t2374;
  double t2379;
  double t2380;
  double t2381;
  double t2382;
  double t2387;
  double t2388;
  double t2375;
  double t2270;
  double t2342;
  double t2343;
  double t2344;
  double t2346;
  double t2349;
  double t2352;
  double t706;
  double t2237;
  double t2245;
  double t2254;
  double t2390;
  double t2357;
  double t2398;
  double t5735;
  double t5739;
  double t5796;
  double t2376;
  double t7164;
  double t8213;
  double t8359;
  double t8383;
  double t8030;
  double t8099;
  double t8189;
  double t8384;
  double t8420;
  double t8428;
  double t9454;
  double t10085;
  double t10094;
  double t10096;
  double t9927;
  double t9931;
  double t9947;
  double t2389;
  double t2391;
  double t9577;
  double t9603;
  double t9635;
  double t9957;
  double t9995;
  double t9999;
  double t2377;
  double t2392;
  double t2393;
  double t10762;
  double t10763;
  double t10790;
  double t10806;
  double t10926;
  double t10928;
  double t10930;
  double t9196;
  double t9408;
  double t9636;
  double t9643;
  double t9752;
  double t9885;
  double t6581;
  double t12964;
  double t13129;
  double t13130;
  double t12902;
  double t12903;
  double t12944;
  double t17083;
  double t17293;
  double t17561;
  double t14743;
  double t14777;
  double t14898;
  double t11151;
  double t11558;
  double t11590;
  double t12165;
  double t12171;
  double t12179;
  double t12317;
  double t12339;
  double t12726;
  double t13237;
  double t22692;
  double t22693;
  double t18664;
  double t20738;
  double t22703;
  double t22704;
  double t22709;
  double t22710;
  double t21216;
  double t22536;
  double t22537;
  double t22550;
  double t22551;
  double t22552;
  double t22553;
  double t22562;
  double t22736;
  double t22738;
  double t22739;
  double t22744;
  double t22745;
  double t22806;
  double t22807;
  double t22813;
  double t22816;
  double t22818;
  double t22819;
  double t10084;
  double t10130;
  double t10134;
  double t10202;
  double t10348;
  double t10352;
  double t10695;
  double t10706;
  double t10745;
  double t10759;
  double t22196;
  double t22204;
  double t22530;
  double t22531;
  double t22542;
  double t22545;
  double t22546;
  double t22549;
  double t22563;
  double t22694;
  double t22702;
  double t22705;
  double t22711;
  double t22712;
  double t22717;
  double t22718;
  double t22734;
  double t22747;
  double t22752;
  double t22753;
  double t22754;
  double t22756;
  double t22757;
  double t22758;
  double t22759;
  double t22760;
  double t22761;
  double t22799;
  double t22804;
  double t22805;
  double t22825;
  double t22826;
  double t22830;
  double t7246;
  double t22889;
  double t22898;
  double t22900;
  double t22904;
  double t22905;
  double t22907;
  double t22908;
  double t22909;
  double t22915;
  double t22916;
  double t22917;
  double t22986;
  double t22987;
  double t22988;
  double t22994;
  double t22995;
  double t22996;
  double t22997;
  double t22998;
  t2264 = Cos(var1[4]);
  t840 = Sin(var1[2]);
  t2180 = Sin(var1[3]);
  t231 = Cos(var1[3]);
  t2287 = Sin(var1[4]);
  t172 = Cos(var1[2]);
  t2265 = -1.*t2264;
  t2266 = 1. + t2265;
  t2267 = 0.4*t2266;
  t2268 = 0.64*t2264;
  t2269 = t2267 + t2268;
  t2364 = t231*t2264;
  t2373 = -1.*t2180*t2287;
  t2374 = t2364 + t2373;
  t2379 = t2269*t2287;
  t2380 = -0.24*t2264*t2287;
  t2381 = t2379 + t2380;
  t2382 = t2264*t2180;
  t2387 = t231*t2287;
  t2388 = t2382 + t2387;
  t2375 = -1.*t172*t2374;
  t2270 = t2269*t2264;
  t2342 = Power(t2287,2);
  t2343 = 0.24*t2342;
  t2344 = t2270 + t2343;
  t2346 = -1.*t2264*t2180;
  t2349 = -1.*t231*t2287;
  t2352 = t2346 + t2349;
  t706 = -1.*t172*t231;
  t2237 = t840*t2180;
  t2245 = t706 + t2237;
  t2254 = -0.748*t2245;
  t2390 = -1.*t840*t2374;
  t2357 = -1.*t840*t2352;
  t2398 = t231*t840;
  t5735 = t172*t2180;
  t5739 = t2398 + t5735;
  t5796 = -0.748*t5739;
  t2376 = t2357 + t2375;
  t7164 = -1.*t172*t2352;
  t8213 = -1.*t231*t2264;
  t8359 = t2180*t2287;
  t8383 = t8213 + t8359;
  t8030 = t172*t2352;
  t8099 = t8030 + t2390;
  t8189 = -3.2*t2381*t8099;
  t8384 = t172*t8383;
  t8420 = t2357 + t8384;
  t8428 = -3.2*t2344*t8420;
  t9454 = -3.2*t2381*t2376;
  t10085 = -1.*t2269*t2287;
  t10094 = 0.24*t2264*t2287;
  t10096 = t10085 + t10094;
  t9927 = Power(t2264,2);
  t9931 = -0.24*t9927;
  t9947 = t2270 + t9931;
  t2389 = -1.*t172*t2388;
  t2391 = t2389 + t2390;
  t9577 = -1.*t840*t8383;
  t9603 = t7164 + t9577;
  t9635 = -3.2*t2344*t9603;
  t9957 = -1.*t840*t2388;
  t9995 = t172*t2374;
  t9999 = t9957 + t9995;
  t2377 = -3.2*t2344*t2376;
  t2392 = -3.2*t2381*t2391;
  t2393 = t2254 + t2377 + t2392;
  t10762 = -1.*t231*t840;
  t10763 = -1.*t172*t2180;
  t10790 = t10762 + t10763;
  t10806 = -0.748*t10790;
  t10926 = -3.2*t2381*t9999;
  t10928 = -3.2*t2344*t8099;
  t10930 = t10806 + t10926 + t10928;
  t9196 = t2254 + t8189 + t8428;
  t9408 = -0.5*var2[0]*t9196;
  t9636 = t5796 + t9454 + t9635;
  t9643 = -0.5*var2[1]*t9636;
  t9752 = t9408 + t9643;
  t9885 = var2[3]*t9752;
  t6581 = t840*t2388;
  t12964 = t231*t2269;
  t13129 = -0.24*t2180*t2287;
  t13130 = t12964 + t13129;
  t12902 = -1.*t2269*t2180;
  t12903 = -0.24*t231*t2287;
  t12944 = t12902 + t12903;
  t17083 = t2269*t2180;
  t17293 = 0.24*t231*t2287;
  t17561 = t17083 + t17293;
  t14743 = -1.*t231*t2269;
  t14777 = 0.24*t2180*t2287;
  t14898 = t14743 + t14777;
  t11151 = -3.2*t2381*t8420;
  t11558 = t172*t2388;
  t11590 = t11558 + t9577;
  t12165 = -3.2*t2344*t11590;
  t12171 = t6581 + t8384;
  t12179 = -3.2*t2344*t12171;
  t12317 = t840*t8383;
  t12339 = t8030 + t12317;
  t12726 = -3.2*t2381*t12339;
  t13237 = -1.*t2388*t13130;
  t22692 = -0.24*t2264*t2180;
  t22693 = t22692 + t12903;
  t18664 = -1.*t17561*t8383;
  t20738 = t2352*t17561;
  t22703 = 0.24*t231*t2264;
  t22704 = t22703 + t13129;
  t22709 = -0.24*t231*t2264;
  t22710 = t22709 + t14777;
  t21216 = t13130*t8383;
  t22536 = t840*t2352;
  t22537 = t22536 + t9995;
  t22550 = t12944*t2374;
  t22551 = t17561*t2374;
  t22552 = t2352*t13130;
  t22553 = t2388*t13130;
  t22562 = t22550 + t22551 + t22552 + t22553;
  t22736 = -1.*t2352*t12944;
  t22738 = -1.*t2352*t17561;
  t22739 = -1.*t2374*t13130;
  t22744 = -1.*t13130*t8383;
  t22745 = t22736 + t22738 + t22739 + t22744;
  t22806 = -3.2*t2381*t22537;
  t22807 = -3.2*t2344*t12339;
  t22813 = t10806 + t22806 + t22807;
  t22816 = -3.2*t2344*t22562;
  t22818 = -3.2*t2381*t22745;
  t22819 = t22816 + t22818;
  t10084 = -3.2*t9947*t9999;
  t10130 = -3.2*t10096*t8099;
  t10134 = t10084 + t8189 + t10130 + t8428;
  t10202 = -0.5*var2[0]*t10134;
  t10348 = -3.2*t10096*t2376;
  t10352 = -3.2*t9947*t2391;
  t10695 = t9454 + t10348 + t10352 + t9635;
  t10706 = -0.5*var2[1]*t10695;
  t10745 = t10202 + t10706;
  t10759 = var2[3]*t10745;
  t22196 = -3.2*t9947*t8099;
  t22204 = -3.2*t10096*t8420;
  t22530 = t22196 + t11151 + t22204 + t12165;
  t22531 = -0.5*var2[1]*t22530;
  t22542 = -3.2*t9947*t22537;
  t22545 = -3.2*t10096*t12339;
  t22546 = t22542 + t12179 + t12726 + t22545;
  t22549 = -0.5*var2[0]*t22546;
  t22563 = -3.2*t10096*t22562;
  t22694 = -1.*t22693*t2374;
  t22702 = -1.*t2352*t13130;
  t22705 = -1.*t2352*t22704;
  t22711 = -1.*t2352*t22710;
  t22712 = -1.*t12944*t8383;
  t22717 = -1.*t22693*t8383;
  t22718 = t22694 + t22702 + t13237 + t22705 + t22711 + t22712 + t22717 + t18664;
  t22734 = -3.2*t2381*t22718;
  t22747 = -3.2*t9947*t22745;
  t22752 = t2352*t12944;
  t22753 = t2352*t22693;
  t22754 = t22693*t2388;
  t22756 = t2374*t13130;
  t22757 = t2374*t22704;
  t22758 = t2374*t22710;
  t22759 = t22752 + t22753 + t20738 + t22754 + t22756 + t22757 + t22758 + t21216;
  t22760 = -3.2*t2344*t22759;
  t22761 = t22563 + t22734 + t22747 + t22760;
  t22799 = -0.5*var2[2]*t22761;
  t22804 = t22531 + t22549 + t22799;
  t22805 = var2[3]*t22804;
  t22825 = -1.*t2269*t2264;
  t22826 = 0.24*t9927;
  t22830 = t22825 + t22826;
  t7246 = t840*t2374;
  t22889 = t11558 + t7246;
  t22898 = -1.*t17561*t2374;
  t22900 = t22898 + t22702;
  t22904 = t17561*t2388;
  t22905 = t22904 + t22756;
  t22907 = t22693*t2374;
  t22908 = t2388*t22704;
  t22909 = t22907 + t22551 + t22552 + t22908;
  t22915 = -1.*t2352*t22693;
  t22916 = -1.*t2374*t22704;
  t22917 = t22915 + t22738 + t22916 + t22744;
  t22986 = -3.2*t10096*t22537;
  t22987 = -3.2*t9947*t22889;
  t22988 = t22806 + t22986 + t22987 + t22807;
  t22994 = -3.2*t9947*t22900;
  t22995 = -3.2*t10096*t22905;
  t22996 = -3.2*t2344*t22909;
  t22997 = -3.2*t2381*t22917;
  t22998 = t22994 + t22995 + t22996 + t22997;
  p_output1[0]=(-0.5*t2393*var2[0] - 0.5*(t5796 - 3.2*t2381*(t2375 + t6581) - 3.2*t2344*(t7164 + t7246))*var2[1])*var2[3];
  p_output1[1]=t9885;
  p_output1[2]=t10759;
  p_output1[3]=-0.5*t10930*var2[3];
  p_output1[4]=-0.5*t2393*var2[3];
  p_output1[5]=-0.5*t10930*var2[0] - 0.5*t2393*var2[1];
  p_output1[6]=t9885;
  p_output1[7]=(-0.5*(t12179 + t12726 + t2254)*var2[0] - 0.5*(t11151 + t12165 + t5796)*var2[1] - 0.5*(-3.2*t2344*(t20738 + t21216 + 2.*t12944*t2352 + 2.*t13130*t2374 + t14898*t2374 + t12944*t2388) - 3.2*t2381*(t13237 + t18664 - 2.*t13130*t2352 - 1.*t14898*t2352 - 1.*t12944*t2374 - 2.*t12944*t8383))*var2[2])*var2[3];
  p_output1[8]=t22805;
  p_output1[9]=-0.5*t22813*var2[3];
  p_output1[10]=-0.5*t9196*var2[3];
  p_output1[11]=-0.5*t22819*var2[3];
  p_output1[12]=-0.5*t22813*var2[0] - 0.5*t9196*var2[1] - 0.5*t22819*var2[2];
  p_output1[13]=t10759;
  p_output1[14]=t22805;
  p_output1[15]=var2[3]*(-0.5*(t12179 - 6.4*t10096*t12339 + t12726 - 3.2*t22537*t22830 - 3.2*t10096*t22889 - 6.4*t22537*t9947)*var2[0] - 0.5*(t11151 + t12165 - 3.2*t22830*t8099 - 6.4*t10096*t8420 - 6.4*t8099*t9947 - 3.2*t10096*t9999)*var2[1] - 0.5*(-3.2*t10096*t22900 - 3.2*t22830*t22905 - 6.4*t10096*t22909 - 3.2*t2344*(t20738 + t21216 + t22754 + t22758 + 2.*t22693*t2352 + 2.*t22704*t2374) - 3.2*t2381*(t13237 + t18664 + t22694 + t22711 - 2.*t22704*t2352 - 2.*t22693*t8383) - 6.4*t22917*t9947)*var2[2] - 0.5*(-6.4*Power(t10096,2) - 6.4*t22830*t2344 - 6.4*t10096*t2381 - 6.4*Power(t9947,2))*var2[3] + 0.384*t22830*var2[4]);
  p_output1[16]=-0.5*t22988*var2[3];
  p_output1[17]=-0.5*t10134*var2[3];
  p_output1[18]=-0.5*t22998*var2[3];
  p_output1[19]=-0.5*t22988*var2[0] - 0.5*t10134*var2[1] - 0.5*t22998*var2[2] - 1.*(-6.4*t10096*t2344 - 6.4*t2381*t9947)*var2[3] + 0.384*t10096*var2[4];
  p_output1[20]=0.384*t10096*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec4_five_link_walker.hh"

namespace RightStance
{

void J_Ce3_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
