/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:08:01 GMT-05:00
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
  double t2406;
  double t1110;
  double t1356;
  double t1762;
  double t1890;
  double t1990;
  double t2451;
  double t2727;
  double t2736;
  double t2779;
  double t2828;
  double t3032;
  double t3077;
  double t3449;
  double t3496;
  double t3528;
  double t3538;
  double t3611;
  double t3699;
  double t3772;
  double t3866;
  double t3897;
  double t4864;
  double t5077;
  double t5381;
  double t6914;
  double t6920;
  double t4882;
  double t4888;
  double t4890;
  double t4893;
  double t4896;
  double t4922;
  double t4938;
  double t4949;
  double t4953;
  double t5057;
  double t5110;
  double t5166;
  double t5261;
  double t5350;
  double t8311;
  double t8291;
  double t8296;
  double t8315;
  double t8278;
  double t8310;
  double t8325;
  double t8336;
  double t8375;
  double t8377;
  double t8567;
  double t8577;
  double t8610;
  double t8668;
  double t8669;
  double t8670;
  double t8663;
  double t8666;
  double t8667;
  double t8672;
  double t8680;
  double t8693;
  double t8694;
  double t8703;
  double t8352;
  double t8588;
  double t8614;
  double t8624;
  double t8648;
  double t8650;
  double t8659;
  double t8709;
  double t8713;
  double t8715;
  double t8719;
  double t8725;
  double t8750;
  double t8811;
  double t8812;
  double t8813;
  double t8814;
  double t8815;
  double t8816;
  double t8817;
  double t9306;
  double t9348;
  double t9359;
  double t9361;
  double t9362;
  double t9363;
  double t9374;
  double t9288;
  double t9298;
  double t9311;
  double t9321;
  double t9329;
  double t9333;
  double t9347;
  double t9382;
  double t9393;
  double t9394;
  t2406 = -1.*var5[1];
  t1110 = -1. + var6[0];
  t1356 = -1. + var7[0];
  t1762 = 1/t1356;
  t1890 = -1.*t1110*t1762;
  t1990 = 1. + t1890;
  t2451 = var5[0] + t2406;
  t2727 = Power(t2451,-5);
  t2736 = -1.*var1[0];
  t2779 = t2736 + var1[1];
  t2828 = t1110*t1762*t2779;
  t3032 = t2406 + var1[0] + t2828;
  t3077 = Power(t3032,3);
  t3449 = Power(t2451,-4);
  t3496 = Power(t3032,2);
  t3528 = 1/t2451;
  t3538 = -1.*t3528*t3032;
  t3611 = 1. + t3538;
  t3699 = Power(t2451,-3);
  t3772 = Power(t3611,2);
  t3866 = Power(t2451,-2);
  t3897 = Power(t3611,3);
  t4864 = Power(t3611,4);
  t5077 = Power(t3032,4);
  t5381 = Power(t2451,-6);
  t6914 = -1.*t3866*t3032;
  t6920 = t3528 + t6914;
  t4882 = 5.*t3528*t4864;
  t4888 = 20.*t3866*t3032*t3897;
  t4890 = -5.*t3528*t4864;
  t4893 = t4888 + t4890;
  t4896 = 30.*t3699*t3496*t3772;
  t4922 = -20.*t3866*t3032*t3897;
  t4938 = t4896 + t4922;
  t4949 = 20.*t3449*t3077*t3611;
  t4953 = -30.*t3699*t3496*t3772;
  t5057 = t4949 + t4953;
  t5110 = 5.*t2727*t5077;
  t5166 = -20.*t3449*t3077*t3611;
  t5261 = t5110 + t5166;
  t5350 = -5.*t2727*t5077;
  t8311 = Cos(var2[2]);
  t8291 = Cos(var2[5]);
  t8296 = Sin(var2[2]);
  t8315 = Sin(var2[5]);
  t8278 = Cos(var2[6]);
  t8310 = -1.*t8291*t8296;
  t8325 = -1.*t8311*t8315;
  t8336 = t8310 + t8325;
  t8375 = t8311*t8291;
  t8377 = -1.*t8296*t8315;
  t8567 = t8375 + t8377;
  t8577 = Sin(var2[6]);
  t8610 = t8278*t8336;
  t8668 = -1.*t8311*t8291;
  t8669 = t8296*t8315;
  t8670 = t8668 + t8669;
  t8663 = -1.*t8278;
  t8666 = 1. + t8663;
  t8667 = 0.4*t8666*t8336;
  t8672 = -0.4*t8670*t8577;
  t8680 = t8670*t8577;
  t8693 = t8610 + t8680;
  t8694 = 0.8*t8693;
  t8703 = t8667 + t8672 + t8694;
  t8352 = -0.4*t8278*t8336;
  t8588 = 0.4*t8567*t8577;
  t8614 = -1.*t8567*t8577;
  t8624 = t8610 + t8614;
  t8648 = 0.8*t8624;
  t8650 = t8352 + t8588 + t8648;
  t8659 = var3[6]*t8650;
  t8709 = var3[2]*t8703;
  t8713 = var3[5]*t8703;
  t8715 = t8659 + t8709 + t8713;
  t8719 = t8291*t8296;
  t8725 = t8311*t8315;
  t8750 = t8719 + t8725;
  t8811 = 0.4*t8666*t8567;
  t8812 = -0.4*t8336*t8577;
  t8813 = t8278*t8567;
  t8814 = t8336*t8577;
  t8815 = t8813 + t8814;
  t8816 = 0.8*t8815;
  t8817 = t8811 + t8812 + t8816;
  t9306 = t8278*t8670;
  t9348 = 0.4*t8666*t8670;
  t9359 = -0.4*t8750*t8577;
  t9361 = t8750*t8577;
  t9362 = t9306 + t9361;
  t9363 = 0.8*t9362;
  t9374 = t9348 + t9359 + t9363;
  t9288 = -0.4*t8278*t8670;
  t9298 = 0.4*t8336*t8577;
  t9311 = -1.*t8336*t8577;
  t9321 = t9306 + t9311;
  t9329 = 0.8*t9321;
  t9333 = t9288 + t9298 + t9329;
  t9347 = var3[6]*t9333;
  t9382 = var3[2]*t9374;
  t9393 = var3[5]*t9374;
  t9394 = t9347 + t9382 + t9393;
  p_output1[0]=-20.*t1990*t3866*t3897*var4[0] - 60.*t1990*t3032*t3699*t3772*var4[4] + 40.*t1990*t3866*t3897*var4[4] - 60.*t1990*t3449*t3496*t3611*var4[8] + 120.*t1990*t3032*t3699*t3772*var4[8] - 20.*t1990*t3866*t3897*var4[8] - 20.*t1990*t2727*t3077*var4[12] + 120.*t1990*t3449*t3496*t3611*var4[12] - 60.*t1990*t3032*t3699*t3772*var4[12] + 40.*t1990*t2727*t3077*var4[16] - 60.*t1990*t3449*t3496*t3611*var4[16] - 20.*t1990*t2727*t3077*var4[20];
  p_output1[1]=-20.*t1110*t1762*t3866*t3897*var4[0] - 60.*t1110*t1762*t3032*t3699*t3772*var4[4] + 40.*t1110*t1762*t3866*t3897*var4[4] - 60.*t1110*t1762*t3449*t3496*t3611*var4[8] + 120.*t1110*t1762*t3032*t3699*t3772*var4[8] - 20.*t1110*t1762*t3866*t3897*var4[8] - 20.*t1110*t1762*t2727*t3077*var4[12] + 120.*t1110*t1762*t3449*t3496*t3611*var4[12] - 60.*t1110*t1762*t3032*t3699*t3772*var4[12] + 40.*t1110*t1762*t2727*t3077*var4[16] - 60.*t1110*t1762*t3449*t3496*t3611*var4[16] - 20.*t1110*t1762*t2727*t3077*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t4882;
  p_output1[4]=t4893;
  p_output1[5]=t4938;
  p_output1[6]=t5057;
  p_output1[7]=t5261;
  p_output1[8]=t5350;
  p_output1[9]=20.*t3032*t3699*t3897*var4[0] - 5.*t3866*t4864*var4[0] + 60.*t3449*t3496*t3772*var4[4] - 60.*t3032*t3699*t3897*var4[4] + 5.*t3866*t4864*var4[4] + 60.*t2727*t3077*t3611*var4[8] - 150.*t3449*t3496*t3772*var4[8] + 40.*t3032*t3699*t3897*var4[8] - 140.*t2727*t3077*t3611*var4[12] + 90.*t3449*t3496*t3772*var4[12] + 20.*t5077*t5381*var4[12] + 80.*t2727*t3077*t3611*var4[16] - 45.*t5077*t5381*var4[16] + 25.*t5077*t5381*var4[20];
  p_output1[10]=5.*t3866*t4864*var4[0] + 20.*t3528*t3897*t6920*var4[0] + 40.*t3032*t3699*t3897*var4[4] - 20.*t3866*t3897*var4[4] - 5.*t3866*t4864*var4[4] + 60.*t3032*t3772*t3866*t6920*var4[4] - 20.*t3528*t3897*t6920*var4[4] + 90.*t3449*t3496*t3772*var4[8] - 60.*t3032*t3699*t3772*var4[8] - 40.*t3032*t3699*t3897*var4[8] + 20.*t3866*t3897*var4[8] + 60.*t3496*t3611*t3699*t6920*var4[8] - 60.*t3032*t3772*t3866*t6920*var4[8] + 80.*t2727*t3077*t3611*var4[12] - 60.*t3449*t3496*t3611*var4[12] - 90.*t3449*t3496*t3772*var4[12] + 60.*t3032*t3699*t3772*var4[12] + 20.*t3077*t3449*t6920*var4[12] - 60.*t3496*t3611*t3699*t6920*var4[12] - 20.*t2727*t3077*var4[16] - 80.*t2727*t3077*t3611*var4[16] + 60.*t3449*t3496*t3611*var4[16] + 25.*t5077*t5381*var4[16] - 20.*t3077*t3449*t6920*var4[16] + 20.*t2727*t3077*var4[20] - 25.*t5077*t5381*var4[20];
  p_output1[11]=-20.*t1990*t3866*t3897*var4[1] - 60.*t1990*t3032*t3699*t3772*var4[5] + 40.*t1990*t3866*t3897*var4[5] - 60.*t1990*t3449*t3496*t3611*var4[9] + 120.*t1990*t3032*t3699*t3772*var4[9] - 20.*t1990*t3866*t3897*var4[9] - 20.*t1990*t2727*t3077*var4[13] + 120.*t1990*t3449*t3496*t3611*var4[13] - 60.*t1990*t3032*t3699*t3772*var4[13] + 40.*t1990*t2727*t3077*var4[17] - 60.*t1990*t3449*t3496*t3611*var4[17] - 20.*t1990*t2727*t3077*var4[21];
  p_output1[12]=-20.*t1110*t1762*t3866*t3897*var4[1] - 60.*t1110*t1762*t3032*t3699*t3772*var4[5] + 40.*t1110*t1762*t3866*t3897*var4[5] - 60.*t1110*t1762*t3449*t3496*t3611*var4[9] + 120.*t1110*t1762*t3032*t3699*t3772*var4[9] - 20.*t1110*t1762*t3866*t3897*var4[9] - 20.*t1110*t1762*t2727*t3077*var4[13] + 120.*t1110*t1762*t3449*t3496*t3611*var4[13] - 60.*t1110*t1762*t3032*t3699*t3772*var4[13] + 40.*t1110*t1762*t2727*t3077*var4[17] - 60.*t1110*t1762*t3449*t3496*t3611*var4[17] - 20.*t1110*t1762*t2727*t3077*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t4882;
  p_output1[15]=t4893;
  p_output1[16]=t4938;
  p_output1[17]=t5057;
  p_output1[18]=t5261;
  p_output1[19]=t5350;
  p_output1[20]=20.*t3032*t3699*t3897*var4[1] - 5.*t3866*t4864*var4[1] + 60.*t3449*t3496*t3772*var4[5] - 60.*t3032*t3699*t3897*var4[5] + 5.*t3866*t4864*var4[5] + 60.*t2727*t3077*t3611*var4[9] - 150.*t3449*t3496*t3772*var4[9] + 40.*t3032*t3699*t3897*var4[9] - 140.*t2727*t3077*t3611*var4[13] + 90.*t3449*t3496*t3772*var4[13] + 20.*t5077*t5381*var4[13] + 80.*t2727*t3077*t3611*var4[17] - 45.*t5077*t5381*var4[17] + 25.*t5077*t5381*var4[21];
  p_output1[21]=5.*t3866*t4864*var4[1] + 20.*t3528*t3897*t6920*var4[1] + 40.*t3032*t3699*t3897*var4[5] - 20.*t3866*t3897*var4[5] - 5.*t3866*t4864*var4[5] + 60.*t3032*t3772*t3866*t6920*var4[5] - 20.*t3528*t3897*t6920*var4[5] + 90.*t3449*t3496*t3772*var4[9] - 60.*t3032*t3699*t3772*var4[9] - 40.*t3032*t3699*t3897*var4[9] + 20.*t3866*t3897*var4[9] + 60.*t3496*t3611*t3699*t6920*var4[9] - 60.*t3032*t3772*t3866*t6920*var4[9] + 80.*t2727*t3077*t3611*var4[13] - 60.*t3449*t3496*t3611*var4[13] - 90.*t3449*t3496*t3772*var4[13] + 60.*t3032*t3699*t3772*var4[13] + 20.*t3077*t3449*t6920*var4[13] - 60.*t3496*t3611*t3699*t6920*var4[13] - 20.*t2727*t3077*var4[17] - 80.*t2727*t3077*t3611*var4[17] + 60.*t3449*t3496*t3611*var4[17] + 25.*t5077*t5381*var4[17] - 20.*t3077*t3449*t6920*var4[17] + 20.*t2727*t3077*var4[21] - 25.*t5077*t5381*var4[21];
  p_output1[22]=-20.*t1990*t3866*t3897*var4[2] - 60.*t1990*t3032*t3699*t3772*var4[6] + 40.*t1990*t3866*t3897*var4[6] - 60.*t1990*t3449*t3496*t3611*var4[10] + 120.*t1990*t3032*t3699*t3772*var4[10] - 20.*t1990*t3866*t3897*var4[10] - 20.*t1990*t2727*t3077*var4[14] + 120.*t1990*t3449*t3496*t3611*var4[14] - 60.*t1990*t3032*t3699*t3772*var4[14] + 40.*t1990*t2727*t3077*var4[18] - 60.*t1990*t3449*t3496*t3611*var4[18] - 20.*t1990*t2727*t3077*var4[22];
  p_output1[23]=-20.*t1110*t1762*t3866*t3897*var4[2] - 60.*t1110*t1762*t3032*t3699*t3772*var4[6] + 40.*t1110*t1762*t3866*t3897*var4[6] - 60.*t1110*t1762*t3449*t3496*t3611*var4[10] + 120.*t1110*t1762*t3032*t3699*t3772*var4[10] - 20.*t1110*t1762*t3866*t3897*var4[10] - 20.*t1110*t1762*t2727*t3077*var4[14] + 120.*t1110*t1762*t3449*t3496*t3611*var4[14] - 60.*t1110*t1762*t3032*t3699*t3772*var4[14] + 40.*t1110*t1762*t2727*t3077*var4[18] - 60.*t1110*t1762*t3449*t3496*t3611*var4[18] - 20.*t1110*t1762*t2727*t3077*var4[22];
  p_output1[24]=t8715;
  p_output1[25]=t8715;
  p_output1[26]=t8650*var3[2] + t8650*var3[5] + (t8588 + 0.4*t8278*t8750 + 0.8*(t8614 - 1.*t8278*t8750))*var3[6];
  p_output1[27]=1.;
  p_output1[28]=t8817;
  p_output1[29]=t8817;
  p_output1[30]=-0.4*t8278*t8567 + 0.4*t8577*t8750 + 0.8*(-1.*t8577*t8750 + t8813);
  p_output1[31]=t4882;
  p_output1[32]=t4893;
  p_output1[33]=t4938;
  p_output1[34]=t5057;
  p_output1[35]=t5261;
  p_output1[36]=t5350;
  p_output1[37]=20.*t3032*t3699*t3897*var4[2] - 5.*t3866*t4864*var4[2] + 60.*t3449*t3496*t3772*var4[6] - 60.*t3032*t3699*t3897*var4[6] + 5.*t3866*t4864*var4[6] + 60.*t2727*t3077*t3611*var4[10] - 150.*t3449*t3496*t3772*var4[10] + 40.*t3032*t3699*t3897*var4[10] - 140.*t2727*t3077*t3611*var4[14] + 90.*t3449*t3496*t3772*var4[14] + 20.*t5077*t5381*var4[14] + 80.*t2727*t3077*t3611*var4[18] - 45.*t5077*t5381*var4[18] + 25.*t5077*t5381*var4[22];
  p_output1[38]=5.*t3866*t4864*var4[2] + 20.*t3528*t3897*t6920*var4[2] + 40.*t3032*t3699*t3897*var4[6] - 20.*t3866*t3897*var4[6] - 5.*t3866*t4864*var4[6] + 60.*t3032*t3772*t3866*t6920*var4[6] - 20.*t3528*t3897*t6920*var4[6] + 90.*t3449*t3496*t3772*var4[10] - 60.*t3032*t3699*t3772*var4[10] - 40.*t3032*t3699*t3897*var4[10] + 20.*t3866*t3897*var4[10] + 60.*t3496*t3611*t3699*t6920*var4[10] - 60.*t3032*t3772*t3866*t6920*var4[10] + 80.*t2727*t3077*t3611*var4[14] - 60.*t3449*t3496*t3611*var4[14] - 90.*t3449*t3496*t3772*var4[14] + 60.*t3032*t3699*t3772*var4[14] + 20.*t3077*t3449*t6920*var4[14] - 60.*t3496*t3611*t3699*t6920*var4[14] - 20.*t2727*t3077*var4[18] - 80.*t2727*t3077*t3611*var4[18] + 60.*t3449*t3496*t3611*var4[18] + 25.*t5077*t5381*var4[18] - 20.*t3077*t3449*t6920*var4[18] + 20.*t2727*t3077*var4[22] - 25.*t5077*t5381*var4[22];
  p_output1[39]=-20.*t1990*t3866*t3897*var4[3] - 60.*t1990*t3032*t3699*t3772*var4[7] + 40.*t1990*t3866*t3897*var4[7] - 60.*t1990*t3449*t3496*t3611*var4[11] + 120.*t1990*t3032*t3699*t3772*var4[11] - 20.*t1990*t3866*t3897*var4[11] - 20.*t1990*t2727*t3077*var4[15] + 120.*t1990*t3449*t3496*t3611*var4[15] - 60.*t1990*t3032*t3699*t3772*var4[15] + 40.*t1990*t2727*t3077*var4[19] - 60.*t1990*t3449*t3496*t3611*var4[19] - 20.*t1990*t2727*t3077*var4[23];
  p_output1[40]=-20.*t1110*t1762*t3866*t3897*var4[3] - 60.*t1110*t1762*t3032*t3699*t3772*var4[7] + 40.*t1110*t1762*t3866*t3897*var4[7] - 60.*t1110*t1762*t3449*t3496*t3611*var4[11] + 120.*t1110*t1762*t3032*t3699*t3772*var4[11] - 20.*t1110*t1762*t3866*t3897*var4[11] - 20.*t1110*t1762*t2727*t3077*var4[15] + 120.*t1110*t1762*t3449*t3496*t3611*var4[15] - 60.*t1110*t1762*t3032*t3699*t3772*var4[15] + 40.*t1110*t1762*t2727*t3077*var4[19] - 60.*t1110*t1762*t3449*t3496*t3611*var4[19] - 20.*t1110*t1762*t2727*t3077*var4[23];
  p_output1[41]=t9394;
  p_output1[42]=t9394;
  p_output1[43]=t9333*var3[2] + t9333*var3[5] + (0.4*t8278*t8567 + t9298 + 0.8*(-1.*t8278*t8567 + t9311))*var3[6];
  p_output1[44]=1.;
  p_output1[45]=t8703;
  p_output1[46]=t8703;
  p_output1[47]=t8650;
  p_output1[48]=t4882;
  p_output1[49]=t4893;
  p_output1[50]=t4938;
  p_output1[51]=t5057;
  p_output1[52]=t5261;
  p_output1[53]=t5350;
  p_output1[54]=20.*t3032*t3699*t3897*var4[3] - 5.*t3866*t4864*var4[3] + 60.*t3449*t3496*t3772*var4[7] - 60.*t3032*t3699*t3897*var4[7] + 5.*t3866*t4864*var4[7] + 60.*t2727*t3077*t3611*var4[11] - 150.*t3449*t3496*t3772*var4[11] + 40.*t3032*t3699*t3897*var4[11] - 140.*t2727*t3077*t3611*var4[15] + 90.*t3449*t3496*t3772*var4[15] + 20.*t5077*t5381*var4[15] + 80.*t2727*t3077*t3611*var4[19] - 45.*t5077*t5381*var4[19] + 25.*t5077*t5381*var4[23];
  p_output1[55]=5.*t3866*t4864*var4[3] + 20.*t3528*t3897*t6920*var4[3] + 40.*t3032*t3699*t3897*var4[7] - 20.*t3866*t3897*var4[7] - 5.*t3866*t4864*var4[7] + 60.*t3032*t3772*t3866*t6920*var4[7] - 20.*t3528*t3897*t6920*var4[7] + 90.*t3449*t3496*t3772*var4[11] - 60.*t3032*t3699*t3772*var4[11] - 40.*t3032*t3699*t3897*var4[11] + 20.*t3866*t3897*var4[11] + 60.*t3496*t3611*t3699*t6920*var4[11] - 60.*t3032*t3772*t3866*t6920*var4[11] + 80.*t2727*t3077*t3611*var4[15] - 60.*t3449*t3496*t3611*var4[15] - 90.*t3449*t3496*t3772*var4[15] + 60.*t3032*t3699*t3772*var4[15] + 20.*t3077*t3449*t6920*var4[15] - 60.*t3496*t3611*t3699*t6920*var4[15] - 20.*t2727*t3077*var4[19] - 80.*t2727*t3077*t3611*var4[19] + 60.*t3449*t3496*t3611*var4[19] + 25.*t5077*t5381*var4[19] - 20.*t3077*t3449*t6920*var4[19] + 20.*t2727*t3077*var4[23] - 25.*t5077*t5381*var4[23];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 56, (mwSize) 1, mxREAL);
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
