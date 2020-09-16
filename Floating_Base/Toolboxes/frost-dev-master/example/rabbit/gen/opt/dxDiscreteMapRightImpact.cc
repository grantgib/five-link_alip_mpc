/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 15:06:27 GMT-04:00
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
  double t3633;
  double t3630;
  double t3631;
  double t3634;
  double t3640;
  double t3629;
  double t3632;
  double t3635;
  double t3636;
  double t3637;
  double t3641;
  double t3642;
  double t3643;
  double t3644;
  double t3645;
  double t3653;
  double t3654;
  double t3655;
  double t3656;
  double t3657;
  double t3680;
  double t3677;
  double t3678;
  double t3681;
  double t3679;
  double t3682;
  double t3683;
  double t3684;
  double t3685;
  double t3686;
  double t3687;
  double t3688;
  double t3689;
  double t3697;
  double t3698;
  double t3699;
  double t3700;
  double t3701;
  double t3649;
  double t3650;
  double t3651;
  double t3666;
  double t3667;
  double t3668;
  double t3669;
  double t3670;
  double t3671;
  double t3693;
  double t3694;
  double t3695;
  double t3710;
  double t3711;
  double t3712;
  double t3713;
  double t3714;
  double t3715;
  double t3725;
  double t3726;
  double t3727;
  double t3740;
  double t3741;
  double t3742;
  double t3786;
  double t3787;
  double t3788;
  double t3790;
  double t3791;
  double t3792;
  double t3806;
  double t3807;
  double t3808;
  double t3810;
  double t3811;
  double t3812;
  double t3627;
  double t3628;
  double t3729;
  double t3730;
  double t3731;
  double t3647;
  double t3648;
  double t3721;
  double t3722;
  double t3723;
  double t3663;
  double t3664;
  double t3665;
  double t3733;
  double t3734;
  double t3658;
  double t3659;
  double t3660;
  double t3661;
  double t3675;
  double t3676;
  double t3744;
  double t3745;
  double t3746;
  double t3691;
  double t3692;
  double t3736;
  double t3737;
  double t3738;
  double t3707;
  double t3708;
  double t3709;
  double t3748;
  double t3749;
  double t3702;
  double t3703;
  double t3704;
  double t3705;
  double t3719;
  double t3720;
  double t3755;
  double t3756;
  double t3757;
  double t3758;
  double t3761;
  double t3762;
  double t3769;
  double t3770;
  double t3753;
  double t3754;
  double t3724;
  double t3728;
  double t3732;
  double t3735;
  double t3739;
  double t3743;
  double t3747;
  double t3750;
  double t3751;
  double t3777;
  double t3778;
  double t3780;
  double t3781;
  double t3782;
  double t3783;
  double t3784;
  double t3789;
  double t3793;
  double t3794;
  double t3796;
  double t3797;
  double t3798;
  double t3800;
  double t3801;
  double t3802;
  double t3803;
  double t3804;
  double t3809;
  double t3813;
  double t3814;
  double t3816;
  double t3817;
  double t3818;
  double t3870;
  double t3871;
  double t3872;
  double t3779;
  double t3785;
  double t3795;
  double t3799;
  double t3805;
  double t3815;
  double t3819;
  double t3820;
  double t3851;
  double t3852;
  double t3853;
  double t3854;
  double t3855;
  double t3856;
  double t3857;
  double t3858;
  double t3861;
  double t3862;
  double t3863;
  double t3864;
  double t3865;
  double t3866;
  double t3867;
  double t3868;
  double t3869;
  double t3873;
  double t3874;
  double t3875;
  double t3876;
  double t3877;
  double t3878;
  double t3879;
  double t3825;
  double t3826;
  double t3827;
  double t3828;
  double t3652;
  double t3662;
  double t3672;
  double t3673;
  double t3883;
  double t3884;
  double t3885;
  double t3886;
  double t3913;
  double t3914;
  double t3880;
  double t3881;
  double t3831;
  double t3832;
  double t3833;
  double t3834;
  double t3696;
  double t3706;
  double t3716;
  double t3717;
  double t3891;
  double t3892;
  double t3893;
  double t3894;
  double t3946;
  double t3947;
  double t3888;
  double t3889;
  t3633 = Cos(var2[3]);
  t3630 = Cos(var2[4]);
  t3631 = Sin(var2[3]);
  t3634 = Sin(var2[4]);
  t3640 = Cos(var2[2]);
  t3629 = Sin(var2[2]);
  t3632 = -1.*t3630*t3631;
  t3635 = -1.*t3633*t3634;
  t3636 = t3632 + t3635;
  t3637 = t3629*t3636;
  t3641 = t3633*t3630;
  t3642 = -1.*t3631*t3634;
  t3643 = t3641 + t3642;
  t3644 = t3640*t3643;
  t3645 = t3637 + t3644;
  t3653 = -1.*t3630;
  t3654 = 1. + t3653;
  t3655 = 0.4*t3654;
  t3656 = 0.64*t3630;
  t3657 = t3655 + t3656;
  t3680 = Cos(var2[5]);
  t3677 = Cos(var2[6]);
  t3678 = Sin(var2[5]);
  t3681 = Sin(var2[6]);
  t3679 = -1.*t3677*t3678;
  t3682 = -1.*t3680*t3681;
  t3683 = t3679 + t3682;
  t3684 = t3629*t3683;
  t3685 = t3680*t3677;
  t3686 = -1.*t3678*t3681;
  t3687 = t3685 + t3686;
  t3688 = t3640*t3687;
  t3689 = t3684 + t3688;
  t3697 = -1.*t3677;
  t3698 = 1. + t3697;
  t3699 = 0.4*t3698;
  t3700 = 0.64*t3677;
  t3701 = t3699 + t3700;
  t3649 = t3640*t3633;
  t3650 = -1.*t3629*t3631;
  t3651 = t3649 + t3650;
  t3666 = t3630*t3631;
  t3667 = t3633*t3634;
  t3668 = t3666 + t3667;
  t3669 = t3640*t3668;
  t3670 = t3629*t3643;
  t3671 = t3669 + t3670;
  t3693 = t3640*t3680;
  t3694 = -1.*t3629*t3678;
  t3695 = t3693 + t3694;
  t3710 = t3677*t3678;
  t3711 = t3680*t3681;
  t3712 = t3710 + t3711;
  t3713 = t3640*t3712;
  t3714 = t3629*t3687;
  t3715 = t3713 + t3714;
  t3725 = t3633*t3629;
  t3726 = t3640*t3631;
  t3727 = t3725 + t3726;
  t3740 = t3680*t3629;
  t3741 = t3640*t3678;
  t3742 = t3740 + t3741;
  t3786 = t3657*t3631;
  t3787 = 0.24*t3633*t3634;
  t3788 = t3786 + t3787;
  t3790 = t3633*t3657;
  t3791 = -0.24*t3631*t3634;
  t3792 = t3790 + t3791;
  t3806 = t3701*t3678;
  t3807 = 0.24*t3680*t3681;
  t3808 = t3806 + t3807;
  t3810 = t3680*t3701;
  t3811 = -0.24*t3678*t3681;
  t3812 = t3810 + t3811;
  t3627 = -1.*var1[6];
  t3628 = var3[4] + t3627;
  t3729 = t3640*t3636;
  t3730 = -1.*t3629*t3643;
  t3731 = t3729 + t3730;
  t3647 = -1.*var1[5];
  t3648 = var3[3] + t3647;
  t3721 = -1.*t3633*t3629;
  t3722 = -1.*t3640*t3631;
  t3723 = t3721 + t3722;
  t3663 = t3657*t3634;
  t3664 = -0.24*t3630*t3634;
  t3665 = t3663 + t3664;
  t3733 = -1.*t3629*t3668;
  t3734 = t3733 + t3644;
  t3658 = t3657*t3630;
  t3659 = Power(t3634,2);
  t3660 = 0.24*t3659;
  t3661 = t3658 + t3660;
  t3675 = -1.*var1[4];
  t3676 = var3[6] + t3675;
  t3744 = t3640*t3683;
  t3745 = -1.*t3629*t3687;
  t3746 = t3744 + t3745;
  t3691 = -1.*var1[3];
  t3692 = var3[5] + t3691;
  t3736 = -1.*t3680*t3629;
  t3737 = -1.*t3640*t3678;
  t3738 = t3736 + t3737;
  t3707 = t3701*t3681;
  t3708 = -0.24*t3677*t3681;
  t3709 = t3707 + t3708;
  t3748 = -1.*t3629*t3712;
  t3749 = t3748 + t3688;
  t3702 = t3701*t3677;
  t3703 = Power(t3681,2);
  t3704 = 0.24*t3703;
  t3705 = t3702 + t3704;
  t3719 = -1.*var1[1];
  t3720 = var3[1] + t3719;
  t3755 = Power(t3640,2);
  t3756 = 12.*t3755;
  t3757 = Power(t3629,2);
  t3758 = 12.*t3757;
  t3761 = Power(t3651,2);
  t3762 = 6.8*t3761;
  t3769 = Power(t3695,2);
  t3770 = 6.8*t3769;
  t3753 = -1.*var1[0];
  t3754 = var3[0] + t3753;
  t3724 = 6.8*t3723*t3651;
  t3728 = 6.8*t3727*t3651;
  t3732 = 3.2*t3645*t3731;
  t3735 = 3.2*t3734*t3671;
  t3739 = 6.8*t3738*t3695;
  t3743 = 6.8*t3742*t3695;
  t3747 = 3.2*t3689*t3746;
  t3750 = 3.2*t3749*t3715;
  t3751 = t3724 + t3728 + t3732 + t3735 + t3739 + t3743 + t3747 + t3750;
  t3777 = -1.*var1[2];
  t3778 = var3[2] + t3777;
  t3780 = Power(t3633,2);
  t3781 = 0.11*t3780;
  t3782 = Power(t3631,2);
  t3783 = 0.11*t3782;
  t3784 = t3781 + t3783;
  t3789 = -1.*t3788*t3643;
  t3793 = -1.*t3636*t3792;
  t3794 = t3789 + t3793;
  t3796 = t3788*t3668;
  t3797 = t3643*t3792;
  t3798 = t3796 + t3797;
  t3800 = Power(t3680,2);
  t3801 = 0.11*t3800;
  t3802 = Power(t3678,2);
  t3803 = 0.11*t3802;
  t3804 = t3801 + t3803;
  t3809 = -1.*t3808*t3687;
  t3813 = -1.*t3683*t3812;
  t3814 = t3809 + t3813;
  t3816 = t3808*t3712;
  t3817 = t3687*t3812;
  t3818 = t3816 + t3817;
  t3870 = -1.*t3640*t3633;
  t3871 = t3629*t3631;
  t3872 = t3870 + t3871;
  t3779 = 2.88*t3640;
  t3785 = 6.8*t3651*t3784;
  t3795 = 3.2*t3671*t3794;
  t3799 = 3.2*t3645*t3798;
  t3805 = 6.8*t3695*t3804;
  t3815 = 3.2*t3715*t3814;
  t3819 = 3.2*t3689*t3818;
  t3820 = t3779 + t3785 + t3795 + t3799 + t3805 + t3815 + t3819;
  t3851 = -2.88*t3629;
  t3852 = 6.8*t3723*t3784;
  t3853 = 3.2*t3734*t3794;
  t3854 = 3.2*t3731*t3798;
  t3855 = 6.8*t3738*t3804;
  t3856 = 3.2*t3749*t3814;
  t3857 = 3.2*t3746*t3818;
  t3858 = t3851 + t3852 + t3853 + t3854 + t3855 + t3856 + t3857;
  t3861 = 0.4*t3654*t3651;
  t3862 = -0.4*t3723*t3634;
  t3863 = t3630*t3651;
  t3864 = t3723*t3634;
  t3865 = t3863 + t3864;
  t3866 = 0.8*t3865;
  t3867 = t3861 + t3862 + t3866;
  t3868 = -1.*var4[0]*t3867;
  t3869 = 0.4*t3654*t3723;
  t3873 = -0.4*t3872*t3634;
  t3874 = t3630*t3723;
  t3875 = t3872*t3634;
  t3876 = t3874 + t3875;
  t3877 = 0.8*t3876;
  t3878 = t3869 + t3873 + t3877;
  t3879 = -1.*var4[2]*t3878;
  t3825 = 0.748*t3723;
  t3826 = 3.2*t3665*t3734;
  t3827 = 3.2*t3661*t3731;
  t3828 = t3825 + t3826 + t3827;
  t3652 = 0.748*t3651;
  t3662 = 3.2*t3661*t3645;
  t3672 = 3.2*t3665*t3671;
  t3673 = t3652 + t3662 + t3672;
  t3883 = 0.748*t3784;
  t3884 = 3.2*t3665*t3794;
  t3885 = 3.2*t3661*t3798;
  t3886 = 0.67 + t3883 + t3884 + t3885;
  t3913 = 0.768*t3661;
  t3914 = 0.2 + t3913;
  t3880 = 0.768*t3798;
  t3881 = 0.2 + t3880;
  t3831 = 0.748*t3738;
  t3832 = 3.2*t3709*t3749;
  t3833 = 3.2*t3705*t3746;
  t3834 = t3831 + t3832 + t3833;
  t3696 = 0.748*t3695;
  t3706 = 3.2*t3705*t3689;
  t3716 = 3.2*t3709*t3715;
  t3717 = t3696 + t3706 + t3716;
  t3891 = 0.748*t3804;
  t3892 = 3.2*t3709*t3814;
  t3893 = 3.2*t3705*t3818;
  t3894 = 0.67 + t3891 + t3892 + t3893;
  t3946 = 0.768*t3705;
  t3947 = 0.2 + t3946;
  t3888 = 0.768*t3818;
  t3889 = 0.2 + t3888;
  p_output1[0]=0.768*t3628*t3645 + t3648*t3673 + 0.768*t3676*t3689 + t3692*t3717 + t3720*t3751 + t3754*(3.2*Power(t3645,2) + 3.2*Power(t3671,2) + 3.2*Power(t3689,2) + 3.2*Power(t3715,2) + 6.8*Power(t3727,2) + 6.8*Power(t3742,2) + t3756 + t3758 + t3762 + t3770) + t3778*t3820 - 1.*var4[0];
  p_output1[1]=0.768*t3628*t3731 + 0.768*t3676*t3746 + t3751*t3754 + t3720*(6.8*Power(t3723,2) + 3.2*Power(t3731,2) + 3.2*Power(t3734,2) + 6.8*Power(t3738,2) + 3.2*Power(t3746,2) + 3.2*Power(t3749,2) + t3756 + t3758 + t3762 + t3770) + t3648*t3828 + t3692*t3834 + t3778*t3858 - 1.*var4[2];
  p_output1[2]=t3778*(3.3612 + 6.8*Power(t3784,2) + 3.2*Power(t3794,2) + 3.2*Power(t3798,2) + 6.8*Power(t3804,2) + 3.2*Power(t3814,2) + 3.2*Power(t3818,2)) + t3754*t3820 + t3720*t3858 + t3868 + t3879 + t3628*t3881 + t3648*t3886 + t3676*t3889 + t3692*t3894;
  p_output1[3]=t3648*(1.58228 + 3.2*Power(t3661,2) + 3.2*Power(t3665,2)) + t3673*t3754 + t3720*t3828 + t3868 + t3879 + t3778*t3886 + t3628*t3914;
  p_output1[4]=1.2143199999999998*t3628 + 0.768*t3720*t3731 + 0.768*t3645*t3754 + t3778*t3881 + t3648*t3914 - 1.*(-0.4*t3630*t3651 + 0.4*t3634*t3727 + 0.8*(-1.*t3634*t3727 + t3863))*var4[0] - 1.*(0.4*t3634*t3651 - 0.4*t3630*t3723 + 0.8*(-1.*t3634*t3651 + t3874))*var4[2];
  p_output1[5]=t3692*(1.58228 + 3.2*Power(t3705,2) + 3.2*Power(t3709,2)) + t3717*t3754 + t3720*t3834 + t3778*t3894 + t3676*t3947;
  p_output1[6]=1.2143199999999998*t3676 + 0.768*t3720*t3746 + 0.768*t3689*t3754 + t3778*t3889 + t3692*t3947;
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
