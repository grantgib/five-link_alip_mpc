/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:20:40 GMT-05:00
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
  double t3854;
  double t3851;
  double t3852;
  double t3855;
  double t3859;
  double t3850;
  double t3853;
  double t3856;
  double t3857;
  double t3858;
  double t3860;
  double t3861;
  double t3862;
  double t3863;
  double t3864;
  double t3913;
  double t3914;
  double t3915;
  double t3916;
  double t3917;
  double t3940;
  double t3937;
  double t3938;
  double t3941;
  double t3939;
  double t3942;
  double t3943;
  double t3944;
  double t3945;
  double t3946;
  double t3947;
  double t3948;
  double t3949;
  double t3957;
  double t3958;
  double t3959;
  double t3960;
  double t3961;
  double t3868;
  double t3869;
  double t3870;
  double t3926;
  double t3927;
  double t3928;
  double t3929;
  double t3930;
  double t3931;
  double t3953;
  double t3954;
  double t3955;
  double t3972;
  double t3973;
  double t3974;
  double t3975;
  double t3976;
  double t3977;
  double t3987;
  double t3988;
  double t3989;
  double t4002;
  double t4003;
  double t4004;
  double t4048;
  double t4049;
  double t4050;
  double t4052;
  double t4053;
  double t4054;
  double t4068;
  double t4069;
  double t4070;
  double t4072;
  double t4073;
  double t4074;
  double t3848;
  double t3849;
  double t3991;
  double t3992;
  double t3993;
  double t3866;
  double t3867;
  double t3983;
  double t3984;
  double t3985;
  double t3923;
  double t3924;
  double t3925;
  double t3995;
  double t3996;
  double t3918;
  double t3919;
  double t3920;
  double t3921;
  double t3935;
  double t3936;
  double t4006;
  double t4007;
  double t4008;
  double t3951;
  double t3952;
  double t3998;
  double t3999;
  double t4000;
  double t3969;
  double t3970;
  double t3971;
  double t4010;
  double t4011;
  double t3962;
  double t3965;
  double t3966;
  double t3967;
  double t3981;
  double t3982;
  double t4017;
  double t4018;
  double t4019;
  double t4020;
  double t4023;
  double t4024;
  double t4031;
  double t4032;
  double t4015;
  double t4016;
  double t3986;
  double t3990;
  double t3994;
  double t3997;
  double t4001;
  double t4005;
  double t4009;
  double t4012;
  double t4013;
  double t4039;
  double t4040;
  double t4042;
  double t4043;
  double t4044;
  double t4045;
  double t4046;
  double t4051;
  double t4055;
  double t4056;
  double t4058;
  double t4059;
  double t4060;
  double t4062;
  double t4063;
  double t4064;
  double t4065;
  double t4066;
  double t4071;
  double t4075;
  double t4076;
  double t4078;
  double t4079;
  double t4080;
  double t4132;
  double t4133;
  double t4134;
  double t4041;
  double t4047;
  double t4057;
  double t4061;
  double t4067;
  double t4077;
  double t4081;
  double t4082;
  double t4113;
  double t4114;
  double t4115;
  double t4116;
  double t4117;
  double t4118;
  double t4119;
  double t4120;
  double t4123;
  double t4124;
  double t4125;
  double t4126;
  double t4127;
  double t4128;
  double t4129;
  double t4130;
  double t4131;
  double t4135;
  double t4136;
  double t4137;
  double t4138;
  double t4139;
  double t4140;
  double t4141;
  double t4087;
  double t4088;
  double t4089;
  double t4090;
  double t3871;
  double t3922;
  double t3932;
  double t3933;
  double t4145;
  double t4146;
  double t4147;
  double t4148;
  double t4175;
  double t4176;
  double t4142;
  double t4143;
  double t4093;
  double t4094;
  double t4095;
  double t4096;
  double t3956;
  double t3968;
  double t3978;
  double t3979;
  double t4153;
  double t4154;
  double t4155;
  double t4156;
  double t4208;
  double t4209;
  double t4150;
  double t4151;
  t3854 = Cos(var2[3]);
  t3851 = Cos(var2[4]);
  t3852 = Sin(var2[3]);
  t3855 = Sin(var2[4]);
  t3859 = Cos(var2[2]);
  t3850 = Sin(var2[2]);
  t3853 = -1.*t3851*t3852;
  t3856 = -1.*t3854*t3855;
  t3857 = t3853 + t3856;
  t3858 = t3850*t3857;
  t3860 = t3854*t3851;
  t3861 = -1.*t3852*t3855;
  t3862 = t3860 + t3861;
  t3863 = t3859*t3862;
  t3864 = t3858 + t3863;
  t3913 = -1.*t3851;
  t3914 = 1. + t3913;
  t3915 = 0.4*t3914;
  t3916 = 0.64*t3851;
  t3917 = t3915 + t3916;
  t3940 = Cos(var2[5]);
  t3937 = Cos(var2[6]);
  t3938 = Sin(var2[5]);
  t3941 = Sin(var2[6]);
  t3939 = -1.*t3937*t3938;
  t3942 = -1.*t3940*t3941;
  t3943 = t3939 + t3942;
  t3944 = t3850*t3943;
  t3945 = t3940*t3937;
  t3946 = -1.*t3938*t3941;
  t3947 = t3945 + t3946;
  t3948 = t3859*t3947;
  t3949 = t3944 + t3948;
  t3957 = -1.*t3937;
  t3958 = 1. + t3957;
  t3959 = 0.4*t3958;
  t3960 = 0.64*t3937;
  t3961 = t3959 + t3960;
  t3868 = t3859*t3854;
  t3869 = -1.*t3850*t3852;
  t3870 = t3868 + t3869;
  t3926 = t3851*t3852;
  t3927 = t3854*t3855;
  t3928 = t3926 + t3927;
  t3929 = t3859*t3928;
  t3930 = t3850*t3862;
  t3931 = t3929 + t3930;
  t3953 = t3859*t3940;
  t3954 = -1.*t3850*t3938;
  t3955 = t3953 + t3954;
  t3972 = t3937*t3938;
  t3973 = t3940*t3941;
  t3974 = t3972 + t3973;
  t3975 = t3859*t3974;
  t3976 = t3850*t3947;
  t3977 = t3975 + t3976;
  t3987 = t3854*t3850;
  t3988 = t3859*t3852;
  t3989 = t3987 + t3988;
  t4002 = t3940*t3850;
  t4003 = t3859*t3938;
  t4004 = t4002 + t4003;
  t4048 = t3917*t3852;
  t4049 = 0.24*t3854*t3855;
  t4050 = t4048 + t4049;
  t4052 = t3854*t3917;
  t4053 = -0.24*t3852*t3855;
  t4054 = t4052 + t4053;
  t4068 = t3961*t3938;
  t4069 = 0.24*t3940*t3941;
  t4070 = t4068 + t4069;
  t4072 = t3940*t3961;
  t4073 = -0.24*t3938*t3941;
  t4074 = t4072 + t4073;
  t3848 = -1.*var1[6];
  t3849 = var3[4] + t3848;
  t3991 = t3859*t3857;
  t3992 = -1.*t3850*t3862;
  t3993 = t3991 + t3992;
  t3866 = -1.*var1[5];
  t3867 = var3[3] + t3866;
  t3983 = -1.*t3854*t3850;
  t3984 = -1.*t3859*t3852;
  t3985 = t3983 + t3984;
  t3923 = t3917*t3855;
  t3924 = -0.24*t3851*t3855;
  t3925 = t3923 + t3924;
  t3995 = -1.*t3850*t3928;
  t3996 = t3995 + t3863;
  t3918 = t3917*t3851;
  t3919 = Power(t3855,2);
  t3920 = 0.24*t3919;
  t3921 = t3918 + t3920;
  t3935 = -1.*var1[4];
  t3936 = var3[6] + t3935;
  t4006 = t3859*t3943;
  t4007 = -1.*t3850*t3947;
  t4008 = t4006 + t4007;
  t3951 = -1.*var1[3];
  t3952 = var3[5] + t3951;
  t3998 = -1.*t3940*t3850;
  t3999 = -1.*t3859*t3938;
  t4000 = t3998 + t3999;
  t3969 = t3961*t3941;
  t3970 = -0.24*t3937*t3941;
  t3971 = t3969 + t3970;
  t4010 = -1.*t3850*t3974;
  t4011 = t4010 + t3948;
  t3962 = t3961*t3937;
  t3965 = Power(t3941,2);
  t3966 = 0.24*t3965;
  t3967 = t3962 + t3966;
  t3981 = -1.*var1[1];
  t3982 = var3[1] + t3981;
  t4017 = Power(t3859,2);
  t4018 = 12.*t4017;
  t4019 = Power(t3850,2);
  t4020 = 12.*t4019;
  t4023 = Power(t3870,2);
  t4024 = 6.8*t4023;
  t4031 = Power(t3955,2);
  t4032 = 6.8*t4031;
  t4015 = -1.*var1[0];
  t4016 = var3[0] + t4015;
  t3986 = 6.8*t3985*t3870;
  t3990 = 6.8*t3989*t3870;
  t3994 = 3.2*t3864*t3993;
  t3997 = 3.2*t3996*t3931;
  t4001 = 6.8*t4000*t3955;
  t4005 = 6.8*t4004*t3955;
  t4009 = 3.2*t3949*t4008;
  t4012 = 3.2*t4011*t3977;
  t4013 = t3986 + t3990 + t3994 + t3997 + t4001 + t4005 + t4009 + t4012;
  t4039 = -1.*var1[2];
  t4040 = var3[2] + t4039;
  t4042 = Power(t3854,2);
  t4043 = 0.11*t4042;
  t4044 = Power(t3852,2);
  t4045 = 0.11*t4044;
  t4046 = t4043 + t4045;
  t4051 = -1.*t4050*t3862;
  t4055 = -1.*t3857*t4054;
  t4056 = t4051 + t4055;
  t4058 = t4050*t3928;
  t4059 = t3862*t4054;
  t4060 = t4058 + t4059;
  t4062 = Power(t3940,2);
  t4063 = 0.11*t4062;
  t4064 = Power(t3938,2);
  t4065 = 0.11*t4064;
  t4066 = t4063 + t4065;
  t4071 = -1.*t4070*t3947;
  t4075 = -1.*t3943*t4074;
  t4076 = t4071 + t4075;
  t4078 = t4070*t3974;
  t4079 = t3947*t4074;
  t4080 = t4078 + t4079;
  t4132 = -1.*t3859*t3854;
  t4133 = t3850*t3852;
  t4134 = t4132 + t4133;
  t4041 = 2.88*t3859;
  t4047 = 6.8*t3870*t4046;
  t4057 = 3.2*t3931*t4056;
  t4061 = 3.2*t3864*t4060;
  t4067 = 6.8*t3955*t4066;
  t4077 = 3.2*t3977*t4076;
  t4081 = 3.2*t3949*t4080;
  t4082 = t4041 + t4047 + t4057 + t4061 + t4067 + t4077 + t4081;
  t4113 = -2.88*t3850;
  t4114 = 6.8*t3985*t4046;
  t4115 = 3.2*t3996*t4056;
  t4116 = 3.2*t3993*t4060;
  t4117 = 6.8*t4000*t4066;
  t4118 = 3.2*t4011*t4076;
  t4119 = 3.2*t4008*t4080;
  t4120 = t4113 + t4114 + t4115 + t4116 + t4117 + t4118 + t4119;
  t4123 = 0.4*t3914*t3870;
  t4124 = -0.4*t3985*t3855;
  t4125 = t3851*t3870;
  t4126 = t3985*t3855;
  t4127 = t4125 + t4126;
  t4128 = 0.8*t4127;
  t4129 = t4123 + t4124 + t4128;
  t4130 = -1.*var4[0]*t4129;
  t4131 = 0.4*t3914*t3985;
  t4135 = -0.4*t4134*t3855;
  t4136 = t3851*t3985;
  t4137 = t4134*t3855;
  t4138 = t4136 + t4137;
  t4139 = 0.8*t4138;
  t4140 = t4131 + t4135 + t4139;
  t4141 = -1.*var4[2]*t4140;
  t4087 = 0.748*t3985;
  t4088 = 3.2*t3925*t3996;
  t4089 = 3.2*t3921*t3993;
  t4090 = t4087 + t4088 + t4089;
  t3871 = 0.748*t3870;
  t3922 = 3.2*t3921*t3864;
  t3932 = 3.2*t3925*t3931;
  t3933 = t3871 + t3922 + t3932;
  t4145 = 0.748*t4046;
  t4146 = 3.2*t3925*t4056;
  t4147 = 3.2*t3921*t4060;
  t4148 = 0.67 + t4145 + t4146 + t4147;
  t4175 = 0.768*t3921;
  t4176 = 0.2 + t4175;
  t4142 = 0.768*t4060;
  t4143 = 0.2 + t4142;
  t4093 = 0.748*t4000;
  t4094 = 3.2*t3971*t4011;
  t4095 = 3.2*t3967*t4008;
  t4096 = t4093 + t4094 + t4095;
  t3956 = 0.748*t3955;
  t3968 = 3.2*t3967*t3949;
  t3978 = 3.2*t3971*t3977;
  t3979 = t3956 + t3968 + t3978;
  t4153 = 0.748*t4066;
  t4154 = 3.2*t3971*t4076;
  t4155 = 3.2*t3967*t4080;
  t4156 = 0.67 + t4153 + t4154 + t4155;
  t4208 = 0.768*t3967;
  t4209 = 0.2 + t4208;
  t4150 = 0.768*t4080;
  t4151 = 0.2 + t4150;
  p_output1[0]=0.768*t3849*t3864 + t3867*t3933 + 0.768*t3936*t3949 + t3952*t3979 + t3982*t4013 + t4016*(3.2*Power(t3864,2) + 3.2*Power(t3931,2) + 3.2*Power(t3949,2) + 3.2*Power(t3977,2) + 6.8*Power(t3989,2) + 6.8*Power(t4004,2) + t4018 + t4020 + t4024 + t4032) + t4040*t4082 - 1.*var4[0];
  p_output1[1]=0.768*t3849*t3993 + 0.768*t3936*t4008 + t4013*t4016 + t3982*(6.8*Power(t3985,2) + 3.2*Power(t3993,2) + 3.2*Power(t3996,2) + 6.8*Power(t4000,2) + 3.2*Power(t4008,2) + 3.2*Power(t4011,2) + t4018 + t4020 + t4024 + t4032) + t3867*t4090 + t3952*t4096 + t4040*t4120 - 1.*var4[2];
  p_output1[2]=t4040*(3.3612 + 6.8*Power(t4046,2) + 3.2*Power(t4056,2) + 3.2*Power(t4060,2) + 6.8*Power(t4066,2) + 3.2*Power(t4076,2) + 3.2*Power(t4080,2)) + t4016*t4082 + t3982*t4120 + t4130 + t4141 + t3849*t4143 + t3867*t4148 + t3936*t4151 + t3952*t4156;
  p_output1[3]=t3867*(1.58228 + 3.2*Power(t3921,2) + 3.2*Power(t3925,2)) + t3933*t4016 + t3982*t4090 + t4130 + t4141 + t4040*t4148 + t3849*t4176;
  p_output1[4]=1.2143199999999998*t3849 + 0.768*t3982*t3993 + 0.768*t3864*t4016 + t4040*t4143 + t3867*t4176 - 1.*(-0.4*t3851*t3870 + 0.4*t3855*t3989 + 0.8*(-1.*t3855*t3989 + t4125))*var4[0] - 1.*(0.4*t3855*t3870 - 0.4*t3851*t3985 + 0.8*(-1.*t3855*t3870 + t4136))*var4[2];
  p_output1[5]=t3952*(1.58228 + 3.2*Power(t3967,2) + 3.2*Power(t3971,2)) + t3979*t4016 + t3982*t4096 + t4040*t4156 + t3936*t4209;
  p_output1[6]=1.2143199999999998*t3936 + 0.768*t3982*t4008 + 0.768*t3949*t4016 + t4040*t4151 + t3952*t4209;
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
