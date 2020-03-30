/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:50:38 GMT-04:00
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
  double t3374;
  double t821;
  double t3115;
  double t5499;
  double t8455;
  double t3213;
  double t5894;
  double t7056;
  double t515;
  double t8611;
  double t9732;
  double t9847;
  double t8413;
  double t10309;
  double t10995;
  double t11011;
  double t11028;
  double t11029;
  double t11031;
  double t11032;
  double t11142;
  double t11149;
  double t14492;
  double t14529;
  double t14530;
  double t9867;
  double t9939;
  double t14533;
  double t14534;
  double t14542;
  double t14622;
  double t14640;
  double t14678;
  double t14769;
  double t14771;
  double t14786;
  double t14787;
  double t14788;
  double t14792;
  double t14800;
  double t14801;
  double t15069;
  double t15359;
  double t15884;
  double t14754;
  double t14755;
  double t14760;
  double t14761;
  double t14763;
  double t14768;
  double t14996;
  double t15048;
  double t15061;
  double t15062;
  double t17552;
  double t17559;
  double t16129;
  double t16480;
  double t17725;
  double t17732;
  double t17752;
  double t17767;
  double t17775;
  double t17713;
  double t17717;
  double t17545;
  double t17562;
  double t17591;
  double t17611;
  double t17612;
  double t17639;
  double t17657;
  double t17658;
  double t17665;
  double t17683;
  double t17696;
  double t17706;
  double t17708;
  double t17709;
  double t17723;
  double t17724;
  double t17892;
  double t17894;
  double t17895;
  double t17870;
  double t17884;
  double t17886;
  double t17813;
  double t17815;
  t3374 = Cos(var1[5]);
  t821 = Cos(var1[6]);
  t3115 = Sin(var1[5]);
  t5499 = Sin(var1[6]);
  t8455 = Cos(var1[2]);
  t3213 = -1.*t821*t3115;
  t5894 = -1.*t3374*t5499;
  t7056 = t3213 + t5894;
  t515 = Sin(var1[2]);
  t8611 = t3374*t821;
  t9732 = -1.*t3115*t5499;
  t9847 = t8611 + t9732;
  t8413 = -1.*t515*t7056;
  t10309 = -1.*t8455*t7056;
  t10995 = -1.*t3374*t821;
  t11011 = t3115*t5499;
  t11028 = t10995 + t11011;
  t11029 = t8455*t11028;
  t11031 = t8413 + t11029;
  t11032 = 0.384*var2[0]*t11031;
  t11142 = -1.*t515*t11028;
  t11149 = t10309 + t11142;
  t14492 = 0.384*var2[1]*t11149;
  t14529 = t11032 + t14492;
  t14530 = var2[6]*t14529;
  t9867 = -1.*t8455*t9847;
  t9939 = t8413 + t9867;
  t14533 = t8455*t7056;
  t14534 = -1.*t515*t9847;
  t14542 = t14533 + t14534;
  t14622 = t821*t3115;
  t14640 = t3374*t5499;
  t14678 = t14622 + t14640;
  t14769 = -1.*t821;
  t14771 = 1. + t14769;
  t14786 = 0.4*t14771;
  t14787 = 0.64*t821;
  t14788 = t14786 + t14787;
  t14792 = -1.*t14788*t3115;
  t14800 = -0.24*t3374*t5499;
  t14801 = t14792 + t14800;
  t15069 = t3374*t14788;
  t15359 = -0.24*t3115*t5499;
  t15884 = t15069 + t15359;
  t14754 = t515*t14678;
  t14755 = t14754 + t11029;
  t14760 = 0.384*var2[0]*t14755;
  t14761 = t8455*t14678;
  t14763 = t14761 + t11142;
  t14768 = 0.384*var2[1]*t14763;
  t14996 = t14788*t3115;
  t15048 = 0.24*t3374*t5499;
  t15061 = t14996 + t15048;
  t15062 = t7056*t15061;
  t17552 = -0.24*t821*t3115;
  t17559 = t17552 + t14800;
  t16129 = 0.24*t3115*t5499;
  t16480 = t15884*t11028;
  t17725 = t14801*t9847;
  t17732 = t15061*t9847;
  t17752 = t7056*t15884;
  t17767 = t14678*t15884;
  t17775 = t17725 + t17732 + t17752 + t17767;
  t17713 = t515*t11028;
  t17717 = t14533 + t17713;
  t17545 = t7056*t14801;
  t17562 = t7056*t17559;
  t17591 = t17559*t14678;
  t17611 = t9847*t15884;
  t17612 = 0.24*t3374*t821;
  t17639 = t17612 + t15359;
  t17657 = t9847*t17639;
  t17658 = -0.24*t3374*t821;
  t17665 = t17658 + t16129;
  t17683 = t9847*t17665;
  t17696 = t17545 + t17562 + t15062 + t17591 + t17611 + t17657 + t17683 + t16480;
  t17706 = 0.384*var2[2]*t17696;
  t17708 = t14760 + t14768 + t17706;
  t17709 = var2[6]*t17708;
  t17723 = 0.384*var2[6]*t17717;
  t17724 = 0.384*var2[6]*t11031;
  t17892 = -1.*t14788*t5499;
  t17894 = 0.24*t821*t5499;
  t17895 = t17892 + t17894;
  t17870 = t17559*t9847;
  t17884 = t14678*t17639;
  t17886 = t17870 + t17732 + t17752 + t17884;
  t17813 = 0.384*var2[1]*t11031;
  t17815 = 0.384*var2[0]*t17717;
  p_output1[0]=(0.384*t9939*var2[0] + 0.384*(t10309 + t515*t9847)*var2[1])*var2[6];
  p_output1[1]=t14530;
  p_output1[2]=t14530;
  p_output1[3]=0.384*t14542*var2[6];
  p_output1[4]=0.384*t9939*var2[6];
  p_output1[5]=0.384*t14542*var2[0] + 0.384*t9939*var2[1];
  p_output1[6]=t14530;
  p_output1[7]=(t14760 + t14768 + 0.384*(t14678*t14801 + t15062 + t16480 + 2.*t14801*t7056 + 2.*t15884*t9847 + (t16129 - 1.*t14788*t3374)*t9847)*var2[2])*var2[6];
  p_output1[8]=t17709;
  p_output1[9]=t17723;
  p_output1[10]=t17724;
  p_output1[11]=0.384*t17775*var2[6];
  p_output1[12]=t17813 + t17815 + 0.384*t17775*var2[2];
  p_output1[13]=t14530;
  p_output1[14]=t17709;
  p_output1[15]=(t14760 + t14768 + 0.384*(t15062 + t16480 + t17591 + t17683 + 2.*t17559*t7056 + 2.*t17639*t9847)*var2[2] + 0.384*(-1.*t14788*t821 + 0.24*Power(t821,2))*var2[5])*var2[6];
  p_output1[16]=t17723;
  p_output1[17]=t17724;
  p_output1[18]=0.384*t17886*var2[6];
  p_output1[19]=0.384*t17895*var2[6];
  p_output1[20]=t17813 + t17815 + 0.384*t17886*var2[2] + 0.384*t17895*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec7_five_link_walker.hh"

namespace RightStance
{

void J_Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
