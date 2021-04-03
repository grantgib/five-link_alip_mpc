/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 15:59:02 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t4282;
  double t4283;
  double t4303;
  double t4317;
  double t4318;
  double t4319;
  double t4302;
  double t4304;
  double t4306;
  double t4316;
  double t4321;
  double t4322;
  double t4323;
  double t4325;
  double t4326;
  double t4327;
  double t4329;
  double t4331;
  t4282 = -1.*var3[1];
  t4283 = var3[0] + t4282;
  t4303 = t4282 + var1[0];
  t4317 = 1/t4283;
  t4318 = -1.*t4317*t4303;
  t4319 = 1. + t4318;
  t4302 = Power(t4283,-5);
  t4304 = Power(t4303,5);
  t4306 = Power(t4283,-4);
  t4316 = Power(t4303,4);
  t4321 = Power(t4283,-3);
  t4322 = Power(t4303,3);
  t4323 = Power(t4319,2);
  t4325 = Power(t4283,-2);
  t4326 = Power(t4303,2);
  t4327 = Power(t4319,3);
  t4329 = Power(t4319,4);
  t4331 = Power(t4319,5);
  p_output1[0]=t4331*var2[0] + 5.*t4303*t4317*t4329*var2[4] + 10.*t4325*t4326*t4327*var2[8] + 10.*t4321*t4322*t4323*var2[12] + 5.*t4306*t4316*t4319*var2[16] + t4302*t4304*var2[20];
  p_output1[1]=t4331*var2[1] + 5.*t4303*t4317*t4329*var2[5] + 10.*t4325*t4326*t4327*var2[9] + 10.*t4321*t4322*t4323*var2[13] + 5.*t4306*t4316*t4319*var2[17] + t4302*t4304*var2[21];
  p_output1[2]=t4331*var2[2] + 5.*t4303*t4317*t4329*var2[6] + 10.*t4325*t4326*t4327*var2[10] + 10.*t4321*t4322*t4323*var2[14] + 5.*t4306*t4316*t4319*var2[18] + t4302*t4304*var2[22];
  p_output1[3]=t4331*var2[3] + 5.*t4303*t4317*t4329*var2[7] + 10.*t4325*t4326*t4327*var2[11] + 10.*t4321*t4322*t4323*var2[15] + 5.*t4306*t4316*t4319*var2[19] + t4302*t4304*var2[23];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "yd_time_RightStance.hh"

namespace SymFunction
{

void yd_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
