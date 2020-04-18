/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 16:57:23 GMT-04:00
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
  double t3948;
  double t1608;
  double t3951;
  double t3953;
  double t3966;
  double t3968;
  double t3972;
  double t3973;
  double t3974;
  double t3987;
  double t3989;
  double t3999;
  double t4001;
  double t4005;
  double t4006;
  double t4007;
  double t3961;
  double t3962;
  double t3963;
  double t3952;
  double t3957;
  double t3958;
  double t3967;
  double t3969;
  double t3970;
  double t3971;
  double t3975;
  double t3976;
  double t3979;
  double t3980;
  double t3981;
  double t3982;
  double t3983;
  double t3984;
  double t3994;
  double t3995;
  double t3996;
  double t3988;
  double t3990;
  double t3991;
  double t4000;
  double t4002;
  double t4003;
  double t4004;
  double t4008;
  double t4009;
  double t4012;
  double t4013;
  double t4014;
  double t4015;
  double t4016;
  double t4017;
  double t4053;
  double t4054;
  double t4055;
  double t4056;
  double t4057;
  double t4058;
  double t4059;
  double t4060;
  double t4062;
  double t4063;
  double t4064;
  double t4078;
  double t4079;
  double t4080;
  double t4081;
  double t4082;
  double t4083;
  double t4084;
  double t4085;
  double t4087;
  double t4088;
  double t4089;
  double t4021;
  double t4022;
  double t4023;
  double t4024;
  double t4025;
  double t4026;
  double t4027;
  double t4028;
  double t4029;
  double t4030;
  double t4031;
  double t4032;
  double t4033;
  double t4034;
  double t4035;
  double t4036;
  double t4037;
  double t4038;
  double t4039;
  double t4040;
  double t4041;
  double t4042;
  double t4043;
  double t4044;
  double t4045;
  double t3942;
  double t3947;
  double t3949;
  double t3950;
  double t3964;
  double t3965;
  double t3997;
  double t3998;
  double t4047;
  double t4048;
  double t4049;
  double t4050;
  double t4051;
  double t4061;
  double t4065;
  double t4066;
  double t4068;
  double t4069;
  double t4070;
  double t4072;
  double t4073;
  double t4074;
  double t4075;
  double t4076;
  double t4086;
  double t4090;
  double t4091;
  double t4093;
  double t4094;
  double t4095;
  double t4104;
  double t4105;
  double t4106;
  double t4099;
  double t4100;
  double t4101;
  double t4102;
  double t4116;
  double t4117;
  double t4118;
  double t4111;
  double t4112;
  double t4113;
  double t4114;
  double t4046;
  double t4052;
  double t4067;
  double t4071;
  double t4077;
  double t4092;
  double t4096;
  double t4097;
  double t4135;
  double t4136;
  double t4137;
  double t4138;
  double t4139;
  double t4140;
  double t4141;
  double t4142;
  double t4098;
  double t4103;
  double t4107;
  double t4108;
  double t4143;
  double t4144;
  double t4145;
  double t4146;
  double t4166;
  double t4167;
  double t4168;
  double t4169;
  double t4109;
  double t4147;
  double t4170;
  double t4171;
  double t4183;
  double t4184;
  double t4110;
  double t4115;
  double t4119;
  double t4120;
  double t4148;
  double t4149;
  double t4150;
  double t4151;
  double t4172;
  double t4173;
  double t4174;
  double t4175;
  double t4121;
  double t4152;
  double t4176;
  double t4177;
  double t4190;
  double t4191;
  t3948 = Sin(var1[2]);
  t1608 = Cos(var1[2]);
  t3951 = Cos(var1[3]);
  t3953 = Sin(var1[3]);
  t3966 = Cos(var1[4]);
  t3968 = Sin(var1[4]);
  t3972 = t3951*t3966;
  t3973 = -1.*t3953*t3968;
  t3974 = t3972 + t3973;
  t3987 = Cos(var1[5]);
  t3989 = Sin(var1[5]);
  t3999 = Cos(var1[6]);
  t4001 = Sin(var1[6]);
  t4005 = t3987*t3999;
  t4006 = -1.*t3989*t4001;
  t4007 = t4005 + t4006;
  t3961 = t1608*t3951;
  t3962 = -1.*t3948*t3953;
  t3963 = t3961 + t3962;
  t3952 = t3951*t3948;
  t3957 = t1608*t3953;
  t3958 = t3952 + t3957;
  t3967 = -1.*t3966*t3953;
  t3969 = -1.*t3951*t3968;
  t3970 = t3967 + t3969;
  t3971 = t3948*t3970;
  t3975 = t1608*t3974;
  t3976 = t3971 + t3975;
  t3979 = t3966*t3953;
  t3980 = t3951*t3968;
  t3981 = t3979 + t3980;
  t3982 = t1608*t3981;
  t3983 = t3948*t3974;
  t3984 = t3982 + t3983;
  t3994 = t1608*t3987;
  t3995 = -1.*t3948*t3989;
  t3996 = t3994 + t3995;
  t3988 = t3987*t3948;
  t3990 = t1608*t3989;
  t3991 = t3988 + t3990;
  t4000 = -1.*t3999*t3989;
  t4002 = -1.*t3987*t4001;
  t4003 = t4000 + t4002;
  t4004 = t3948*t4003;
  t4008 = t1608*t4007;
  t4009 = t4004 + t4008;
  t4012 = t3999*t3989;
  t4013 = t3987*t4001;
  t4014 = t4012 + t4013;
  t4015 = t1608*t4014;
  t4016 = t3948*t4007;
  t4017 = t4015 + t4016;
  t4053 = -1.*t3966;
  t4054 = 1. + t4053;
  t4055 = 0.4*t4054;
  t4056 = 0.64*t3966;
  t4057 = t4055 + t4056;
  t4058 = t4057*t3953;
  t4059 = 0.24*t3951*t3968;
  t4060 = t4058 + t4059;
  t4062 = t3951*t4057;
  t4063 = -0.24*t3953*t3968;
  t4064 = t4062 + t4063;
  t4078 = -1.*t3999;
  t4079 = 1. + t4078;
  t4080 = 0.4*t4079;
  t4081 = 0.64*t3999;
  t4082 = t4080 + t4081;
  t4083 = t4082*t3989;
  t4084 = 0.24*t3987*t4001;
  t4085 = t4083 + t4084;
  t4087 = t3987*t4082;
  t4088 = -0.24*t3989*t4001;
  t4089 = t4087 + t4088;
  t4021 = -1.*t3951*t3948;
  t4022 = -1.*t1608*t3953;
  t4023 = t4021 + t4022;
  t4024 = 6.8*t4023*t3963;
  t4025 = 6.8*t3958*t3963;
  t4026 = t1608*t3970;
  t4027 = -1.*t3948*t3974;
  t4028 = t4026 + t4027;
  t4029 = 3.2*t3976*t4028;
  t4030 = -1.*t3948*t3981;
  t4031 = t4030 + t3975;
  t4032 = 3.2*t4031*t3984;
  t4033 = -1.*t3987*t3948;
  t4034 = -1.*t1608*t3989;
  t4035 = t4033 + t4034;
  t4036 = 6.8*t4035*t3996;
  t4037 = 6.8*t3991*t3996;
  t4038 = t1608*t4003;
  t4039 = -1.*t3948*t4007;
  t4040 = t4038 + t4039;
  t4041 = 3.2*t4009*t4040;
  t4042 = -1.*t3948*t4014;
  t4043 = t4042 + t4008;
  t4044 = 3.2*t4043*t4017;
  t4045 = t4024 + t4025 + t4029 + t4032 + t4036 + t4037 + t4041 + t4044;
  t3942 = Power(t1608,2);
  t3947 = 12.*t3942;
  t3949 = Power(t3948,2);
  t3950 = 12.*t3949;
  t3964 = Power(t3963,2);
  t3965 = 6.8*t3964;
  t3997 = Power(t3996,2);
  t3998 = 6.8*t3997;
  t4047 = Power(t3951,2);
  t4048 = 0.11*t4047;
  t4049 = Power(t3953,2);
  t4050 = 0.11*t4049;
  t4051 = t4048 + t4050;
  t4061 = -1.*t4060*t3974;
  t4065 = -1.*t3970*t4064;
  t4066 = t4061 + t4065;
  t4068 = t4060*t3981;
  t4069 = t3974*t4064;
  t4070 = t4068 + t4069;
  t4072 = Power(t3987,2);
  t4073 = 0.11*t4072;
  t4074 = Power(t3989,2);
  t4075 = 0.11*t4074;
  t4076 = t4073 + t4075;
  t4086 = -1.*t4085*t4007;
  t4090 = -1.*t4003*t4089;
  t4091 = t4086 + t4090;
  t4093 = t4085*t4014;
  t4094 = t4007*t4089;
  t4095 = t4093 + t4094;
  t4104 = t4057*t3968;
  t4105 = -0.24*t3966*t3968;
  t4106 = t4104 + t4105;
  t4099 = t4057*t3966;
  t4100 = Power(t3968,2);
  t4101 = 0.24*t4100;
  t4102 = t4099 + t4101;
  t4116 = t4082*t4001;
  t4117 = -0.24*t3999*t4001;
  t4118 = t4116 + t4117;
  t4111 = t4082*t3999;
  t4112 = Power(t4001,2);
  t4113 = 0.24*t4112;
  t4114 = t4111 + t4113;
  t4046 = 2.88*t1608;
  t4052 = 6.8*t3963*t4051;
  t4067 = 3.2*t3984*t4066;
  t4071 = 3.2*t3976*t4070;
  t4077 = 6.8*t3996*t4076;
  t4092 = 3.2*t4017*t4091;
  t4096 = 3.2*t4009*t4095;
  t4097 = t4046 + t4052 + t4067 + t4071 + t4077 + t4092 + t4096;
  t4135 = -2.88*t3948;
  t4136 = 6.8*t4023*t4051;
  t4137 = 3.2*t4031*t4066;
  t4138 = 3.2*t4028*t4070;
  t4139 = 6.8*t4035*t4076;
  t4140 = 3.2*t4043*t4091;
  t4141 = 3.2*t4040*t4095;
  t4142 = t4135 + t4136 + t4137 + t4138 + t4139 + t4140 + t4141;
  t4098 = 0.748*t3963;
  t4103 = 3.2*t4102*t3976;
  t4107 = 3.2*t4106*t3984;
  t4108 = t4098 + t4103 + t4107;
  t4143 = 0.748*t4023;
  t4144 = 3.2*t4106*t4031;
  t4145 = 3.2*t4102*t4028;
  t4146 = t4143 + t4144 + t4145;
  t4166 = 0.748*t4051;
  t4167 = 3.2*t4106*t4066;
  t4168 = 3.2*t4102*t4070;
  t4169 = 0.67 + t4166 + t4167 + t4168;
  t4109 = 0.768*t3976;
  t4147 = 0.768*t4028;
  t4170 = 0.768*t4070;
  t4171 = 0.2 + t4170;
  t4183 = 0.768*t4102;
  t4184 = 0.2 + t4183;
  t4110 = 0.748*t3996;
  t4115 = 3.2*t4114*t4009;
  t4119 = 3.2*t4118*t4017;
  t4120 = t4110 + t4115 + t4119;
  t4148 = 0.748*t4035;
  t4149 = 3.2*t4118*t4043;
  t4150 = 3.2*t4114*t4040;
  t4151 = t4148 + t4149 + t4150;
  t4172 = 0.748*t4076;
  t4173 = 3.2*t4118*t4091;
  t4174 = 3.2*t4114*t4095;
  t4175 = 0.67 + t4172 + t4173 + t4174;
  t4121 = 0.768*t4009;
  t4152 = 0.768*t4040;
  t4176 = 0.768*t4095;
  t4177 = 0.2 + t4176;
  t4190 = 0.768*t4114;
  t4191 = 0.2 + t4190;
  p_output1[0]=t3947 + t3950 + 6.8*Power(t3958,2) + t3965 + 3.2*Power(t3976,2) + 3.2*Power(t3984,2) + 6.8*Power(t3991,2) + t3998 + 3.2*Power(t4009,2) + 3.2*Power(t4017,2);
  p_output1[1]=t4045;
  p_output1[2]=t4097;
  p_output1[3]=t4108;
  p_output1[4]=t4109;
  p_output1[5]=t4120;
  p_output1[6]=t4121;
  p_output1[7]=t4045;
  p_output1[8]=t3947 + t3950 + t3965 + t3998 + 6.8*Power(t4023,2) + 3.2*Power(t4028,2) + 3.2*Power(t4031,2) + 6.8*Power(t4035,2) + 3.2*Power(t4040,2) + 3.2*Power(t4043,2);
  p_output1[9]=t4142;
  p_output1[10]=t4146;
  p_output1[11]=t4147;
  p_output1[12]=t4151;
  p_output1[13]=t4152;
  p_output1[14]=t4097;
  p_output1[15]=t4142;
  p_output1[16]=3.3612 + 6.8*Power(t4051,2) + 3.2*Power(t4066,2) + 3.2*Power(t4070,2) + 6.8*Power(t4076,2) + 3.2*Power(t4091,2) + 3.2*Power(t4095,2);
  p_output1[17]=t4169;
  p_output1[18]=t4171;
  p_output1[19]=t4175;
  p_output1[20]=t4177;
  p_output1[21]=t4108;
  p_output1[22]=t4146;
  p_output1[23]=t4169;
  p_output1[24]=1.58228 + 3.2*Power(t4102,2) + 3.2*Power(t4106,2);
  p_output1[25]=t4184;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t4109;
  p_output1[29]=t4147;
  p_output1[30]=t4171;
  p_output1[31]=t4184;
  p_output1[32]=1.2143199999999998;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t4120;
  p_output1[36]=t4151;
  p_output1[37]=t4175;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.58228 + 3.2*Power(t4114,2) + 3.2*Power(t4118,2);
  p_output1[41]=t4191;
  p_output1[42]=t4121;
  p_output1[43]=t4152;
  p_output1[44]=t4177;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=t4191;
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
