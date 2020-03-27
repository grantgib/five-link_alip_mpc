/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:53:51 GMT-04:00
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
  double t11559;
  double t123;
  double t979;
  double t1098;
  double t5297;
  double t7460;
  double t11679;
  double t12027;
  double t12175;
  double t12281;
  double t14847;
  double t14854;
  double t14856;
  double t14859;
  double t14860;
  double t14861;
  double t14862;
  double t14863;
  double t14870;
  double t14871;
  double t14872;
  double t14909;
  double t14910;
  double t14913;
  double t14938;
  double t14940;
  double t14954;
  double t14955;
  double t14932;
  double t14933;
  double t14934;
  double t14935;
  double t14936;
  double t14937;
  double t14939;
  t11559 = -1.*var4[1];
  t123 = -1. + var5[0];
  t979 = -1. + var6[0];
  t1098 = 1/t979;
  t5297 = -1.*t123*t1098;
  t7460 = 1. + t5297;
  t11679 = var4[0] + t11559;
  t12027 = Power(t11679,-5);
  t12175 = -1.*var1[0];
  t12281 = t12175 + var1[1];
  t14847 = t123*t1098*t12281;
  t14854 = t11559 + var1[0] + t14847;
  t14856 = Power(t14854,4);
  t14859 = Power(t11679,-4);
  t14860 = Power(t14854,3);
  t14861 = 1/t11679;
  t14862 = -1.*t14861*t14854;
  t14863 = 1. + t14862;
  t14870 = Power(t11679,-3);
  t14871 = Power(t14854,2);
  t14872 = Power(t14863,2);
  t14909 = Power(t11679,-2);
  t14910 = Power(t14863,3);
  t14913 = Power(t14863,4);
  t14938 = Power(t14854,5);
  t14940 = Power(t11679,-6);
  t14954 = -1.*t14909*t14854;
  t14955 = t14861 + t14954;
  t14932 = Power(t14863,5);
  t14933 = -1.*t14932;
  t14934 = -5.*t14861*t14854*t14913;
  t14935 = -10.*t14909*t14871*t14910;
  t14936 = -10.*t14870*t14860*t14872;
  t14937 = -5.*t14859*t14856*t14863;
  t14939 = -1.*t12027*t14938;
  p_output1[0]=5.*t14861*t14913*t7460*var3[0] + 20.*t14854*t14909*t14910*t7460*var3[4] - 5.*t14861*t14913*t7460*var3[4] + 30.*t14870*t14871*t14872*t7460*var3[8] - 20.*t14854*t14909*t14910*t7460*var3[8] + 20.*t14859*t14860*t14863*t7460*var3[12] - 30.*t14870*t14871*t14872*t7460*var3[12] + 5.*t12027*t14856*t7460*var3[16] - 20.*t14859*t14860*t14863*t7460*var3[16] - 5.*t12027*t14856*t7460*var3[20];
  p_output1[1]=5.*t1098*t123*t14861*t14913*var3[0] + 20.*t1098*t123*t14854*t14909*t14910*var3[4] - 5.*t1098*t123*t14861*t14913*var3[4] + 30.*t1098*t123*t14870*t14871*t14872*var3[8] - 20.*t1098*t123*t14854*t14909*t14910*var3[8] + 20.*t1098*t123*t14859*t14860*t14863*var3[12] - 30.*t1098*t123*t14870*t14871*t14872*var3[12] + 5.*t1098*t12027*t123*t14856*var3[16] - 20.*t1098*t123*t14859*t14860*t14863*var3[16] - 5.*t1098*t12027*t123*t14856*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t14933;
  p_output1[4]=t14934;
  p_output1[5]=t14935;
  p_output1[6]=t14936;
  p_output1[7]=t14937;
  p_output1[8]=t14939;
  p_output1[9]=-5.*t14854*t14909*t14913*var3[0] - 20.*t14870*t14871*t14910*var3[4] + 5.*t14854*t14909*t14913*var3[4] - 30.*t14859*t14860*t14872*var3[8] + 20.*t14870*t14871*t14910*var3[8] - 20.*t12027*t14856*t14863*var3[12] + 30.*t14859*t14860*t14872*var3[12] + 20.*t12027*t14856*t14863*var3[16] - 5.*t14938*t14940*var3[16] + 5.*t14938*t14940*var3[20];
  p_output1[10]=-5.*t14913*t14955*var3[0] + 5.*t14861*t14913*var3[4] - 5.*t14854*t14909*t14913*var3[4] - 20.*t14854*t14861*t14910*t14955*var3[4] - 20.*t14870*t14871*t14910*var3[8] + 20.*t14854*t14909*t14910*var3[8] - 30.*t14871*t14872*t14909*t14955*var3[8] - 30.*t14859*t14860*t14872*var3[12] + 30.*t14870*t14871*t14872*var3[12] - 20.*t14860*t14863*t14870*t14955*var3[12] - 20.*t12027*t14856*t14863*var3[16] + 20.*t14859*t14860*t14863*var3[16] - 5.*t14856*t14859*t14955*var3[16] + 5.*t12027*t14856*var3[20] - 5.*t14938*t14940*var3[20];
  p_output1[11]=5.*t14861*t14913*t7460*var3[1] + 20.*t14854*t14909*t14910*t7460*var3[5] - 5.*t14861*t14913*t7460*var3[5] + 30.*t14870*t14871*t14872*t7460*var3[9] - 20.*t14854*t14909*t14910*t7460*var3[9] + 20.*t14859*t14860*t14863*t7460*var3[13] - 30.*t14870*t14871*t14872*t7460*var3[13] + 5.*t12027*t14856*t7460*var3[17] - 20.*t14859*t14860*t14863*t7460*var3[17] - 5.*t12027*t14856*t7460*var3[21];
  p_output1[12]=5.*t1098*t123*t14861*t14913*var3[1] + 20.*t1098*t123*t14854*t14909*t14910*var3[5] - 5.*t1098*t123*t14861*t14913*var3[5] + 30.*t1098*t123*t14870*t14871*t14872*var3[9] - 20.*t1098*t123*t14854*t14909*t14910*var3[9] + 20.*t1098*t123*t14859*t14860*t14863*var3[13] - 30.*t1098*t123*t14870*t14871*t14872*var3[13] + 5.*t1098*t12027*t123*t14856*var3[17] - 20.*t1098*t123*t14859*t14860*t14863*var3[17] - 5.*t1098*t12027*t123*t14856*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t14933;
  p_output1[15]=t14934;
  p_output1[16]=t14935;
  p_output1[17]=t14936;
  p_output1[18]=t14937;
  p_output1[19]=t14939;
  p_output1[20]=-5.*t14854*t14909*t14913*var3[1] - 20.*t14870*t14871*t14910*var3[5] + 5.*t14854*t14909*t14913*var3[5] - 30.*t14859*t14860*t14872*var3[9] + 20.*t14870*t14871*t14910*var3[9] - 20.*t12027*t14856*t14863*var3[13] + 30.*t14859*t14860*t14872*var3[13] + 20.*t12027*t14856*t14863*var3[17] - 5.*t14938*t14940*var3[17] + 5.*t14938*t14940*var3[21];
  p_output1[21]=-5.*t14913*t14955*var3[1] + 5.*t14861*t14913*var3[5] - 5.*t14854*t14909*t14913*var3[5] - 20.*t14854*t14861*t14910*t14955*var3[5] - 20.*t14870*t14871*t14910*var3[9] + 20.*t14854*t14909*t14910*var3[9] - 30.*t14871*t14872*t14909*t14955*var3[9] - 30.*t14859*t14860*t14872*var3[13] + 30.*t14870*t14871*t14872*var3[13] - 20.*t14860*t14863*t14870*t14955*var3[13] - 20.*t12027*t14856*t14863*var3[17] + 20.*t14859*t14860*t14863*var3[17] - 5.*t14856*t14859*t14955*var3[17] + 5.*t12027*t14856*var3[21] - 5.*t14938*t14940*var3[21];
  p_output1[22]=5.*t14861*t14913*t7460*var3[2] + 20.*t14854*t14909*t14910*t7460*var3[6] - 5.*t14861*t14913*t7460*var3[6] + 30.*t14870*t14871*t14872*t7460*var3[10] - 20.*t14854*t14909*t14910*t7460*var3[10] + 20.*t14859*t14860*t14863*t7460*var3[14] - 30.*t14870*t14871*t14872*t7460*var3[14] + 5.*t12027*t14856*t7460*var3[18] - 20.*t14859*t14860*t14863*t7460*var3[18] - 5.*t12027*t14856*t7460*var3[22];
  p_output1[23]=5.*t1098*t123*t14861*t14913*var3[2] + 20.*t1098*t123*t14854*t14909*t14910*var3[6] - 5.*t1098*t123*t14861*t14913*var3[6] + 30.*t1098*t123*t14870*t14871*t14872*var3[10] - 20.*t1098*t123*t14854*t14909*t14910*var3[10] + 20.*t1098*t123*t14859*t14860*t14863*var3[14] - 30.*t1098*t123*t14870*t14871*t14872*var3[14] + 5.*t1098*t12027*t123*t14856*var3[18] - 20.*t1098*t123*t14859*t14860*t14863*var3[18] - 5.*t1098*t12027*t123*t14856*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t14933;
  p_output1[26]=t14934;
  p_output1[27]=t14935;
  p_output1[28]=t14936;
  p_output1[29]=t14937;
  p_output1[30]=t14939;
  p_output1[31]=-5.*t14854*t14909*t14913*var3[2] - 20.*t14870*t14871*t14910*var3[6] + 5.*t14854*t14909*t14913*var3[6] - 30.*t14859*t14860*t14872*var3[10] + 20.*t14870*t14871*t14910*var3[10] - 20.*t12027*t14856*t14863*var3[14] + 30.*t14859*t14860*t14872*var3[14] + 20.*t12027*t14856*t14863*var3[18] - 5.*t14938*t14940*var3[18] + 5.*t14938*t14940*var3[22];
  p_output1[32]=-5.*t14913*t14955*var3[2] + 5.*t14861*t14913*var3[6] - 5.*t14854*t14909*t14913*var3[6] - 20.*t14854*t14861*t14910*t14955*var3[6] - 20.*t14870*t14871*t14910*var3[10] + 20.*t14854*t14909*t14910*var3[10] - 30.*t14871*t14872*t14909*t14955*var3[10] - 30.*t14859*t14860*t14872*var3[14] + 30.*t14870*t14871*t14872*var3[14] - 20.*t14860*t14863*t14870*t14955*var3[14] - 20.*t12027*t14856*t14863*var3[18] + 20.*t14859*t14860*t14863*var3[18] - 5.*t14856*t14859*t14955*var3[18] + 5.*t12027*t14856*var3[22] - 5.*t14938*t14940*var3[22];
  p_output1[33]=5.*t14861*t14913*t7460*var3[3] + 20.*t14854*t14909*t14910*t7460*var3[7] - 5.*t14861*t14913*t7460*var3[7] + 30.*t14870*t14871*t14872*t7460*var3[11] - 20.*t14854*t14909*t14910*t7460*var3[11] + 20.*t14859*t14860*t14863*t7460*var3[15] - 30.*t14870*t14871*t14872*t7460*var3[15] + 5.*t12027*t14856*t7460*var3[19] - 20.*t14859*t14860*t14863*t7460*var3[19] - 5.*t12027*t14856*t7460*var3[23];
  p_output1[34]=5.*t1098*t123*t14861*t14913*var3[3] + 20.*t1098*t123*t14854*t14909*t14910*var3[7] - 5.*t1098*t123*t14861*t14913*var3[7] + 30.*t1098*t123*t14870*t14871*t14872*var3[11] - 20.*t1098*t123*t14854*t14909*t14910*var3[11] + 20.*t1098*t123*t14859*t14860*t14863*var3[15] - 30.*t1098*t123*t14870*t14871*t14872*var3[15] + 5.*t1098*t12027*t123*t14856*var3[19] - 20.*t1098*t123*t14859*t14860*t14863*var3[19] - 5.*t1098*t12027*t123*t14856*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t14933;
  p_output1[37]=t14934;
  p_output1[38]=t14935;
  p_output1[39]=t14936;
  p_output1[40]=t14937;
  p_output1[41]=t14939;
  p_output1[42]=-5.*t14854*t14909*t14913*var3[3] - 20.*t14870*t14871*t14910*var3[7] + 5.*t14854*t14909*t14913*var3[7] - 30.*t14859*t14860*t14872*var3[11] + 20.*t14870*t14871*t14910*var3[11] - 20.*t12027*t14856*t14863*var3[15] + 30.*t14859*t14860*t14872*var3[15] + 20.*t12027*t14856*t14863*var3[19] - 5.*t14938*t14940*var3[19] + 5.*t14938*t14940*var3[23];
  p_output1[43]=-5.*t14913*t14955*var3[3] + 5.*t14861*t14913*var3[7] - 5.*t14854*t14909*t14913*var3[7] - 20.*t14854*t14861*t14910*t14955*var3[7] - 20.*t14870*t14871*t14910*var3[11] + 20.*t14854*t14909*t14910*var3[11] - 30.*t14871*t14872*t14909*t14955*var3[11] - 30.*t14859*t14860*t14872*var3[15] + 30.*t14870*t14871*t14872*var3[15] - 20.*t14860*t14863*t14870*t14955*var3[15] - 20.*t12027*t14856*t14863*var3[19] + 20.*t14859*t14860*t14863*var3[19] - 5.*t14856*t14859*t14955*var3[19] + 5.*t12027*t14856*var3[23] - 5.*t14938*t14940*var3[23];
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
