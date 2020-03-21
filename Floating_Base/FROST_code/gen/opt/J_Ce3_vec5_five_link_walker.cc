/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:03 GMT-04:00
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
  double t4753;
  double t3973;
  double t4472;
  double t4866;
  double t8205;
  double t4686;
  double t5073;
  double t5075;
  double t225;
  double t9543;
  double t9545;
  double t10107;
  double t5088;
  double t10815;
  double t10829;
  double t10835;
  double t10836;
  double t10837;
  double t10838;
  double t10839;
  double t10840;
  double t10841;
  double t10843;
  double t10844;
  double t10845;
  double t10674;
  double t10806;
  double t10846;
  double t10848;
  double t10849;
  double t10859;
  double t10860;
  double t10861;
  double t10872;
  double t10873;
  double t10874;
  double t10875;
  double t10877;
  double t10878;
  double t10881;
  double t10883;
  double t10892;
  double t10893;
  double t10894;
  double t10862;
  double t10863;
  double t10864;
  double t10869;
  double t10870;
  double t10871;
  double t10885;
  double t10887;
  double t10888;
  double t10889;
  double t10906;
  double t10907;
  double t10897;
  double t10900;
  double t10932;
  double t10934;
  double t10942;
  double t10943;
  double t10944;
  double t10923;
  double t10924;
  double t10905;
  double t10908;
  double t10909;
  double t10910;
  double t10911;
  double t10912;
  double t10913;
  double t10915;
  double t10916;
  double t10917;
  double t10919;
  double t10920;
  double t10921;
  double t10922;
  double t10925;
  double t10931;
  double t14813;
  double t14818;
  double t14819;
  double t14809;
  double t14810;
  double t14811;
  double t10947;
  double t10952;
  t4753 = Cos(var1[3]);
  t3973 = Cos(var1[4]);
  t4472 = Sin(var1[3]);
  t4866 = Sin(var1[4]);
  t8205 = Cos(var1[2]);
  t4686 = -1.*t3973*t4472;
  t5073 = -1.*t4753*t4866;
  t5075 = t4686 + t5073;
  t225 = Sin(var1[2]);
  t9543 = t4753*t3973;
  t9545 = -1.*t4472*t4866;
  t10107 = t9543 + t9545;
  t5088 = -1.*t225*t5075;
  t10815 = -1.*t8205*t5075;
  t10829 = -1.*t4753*t3973;
  t10835 = t4472*t4866;
  t10836 = t10829 + t10835;
  t10837 = t8205*t10836;
  t10838 = t5088 + t10837;
  t10839 = 0.384*var2[0]*t10838;
  t10840 = -1.*t225*t10836;
  t10841 = t10815 + t10840;
  t10843 = 0.384*var2[1]*t10841;
  t10844 = t10839 + t10843;
  t10845 = var2[4]*t10844;
  t10674 = -1.*t8205*t10107;
  t10806 = t5088 + t10674;
  t10846 = t8205*t5075;
  t10848 = -1.*t225*t10107;
  t10849 = t10846 + t10848;
  t10859 = t3973*t4472;
  t10860 = t4753*t4866;
  t10861 = t10859 + t10860;
  t10872 = -1.*t3973;
  t10873 = 1. + t10872;
  t10874 = 0.4*t10873;
  t10875 = 0.64*t3973;
  t10877 = t10874 + t10875;
  t10878 = -1.*t10877*t4472;
  t10881 = -0.24*t4753*t4866;
  t10883 = t10878 + t10881;
  t10892 = t4753*t10877;
  t10893 = -0.24*t4472*t4866;
  t10894 = t10892 + t10893;
  t10862 = t225*t10861;
  t10863 = t10862 + t10837;
  t10864 = 0.384*var2[0]*t10863;
  t10869 = t8205*t10861;
  t10870 = t10869 + t10840;
  t10871 = 0.384*var2[1]*t10870;
  t10885 = t10877*t4472;
  t10887 = 0.24*t4753*t4866;
  t10888 = t10885 + t10887;
  t10889 = t5075*t10888;
  t10906 = -0.24*t3973*t4472;
  t10907 = t10906 + t10881;
  t10897 = 0.24*t4472*t4866;
  t10900 = t10894*t10836;
  t10932 = t10883*t10107;
  t10934 = t10888*t10107;
  t10942 = t5075*t10894;
  t10943 = t10861*t10894;
  t10944 = t10932 + t10934 + t10942 + t10943;
  t10923 = t225*t10836;
  t10924 = t10846 + t10923;
  t10905 = t5075*t10883;
  t10908 = t5075*t10907;
  t10909 = t10907*t10861;
  t10910 = t10107*t10894;
  t10911 = 0.24*t4753*t3973;
  t10912 = t10911 + t10893;
  t10913 = t10107*t10912;
  t10915 = -0.24*t4753*t3973;
  t10916 = t10915 + t10897;
  t10917 = t10107*t10916;
  t10919 = t10905 + t10908 + t10889 + t10909 + t10910 + t10913 + t10917 + t10900;
  t10920 = 0.384*var2[2]*t10919;
  t10921 = t10864 + t10871 + t10920;
  t10922 = var2[4]*t10921;
  t10925 = 0.384*var2[4]*t10924;
  t10931 = 0.384*var2[4]*t10838;
  t14813 = -1.*t10877*t4866;
  t14818 = 0.24*t3973*t4866;
  t14819 = t14813 + t14818;
  t14809 = t10907*t10107;
  t14810 = t10861*t10912;
  t14811 = t14809 + t10934 + t10942 + t14810;
  t10947 = 0.384*var2[1]*t10838;
  t10952 = 0.384*var2[0]*t10924;
  p_output1[0]=(0.384*t10806*var2[0] + 0.384*(t10815 + t10107*t225)*var2[1])*var2[4];
  p_output1[1]=t10845;
  p_output1[2]=t10845;
  p_output1[3]=0.384*t10849*var2[4];
  p_output1[4]=0.384*t10806*var2[4];
  p_output1[5]=0.384*t10849*var2[0] + 0.384*t10806*var2[1];
  p_output1[6]=t10845;
  p_output1[7]=(t10864 + t10871 + 0.384*(t10861*t10883 + t10889 + 2.*t10107*t10894 + t10900 + t10107*(t10897 - 1.*t10877*t4753) + 2.*t10883*t5075)*var2[2])*var2[4];
  p_output1[8]=t10922;
  p_output1[9]=t10925;
  p_output1[10]=t10931;
  p_output1[11]=0.384*t10944*var2[4];
  p_output1[12]=t10947 + t10952 + 0.384*t10944*var2[2];
  p_output1[13]=t10845;
  p_output1[14]=t10922;
  p_output1[15]=(t10864 + t10871 + 0.384*(t10889 + t10900 + t10909 + 2.*t10107*t10912 + t10917 + 2.*t10907*t5075)*var2[2] + 0.384*(-1.*t10877*t3973 + 0.24*Power(t3973,2))*var2[3])*var2[4];
  p_output1[16]=t10925;
  p_output1[17]=t10931;
  p_output1[18]=0.384*t14811*var2[4];
  p_output1[19]=0.384*t14819*var2[4];
  p_output1[20]=t10947 + t10952 + 0.384*t14811*var2[2] + 0.384*t14819*var2[3];
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

#include "J_Ce3_vec5_five_link_walker.hh"

namespace RightStance
{

void J_Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
