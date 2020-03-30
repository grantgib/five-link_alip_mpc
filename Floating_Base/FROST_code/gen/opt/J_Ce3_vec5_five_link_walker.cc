/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:50:26 GMT-04:00
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
  double t1128;
  double t228;
  double t289;
  double t1153;
  double t2160;
  double t820;
  double t2010;
  double t2094;
  double t133;
  double t2209;
  double t2210;
  double t2214;
  double t2156;
  double t2301;
  double t2967;
  double t2988;
  double t3054;
  double t3063;
  double t3272;
  double t4904;
  double t4913;
  double t4914;
  double t4916;
  double t4920;
  double t4928;
  double t2219;
  double t2228;
  double t4941;
  double t4953;
  double t4954;
  double t5076;
  double t5077;
  double t5080;
  double t5501;
  double t5669;
  double t5784;
  double t5879;
  double t5882;
  double t5932;
  double t5965;
  double t6482;
  double t6890;
  double t6906;
  double t6955;
  double t5102;
  double t5105;
  double t5106;
  double t5109;
  double t5388;
  double t5410;
  double t6719;
  double t6798;
  double t6811;
  double t6823;
  double t7079;
  double t7089;
  double t6987;
  double t7009;
  double t9440;
  double t9613;
  double t9675;
  double t9823;
  double t9907;
  double t8761;
  double t8824;
  double t7078;
  double t7090;
  double t7103;
  double t7417;
  double t7566;
  double t7600;
  double t7744;
  double t7777;
  double t7783;
  double t7932;
  double t7942;
  double t7990;
  double t8302;
  double t8716;
  double t8901;
  double t9330;
  double t10909;
  double t10958;
  double t10972;
  double t10868;
  double t10870;
  double t10880;
  double t10159;
  double t10669;
  t1128 = Cos(var1[3]);
  t228 = Cos(var1[4]);
  t289 = Sin(var1[3]);
  t1153 = Sin(var1[4]);
  t2160 = Cos(var1[2]);
  t820 = -1.*t228*t289;
  t2010 = -1.*t1128*t1153;
  t2094 = t820 + t2010;
  t133 = Sin(var1[2]);
  t2209 = t1128*t228;
  t2210 = -1.*t289*t1153;
  t2214 = t2209 + t2210;
  t2156 = -1.*t133*t2094;
  t2301 = -1.*t2160*t2094;
  t2967 = -1.*t1128*t228;
  t2988 = t289*t1153;
  t3054 = t2967 + t2988;
  t3063 = t2160*t3054;
  t3272 = t2156 + t3063;
  t4904 = 0.384*var2[0]*t3272;
  t4913 = -1.*t133*t3054;
  t4914 = t2301 + t4913;
  t4916 = 0.384*var2[1]*t4914;
  t4920 = t4904 + t4916;
  t4928 = var2[4]*t4920;
  t2219 = -1.*t2160*t2214;
  t2228 = t2156 + t2219;
  t4941 = t2160*t2094;
  t4953 = -1.*t133*t2214;
  t4954 = t4941 + t4953;
  t5076 = t228*t289;
  t5077 = t1128*t1153;
  t5080 = t5076 + t5077;
  t5501 = -1.*t228;
  t5669 = 1. + t5501;
  t5784 = 0.4*t5669;
  t5879 = 0.64*t228;
  t5882 = t5784 + t5879;
  t5932 = -1.*t5882*t289;
  t5965 = -0.24*t1128*t1153;
  t6482 = t5932 + t5965;
  t6890 = t1128*t5882;
  t6906 = -0.24*t289*t1153;
  t6955 = t6890 + t6906;
  t5102 = t133*t5080;
  t5105 = t5102 + t3063;
  t5106 = 0.384*var2[0]*t5105;
  t5109 = t2160*t5080;
  t5388 = t5109 + t4913;
  t5410 = 0.384*var2[1]*t5388;
  t6719 = t5882*t289;
  t6798 = 0.24*t1128*t1153;
  t6811 = t6719 + t6798;
  t6823 = t2094*t6811;
  t7079 = -0.24*t228*t289;
  t7089 = t7079 + t5965;
  t6987 = 0.24*t289*t1153;
  t7009 = t6955*t3054;
  t9440 = t6482*t2214;
  t9613 = t6811*t2214;
  t9675 = t2094*t6955;
  t9823 = t5080*t6955;
  t9907 = t9440 + t9613 + t9675 + t9823;
  t8761 = t133*t3054;
  t8824 = t4941 + t8761;
  t7078 = t2094*t6482;
  t7090 = t2094*t7089;
  t7103 = t7089*t5080;
  t7417 = t2214*t6955;
  t7566 = 0.24*t1128*t228;
  t7600 = t7566 + t6906;
  t7744 = t2214*t7600;
  t7777 = -0.24*t1128*t228;
  t7783 = t7777 + t6987;
  t7932 = t2214*t7783;
  t7942 = t7078 + t7090 + t6823 + t7103 + t7417 + t7744 + t7932 + t7009;
  t7990 = 0.384*var2[2]*t7942;
  t8302 = t5106 + t5410 + t7990;
  t8716 = var2[4]*t8302;
  t8901 = 0.384*var2[4]*t8824;
  t9330 = 0.384*var2[4]*t3272;
  t10909 = -1.*t5882*t1153;
  t10958 = 0.24*t228*t1153;
  t10972 = t10909 + t10958;
  t10868 = t7089*t2214;
  t10870 = t5080*t7600;
  t10880 = t10868 + t9613 + t9675 + t10870;
  t10159 = 0.384*var2[1]*t3272;
  t10669 = 0.384*var2[0]*t8824;
  p_output1[0]=(0.384*t2228*var2[0] + 0.384*(t133*t2214 + t2301)*var2[1])*var2[4];
  p_output1[1]=t4928;
  p_output1[2]=t4928;
  p_output1[3]=0.384*t4954*var2[4];
  p_output1[4]=0.384*t2228*var2[4];
  p_output1[5]=0.384*t4954*var2[0] + 0.384*t2228*var2[1];
  p_output1[6]=t4928;
  p_output1[7]=(t5106 + t5410 + 0.384*(2.*t2094*t6482 + t5080*t6482 + t6823 + 2.*t2214*t6955 + t2214*(-1.*t1128*t5882 + t6987) + t7009)*var2[2])*var2[4];
  p_output1[8]=t8716;
  p_output1[9]=t8901;
  p_output1[10]=t9330;
  p_output1[11]=0.384*t9907*var2[4];
  p_output1[12]=t10159 + t10669 + 0.384*t9907*var2[2];
  p_output1[13]=t4928;
  p_output1[14]=t8716;
  p_output1[15]=(t5106 + t5410 + 0.384*(t6823 + t7009 + 2.*t2094*t7089 + t7103 + 2.*t2214*t7600 + t7932)*var2[2] + 0.384*(0.24*Power(t228,2) - 1.*t228*t5882)*var2[3])*var2[4];
  p_output1[16]=t8901;
  p_output1[17]=t9330;
  p_output1[18]=0.384*t10880*var2[4];
  p_output1[19]=0.384*t10972*var2[4];
  p_output1[20]=t10159 + t10669 + 0.384*t10880*var2[2] + 0.384*t10972*var2[3];
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
