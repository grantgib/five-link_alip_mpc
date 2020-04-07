/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:02:24 GMT-04:00
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
  double t819;
  double t1706;
  double t619;
  double t1785;
  double t204;
  double t1535;
  double t1994;
  double t1996;
  double t2157;
  double t2172;
  double t2383;
  double t2423;
  double t233;
  double t547;
  double t3267;
  double t3406;
  double t3514;
  double t2153;
  double t2499;
  double t2512;
  double t2601;
  double t2641;
  double t2843;
  double t2892;
  double t3067;
  double t3797;
  double t3907;
  double t3988;
  double t4028;
  double t4123;
  double t4381;
  double t4853;
  double t5871;
  double t5914;
  double t6090;
  double t6093;
  double t6101;
  double t5966;
  double t5992;
  double t5995;
  double t6025;
  double t6060;
  double t6061;
  double t6066;
  double t6080;
  double t6102;
  double t6106;
  double t6107;
  double t6112;
  double t6116;
  double t6117;
  double t6118;
  double t6120;
  double t6121;
  double t6125;
  double t6126;
  double t6129;
  double t6131;
  double t6132;
  t819 = Cos(var1[3]);
  t1706 = Sin(var1[2]);
  t619 = Cos(var1[2]);
  t1785 = Sin(var1[3]);
  t204 = Cos(var1[4]);
  t1535 = -1.*t619*t819;
  t1994 = t1706*t1785;
  t1996 = t1535 + t1994;
  t2157 = t819*t1706;
  t2172 = t619*t1785;
  t2383 = t2157 + t2172;
  t2423 = Sin(var1[4]);
  t233 = -1.*t204;
  t547 = 1. + t233;
  t3267 = -1.*t819*t1706;
  t3406 = -1.*t619*t1785;
  t3514 = t3267 + t3406;
  t2153 = 0.4*t547*t1996;
  t2499 = -0.4*t2383*t2423;
  t2512 = t204*t1996;
  t2601 = t2383*t2423;
  t2641 = t2512 + t2601;
  t2843 = 0.8*t2641;
  t2892 = t2153 + t2499 + t2843;
  t3067 = var2[2]*t2892;
  t3797 = 0.4*t547*t3514;
  t3907 = -0.4*t1996*t2423;
  t3988 = t204*t3514;
  t4028 = t1996*t2423;
  t4123 = t3988 + t4028;
  t4381 = 0.8*t4123;
  t4853 = t3797 + t3907 + t4381;
  t5871 = var2[0]*t4853;
  t5914 = t3067 + t5871;
  t6090 = t619*t819;
  t6093 = -1.*t1706*t1785;
  t6101 = t6090 + t6093;
  t5966 = -0.4*t204*t1996;
  t5992 = 0.4*t3514*t2423;
  t5995 = -1.*t3514*t2423;
  t6025 = t2512 + t5995;
  t6060 = 0.8*t6025;
  t6061 = t5966 + t5992 + t6060;
  t6066 = var2[2]*t6061;
  t6080 = -0.4*t204*t3514;
  t6102 = 0.4*t6101*t2423;
  t6106 = -1.*t6101*t2423;
  t6107 = t3988 + t6106;
  t6112 = 0.8*t6107;
  t6116 = t6080 + t6102 + t6112;
  t6117 = var2[0]*t6116;
  t6118 = t6066 + t6117;
  t6120 = 0.4*t547*t6101;
  t6121 = -0.4*t3514*t2423;
  t6125 = t204*t6101;
  t6126 = t3514*t2423;
  t6129 = t6125 + t6126;
  t6131 = 0.8*t6129;
  t6132 = t6120 + t6121 + t6131;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t5914;
  p_output1[3]=t5914;
  p_output1[4]=t6118;
  p_output1[5]=t6132;
  p_output1[6]=t4853;
  p_output1[7]=t5914;
  p_output1[8]=t5914;
  p_output1[9]=t6118;
  p_output1[10]=t6132;
  p_output1[11]=t4853;
  p_output1[12]=t6118;
  p_output1[13]=t6118;
  p_output1[14]=(0.4*t204*t2383 + t6102 + 0.8*(-1.*t204*t2383 + t6106))*var2[0] + (t5992 + 0.4*t204*t6101 + 0.8*(t5995 - 1.*t204*t6101))*var2[2];
  p_output1[15]=0.4*t2383*t2423 - 0.4*t204*t6101 + 0.8*(-1.*t2383*t2423 + t6125);
  p_output1[16]=t6116;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightToe_vec_RightStance.hh"

namespace RightStance
{

void J_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
