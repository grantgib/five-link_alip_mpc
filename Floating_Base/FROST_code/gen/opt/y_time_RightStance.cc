/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:51:43 GMT-04:00
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
  double t5371;
  double t5449;
  double t5709;
  double t6124;
  double t8119;
  double t8130;
  double t8158;
  double t8159;
  double t8474;
  double t9340;
  double t9757;
  double t9859;
  double t5543;
  double t8754;
  double t8759;
  double t8805;
  double t9890;
  double t9952;
  double t10004;
  double t10291;
  double t18319;
  double t18337;
  double t18390;
  double t18735;
  t5371 = -1.*var4[1];
  t5449 = var4[0] + t5371;
  t5709 = -1. + var5[0];
  t6124 = -1. + var6[0];
  t8119 = 1/t6124;
  t8130 = -1.*var1[0];
  t8158 = t8130 + var1[1];
  t8159 = t5709*t8119*t8158;
  t8474 = t5371 + var1[0] + t8159;
  t9340 = 1/t5449;
  t9757 = -1.*t9340*t8474;
  t9859 = 1. + t9757;
  t5543 = Power(t5449,-5);
  t8754 = Power(t8474,5);
  t8759 = Power(t5449,-4);
  t8805 = Power(t8474,4);
  t9890 = Power(t5449,-3);
  t9952 = Power(t8474,3);
  t10004 = Power(t9859,2);
  t10291 = Power(t5449,-2);
  t18319 = Power(t8474,2);
  t18337 = Power(t9859,3);
  t18390 = Power(t9859,4);
  t18735 = Power(t9859,5);
  p_output1[0]=var2[3] - 1.*t18735*var3[0] - 5.*t18390*t8474*t9340*var3[4] - 10.*t10291*t18319*t18337*var3[8] - 10.*t10004*t9890*t9952*var3[12] - 5.*t8759*t8805*t9859*var3[16] - 1.*t5543*t8754*var3[20];
  p_output1[1]=var2[4] - 1.*t18735*var3[1] - 5.*t18390*t8474*t9340*var3[5] - 10.*t10291*t18319*t18337*var3[9] - 10.*t10004*t9890*t9952*var3[13] - 5.*t8759*t8805*t9859*var3[17] - 1.*t5543*t8754*var3[21];
  p_output1[2]=var2[5] - 1.*t18735*var3[2] - 5.*t18390*t8474*t9340*var3[6] - 10.*t10291*t18319*t18337*var3[10] - 10.*t10004*t9890*t9952*var3[14] - 5.*t8759*t8805*t9859*var3[18] - 1.*t5543*t8754*var3[22];
  p_output1[3]=var2[6] - 1.*t18735*var3[3] - 5.*t18390*t8474*t9340*var3[7] - 10.*t10291*t18319*t18337*var3[11] - 10.*t10004*t9890*t9952*var3[15] - 5.*t8759*t8805*t9859*var3[19] - 1.*t5543*t8754*var3[23];
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
