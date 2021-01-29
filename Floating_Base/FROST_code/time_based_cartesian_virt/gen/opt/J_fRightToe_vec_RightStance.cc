/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:36 GMT-05:00
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
  double t902;
  double t1103;
  double t759;
  double t1142;
  double t65;
  double t933;
  double t1412;
  double t1518;
  double t1664;
  double t1734;
  double t1856;
  double t1858;
  double t468;
  double t596;
  double t2669;
  double t3073;
  double t3147;
  double t1538;
  double t2056;
  double t2066;
  double t2284;
  double t2480;
  double t2542;
  double t2589;
  double t2600;
  double t3154;
  double t3156;
  double t3357;
  double t3391;
  double t3400;
  double t3691;
  double t3757;
  double t3767;
  double t3827;
  double t4275;
  double t4301;
  double t4303;
  double t3848;
  double t3851;
  double t3886;
  double t4016;
  double t4092;
  double t4117;
  double t4125;
  double t4176;
  double t4309;
  double t4391;
  double t4396;
  double t4401;
  double t4501;
  double t4507;
  double t4508;
  double t4542;
  double t4563;
  double t4617;
  double t4793;
  double t4844;
  double t4884;
  double t4905;
  t902 = Cos(var1[3]);
  t1103 = Sin(var1[2]);
  t759 = Cos(var1[2]);
  t1142 = Sin(var1[3]);
  t65 = Cos(var1[4]);
  t933 = -1.*t759*t902;
  t1412 = t1103*t1142;
  t1518 = t933 + t1412;
  t1664 = t902*t1103;
  t1734 = t759*t1142;
  t1856 = t1664 + t1734;
  t1858 = Sin(var1[4]);
  t468 = -1.*t65;
  t596 = 1. + t468;
  t2669 = -1.*t902*t1103;
  t3073 = -1.*t759*t1142;
  t3147 = t2669 + t3073;
  t1538 = 0.4*t596*t1518;
  t2056 = -0.4*t1856*t1858;
  t2066 = t65*t1518;
  t2284 = t1856*t1858;
  t2480 = t2066 + t2284;
  t2542 = 0.8*t2480;
  t2589 = t1538 + t2056 + t2542;
  t2600 = var2[2]*t2589;
  t3154 = 0.4*t596*t3147;
  t3156 = -0.4*t1518*t1858;
  t3357 = t65*t3147;
  t3391 = t1518*t1858;
  t3400 = t3357 + t3391;
  t3691 = 0.8*t3400;
  t3757 = t3154 + t3156 + t3691;
  t3767 = var2[0]*t3757;
  t3827 = t2600 + t3767;
  t4275 = t759*t902;
  t4301 = -1.*t1103*t1142;
  t4303 = t4275 + t4301;
  t3848 = -0.4*t65*t1518;
  t3851 = 0.4*t3147*t1858;
  t3886 = -1.*t3147*t1858;
  t4016 = t2066 + t3886;
  t4092 = 0.8*t4016;
  t4117 = t3848 + t3851 + t4092;
  t4125 = var2[2]*t4117;
  t4176 = -0.4*t65*t3147;
  t4309 = 0.4*t4303*t1858;
  t4391 = -1.*t4303*t1858;
  t4396 = t3357 + t4391;
  t4401 = 0.8*t4396;
  t4501 = t4176 + t4309 + t4401;
  t4507 = var2[0]*t4501;
  t4508 = t4125 + t4507;
  t4542 = 0.4*t596*t4303;
  t4563 = -0.4*t3147*t1858;
  t4617 = t65*t4303;
  t4793 = t3147*t1858;
  t4844 = t4617 + t4793;
  t4884 = 0.8*t4844;
  t4905 = t4542 + t4563 + t4884;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t3827;
  p_output1[3]=t3827;
  p_output1[4]=t4508;
  p_output1[5]=t4905;
  p_output1[6]=t3757;
  p_output1[7]=t3827;
  p_output1[8]=t3827;
  p_output1[9]=t4508;
  p_output1[10]=t4905;
  p_output1[11]=t3757;
  p_output1[12]=t4508;
  p_output1[13]=t4508;
  p_output1[14]=(t4309 + 0.4*t1856*t65 + 0.8*(t4391 - 1.*t1856*t65))*var2[0] + (t3851 + 0.4*t4303*t65 + 0.8*(t3886 - 1.*t4303*t65))*var2[2];
  p_output1[15]=0.4*t1856*t1858 + 0.8*(-1.*t1856*t1858 + t4617) - 0.4*t4303*t65;
  p_output1[16]=t4501;
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
