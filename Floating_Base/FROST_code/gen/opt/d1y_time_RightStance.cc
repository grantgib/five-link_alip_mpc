/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:37 GMT-04:00
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
  double t3077;
  double t4492;
  double t4948;
  double t7559;
  double t7846;
  double t7847;
  double t8177;
  double t11679;
  double t11739;
  double t11740;
  double t11815;
  double t15716;
  double t15726;
  double t15727;
  double t15731;
  double t15732;
  double t15738;
  double t15739;
  double t15740;
  double t15743;
  double t15744;
  double t15747;
  t3077 = -1.*var5[1];
  t4492 = var5[0] + t3077;
  t4948 = Power(t4492,-5);
  t7559 = -1. + var6[0];
  t7846 = -1. + var7[0];
  t7847 = 1/t7846;
  t8177 = -1.*var1[0];
  t11679 = t8177 + var1[1];
  t11739 = t7559*t7847*t11679;
  t11740 = t3077 + var1[0] + t11739;
  t11815 = Power(t11740,4);
  t15716 = Power(t4492,-4);
  t15726 = Power(t11740,3);
  t15727 = 1/t4492;
  t15731 = -1.*t15727*t11740;
  t15732 = 1. + t15731;
  t15738 = Power(t4492,-3);
  t15739 = Power(t11740,2);
  t15740 = Power(t15732,2);
  t15743 = Power(t4492,-2);
  t15744 = Power(t15732,3);
  t15747 = Power(t15732,4);
  p_output1[0]=var3[3] + 5.*t15727*t15747*var4[0] + 20.*t11740*t15743*t15744*var4[4] - 5.*t15727*t15747*var4[4] + 30.*t15738*t15739*t15740*var4[8] - 20.*t11740*t15743*t15744*var4[8] + 20.*t15716*t15726*t15732*var4[12] - 30.*t15738*t15739*t15740*var4[12] - 20.*t15716*t15726*t15732*var4[16] + 5.*t11815*t4948*var4[16] - 5.*t11815*t4948*var4[20];
  p_output1[1]=var3[4] + 5.*t15727*t15747*var4[1] + 20.*t11740*t15743*t15744*var4[5] - 5.*t15727*t15747*var4[5] + 30.*t15738*t15739*t15740*var4[9] - 20.*t11740*t15743*t15744*var4[9] + 20.*t15716*t15726*t15732*var4[13] - 30.*t15738*t15739*t15740*var4[13] - 20.*t15716*t15726*t15732*var4[17] + 5.*t11815*t4948*var4[17] - 5.*t11815*t4948*var4[21];
  p_output1[2]=var3[5] + 5.*t15727*t15747*var4[2] + 20.*t11740*t15743*t15744*var4[6] - 5.*t15727*t15747*var4[6] + 30.*t15738*t15739*t15740*var4[10] - 20.*t11740*t15743*t15744*var4[10] + 20.*t15716*t15726*t15732*var4[14] - 30.*t15738*t15739*t15740*var4[14] - 20.*t15716*t15726*t15732*var4[18] + 5.*t11815*t4948*var4[18] - 5.*t11815*t4948*var4[22];
  p_output1[3]=var3[6] + 5.*t15727*t15747*var4[3] + 20.*t11740*t15743*t15744*var4[7] - 5.*t15727*t15747*var4[7] + 30.*t15738*t15739*t15740*var4[11] - 20.*t11740*t15743*t15744*var4[11] + 20.*t15716*t15726*t15732*var4[15] - 30.*t15738*t15739*t15740*var4[15] - 20.*t15716*t15726*t15732*var4[19] + 5.*t11815*t4948*var4[19] - 5.*t11815*t4948*var4[23];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "d1y_time_RightStance.hh"

namespace RightStance
{

void d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
