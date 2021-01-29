/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:56 GMT-05:00
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
  double t247;
  double t264;
  double t266;
  double t277;
  double t1137;
  double t1200;
  double t1445;
  double t1453;
  double t1477;
  double t1525;
  double t1576;
  double t1595;
  double t265;
  double t1484;
  double t1500;
  double t1517;
  double t1660;
  double t1668;
  double t1679;
  double t1697;
  double t1719;
  double t2524;
  double t3070;
  double t3114;
  double t6804;
  double t6414;
  double t6690;
  double t6805;
  double t5831;
  double t6692;
  double t6806;
  double t6814;
  double t6863;
  double t6866;
  double t6868;
  double t6870;
  double t6051;
  double t6405;
  double t7031;
  double t7033;
  double t7039;
  t247 = -1.*var4[1];
  t264 = var4[0] + t247;
  t266 = -1. + var5[0];
  t277 = -1. + var6[0];
  t1137 = 1/t277;
  t1200 = -1.*var1[0];
  t1445 = t1200 + var1[1];
  t1453 = t266*t1137*t1445;
  t1477 = t247 + var1[0] + t1453;
  t1525 = 1/t264;
  t1576 = -1.*t1525*t1477;
  t1595 = 1. + t1576;
  t265 = Power(t264,-5);
  t1484 = Power(t1477,5);
  t1500 = Power(t264,-4);
  t1517 = Power(t1477,4);
  t1660 = Power(t264,-3);
  t1668 = Power(t1477,3);
  t1679 = Power(t1595,2);
  t1697 = Power(t264,-2);
  t1719 = Power(t1477,2);
  t2524 = Power(t1595,3);
  t3070 = Power(t1595,4);
  t3114 = Power(t1595,5);
  t6804 = Cos(var2[2]);
  t6414 = Cos(var2[5]);
  t6690 = Sin(var2[2]);
  t6805 = Sin(var2[5]);
  t5831 = Cos(var2[6]);
  t6692 = t6414*t6690;
  t6806 = t6804*t6805;
  t6814 = t6692 + t6806;
  t6863 = t6804*t6414;
  t6866 = -1.*t6690*t6805;
  t6868 = t6863 + t6866;
  t6870 = Sin(var2[6]);
  t6051 = -1.*t5831;
  t6405 = 1. + t6051;
  t7031 = -1.*t6414*t6690;
  t7033 = -1.*t6804*t6805;
  t7039 = t7031 + t7033;
  p_output1[0]=var2[2] - 1.*t3114*var3[0] - 5.*t1477*t1525*t3070*var3[4] - 10.*t1697*t1719*t2524*var3[8] - 10.*t1660*t1668*t1679*var3[12] - 5.*t1500*t1517*t1595*var3[16] - 1.*t1484*t265*var3[20];
  p_output1[1]=var2[1] - 1.*t3114*var3[1] - 5.*t1477*t1525*t3070*var3[5] - 10.*t1697*t1719*t2524*var3[9] - 10.*t1660*t1668*t1679*var3[13] - 5.*t1500*t1517*t1595*var3[17] - 1.*t1484*t265*var3[21];
  p_output1[2]=0.4*t6405*t6814 - 0.4*t6868*t6870 + 0.8*(t5831*t6814 + t6868*t6870) + var2[0] - 1.*t3114*var3[2] - 5.*t1477*t1525*t3070*var3[6] - 10.*t1697*t1719*t2524*var3[10] - 10.*t1660*t1668*t1679*var3[14] - 5.*t1500*t1517*t1595*var3[18] - 1.*t1484*t265*var3[22];
  p_output1[3]=0.4*t6405*t6868 - 0.4*t6870*t7039 + 0.8*(t5831*t6868 + t6870*t7039) + var2[1] - 1.*t3114*var3[3] - 5.*t1477*t1525*t3070*var3[7] - 10.*t1697*t1719*t2524*var3[11] - 10.*t1660*t1668*t1679*var3[15] - 5.*t1500*t1517*t1595*var3[19] - 1.*t1484*t265*var3[23];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "y_time_RightStance.hh"

namespace RightStance
{

void y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
