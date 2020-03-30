/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:50:57 GMT-04:00
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
  double t7424;
  double t9954;
  double t6951;
  double t10208;
  double t788;
  double t8255;
  double t10812;
  double t12340;
  double t14611;
  double t14612;
  double t14994;
  double t15068;
  double t816;
  double t5471;
  double t17864;
  double t17866;
  double t17867;
  double t12982;
  double t16023;
  double t16318;
  double t17084;
  double t17832;
  double t17833;
  double t17841;
  double t17852;
  double t17891;
  double t17923;
  double t17924;
  double t17934;
  double t17959;
  double t17960;
  double t17961;
  double t17964;
  double t17965;
  double t18049;
  double t18050;
  double t18051;
  double t17970;
  double t17979;
  double t17998;
  double t18003;
  double t18004;
  double t18027;
  double t18036;
  double t18044;
  double t18052;
  double t18056;
  double t18057;
  double t18061;
  double t18062;
  double t18065;
  double t18066;
  double t18067;
  double t18073;
  double t18074;
  double t18078;
  double t18079;
  double t18080;
  double t18081;
  t7424 = Cos(var1[3]);
  t9954 = Sin(var1[2]);
  t6951 = Cos(var1[2]);
  t10208 = Sin(var1[3]);
  t788 = Cos(var1[4]);
  t8255 = -1.*t6951*t7424;
  t10812 = t9954*t10208;
  t12340 = t8255 + t10812;
  t14611 = t7424*t9954;
  t14612 = t6951*t10208;
  t14994 = t14611 + t14612;
  t15068 = Sin(var1[4]);
  t816 = -1.*t788;
  t5471 = 1. + t816;
  t17864 = -1.*t7424*t9954;
  t17866 = -1.*t6951*t10208;
  t17867 = t17864 + t17866;
  t12982 = 0.4*t5471*t12340;
  t16023 = -0.4*t14994*t15068;
  t16318 = t788*t12340;
  t17084 = t14994*t15068;
  t17832 = t16318 + t17084;
  t17833 = 0.8*t17832;
  t17841 = t12982 + t16023 + t17833;
  t17852 = var2[2]*t17841;
  t17891 = 0.4*t5471*t17867;
  t17923 = -0.4*t12340*t15068;
  t17924 = t788*t17867;
  t17934 = t12340*t15068;
  t17959 = t17924 + t17934;
  t17960 = 0.8*t17959;
  t17961 = t17891 + t17923 + t17960;
  t17964 = var2[0]*t17961;
  t17965 = t17852 + t17964;
  t18049 = t6951*t7424;
  t18050 = -1.*t9954*t10208;
  t18051 = t18049 + t18050;
  t17970 = -0.4*t788*t12340;
  t17979 = 0.4*t17867*t15068;
  t17998 = -1.*t17867*t15068;
  t18003 = t16318 + t17998;
  t18004 = 0.8*t18003;
  t18027 = t17970 + t17979 + t18004;
  t18036 = var2[2]*t18027;
  t18044 = -0.4*t788*t17867;
  t18052 = 0.4*t18051*t15068;
  t18056 = -1.*t18051*t15068;
  t18057 = t17924 + t18056;
  t18061 = 0.8*t18057;
  t18062 = t18044 + t18052 + t18061;
  t18065 = var2[0]*t18062;
  t18066 = t18036 + t18065;
  t18067 = 0.4*t5471*t18051;
  t18073 = -0.4*t17867*t15068;
  t18074 = t788*t18051;
  t18078 = t17867*t15068;
  t18079 = t18074 + t18078;
  t18080 = 0.8*t18079;
  t18081 = t18067 + t18073 + t18080;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t17965;
  p_output1[3]=t17965;
  p_output1[4]=t18066;
  p_output1[5]=t18081;
  p_output1[6]=t17961;
  p_output1[7]=t17965;
  p_output1[8]=t17965;
  p_output1[9]=t18066;
  p_output1[10]=t18081;
  p_output1[11]=t17961;
  p_output1[12]=t18066;
  p_output1[13]=t18066;
  p_output1[14]=(t18052 + 0.4*t14994*t788 + 0.8*(t18056 - 1.*t14994*t788))*var2[0] + (t17979 + 0.4*t18051*t788 + 0.8*(t17998 - 1.*t18051*t788))*var2[2];
  p_output1[15]=0.4*t14994*t15068 + 0.8*(-1.*t14994*t15068 + t18074) - 0.4*t18051*t788;
  p_output1[16]=t18062;
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
