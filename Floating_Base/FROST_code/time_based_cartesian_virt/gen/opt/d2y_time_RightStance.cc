/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:08:04 GMT-05:00
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
  double t25;
  double t92;
  double t173;
  double t184;
  double t276;
  double t283;
  double t343;
  double t413;
  double t439;
  double t530;
  double t531;
  double t753;
  double t763;
  double t800;
  double t817;
  double t834;
  double t1130;
  double t1150;
  double t1539;
  double t1566;
  double t2029;
  double t2625;
  double t2835;
  double t3001;
  double t4607;
  double t4838;
  double t4603;
  double t4849;
  double t4514;
  double t4812;
  double t4863;
  double t4957;
  double t5007;
  double t5044;
  double t5052;
  double t5060;
  double t4530;
  double t4602;
  double t4998;
  double t5097;
  double t5107;
  double t5124;
  double t5175;
  double t5201;
  double t5215;
  double t5394;
  double t5408;
  double t5423;
  double t5378;
  double t5424;
  double t5445;
  double t5446;
  double t5448;
  double t5453;
  double t5710;
  double t5716;
  double t5718;
  double t5722;
  double t5723;
  double t5730;
  double t5734;
  double t5790;
  double t5794;
  double t5795;
  double t5789;
  double t5797;
  double t5807;
  double t5811;
  double t5812;
  double t5814;
  double t5788;
  double t5842;
  double t5875;
  double t5974;
  double t6586;
  double t6618;
  double t6707;
  double t6708;
  double t6717;
  double t6722;
  double t6731;
  double t6876;
  double t6884;
  double t6886;
  double t6887;
  double t6889;
  double t6892;
  double t6867;
  double t6894;
  double t6897;
  double t6898;
  t25 = -1.*var6[1];
  t92 = var6[0] + t25;
  t173 = Power(t92,-5);
  t184 = -1. + var7[0];
  t276 = -1. + var8[0];
  t283 = 1/t276;
  t343 = -1.*var1[0];
  t413 = t343 + var1[1];
  t439 = t184*t283*t413;
  t530 = t25 + var1[0] + t439;
  t531 = Power(t530,3);
  t753 = Power(t92,-4);
  t763 = Power(t530,2);
  t800 = 1/t92;
  t817 = -1.*t800*t530;
  t834 = 1. + t817;
  t1130 = Power(t92,-3);
  t1150 = Power(t834,2);
  t1539 = Power(t92,-2);
  t1566 = Power(t834,3);
  t2029 = Power(t530,4);
  t2625 = Power(t834,4);
  t2835 = Power(t530,5);
  t3001 = Power(t834,5);
  t4607 = Cos(var2[5]);
  t4838 = Sin(var2[2]);
  t4603 = Cos(var2[2]);
  t4849 = Sin(var2[5]);
  t4514 = Cos(var2[6]);
  t4812 = t4603*t4607;
  t4863 = -1.*t4838*t4849;
  t4957 = t4812 + t4863;
  t5007 = -1.*t4607*t4838;
  t5044 = -1.*t4603*t4849;
  t5052 = t5007 + t5044;
  t5060 = Sin(var2[6]);
  t4530 = -1.*t4514;
  t4602 = 1. + t4530;
  t4998 = 0.4*t4602*t4957;
  t5097 = -0.4*t5052*t5060;
  t5107 = t4514*t4957;
  t5124 = t5052*t5060;
  t5175 = t5107 + t5124;
  t5201 = 0.8*t5175;
  t5215 = t4998 + t5097 + t5201;
  t5394 = t4607*t4838;
  t5408 = t4603*t4849;
  t5423 = t5394 + t5408;
  t5378 = -0.4*t4514*t4957;
  t5424 = 0.4*t5423*t5060;
  t5445 = -1.*t5423*t5060;
  t5446 = t5107 + t5445;
  t5448 = 0.8*t5446;
  t5453 = t5378 + t5424 + t5448;
  t5710 = -0.4*t4514*t5052;
  t5716 = 0.4*t4957*t5060;
  t5718 = t4514*t5052;
  t5722 = -1.*t4957*t5060;
  t5723 = t5718 + t5722;
  t5730 = 0.8*t5723;
  t5734 = t5710 + t5716 + t5730;
  t5790 = -1.*t4603*t4607;
  t5794 = t4838*t4849;
  t5795 = t5790 + t5794;
  t5789 = 0.4*t4602*t5052;
  t5797 = -0.4*t5795*t5060;
  t5807 = t5795*t5060;
  t5811 = t5718 + t5807;
  t5812 = 0.8*t5811;
  t5814 = t5789 + t5797 + t5812;
  t5788 = var3[6]*t5734;
  t5842 = var3[2]*t5814;
  t5875 = var3[5]*t5814;
  t5974 = t5788 + t5842 + t5875;
  t6586 = 0.4*t5052*t5060;
  t6618 = -1.*t5052*t5060;
  t6707 = -0.4*t4514*t5795;
  t6708 = t4514*t5795;
  t6717 = t6708 + t6618;
  t6722 = 0.8*t6717;
  t6731 = t6707 + t6586 + t6722;
  t6876 = 0.4*t4602*t5795;
  t6884 = -0.4*t5423*t5060;
  t6886 = t5423*t5060;
  t6887 = t6708 + t6886;
  t6889 = 0.8*t6887;
  t6892 = t6876 + t6884 + t6889;
  t6867 = var3[6]*t6731;
  t6894 = var3[2]*t6892;
  t6897 = var3[5]*t6892;
  t6898 = t6867 + t6894 + t6897;
  p_output1[0]=var4[2] - 20.*t1539*t1566*var5[0] + 40.*t1539*t1566*var5[4] - 60.*t1130*t1150*t530*var5[4] - 20.*t1539*t1566*var5[8] + 120.*t1130*t1150*t530*var5[8] - 60.*t753*t763*t834*var5[8] - 60.*t1130*t1150*t530*var5[12] - 20.*t173*t531*var5[12] + 120.*t753*t763*t834*var5[12] + 40.*t173*t531*var5[16] - 60.*t753*t763*t834*var5[16] - 20.*t173*t531*var5[20] + (var2[2] - 1.*t3001*var5[0] - 5.*t2625*t530*t800*var5[4] - 10.*t1539*t1566*t763*var5[8] - 10.*t1130*t1150*t531*var5[12] - 5.*t2029*t753*t834*var5[16] - 1.*t173*t2835*var5[20])*var9[0] + (var3[2] + 5.*t2625*t800*var5[0] + 20.*t1539*t1566*t530*var5[4] - 5.*t2625*t800*var5[4] - 20.*t1539*t1566*t530*var5[8] + 30.*t1130*t1150*t763*var5[8] - 30.*t1130*t1150*t763*var5[12] + 20.*t531*t753*t834*var5[12] + 5.*t173*t2029*var5[16] - 20.*t531*t753*t834*var5[16] - 5.*t173*t2029*var5[20])*var9[1];
  p_output1[1]=var4[1] - 20.*t1539*t1566*var5[1] + 40.*t1539*t1566*var5[5] - 60.*t1130*t1150*t530*var5[5] - 20.*t1539*t1566*var5[9] + 120.*t1130*t1150*t530*var5[9] - 60.*t753*t763*t834*var5[9] - 60.*t1130*t1150*t530*var5[13] - 20.*t173*t531*var5[13] + 120.*t753*t763*t834*var5[13] + 40.*t173*t531*var5[17] - 60.*t753*t763*t834*var5[17] - 20.*t173*t531*var5[21] + (var2[1] - 1.*t3001*var5[1] - 5.*t2625*t530*t800*var5[5] - 10.*t1539*t1566*t763*var5[9] - 10.*t1130*t1150*t531*var5[13] - 5.*t2029*t753*t834*var5[17] - 1.*t173*t2835*var5[21])*var9[0] + (var3[1] + 5.*t2625*t800*var5[1] + 20.*t1539*t1566*t530*var5[5] - 5.*t2625*t800*var5[5] - 20.*t1539*t1566*t530*var5[9] + 30.*t1130*t1150*t763*var5[9] - 30.*t1130*t1150*t763*var5[13] + 20.*t531*t753*t834*var5[13] + 5.*t173*t2029*var5[17] - 20.*t531*t753*t834*var5[17] - 5.*t173*t2029*var5[21])*var9[1];
  p_output1[2]=t5974*var3[2] + t5974*var3[5] + var3[6]*(t5734*var3[2] + t5734*var3[5] + (0.4*t4514*t5423 + t5716 + 0.8*(-1.*t4514*t5423 + t5722))*var3[6]) + var4[0] + t5215*var4[2] + t5215*var4[5] + t5453*var4[6] - 20.*t1539*t1566*var5[2] + 40.*t1539*t1566*var5[6] - 60.*t1130*t1150*t530*var5[6] - 20.*t1539*t1566*var5[10] + 120.*t1130*t1150*t530*var5[10] - 60.*t753*t763*t834*var5[10] - 60.*t1130*t1150*t530*var5[14] - 20.*t173*t531*var5[14] + 120.*t753*t763*t834*var5[14] + 40.*t173*t531*var5[18] - 60.*t753*t763*t834*var5[18] - 20.*t173*t531*var5[22] + (-0.4*t4957*t5060 + 0.4*t4602*t5423 + 0.8*(t4957*t5060 + t4514*t5423) + var2[0] - 1.*t3001*var5[2] - 5.*t2625*t530*t800*var5[6] - 10.*t1539*t1566*t763*var5[10] - 10.*t1130*t1150*t531*var5[14] - 5.*t2029*t753*t834*var5[18] - 1.*t173*t2835*var5[22])*var9[0] + (var3[0] + t5215*var3[2] + t5215*var3[5] + t5453*var3[6] + 5.*t2625*t800*var5[2] + 20.*t1539*t1566*t530*var5[6] - 5.*t2625*t800*var5[6] - 20.*t1539*t1566*t530*var5[10] + 30.*t1130*t1150*t763*var5[10] - 30.*t1130*t1150*t763*var5[14] + 20.*t531*t753*t834*var5[14] + 5.*t173*t2029*var5[18] - 20.*t531*t753*t834*var5[18] - 5.*t173*t2029*var5[22])*var9[1];
  p_output1[3]=t6898*var3[2] + t6898*var3[5] + var3[6]*(t6731*var3[2] + t6731*var3[5] + (0.4*t4514*t4957 + t6586 + 0.8*(-1.*t4514*t4957 + t6618))*var3[6]) + var4[1] + t5814*var4[2] + t5814*var4[5] + t5734*var4[6] - 20.*t1539*t1566*var5[3] + 40.*t1539*t1566*var5[7] - 60.*t1130*t1150*t530*var5[7] - 20.*t1539*t1566*var5[11] + 120.*t1130*t1150*t530*var5[11] - 60.*t753*t763*t834*var5[11] - 60.*t1130*t1150*t530*var5[15] - 20.*t173*t531*var5[15] + 120.*t753*t763*t834*var5[15] + 40.*t173*t531*var5[19] - 60.*t753*t763*t834*var5[19] - 20.*t173*t531*var5[23] + (t4998 + t5097 + t5201 + var2[1] - 1.*t3001*var5[3] - 5.*t2625*t530*t800*var5[7] - 10.*t1539*t1566*t763*var5[11] - 10.*t1130*t1150*t531*var5[15] - 5.*t2029*t753*t834*var5[19] - 1.*t173*t2835*var5[23])*var9[0] + (t5788 + t5842 + t5875 + var3[1] + 5.*t2625*t800*var5[3] + 20.*t1539*t1566*t530*var5[7] - 5.*t2625*t800*var5[7] - 20.*t1539*t1566*t530*var5[11] + 30.*t1130*t1150*t763*var5[11] - 30.*t1130*t1150*t763*var5[15] + 20.*t531*t753*t834*var5[15] + 5.*t173*t2029*var5[19] - 20.*t531*t753*t834*var5[19] - 5.*t173*t2029*var5[23])*var9[1];
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
