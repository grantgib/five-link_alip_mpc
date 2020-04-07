/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:03:06 GMT-04:00
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
  double t3108;
  double t1678;
  double t1742;
  double t3095;
  double t3096;
  double t3107;
  double t3110;
  double t3140;
  double t3142;
  double t3145;
  double t3146;
  double t3147;
  double t3148;
  double t3156;
  double t3158;
  double t3159;
  double t3162;
  double t3163;
  double t3166;
  double t3167;
  double t3168;
  double t3181;
  double t3182;
  double t3187;
  double t4105;
  double t4702;
  double t6708;
  double t6709;
  double t3223;
  double t3224;
  double t3225;
  double t3226;
  double t4099;
  double t4100;
  double t4202;
  t3108 = -1.*var4[1];
  t1678 = -1. + var5[0];
  t1742 = -1. + var6[0];
  t3095 = 1/t1742;
  t3096 = -1.*t1678*t3095;
  t3107 = 1. + t3096;
  t3110 = var4[0] + t3108;
  t3140 = Power(t3110,-5);
  t3142 = -1.*var1[0];
  t3145 = t3142 + var1[1];
  t3146 = t1678*t3095*t3145;
  t3147 = t3108 + var1[0] + t3146;
  t3148 = Power(t3147,4);
  t3156 = Power(t3110,-4);
  t3158 = Power(t3147,3);
  t3159 = 1/t3110;
  t3162 = -1.*t3159*t3147;
  t3163 = 1. + t3162;
  t3166 = Power(t3110,-3);
  t3167 = Power(t3147,2);
  t3168 = Power(t3163,2);
  t3181 = Power(t3110,-2);
  t3182 = Power(t3163,3);
  t3187 = Power(t3163,4);
  t4105 = Power(t3147,5);
  t4702 = Power(t3110,-6);
  t6708 = -1.*t3181*t3147;
  t6709 = t3159 + t6708;
  t3223 = Power(t3163,5);
  t3224 = -1.*t3223;
  t3225 = -5.*t3159*t3147*t3187;
  t3226 = -10.*t3181*t3167*t3182;
  t4099 = -10.*t3166*t3158*t3168;
  t4100 = -5.*t3156*t3148*t3163;
  t4202 = -1.*t3140*t4105;
  p_output1[0]=5.*t3107*t3159*t3187*var3[0] + 20.*t3107*t3147*t3181*t3182*var3[4] - 5.*t3107*t3159*t3187*var3[4] + 30.*t3107*t3166*t3167*t3168*var3[8] - 20.*t3107*t3147*t3181*t3182*var3[8] + 20.*t3107*t3156*t3158*t3163*var3[12] - 30.*t3107*t3166*t3167*t3168*var3[12] + 5.*t3107*t3140*t3148*var3[16] - 20.*t3107*t3156*t3158*t3163*var3[16] - 5.*t3107*t3140*t3148*var3[20];
  p_output1[1]=5.*t1678*t3095*t3159*t3187*var3[0] + 20.*t1678*t3095*t3147*t3181*t3182*var3[4] - 5.*t1678*t3095*t3159*t3187*var3[4] + 30.*t1678*t3095*t3166*t3167*t3168*var3[8] - 20.*t1678*t3095*t3147*t3181*t3182*var3[8] + 20.*t1678*t3095*t3156*t3158*t3163*var3[12] - 30.*t1678*t3095*t3166*t3167*t3168*var3[12] + 5.*t1678*t3095*t3140*t3148*var3[16] - 20.*t1678*t3095*t3156*t3158*t3163*var3[16] - 5.*t1678*t3095*t3140*t3148*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t3224;
  p_output1[4]=t3225;
  p_output1[5]=t3226;
  p_output1[6]=t4099;
  p_output1[7]=t4100;
  p_output1[8]=t4202;
  p_output1[9]=-5.*t3147*t3181*t3187*var3[0] - 20.*t3166*t3167*t3182*var3[4] + 5.*t3147*t3181*t3187*var3[4] - 30.*t3156*t3158*t3168*var3[8] + 20.*t3166*t3167*t3182*var3[8] - 20.*t3140*t3148*t3163*var3[12] + 30.*t3156*t3158*t3168*var3[12] + 20.*t3140*t3148*t3163*var3[16] - 5.*t4105*t4702*var3[16] + 5.*t4105*t4702*var3[20];
  p_output1[10]=-5.*t3187*t6709*var3[0] + 5.*t3159*t3187*var3[4] - 5.*t3147*t3181*t3187*var3[4] - 20.*t3147*t3159*t3182*t6709*var3[4] - 20.*t3166*t3167*t3182*var3[8] + 20.*t3147*t3181*t3182*var3[8] - 30.*t3167*t3168*t3181*t6709*var3[8] - 30.*t3156*t3158*t3168*var3[12] + 30.*t3166*t3167*t3168*var3[12] - 20.*t3158*t3163*t3166*t6709*var3[12] - 20.*t3140*t3148*t3163*var3[16] + 20.*t3156*t3158*t3163*var3[16] - 5.*t3148*t3156*t6709*var3[16] + 5.*t3140*t3148*var3[20] - 5.*t4105*t4702*var3[20];
  p_output1[11]=5.*t3107*t3159*t3187*var3[1] + 20.*t3107*t3147*t3181*t3182*var3[5] - 5.*t3107*t3159*t3187*var3[5] + 30.*t3107*t3166*t3167*t3168*var3[9] - 20.*t3107*t3147*t3181*t3182*var3[9] + 20.*t3107*t3156*t3158*t3163*var3[13] - 30.*t3107*t3166*t3167*t3168*var3[13] + 5.*t3107*t3140*t3148*var3[17] - 20.*t3107*t3156*t3158*t3163*var3[17] - 5.*t3107*t3140*t3148*var3[21];
  p_output1[12]=5.*t1678*t3095*t3159*t3187*var3[1] + 20.*t1678*t3095*t3147*t3181*t3182*var3[5] - 5.*t1678*t3095*t3159*t3187*var3[5] + 30.*t1678*t3095*t3166*t3167*t3168*var3[9] - 20.*t1678*t3095*t3147*t3181*t3182*var3[9] + 20.*t1678*t3095*t3156*t3158*t3163*var3[13] - 30.*t1678*t3095*t3166*t3167*t3168*var3[13] + 5.*t1678*t3095*t3140*t3148*var3[17] - 20.*t1678*t3095*t3156*t3158*t3163*var3[17] - 5.*t1678*t3095*t3140*t3148*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t3224;
  p_output1[15]=t3225;
  p_output1[16]=t3226;
  p_output1[17]=t4099;
  p_output1[18]=t4100;
  p_output1[19]=t4202;
  p_output1[20]=-5.*t3147*t3181*t3187*var3[1] - 20.*t3166*t3167*t3182*var3[5] + 5.*t3147*t3181*t3187*var3[5] - 30.*t3156*t3158*t3168*var3[9] + 20.*t3166*t3167*t3182*var3[9] - 20.*t3140*t3148*t3163*var3[13] + 30.*t3156*t3158*t3168*var3[13] + 20.*t3140*t3148*t3163*var3[17] - 5.*t4105*t4702*var3[17] + 5.*t4105*t4702*var3[21];
  p_output1[21]=-5.*t3187*t6709*var3[1] + 5.*t3159*t3187*var3[5] - 5.*t3147*t3181*t3187*var3[5] - 20.*t3147*t3159*t3182*t6709*var3[5] - 20.*t3166*t3167*t3182*var3[9] + 20.*t3147*t3181*t3182*var3[9] - 30.*t3167*t3168*t3181*t6709*var3[9] - 30.*t3156*t3158*t3168*var3[13] + 30.*t3166*t3167*t3168*var3[13] - 20.*t3158*t3163*t3166*t6709*var3[13] - 20.*t3140*t3148*t3163*var3[17] + 20.*t3156*t3158*t3163*var3[17] - 5.*t3148*t3156*t6709*var3[17] + 5.*t3140*t3148*var3[21] - 5.*t4105*t4702*var3[21];
  p_output1[22]=5.*t3107*t3159*t3187*var3[2] + 20.*t3107*t3147*t3181*t3182*var3[6] - 5.*t3107*t3159*t3187*var3[6] + 30.*t3107*t3166*t3167*t3168*var3[10] - 20.*t3107*t3147*t3181*t3182*var3[10] + 20.*t3107*t3156*t3158*t3163*var3[14] - 30.*t3107*t3166*t3167*t3168*var3[14] + 5.*t3107*t3140*t3148*var3[18] - 20.*t3107*t3156*t3158*t3163*var3[18] - 5.*t3107*t3140*t3148*var3[22];
  p_output1[23]=5.*t1678*t3095*t3159*t3187*var3[2] + 20.*t1678*t3095*t3147*t3181*t3182*var3[6] - 5.*t1678*t3095*t3159*t3187*var3[6] + 30.*t1678*t3095*t3166*t3167*t3168*var3[10] - 20.*t1678*t3095*t3147*t3181*t3182*var3[10] + 20.*t1678*t3095*t3156*t3158*t3163*var3[14] - 30.*t1678*t3095*t3166*t3167*t3168*var3[14] + 5.*t1678*t3095*t3140*t3148*var3[18] - 20.*t1678*t3095*t3156*t3158*t3163*var3[18] - 5.*t1678*t3095*t3140*t3148*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t3224;
  p_output1[26]=t3225;
  p_output1[27]=t3226;
  p_output1[28]=t4099;
  p_output1[29]=t4100;
  p_output1[30]=t4202;
  p_output1[31]=-5.*t3147*t3181*t3187*var3[2] - 20.*t3166*t3167*t3182*var3[6] + 5.*t3147*t3181*t3187*var3[6] - 30.*t3156*t3158*t3168*var3[10] + 20.*t3166*t3167*t3182*var3[10] - 20.*t3140*t3148*t3163*var3[14] + 30.*t3156*t3158*t3168*var3[14] + 20.*t3140*t3148*t3163*var3[18] - 5.*t4105*t4702*var3[18] + 5.*t4105*t4702*var3[22];
  p_output1[32]=-5.*t3187*t6709*var3[2] + 5.*t3159*t3187*var3[6] - 5.*t3147*t3181*t3187*var3[6] - 20.*t3147*t3159*t3182*t6709*var3[6] - 20.*t3166*t3167*t3182*var3[10] + 20.*t3147*t3181*t3182*var3[10] - 30.*t3167*t3168*t3181*t6709*var3[10] - 30.*t3156*t3158*t3168*var3[14] + 30.*t3166*t3167*t3168*var3[14] - 20.*t3158*t3163*t3166*t6709*var3[14] - 20.*t3140*t3148*t3163*var3[18] + 20.*t3156*t3158*t3163*var3[18] - 5.*t3148*t3156*t6709*var3[18] + 5.*t3140*t3148*var3[22] - 5.*t4105*t4702*var3[22];
  p_output1[33]=5.*t3107*t3159*t3187*var3[3] + 20.*t3107*t3147*t3181*t3182*var3[7] - 5.*t3107*t3159*t3187*var3[7] + 30.*t3107*t3166*t3167*t3168*var3[11] - 20.*t3107*t3147*t3181*t3182*var3[11] + 20.*t3107*t3156*t3158*t3163*var3[15] - 30.*t3107*t3166*t3167*t3168*var3[15] + 5.*t3107*t3140*t3148*var3[19] - 20.*t3107*t3156*t3158*t3163*var3[19] - 5.*t3107*t3140*t3148*var3[23];
  p_output1[34]=5.*t1678*t3095*t3159*t3187*var3[3] + 20.*t1678*t3095*t3147*t3181*t3182*var3[7] - 5.*t1678*t3095*t3159*t3187*var3[7] + 30.*t1678*t3095*t3166*t3167*t3168*var3[11] - 20.*t1678*t3095*t3147*t3181*t3182*var3[11] + 20.*t1678*t3095*t3156*t3158*t3163*var3[15] - 30.*t1678*t3095*t3166*t3167*t3168*var3[15] + 5.*t1678*t3095*t3140*t3148*var3[19] - 20.*t1678*t3095*t3156*t3158*t3163*var3[19] - 5.*t1678*t3095*t3140*t3148*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t3224;
  p_output1[37]=t3225;
  p_output1[38]=t3226;
  p_output1[39]=t4099;
  p_output1[40]=t4100;
  p_output1[41]=t4202;
  p_output1[42]=-5.*t3147*t3181*t3187*var3[3] - 20.*t3166*t3167*t3182*var3[7] + 5.*t3147*t3181*t3187*var3[7] - 30.*t3156*t3158*t3168*var3[11] + 20.*t3166*t3167*t3182*var3[11] - 20.*t3140*t3148*t3163*var3[15] + 30.*t3156*t3158*t3168*var3[15] + 20.*t3140*t3148*t3163*var3[19] - 5.*t4105*t4702*var3[19] + 5.*t4105*t4702*var3[23];
  p_output1[43]=-5.*t3187*t6709*var3[3] + 5.*t3159*t3187*var3[7] - 5.*t3147*t3181*t3187*var3[7] - 20.*t3147*t3159*t3182*t6709*var3[7] - 20.*t3166*t3167*t3182*var3[11] + 20.*t3147*t3181*t3182*var3[11] - 30.*t3167*t3168*t3181*t6709*var3[11] - 30.*t3156*t3158*t3168*var3[15] + 30.*t3166*t3167*t3168*var3[15] - 20.*t3158*t3163*t3166*t6709*var3[15] - 20.*t3140*t3148*t3163*var3[19] + 20.*t3156*t3158*t3163*var3[19] - 5.*t3148*t3156*t6709*var3[19] + 5.*t3140*t3148*var3[23] - 5.*t4105*t4702*var3[23];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
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
