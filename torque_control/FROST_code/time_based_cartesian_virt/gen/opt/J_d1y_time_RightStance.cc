/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:49 GMT-05:00
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
  double t1237;
  double t235;
  double t268;
  double t391;
  double t393;
  double t1112;
  double t1840;
  double t1884;
  double t1994;
  double t1998;
  double t2079;
  double t2081;
  double t2141;
  double t2199;
  double t2216;
  double t2225;
  double t2229;
  double t2275;
  double t2362;
  double t2833;
  double t3162;
  double t3165;
  double t4717;
  double t5307;
  double t5392;
  double t5909;
  double t5999;
  double t6643;
  double t6650;
  double t6638;
  double t6666;
  double t6629;
  double t6648;
  double t6676;
  double t6682;
  double t6688;
  double t6698;
  double t6699;
  double t6700;
  double t6707;
  double t6747;
  double t6751;
  double t6772;
  double t6727;
  double t6730;
  double t6731;
  double t6777;
  double t6785;
  double t6788;
  double t6789;
  double t6792;
  double t6685;
  double t6705;
  double t6709;
  double t6711;
  double t6713;
  double t6714;
  double t6716;
  double t6801;
  double t6804;
  double t6809;
  double t6820;
  double t6828;
  double t6833;
  double t6890;
  double t6894;
  double t6896;
  double t6898;
  double t6906;
  double t6907;
  double t6908;
  double t4750;
  double t4776;
  double t4782;
  double t4786;
  double t4859;
  double t4860;
  double t5233;
  double t5288;
  double t5292;
  double t5298;
  double t5327;
  double t5338;
  double t5390;
  double t5391;
  double t6912;
  double t6938;
  double t6950;
  double t6951;
  double t6956;
  double t6959;
  double t7321;
  double t7323;
  double t7320;
  double t7322;
  double t7324;
  double t7325;
  double t7337;
  double t7339;
  double t7347;
  double t7354;
  double t7365;
  double t7429;
  double t7430;
  double t7438;
  double t7412;
  double t7422;
  double t7428;
  double t7448;
  double t7449;
  double t7450;
  double t7454;
  double t7310;
  double t7315;
  double t7333;
  double t7363;
  double t7375;
  double t7383;
  double t7384;
  double t7390;
  double t7393;
  double t7457;
  double t7458;
  double t7663;
  double t7666;
  double t7667;
  double t7745;
  double t7754;
  double t7778;
  double t7779;
  double t7783;
  double t7788;
  double t7798;
  double t7807;
  double t7814;
  double t7821;
  double t7827;
  double t7831;
  double t8526;
  double t8575;
  double t8583;
  double t8586;
  double t8591;
  double t8592;
  double t6835;
  double t6837;
  double t6865;
  double t6866;
  double t6867;
  double t6868;
  double t6882;
  double t6886;
  double t6889;
  double t8518;
  double t8524;
  double t8540;
  double t8549;
  double t8554;
  double t8555;
  double t8564;
  double t8597;
  double t8598;
  double t7465;
  t1237 = -1.*var5[1];
  t235 = -1. + var6[0];
  t268 = -1. + var7[0];
  t391 = 1/t268;
  t393 = -1.*t235*t391;
  t1112 = 1. + t393;
  t1840 = var5[0] + t1237;
  t1884 = Power(t1840,-5);
  t1994 = -1.*var1[0];
  t1998 = t1994 + var1[1];
  t2079 = t235*t391*t1998;
  t2081 = t1237 + var1[0] + t2079;
  t2141 = Power(t2081,3);
  t2199 = Power(t1840,-4);
  t2216 = Power(t2081,2);
  t2225 = 1/t1840;
  t2229 = -1.*t2225*t2081;
  t2275 = 1. + t2229;
  t2362 = Power(t1840,-3);
  t2833 = Power(t2275,2);
  t3162 = Power(t1840,-2);
  t3165 = Power(t2275,3);
  t4717 = Power(t2275,4);
  t5307 = Power(t2081,4);
  t5392 = Power(t1840,-6);
  t5909 = -1.*t3162*t2081;
  t5999 = t2225 + t5909;
  t6643 = Cos(var2[3]);
  t6650 = Sin(var2[2]);
  t6638 = Cos(var2[2]);
  t6666 = Sin(var2[3]);
  t6629 = Cos(var2[4]);
  t6648 = -1.*t6638*t6643;
  t6676 = t6650*t6666;
  t6682 = t6648 + t6676;
  t6688 = -1.*t6643*t6650;
  t6698 = -1.*t6638*t6666;
  t6699 = t6688 + t6698;
  t6700 = Sin(var2[4]);
  t6707 = t6629*t6682;
  t6747 = t6643*t6650;
  t6751 = t6638*t6666;
  t6772 = t6747 + t6751;
  t6727 = -1.*t6629;
  t6730 = 1. + t6727;
  t6731 = -0.4*t6730*t6682;
  t6777 = 0.4*t6772*t6700;
  t6785 = t6772*t6700;
  t6788 = t6707 + t6785;
  t6789 = -0.8*t6788;
  t6792 = t6731 + t6777 + t6789;
  t6685 = 0.4*t6629*t6682;
  t6705 = -0.4*t6699*t6700;
  t6709 = -1.*t6699*t6700;
  t6711 = t6707 + t6709;
  t6713 = -0.8*t6711;
  t6714 = t6685 + t6705 + t6713;
  t6716 = var3[4]*t6714;
  t6801 = var3[2]*t6792;
  t6804 = var3[3]*t6792;
  t6809 = t6716 + t6801 + t6804;
  t6820 = t6638*t6643;
  t6828 = -1.*t6650*t6666;
  t6833 = t6820 + t6828;
  t6890 = -0.4*t6730*t6699;
  t6894 = 0.4*t6682*t6700;
  t6896 = t6629*t6699;
  t6898 = t6682*t6700;
  t6906 = t6896 + t6898;
  t6907 = -0.8*t6906;
  t6908 = t6890 + t6894 + t6907;
  t4750 = 5.*t2225*t4717;
  t4776 = 20.*t3162*t2081*t3165;
  t4782 = -5.*t2225*t4717;
  t4786 = t4776 + t4782;
  t4859 = 30.*t2362*t2216*t2833;
  t4860 = -20.*t3162*t2081*t3165;
  t5233 = t4859 + t4860;
  t5288 = 20.*t2199*t2141*t2275;
  t5292 = -30.*t2362*t2216*t2833;
  t5298 = t5288 + t5292;
  t5327 = 5.*t1884*t5307;
  t5338 = -20.*t2199*t2141*t2275;
  t5390 = t5327 + t5338;
  t5391 = -5.*t1884*t5307;
  t6912 = 0.4*t6629*t6699;
  t6938 = -0.4*t6833*t6700;
  t6950 = -1.*t6833*t6700;
  t6951 = t6896 + t6950;
  t6956 = -0.8*t6951;
  t6959 = t6912 + t6938 + t6956;
  t7321 = Cos(var2[5]);
  t7323 = Sin(var2[5]);
  t7320 = Cos(var2[6]);
  t7322 = -1.*t7321*t6650;
  t7324 = -1.*t6638*t7323;
  t7325 = t7322 + t7324;
  t7337 = t6638*t7321;
  t7339 = -1.*t6650*t7323;
  t7347 = t7337 + t7339;
  t7354 = Sin(var2[6]);
  t7365 = t7320*t7325;
  t7429 = -1.*t6638*t7321;
  t7430 = t6650*t7323;
  t7438 = t7429 + t7430;
  t7412 = -1.*t7320;
  t7422 = 1. + t7412;
  t7428 = 0.4*t7422*t7325;
  t7448 = -0.4*t7438*t7354;
  t7449 = t7438*t7354;
  t7450 = t7365 + t7449;
  t7454 = 0.8*t7450;
  t7310 = var3[4]*t6959;
  t7315 = var3[3]*t6908;
  t7333 = -0.4*t7320*t7325;
  t7363 = 0.4*t7347*t7354;
  t7375 = -1.*t7347*t7354;
  t7383 = t7365 + t7375;
  t7384 = 0.8*t7383;
  t7390 = t7333 + t7363 + t7384;
  t7393 = var3[6]*t7390;
  t7457 = t7428 + t7448 + t7454;
  t7458 = var3[5]*t7457;
  t7663 = t7321*t6650;
  t7666 = t6638*t7323;
  t7667 = t7663 + t7666;
  t7745 = -0.4*t6730*t6833;
  t7754 = 0.4*t6699*t6700;
  t7778 = t6629*t6833;
  t7779 = t6699*t6700;
  t7783 = t7778 + t7779;
  t7788 = -0.8*t7783;
  t7798 = 0.4*t7422*t7347;
  t7807 = -0.4*t7325*t7354;
  t7814 = t7320*t7347;
  t7821 = t7325*t7354;
  t7827 = t7814 + t7821;
  t7831 = 0.8*t7827;
  t8526 = t7320*t7438;
  t8575 = 0.4*t7422*t7438;
  t8583 = -0.4*t7667*t7354;
  t8586 = t7667*t7354;
  t8591 = t8526 + t8586;
  t8592 = 0.8*t8591;
  t6835 = -0.4*t6629*t6833;
  t6837 = -1.*t6629*t6833;
  t6865 = t6837 + t6709;
  t6866 = -0.8*t6865;
  t6867 = t6835 + t6705 + t6866;
  t6868 = var3[4]*t6867;
  t6882 = var3[2]*t6714;
  t6886 = var3[3]*t6714;
  t6889 = t6868 + t6882 + t6886;
  t8518 = -0.4*t7320*t7438;
  t8524 = 0.4*t7325*t7354;
  t8540 = -1.*t7325*t7354;
  t8549 = t8526 + t8540;
  t8554 = 0.8*t8549;
  t8555 = t8518 + t8524 + t8554;
  t8564 = var3[6]*t8555;
  t8597 = t8575 + t8583 + t8592;
  t8598 = var3[5]*t8597;
  t7465 = t6890 + t6894 + t6907 + t7428 + t7448 + t7454;
  p_output1[0]=-20.*t1112*t3162*t3165*var4[0] - 60.*t1112*t2081*t2362*t2833*var4[4] + 40.*t1112*t3162*t3165*var4[4] - 60.*t1112*t2199*t2216*t2275*var4[8] + 120.*t1112*t2081*t2362*t2833*var4[8] - 20.*t1112*t3162*t3165*var4[8] - 20.*t1112*t1884*t2141*var4[12] + 120.*t1112*t2199*t2216*t2275*var4[12] - 60.*t1112*t2081*t2362*t2833*var4[12] + 40.*t1112*t1884*t2141*var4[16] - 60.*t1112*t2199*t2216*t2275*var4[16] - 20.*t1112*t1884*t2141*var4[20];
  p_output1[1]=-20.*t235*t3162*t3165*t391*var4[0] - 60.*t2081*t235*t2362*t2833*t391*var4[4] + 40.*t235*t3162*t3165*t391*var4[4] - 60.*t2199*t2216*t2275*t235*t391*var4[8] + 120.*t2081*t235*t2362*t2833*t391*var4[8] - 20.*t235*t3162*t3165*t391*var4[8] - 20.*t1884*t2141*t235*t391*var4[12] + 120.*t2199*t2216*t2275*t235*t391*var4[12] - 60.*t2081*t235*t2362*t2833*t391*var4[12] + 40.*t1884*t2141*t235*t391*var4[16] - 60.*t2199*t2216*t2275*t235*t391*var4[16] - 20.*t1884*t2141*t235*t391*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t4750;
  p_output1[4]=t4786;
  p_output1[5]=t5233;
  p_output1[6]=t5298;
  p_output1[7]=t5390;
  p_output1[8]=t5391;
  p_output1[9]=20.*t2081*t2362*t3165*var4[0] - 5.*t3162*t4717*var4[0] + 60.*t2199*t2216*t2833*var4[4] - 60.*t2081*t2362*t3165*var4[4] + 5.*t3162*t4717*var4[4] + 60.*t1884*t2141*t2275*var4[8] - 150.*t2199*t2216*t2833*var4[8] + 40.*t2081*t2362*t3165*var4[8] - 140.*t1884*t2141*t2275*var4[12] + 90.*t2199*t2216*t2833*var4[12] + 20.*t5307*t5392*var4[12] + 80.*t1884*t2141*t2275*var4[16] - 45.*t5307*t5392*var4[16] + 25.*t5307*t5392*var4[20];
  p_output1[10]=5.*t3162*t4717*var4[0] + 20.*t2225*t3165*t5999*var4[0] + 40.*t2081*t2362*t3165*var4[4] - 20.*t3162*t3165*var4[4] - 5.*t3162*t4717*var4[4] + 60.*t2081*t2833*t3162*t5999*var4[4] - 20.*t2225*t3165*t5999*var4[4] + 90.*t2199*t2216*t2833*var4[8] - 60.*t2081*t2362*t2833*var4[8] - 40.*t2081*t2362*t3165*var4[8] + 20.*t3162*t3165*var4[8] + 60.*t2216*t2275*t2362*t5999*var4[8] - 60.*t2081*t2833*t3162*t5999*var4[8] + 80.*t1884*t2141*t2275*var4[12] - 60.*t2199*t2216*t2275*var4[12] - 90.*t2199*t2216*t2833*var4[12] + 60.*t2081*t2362*t2833*var4[12] + 20.*t2141*t2199*t5999*var4[12] - 60.*t2216*t2275*t2362*t5999*var4[12] - 20.*t1884*t2141*var4[16] - 80.*t1884*t2141*t2275*var4[16] + 60.*t2199*t2216*t2275*var4[16] + 25.*t5307*t5392*var4[16] - 20.*t2141*t2199*t5999*var4[16] + 20.*t1884*t2141*var4[20] - 25.*t5307*t5392*var4[20];
  p_output1[11]=-20.*t1112*t3162*t3165*var4[1] - 60.*t1112*t2081*t2362*t2833*var4[5] + 40.*t1112*t3162*t3165*var4[5] - 60.*t1112*t2199*t2216*t2275*var4[9] + 120.*t1112*t2081*t2362*t2833*var4[9] - 20.*t1112*t3162*t3165*var4[9] - 20.*t1112*t1884*t2141*var4[13] + 120.*t1112*t2199*t2216*t2275*var4[13] - 60.*t1112*t2081*t2362*t2833*var4[13] + 40.*t1112*t1884*t2141*var4[17] - 60.*t1112*t2199*t2216*t2275*var4[17] - 20.*t1112*t1884*t2141*var4[21];
  p_output1[12]=-20.*t235*t3162*t3165*t391*var4[1] - 60.*t2081*t235*t2362*t2833*t391*var4[5] + 40.*t235*t3162*t3165*t391*var4[5] - 60.*t2199*t2216*t2275*t235*t391*var4[9] + 120.*t2081*t235*t2362*t2833*t391*var4[9] - 20.*t235*t3162*t3165*t391*var4[9] - 20.*t1884*t2141*t235*t391*var4[13] + 120.*t2199*t2216*t2275*t235*t391*var4[13] - 60.*t2081*t235*t2362*t2833*t391*var4[13] + 40.*t1884*t2141*t235*t391*var4[17] - 60.*t2199*t2216*t2275*t235*t391*var4[17] - 20.*t1884*t2141*t235*t391*var4[21];
  p_output1[13]=t6809;
  p_output1[14]=t6809;
  p_output1[15]=t6889;
  p_output1[16]=t6908;
  p_output1[17]=t6908;
  p_output1[18]=t6959;
  p_output1[19]=t4750;
  p_output1[20]=t4786;
  p_output1[21]=t5233;
  p_output1[22]=t5298;
  p_output1[23]=t5390;
  p_output1[24]=t5391;
  p_output1[25]=20.*t2081*t2362*t3165*var4[1] - 5.*t3162*t4717*var4[1] + 60.*t2199*t2216*t2833*var4[5] - 60.*t2081*t2362*t3165*var4[5] + 5.*t3162*t4717*var4[5] + 60.*t1884*t2141*t2275*var4[9] - 150.*t2199*t2216*t2833*var4[9] + 40.*t2081*t2362*t3165*var4[9] - 140.*t1884*t2141*t2275*var4[13] + 90.*t2199*t2216*t2833*var4[13] + 20.*t5307*t5392*var4[13] + 80.*t1884*t2141*t2275*var4[17] - 45.*t5307*t5392*var4[17] + 25.*t5307*t5392*var4[21];
  p_output1[26]=5.*t3162*t4717*var4[1] + 20.*t2225*t3165*t5999*var4[1] + 40.*t2081*t2362*t3165*var4[5] - 20.*t3162*t3165*var4[5] - 5.*t3162*t4717*var4[5] + 60.*t2081*t2833*t3162*t5999*var4[5] - 20.*t2225*t3165*t5999*var4[5] + 90.*t2199*t2216*t2833*var4[9] - 60.*t2081*t2362*t2833*var4[9] - 40.*t2081*t2362*t3165*var4[9] + 20.*t3162*t3165*var4[9] + 60.*t2216*t2275*t2362*t5999*var4[9] - 60.*t2081*t2833*t3162*t5999*var4[9] + 80.*t1884*t2141*t2275*var4[13] - 60.*t2199*t2216*t2275*var4[13] - 90.*t2199*t2216*t2833*var4[13] + 60.*t2081*t2362*t2833*var4[13] + 20.*t2141*t2199*t5999*var4[13] - 60.*t2216*t2275*t2362*t5999*var4[13] - 20.*t1884*t2141*var4[17] - 80.*t1884*t2141*t2275*var4[17] + 60.*t2199*t2216*t2275*var4[17] + 25.*t5307*t5392*var4[17] - 20.*t2141*t2199*t5999*var4[17] + 20.*t1884*t2141*var4[21] - 25.*t5307*t5392*var4[21];
  p_output1[27]=-20.*t1112*t3162*t3165*var4[2] - 60.*t1112*t2081*t2362*t2833*var4[6] + 40.*t1112*t3162*t3165*var4[6] - 60.*t1112*t2199*t2216*t2275*var4[10] + 120.*t1112*t2081*t2362*t2833*var4[10] - 20.*t1112*t3162*t3165*var4[10] - 20.*t1112*t1884*t2141*var4[14] + 120.*t1112*t2199*t2216*t2275*var4[14] - 60.*t1112*t2081*t2362*t2833*var4[14] + 40.*t1112*t1884*t2141*var4[18] - 60.*t1112*t2199*t2216*t2275*var4[18] - 20.*t1112*t1884*t2141*var4[22];
  p_output1[28]=-20.*t235*t3162*t3165*t391*var4[2] - 60.*t2081*t235*t2362*t2833*t391*var4[6] + 40.*t235*t3162*t3165*t391*var4[6] - 60.*t2199*t2216*t2275*t235*t391*var4[10] + 120.*t2081*t235*t2362*t2833*t391*var4[10] - 20.*t235*t3162*t3165*t391*var4[10] - 20.*t1884*t2141*t235*t391*var4[14] + 120.*t2199*t2216*t2275*t235*t391*var4[14] - 60.*t2081*t235*t2362*t2833*t391*var4[14] + 40.*t1884*t2141*t235*t391*var4[18] - 60.*t2199*t2216*t2275*t235*t391*var4[18] - 20.*t1884*t2141*t235*t391*var4[22];
  p_output1[29]=t7310 + t7315 + t7393 + t7458 + t7465*var3[2];
  p_output1[30]=t7310 + t7315 + t6908*var3[2];
  p_output1[31]=t6959*var3[2] + t6959*var3[3] + (-0.4*t6629*t6772 + t6938 - 0.8*(-1.*t6629*t6772 + t6950))*var3[4];
  p_output1[32]=t7393 + t7458 + t7457*var3[2];
  p_output1[33]=t7390*var3[2] + t7390*var3[5] + (t7363 + 0.4*t7320*t7667 + 0.8*(t7375 - 1.*t7320*t7667))*var3[6];
  p_output1[34]=t7745 + t7754 + t7788 + t7798 + t7807 + t7831;
  p_output1[35]=t7745 + t7754 + t7788;
  p_output1[36]=-0.4*t6700*t6772 + 0.4*t6629*t6833 - 0.8*(-1.*t6700*t6772 + t7778);
  p_output1[37]=t7798 + t7807 + t7831;
  p_output1[38]=-0.4*t7320*t7347 + 0.4*t7354*t7667 + 0.8*(-1.*t7354*t7667 + t7814);
  p_output1[39]=t4750;
  p_output1[40]=t4786;
  p_output1[41]=t5233;
  p_output1[42]=t5298;
  p_output1[43]=t5390;
  p_output1[44]=t5391;
  p_output1[45]=20.*t2081*t2362*t3165*var4[2] - 5.*t3162*t4717*var4[2] + 60.*t2199*t2216*t2833*var4[6] - 60.*t2081*t2362*t3165*var4[6] + 5.*t3162*t4717*var4[6] + 60.*t1884*t2141*t2275*var4[10] - 150.*t2199*t2216*t2833*var4[10] + 40.*t2081*t2362*t3165*var4[10] - 140.*t1884*t2141*t2275*var4[14] + 90.*t2199*t2216*t2833*var4[14] + 20.*t5307*t5392*var4[14] + 80.*t1884*t2141*t2275*var4[18] - 45.*t5307*t5392*var4[18] + 25.*t5307*t5392*var4[22];
  p_output1[46]=5.*t3162*t4717*var4[2] + 20.*t2225*t3165*t5999*var4[2] + 40.*t2081*t2362*t3165*var4[6] - 20.*t3162*t3165*var4[6] - 5.*t3162*t4717*var4[6] + 60.*t2081*t2833*t3162*t5999*var4[6] - 20.*t2225*t3165*t5999*var4[6] + 90.*t2199*t2216*t2833*var4[10] - 60.*t2081*t2362*t2833*var4[10] - 40.*t2081*t2362*t3165*var4[10] + 20.*t3162*t3165*var4[10] + 60.*t2216*t2275*t2362*t5999*var4[10] - 60.*t2081*t2833*t3162*t5999*var4[10] + 80.*t1884*t2141*t2275*var4[14] - 60.*t2199*t2216*t2275*var4[14] - 90.*t2199*t2216*t2833*var4[14] + 60.*t2081*t2362*t2833*var4[14] + 20.*t2141*t2199*t5999*var4[14] - 60.*t2216*t2275*t2362*t5999*var4[14] - 20.*t1884*t2141*var4[18] - 80.*t1884*t2141*t2275*var4[18] + 60.*t2199*t2216*t2275*var4[18] + 25.*t5307*t5392*var4[18] - 20.*t2141*t2199*t5999*var4[18] + 20.*t1884*t2141*var4[22] - 25.*t5307*t5392*var4[22];
  p_output1[47]=-20.*t1112*t3162*t3165*var4[3] - 60.*t1112*t2081*t2362*t2833*var4[7] + 40.*t1112*t3162*t3165*var4[7] - 60.*t1112*t2199*t2216*t2275*var4[11] + 120.*t1112*t2081*t2362*t2833*var4[11] - 20.*t1112*t3162*t3165*var4[11] - 20.*t1112*t1884*t2141*var4[15] + 120.*t1112*t2199*t2216*t2275*var4[15] - 60.*t1112*t2081*t2362*t2833*var4[15] + 40.*t1112*t1884*t2141*var4[19] - 60.*t1112*t2199*t2216*t2275*var4[19] - 20.*t1112*t1884*t2141*var4[23];
  p_output1[48]=-20.*t235*t3162*t3165*t391*var4[3] - 60.*t2081*t235*t2362*t2833*t391*var4[7] + 40.*t235*t3162*t3165*t391*var4[7] - 60.*t2199*t2216*t2275*t235*t391*var4[11] + 120.*t2081*t235*t2362*t2833*t391*var4[11] - 20.*t235*t3162*t3165*t391*var4[11] - 20.*t1884*t2141*t235*t391*var4[15] + 120.*t2199*t2216*t2275*t235*t391*var4[15] - 60.*t2081*t235*t2362*t2833*t391*var4[15] + 40.*t1884*t2141*t235*t391*var4[19] - 60.*t2199*t2216*t2275*t235*t391*var4[19] - 20.*t1884*t2141*t235*t391*var4[23];
  p_output1[49]=t6716 + t6804 + t8564 + t8598 + (t6731 + t6777 + t6789 + t8575 + t8583 + t8592)*var3[2];
  p_output1[50]=t6809;
  p_output1[51]=t6889;
  p_output1[52]=t8564 + t8598 + t8597*var3[2];
  p_output1[53]=t8555*var3[2] + t8555*var3[5] + (0.4*t7320*t7347 + t8524 + 0.8*(-1.*t7320*t7347 + t8540))*var3[6];
  p_output1[54]=t7465;
  p_output1[55]=t6908;
  p_output1[56]=t6959;
  p_output1[57]=t7457;
  p_output1[58]=t7390;
  p_output1[59]=t4750;
  p_output1[60]=t4786;
  p_output1[61]=t5233;
  p_output1[62]=t5298;
  p_output1[63]=t5390;
  p_output1[64]=t5391;
  p_output1[65]=20.*t2081*t2362*t3165*var4[3] - 5.*t3162*t4717*var4[3] + 60.*t2199*t2216*t2833*var4[7] - 60.*t2081*t2362*t3165*var4[7] + 5.*t3162*t4717*var4[7] + 60.*t1884*t2141*t2275*var4[11] - 150.*t2199*t2216*t2833*var4[11] + 40.*t2081*t2362*t3165*var4[11] - 140.*t1884*t2141*t2275*var4[15] + 90.*t2199*t2216*t2833*var4[15] + 20.*t5307*t5392*var4[15] + 80.*t1884*t2141*t2275*var4[19] - 45.*t5307*t5392*var4[19] + 25.*t5307*t5392*var4[23];
  p_output1[66]=5.*t3162*t4717*var4[3] + 20.*t2225*t3165*t5999*var4[3] + 40.*t2081*t2362*t3165*var4[7] - 20.*t3162*t3165*var4[7] - 5.*t3162*t4717*var4[7] + 60.*t2081*t2833*t3162*t5999*var4[7] - 20.*t2225*t3165*t5999*var4[7] + 90.*t2199*t2216*t2833*var4[11] - 60.*t2081*t2362*t2833*var4[11] - 40.*t2081*t2362*t3165*var4[11] + 20.*t3162*t3165*var4[11] + 60.*t2216*t2275*t2362*t5999*var4[11] - 60.*t2081*t2833*t3162*t5999*var4[11] + 80.*t1884*t2141*t2275*var4[15] - 60.*t2199*t2216*t2275*var4[15] - 90.*t2199*t2216*t2833*var4[15] + 60.*t2081*t2362*t2833*var4[15] + 20.*t2141*t2199*t5999*var4[15] - 60.*t2216*t2275*t2362*t5999*var4[15] - 20.*t1884*t2141*var4[19] - 80.*t1884*t2141*t2275*var4[19] + 60.*t2199*t2216*t2275*var4[19] + 25.*t5307*t5392*var4[19] - 20.*t2141*t2199*t5999*var4[19] + 20.*t1884*t2141*var4[23] - 25.*t5307*t5392*var4[23];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 67, (mwSize) 1, mxREAL);
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
