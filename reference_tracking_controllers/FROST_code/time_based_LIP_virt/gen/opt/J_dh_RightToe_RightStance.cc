/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:36:51 GMT-05:00
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
  double t4064;
  double t3937;
  double t3938;
  double t5915;
  double t3936;
  double t3939;
  double t5954;
  double t5993;
  double t8521;
  double t9360;
  double t9498;
  double t9558;
  double t9678;
  double t9971;
  double t9980;
  double t9983;
  double t9738;
  double t9742;
  double t9776;
  double t9995;
  double t10009;
  double t10102;
  double t10132;
  double t10133;
  double t8477;
  double t9568;
  double t9680;
  double t9681;
  double t9699;
  double t9706;
  double t9726;
  double t10143;
  double t10144;
  double t10145;
  double t10156;
  double t10172;
  double t10188;
  double t10202;
  double t10203;
  double t10204;
  double t10205;
  double t10206;
  double t10207;
  double t10208;
  double t10540;
  double t10790;
  double t10957;
  double t10970;
  double t11076;
  double t11124;
  double t11126;
  double t10530;
  double t10536;
  double t10621;
  double t10654;
  double t10666;
  double t10680;
  double t10787;
  double t11155;
  double t11187;
  double t11196;
  t4064 = Cos(var1[2]);
  t3937 = Cos(var1[3]);
  t3938 = Sin(var1[2]);
  t5915 = Sin(var1[3]);
  t3936 = Cos(var1[4]);
  t3939 = -1.*t3937*t3938;
  t5954 = -1.*t4064*t5915;
  t5993 = t3939 + t5954;
  t8521 = t4064*t3937;
  t9360 = -1.*t3938*t5915;
  t9498 = t8521 + t9360;
  t9558 = Sin(var1[4]);
  t9678 = t3936*t5993;
  t9971 = -1.*t4064*t3937;
  t9980 = t3938*t5915;
  t9983 = t9971 + t9980;
  t9738 = -1.*t3936;
  t9742 = 1. + t9738;
  t9776 = 0.4*t9742*t5993;
  t9995 = -0.4*t9983*t9558;
  t10009 = t9983*t9558;
  t10102 = t9678 + t10009;
  t10132 = 0.8*t10102;
  t10133 = t9776 + t9995 + t10132;
  t8477 = -0.4*t3936*t5993;
  t9568 = 0.4*t9498*t9558;
  t9680 = -1.*t9498*t9558;
  t9681 = t9678 + t9680;
  t9699 = 0.8*t9681;
  t9706 = t8477 + t9568 + t9699;
  t9726 = var2[4]*t9706;
  t10143 = var2[2]*t10133;
  t10144 = var2[3]*t10133;
  t10145 = t9726 + t10143 + t10144;
  t10156 = t3937*t3938;
  t10172 = t4064*t5915;
  t10188 = t10156 + t10172;
  t10202 = 0.4*t9742*t9498;
  t10203 = -0.4*t5993*t9558;
  t10204 = t3936*t9498;
  t10205 = t5993*t9558;
  t10206 = t10204 + t10205;
  t10207 = 0.8*t10206;
  t10208 = t10202 + t10203 + t10207;
  t10540 = t3936*t9983;
  t10790 = 0.4*t9742*t9983;
  t10957 = -0.4*t10188*t9558;
  t10970 = t10188*t9558;
  t11076 = t10540 + t10970;
  t11124 = 0.8*t11076;
  t11126 = t10790 + t10957 + t11124;
  t10530 = -0.4*t3936*t9983;
  t10536 = 0.4*t5993*t9558;
  t10621 = -1.*t5993*t9558;
  t10654 = t10540 + t10621;
  t10666 = 0.8*t10654;
  t10680 = t10530 + t10536 + t10666;
  t10787 = var2[4]*t10680;
  t11155 = var2[2]*t11126;
  t11187 = var2[3]*t11126;
  t11196 = t10787 + t11155 + t11187;
  p_output1[0]=t10145;
  p_output1[1]=t10145;
  p_output1[2]=t9706*var2[2] + t9706*var2[3] + (0.4*t10188*t3936 + t9568 + 0.8*(-1.*t10188*t3936 + t9680))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t10208;
  p_output1[5]=t10208;
  p_output1[6]=-0.4*t3936*t9498 + 0.4*t10188*t9558 + 0.8*(t10204 - 1.*t10188*t9558);
  p_output1[7]=t11196;
  p_output1[8]=t11196;
  p_output1[9]=t10680*var2[2] + t10680*var2[3] + (t10536 + 0.4*t3936*t9498 + 0.8*(t10621 - 1.*t3936*t9498))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t10133;
  p_output1[12]=t10133;
  p_output1[13]=t9706;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RightToe_RightStance.hh"

namespace RightStance
{

void J_dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
