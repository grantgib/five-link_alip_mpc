/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:04:31 GMT-04:00
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
  double t2379;
  double t2279;
  double t2334;
  double t2400;
  double t2474;
  double t2235;
  double t2335;
  double t2414;
  double t2463;
  double t2472;
  double t2496;
  double t2518;
  double t2588;
  double t2656;
  double t2662;
  double t2865;
  double t2866;
  double t2867;
  double t2868;
  double t2869;
  double t2990;
  double t2958;
  double t2959;
  double t2995;
  double t2966;
  double t2997;
  double t3099;
  double t3111;
  double t3141;
  double t3143;
  double t3144;
  double t3154;
  double t3157;
  double t3275;
  double t3285;
  double t3287;
  double t3295;
  double t3297;
  double t2747;
  double t2764;
  double t2788;
  double t2904;
  double t2906;
  double t2909;
  double t2911;
  double t2923;
  double t2927;
  double t3217;
  double t3220;
  double t3221;
  double t3374;
  double t3377;
  double t3394;
  double t3395;
  double t3425;
  double t3427;
  double t3532;
  double t3552;
  double t3556;
  double t3569;
  double t3570;
  double t3571;
  double t3874;
  double t3879;
  double t3881;
  double t3930;
  double t3938;
  double t3952;
  double t4103;
  double t4107;
  double t4111;
  double t4151;
  double t4155;
  double t4158;
  double t2061;
  double t2180;
  double t3558;
  double t3559;
  double t3560;
  double t2681;
  double t2699;
  double t3482;
  double t3513;
  double t3522;
  double t2891;
  double t2898;
  double t2903;
  double t3562;
  double t3563;
  double t2870;
  double t2877;
  double t2879;
  double t2882;
  double t2945;
  double t2950;
  double t3574;
  double t3575;
  double t3576;
  double t3188;
  double t3189;
  double t3565;
  double t3566;
  double t3567;
  double t3339;
  double t3368;
  double t3373;
  double t3578;
  double t3579;
  double t3331;
  double t3333;
  double t3334;
  double t3335;
  double t3439;
  double t3468;
  double t3585;
  double t3586;
  double t3587;
  double t3588;
  double t3591;
  double t3592;
  double t3653;
  double t3658;
  double t3583;
  double t3584;
  double t3531;
  double t3557;
  double t3561;
  double t3564;
  double t3568;
  double t3572;
  double t3577;
  double t3580;
  double t3581;
  double t3732;
  double t3735;
  double t3745;
  double t3746;
  double t3764;
  double t3787;
  double t3793;
  double t3909;
  double t3964;
  double t3968;
  double t3986;
  double t4007;
  double t4014;
  double t4055;
  double t4059;
  double t4064;
  double t4078;
  double t4085;
  double t4136;
  double t4174;
  double t4176;
  double t4200;
  double t4214;
  double t4223;
  double t6726;
  double t6727;
  double t6728;
  double t3741;
  double t3870;
  double t3974;
  double t4029;
  double t4102;
  double t4187;
  double t4229;
  double t4236;
  double t5263;
  double t5322;
  double t5345;
  double t5395;
  double t5431;
  double t5526;
  double t5627;
  double t5693;
  double t6713;
  double t6714;
  double t6715;
  double t6716;
  double t6717;
  double t6718;
  double t6723;
  double t6724;
  double t6725;
  double t6729;
  double t6773;
  double t6774;
  double t6775;
  double t6776;
  double t6777;
  double t6778;
  double t4262;
  double t4297;
  double t4304;
  double t4305;
  double t2801;
  double t2887;
  double t2932;
  double t2933;
  double t6782;
  double t6783;
  double t6784;
  double t6785;
  double t6812;
  double t6813;
  double t6779;
  double t6780;
  double t4422;
  double t4449;
  double t4514;
  double t4550;
  double t3222;
  double t3337;
  double t3433;
  double t3435;
  double t6790;
  double t6791;
  double t6792;
  double t6793;
  double t6847;
  double t6848;
  double t6787;
  double t6788;
  t2379 = Cos(var2[3]);
  t2279 = Cos(var2[4]);
  t2334 = Sin(var2[3]);
  t2400 = Sin(var2[4]);
  t2474 = Cos(var2[2]);
  t2235 = Sin(var2[2]);
  t2335 = -1.*t2279*t2334;
  t2414 = -1.*t2379*t2400;
  t2463 = t2335 + t2414;
  t2472 = t2235*t2463;
  t2496 = t2379*t2279;
  t2518 = -1.*t2334*t2400;
  t2588 = t2496 + t2518;
  t2656 = t2474*t2588;
  t2662 = t2472 + t2656;
  t2865 = -1.*t2279;
  t2866 = 1. + t2865;
  t2867 = 0.4*t2866;
  t2868 = 0.64*t2279;
  t2869 = t2867 + t2868;
  t2990 = Cos(var2[5]);
  t2958 = Cos(var2[6]);
  t2959 = Sin(var2[5]);
  t2995 = Sin(var2[6]);
  t2966 = -1.*t2958*t2959;
  t2997 = -1.*t2990*t2995;
  t3099 = t2966 + t2997;
  t3111 = t2235*t3099;
  t3141 = t2990*t2958;
  t3143 = -1.*t2959*t2995;
  t3144 = t3141 + t3143;
  t3154 = t2474*t3144;
  t3157 = t3111 + t3154;
  t3275 = -1.*t2958;
  t3285 = 1. + t3275;
  t3287 = 0.4*t3285;
  t3295 = 0.64*t2958;
  t3297 = t3287 + t3295;
  t2747 = t2474*t2379;
  t2764 = -1.*t2235*t2334;
  t2788 = t2747 + t2764;
  t2904 = t2279*t2334;
  t2906 = t2379*t2400;
  t2909 = t2904 + t2906;
  t2911 = t2474*t2909;
  t2923 = t2235*t2588;
  t2927 = t2911 + t2923;
  t3217 = t2474*t2990;
  t3220 = -1.*t2235*t2959;
  t3221 = t3217 + t3220;
  t3374 = t2958*t2959;
  t3377 = t2990*t2995;
  t3394 = t3374 + t3377;
  t3395 = t2474*t3394;
  t3425 = t2235*t3144;
  t3427 = t3395 + t3425;
  t3532 = t2379*t2235;
  t3552 = t2474*t2334;
  t3556 = t3532 + t3552;
  t3569 = t2990*t2235;
  t3570 = t2474*t2959;
  t3571 = t3569 + t3570;
  t3874 = t2869*t2334;
  t3879 = 0.24*t2379*t2400;
  t3881 = t3874 + t3879;
  t3930 = t2379*t2869;
  t3938 = -0.24*t2334*t2400;
  t3952 = t3930 + t3938;
  t4103 = t3297*t2959;
  t4107 = 0.24*t2990*t2995;
  t4111 = t4103 + t4107;
  t4151 = t2990*t3297;
  t4155 = -0.24*t2959*t2995;
  t4158 = t4151 + t4155;
  t2061 = -1.*var1[4];
  t2180 = var3[4] + t2061;
  t3558 = t2474*t2463;
  t3559 = -1.*t2235*t2588;
  t3560 = t3558 + t3559;
  t2681 = -1.*var1[3];
  t2699 = var3[3] + t2681;
  t3482 = -1.*t2379*t2235;
  t3513 = -1.*t2474*t2334;
  t3522 = t3482 + t3513;
  t2891 = t2869*t2400;
  t2898 = -0.24*t2279*t2400;
  t2903 = t2891 + t2898;
  t3562 = -1.*t2235*t2909;
  t3563 = t3562 + t2656;
  t2870 = t2869*t2279;
  t2877 = Power(t2400,2);
  t2879 = 0.24*t2877;
  t2882 = t2870 + t2879;
  t2945 = -1.*var1[6];
  t2950 = var3[6] + t2945;
  t3574 = t2474*t3099;
  t3575 = -1.*t2235*t3144;
  t3576 = t3574 + t3575;
  t3188 = -1.*var1[5];
  t3189 = var3[5] + t3188;
  t3565 = -1.*t2990*t2235;
  t3566 = -1.*t2474*t2959;
  t3567 = t3565 + t3566;
  t3339 = t3297*t2995;
  t3368 = -0.24*t2958*t2995;
  t3373 = t3339 + t3368;
  t3578 = -1.*t2235*t3394;
  t3579 = t3578 + t3154;
  t3331 = t3297*t2958;
  t3333 = Power(t2995,2);
  t3334 = 0.24*t3333;
  t3335 = t3331 + t3334;
  t3439 = -1.*var1[1];
  t3468 = var3[1] + t3439;
  t3585 = Power(t2474,2);
  t3586 = 12.*t3585;
  t3587 = Power(t2235,2);
  t3588 = 12.*t3587;
  t3591 = Power(t2788,2);
  t3592 = 6.8*t3591;
  t3653 = Power(t3221,2);
  t3658 = 6.8*t3653;
  t3583 = -1.*var1[0];
  t3584 = var3[0] + t3583;
  t3531 = 6.8*t3522*t2788;
  t3557 = 6.8*t3556*t2788;
  t3561 = 3.2*t2662*t3560;
  t3564 = 3.2*t3563*t2927;
  t3568 = 6.8*t3567*t3221;
  t3572 = 6.8*t3571*t3221;
  t3577 = 3.2*t3157*t3576;
  t3580 = 3.2*t3579*t3427;
  t3581 = t3531 + t3557 + t3561 + t3564 + t3568 + t3572 + t3577 + t3580;
  t3732 = -1.*var1[2];
  t3735 = var3[2] + t3732;
  t3745 = Power(t2379,2);
  t3746 = 0.11*t3745;
  t3764 = Power(t2334,2);
  t3787 = 0.11*t3764;
  t3793 = t3746 + t3787;
  t3909 = -1.*t3881*t2588;
  t3964 = -1.*t2463*t3952;
  t3968 = t3909 + t3964;
  t3986 = t3881*t2909;
  t4007 = t2588*t3952;
  t4014 = t3986 + t4007;
  t4055 = Power(t2990,2);
  t4059 = 0.11*t4055;
  t4064 = Power(t2959,2);
  t4078 = 0.11*t4064;
  t4085 = t4059 + t4078;
  t4136 = -1.*t4111*t3144;
  t4174 = -1.*t3099*t4158;
  t4176 = t4136 + t4174;
  t4200 = t4111*t3394;
  t4214 = t3144*t4158;
  t4223 = t4200 + t4214;
  t6726 = -1.*t2474*t2379;
  t6727 = t2235*t2334;
  t6728 = t6726 + t6727;
  t3741 = 2.88*t2474;
  t3870 = 6.8*t2788*t3793;
  t3974 = 3.2*t2927*t3968;
  t4029 = 3.2*t2662*t4014;
  t4102 = 6.8*t3221*t4085;
  t4187 = 3.2*t3427*t4176;
  t4229 = 3.2*t3157*t4223;
  t4236 = t3741 + t3870 + t3974 + t4029 + t4102 + t4187 + t4229;
  t5263 = -2.88*t2235;
  t5322 = 6.8*t3522*t3793;
  t5345 = 3.2*t3563*t3968;
  t5395 = 3.2*t3560*t4014;
  t5431 = 6.8*t3567*t4085;
  t5526 = 3.2*t3579*t4176;
  t5627 = 3.2*t3576*t4223;
  t5693 = t5263 + t5322 + t5345 + t5395 + t5431 + t5526 + t5627;
  t6713 = 0.4*t2866*t2788;
  t6714 = -0.4*t3522*t2400;
  t6715 = t2279*t2788;
  t6716 = t3522*t2400;
  t6717 = t6715 + t6716;
  t6718 = 0.8*t6717;
  t6723 = t6713 + t6714 + t6718;
  t6724 = -1.*var4[0]*t6723;
  t6725 = 0.4*t2866*t3522;
  t6729 = -0.4*t6728*t2400;
  t6773 = t2279*t3522;
  t6774 = t6728*t2400;
  t6775 = t6773 + t6774;
  t6776 = 0.8*t6775;
  t6777 = t6725 + t6729 + t6776;
  t6778 = -1.*var4[2]*t6777;
  t4262 = 0.748*t3522;
  t4297 = 3.2*t2903*t3563;
  t4304 = 3.2*t2882*t3560;
  t4305 = t4262 + t4297 + t4304;
  t2801 = 0.748*t2788;
  t2887 = 3.2*t2882*t2662;
  t2932 = 3.2*t2903*t2927;
  t2933 = t2801 + t2887 + t2932;
  t6782 = 0.748*t3793;
  t6783 = 3.2*t2903*t3968;
  t6784 = 3.2*t2882*t4014;
  t6785 = 0.67 + t6782 + t6783 + t6784;
  t6812 = 0.768*t2882;
  t6813 = 0.2 + t6812;
  t6779 = 0.768*t4014;
  t6780 = 0.2 + t6779;
  t4422 = 0.748*t3567;
  t4449 = 3.2*t3373*t3579;
  t4514 = 3.2*t3335*t3576;
  t4550 = t4422 + t4449 + t4514;
  t3222 = 0.748*t3221;
  t3337 = 3.2*t3335*t3157;
  t3433 = 3.2*t3373*t3427;
  t3435 = t3222 + t3337 + t3433;
  t6790 = 0.748*t4085;
  t6791 = 3.2*t3373*t4176;
  t6792 = 3.2*t3335*t4223;
  t6793 = 0.67 + t6790 + t6791 + t6792;
  t6847 = 0.768*t3335;
  t6848 = 0.2 + t6847;
  t6787 = 0.768*t4223;
  t6788 = 0.2 + t6787;
  p_output1[0]=0.768*t2180*t2662 + t2699*t2933 + 0.768*t2950*t3157 + t3189*t3435 + t3468*t3581 + t3584*(3.2*Power(t2662,2) + 3.2*Power(t2927,2) + 3.2*Power(t3157,2) + 3.2*Power(t3427,2) + 6.8*Power(t3556,2) + 6.8*Power(t3571,2) + t3586 + t3588 + t3592 + t3658) + t3735*t4236 - 1.*var4[0];
  p_output1[1]=0.768*t2180*t3560 + 0.768*t2950*t3576 + t3581*t3584 + t3468*(6.8*Power(t3522,2) + 3.2*Power(t3560,2) + 3.2*Power(t3563,2) + 6.8*Power(t3567,2) + 3.2*Power(t3576,2) + 3.2*Power(t3579,2) + t3586 + t3588 + t3592 + t3658) + t2699*t4305 + t3189*t4550 + t3735*t5693 - 1.*var4[2];
  p_output1[2]=t3735*(3.3612 + 6.8*Power(t3793,2) + 3.2*Power(t3968,2) + 3.2*Power(t4014,2) + 6.8*Power(t4085,2) + 3.2*Power(t4176,2) + 3.2*Power(t4223,2)) + t3584*t4236 + t3468*t5693 + t6724 + t6778 + t2180*t6780 + t2699*t6785 + t2950*t6788 + t3189*t6793;
  p_output1[3]=t2699*(1.58228 + 3.2*Power(t2882,2) + 3.2*Power(t2903,2)) + t2933*t3584 + t3468*t4305 + t6724 + t6778 + t3735*t6785 + t2180*t6813;
  p_output1[4]=1.2143199999999998*t2180 + 0.768*t3468*t3560 + 0.768*t2662*t3584 + t3735*t6780 + t2699*t6813 - 1.*(-0.4*t2279*t2788 + 0.4*t2400*t3556 + 0.8*(-1.*t2400*t3556 + t6715))*var4[0] - 1.*(0.4*t2400*t2788 - 0.4*t2279*t3522 + 0.8*(-1.*t2400*t2788 + t6773))*var4[2];
  p_output1[5]=t3189*(1.58228 + 3.2*Power(t3335,2) + 3.2*Power(t3373,2)) + t3435*t3584 + t3468*t4550 + t3735*t6793 + t2950*t6848;
  p_output1[6]=1.2143199999999998*t2950 + 0.768*t3468*t3576 + 0.768*t3157*t3584 + t3735*t6788 + t3189*t6848;
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
