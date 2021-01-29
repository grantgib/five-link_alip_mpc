/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:43 GMT-05:00
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
  double t4021;
  double t4743;
  double t2709;
  double t4921;
  double t207;
  double t4696;
  double t4939;
  double t4946;
  double t5248;
  double t5263;
  double t5269;
  double t5293;
  double t233;
  double t754;
  double t5228;
  double t5330;
  double t5333;
  double t5367;
  double t5371;
  double t5380;
  double t5392;
  double t5499;
  double t5520;
  double t5586;
  double t5775;
  double t5859;
  double t5864;
  double t5883;
  double t5848;
  double t5890;
  double t5908;
  double t5927;
  double t5931;
  double t5976;
  t4021 = Cos(var1[3]);
  t4743 = Sin(var1[2]);
  t2709 = Cos(var1[2]);
  t4921 = Sin(var1[3]);
  t207 = Cos(var1[4]);
  t4696 = t2709*t4021;
  t4939 = -1.*t4743*t4921;
  t4946 = t4696 + t4939;
  t5248 = -1.*t4021*t4743;
  t5263 = -1.*t2709*t4921;
  t5269 = t5248 + t5263;
  t5293 = Sin(var1[4]);
  t233 = -1.*t207;
  t754 = 1. + t233;
  t5228 = 0.4*t754*t4946;
  t5330 = -0.4*t5269*t5293;
  t5333 = t207*t4946;
  t5367 = t5269*t5293;
  t5371 = t5333 + t5367;
  t5380 = 0.8*t5371;
  t5392 = t5228 + t5330 + t5380;
  t5499 = t4021*t4743;
  t5520 = t2709*t4921;
  t5586 = t5499 + t5520;
  t5775 = t207*t5269;
  t5859 = -1.*t2709*t4021;
  t5864 = t4743*t4921;
  t5883 = t5859 + t5864;
  t5848 = 0.4*t754*t5269;
  t5890 = -0.4*t5883*t5293;
  t5908 = t5883*t5293;
  t5927 = t5775 + t5908;
  t5931 = 0.8*t5927;
  t5976 = t5848 + t5890 + t5931;
  p_output1[0]=var2[0] + t5392*var2[2] + t5392*var2[3] + (-0.4*t207*t4946 + 0.4*t5293*t5586 + 0.8*(t5333 - 1.*t5293*t5586))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t5976*var2[2] + t5976*var2[3] + (-0.4*t207*t5269 + 0.4*t4946*t5293 + 0.8*(-1.*t4946*t5293 + t5775))*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightToe_RightStance.hh"

namespace RightStance
{

void dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
