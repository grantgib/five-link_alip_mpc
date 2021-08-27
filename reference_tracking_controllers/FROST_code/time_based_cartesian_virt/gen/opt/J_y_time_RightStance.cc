/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:45 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t409;
  double t93;
  double t186;
  double t324;
  double t376;
  double t385;
  double t419;
  double t596;
  double t688;
  double t947;
  double t956;
  double t957;
  double t1033;
  double t1284;
  double t1440;
  double t1500;
  double t1708;
  double t1712;
  double t1893;
  double t1935;
  double t1940;
  double t1977;
  double t1978;
  double t1997;
  double t3873;
  double t3913;
  double t4735;
  double t4741;
  double t5627;
  double t5581;
  double t5611;
  double t5643;
  double t5467;
  double t5625;
  double t5644;
  double t5650;
  double t5665;
  double t5670;
  double t5683;
  double t5719;
  double t5565;
  double t5576;
  double t5653;
  double t5731;
  double t5734;
  double t5735;
  double t5737;
  double t5739;
  double t5741;
  double t5750;
  double t5755;
  double t5766;
  double t2532;
  double t3220;
  double t3281;
  double t3314;
  double t3660;
  double t3843;
  double t3880;
  double t6416;
  double t6423;
  double t6390;
  double t6417;
  double t6425;
  double t6431;
  double t6439;
  double t6449;
  double t6452;
  double t6457;
  double t6345;
  double t6362;
  double t6374;
  double t6379;
  double t6381;
  double t6384;
  double t6507;
  double t6518;
  double t6519;
  double t6391;
  double t6408;
  double t6438;
  double t6468;
  double t6469;
  double t6473;
  double t6485;
  double t6486;
  double t6563;
  double t6583;
  double t6584;
  double t6917;
  double t6930;
  double t6933;
  double t5745;
  double t5767;
  double t5768;
  double t5773;
  double t5778;
  double t5787;
  double t6913;
  double t6936;
  double t6937;
  double t6939;
  double t6942;
  double t6948;
  t409 = -1.*var4[1];
  t93 = -1. + var5[0];
  t186 = -1. + var6[0];
  t324 = 1/t186;
  t376 = -1.*t93*t324;
  t385 = 1. + t376;
  t419 = var4[0] + t409;
  t596 = Power(t419,-5);
  t688 = -1.*var1[0];
  t947 = t688 + var1[1];
  t956 = t93*t324*t947;
  t957 = t409 + var1[0] + t956;
  t1033 = Power(t957,4);
  t1284 = Power(t419,-4);
  t1440 = Power(t957,3);
  t1500 = 1/t419;
  t1708 = -1.*t1500*t957;
  t1712 = 1. + t1708;
  t1893 = Power(t419,-3);
  t1935 = Power(t957,2);
  t1940 = Power(t1712,2);
  t1977 = Power(t419,-2);
  t1978 = Power(t1712,3);
  t1997 = Power(t1712,4);
  t3873 = Power(t957,5);
  t3913 = Power(t419,-6);
  t4735 = -1.*t1977*t957;
  t4741 = t1500 + t4735;
  t5627 = Cos(var2[2]);
  t5581 = Cos(var2[3]);
  t5611 = Sin(var2[2]);
  t5643 = Sin(var2[3]);
  t5467 = Cos(var2[4]);
  t5625 = -1.*t5581*t5611;
  t5644 = -1.*t5627*t5643;
  t5650 = t5625 + t5644;
  t5665 = -1.*t5627*t5581;
  t5670 = t5611*t5643;
  t5683 = t5665 + t5670;
  t5719 = Sin(var2[4]);
  t5565 = -1.*t5467;
  t5576 = 1. + t5565;
  t5653 = -0.4*t5576*t5650;
  t5731 = 0.4*t5683*t5719;
  t5734 = t5467*t5650;
  t5735 = t5683*t5719;
  t5737 = t5734 + t5735;
  t5739 = -0.8*t5737;
  t5741 = t5653 + t5731 + t5739;
  t5750 = t5627*t5581;
  t5755 = -1.*t5611*t5643;
  t5766 = t5750 + t5755;
  t2532 = Power(t1712,5);
  t3220 = -1.*t2532;
  t3281 = -5.*t1500*t957*t1997;
  t3314 = -10.*t1977*t1935*t1978;
  t3660 = -10.*t1893*t1440*t1940;
  t3843 = -5.*t1284*t1033*t1712;
  t3880 = -1.*t596*t3873;
  t6416 = Cos(var2[5]);
  t6423 = Sin(var2[5]);
  t6390 = Cos(var2[6]);
  t6417 = t5627*t6416;
  t6425 = -1.*t5611*t6423;
  t6431 = t6417 + t6425;
  t6439 = -1.*t6416*t5611;
  t6449 = -1.*t5627*t6423;
  t6452 = t6439 + t6449;
  t6457 = Sin(var2[6]);
  t6345 = -0.4*t5576*t5766;
  t6362 = 0.4*t5650*t5719;
  t6374 = t5467*t5766;
  t6379 = t5650*t5719;
  t6381 = t6374 + t6379;
  t6384 = -0.8*t6381;
  t6507 = t5581*t5611;
  t6518 = t5627*t5643;
  t6519 = t6507 + t6518;
  t6391 = -1.*t6390;
  t6408 = 1. + t6391;
  t6438 = 0.4*t6408*t6431;
  t6468 = -0.4*t6452*t6457;
  t6469 = t6390*t6431;
  t6473 = t6452*t6457;
  t6485 = t6469 + t6473;
  t6486 = 0.8*t6485;
  t6563 = t6416*t5611;
  t6583 = t5627*t6423;
  t6584 = t6563 + t6583;
  t6917 = -1.*t5627*t6416;
  t6930 = t5611*t6423;
  t6933 = t6917 + t6930;
  t5745 = 0.4*t5467*t5650;
  t5767 = -0.4*t5766*t5719;
  t5768 = -1.*t5766*t5719;
  t5773 = t5734 + t5768;
  t5778 = -0.8*t5773;
  t5787 = t5745 + t5767 + t5778;
  t6913 = 0.4*t6408*t6452;
  t6936 = -0.4*t6933*t6457;
  t6937 = t6390*t6452;
  t6939 = t6933*t6457;
  t6942 = t6937 + t6939;
  t6948 = 0.8*t6942;
  p_output1[0]=5.*t1500*t1997*t385*var3[0] - 5.*t1500*t1997*t385*var3[4] + 20.*t1977*t1978*t385*t957*var3[4] + 30.*t1893*t1935*t1940*t385*var3[8] - 20.*t1977*t1978*t385*t957*var3[8] + 20.*t1284*t1440*t1712*t385*var3[12] - 30.*t1893*t1935*t1940*t385*var3[12] - 20.*t1284*t1440*t1712*t385*var3[16] + 5.*t1033*t385*t596*var3[16] - 5.*t1033*t385*t596*var3[20];
  p_output1[1]=5.*t1500*t1997*t324*t93*var3[0] - 5.*t1500*t1997*t324*t93*var3[4] + 20.*t1977*t1978*t324*t93*t957*var3[4] + 30.*t1893*t1935*t1940*t324*t93*var3[8] - 20.*t1977*t1978*t324*t93*t957*var3[8] + 20.*t1284*t1440*t1712*t324*t93*var3[12] - 30.*t1893*t1935*t1940*t324*t93*var3[12] - 20.*t1284*t1440*t1712*t324*t93*var3[16] + 5.*t1033*t324*t596*t93*var3[16] - 5.*t1033*t324*t596*t93*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t3220;
  p_output1[4]=t3281;
  p_output1[5]=t3314;
  p_output1[6]=t3660;
  p_output1[7]=t3843;
  p_output1[8]=t3880;
  p_output1[9]=-5.*t1977*t1997*t957*var3[0] - 20.*t1893*t1935*t1978*var3[4] + 5.*t1977*t1997*t957*var3[4] - 30.*t1284*t1440*t1940*var3[8] + 20.*t1893*t1935*t1978*var3[8] + 30.*t1284*t1440*t1940*var3[12] - 20.*t1033*t1712*t596*var3[12] - 5.*t3873*t3913*var3[16] + 20.*t1033*t1712*t596*var3[16] + 5.*t3873*t3913*var3[20];
  p_output1[10]=-5.*t1997*t4741*var3[0] + 5.*t1500*t1997*var3[4] - 5.*t1977*t1997*t957*var3[4] - 20.*t1500*t1978*t4741*t957*var3[4] - 20.*t1893*t1935*t1978*var3[8] - 30.*t1935*t1940*t1977*t4741*var3[8] + 20.*t1977*t1978*t957*var3[8] - 30.*t1284*t1440*t1940*var3[12] + 30.*t1893*t1935*t1940*var3[12] - 20.*t1440*t1712*t1893*t4741*var3[12] + 20.*t1284*t1440*t1712*var3[16] - 5.*t1033*t1284*t4741*var3[16] - 20.*t1033*t1712*t596*var3[16] - 5.*t3873*t3913*var3[20] + 5.*t1033*t596*var3[20];
  p_output1[11]=5.*t1500*t1997*t385*var3[1] - 5.*t1500*t1997*t385*var3[5] + 20.*t1977*t1978*t385*t957*var3[5] + 30.*t1893*t1935*t1940*t385*var3[9] - 20.*t1977*t1978*t385*t957*var3[9] + 20.*t1284*t1440*t1712*t385*var3[13] - 30.*t1893*t1935*t1940*t385*var3[13] - 20.*t1284*t1440*t1712*t385*var3[17] + 5.*t1033*t385*t596*var3[17] - 5.*t1033*t385*t596*var3[21];
  p_output1[12]=5.*t1500*t1997*t324*t93*var3[1] - 5.*t1500*t1997*t324*t93*var3[5] + 20.*t1977*t1978*t324*t93*t957*var3[5] + 30.*t1893*t1935*t1940*t324*t93*var3[9] - 20.*t1977*t1978*t324*t93*t957*var3[9] + 20.*t1284*t1440*t1712*t324*t93*var3[13] - 30.*t1893*t1935*t1940*t324*t93*var3[13] - 20.*t1284*t1440*t1712*t324*t93*var3[17] + 5.*t1033*t324*t596*t93*var3[17] - 5.*t1033*t324*t596*t93*var3[21];
  p_output1[13]=t5741;
  p_output1[14]=t5741;
  p_output1[15]=t5787;
  p_output1[16]=t3220;
  p_output1[17]=t3281;
  p_output1[18]=t3314;
  p_output1[19]=t3660;
  p_output1[20]=t3843;
  p_output1[21]=t3880;
  p_output1[22]=-5.*t1977*t1997*t957*var3[1] - 20.*t1893*t1935*t1978*var3[5] + 5.*t1977*t1997*t957*var3[5] - 30.*t1284*t1440*t1940*var3[9] + 20.*t1893*t1935*t1978*var3[9] + 30.*t1284*t1440*t1940*var3[13] - 20.*t1033*t1712*t596*var3[13] - 5.*t3873*t3913*var3[17] + 20.*t1033*t1712*t596*var3[17] + 5.*t3873*t3913*var3[21];
  p_output1[23]=-5.*t1997*t4741*var3[1] + 5.*t1500*t1997*var3[5] - 5.*t1977*t1997*t957*var3[5] - 20.*t1500*t1978*t4741*t957*var3[5] - 20.*t1893*t1935*t1978*var3[9] - 30.*t1935*t1940*t1977*t4741*var3[9] + 20.*t1977*t1978*t957*var3[9] - 30.*t1284*t1440*t1940*var3[13] + 30.*t1893*t1935*t1940*var3[13] - 20.*t1440*t1712*t1893*t4741*var3[13] + 20.*t1284*t1440*t1712*var3[17] - 5.*t1033*t1284*t4741*var3[17] - 20.*t1033*t1712*t596*var3[17] - 5.*t3873*t3913*var3[21] + 5.*t1033*t596*var3[21];
  p_output1[24]=5.*t1500*t1997*t385*var3[2] - 5.*t1500*t1997*t385*var3[6] + 20.*t1977*t1978*t385*t957*var3[6] + 30.*t1893*t1935*t1940*t385*var3[10] - 20.*t1977*t1978*t385*t957*var3[10] + 20.*t1284*t1440*t1712*t385*var3[14] - 30.*t1893*t1935*t1940*t385*var3[14] - 20.*t1284*t1440*t1712*t385*var3[18] + 5.*t1033*t385*t596*var3[18] - 5.*t1033*t385*t596*var3[22];
  p_output1[25]=5.*t1500*t1997*t324*t93*var3[2] - 5.*t1500*t1997*t324*t93*var3[6] + 20.*t1977*t1978*t324*t93*t957*var3[6] + 30.*t1893*t1935*t1940*t324*t93*var3[10] - 20.*t1977*t1978*t324*t93*t957*var3[10] + 20.*t1284*t1440*t1712*t324*t93*var3[14] - 30.*t1893*t1935*t1940*t324*t93*var3[14] - 20.*t1284*t1440*t1712*t324*t93*var3[18] + 5.*t1033*t324*t596*t93*var3[18] - 5.*t1033*t324*t596*t93*var3[22];
  p_output1[26]=t6345 + t6362 + t6384 + t6438 + t6468 + t6486;
  p_output1[27]=t6345 + t6362 + t6384;
  p_output1[28]=0.4*t5467*t5766 - 0.4*t5719*t6519 - 0.8*(t6374 - 1.*t5719*t6519);
  p_output1[29]=t6438 + t6468 + t6486;
  p_output1[30]=-0.4*t6390*t6431 + 0.4*t6457*t6584 + 0.8*(t6469 - 1.*t6457*t6584);
  p_output1[31]=t3220;
  p_output1[32]=t3281;
  p_output1[33]=t3314;
  p_output1[34]=t3660;
  p_output1[35]=t3843;
  p_output1[36]=t3880;
  p_output1[37]=-5.*t1977*t1997*t957*var3[2] - 20.*t1893*t1935*t1978*var3[6] + 5.*t1977*t1997*t957*var3[6] - 30.*t1284*t1440*t1940*var3[10] + 20.*t1893*t1935*t1978*var3[10] + 30.*t1284*t1440*t1940*var3[14] - 20.*t1033*t1712*t596*var3[14] - 5.*t3873*t3913*var3[18] + 20.*t1033*t1712*t596*var3[18] + 5.*t3873*t3913*var3[22];
  p_output1[38]=-5.*t1997*t4741*var3[2] + 5.*t1500*t1997*var3[6] - 5.*t1977*t1997*t957*var3[6] - 20.*t1500*t1978*t4741*t957*var3[6] - 20.*t1893*t1935*t1978*var3[10] - 30.*t1935*t1940*t1977*t4741*var3[10] + 20.*t1977*t1978*t957*var3[10] - 30.*t1284*t1440*t1940*var3[14] + 30.*t1893*t1935*t1940*var3[14] - 20.*t1440*t1712*t1893*t4741*var3[14] + 20.*t1284*t1440*t1712*var3[18] - 5.*t1033*t1284*t4741*var3[18] - 20.*t1033*t1712*t596*var3[18] - 5.*t3873*t3913*var3[22] + 5.*t1033*t596*var3[22];
  p_output1[39]=5.*t1500*t1997*t385*var3[3] - 5.*t1500*t1997*t385*var3[7] + 20.*t1977*t1978*t385*t957*var3[7] + 30.*t1893*t1935*t1940*t385*var3[11] - 20.*t1977*t1978*t385*t957*var3[11] + 20.*t1284*t1440*t1712*t385*var3[15] - 30.*t1893*t1935*t1940*t385*var3[15] - 20.*t1284*t1440*t1712*t385*var3[19] + 5.*t1033*t385*t596*var3[19] - 5.*t1033*t385*t596*var3[23];
  p_output1[40]=5.*t1500*t1997*t324*t93*var3[3] - 5.*t1500*t1997*t324*t93*var3[7] + 20.*t1977*t1978*t324*t93*t957*var3[7] + 30.*t1893*t1935*t1940*t324*t93*var3[11] - 20.*t1977*t1978*t324*t93*t957*var3[11] + 20.*t1284*t1440*t1712*t324*t93*var3[15] - 30.*t1893*t1935*t1940*t324*t93*var3[15] - 20.*t1284*t1440*t1712*t324*t93*var3[19] + 5.*t1033*t324*t596*t93*var3[19] - 5.*t1033*t324*t596*t93*var3[23];
  p_output1[41]=t5653 + t5731 + t5739 + t6913 + t6936 + t6948;
  p_output1[42]=t5741;
  p_output1[43]=t5787;
  p_output1[44]=t6913 + t6936 + t6948;
  p_output1[45]=-0.4*t6390*t6452 + 0.4*t6431*t6457 + 0.8*(-1.*t6431*t6457 + t6937);
  p_output1[46]=t3220;
  p_output1[47]=t3281;
  p_output1[48]=t3314;
  p_output1[49]=t3660;
  p_output1[50]=t3843;
  p_output1[51]=t3880;
  p_output1[52]=-5.*t1977*t1997*t957*var3[3] - 20.*t1893*t1935*t1978*var3[7] + 5.*t1977*t1997*t957*var3[7] - 30.*t1284*t1440*t1940*var3[11] + 20.*t1893*t1935*t1978*var3[11] + 30.*t1284*t1440*t1940*var3[15] - 20.*t1033*t1712*t596*var3[15] - 5.*t3873*t3913*var3[19] + 20.*t1033*t1712*t596*var3[19] + 5.*t3873*t3913*var3[23];
  p_output1[53]=-5.*t1997*t4741*var3[3] + 5.*t1500*t1997*var3[7] - 5.*t1977*t1997*t957*var3[7] - 20.*t1500*t1978*t4741*t957*var3[7] - 20.*t1893*t1935*t1978*var3[11] - 30.*t1935*t1940*t1977*t4741*var3[11] + 20.*t1977*t1978*t957*var3[11] - 30.*t1284*t1440*t1940*var3[15] + 30.*t1893*t1935*t1940*var3[15] - 20.*t1440*t1712*t1893*t4741*var3[15] + 20.*t1284*t1440*t1712*var3[19] - 5.*t1033*t1284*t4741*var3[19] - 20.*t1033*t1712*t596*var3[19] - 5.*t3873*t3913*var3[23] + 5.*t1033*t596*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 54, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_RightStance.hh"

namespace RightStance
{

void J_y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
