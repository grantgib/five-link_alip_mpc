/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:51:28 GMT-04:00
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
  double t570;
  double t703;
  double t785;
  double t843;
  double t861;
  double t1352;
  double t1594;
  double t1748;
  double t2103;
  double t2154;
  double t2342;
  double t2483;
  double t4070;
  double t4096;
  double t4097;
  double t4099;
  double t4102;
  double t4140;
  double t4155;
  double t4182;
  double t4187;
  double t4194;
  double t1747;
  double t1807;
  double t1881;
  double t2098;
  double t3647;
  double t3846;
  double t3916;
  double t3976;
  double t3982;
  double t4034;
  double t4045;
  double t4274;
  double t4308;
  double t4316;
  double t4117;
  double t4144;
  double t4152;
  double t4154;
  double t4204;
  double t4205;
  double t4210;
  double t4213;
  double t4222;
  double t4233;
  double t4234;
  double t4348;
  double t4349;
  double t4350;
  t570 = Sin(var1[2]);
  t703 = Cos(var1[3]);
  t785 = -1.*t703*t570;
  t843 = Cos(var1[2]);
  t861 = Sin(var1[3]);
  t1352 = -1.*t843*t861;
  t1594 = t785 + t1352;
  t1748 = Cos(var1[4]);
  t2103 = -1.*t843*t703;
  t2154 = t570*t861;
  t2342 = t2103 + t2154;
  t2483 = Sin(var1[4]);
  t4070 = Cos(var1[5]);
  t4096 = -1.*t4070*t570;
  t4097 = Sin(var1[5]);
  t4099 = -1.*t843*t4097;
  t4102 = t4096 + t4099;
  t4140 = Cos(var1[6]);
  t4155 = -1.*t843*t4070;
  t4182 = t570*t4097;
  t4187 = t4155 + t4182;
  t4194 = Sin(var1[6]);
  t1747 = -7.33788*t1594;
  t1807 = -1.*t1748;
  t1881 = 1. + t1807;
  t2098 = 0.4*t1881*t1594;
  t3647 = -0.4*t2342*t2483;
  t3846 = t1748*t1594;
  t3916 = t2342*t2483;
  t3976 = t3846 + t3916;
  t3982 = 0.64*t3976;
  t4034 = t2098 + t3647 + t3982;
  t4045 = -31.392000000000003*t4034;
  t4274 = t843*t703;
  t4308 = -1.*t570*t861;
  t4316 = t4274 + t4308;
  t4117 = -7.33788*t4102;
  t4144 = -1.*t4140;
  t4152 = 1. + t4144;
  t4154 = 0.4*t4152*t4102;
  t4204 = -0.4*t4187*t4194;
  t4205 = t4140*t4102;
  t4210 = t4187*t4194;
  t4213 = t4205 + t4210;
  t4222 = 0.64*t4213;
  t4233 = t4154 + t4204 + t4222;
  t4234 = -31.392000000000003*t4233;
  t4348 = t843*t4070;
  t4349 = -1.*t570*t4097;
  t4350 = t4348 + t4349;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=t1747 + t4045 + t4117 + t4234 + 28.252799999999997*t570;
  p_output1[3]=t1747 + t4045;
  p_output1[4]=-31.392000000000003*(-0.4*t1594*t1748 + 0.4*t2483*t4316 + 0.64*(t3846 - 1.*t2483*t4316));
  p_output1[5]=t4117 + t4234;
  p_output1[6]=-31.392000000000003*(-0.4*t4102*t4140 + 0.4*t4194*t4350 + 0.64*(t4205 - 1.*t4194*t4350));
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

namespace RightStance
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
