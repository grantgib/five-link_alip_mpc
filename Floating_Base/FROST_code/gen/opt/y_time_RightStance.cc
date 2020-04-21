/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:57:58 GMT-04:00
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
  double t1089;
  double t1090;
  double t1097;
  double t1098;
  double t1099;
  double t1100;
  double t1101;
  double t1102;
  double t1103;
  double t1108;
  double t1113;
  double t1114;
  double t1096;
  double t1104;
  double t1106;
  double t1107;
  double t1116;
  double t1118;
  double t1152;
  double t1154;
  double t1155;
  double t1156;
  double t1158;
  double t1160;
  t1089 = -1.*var4[1];
  t1090 = var4[0] + t1089;
  t1097 = -1. + var5[0];
  t1098 = -1. + var6[0];
  t1099 = 1/t1098;
  t1100 = -1.*var1[0];
  t1101 = t1100 + var1[1];
  t1102 = t1097*t1099*t1101;
  t1103 = t1089 + var1[0] + t1102;
  t1108 = 1/t1090;
  t1113 = -1.*t1108*t1103;
  t1114 = 1. + t1113;
  t1096 = Power(t1090,-5);
  t1104 = Power(t1103,5);
  t1106 = Power(t1090,-4);
  t1107 = Power(t1103,4);
  t1116 = Power(t1090,-3);
  t1118 = Power(t1103,3);
  t1152 = Power(t1114,2);
  t1154 = Power(t1090,-2);
  t1155 = Power(t1103,2);
  t1156 = Power(t1114,3);
  t1158 = Power(t1114,4);
  t1160 = Power(t1114,5);
  p_output1[0]=var2[3] - 1.*t1160*var3[0] - 5.*t1103*t1108*t1158*var3[4] - 10.*t1154*t1155*t1156*var3[8] - 10.*t1116*t1118*t1152*var3[12] - 5.*t1106*t1107*t1114*var3[16] - 1.*t1096*t1104*var3[20];
  p_output1[1]=var2[4] - 1.*t1160*var3[1] - 5.*t1103*t1108*t1158*var3[5] - 10.*t1154*t1155*t1156*var3[9] - 10.*t1116*t1118*t1152*var3[13] - 5.*t1106*t1107*t1114*var3[17] - 1.*t1096*t1104*var3[21];
  p_output1[2]=var2[5] - 1.*t1160*var3[2] - 5.*t1103*t1108*t1158*var3[6] - 10.*t1154*t1155*t1156*var3[10] - 10.*t1116*t1118*t1152*var3[14] - 5.*t1106*t1107*t1114*var3[18] - 1.*t1096*t1104*var3[22];
  p_output1[3]=var2[6] - 1.*t1160*var3[3] - 5.*t1103*t1108*t1158*var3[7] - 10.*t1154*t1155*t1156*var3[11] - 10.*t1116*t1118*t1152*var3[15] - 5.*t1106*t1107*t1114*var3[19] - 1.*t1096*t1104*var3[23];
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
