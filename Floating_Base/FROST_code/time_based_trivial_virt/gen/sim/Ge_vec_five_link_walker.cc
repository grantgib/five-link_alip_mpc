/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 16:57:26 GMT-04:00
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
  double t627;
  double t789;
  double t2118;
  double t2148;
  double t3952;
  double t3957;
  double t3959;
  double t3961;
  double t3977;
  double t3978;
  double t3979;
  double t3980;
  double t3993;
  double t3994;
  double t4004;
  double t4005;
  double t4008;
  double t4011;
  double t4016;
  double t4018;
  double t4019;
  double t4020;
  double t3960;
  double t3971;
  double t3972;
  double t3975;
  double t3982;
  double t3983;
  double t3985;
  double t3986;
  double t3988;
  double t3990;
  double t3992;
  double t4087;
  double t4093;
  double t4094;
  double t4010;
  double t4012;
  double t4013;
  double t4015;
  double t4026;
  double t4038;
  double t4045;
  double t4057;
  double t4058;
  double t4062;
  double t4068;
  double t4123;
  double t4124;
  double t4125;
  t627 = Sin(var1[2]);
  t789 = Cos(var1[3]);
  t2118 = -1.*t789*t627;
  t2148 = Cos(var1[2]);
  t3952 = Sin(var1[3]);
  t3957 = -1.*t2148*t3952;
  t3959 = t2118 + t3957;
  t3961 = Cos(var1[4]);
  t3977 = -1.*t2148*t789;
  t3978 = t627*t3952;
  t3979 = t3977 + t3978;
  t3980 = Sin(var1[4]);
  t3993 = Cos(var1[5]);
  t3994 = -1.*t3993*t627;
  t4004 = Sin(var1[5]);
  t4005 = -1.*t2148*t4004;
  t4008 = t3994 + t4005;
  t4011 = Cos(var1[6]);
  t4016 = -1.*t2148*t3993;
  t4018 = t627*t4004;
  t4019 = t4016 + t4018;
  t4020 = Sin(var1[6]);
  t3960 = -7.33788*t3959;
  t3971 = -1.*t3961;
  t3972 = 1. + t3971;
  t3975 = 0.4*t3972*t3959;
  t3982 = -0.4*t3979*t3980;
  t3983 = t3961*t3959;
  t3985 = t3979*t3980;
  t3986 = t3983 + t3985;
  t3988 = 0.64*t3986;
  t3990 = t3975 + t3982 + t3988;
  t3992 = -31.392000000000003*t3990;
  t4087 = t2148*t789;
  t4093 = -1.*t627*t3952;
  t4094 = t4087 + t4093;
  t4010 = -7.33788*t4008;
  t4012 = -1.*t4011;
  t4013 = 1. + t4012;
  t4015 = 0.4*t4013*t4008;
  t4026 = -0.4*t4019*t4020;
  t4038 = t4011*t4008;
  t4045 = t4019*t4020;
  t4057 = t4038 + t4045;
  t4058 = 0.64*t4057;
  t4062 = t4015 + t4026 + t4058;
  t4068 = -31.392000000000003*t4062;
  t4123 = t2148*t3993;
  t4124 = -1.*t627*t4004;
  t4125 = t4123 + t4124;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=t3960 + t3992 + t4010 + t4068 + 28.252799999999997*t627;
  p_output1[3]=t3960 + t3992;
  p_output1[4]=-31.392000000000003*(-0.4*t3959*t3961 + 0.4*t3980*t4094 + 0.64*(t3983 - 1.*t3980*t4094));
  p_output1[5]=t4010 + t4068;
  p_output1[6]=-31.392000000000003*(-0.4*t4008*t4011 + 0.4*t4020*t4125 + 0.64*(t4038 - 1.*t4020*t4125));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_five_link_walker.hh"

namespace SymFunction
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
