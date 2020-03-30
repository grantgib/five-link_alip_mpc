/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:51:46 GMT-04:00
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
  double t18550;
  double t358;
  double t8755;
  double t9887;
  double t10052;
  double t18345;
  double t18754;
  double t18756;
  double t20505;
  double t23005;
  double t23011;
  double t23012;
  double t23013;
  double t23026;
  double t23027;
  double t23028;
  double t23029;
  double t23033;
  double t23041;
  double t23046;
  double t23047;
  double t23050;
  double t23051;
  double t23054;
  double t23075;
  double t23077;
  double t23091;
  double t23092;
  double t23069;
  double t23070;
  double t23071;
  double t23072;
  double t23073;
  double t23074;
  double t23076;
  t18550 = -1.*var4[1];
  t358 = -1. + var5[0];
  t8755 = -1. + var6[0];
  t9887 = 1/t8755;
  t10052 = -1.*t358*t9887;
  t18345 = 1. + t10052;
  t18754 = var4[0] + t18550;
  t18756 = Power(t18754,-5);
  t20505 = -1.*var1[0];
  t23005 = t20505 + var1[1];
  t23011 = t358*t9887*t23005;
  t23012 = t18550 + var1[0] + t23011;
  t23013 = Power(t23012,4);
  t23026 = Power(t18754,-4);
  t23027 = Power(t23012,3);
  t23028 = 1/t18754;
  t23029 = -1.*t23028*t23012;
  t23033 = 1. + t23029;
  t23041 = Power(t18754,-3);
  t23046 = Power(t23012,2);
  t23047 = Power(t23033,2);
  t23050 = Power(t18754,-2);
  t23051 = Power(t23033,3);
  t23054 = Power(t23033,4);
  t23075 = Power(t23012,5);
  t23077 = Power(t18754,-6);
  t23091 = -1.*t23050*t23012;
  t23092 = t23028 + t23091;
  t23069 = Power(t23033,5);
  t23070 = -1.*t23069;
  t23071 = -5.*t23028*t23012*t23054;
  t23072 = -10.*t23050*t23046*t23051;
  t23073 = -10.*t23041*t23027*t23047;
  t23074 = -5.*t23026*t23013*t23033;
  t23076 = -1.*t18756*t23075;
  p_output1[0]=5.*t18345*t23028*t23054*var3[0] + 20.*t18345*t23012*t23050*t23051*var3[4] - 5.*t18345*t23028*t23054*var3[4] + 30.*t18345*t23041*t23046*t23047*var3[8] - 20.*t18345*t23012*t23050*t23051*var3[8] + 20.*t18345*t23026*t23027*t23033*var3[12] - 30.*t18345*t23041*t23046*t23047*var3[12] + 5.*t18345*t18756*t23013*var3[16] - 20.*t18345*t23026*t23027*t23033*var3[16] - 5.*t18345*t18756*t23013*var3[20];
  p_output1[1]=5.*t23028*t23054*t358*t9887*var3[0] + 20.*t23012*t23050*t23051*t358*t9887*var3[4] - 5.*t23028*t23054*t358*t9887*var3[4] + 30.*t23041*t23046*t23047*t358*t9887*var3[8] - 20.*t23012*t23050*t23051*t358*t9887*var3[8] + 20.*t23026*t23027*t23033*t358*t9887*var3[12] - 30.*t23041*t23046*t23047*t358*t9887*var3[12] + 5.*t18756*t23013*t358*t9887*var3[16] - 20.*t23026*t23027*t23033*t358*t9887*var3[16] - 5.*t18756*t23013*t358*t9887*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t23070;
  p_output1[4]=t23071;
  p_output1[5]=t23072;
  p_output1[6]=t23073;
  p_output1[7]=t23074;
  p_output1[8]=t23076;
  p_output1[9]=-5.*t23012*t23050*t23054*var3[0] - 20.*t23041*t23046*t23051*var3[4] + 5.*t23012*t23050*t23054*var3[4] - 30.*t23026*t23027*t23047*var3[8] + 20.*t23041*t23046*t23051*var3[8] - 20.*t18756*t23013*t23033*var3[12] + 30.*t23026*t23027*t23047*var3[12] + 20.*t18756*t23013*t23033*var3[16] - 5.*t23075*t23077*var3[16] + 5.*t23075*t23077*var3[20];
  p_output1[10]=-5.*t23054*t23092*var3[0] + 5.*t23028*t23054*var3[4] - 5.*t23012*t23050*t23054*var3[4] - 20.*t23012*t23028*t23051*t23092*var3[4] - 20.*t23041*t23046*t23051*var3[8] + 20.*t23012*t23050*t23051*var3[8] - 30.*t23046*t23047*t23050*t23092*var3[8] - 30.*t23026*t23027*t23047*var3[12] + 30.*t23041*t23046*t23047*var3[12] - 20.*t23027*t23033*t23041*t23092*var3[12] - 20.*t18756*t23013*t23033*var3[16] + 20.*t23026*t23027*t23033*var3[16] - 5.*t23013*t23026*t23092*var3[16] + 5.*t18756*t23013*var3[20] - 5.*t23075*t23077*var3[20];
  p_output1[11]=5.*t18345*t23028*t23054*var3[1] + 20.*t18345*t23012*t23050*t23051*var3[5] - 5.*t18345*t23028*t23054*var3[5] + 30.*t18345*t23041*t23046*t23047*var3[9] - 20.*t18345*t23012*t23050*t23051*var3[9] + 20.*t18345*t23026*t23027*t23033*var3[13] - 30.*t18345*t23041*t23046*t23047*var3[13] + 5.*t18345*t18756*t23013*var3[17] - 20.*t18345*t23026*t23027*t23033*var3[17] - 5.*t18345*t18756*t23013*var3[21];
  p_output1[12]=5.*t23028*t23054*t358*t9887*var3[1] + 20.*t23012*t23050*t23051*t358*t9887*var3[5] - 5.*t23028*t23054*t358*t9887*var3[5] + 30.*t23041*t23046*t23047*t358*t9887*var3[9] - 20.*t23012*t23050*t23051*t358*t9887*var3[9] + 20.*t23026*t23027*t23033*t358*t9887*var3[13] - 30.*t23041*t23046*t23047*t358*t9887*var3[13] + 5.*t18756*t23013*t358*t9887*var3[17] - 20.*t23026*t23027*t23033*t358*t9887*var3[17] - 5.*t18756*t23013*t358*t9887*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t23070;
  p_output1[15]=t23071;
  p_output1[16]=t23072;
  p_output1[17]=t23073;
  p_output1[18]=t23074;
  p_output1[19]=t23076;
  p_output1[20]=-5.*t23012*t23050*t23054*var3[1] - 20.*t23041*t23046*t23051*var3[5] + 5.*t23012*t23050*t23054*var3[5] - 30.*t23026*t23027*t23047*var3[9] + 20.*t23041*t23046*t23051*var3[9] - 20.*t18756*t23013*t23033*var3[13] + 30.*t23026*t23027*t23047*var3[13] + 20.*t18756*t23013*t23033*var3[17] - 5.*t23075*t23077*var3[17] + 5.*t23075*t23077*var3[21];
  p_output1[21]=-5.*t23054*t23092*var3[1] + 5.*t23028*t23054*var3[5] - 5.*t23012*t23050*t23054*var3[5] - 20.*t23012*t23028*t23051*t23092*var3[5] - 20.*t23041*t23046*t23051*var3[9] + 20.*t23012*t23050*t23051*var3[9] - 30.*t23046*t23047*t23050*t23092*var3[9] - 30.*t23026*t23027*t23047*var3[13] + 30.*t23041*t23046*t23047*var3[13] - 20.*t23027*t23033*t23041*t23092*var3[13] - 20.*t18756*t23013*t23033*var3[17] + 20.*t23026*t23027*t23033*var3[17] - 5.*t23013*t23026*t23092*var3[17] + 5.*t18756*t23013*var3[21] - 5.*t23075*t23077*var3[21];
  p_output1[22]=5.*t18345*t23028*t23054*var3[2] + 20.*t18345*t23012*t23050*t23051*var3[6] - 5.*t18345*t23028*t23054*var3[6] + 30.*t18345*t23041*t23046*t23047*var3[10] - 20.*t18345*t23012*t23050*t23051*var3[10] + 20.*t18345*t23026*t23027*t23033*var3[14] - 30.*t18345*t23041*t23046*t23047*var3[14] + 5.*t18345*t18756*t23013*var3[18] - 20.*t18345*t23026*t23027*t23033*var3[18] - 5.*t18345*t18756*t23013*var3[22];
  p_output1[23]=5.*t23028*t23054*t358*t9887*var3[2] + 20.*t23012*t23050*t23051*t358*t9887*var3[6] - 5.*t23028*t23054*t358*t9887*var3[6] + 30.*t23041*t23046*t23047*t358*t9887*var3[10] - 20.*t23012*t23050*t23051*t358*t9887*var3[10] + 20.*t23026*t23027*t23033*t358*t9887*var3[14] - 30.*t23041*t23046*t23047*t358*t9887*var3[14] + 5.*t18756*t23013*t358*t9887*var3[18] - 20.*t23026*t23027*t23033*t358*t9887*var3[18] - 5.*t18756*t23013*t358*t9887*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t23070;
  p_output1[26]=t23071;
  p_output1[27]=t23072;
  p_output1[28]=t23073;
  p_output1[29]=t23074;
  p_output1[30]=t23076;
  p_output1[31]=-5.*t23012*t23050*t23054*var3[2] - 20.*t23041*t23046*t23051*var3[6] + 5.*t23012*t23050*t23054*var3[6] - 30.*t23026*t23027*t23047*var3[10] + 20.*t23041*t23046*t23051*var3[10] - 20.*t18756*t23013*t23033*var3[14] + 30.*t23026*t23027*t23047*var3[14] + 20.*t18756*t23013*t23033*var3[18] - 5.*t23075*t23077*var3[18] + 5.*t23075*t23077*var3[22];
  p_output1[32]=-5.*t23054*t23092*var3[2] + 5.*t23028*t23054*var3[6] - 5.*t23012*t23050*t23054*var3[6] - 20.*t23012*t23028*t23051*t23092*var3[6] - 20.*t23041*t23046*t23051*var3[10] + 20.*t23012*t23050*t23051*var3[10] - 30.*t23046*t23047*t23050*t23092*var3[10] - 30.*t23026*t23027*t23047*var3[14] + 30.*t23041*t23046*t23047*var3[14] - 20.*t23027*t23033*t23041*t23092*var3[14] - 20.*t18756*t23013*t23033*var3[18] + 20.*t23026*t23027*t23033*var3[18] - 5.*t23013*t23026*t23092*var3[18] + 5.*t18756*t23013*var3[22] - 5.*t23075*t23077*var3[22];
  p_output1[33]=5.*t18345*t23028*t23054*var3[3] + 20.*t18345*t23012*t23050*t23051*var3[7] - 5.*t18345*t23028*t23054*var3[7] + 30.*t18345*t23041*t23046*t23047*var3[11] - 20.*t18345*t23012*t23050*t23051*var3[11] + 20.*t18345*t23026*t23027*t23033*var3[15] - 30.*t18345*t23041*t23046*t23047*var3[15] + 5.*t18345*t18756*t23013*var3[19] - 20.*t18345*t23026*t23027*t23033*var3[19] - 5.*t18345*t18756*t23013*var3[23];
  p_output1[34]=5.*t23028*t23054*t358*t9887*var3[3] + 20.*t23012*t23050*t23051*t358*t9887*var3[7] - 5.*t23028*t23054*t358*t9887*var3[7] + 30.*t23041*t23046*t23047*t358*t9887*var3[11] - 20.*t23012*t23050*t23051*t358*t9887*var3[11] + 20.*t23026*t23027*t23033*t358*t9887*var3[15] - 30.*t23041*t23046*t23047*t358*t9887*var3[15] + 5.*t18756*t23013*t358*t9887*var3[19] - 20.*t23026*t23027*t23033*t358*t9887*var3[19] - 5.*t18756*t23013*t358*t9887*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t23070;
  p_output1[37]=t23071;
  p_output1[38]=t23072;
  p_output1[39]=t23073;
  p_output1[40]=t23074;
  p_output1[41]=t23076;
  p_output1[42]=-5.*t23012*t23050*t23054*var3[3] - 20.*t23041*t23046*t23051*var3[7] + 5.*t23012*t23050*t23054*var3[7] - 30.*t23026*t23027*t23047*var3[11] + 20.*t23041*t23046*t23051*var3[11] - 20.*t18756*t23013*t23033*var3[15] + 30.*t23026*t23027*t23047*var3[15] + 20.*t18756*t23013*t23033*var3[19] - 5.*t23075*t23077*var3[19] + 5.*t23075*t23077*var3[23];
  p_output1[43]=-5.*t23054*t23092*var3[3] + 5.*t23028*t23054*var3[7] - 5.*t23012*t23050*t23054*var3[7] - 20.*t23012*t23028*t23051*t23092*var3[7] - 20.*t23041*t23046*t23051*var3[11] + 20.*t23012*t23050*t23051*var3[11] - 30.*t23046*t23047*t23050*t23092*var3[11] - 30.*t23026*t23027*t23047*var3[15] + 30.*t23041*t23046*t23047*var3[15] - 20.*t23027*t23033*t23041*t23092*var3[15] - 20.*t18756*t23013*t23033*var3[19] + 20.*t23026*t23027*t23033*var3[19] - 5.*t23013*t23026*t23092*var3[19] + 5.*t18756*t23013*var3[23] - 5.*t23075*t23077*var3[23];
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
