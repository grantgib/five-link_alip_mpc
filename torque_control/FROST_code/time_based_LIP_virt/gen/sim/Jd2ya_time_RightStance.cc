/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:00:58 GMT-05:00
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
  double t500;
  double t698;
  double t397;
  double t937;
  double t214;
  double t627;
  double t1213;
  double t1314;
  double t1430;
  double t1447;
  double t1463;
  double t1516;
  double t1677;
  double t1781;
  double t1836;
  double t6448;
  double t6599;
  double t6687;
  double t5642;
  double t5669;
  double t6737;
  double t6740;
  double t7213;
  double t7228;
  double t7111;
  double t7215;
  double t7235;
  double t7246;
  double t7262;
  double t7267;
  double t7269;
  double t7281;
  double t7307;
  double t7592;
  double t7598;
  double t7601;
  double t6442;
  double t6729;
  double t6769;
  double t6770;
  double t6773;
  double t6782;
  double t6928;
  double t6966;
  double t6968;
  double t7449;
  double t7469;
  double t7477;
  double t7531;
  double t7633;
  double t7669;
  double t7675;
  double t7687;
  double t7688;
  double t7696;
  double t7787;
  double t7793;
  double t7805;
  double t7810;
  double t8004;
  double t8005;
  double t8029;
  double t8039;
  double t8053;
  double t8054;
  double t8125;
  double t8126;
  double t8145;
  double t8147;
  double t8148;
  double t7875;
  double t7879;
  double t7884;
  double t7886;
  double t7887;
  double t7912;
  double t7915;
  double t7940;
  double t8154;
  double t8160;
  double t8162;
  double t8163;
  double t1356;
  double t1632;
  double t7258;
  double t7287;
  double t7319;
  double t7320;
  double t8336;
  double t8271;
  double t8275;
  double t8346;
  double t8359;
  double t2047;
  double t3348;
  double t3421;
  double t3569;
  double t4290;
  double t4453;
  double t5037;
  double t5278;
  double t6980;
  double t6981;
  double t7101;
  double t7107;
  double t7786;
  double t7808;
  double t7828;
  double t7836;
  double t7847;
  double t7862;
  double t7874;
  double t7961;
  double t7971;
  double t8255;
  double t8259;
  double t8260;
  double t8277;
  double t8284;
  double t8436;
  double t8440;
  double t8426;
  double t7356;
  double t7441;
  double t7445;
  double t7699;
  double t7701;
  double t7974;
  double t8031;
  double t8066;
  double t8074;
  double t8100;
  double t8102;
  double t8105;
  double t8107;
  double t8108;
  double t8123;
  double t8166;
  double t8169;
  double t8171;
  double t8199;
  double t8285;
  double t8292;
  double t8294;
  double t8306;
  double t8307;
  double t8314;
  double t8318;
  double t8324;
  double t8361;
  double t8363;
  double t8364;
  double t8365;
  double t8752;
  double t8754;
  double t8678;
  double t8688;
  double t8696;
  double t7706;
  double t8872;
  double t8873;
  double t8874;
  double t8889;
  double t8201;
  double t8211;
  double t8213;
  double t8218;
  double t8832;
  double t8833;
  double t8836;
  double t8839;
  double t8840;
  double t8901;
  double t8905;
  double t8906;
  double t8909;
  double t8915;
  double t8917;
  double t8918;
  double t8922;
  double t8504;
  double t8527;
  double t8528;
  double t8564;
  double t8455;
  double t8846;
  double t8849;
  double t8896;
  double t8924;
  double t8936;
  double t8937;
  double t8943;
  double t8807;
  double t9086;
  double t9095;
  t500 = Cos(var1[3]);
  t698 = Sin(var1[2]);
  t397 = Cos(var1[2]);
  t937 = Sin(var1[3]);
  t214 = Cos(var1[4]);
  t627 = -1.*t397*t500;
  t1213 = t698*t937;
  t1314 = t627 + t1213;
  t1430 = -1.*t500*t698;
  t1447 = -1.*t397*t937;
  t1463 = t1430 + t1447;
  t1516 = Sin(var1[4]);
  t1677 = t214*t1314;
  t1781 = -1.*t1463*t1516;
  t1836 = t1677 + t1781;
  t6448 = t500*t698;
  t6599 = t397*t937;
  t6687 = t6448 + t6599;
  t5642 = -1.*t214;
  t5669 = 1. + t5642;
  t6737 = t6687*t1516;
  t6740 = t1677 + t6737;
  t7213 = Cos(var1[5]);
  t7228 = Sin(var1[5]);
  t7111 = Cos(var1[6]);
  t7215 = -1.*t397*t7213;
  t7235 = t698*t7228;
  t7246 = t7215 + t7235;
  t7262 = -1.*t7213*t698;
  t7267 = -1.*t397*t7228;
  t7269 = t7262 + t7267;
  t7281 = Sin(var1[6]);
  t7307 = t7111*t7246;
  t7592 = t7213*t698;
  t7598 = t397*t7228;
  t7601 = t7592 + t7598;
  t6442 = -0.4*t5669*t1314;
  t6729 = 0.4*t6687*t1516;
  t6769 = -0.8*t6740;
  t6770 = 0.748*t1314;
  t6773 = 0.4*t5669*t1314;
  t6782 = -0.4*t6687*t1516;
  t6928 = 0.64*t6740;
  t6966 = t6773 + t6782 + t6928;
  t6968 = 3.2*t6966;
  t7449 = 0.748*t7246;
  t7469 = -1.*t7111;
  t7477 = 1. + t7469;
  t7531 = 0.4*t7477*t7246;
  t7633 = -0.4*t7601*t7281;
  t7669 = t7601*t7281;
  t7675 = t7307 + t7669;
  t7687 = 0.64*t7675;
  t7688 = t7531 + t7633 + t7687;
  t7696 = 3.2*t7688;
  t7787 = t397*t500;
  t7793 = -1.*t698*t937;
  t7805 = t7787 + t7793;
  t7810 = t214*t1463;
  t8004 = t397*t7213;
  t8005 = -1.*t698*t7228;
  t8029 = t8004 + t8005;
  t8039 = t7111*t7269;
  t8053 = -1.*t8029*t7281;
  t8054 = t8039 + t8053;
  t8125 = 0.4*t7477*t7269;
  t8126 = -0.4*t7246*t7281;
  t8145 = t7246*t7281;
  t8147 = t8039 + t8145;
  t8148 = 0.8*t8147;
  t7875 = -0.748*t1463;
  t7879 = 0.4*t5669*t1463;
  t7884 = -0.4*t1314*t1516;
  t7886 = t1314*t1516;
  t7887 = t7810 + t7886;
  t7912 = 0.64*t7887;
  t7915 = t7879 + t7884 + t7912;
  t7940 = -3.2*t7915;
  t8154 = -0.748*t7269;
  t8160 = 0.64*t8147;
  t8162 = t8125 + t8126 + t8160;
  t8163 = -3.2*t8162;
  t1356 = 0.4*t214*t1314;
  t1632 = -0.4*t1463*t1516;
  t7258 = -0.4*t7111*t7246;
  t7287 = 0.4*t7269*t7281;
  t7319 = -1.*t7269*t7281;
  t7320 = t7307 + t7319;
  t8336 = 0.8*t7675;
  t8271 = -0.748*t1314;
  t8275 = -3.2*t6966;
  t8346 = -0.748*t7246;
  t8359 = -3.2*t7688;
  t2047 = -0.8*t1836;
  t3348 = -0.4*t214*t1314;
  t3421 = 0.4*t1463*t1516;
  t3569 = 0.64*t1836;
  t4290 = t3348 + t3421 + t3569;
  t4453 = 0.1*t4290;
  t5037 = t1356 + t1632 + t2047 + t4453;
  t5278 = var2[4]*t5037;
  t6980 = t6770 + t6968;
  t6981 = 0.03125*t6980;
  t7101 = t6442 + t6729 + t6769 + t6981;
  t7107 = var2[3]*t7101;
  t7786 = 0.4*t214*t1463;
  t7808 = -0.4*t7805*t1516;
  t7828 = -1.*t7805*t1516;
  t7836 = t7810 + t7828;
  t7847 = -0.64*t7836;
  t7862 = t7786 + t7808 + t7847;
  t7874 = 0.1*var2[4]*t7862;
  t7961 = t7875 + t7940;
  t7971 = 0.03125*var2[3]*t7961;
  t8255 = -0.64*t1836;
  t8259 = t1356 + t1632 + t8255;
  t8260 = 0.1*var2[4]*t8259;
  t8277 = t8271 + t8275;
  t8284 = 0.03125*var2[3]*t8277;
  t8436 = -1.*t214*t7805;
  t8440 = t8436 + t1781;
  t8426 = -0.4*t214*t7805;
  t7356 = 0.64*t7320;
  t7441 = t7258 + t7287 + t7356;
  t7445 = 0.1*var2[6]*t7441;
  t7699 = t7449 + t7696;
  t7701 = 0.03125*var2[5]*t7699;
  t7974 = -0.4*t7111*t7269;
  t8031 = 0.4*t8029*t7281;
  t8066 = 0.8*t8054;
  t8074 = 0.4*t7111*t7269;
  t8100 = -0.4*t8029*t7281;
  t8102 = -0.64*t8054;
  t8105 = t8074 + t8100 + t8102;
  t8107 = 0.1*t8105;
  t8108 = t7974 + t8031 + t8066 + t8107;
  t8123 = var2[6]*t8108;
  t8166 = t8154 + t8163;
  t8169 = 0.03125*t8166;
  t8171 = t8125 + t8126 + t8148 + t8169;
  t8199 = var2[5]*t8171;
  t8285 = 0.8*t7320;
  t8292 = 0.4*t7111*t7246;
  t8294 = -0.4*t7269*t7281;
  t8306 = -0.64*t7320;
  t8307 = t8292 + t8294 + t8306;
  t8314 = 0.1*t8307;
  t8318 = t7258 + t7287 + t8285 + t8314;
  t8324 = var2[6]*t8318;
  t8361 = t8346 + t8359;
  t8363 = 0.03125*t8361;
  t8364 = t7531 + t7633 + t8336 + t8363;
  t8365 = var2[5]*t8364;
  t8752 = -1.*t7111*t7601;
  t8754 = t8752 + t8053;
  t8678 = 0.4*t7111*t8029;
  t8688 = -1.*t7111*t8029;
  t8696 = t8688 + t7319;
  t7706 = -2.88*t397;
  t8872 = 0.4*t7477*t8029;
  t8873 = t7111*t8029;
  t8874 = t7269*t7281;
  t8889 = t8873 + t8874;
  t8201 = 2.88*t698;
  t8211 = t8201 + t7875 + t7940 + t8154 + t8163;
  t8213 = 0.03125*t8211;
  t8218 = t8125 + t8126 + t8148 + t8213;
  t8832 = -0.4*t5669*t1463;
  t8833 = 0.4*t1314*t1516;
  t8836 = -0.8*t7887;
  t8839 = 0.748*t1463;
  t8840 = 3.2*t7915;
  t8901 = -0.748*t7805;
  t8905 = 0.4*t5669*t7805;
  t8906 = t214*t7805;
  t8909 = t1463*t1516;
  t8915 = t8906 + t8909;
  t8917 = 0.64*t8915;
  t8918 = t8905 + t1632 + t8917;
  t8922 = -3.2*t8918;
  t8504 = -0.4*t214*t1463;
  t8527 = 0.4*t7805*t1516;
  t8528 = 0.64*t7836;
  t8564 = t8504 + t8527 + t8528;
  t8455 = 0.4*t214*t7805;
  t8846 = 0.748*t7269;
  t8849 = 3.2*t8162;
  t8896 = 0.8*t8889;
  t8924 = -0.748*t8029;
  t8936 = 0.64*t8889;
  t8937 = t8872 + t8294 + t8936;
  t8943 = -3.2*t8937;
  t8807 = -0.4*t7111*t8029;
  t9086 = -1.*t7601*t7281;
  t9095 = t8873 + t9086;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t5278 + t7107 + t7445 + t7701 + (t6442 + t6729 + t6769 + 0.03125*(t6770 + t6968 + t7449 + t7696 + t7706))*var2[2];
  p_output1[10]=t7874 + t7971 + t8123 + t8199 + t8218*var2[2];
  p_output1[11]=t8260 + t8284 + t8324 + t8365 + (t7531 + t7633 + t8336 + 0.03125*(2.88*t397 + t8271 + t8275 + t8346 + t8359))*var2[2];
  p_output1[12]=0;
  p_output1[13]=t5278 + t7107 + t7101*var2[2];
  p_output1[14]=t7874 + t7971 + 0.03125*t7961*var2[2];
  p_output1[15]=t8260 + t8284 + 0.03125*t8277*var2[2];
  p_output1[16]=0;
  p_output1[17]=t5037*var2[2] + t5037*var2[3] + (t1632 + t8426 - 0.8*t8440 + 0.1*(t3421 + 0.64*t8440 + t8455))*var2[4];
  p_output1[18]=0.1*t7862*var2[2] - 0.1*t8564*var2[3] + 0.1*(-0.4*t214*t6687 + t7808 - 0.64*(-1.*t214*t6687 + t7828))*var2[4];
  p_output1[19]=0.1*t8259*var2[2] - 0.1*t4290*var2[3] + 0.1*(t1632 + t8426 - 0.64*t8440)*var2[4];
  p_output1[20]=0;
  p_output1[21]=t7445 + t7701 + 0.03125*t7699*var2[2];
  p_output1[22]=t8123 + t8199 + t8171*var2[2];
  p_output1[23]=t8324 + t8365 + t8364*var2[2];
  p_output1[24]=0;
  p_output1[25]=0.1*t7441*var2[2] + 0.1*t7441*var2[5] + 0.1*(t7287 + t8678 + 0.64*t8696)*var2[6];
  p_output1[26]=t8108*var2[2] + t8108*var2[5] + (0.4*t7111*t7601 + t8031 + 0.1*(-0.4*t7111*t7601 + t8100 - 0.64*t8754) + 0.8*t8754)*var2[6];
  p_output1[27]=t8318*var2[2] + t8318*var2[5] + (t7287 + t8678 + 0.8*t8696 + 0.1*(t8294 - 0.64*t8696 + t8807))*var2[6];
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=1.;
  p_output1[37]=t8832 + t8833 + t8836 + 0.03125*(-2.88*t698 + t8839 + t8840 + t8846 + t8849);
  p_output1[38]=t8294 + t8872 + t8896 + 0.03125*(t7706 + t8901 + t8922 + t8924 + t8943);
  p_output1[39]=t8218;
  p_output1[40]=0;
  p_output1[41]=t8832 + t8833 + t8836 + 0.03125*(t8839 + t8840);
  p_output1[42]=0.03125*(t8901 + t8922);
  p_output1[43]=0.03125*t7961;
  p_output1[44]=0;
  p_output1[45]=t7786 + t7808 - 0.8*t7836 + 0.1*t8564;
  p_output1[46]=0.1*(t6782 + t8455 - 0.64*(-1.*t1516*t6687 + t8906));
  p_output1[47]=0.1*t7862;
  p_output1[48]=0;
  p_output1[49]=0.03125*(t8846 + t8849);
  p_output1[50]=t8294 + t8872 + t8896 + 0.03125*(t8924 + t8943);
  p_output1[51]=t8171;
  p_output1[52]=0;
  p_output1[53]=0.1*(t7974 + t8031 + 0.64*t8054);
  p_output1[54]=0.4*t7281*t7601 + t8807 + 0.1*(t7633 + t8678 - 0.64*t9095) + 0.8*t9095;
  p_output1[55]=t8108;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jd2ya_time_RightStance.hh"

namespace SymFunction
{

void Jd2ya_time_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
