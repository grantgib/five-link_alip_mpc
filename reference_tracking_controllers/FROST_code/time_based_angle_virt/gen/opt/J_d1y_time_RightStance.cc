/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:19:56 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t3707;
  double t3685;
  double t3686;
  double t3692;
  double t3693;
  double t3706;
  double t3710;
  double t3711;
  double t3713;
  double t3714;
  double t3715;
  double t3716;
  double t3717;
  double t3723;
  double t3724;
  double t3725;
  double t3726;
  double t3727;
  double t3731;
  double t3732;
  double t3736;
  double t3737;
  double t3755;
  double t3766;
  double t3771;
  double t3791;
  double t3792;
  double t3756;
  double t3757;
  double t3758;
  double t3759;
  double t3760;
  double t3761;
  double t3762;
  double t3763;
  double t3764;
  double t3765;
  double t3767;
  double t3768;
  double t3769;
  double t3770;
  t3707 = -1.*var5[1];
  t3685 = -1. + var6[0];
  t3686 = -1. + var7[0];
  t3692 = 1/t3686;
  t3693 = -1.*t3685*t3692;
  t3706 = 1. + t3693;
  t3710 = var5[0] + t3707;
  t3711 = Power(t3710,-5);
  t3713 = -1.*var1[0];
  t3714 = t3713 + var1[1];
  t3715 = t3685*t3692*t3714;
  t3716 = t3707 + var1[0] + t3715;
  t3717 = Power(t3716,3);
  t3723 = Power(t3710,-4);
  t3724 = Power(t3716,2);
  t3725 = 1/t3710;
  t3726 = -1.*t3725*t3716;
  t3727 = 1. + t3726;
  t3731 = Power(t3710,-3);
  t3732 = Power(t3727,2);
  t3736 = Power(t3710,-2);
  t3737 = Power(t3727,3);
  t3755 = Power(t3727,4);
  t3766 = Power(t3716,4);
  t3771 = Power(t3710,-6);
  t3791 = -1.*t3736*t3716;
  t3792 = t3725 + t3791;
  t3756 = 5.*t3725*t3755;
  t3757 = 20.*t3736*t3716*t3737;
  t3758 = -5.*t3725*t3755;
  t3759 = t3757 + t3758;
  t3760 = 30.*t3731*t3724*t3732;
  t3761 = -20.*t3736*t3716*t3737;
  t3762 = t3760 + t3761;
  t3763 = 20.*t3723*t3717*t3727;
  t3764 = -30.*t3731*t3724*t3732;
  t3765 = t3763 + t3764;
  t3767 = 5.*t3711*t3766;
  t3768 = -20.*t3723*t3717*t3727;
  t3769 = t3767 + t3768;
  t3770 = -5.*t3711*t3766;
  p_output1[0]=-20.*t3706*t3736*t3737*var4[0] - 60.*t3706*t3716*t3731*t3732*var4[4] + 40.*t3706*t3736*t3737*var4[4] - 60.*t3706*t3723*t3724*t3727*var4[8] + 120.*t3706*t3716*t3731*t3732*var4[8] - 20.*t3706*t3736*t3737*var4[8] - 20.*t3706*t3711*t3717*var4[12] + 120.*t3706*t3723*t3724*t3727*var4[12] - 60.*t3706*t3716*t3731*t3732*var4[12] + 40.*t3706*t3711*t3717*var4[16] - 60.*t3706*t3723*t3724*t3727*var4[16] - 20.*t3706*t3711*t3717*var4[20];
  p_output1[1]=-20.*t3685*t3692*t3736*t3737*var4[0] - 60.*t3685*t3692*t3716*t3731*t3732*var4[4] + 40.*t3685*t3692*t3736*t3737*var4[4] - 60.*t3685*t3692*t3723*t3724*t3727*var4[8] + 120.*t3685*t3692*t3716*t3731*t3732*var4[8] - 20.*t3685*t3692*t3736*t3737*var4[8] - 20.*t3685*t3692*t3711*t3717*var4[12] + 120.*t3685*t3692*t3723*t3724*t3727*var4[12] - 60.*t3685*t3692*t3716*t3731*t3732*var4[12] + 40.*t3685*t3692*t3711*t3717*var4[16] - 60.*t3685*t3692*t3723*t3724*t3727*var4[16] - 20.*t3685*t3692*t3711*t3717*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t3756;
  p_output1[4]=t3759;
  p_output1[5]=t3762;
  p_output1[6]=t3765;
  p_output1[7]=t3769;
  p_output1[8]=t3770;
  p_output1[9]=20.*t3716*t3731*t3737*var4[0] - 5.*t3736*t3755*var4[0] + 60.*t3723*t3724*t3732*var4[4] - 60.*t3716*t3731*t3737*var4[4] + 5.*t3736*t3755*var4[4] + 60.*t3711*t3717*t3727*var4[8] - 150.*t3723*t3724*t3732*var4[8] + 40.*t3716*t3731*t3737*var4[8] - 140.*t3711*t3717*t3727*var4[12] + 90.*t3723*t3724*t3732*var4[12] + 20.*t3766*t3771*var4[12] + 80.*t3711*t3717*t3727*var4[16] - 45.*t3766*t3771*var4[16] + 25.*t3766*t3771*var4[20];
  p_output1[10]=5.*t3736*t3755*var4[0] + 20.*t3725*t3737*t3792*var4[0] + 40.*t3716*t3731*t3737*var4[4] - 20.*t3736*t3737*var4[4] - 5.*t3736*t3755*var4[4] + 60.*t3716*t3732*t3736*t3792*var4[4] - 20.*t3725*t3737*t3792*var4[4] + 90.*t3723*t3724*t3732*var4[8] - 60.*t3716*t3731*t3732*var4[8] - 40.*t3716*t3731*t3737*var4[8] + 20.*t3736*t3737*var4[8] + 60.*t3724*t3727*t3731*t3792*var4[8] - 60.*t3716*t3732*t3736*t3792*var4[8] + 80.*t3711*t3717*t3727*var4[12] - 60.*t3723*t3724*t3727*var4[12] - 90.*t3723*t3724*t3732*var4[12] + 60.*t3716*t3731*t3732*var4[12] + 20.*t3717*t3723*t3792*var4[12] - 60.*t3724*t3727*t3731*t3792*var4[12] - 20.*t3711*t3717*var4[16] - 80.*t3711*t3717*t3727*var4[16] + 60.*t3723*t3724*t3727*var4[16] + 25.*t3766*t3771*var4[16] - 20.*t3717*t3723*t3792*var4[16] + 20.*t3711*t3717*var4[20] - 25.*t3766*t3771*var4[20];
  p_output1[11]=-20.*t3706*t3736*t3737*var4[1] - 60.*t3706*t3716*t3731*t3732*var4[5] + 40.*t3706*t3736*t3737*var4[5] - 60.*t3706*t3723*t3724*t3727*var4[9] + 120.*t3706*t3716*t3731*t3732*var4[9] - 20.*t3706*t3736*t3737*var4[9] - 20.*t3706*t3711*t3717*var4[13] + 120.*t3706*t3723*t3724*t3727*var4[13] - 60.*t3706*t3716*t3731*t3732*var4[13] + 40.*t3706*t3711*t3717*var4[17] - 60.*t3706*t3723*t3724*t3727*var4[17] - 20.*t3706*t3711*t3717*var4[21];
  p_output1[12]=-20.*t3685*t3692*t3736*t3737*var4[1] - 60.*t3685*t3692*t3716*t3731*t3732*var4[5] + 40.*t3685*t3692*t3736*t3737*var4[5] - 60.*t3685*t3692*t3723*t3724*t3727*var4[9] + 120.*t3685*t3692*t3716*t3731*t3732*var4[9] - 20.*t3685*t3692*t3736*t3737*var4[9] - 20.*t3685*t3692*t3711*t3717*var4[13] + 120.*t3685*t3692*t3723*t3724*t3727*var4[13] - 60.*t3685*t3692*t3716*t3731*t3732*var4[13] + 40.*t3685*t3692*t3711*t3717*var4[17] - 60.*t3685*t3692*t3723*t3724*t3727*var4[17] - 20.*t3685*t3692*t3711*t3717*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t3756;
  p_output1[15]=t3759;
  p_output1[16]=t3762;
  p_output1[17]=t3765;
  p_output1[18]=t3769;
  p_output1[19]=t3770;
  p_output1[20]=20.*t3716*t3731*t3737*var4[1] - 5.*t3736*t3755*var4[1] + 60.*t3723*t3724*t3732*var4[5] - 60.*t3716*t3731*t3737*var4[5] + 5.*t3736*t3755*var4[5] + 60.*t3711*t3717*t3727*var4[9] - 150.*t3723*t3724*t3732*var4[9] + 40.*t3716*t3731*t3737*var4[9] - 140.*t3711*t3717*t3727*var4[13] + 90.*t3723*t3724*t3732*var4[13] + 20.*t3766*t3771*var4[13] + 80.*t3711*t3717*t3727*var4[17] - 45.*t3766*t3771*var4[17] + 25.*t3766*t3771*var4[21];
  p_output1[21]=5.*t3736*t3755*var4[1] + 20.*t3725*t3737*t3792*var4[1] + 40.*t3716*t3731*t3737*var4[5] - 20.*t3736*t3737*var4[5] - 5.*t3736*t3755*var4[5] + 60.*t3716*t3732*t3736*t3792*var4[5] - 20.*t3725*t3737*t3792*var4[5] + 90.*t3723*t3724*t3732*var4[9] - 60.*t3716*t3731*t3732*var4[9] - 40.*t3716*t3731*t3737*var4[9] + 20.*t3736*t3737*var4[9] + 60.*t3724*t3727*t3731*t3792*var4[9] - 60.*t3716*t3732*t3736*t3792*var4[9] + 80.*t3711*t3717*t3727*var4[13] - 60.*t3723*t3724*t3727*var4[13] - 90.*t3723*t3724*t3732*var4[13] + 60.*t3716*t3731*t3732*var4[13] + 20.*t3717*t3723*t3792*var4[13] - 60.*t3724*t3727*t3731*t3792*var4[13] - 20.*t3711*t3717*var4[17] - 80.*t3711*t3717*t3727*var4[17] + 60.*t3723*t3724*t3727*var4[17] + 25.*t3766*t3771*var4[17] - 20.*t3717*t3723*t3792*var4[17] + 20.*t3711*t3717*var4[21] - 25.*t3766*t3771*var4[21];
  p_output1[22]=-20.*t3706*t3736*t3737*var4[2] - 60.*t3706*t3716*t3731*t3732*var4[6] + 40.*t3706*t3736*t3737*var4[6] - 60.*t3706*t3723*t3724*t3727*var4[10] + 120.*t3706*t3716*t3731*t3732*var4[10] - 20.*t3706*t3736*t3737*var4[10] - 20.*t3706*t3711*t3717*var4[14] + 120.*t3706*t3723*t3724*t3727*var4[14] - 60.*t3706*t3716*t3731*t3732*var4[14] + 40.*t3706*t3711*t3717*var4[18] - 60.*t3706*t3723*t3724*t3727*var4[18] - 20.*t3706*t3711*t3717*var4[22];
  p_output1[23]=-20.*t3685*t3692*t3736*t3737*var4[2] - 60.*t3685*t3692*t3716*t3731*t3732*var4[6] + 40.*t3685*t3692*t3736*t3737*var4[6] - 60.*t3685*t3692*t3723*t3724*t3727*var4[10] + 120.*t3685*t3692*t3716*t3731*t3732*var4[10] - 20.*t3685*t3692*t3736*t3737*var4[10] - 20.*t3685*t3692*t3711*t3717*var4[14] + 120.*t3685*t3692*t3723*t3724*t3727*var4[14] - 60.*t3685*t3692*t3716*t3731*t3732*var4[14] + 40.*t3685*t3692*t3711*t3717*var4[18] - 60.*t3685*t3692*t3723*t3724*t3727*var4[18] - 20.*t3685*t3692*t3711*t3717*var4[22];
  p_output1[24]=1.;
  p_output1[25]=1.;
  p_output1[26]=1.;
  p_output1[27]=t3756;
  p_output1[28]=t3759;
  p_output1[29]=t3762;
  p_output1[30]=t3765;
  p_output1[31]=t3769;
  p_output1[32]=t3770;
  p_output1[33]=20.*t3716*t3731*t3737*var4[2] - 5.*t3736*t3755*var4[2] + 60.*t3723*t3724*t3732*var4[6] - 60.*t3716*t3731*t3737*var4[6] + 5.*t3736*t3755*var4[6] + 60.*t3711*t3717*t3727*var4[10] - 150.*t3723*t3724*t3732*var4[10] + 40.*t3716*t3731*t3737*var4[10] - 140.*t3711*t3717*t3727*var4[14] + 90.*t3723*t3724*t3732*var4[14] + 20.*t3766*t3771*var4[14] + 80.*t3711*t3717*t3727*var4[18] - 45.*t3766*t3771*var4[18] + 25.*t3766*t3771*var4[22];
  p_output1[34]=5.*t3736*t3755*var4[2] + 20.*t3725*t3737*t3792*var4[2] + 40.*t3716*t3731*t3737*var4[6] - 20.*t3736*t3737*var4[6] - 5.*t3736*t3755*var4[6] + 60.*t3716*t3732*t3736*t3792*var4[6] - 20.*t3725*t3737*t3792*var4[6] + 90.*t3723*t3724*t3732*var4[10] - 60.*t3716*t3731*t3732*var4[10] - 40.*t3716*t3731*t3737*var4[10] + 20.*t3736*t3737*var4[10] + 60.*t3724*t3727*t3731*t3792*var4[10] - 60.*t3716*t3732*t3736*t3792*var4[10] + 80.*t3711*t3717*t3727*var4[14] - 60.*t3723*t3724*t3727*var4[14] - 90.*t3723*t3724*t3732*var4[14] + 60.*t3716*t3731*t3732*var4[14] + 20.*t3717*t3723*t3792*var4[14] - 60.*t3724*t3727*t3731*t3792*var4[14] - 20.*t3711*t3717*var4[18] - 80.*t3711*t3717*t3727*var4[18] + 60.*t3723*t3724*t3727*var4[18] + 25.*t3766*t3771*var4[18] - 20.*t3717*t3723*t3792*var4[18] + 20.*t3711*t3717*var4[22] - 25.*t3766*t3771*var4[22];
  p_output1[35]=-20.*t3706*t3736*t3737*var4[3] - 60.*t3706*t3716*t3731*t3732*var4[7] + 40.*t3706*t3736*t3737*var4[7] - 60.*t3706*t3723*t3724*t3727*var4[11] + 120.*t3706*t3716*t3731*t3732*var4[11] - 20.*t3706*t3736*t3737*var4[11] - 20.*t3706*t3711*t3717*var4[15] + 120.*t3706*t3723*t3724*t3727*var4[15] - 60.*t3706*t3716*t3731*t3732*var4[15] + 40.*t3706*t3711*t3717*var4[19] - 60.*t3706*t3723*t3724*t3727*var4[19] - 20.*t3706*t3711*t3717*var4[23];
  p_output1[36]=-20.*t3685*t3692*t3736*t3737*var4[3] - 60.*t3685*t3692*t3716*t3731*t3732*var4[7] + 40.*t3685*t3692*t3736*t3737*var4[7] - 60.*t3685*t3692*t3723*t3724*t3727*var4[11] + 120.*t3685*t3692*t3716*t3731*t3732*var4[11] - 20.*t3685*t3692*t3736*t3737*var4[11] - 20.*t3685*t3692*t3711*t3717*var4[15] + 120.*t3685*t3692*t3723*t3724*t3727*var4[15] - 60.*t3685*t3692*t3716*t3731*t3732*var4[15] + 40.*t3685*t3692*t3711*t3717*var4[19] - 60.*t3685*t3692*t3723*t3724*t3727*var4[19] - 20.*t3685*t3692*t3711*t3717*var4[23];
  p_output1[37]=1.;
  p_output1[38]=1.;
  p_output1[39]=1.;
  p_output1[40]=t3756;
  p_output1[41]=t3759;
  p_output1[42]=t3762;
  p_output1[43]=t3765;
  p_output1[44]=t3769;
  p_output1[45]=t3770;
  p_output1[46]=20.*t3716*t3731*t3737*var4[3] - 5.*t3736*t3755*var4[3] + 60.*t3723*t3724*t3732*var4[7] - 60.*t3716*t3731*t3737*var4[7] + 5.*t3736*t3755*var4[7] + 60.*t3711*t3717*t3727*var4[11] - 150.*t3723*t3724*t3732*var4[11] + 40.*t3716*t3731*t3737*var4[11] - 140.*t3711*t3717*t3727*var4[15] + 90.*t3723*t3724*t3732*var4[15] + 20.*t3766*t3771*var4[15] + 80.*t3711*t3717*t3727*var4[19] - 45.*t3766*t3771*var4[19] + 25.*t3766*t3771*var4[23];
  p_output1[47]=5.*t3736*t3755*var4[3] + 20.*t3725*t3737*t3792*var4[3] + 40.*t3716*t3731*t3737*var4[7] - 20.*t3736*t3737*var4[7] - 5.*t3736*t3755*var4[7] + 60.*t3716*t3732*t3736*t3792*var4[7] - 20.*t3725*t3737*t3792*var4[7] + 90.*t3723*t3724*t3732*var4[11] - 60.*t3716*t3731*t3732*var4[11] - 40.*t3716*t3731*t3737*var4[11] + 20.*t3736*t3737*var4[11] + 60.*t3724*t3727*t3731*t3792*var4[11] - 60.*t3716*t3732*t3736*t3792*var4[11] + 80.*t3711*t3717*t3727*var4[15] - 60.*t3723*t3724*t3727*var4[15] - 90.*t3723*t3724*t3732*var4[15] + 60.*t3716*t3731*t3732*var4[15] + 20.*t3717*t3723*t3792*var4[15] - 60.*t3724*t3727*t3731*t3792*var4[15] - 20.*t3711*t3717*var4[19] - 80.*t3711*t3717*t3727*var4[19] + 60.*t3723*t3724*t3727*var4[19] + 25.*t3766*t3771*var4[19] - 20.*t3717*t3723*t3792*var4[19] + 20.*t3711*t3717*var4[23] - 25.*t3766*t3771*var4[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 48, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_time_RightStance.hh"

namespace RightStance
{

void J_d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
