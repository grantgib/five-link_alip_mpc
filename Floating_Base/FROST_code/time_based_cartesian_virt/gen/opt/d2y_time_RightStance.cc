/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:51 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t135;
  double t673;
  double t1067;
  double t1114;
  double t1326;
  double t1992;
  double t2136;
  double t2142;
  double t2176;
  double t2180;
  double t2191;
  double t2337;
  double t2467;
  double t2920;
  double t3027;
  double t3064;
  double t3109;
  double t3136;
  double t3375;
  double t3555;
  double t3863;
  double t3961;
  double t4014;
  double t4210;
  double t5529;
  double t5588;
  double t5522;
  double t5616;
  double t5442;
  double t5540;
  double t5621;
  double t5657;
  double t5681;
  double t5682;
  double t5759;
  double t5790;
  double t5480;
  double t5508;
  double t5860;
  double t6023;
  double t6029;
  double t6032;
  double t5997;
  double t6035;
  double t6036;
  double t6042;
  double t6064;
  double t6095;
  double t6125;
  double t6136;
  double t6157;
  double t6160;
  double t6183;
  double t6203;
  double t6206;
  double t6250;
  double t6261;
  double t6284;
  double t6237;
  double t6294;
  double t6309;
  double t6311;
  double t6315;
  double t6317;
  double t6228;
  double t6327;
  double t6334;
  double t6364;
  double t5841;
  double t5852;
  double t5869;
  double t5897;
  double t5906;
  double t5918;
  double t5678;
  double t5792;
  double t5795;
  double t5807;
  double t5808;
  double t5811;
  double t6530;
  double t6531;
  double t6532;
  double t7057;
  double t7073;
  double t7054;
  double t7059;
  double t7074;
  double t7075;
  double t7094;
  double t7096;
  double t7097;
  double t7098;
  double t7055;
  double t7056;
  double t7093;
  double t7103;
  double t7105;
  double t7110;
  double t7111;
  double t7119;
  double t7138;
  double t7139;
  double t7141;
  double t6824;
  double t6969;
  double t6972;
  double t6974;
  double t6982;
  double t6986;
  double t6992;
  double t7121;
  double t7123;
  double t7133;
  double t7143;
  double t7147;
  double t7148;
  double t7157;
  double t7158;
  double t7405;
  double t7468;
  double t7470;
  double t7478;
  double t7505;
  double t7506;
  double t7513;
  double t7661;
  double t7669;
  double t7686;
  double t7647;
  double t7688;
  double t7705;
  double t7719;
  double t7721;
  double t7728;
  double t7643;
  double t7739;
  double t5957;
  double t6109;
  double t6116;
  double t6127;
  double t6139;
  double t6147;
  double t6150;
  double t6152;
  double t6209;
  double t6211;
  double t6220;
  double t6227;
  double t6372;
  double t7847;
  double t8027;
  double t8049;
  double t8092;
  double t8095;
  double t8098;
  double t8106;
  double t8109;
  double t8189;
  double t8190;
  double t8191;
  double t8206;
  double t8211;
  double t8215;
  double t8151;
  double t8221;
  double t7850;
  t135 = -1.*var6[1];
  t673 = var6[0] + t135;
  t1067 = Power(t673,-5);
  t1114 = -1. + var7[0];
  t1326 = -1. + var8[0];
  t1992 = 1/t1326;
  t2136 = -1.*var1[0];
  t2142 = t2136 + var1[1];
  t2176 = t1114*t1992*t2142;
  t2180 = t135 + var1[0] + t2176;
  t2191 = Power(t2180,3);
  t2337 = Power(t673,-4);
  t2467 = Power(t2180,2);
  t2920 = 1/t673;
  t3027 = -1.*t2920*t2180;
  t3064 = 1. + t3027;
  t3109 = Power(t673,-3);
  t3136 = Power(t3064,2);
  t3375 = Power(t673,-2);
  t3555 = Power(t3064,3);
  t3863 = Power(t2180,4);
  t3961 = Power(t3064,4);
  t4014 = Power(t2180,5);
  t4210 = Power(t3064,5);
  t5529 = Cos(var2[3]);
  t5588 = Sin(var2[2]);
  t5522 = Cos(var2[2]);
  t5616 = Sin(var2[3]);
  t5442 = Cos(var2[4]);
  t5540 = t5522*t5529;
  t5621 = -1.*t5588*t5616;
  t5657 = t5540 + t5621;
  t5681 = -1.*t5529*t5588;
  t5682 = -1.*t5522*t5616;
  t5759 = t5681 + t5682;
  t5790 = Sin(var2[4]);
  t5480 = -1.*t5442;
  t5508 = 1. + t5480;
  t5860 = t5442*t5759;
  t6023 = -1.*t5522*t5529;
  t6029 = t5588*t5616;
  t6032 = t6023 + t6029;
  t5997 = -0.4*t5508*t5759;
  t6035 = 0.4*t6032*t5790;
  t6036 = t6032*t5790;
  t6042 = t5860 + t6036;
  t6064 = -0.8*t6042;
  t6095 = t5997 + t6035 + t6064;
  t6125 = -0.4*t5759*t5790;
  t6136 = -1.*t5759*t5790;
  t6157 = 0.4*t5442*t6032;
  t6160 = t5442*t6032;
  t6183 = t6160 + t6136;
  t6203 = -0.8*t6183;
  t6206 = t6157 + t6125 + t6203;
  t6250 = t5529*t5588;
  t6261 = t5522*t5616;
  t6284 = t6250 + t6261;
  t6237 = -0.4*t5508*t6032;
  t6294 = 0.4*t6284*t5790;
  t6309 = t6284*t5790;
  t6311 = t6160 + t6309;
  t6315 = -0.8*t6311;
  t6317 = t6237 + t6294 + t6315;
  t6228 = var3[4]*t6206;
  t6327 = var3[2]*t6317;
  t6334 = var3[3]*t6317;
  t6364 = t6228 + t6327 + t6334;
  t5841 = 0.4*t5442*t5759;
  t5852 = -0.4*t5657*t5790;
  t5869 = -1.*t5657*t5790;
  t5897 = t5860 + t5869;
  t5906 = -0.8*t5897;
  t5918 = t5841 + t5852 + t5906;
  t5678 = -0.4*t5508*t5657;
  t5792 = 0.4*t5759*t5790;
  t5795 = t5442*t5657;
  t5807 = t5759*t5790;
  t5808 = t5795 + t5807;
  t5811 = -0.8*t5808;
  t6530 = var3[4]*t5918;
  t6531 = var3[2]*t6095;
  t6532 = var3[3]*t6095;
  t7057 = Cos(var2[5]);
  t7073 = Sin(var2[5]);
  t7054 = Cos(var2[6]);
  t7059 = t5522*t7057;
  t7074 = -1.*t5588*t7073;
  t7075 = t7059 + t7074;
  t7094 = -1.*t7057*t5588;
  t7096 = -1.*t5522*t7073;
  t7097 = t7094 + t7096;
  t7098 = Sin(var2[6]);
  t7055 = -1.*t7054;
  t7056 = 1. + t7055;
  t7093 = 0.4*t7056*t7075;
  t7103 = -0.4*t7097*t7098;
  t7105 = t7054*t7075;
  t7110 = t7097*t7098;
  t7111 = t7105 + t7110;
  t7119 = 0.8*t7111;
  t7138 = t7057*t5588;
  t7139 = t5522*t7073;
  t7141 = t7138 + t7139;
  t6824 = t5678 + t5792 + t5811;
  t6969 = 0.4*t5442*t5657;
  t6972 = -0.4*t6284*t5790;
  t6974 = -1.*t6284*t5790;
  t6982 = t5795 + t6974;
  t6986 = -0.8*t6982;
  t6992 = t6969 + t6972 + t6986;
  t7121 = t7093 + t7103 + t7119;
  t7123 = t5678 + t5792 + t5811 + t7093 + t7103 + t7119;
  t7133 = -0.4*t7054*t7075;
  t7143 = 0.4*t7141*t7098;
  t7147 = -1.*t7141*t7098;
  t7148 = t7105 + t7147;
  t7157 = 0.8*t7148;
  t7158 = t7133 + t7143 + t7157;
  t7405 = -0.4*t7054*t7097;
  t7468 = 0.4*t7075*t7098;
  t7470 = t7054*t7097;
  t7478 = -1.*t7075*t7098;
  t7505 = t7470 + t7478;
  t7506 = 0.8*t7505;
  t7513 = t7405 + t7468 + t7506;
  t7661 = -1.*t5522*t7057;
  t7669 = t5588*t7073;
  t7686 = t7661 + t7669;
  t7647 = 0.4*t7056*t7097;
  t7688 = -0.4*t7686*t7098;
  t7705 = t7686*t7098;
  t7719 = t7470 + t7705;
  t7721 = 0.8*t7719;
  t7728 = t7647 + t7688 + t7721;
  t7643 = var3[6]*t7513;
  t7739 = var3[5]*t7728;
  t5957 = var4[4]*t5918;
  t6109 = var4[3]*t6095;
  t6116 = -0.4*t5442*t5657;
  t6127 = -1.*t5442*t5657;
  t6139 = t6127 + t6136;
  t6147 = -0.8*t6139;
  t6150 = t6116 + t6125 + t6147;
  t6152 = var3[4]*t6150;
  t6209 = var3[2]*t6206;
  t6211 = var3[3]*t6206;
  t6220 = t6152 + t6209 + t6211;
  t6227 = var3[4]*t6220;
  t6372 = var3[3]*t6364;
  t7847 = t5997 + t6035 + t6064 + t7647 + t7688 + t7721;
  t8027 = 0.4*t7097*t7098;
  t8049 = -1.*t7097*t7098;
  t8092 = -0.4*t7054*t7686;
  t8095 = t7054*t7686;
  t8098 = t8095 + t8049;
  t8106 = 0.8*t8098;
  t8109 = t8092 + t8027 + t8106;
  t8189 = 0.4*t7056*t7686;
  t8190 = -0.4*t7141*t7098;
  t8191 = t7141*t7098;
  t8206 = t8095 + t8191;
  t8211 = 0.8*t8206;
  t8215 = t8189 + t8190 + t8211;
  t8151 = var3[6]*t8109;
  t8221 = var3[5]*t8215;
  t7850 = var3[2]*t7847;
  p_output1[0]=var4[2] - 20.*t3375*t3555*var5[0] - 60.*t2180*t3109*t3136*var5[4] + 40.*t3375*t3555*var5[4] - 60.*t2337*t2467*t3064*var5[8] + 120.*t2180*t3109*t3136*var5[8] - 20.*t3375*t3555*var5[8] - 20.*t1067*t2191*var5[12] + 120.*t2337*t2467*t3064*var5[12] - 60.*t2180*t3109*t3136*var5[12] + 40.*t1067*t2191*var5[16] - 60.*t2337*t2467*t3064*var5[16] - 20.*t1067*t2191*var5[20] + (var2[2] - 1.*t4210*var5[0] - 5.*t2180*t2920*t3961*var5[4] - 10.*t2467*t3375*t3555*var5[8] - 10.*t2191*t3109*t3136*var5[12] - 5.*t2337*t3064*t3863*var5[16] - 1.*t1067*t4014*var5[20])*var9[0] + (var3[2] + 5.*t2920*t3961*var5[0] + 20.*t2180*t3375*t3555*var5[4] - 5.*t2920*t3961*var5[4] + 30.*t2467*t3109*t3136*var5[8] - 20.*t2180*t3375*t3555*var5[8] + 20.*t2191*t2337*t3064*var5[12] - 30.*t2467*t3109*t3136*var5[12] - 20.*t2191*t2337*t3064*var5[16] + 5.*t1067*t3863*var5[16] - 5.*t1067*t3863*var5[20])*var9[1];
  p_output1[1]=t5957 + t6109 + t6227 + t6372 + t6364*var3[2] + t6095*var4[2] - 20.*t3375*t3555*var5[1] - 60.*t2180*t3109*t3136*var5[5] + 40.*t3375*t3555*var5[5] - 60.*t2337*t2467*t3064*var5[9] + 120.*t2180*t3109*t3136*var5[9] - 20.*t3375*t3555*var5[9] - 20.*t1067*t2191*var5[13] + 120.*t2337*t2467*t3064*var5[13] - 60.*t2180*t3109*t3136*var5[13] + 40.*t1067*t2191*var5[17] - 60.*t2337*t2467*t3064*var5[17] - 20.*t1067*t2191*var5[21] + (t5678 + t5792 + t5811 - 1.*t4210*var5[1] - 5.*t2180*t2920*t3961*var5[5] - 10.*t2467*t3375*t3555*var5[9] - 10.*t2191*t3109*t3136*var5[13] - 5.*t2337*t3064*t3863*var5[17] - 1.*t1067*t4014*var5[21])*var9[0] + (t6530 + t6531 + t6532 + 5.*t2920*t3961*var5[1] + 20.*t2180*t3375*t3555*var5[5] - 5.*t2920*t3961*var5[5] + 30.*t2467*t3109*t3136*var5[9] - 20.*t2180*t3375*t3555*var5[9] + 20.*t2191*t2337*t3064*var5[13] - 30.*t2467*t3109*t3136*var5[13] - 20.*t2191*t2337*t3064*var5[17] + 5.*t1067*t3863*var5[17] - 5.*t1067*t3863*var5[21])*var9[1];
  p_output1[2]=(t6530 + t6532 + t7643 + t7739 + t7850)*var3[2] + (t6530 + t6531 + t6532)*var3[3] + var3[4]*(t5918*var3[2] + t5918*var3[3] + (t5852 - 0.4*t5442*t6284 - 0.8*(t5869 - 1.*t5442*t6284))*var3[4]) + (t7643 + t7739 + t7728*var3[2])*var3[5] + var3[6]*(t7513*var3[2] + t7513*var3[5] + (0.4*t7054*t7141 + t7468 + 0.8*(-1.*t7054*t7141 + t7478))*var3[6]) + t7123*var4[2] + t6824*var4[3] + t6992*var4[4] + t7121*var4[5] + t7158*var4[6] - 20.*t3375*t3555*var5[2] - 60.*t2180*t3109*t3136*var5[6] + 40.*t3375*t3555*var5[6] - 60.*t2337*t2467*t3064*var5[10] + 120.*t2180*t3109*t3136*var5[10] - 20.*t3375*t3555*var5[10] - 20.*t1067*t2191*var5[14] + 120.*t2337*t2467*t3064*var5[14] - 60.*t2180*t3109*t3136*var5[14] + 40.*t1067*t2191*var5[18] - 60.*t2337*t2467*t3064*var5[18] - 20.*t1067*t2191*var5[22] + (0.4*t5657*t5790 - 0.4*t5508*t6284 - 0.8*(t5657*t5790 + t5442*t6284) - 0.4*t7075*t7098 + 0.4*t7056*t7141 + 0.8*(t7075*t7098 + t7054*t7141) - 1.*t4210*var5[2] - 5.*t2180*t2920*t3961*var5[6] - 10.*t2467*t3375*t3555*var5[10] - 10.*t2191*t3109*t3136*var5[14] - 5.*t2337*t3064*t3863*var5[18] - 1.*t1067*t4014*var5[22])*var9[0] + (t7123*var3[2] + t6824*var3[3] + t6992*var3[4] + t7121*var3[5] + t7158*var3[6] + 5.*t2920*t3961*var5[2] + 20.*t2180*t3375*t3555*var5[6] - 5.*t2920*t3961*var5[6] + 30.*t2467*t3109*t3136*var5[10] - 20.*t2180*t3375*t3555*var5[10] + 20.*t2191*t2337*t3064*var5[14] - 30.*t2467*t3109*t3136*var5[14] - 20.*t2191*t2337*t3064*var5[18] + 5.*t1067*t3863*var5[18] - 5.*t1067*t3863*var5[22])*var9[1];
  p_output1[3]=t5957 + t6109 + t6227 + t6372 + var3[2]*(t6228 + t6334 + t8151 + t8221 + (t6237 + t6294 + t6315 + t8189 + t8190 + t8211)*var3[2]) + (t8151 + t8221 + t8215*var3[2])*var3[5] + var3[6]*(t8109*var3[2] + t8109*var3[5] + (0.4*t7054*t7075 + t8027 + 0.8*(-1.*t7054*t7075 + t8049))*var3[6]) + t7847*var4[2] + t7728*var4[5] + t7513*var4[6] - 20.*t3375*t3555*var5[3] - 60.*t2180*t3109*t3136*var5[7] + 40.*t3375*t3555*var5[7] - 60.*t2337*t2467*t3064*var5[11] + 120.*t2180*t3109*t3136*var5[11] - 20.*t3375*t3555*var5[11] - 20.*t1067*t2191*var5[15] + 120.*t2337*t2467*t3064*var5[15] - 60.*t2180*t3109*t3136*var5[15] + 40.*t1067*t2191*var5[19] - 60.*t2337*t2467*t3064*var5[19] - 20.*t1067*t2191*var5[23] + (t5678 + t5792 + t5811 + t7093 + t7103 + t7119 - 1.*t4210*var5[3] - 5.*t2180*t2920*t3961*var5[7] - 10.*t2467*t3375*t3555*var5[11] - 10.*t2191*t3109*t3136*var5[15] - 5.*t2337*t3064*t3863*var5[19] - 1.*t1067*t4014*var5[23])*var9[0] + (t6530 + t6532 + t7643 + t7739 + t7850 + 5.*t2920*t3961*var5[3] + 20.*t2180*t3375*t3555*var5[7] - 5.*t2920*t3961*var5[7] + 30.*t2467*t3109*t3136*var5[11] - 20.*t2180*t3375*t3555*var5[11] + 20.*t2191*t2337*t3064*var5[15] - 30.*t2467*t3109*t3136*var5[15] - 20.*t2191*t2337*t3064*var5[19] + 5.*t1067*t3863*var5[19] - 5.*t1067*t3863*var5[23])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "d2y_time_RightStance.hh"

namespace RightStance
{

void d2y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
