/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:39 GMT-04:00
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
  double t15741;
  double t10541;
  double t11991;
  double t15715;
  double t15735;
  double t15736;
  double t15742;
  double t15745;
  double t15746;
  double t15748;
  double t15749;
  double t15750;
  double t15751;
  double t15764;
  double t15765;
  double t15766;
  double t15767;
  double t15768;
  double t15772;
  double t15773;
  double t15779;
  double t15780;
  double t15798;
  double t15809;
  double t15814;
  double t15834;
  double t15835;
  double t15799;
  double t15800;
  double t15801;
  double t15802;
  double t15803;
  double t15804;
  double t15805;
  double t15806;
  double t15807;
  double t15808;
  double t15810;
  double t15811;
  double t15812;
  double t15813;
  t15741 = -1.*var5[1];
  t10541 = -1. + var6[0];
  t11991 = -1. + var7[0];
  t15715 = 1/t11991;
  t15735 = -1.*t10541*t15715;
  t15736 = 1. + t15735;
  t15742 = var5[0] + t15741;
  t15745 = Power(t15742,-5);
  t15746 = -1.*var1[0];
  t15748 = t15746 + var1[1];
  t15749 = t10541*t15715*t15748;
  t15750 = t15741 + var1[0] + t15749;
  t15751 = Power(t15750,3);
  t15764 = Power(t15742,-4);
  t15765 = Power(t15750,2);
  t15766 = 1/t15742;
  t15767 = -1.*t15766*t15750;
  t15768 = 1. + t15767;
  t15772 = Power(t15742,-3);
  t15773 = Power(t15768,2);
  t15779 = Power(t15742,-2);
  t15780 = Power(t15768,3);
  t15798 = Power(t15768,4);
  t15809 = Power(t15750,4);
  t15814 = Power(t15742,-6);
  t15834 = -1.*t15779*t15750;
  t15835 = t15766 + t15834;
  t15799 = 5.*t15766*t15798;
  t15800 = 20.*t15779*t15750*t15780;
  t15801 = -5.*t15766*t15798;
  t15802 = t15800 + t15801;
  t15803 = 30.*t15772*t15765*t15773;
  t15804 = -20.*t15779*t15750*t15780;
  t15805 = t15803 + t15804;
  t15806 = 20.*t15764*t15751*t15768;
  t15807 = -30.*t15772*t15765*t15773;
  t15808 = t15806 + t15807;
  t15810 = 5.*t15745*t15809;
  t15811 = -20.*t15764*t15751*t15768;
  t15812 = t15810 + t15811;
  t15813 = -5.*t15745*t15809;
  p_output1[0]=-20.*t15736*t15779*t15780*var4[0] - 60.*t15736*t15750*t15772*t15773*var4[4] + 40.*t15736*t15779*t15780*var4[4] - 60.*t15736*t15764*t15765*t15768*var4[8] + 120.*t15736*t15750*t15772*t15773*var4[8] - 20.*t15736*t15779*t15780*var4[8] - 20.*t15736*t15745*t15751*var4[12] + 120.*t15736*t15764*t15765*t15768*var4[12] - 60.*t15736*t15750*t15772*t15773*var4[12] + 40.*t15736*t15745*t15751*var4[16] - 60.*t15736*t15764*t15765*t15768*var4[16] - 20.*t15736*t15745*t15751*var4[20];
  p_output1[1]=-20.*t10541*t15715*t15779*t15780*var4[0] - 60.*t10541*t15715*t15750*t15772*t15773*var4[4] + 40.*t10541*t15715*t15779*t15780*var4[4] - 60.*t10541*t15715*t15764*t15765*t15768*var4[8] + 120.*t10541*t15715*t15750*t15772*t15773*var4[8] - 20.*t10541*t15715*t15779*t15780*var4[8] - 20.*t10541*t15715*t15745*t15751*var4[12] + 120.*t10541*t15715*t15764*t15765*t15768*var4[12] - 60.*t10541*t15715*t15750*t15772*t15773*var4[12] + 40.*t10541*t15715*t15745*t15751*var4[16] - 60.*t10541*t15715*t15764*t15765*t15768*var4[16] - 20.*t10541*t15715*t15745*t15751*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t15799;
  p_output1[4]=t15802;
  p_output1[5]=t15805;
  p_output1[6]=t15808;
  p_output1[7]=t15812;
  p_output1[8]=t15813;
  p_output1[9]=20.*t15750*t15772*t15780*var4[0] - 5.*t15779*t15798*var4[0] + 60.*t15764*t15765*t15773*var4[4] - 60.*t15750*t15772*t15780*var4[4] + 5.*t15779*t15798*var4[4] + 60.*t15745*t15751*t15768*var4[8] - 150.*t15764*t15765*t15773*var4[8] + 40.*t15750*t15772*t15780*var4[8] - 140.*t15745*t15751*t15768*var4[12] + 90.*t15764*t15765*t15773*var4[12] + 20.*t15809*t15814*var4[12] + 80.*t15745*t15751*t15768*var4[16] - 45.*t15809*t15814*var4[16] + 25.*t15809*t15814*var4[20];
  p_output1[10]=5.*t15779*t15798*var4[0] + 20.*t15766*t15780*t15835*var4[0] + 40.*t15750*t15772*t15780*var4[4] - 20.*t15779*t15780*var4[4] - 5.*t15779*t15798*var4[4] + 60.*t15750*t15773*t15779*t15835*var4[4] - 20.*t15766*t15780*t15835*var4[4] + 90.*t15764*t15765*t15773*var4[8] - 60.*t15750*t15772*t15773*var4[8] - 40.*t15750*t15772*t15780*var4[8] + 20.*t15779*t15780*var4[8] + 60.*t15765*t15768*t15772*t15835*var4[8] - 60.*t15750*t15773*t15779*t15835*var4[8] + 80.*t15745*t15751*t15768*var4[12] - 60.*t15764*t15765*t15768*var4[12] - 90.*t15764*t15765*t15773*var4[12] + 60.*t15750*t15772*t15773*var4[12] + 20.*t15751*t15764*t15835*var4[12] - 60.*t15765*t15768*t15772*t15835*var4[12] - 20.*t15745*t15751*var4[16] - 80.*t15745*t15751*t15768*var4[16] + 60.*t15764*t15765*t15768*var4[16] + 25.*t15809*t15814*var4[16] - 20.*t15751*t15764*t15835*var4[16] + 20.*t15745*t15751*var4[20] - 25.*t15809*t15814*var4[20];
  p_output1[11]=-20.*t15736*t15779*t15780*var4[1] - 60.*t15736*t15750*t15772*t15773*var4[5] + 40.*t15736*t15779*t15780*var4[5] - 60.*t15736*t15764*t15765*t15768*var4[9] + 120.*t15736*t15750*t15772*t15773*var4[9] - 20.*t15736*t15779*t15780*var4[9] - 20.*t15736*t15745*t15751*var4[13] + 120.*t15736*t15764*t15765*t15768*var4[13] - 60.*t15736*t15750*t15772*t15773*var4[13] + 40.*t15736*t15745*t15751*var4[17] - 60.*t15736*t15764*t15765*t15768*var4[17] - 20.*t15736*t15745*t15751*var4[21];
  p_output1[12]=-20.*t10541*t15715*t15779*t15780*var4[1] - 60.*t10541*t15715*t15750*t15772*t15773*var4[5] + 40.*t10541*t15715*t15779*t15780*var4[5] - 60.*t10541*t15715*t15764*t15765*t15768*var4[9] + 120.*t10541*t15715*t15750*t15772*t15773*var4[9] - 20.*t10541*t15715*t15779*t15780*var4[9] - 20.*t10541*t15715*t15745*t15751*var4[13] + 120.*t10541*t15715*t15764*t15765*t15768*var4[13] - 60.*t10541*t15715*t15750*t15772*t15773*var4[13] + 40.*t10541*t15715*t15745*t15751*var4[17] - 60.*t10541*t15715*t15764*t15765*t15768*var4[17] - 20.*t10541*t15715*t15745*t15751*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t15799;
  p_output1[15]=t15802;
  p_output1[16]=t15805;
  p_output1[17]=t15808;
  p_output1[18]=t15812;
  p_output1[19]=t15813;
  p_output1[20]=20.*t15750*t15772*t15780*var4[1] - 5.*t15779*t15798*var4[1] + 60.*t15764*t15765*t15773*var4[5] - 60.*t15750*t15772*t15780*var4[5] + 5.*t15779*t15798*var4[5] + 60.*t15745*t15751*t15768*var4[9] - 150.*t15764*t15765*t15773*var4[9] + 40.*t15750*t15772*t15780*var4[9] - 140.*t15745*t15751*t15768*var4[13] + 90.*t15764*t15765*t15773*var4[13] + 20.*t15809*t15814*var4[13] + 80.*t15745*t15751*t15768*var4[17] - 45.*t15809*t15814*var4[17] + 25.*t15809*t15814*var4[21];
  p_output1[21]=5.*t15779*t15798*var4[1] + 20.*t15766*t15780*t15835*var4[1] + 40.*t15750*t15772*t15780*var4[5] - 20.*t15779*t15780*var4[5] - 5.*t15779*t15798*var4[5] + 60.*t15750*t15773*t15779*t15835*var4[5] - 20.*t15766*t15780*t15835*var4[5] + 90.*t15764*t15765*t15773*var4[9] - 60.*t15750*t15772*t15773*var4[9] - 40.*t15750*t15772*t15780*var4[9] + 20.*t15779*t15780*var4[9] + 60.*t15765*t15768*t15772*t15835*var4[9] - 60.*t15750*t15773*t15779*t15835*var4[9] + 80.*t15745*t15751*t15768*var4[13] - 60.*t15764*t15765*t15768*var4[13] - 90.*t15764*t15765*t15773*var4[13] + 60.*t15750*t15772*t15773*var4[13] + 20.*t15751*t15764*t15835*var4[13] - 60.*t15765*t15768*t15772*t15835*var4[13] - 20.*t15745*t15751*var4[17] - 80.*t15745*t15751*t15768*var4[17] + 60.*t15764*t15765*t15768*var4[17] + 25.*t15809*t15814*var4[17] - 20.*t15751*t15764*t15835*var4[17] + 20.*t15745*t15751*var4[21] - 25.*t15809*t15814*var4[21];
  p_output1[22]=-20.*t15736*t15779*t15780*var4[2] - 60.*t15736*t15750*t15772*t15773*var4[6] + 40.*t15736*t15779*t15780*var4[6] - 60.*t15736*t15764*t15765*t15768*var4[10] + 120.*t15736*t15750*t15772*t15773*var4[10] - 20.*t15736*t15779*t15780*var4[10] - 20.*t15736*t15745*t15751*var4[14] + 120.*t15736*t15764*t15765*t15768*var4[14] - 60.*t15736*t15750*t15772*t15773*var4[14] + 40.*t15736*t15745*t15751*var4[18] - 60.*t15736*t15764*t15765*t15768*var4[18] - 20.*t15736*t15745*t15751*var4[22];
  p_output1[23]=-20.*t10541*t15715*t15779*t15780*var4[2] - 60.*t10541*t15715*t15750*t15772*t15773*var4[6] + 40.*t10541*t15715*t15779*t15780*var4[6] - 60.*t10541*t15715*t15764*t15765*t15768*var4[10] + 120.*t10541*t15715*t15750*t15772*t15773*var4[10] - 20.*t10541*t15715*t15779*t15780*var4[10] - 20.*t10541*t15715*t15745*t15751*var4[14] + 120.*t10541*t15715*t15764*t15765*t15768*var4[14] - 60.*t10541*t15715*t15750*t15772*t15773*var4[14] + 40.*t10541*t15715*t15745*t15751*var4[18] - 60.*t10541*t15715*t15764*t15765*t15768*var4[18] - 20.*t10541*t15715*t15745*t15751*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t15799;
  p_output1[26]=t15802;
  p_output1[27]=t15805;
  p_output1[28]=t15808;
  p_output1[29]=t15812;
  p_output1[30]=t15813;
  p_output1[31]=20.*t15750*t15772*t15780*var4[2] - 5.*t15779*t15798*var4[2] + 60.*t15764*t15765*t15773*var4[6] - 60.*t15750*t15772*t15780*var4[6] + 5.*t15779*t15798*var4[6] + 60.*t15745*t15751*t15768*var4[10] - 150.*t15764*t15765*t15773*var4[10] + 40.*t15750*t15772*t15780*var4[10] - 140.*t15745*t15751*t15768*var4[14] + 90.*t15764*t15765*t15773*var4[14] + 20.*t15809*t15814*var4[14] + 80.*t15745*t15751*t15768*var4[18] - 45.*t15809*t15814*var4[18] + 25.*t15809*t15814*var4[22];
  p_output1[32]=5.*t15779*t15798*var4[2] + 20.*t15766*t15780*t15835*var4[2] + 40.*t15750*t15772*t15780*var4[6] - 20.*t15779*t15780*var4[6] - 5.*t15779*t15798*var4[6] + 60.*t15750*t15773*t15779*t15835*var4[6] - 20.*t15766*t15780*t15835*var4[6] + 90.*t15764*t15765*t15773*var4[10] - 60.*t15750*t15772*t15773*var4[10] - 40.*t15750*t15772*t15780*var4[10] + 20.*t15779*t15780*var4[10] + 60.*t15765*t15768*t15772*t15835*var4[10] - 60.*t15750*t15773*t15779*t15835*var4[10] + 80.*t15745*t15751*t15768*var4[14] - 60.*t15764*t15765*t15768*var4[14] - 90.*t15764*t15765*t15773*var4[14] + 60.*t15750*t15772*t15773*var4[14] + 20.*t15751*t15764*t15835*var4[14] - 60.*t15765*t15768*t15772*t15835*var4[14] - 20.*t15745*t15751*var4[18] - 80.*t15745*t15751*t15768*var4[18] + 60.*t15764*t15765*t15768*var4[18] + 25.*t15809*t15814*var4[18] - 20.*t15751*t15764*t15835*var4[18] + 20.*t15745*t15751*var4[22] - 25.*t15809*t15814*var4[22];
  p_output1[33]=-20.*t15736*t15779*t15780*var4[3] - 60.*t15736*t15750*t15772*t15773*var4[7] + 40.*t15736*t15779*t15780*var4[7] - 60.*t15736*t15764*t15765*t15768*var4[11] + 120.*t15736*t15750*t15772*t15773*var4[11] - 20.*t15736*t15779*t15780*var4[11] - 20.*t15736*t15745*t15751*var4[15] + 120.*t15736*t15764*t15765*t15768*var4[15] - 60.*t15736*t15750*t15772*t15773*var4[15] + 40.*t15736*t15745*t15751*var4[19] - 60.*t15736*t15764*t15765*t15768*var4[19] - 20.*t15736*t15745*t15751*var4[23];
  p_output1[34]=-20.*t10541*t15715*t15779*t15780*var4[3] - 60.*t10541*t15715*t15750*t15772*t15773*var4[7] + 40.*t10541*t15715*t15779*t15780*var4[7] - 60.*t10541*t15715*t15764*t15765*t15768*var4[11] + 120.*t10541*t15715*t15750*t15772*t15773*var4[11] - 20.*t10541*t15715*t15779*t15780*var4[11] - 20.*t10541*t15715*t15745*t15751*var4[15] + 120.*t10541*t15715*t15764*t15765*t15768*var4[15] - 60.*t10541*t15715*t15750*t15772*t15773*var4[15] + 40.*t10541*t15715*t15745*t15751*var4[19] - 60.*t10541*t15715*t15764*t15765*t15768*var4[19] - 20.*t10541*t15715*t15745*t15751*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t15799;
  p_output1[37]=t15802;
  p_output1[38]=t15805;
  p_output1[39]=t15808;
  p_output1[40]=t15812;
  p_output1[41]=t15813;
  p_output1[42]=20.*t15750*t15772*t15780*var4[3] - 5.*t15779*t15798*var4[3] + 60.*t15764*t15765*t15773*var4[7] - 60.*t15750*t15772*t15780*var4[7] + 5.*t15779*t15798*var4[7] + 60.*t15745*t15751*t15768*var4[11] - 150.*t15764*t15765*t15773*var4[11] + 40.*t15750*t15772*t15780*var4[11] - 140.*t15745*t15751*t15768*var4[15] + 90.*t15764*t15765*t15773*var4[15] + 20.*t15809*t15814*var4[15] + 80.*t15745*t15751*t15768*var4[19] - 45.*t15809*t15814*var4[19] + 25.*t15809*t15814*var4[23];
  p_output1[43]=5.*t15779*t15798*var4[3] + 20.*t15766*t15780*t15835*var4[3] + 40.*t15750*t15772*t15780*var4[7] - 20.*t15779*t15780*var4[7] - 5.*t15779*t15798*var4[7] + 60.*t15750*t15773*t15779*t15835*var4[7] - 20.*t15766*t15780*t15835*var4[7] + 90.*t15764*t15765*t15773*var4[11] - 60.*t15750*t15772*t15773*var4[11] - 40.*t15750*t15772*t15780*var4[11] + 20.*t15779*t15780*var4[11] + 60.*t15765*t15768*t15772*t15835*var4[11] - 60.*t15750*t15773*t15779*t15835*var4[11] + 80.*t15745*t15751*t15768*var4[15] - 60.*t15764*t15765*t15768*var4[15] - 90.*t15764*t15765*t15773*var4[15] + 60.*t15750*t15772*t15773*var4[15] + 20.*t15751*t15764*t15835*var4[15] - 60.*t15765*t15768*t15772*t15835*var4[15] - 20.*t15745*t15751*var4[19] - 80.*t15745*t15751*t15768*var4[19] + 60.*t15764*t15765*t15768*var4[19] + 25.*t15809*t15814*var4[19] - 20.*t15751*t15764*t15835*var4[19] + 20.*t15745*t15751*var4[23] - 25.*t15809*t15814*var4[23];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
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
