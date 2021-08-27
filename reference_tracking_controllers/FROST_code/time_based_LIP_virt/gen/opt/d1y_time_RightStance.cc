/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:05 GMT-05:00
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
  double t27;
  double t32;
  double t42;
  double t54;
  double t83;
  double t88;
  double t112;
  double t142;
  double t170;
  double t269;
  double t320;
  double t399;
  double t400;
  double t414;
  double t450;
  double t467;
  double t546;
  double t554;
  double t575;
  double t649;
  double t651;
  double t750;
  double t800;
  double t804;
  double t806;
  double t826;
  double t832;
  double t1417;
  double t2190;
  double t2179;
  double t2188;
  double t2191;
  double t2178;
  double t2189;
  double t2196;
  double t2223;
  double t2351;
  double t2361;
  double t2362;
  double t2363;
  double t2367;
  double t2368;
  double t2370;
  double t2931;
  double t3041;
  double t3069;
  double t2878;
  double t2900;
  double t3354;
  double t3463;
  double t4978;
  double t5228;
  double t4977;
  double t5208;
  double t5236;
  double t5237;
  double t5511;
  double t5512;
  double t5513;
  double t5514;
  double t5516;
  double t5526;
  double t5527;
  double t5528;
  double t2930;
  double t3227;
  double t3511;
  double t3516;
  double t3553;
  double t3815;
  double t3949;
  double t4044;
  double t4045;
  double t5522;
  double t5523;
  double t5524;
  double t5525;
  double t5529;
  double t5531;
  double t5532;
  double t5533;
  double t5534;
  double t5535;
  double t5586;
  double t5587;
  double t5588;
  double t5591;
  double t5934;
  double t5935;
  double t5937;
  double t5939;
  double t5940;
  double t5941;
  double t6118;
  double t6119;
  double t6131;
  double t6149;
  double t6208;
  double t5612;
  double t5613;
  double t5614;
  double t5616;
  double t5834;
  double t5836;
  double t5893;
  double t5930;
  double t6294;
  double t6295;
  double t6296;
  double t6300;
  double t2299;
  double t2366;
  double t5510;
  double t5515;
  double t5517;
  double t5518;
  double t6880;
  double t6625;
  double t6663;
  double t6891;
  double t6905;
  t27 = -1.*var5[1];
  t32 = var5[0] + t27;
  t42 = Power(t32,-7);
  t54 = -1. + var6[0];
  t83 = -1. + var7[0];
  t88 = 1/t83;
  t112 = -1.*var1[0];
  t142 = t112 + var1[1];
  t170 = t54*t88*t142;
  t269 = t27 + var1[0] + t170;
  t320 = Power(t269,6);
  t399 = Power(t32,-6);
  t400 = Power(t269,5);
  t414 = 1/t32;
  t450 = -1.*t414*t269;
  t467 = 1. + t450;
  t546 = Power(t32,-5);
  t554 = Power(t269,4);
  t575 = Power(t467,2);
  t649 = Power(t32,-4);
  t651 = Power(t269,3);
  t750 = Power(t467,3);
  t800 = Power(t32,-3);
  t804 = Power(t269,2);
  t806 = Power(t467,4);
  t826 = Power(t32,-2);
  t832 = Power(t467,5);
  t1417 = Power(t467,6);
  t2190 = Cos(var2[2]);
  t2179 = Cos(var2[3]);
  t2188 = Sin(var2[2]);
  t2191 = Sin(var2[3]);
  t2178 = Cos(var2[4]);
  t2189 = -1.*t2179*t2188;
  t2196 = -1.*t2190*t2191;
  t2223 = t2189 + t2196;
  t2351 = t2190*t2179;
  t2361 = -1.*t2188*t2191;
  t2362 = t2351 + t2361;
  t2363 = Sin(var2[4]);
  t2367 = t2178*t2223;
  t2368 = -1.*t2362*t2363;
  t2370 = t2367 + t2368;
  t2931 = -1.*t2190*t2179;
  t3041 = t2188*t2191;
  t3069 = t2931 + t3041;
  t2878 = -1.*t2178;
  t2900 = 1. + t2878;
  t3354 = t3069*t2363;
  t3463 = t2367 + t3354;
  t4978 = Cos(var2[5]);
  t5228 = Sin(var2[5]);
  t4977 = Cos(var2[6]);
  t5208 = -1.*t4978*t2188;
  t5236 = -1.*t2190*t5228;
  t5237 = t5208 + t5236;
  t5511 = t2190*t4978;
  t5512 = -1.*t2188*t5228;
  t5513 = t5511 + t5512;
  t5514 = Sin(var2[6]);
  t5516 = t4977*t5237;
  t5526 = -1.*t2190*t4978;
  t5527 = t2188*t5228;
  t5528 = t5526 + t5527;
  t2930 = -0.4*t2900*t2223;
  t3227 = 0.4*t3069*t2363;
  t3511 = -0.8*t3463;
  t3516 = 0.748*t2223;
  t3553 = 0.4*t2900*t2223;
  t3815 = -0.4*t3069*t2363;
  t3949 = 0.64*t3463;
  t4044 = t3553 + t3815 + t3949;
  t4045 = 3.2*t4044;
  t5522 = 0.748*t5237;
  t5523 = -1.*t4977;
  t5524 = 1. + t5523;
  t5525 = 0.4*t5524*t5237;
  t5529 = -0.4*t5528*t5514;
  t5531 = t5528*t5514;
  t5532 = t5516 + t5531;
  t5533 = 0.64*t5532;
  t5534 = t5525 + t5529 + t5533;
  t5535 = 3.2*t5534;
  t5586 = t2179*t2188;
  t5587 = t2190*t2191;
  t5588 = t5586 + t5587;
  t5591 = t2178*t2362;
  t5934 = t4978*t2188;
  t5935 = t2190*t5228;
  t5937 = t5934 + t5935;
  t5939 = t4977*t5513;
  t5940 = -1.*t5937*t5514;
  t5941 = t5939 + t5940;
  t6118 = 0.4*t5524*t5513;
  t6119 = -0.4*t5237*t5514;
  t6131 = t5237*t5514;
  t6149 = t5939 + t6131;
  t6208 = 0.8*t6149;
  t5612 = -0.748*t2362;
  t5613 = 0.4*t2900*t2362;
  t5614 = -0.4*t2223*t2363;
  t5616 = t2223*t2363;
  t5834 = t5591 + t5616;
  t5836 = 0.64*t5834;
  t5893 = t5613 + t5614 + t5836;
  t5930 = -3.2*t5893;
  t6294 = -0.748*t5513;
  t6295 = 0.64*t6149;
  t6296 = t6118 + t6119 + t6295;
  t6300 = -3.2*t6296;
  t2299 = 0.4*t2178*t2223;
  t2366 = -0.4*t2362*t2363;
  t5510 = -0.4*t4977*t5237;
  t5515 = 0.4*t5513*t5514;
  t5517 = -1.*t5513*t5514;
  t5518 = t5516 + t5517;
  t6880 = 0.8*t5532;
  t6625 = -0.748*t2223;
  t6663 = -3.2*t4044;
  t6891 = -0.748*t5237;
  t6905 = -3.2*t5534;
  p_output1[0]=var3[2] + 7.*t1417*t414*var4[0] - 7.*t1417*t414*var4[4] + 42.*t269*t826*t832*var4[4] + 105.*t800*t804*t806*var4[8] - 42.*t269*t826*t832*var4[8] + 140.*t649*t651*t750*var4[12] - 105.*t800*t804*t806*var4[12] + 105.*t546*t554*t575*var4[16] - 140.*t649*t651*t750*var4[16] + 42.*t399*t400*t467*var4[20] - 105.*t546*t554*t575*var4[20] + 7.*t320*t42*var4[24] - 42.*t399*t400*t467*var4[24] - 7.*t320*t42*var4[28];
  p_output1[1]=(t2930 + t3227 + t3511 + 0.03125*(-2.88*t2188 + t3516 + t4045 + t5522 + t5535))*var3[2] + (t2930 + t3227 + t3511 + 0.03125*(t3516 + t4045))*var3[3] + (t2299 + t2366 + 0.1*(-0.4*t2178*t2223 + 0.4*t2362*t2363 + 0.64*t2370) - 0.8*t2370)*var3[4] + 0.03125*(t5522 + t5535)*var3[5] + 0.1*(t5510 + t5515 + 0.64*t5518)*var3[6] + 7.*t1417*t414*var4[1] - 7.*t1417*t414*var4[5] + 42.*t269*t826*t832*var4[5] + 105.*t800*t804*t806*var4[9] - 42.*t269*t826*t832*var4[9] + 140.*t649*t651*t750*var4[13] - 105.*t800*t804*t806*var4[13] + 105.*t546*t554*t575*var4[17] - 140.*t649*t651*t750*var4[17] + 42.*t399*t400*t467*var4[21] - 105.*t546*t554*t575*var4[21] + 7.*t320*t42*var4[25] - 42.*t399*t400*t467*var4[25] - 7.*t320*t42*var4[29];
  p_output1[2]=(t6118 + t6119 + t6208 + 0.03125*(-2.88*t2190 + t5612 + t5930 + t6294 + t6300))*var3[2] + 0.03125*(t5612 + t5930)*var3[3] + 0.1*(0.4*t2178*t2362 - 0.4*t2363*t5588 - 0.64*(-1.*t2363*t5588 + t5591))*var3[4] + (t6118 + t6119 + t6208 + 0.03125*(t6294 + t6300))*var3[5] + (-0.4*t4977*t5513 + 0.4*t5514*t5937 + 0.1*(0.4*t4977*t5513 - 0.4*t5514*t5937 - 0.64*t5941) + 0.8*t5941)*var3[6] + 7.*t1417*t414*var4[2] - 7.*t1417*t414*var4[6] + 42.*t269*t826*t832*var4[6] + 105.*t800*t804*t806*var4[10] - 42.*t269*t826*t832*var4[10] + 140.*t649*t651*t750*var4[14] - 105.*t800*t804*t806*var4[14] + 105.*t546*t554*t575*var4[18] - 140.*t649*t651*t750*var4[18] + 42.*t399*t400*t467*var4[22] - 105.*t546*t554*t575*var4[22] + 7.*t320*t42*var4[26] - 42.*t399*t400*t467*var4[26] - 7.*t320*t42*var4[30];
  p_output1[3]=(t5525 + t5529 + t6880 + 0.03125*(2.88*t2188 + t6625 + t6663 + t6891 + t6905))*var3[2] + 0.03125*(t6625 + t6663)*var3[3] + 0.1*(t2299 + t2366 - 0.64*t2370)*var3[4] + (t5525 + t5529 + t6880 + 0.03125*(t6891 + t6905))*var3[5] + (t5510 + t5515 + 0.1*(0.4*t4977*t5237 - 0.4*t5513*t5514 - 0.64*t5518) + 0.8*t5518)*var3[6] + 7.*t1417*t414*var4[3] - 7.*t1417*t414*var4[7] + 42.*t269*t826*t832*var4[7] + 105.*t800*t804*t806*var4[11] - 42.*t269*t826*t832*var4[11] + 140.*t649*t651*t750*var4[15] - 105.*t800*t804*t806*var4[15] + 105.*t546*t554*t575*var4[19] - 140.*t649*t651*t750*var4[19] + 42.*t399*t400*t467*var4[23] - 105.*t546*t554*t575*var4[23] + 7.*t320*t42*var4[27] - 42.*t399*t400*t467*var4[27] - 7.*t320*t42*var4[31];
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
    ( !(mrows == 32 && ncols == 1) && 
      !(mrows == 1 && ncols == 32))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "d1y_time_RightStance.hh"

namespace RightStance
{

void d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
