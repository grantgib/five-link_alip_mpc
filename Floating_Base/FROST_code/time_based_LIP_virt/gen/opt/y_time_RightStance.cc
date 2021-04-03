/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:01 GMT-05:00
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
  double t389;
  double t512;
  double t2294;
  double t3929;
  double t4288;
  double t6107;
  double t6123;
  double t6324;
  double t6331;
  double t7513;
  double t7524;
  double t7525;
  double t513;
  double t6569;
  double t7082;
  double t7396;
  double t8020;
  double t8278;
  double t8648;
  double t9523;
  double t9598;
  double t9747;
  double t12979;
  double t12980;
  double t12981;
  double t13004;
  double t13005;
  double t13006;
  double t13008;
  double t13010;
  double t13076;
  double t13078;
  double t13075;
  double t13079;
  double t13072;
  double t13077;
  double t13080;
  double t13081;
  double t13083;
  double t13084;
  double t13089;
  double t13090;
  double t13073;
  double t13074;
  double t13092;
  double t13093;
  double t13094;
  double t13107;
  double t13108;
  double t13109;
  double t13110;
  double t13111;
  double t13115;
  double t13119;
  double t13120;
  double t13121;
  double t13122;
  double t13116;
  double t13117;
  double t13141;
  double t13142;
  double t13143;
  double t13153;
  double t13154;
  double t13155;
  double t13144;
  double t13145;
  double t13146;
  double t13147;
  double t13148;
  double t13118;
  double t13123;
  double t13124;
  double t13125;
  double t13126;
  double t13096;
  double t13097;
  double t13099;
  double t13100;
  double t13102;
  double t13103;
  double t13104;
  double t13105;
  double t13112;
  double t13113;
  double t13127;
  double t13128;
  t389 = -1.*var4[1];
  t512 = var4[0] + t389;
  t2294 = -1. + var5[0];
  t3929 = -1. + var6[0];
  t4288 = 1/t3929;
  t6107 = -1.*var1[0];
  t6123 = t6107 + var1[1];
  t6324 = t2294*t4288*t6123;
  t6331 = t389 + var1[0] + t6324;
  t7513 = 1/t512;
  t7524 = -1.*t7513*t6331;
  t7525 = 1. + t7524;
  t513 = Power(t512,-7);
  t6569 = Power(t6331,7);
  t7082 = Power(t512,-6);
  t7396 = Power(t6331,6);
  t8020 = Power(t512,-5);
  t8278 = Power(t6331,5);
  t8648 = Power(t7525,2);
  t9523 = Power(t512,-4);
  t9598 = Power(t6331,4);
  t9747 = Power(t7525,3);
  t12979 = Power(t512,-3);
  t12980 = Power(t6331,3);
  t12981 = Power(t7525,4);
  t13004 = Power(t512,-2);
  t13005 = Power(t6331,2);
  t13006 = Power(t7525,5);
  t13008 = Power(t7525,6);
  t13010 = Power(t7525,7);
  t13076 = Cos(var2[3]);
  t13078 = Sin(var2[2]);
  t13075 = Cos(var2[2]);
  t13079 = Sin(var2[3]);
  t13072 = Cos(var2[4]);
  t13077 = t13075*t13076;
  t13080 = -1.*t13078*t13079;
  t13081 = t13077 + t13080;
  t13083 = -1.*t13076*t13078;
  t13084 = -1.*t13075*t13079;
  t13089 = t13083 + t13084;
  t13090 = Sin(var2[4]);
  t13073 = -1.*t13072;
  t13074 = 1. + t13073;
  t13092 = t13072*t13081;
  t13093 = t13089*t13090;
  t13094 = t13092 + t13093;
  t13107 = Cos(var2[5]);
  t13108 = t13075*t13107;
  t13109 = Sin(var2[5]);
  t13110 = -1.*t13078*t13109;
  t13111 = t13108 + t13110;
  t13115 = Cos(var2[6]);
  t13119 = -1.*t13107*t13078;
  t13120 = -1.*t13075*t13109;
  t13121 = t13119 + t13120;
  t13122 = Sin(var2[6]);
  t13116 = -1.*t13115;
  t13117 = 1. + t13116;
  t13141 = t13107*t13078;
  t13142 = t13075*t13109;
  t13143 = t13141 + t13142;
  t13153 = t13076*t13078;
  t13154 = t13075*t13079;
  t13155 = t13153 + t13154;
  t13144 = 0.4*t13117*t13143;
  t13145 = -0.4*t13111*t13122;
  t13146 = t13115*t13143;
  t13147 = t13111*t13122;
  t13148 = t13146 + t13147;
  t13118 = 0.4*t13117*t13111;
  t13123 = -0.4*t13121*t13122;
  t13124 = t13115*t13111;
  t13125 = t13121*t13122;
  t13126 = t13124 + t13125;
  t13096 = 0.24*t13075;
  t13097 = var2[1] + t13096;
  t13099 = 0.11*t13081;
  t13100 = var2[1] + t13099;
  t13102 = 0.4*t13074*t13081;
  t13103 = -0.4*t13089*t13090;
  t13104 = 0.64*t13094;
  t13105 = var2[1] + t13102 + t13103 + t13104;
  t13112 = 0.11*t13111;
  t13113 = var2[1] + t13112;
  t13127 = 0.64*t13126;
  t13128 = var2[1] + t13118 + t13123 + t13127;
  p_output1[0]=var2[2] - 1.*t13010*var3[0] - 7.*t13008*t6331*t7513*var3[4] - 21.*t13004*t13005*t13006*var3[8] - 35.*t12979*t12980*t12981*var3[12] - 35.*t9523*t9598*t9747*var3[16] - 21.*t8020*t8278*t8648*var3[20] - 7.*t7082*t7396*t7525*var3[24] - 1.*t513*t6569*var3[28];
  p_output1[1]=-0.4*t13074*t13081 + 0.4*t13089*t13090 - 0.8*t13094 + 0.03125*(12.*t13097 + 6.8*t13100 + 3.2*t13105 + 6.8*t13113 + 3.2*t13128) - 1.*var2[1] - 1.*t13010*var3[1] - 7.*t13008*t6331*t7513*var3[5] - 21.*t13004*t13005*t13006*var3[9] - 35.*t12979*t12980*t12981*var3[13] - 35.*t9523*t9598*t9747*var3[17] - 21.*t8020*t8278*t8648*var3[21] - 7.*t7082*t7396*t7525*var3[25] - 1.*t513*t6569*var3[29];
  p_output1[2]=t13144 + t13145 + 0.8*t13148 + var2[0] + 0.03125*(-12.*(0.24*t13078 + var2[0]) - 6.8*(0.11*t13143 + var2[0]) - 3.2*(t13144 + t13145 + 0.64*t13148 + var2[0]) - 6.8*(0.11*t13155 + var2[0]) - 3.2*(-0.4*t13081*t13090 + 0.4*t13074*t13155 + 0.64*(t13081*t13090 + t13072*t13155) + var2[0])) - 1.*t13010*var3[2] - 7.*t13008*t6331*t7513*var3[6] - 21.*t13004*t13005*t13006*var3[10] - 35.*t12979*t12980*t12981*var3[14] - 35.*t9523*t9598*t9747*var3[18] - 21.*t8020*t8278*t8648*var3[22] - 7.*t7082*t7396*t7525*var3[26] - 1.*t513*t6569*var3[30];
  p_output1[3]=t13118 + t13123 + 0.8*t13126 + 0.03125*(-12.*t13097 - 6.8*t13100 - 3.2*t13105 - 6.8*t13113 - 3.2*t13128) + var2[1] - 1.*t13010*var3[3] - 7.*t13008*t6331*t7513*var3[7] - 21.*t13004*t13005*t13006*var3[11] - 35.*t12979*t12980*t12981*var3[15] - 35.*t9523*t9598*t9747*var3[19] - 21.*t8020*t8278*t8648*var3[23] - 7.*t7082*t7396*t7525*var3[27] - 1.*t513*t6569*var3[31];
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
    ( !(mrows == 32 && ncols == 1) && 
      !(mrows == 1 && ncols == 32))) 
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
