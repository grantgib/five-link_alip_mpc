/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:55:07 GMT-04:00
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
  double t2653;
  double t2641;
  double t2645;
  double t2656;
  double t2769;
  double t2626;
  double t2646;
  double t2717;
  double t2723;
  double t2755;
  double t2822;
  double t2836;
  double t2874;
  double t2878;
  double t2890;
  double t2968;
  double t2973;
  double t2982;
  double t2983;
  double t2987;
  double t3438;
  double t3358;
  double t3388;
  double t3442;
  double t3425;
  double t3446;
  double t3457;
  double t3464;
  double t3481;
  double t3489;
  double t3499;
  double t3517;
  double t3519;
  double t3623;
  double t3628;
  double t3650;
  double t3662;
  double t3669;
  double t2942;
  double t2949;
  double t2954;
  double t3135;
  double t3143;
  double t3191;
  double t3205;
  double t3212;
  double t3214;
  double t3558;
  double t3581;
  double t3597;
  double t3838;
  double t3840;
  double t3846;
  double t3849;
  double t3857;
  double t3874;
  double t4003;
  double t4007;
  double t4026;
  double t4228;
  double t4247;
  double t4284;
  double t5767;
  double t5811;
  double t5884;
  double t5904;
  double t5905;
  double t5914;
  double t6140;
  double t6144;
  double t6182;
  double t6198;
  double t6202;
  double t6204;
  double t1870;
  double t2453;
  double t4092;
  double t4101;
  double t4102;
  double t2914;
  double t2933;
  double t3945;
  double t3967;
  double t3977;
  double t3127;
  double t3129;
  double t3133;
  double t4113;
  double t4144;
  double t3002;
  double t3036;
  double t3061;
  double t3085;
  double t3269;
  double t3326;
  double t4334;
  double t4392;
  double t4403;
  double t3542;
  double t3549;
  double t4148;
  double t4177;
  double t4205;
  double t3781;
  double t3808;
  double t3828;
  double t4456;
  double t4471;
  double t3673;
  double t3716;
  double t3732;
  double t3757;
  double t3920;
  double t3942;
  double t4681;
  double t4757;
  double t4765;
  double t4780;
  double t4833;
  double t4834;
  double t5025;
  double t5054;
  double t4627;
  double t4674;
  double t3990;
  double t4043;
  double t4105;
  double t4146;
  double t4213;
  double t4321;
  double t4420;
  double t4474;
  double t4487;
  double t5459;
  double t5501;
  double t5590;
  double t5593;
  double t5595;
  double t5647;
  double t5681;
  double t5903;
  double t5977;
  double t5991;
  double t6009;
  double t6011;
  double t6025;
  double t6040;
  double t6047;
  double t6092;
  double t6099;
  double t6104;
  double t6192;
  double t6209;
  double t6223;
  double t6253;
  double t6279;
  double t6289;
  double t6865;
  double t6868;
  double t6885;
  double t5558;
  double t5734;
  double t5996;
  double t6032;
  double t6135;
  double t6224;
  double t6301;
  double t6302;
  double t6699;
  double t6706;
  double t6707;
  double t6713;
  double t6714;
  double t6719;
  double t6734;
  double t6747;
  double t6785;
  double t6787;
  double t6790;
  double t6799;
  double t6806;
  double t6814;
  double t6831;
  double t6837;
  double t6845;
  double t6891;
  double t6914;
  double t6935;
  double t6941;
  double t6954;
  double t6971;
  double t7006;
  double t6395;
  double t6403;
  double t6422;
  double t6426;
  double t2964;
  double t3111;
  double t3242;
  double t3247;
  double t7032;
  double t7036;
  double t7058;
  double t7104;
  double t7375;
  double t7387;
  double t7008;
  double t7014;
  double t6468;
  double t6480;
  double t6502;
  double t6506;
  double t3606;
  double t3765;
  double t3876;
  double t3887;
  double t7144;
  double t7182;
  double t7188;
  double t7192;
  double t7686;
  double t7697;
  double t7112;
  double t7122;
  t2653 = Cos(var2[3]);
  t2641 = Cos(var2[4]);
  t2645 = Sin(var2[3]);
  t2656 = Sin(var2[4]);
  t2769 = Cos(var2[2]);
  t2626 = Sin(var2[2]);
  t2646 = -1.*t2641*t2645;
  t2717 = -1.*t2653*t2656;
  t2723 = t2646 + t2717;
  t2755 = t2626*t2723;
  t2822 = t2653*t2641;
  t2836 = -1.*t2645*t2656;
  t2874 = t2822 + t2836;
  t2878 = t2769*t2874;
  t2890 = t2755 + t2878;
  t2968 = -1.*t2641;
  t2973 = 1. + t2968;
  t2982 = 0.4*t2973;
  t2983 = 0.64*t2641;
  t2987 = t2982 + t2983;
  t3438 = Cos(var2[5]);
  t3358 = Cos(var2[6]);
  t3388 = Sin(var2[5]);
  t3442 = Sin(var2[6]);
  t3425 = -1.*t3358*t3388;
  t3446 = -1.*t3438*t3442;
  t3457 = t3425 + t3446;
  t3464 = t2626*t3457;
  t3481 = t3438*t3358;
  t3489 = -1.*t3388*t3442;
  t3499 = t3481 + t3489;
  t3517 = t2769*t3499;
  t3519 = t3464 + t3517;
  t3623 = -1.*t3358;
  t3628 = 1. + t3623;
  t3650 = 0.4*t3628;
  t3662 = 0.64*t3358;
  t3669 = t3650 + t3662;
  t2942 = t2769*t2653;
  t2949 = -1.*t2626*t2645;
  t2954 = t2942 + t2949;
  t3135 = t2641*t2645;
  t3143 = t2653*t2656;
  t3191 = t3135 + t3143;
  t3205 = t2769*t3191;
  t3212 = t2626*t2874;
  t3214 = t3205 + t3212;
  t3558 = t2769*t3438;
  t3581 = -1.*t2626*t3388;
  t3597 = t3558 + t3581;
  t3838 = t3358*t3388;
  t3840 = t3438*t3442;
  t3846 = t3838 + t3840;
  t3849 = t2769*t3846;
  t3857 = t2626*t3499;
  t3874 = t3849 + t3857;
  t4003 = t2653*t2626;
  t4007 = t2769*t2645;
  t4026 = t4003 + t4007;
  t4228 = t3438*t2626;
  t4247 = t2769*t3388;
  t4284 = t4228 + t4247;
  t5767 = t2987*t2645;
  t5811 = 0.24*t2653*t2656;
  t5884 = t5767 + t5811;
  t5904 = t2653*t2987;
  t5905 = -0.24*t2645*t2656;
  t5914 = t5904 + t5905;
  t6140 = t3669*t3388;
  t6144 = 0.24*t3438*t3442;
  t6182 = t6140 + t6144;
  t6198 = t3438*t3669;
  t6202 = -0.24*t3388*t3442;
  t6204 = t6198 + t6202;
  t1870 = -1.*var1[6];
  t2453 = var3[4] + t1870;
  t4092 = t2769*t2723;
  t4101 = -1.*t2626*t2874;
  t4102 = t4092 + t4101;
  t2914 = -1.*var1[5];
  t2933 = var3[3] + t2914;
  t3945 = -1.*t2653*t2626;
  t3967 = -1.*t2769*t2645;
  t3977 = t3945 + t3967;
  t3127 = t2987*t2656;
  t3129 = -0.24*t2641*t2656;
  t3133 = t3127 + t3129;
  t4113 = -1.*t2626*t3191;
  t4144 = t4113 + t2878;
  t3002 = t2987*t2641;
  t3036 = Power(t2656,2);
  t3061 = 0.24*t3036;
  t3085 = t3002 + t3061;
  t3269 = -1.*var1[4];
  t3326 = var3[6] + t3269;
  t4334 = t2769*t3457;
  t4392 = -1.*t2626*t3499;
  t4403 = t4334 + t4392;
  t3542 = -1.*var1[3];
  t3549 = var3[5] + t3542;
  t4148 = -1.*t3438*t2626;
  t4177 = -1.*t2769*t3388;
  t4205 = t4148 + t4177;
  t3781 = t3669*t3442;
  t3808 = -0.24*t3358*t3442;
  t3828 = t3781 + t3808;
  t4456 = -1.*t2626*t3846;
  t4471 = t4456 + t3517;
  t3673 = t3669*t3358;
  t3716 = Power(t3442,2);
  t3732 = 0.24*t3716;
  t3757 = t3673 + t3732;
  t3920 = -1.*var1[1];
  t3942 = var3[1] + t3920;
  t4681 = Power(t2769,2);
  t4757 = 12.*t4681;
  t4765 = Power(t2626,2);
  t4780 = 12.*t4765;
  t4833 = Power(t2954,2);
  t4834 = 6.8*t4833;
  t5025 = Power(t3597,2);
  t5054 = 6.8*t5025;
  t4627 = -1.*var1[0];
  t4674 = var3[0] + t4627;
  t3990 = 6.8*t3977*t2954;
  t4043 = 6.8*t4026*t2954;
  t4105 = 3.2*t2890*t4102;
  t4146 = 3.2*t4144*t3214;
  t4213 = 6.8*t4205*t3597;
  t4321 = 6.8*t4284*t3597;
  t4420 = 3.2*t3519*t4403;
  t4474 = 3.2*t4471*t3874;
  t4487 = t3990 + t4043 + t4105 + t4146 + t4213 + t4321 + t4420 + t4474;
  t5459 = -1.*var1[2];
  t5501 = var3[2] + t5459;
  t5590 = Power(t2653,2);
  t5593 = 0.11*t5590;
  t5595 = Power(t2645,2);
  t5647 = 0.11*t5595;
  t5681 = t5593 + t5647;
  t5903 = -1.*t5884*t2874;
  t5977 = -1.*t2723*t5914;
  t5991 = t5903 + t5977;
  t6009 = t5884*t3191;
  t6011 = t2874*t5914;
  t6025 = t6009 + t6011;
  t6040 = Power(t3438,2);
  t6047 = 0.11*t6040;
  t6092 = Power(t3388,2);
  t6099 = 0.11*t6092;
  t6104 = t6047 + t6099;
  t6192 = -1.*t6182*t3499;
  t6209 = -1.*t3457*t6204;
  t6223 = t6192 + t6209;
  t6253 = t6182*t3846;
  t6279 = t3499*t6204;
  t6289 = t6253 + t6279;
  t6865 = -1.*t2769*t2653;
  t6868 = t2626*t2645;
  t6885 = t6865 + t6868;
  t5558 = 2.88*t2769;
  t5734 = 6.8*t2954*t5681;
  t5996 = 3.2*t3214*t5991;
  t6032 = 3.2*t2890*t6025;
  t6135 = 6.8*t3597*t6104;
  t6224 = 3.2*t3874*t6223;
  t6301 = 3.2*t3519*t6289;
  t6302 = t5558 + t5734 + t5996 + t6032 + t6135 + t6224 + t6301;
  t6699 = -2.88*t2626;
  t6706 = 6.8*t3977*t5681;
  t6707 = 3.2*t4144*t5991;
  t6713 = 3.2*t4102*t6025;
  t6714 = 6.8*t4205*t6104;
  t6719 = 3.2*t4471*t6223;
  t6734 = 3.2*t4403*t6289;
  t6747 = t6699 + t6706 + t6707 + t6713 + t6714 + t6719 + t6734;
  t6785 = 0.4*t2973*t2954;
  t6787 = -0.4*t3977*t2656;
  t6790 = t2641*t2954;
  t6799 = t3977*t2656;
  t6806 = t6790 + t6799;
  t6814 = 0.8*t6806;
  t6831 = t6785 + t6787 + t6814;
  t6837 = -1.*var4[0]*t6831;
  t6845 = 0.4*t2973*t3977;
  t6891 = -0.4*t6885*t2656;
  t6914 = t2641*t3977;
  t6935 = t6885*t2656;
  t6941 = t6914 + t6935;
  t6954 = 0.8*t6941;
  t6971 = t6845 + t6891 + t6954;
  t7006 = -1.*var4[2]*t6971;
  t6395 = 0.748*t3977;
  t6403 = 3.2*t3133*t4144;
  t6422 = 3.2*t3085*t4102;
  t6426 = t6395 + t6403 + t6422;
  t2964 = 0.748*t2954;
  t3111 = 3.2*t3085*t2890;
  t3242 = 3.2*t3133*t3214;
  t3247 = t2964 + t3111 + t3242;
  t7032 = 0.748*t5681;
  t7036 = 3.2*t3133*t5991;
  t7058 = 3.2*t3085*t6025;
  t7104 = 0.67 + t7032 + t7036 + t7058;
  t7375 = 0.768*t3085;
  t7387 = 0.2 + t7375;
  t7008 = 0.768*t6025;
  t7014 = 0.2 + t7008;
  t6468 = 0.748*t4205;
  t6480 = 3.2*t3828*t4471;
  t6502 = 3.2*t3757*t4403;
  t6506 = t6468 + t6480 + t6502;
  t3606 = 0.748*t3597;
  t3765 = 3.2*t3757*t3519;
  t3876 = 3.2*t3828*t3874;
  t3887 = t3606 + t3765 + t3876;
  t7144 = 0.748*t6104;
  t7182 = 3.2*t3828*t6223;
  t7188 = 3.2*t3757*t6289;
  t7192 = 0.67 + t7144 + t7182 + t7188;
  t7686 = 0.768*t3757;
  t7697 = 0.2 + t7686;
  t7112 = 0.768*t6289;
  t7122 = 0.2 + t7112;
  p_output1[0]=0.768*t2453*t2890 + t2933*t3247 + 0.768*t3326*t3519 + t3549*t3887 + t3942*t4487 + t4674*(3.2*Power(t2890,2) + 3.2*Power(t3214,2) + 3.2*Power(t3519,2) + 3.2*Power(t3874,2) + 6.8*Power(t4026,2) + 6.8*Power(t4284,2) + t4757 + t4780 + t4834 + t5054) + t5501*t6302 - 1.*var4[0];
  p_output1[1]=0.768*t2453*t4102 + 0.768*t3326*t4403 + t4487*t4674 + t3942*(6.8*Power(t3977,2) + 3.2*Power(t4102,2) + 3.2*Power(t4144,2) + 6.8*Power(t4205,2) + 3.2*Power(t4403,2) + 3.2*Power(t4471,2) + t4757 + t4780 + t4834 + t5054) + t2933*t6426 + t3549*t6506 + t5501*t6747 - 1.*var4[2];
  p_output1[2]=t5501*(3.3612 + 6.8*Power(t5681,2) + 3.2*Power(t5991,2) + 3.2*Power(t6025,2) + 6.8*Power(t6104,2) + 3.2*Power(t6223,2) + 3.2*Power(t6289,2)) + t4674*t6302 + t3942*t6747 + t6837 + t7006 + t2453*t7014 + t2933*t7104 + t3326*t7122 + t3549*t7192;
  p_output1[3]=t2933*(1.58228 + 3.2*Power(t3085,2) + 3.2*Power(t3133,2)) + t3247*t4674 + t3942*t6426 + t6837 + t7006 + t5501*t7104 + t2453*t7387;
  p_output1[4]=1.2143199999999998*t2453 + 0.768*t3942*t4102 + 0.768*t2890*t4674 + t5501*t7014 + t2933*t7387 - 1.*(-0.4*t2641*t2954 + 0.4*t2656*t4026 + 0.8*(-1.*t2656*t4026 + t6790))*var4[0] - 1.*(0.4*t2656*t2954 - 0.4*t2641*t3977 + 0.8*(-1.*t2656*t2954 + t6914))*var4[2];
  p_output1[5]=t3549*(1.58228 + 3.2*Power(t3757,2) + 3.2*Power(t3828,2)) + t3887*t4674 + t3942*t6506 + t5501*t7192 + t3326*t7697;
  p_output1[6]=1.2143199999999998*t3326 + 0.768*t3942*t4403 + 0.768*t3519*t4674 + t5501*t7122 + t3549*t7697;
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
