/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:21 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t323;
  double t188;
  double t238;
  double t396;
  double t19;
  double t251;
  double t454;
  double t527;
  double t549;
  double t580;
  double t641;
  double t642;
  double t119;
  double t141;
  double t647;
  double t670;
  double t671;
  double t706;
  double t726;
  double t734;
  double t738;
  double t742;
  double t764;
  double t791;
  double t794;
  double t795;
  double t802;
  double t540;
  double t643;
  double t675;
  double t681;
  double t683;
  double t686;
  double t690;
  double t691;
  double t696;
  double t860;
  double t861;
  double t862;
  double t864;
  double t866;
  double t743;
  double t767;
  double t789;
  double t790;
  double t805;
  double t813;
  double t824;
  double t837;
  double t838;
  double t840;
  double t843;
  double t898;
  double t900;
  double t901;
  double t921;
  double t922;
  double t923;
  double t925;
  double t926;
  double t936;
  double t950;
  double t955;
  double t957;
  double t959;
  double t969;
  double t970;
  double t971;
  double t972;
  double t990;
  double t991;
  double t992;
  double t932;
  double t974;
  double t979;
  double t980;
  double t981;
  double t1033;
  double t1034;
  double t1044;
  double t1091;
  double t1106;
  double t1166;
  double t1169;
  double t859;
  double t863;
  double t1164;
  double t1174;
  double t1175;
  double t893;
  double t902;
  double t903;
  double t904;
  t323 = Cos(var1[2]);
  t188 = Cos(var1[3]);
  t238 = Sin(var1[2]);
  t396 = Sin(var1[3]);
  t19 = Cos(var1[4]);
  t251 = -1.*t188*t238;
  t454 = -1.*t323*t396;
  t527 = t251 + t454;
  t549 = -1.*t323*t188;
  t580 = t238*t396;
  t641 = t549 + t580;
  t642 = Sin(var1[4]);
  t119 = -1.*t19;
  t141 = 1. + t119;
  t647 = t19*t527;
  t670 = t641*t642;
  t671 = t647 + t670;
  t706 = Cos(var1[5]);
  t726 = -1.*t706*t238;
  t734 = Sin(var1[5]);
  t738 = -1.*t323*t734;
  t742 = t726 + t738;
  t764 = Cos(var1[6]);
  t791 = -1.*t323*t706;
  t794 = t238*t734;
  t795 = t791 + t794;
  t802 = Sin(var1[6]);
  t540 = -0.4*t141*t527;
  t643 = 0.4*t641*t642;
  t675 = -0.8*t671;
  t681 = 0.748*t527;
  t683 = 0.4*t141*t527;
  t686 = -0.4*t641*t642;
  t690 = 0.64*t671;
  t691 = t683 + t686 + t690;
  t696 = 3.2*t691;
  t860 = t323*t188;
  t861 = -1.*t238*t396;
  t862 = t860 + t861;
  t864 = -1.*t862*t642;
  t866 = t647 + t864;
  t743 = 0.748*t742;
  t767 = -1.*t764;
  t789 = 1. + t767;
  t790 = 0.4*t789*t742;
  t805 = -0.4*t795*t802;
  t813 = t764*t742;
  t824 = t795*t802;
  t837 = t813 + t824;
  t838 = 0.64*t837;
  t840 = t790 + t805 + t838;
  t843 = 3.2*t840;
  t898 = t323*t706;
  t900 = -1.*t238*t734;
  t901 = t898 + t900;
  t921 = 0.4*t789*t901;
  t922 = -0.4*t742*t802;
  t923 = t764*t901;
  t925 = t742*t802;
  t926 = t923 + t925;
  t936 = -0.748*t862;
  t950 = 0.4*t141*t862;
  t955 = -0.4*t527*t642;
  t957 = t19*t862;
  t959 = t527*t642;
  t969 = t957 + t959;
  t970 = 0.64*t969;
  t971 = t950 + t955 + t970;
  t972 = -3.2*t971;
  t990 = t188*t238;
  t991 = t323*t396;
  t992 = t990 + t991;
  t932 = 0.8*t926;
  t974 = -0.748*t901;
  t979 = 0.64*t926;
  t980 = t921 + t922 + t979;
  t981 = -3.2*t980;
  t1033 = t706*t238;
  t1034 = t323*t734;
  t1044 = t1033 + t1034;
  t1091 = -1.*t1044*t802;
  t1106 = t923 + t1091;
  t1166 = -0.748*t527;
  t1169 = -3.2*t691;
  t859 = 0.4*t19*t527;
  t863 = -0.4*t862*t642;
  t1164 = 0.8*t837;
  t1174 = -0.748*t742;
  t1175 = -3.2*t840;
  t893 = -0.4*t764*t742;
  t902 = 0.4*t901*t802;
  t903 = -1.*t901*t802;
  t904 = t813 + t903;
  p_output1[0]=1.;
  p_output1[1]=t540 + t643 + t675 + 0.03125*(-2.88*t238 + t681 + t696 + t743 + t843);
  p_output1[2]=t540 + t643 + t675 + 0.03125*(t681 + t696);
  p_output1[3]=t859 + t863 + 0.1*(-0.4*t19*t527 + 0.4*t642*t862 + 0.64*t866) - 0.8*t866;
  p_output1[4]=0.03125*(t743 + t843);
  p_output1[5]=0.1*(t893 + t902 + 0.64*t904);
  p_output1[6]=t921 + t922 + t932 + 0.03125*(-2.88*t323 + t936 + t972 + t974 + t981);
  p_output1[7]=0.03125*(t936 + t972);
  p_output1[8]=0.1*(0.4*t19*t862 - 0.4*t642*t992 - 0.64*(t957 - 1.*t642*t992));
  p_output1[9]=t921 + t922 + t932 + 0.03125*(t974 + t981);
  p_output1[10]=0.8*t1106 + 0.4*t1044*t802 - 0.4*t764*t901 + 0.1*(-0.64*t1106 - 0.4*t1044*t802 + 0.4*t764*t901);
  p_output1[11]=t1164 + 0.03125*(t1166 + t1169 + t1174 + t1175 + 2.88*t238) + t790 + t805;
  p_output1[12]=0.03125*(t1166 + t1169);
  p_output1[13]=0.1*(t859 + t863 - 0.64*t866);
  p_output1[14]=t1164 + 0.03125*(t1174 + t1175) + t790 + t805;
  p_output1[15]=t893 + t902 + 0.1*(0.4*t742*t764 - 0.4*t802*t901 - 0.64*t904) + 0.8*t904;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 16, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_output_boundary_RightStance.hh"

namespace RightStance
{

void J_output_boundary_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
