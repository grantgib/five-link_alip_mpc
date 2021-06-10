/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 15:58:50 GMT-05:00
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
  double t3202;
  double t3156;
  double t3210;
  double t3217;
  double t3334;
  double t3352;
  double t3418;
  double t3424;
  double t3425;
  double t3489;
  double t3499;
  double t3564;
  double t3567;
  double t3578;
  double t3579;
  double t3582;
  double t3326;
  double t3327;
  double t3328;
  double t3214;
  double t3218;
  double t3311;
  double t3335;
  double t3392;
  double t3399;
  double t3414;
  double t3441;
  double t3445;
  double t3455;
  double t3457;
  double t3462;
  double t3466;
  double t3469;
  double t3474;
  double t3510;
  double t3511;
  double t3519;
  double t3492;
  double t3504;
  double t3505;
  double t3565;
  double t3569;
  double t3574;
  double t3575;
  double t3586;
  double t3587;
  double t3594;
  double t3595;
  double t3606;
  double t3607;
  double t3617;
  double t3618;
  double t3714;
  double t3715;
  double t3716;
  double t3725;
  double t3733;
  double t3737;
  double t3742;
  double t3744;
  double t3746;
  double t3747;
  double t3748;
  double t3787;
  double t3788;
  double t3789;
  double t3797;
  double t3798;
  double t3802;
  double t3803;
  double t3806;
  double t3808;
  double t3814;
  double t3815;
  double t3624;
  double t3627;
  double t3635;
  double t3636;
  double t3638;
  double t3640;
  double t3645;
  double t3646;
  double t3649;
  double t3650;
  double t3653;
  double t3657;
  double t3658;
  double t3663;
  double t3664;
  double t3665;
  double t3666;
  double t3677;
  double t3678;
  double t3688;
  double t3689;
  double t3690;
  double t3691;
  double t3692;
  double t3695;
  double t3168;
  double t3187;
  double t3203;
  double t3208;
  double t3330;
  double t3331;
  double t3538;
  double t3553;
  double t3706;
  double t3707;
  double t3710;
  double t3711;
  double t3712;
  double t3745;
  double t3749;
  double t3750;
  double t3762;
  double t3767;
  double t3769;
  double t3775;
  double t3780;
  double t3782;
  double t3783;
  double t3785;
  double t3807;
  double t3819;
  double t3820;
  double t3822;
  double t3826;
  double t3827;
  double t3849;
  double t3850;
  double t3851;
  double t3836;
  double t3837;
  double t3843;
  double t3844;
  double t3872;
  double t3887;
  double t3888;
  double t3863;
  double t3865;
  double t3867;
  double t3869;
  double t3698;
  double t3713;
  double t3758;
  double t3774;
  double t3786;
  double t3821;
  double t3831;
  double t3832;
  double t3937;
  double t3938;
  double t3939;
  double t3940;
  double t3941;
  double t3942;
  double t3943;
  double t3944;
  double t3835;
  double t3848;
  double t3855;
  double t3856;
  double t3948;
  double t3949;
  double t3950;
  double t3951;
  double t3976;
  double t3991;
  double t3994;
  double t3998;
  double t3857;
  double t3952;
  double t4000;
  double t4002;
  double t4016;
  double t4017;
  double t3861;
  double t3871;
  double t3895;
  double t3896;
  double t3953;
  double t3954;
  double t3955;
  double t3956;
  double t4003;
  double t4006;
  double t4007;
  double t4008;
  double t3901;
  double t3962;
  double t4009;
  double t4010;
  double t4023;
  double t4024;
  t3202 = Sin(var1[2]);
  t3156 = Cos(var1[2]);
  t3210 = Cos(var1[3]);
  t3217 = Sin(var1[3]);
  t3334 = Cos(var1[4]);
  t3352 = Sin(var1[4]);
  t3418 = t3210*t3334;
  t3424 = -1.*t3217*t3352;
  t3425 = t3418 + t3424;
  t3489 = Cos(var1[5]);
  t3499 = Sin(var1[5]);
  t3564 = Cos(var1[6]);
  t3567 = Sin(var1[6]);
  t3578 = t3489*t3564;
  t3579 = -1.*t3499*t3567;
  t3582 = t3578 + t3579;
  t3326 = t3156*t3210;
  t3327 = -1.*t3202*t3217;
  t3328 = t3326 + t3327;
  t3214 = t3210*t3202;
  t3218 = t3156*t3217;
  t3311 = t3214 + t3218;
  t3335 = -1.*t3334*t3217;
  t3392 = -1.*t3210*t3352;
  t3399 = t3335 + t3392;
  t3414 = t3202*t3399;
  t3441 = t3156*t3425;
  t3445 = t3414 + t3441;
  t3455 = t3334*t3217;
  t3457 = t3210*t3352;
  t3462 = t3455 + t3457;
  t3466 = t3156*t3462;
  t3469 = t3202*t3425;
  t3474 = t3466 + t3469;
  t3510 = t3156*t3489;
  t3511 = -1.*t3202*t3499;
  t3519 = t3510 + t3511;
  t3492 = t3489*t3202;
  t3504 = t3156*t3499;
  t3505 = t3492 + t3504;
  t3565 = -1.*t3564*t3499;
  t3569 = -1.*t3489*t3567;
  t3574 = t3565 + t3569;
  t3575 = t3202*t3574;
  t3586 = t3156*t3582;
  t3587 = t3575 + t3586;
  t3594 = t3564*t3499;
  t3595 = t3489*t3567;
  t3606 = t3594 + t3595;
  t3607 = t3156*t3606;
  t3617 = t3202*t3582;
  t3618 = t3607 + t3617;
  t3714 = -1.*t3334;
  t3715 = 1. + t3714;
  t3716 = 0.4*t3715;
  t3725 = 0.64*t3334;
  t3733 = t3716 + t3725;
  t3737 = t3733*t3217;
  t3742 = 0.24*t3210*t3352;
  t3744 = t3737 + t3742;
  t3746 = t3210*t3733;
  t3747 = -0.24*t3217*t3352;
  t3748 = t3746 + t3747;
  t3787 = -1.*t3564;
  t3788 = 1. + t3787;
  t3789 = 0.4*t3788;
  t3797 = 0.64*t3564;
  t3798 = t3789 + t3797;
  t3802 = t3798*t3499;
  t3803 = 0.24*t3489*t3567;
  t3806 = t3802 + t3803;
  t3808 = t3489*t3798;
  t3814 = -0.24*t3499*t3567;
  t3815 = t3808 + t3814;
  t3624 = -1.*t3210*t3202;
  t3627 = -1.*t3156*t3217;
  t3635 = t3624 + t3627;
  t3636 = 6.8*t3635*t3328;
  t3638 = 6.8*t3311*t3328;
  t3640 = t3156*t3399;
  t3645 = -1.*t3202*t3425;
  t3646 = t3640 + t3645;
  t3649 = 3.2*t3445*t3646;
  t3650 = -1.*t3202*t3462;
  t3653 = t3650 + t3441;
  t3657 = 3.2*t3653*t3474;
  t3658 = -1.*t3489*t3202;
  t3663 = -1.*t3156*t3499;
  t3664 = t3658 + t3663;
  t3665 = 6.8*t3664*t3519;
  t3666 = 6.8*t3505*t3519;
  t3677 = t3156*t3574;
  t3678 = -1.*t3202*t3582;
  t3688 = t3677 + t3678;
  t3689 = 3.2*t3587*t3688;
  t3690 = -1.*t3202*t3606;
  t3691 = t3690 + t3586;
  t3692 = 3.2*t3691*t3618;
  t3695 = t3636 + t3638 + t3649 + t3657 + t3665 + t3666 + t3689 + t3692;
  t3168 = Power(t3156,2);
  t3187 = 12.*t3168;
  t3203 = Power(t3202,2);
  t3208 = 12.*t3203;
  t3330 = Power(t3328,2);
  t3331 = 6.8*t3330;
  t3538 = Power(t3519,2);
  t3553 = 6.8*t3538;
  t3706 = Power(t3210,2);
  t3707 = 0.11*t3706;
  t3710 = Power(t3217,2);
  t3711 = 0.11*t3710;
  t3712 = t3707 + t3711;
  t3745 = -1.*t3744*t3425;
  t3749 = -1.*t3399*t3748;
  t3750 = t3745 + t3749;
  t3762 = t3744*t3462;
  t3767 = t3425*t3748;
  t3769 = t3762 + t3767;
  t3775 = Power(t3489,2);
  t3780 = 0.11*t3775;
  t3782 = Power(t3499,2);
  t3783 = 0.11*t3782;
  t3785 = t3780 + t3783;
  t3807 = -1.*t3806*t3582;
  t3819 = -1.*t3574*t3815;
  t3820 = t3807 + t3819;
  t3822 = t3806*t3606;
  t3826 = t3582*t3815;
  t3827 = t3822 + t3826;
  t3849 = t3733*t3352;
  t3850 = -0.24*t3334*t3352;
  t3851 = t3849 + t3850;
  t3836 = t3733*t3334;
  t3837 = Power(t3352,2);
  t3843 = 0.24*t3837;
  t3844 = t3836 + t3843;
  t3872 = t3798*t3567;
  t3887 = -0.24*t3564*t3567;
  t3888 = t3872 + t3887;
  t3863 = t3798*t3564;
  t3865 = Power(t3567,2);
  t3867 = 0.24*t3865;
  t3869 = t3863 + t3867;
  t3698 = 2.88*t3156;
  t3713 = 6.8*t3328*t3712;
  t3758 = 3.2*t3474*t3750;
  t3774 = 3.2*t3445*t3769;
  t3786 = 6.8*t3519*t3785;
  t3821 = 3.2*t3618*t3820;
  t3831 = 3.2*t3587*t3827;
  t3832 = t3698 + t3713 + t3758 + t3774 + t3786 + t3821 + t3831;
  t3937 = -2.88*t3202;
  t3938 = 6.8*t3635*t3712;
  t3939 = 3.2*t3653*t3750;
  t3940 = 3.2*t3646*t3769;
  t3941 = 6.8*t3664*t3785;
  t3942 = 3.2*t3691*t3820;
  t3943 = 3.2*t3688*t3827;
  t3944 = t3937 + t3938 + t3939 + t3940 + t3941 + t3942 + t3943;
  t3835 = 0.748*t3328;
  t3848 = 3.2*t3844*t3445;
  t3855 = 3.2*t3851*t3474;
  t3856 = t3835 + t3848 + t3855;
  t3948 = 0.748*t3635;
  t3949 = 3.2*t3851*t3653;
  t3950 = 3.2*t3844*t3646;
  t3951 = t3948 + t3949 + t3950;
  t3976 = 0.748*t3712;
  t3991 = 3.2*t3851*t3750;
  t3994 = 3.2*t3844*t3769;
  t3998 = 0.67 + t3976 + t3991 + t3994;
  t3857 = 0.768*t3445;
  t3952 = 0.768*t3646;
  t4000 = 0.768*t3769;
  t4002 = 0.2 + t4000;
  t4016 = 0.768*t3844;
  t4017 = 0.2 + t4016;
  t3861 = 0.748*t3519;
  t3871 = 3.2*t3869*t3587;
  t3895 = 3.2*t3888*t3618;
  t3896 = t3861 + t3871 + t3895;
  t3953 = 0.748*t3664;
  t3954 = 3.2*t3888*t3691;
  t3955 = 3.2*t3869*t3688;
  t3956 = t3953 + t3954 + t3955;
  t4003 = 0.748*t3785;
  t4006 = 3.2*t3888*t3820;
  t4007 = 3.2*t3869*t3827;
  t4008 = 0.67 + t4003 + t4006 + t4007;
  t3901 = 0.768*t3587;
  t3962 = 0.768*t3688;
  t4009 = 0.768*t3827;
  t4010 = 0.2 + t4009;
  t4023 = 0.768*t3869;
  t4024 = 0.2 + t4023;
  p_output1[0]=t3187 + t3208 + 6.8*Power(t3311,2) + t3331 + 3.2*Power(t3445,2) + 3.2*Power(t3474,2) + 6.8*Power(t3505,2) + t3553 + 3.2*Power(t3587,2) + 3.2*Power(t3618,2);
  p_output1[1]=t3695;
  p_output1[2]=t3832;
  p_output1[3]=t3856;
  p_output1[4]=t3857;
  p_output1[5]=t3896;
  p_output1[6]=t3901;
  p_output1[7]=t3695;
  p_output1[8]=t3187 + t3208 + t3331 + t3553 + 6.8*Power(t3635,2) + 3.2*Power(t3646,2) + 3.2*Power(t3653,2) + 6.8*Power(t3664,2) + 3.2*Power(t3688,2) + 3.2*Power(t3691,2);
  p_output1[9]=t3944;
  p_output1[10]=t3951;
  p_output1[11]=t3952;
  p_output1[12]=t3956;
  p_output1[13]=t3962;
  p_output1[14]=t3832;
  p_output1[15]=t3944;
  p_output1[16]=3.3612 + 6.8*Power(t3712,2) + 3.2*Power(t3750,2) + 3.2*Power(t3769,2) + 6.8*Power(t3785,2) + 3.2*Power(t3820,2) + 3.2*Power(t3827,2);
  p_output1[17]=t3998;
  p_output1[18]=t4002;
  p_output1[19]=t4008;
  p_output1[20]=t4010;
  p_output1[21]=t3856;
  p_output1[22]=t3951;
  p_output1[23]=t3998;
  p_output1[24]=1.58228 + 3.2*Power(t3844,2) + 3.2*Power(t3851,2);
  p_output1[25]=t4017;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t3857;
  p_output1[29]=t3952;
  p_output1[30]=t4002;
  p_output1[31]=t4017;
  p_output1[32]=1.2143199999999998;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t3896;
  p_output1[36]=t3956;
  p_output1[37]=t4008;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.58228 + 3.2*Power(t3869,2) + 3.2*Power(t3888,2);
  p_output1[41]=t4024;
  p_output1[42]=t3901;
  p_output1[43]=t3962;
  p_output1[44]=t4010;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=t4024;
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
