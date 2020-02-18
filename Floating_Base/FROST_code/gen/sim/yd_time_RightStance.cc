/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:21:09 GMT-05:00
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
  double t299;
  double t300;
  double t302;
  double t307;
  double t308;
  double t309;
  double t301;
  double t303;
  double t305;
  double t306;
  double t311;
  double t312;
  double t313;
  double t315;
  double t316;
  double t317;
  double t319;
  double t321;
  t299 = -1.*var3[1];
  t300 = var3[0] + t299;
  t302 = t299 + var1[0];
  t307 = 1/t300;
  t308 = -1.*t307*t302;
  t309 = 1. + t308;
  t301 = Power(t300,-5);
  t303 = Power(t302,5);
  t305 = Power(t300,-4);
  t306 = Power(t302,4);
  t311 = Power(t300,-3);
  t312 = Power(t302,3);
  t313 = Power(t309,2);
  t315 = Power(t300,-2);
  t316 = Power(t302,2);
  t317 = Power(t309,3);
  t319 = Power(t309,4);
  t321 = Power(t309,5);
  p_output1[0]=t321*var2[0] + 5.*t302*t307*t319*var2[4] + 10.*t315*t316*t317*var2[8] + 10.*t311*t312*t313*var2[12] + 5.*t305*t306*t309*var2[16] + t301*t303*var2[20];
  p_output1[1]=t321*var2[1] + 5.*t302*t307*t319*var2[5] + 10.*t315*t316*t317*var2[9] + 10.*t311*t312*t313*var2[13] + 5.*t305*t306*t309*var2[17] + t301*t303*var2[21];
  p_output1[2]=t321*var2[2] + 5.*t302*t307*t319*var2[6] + 10.*t315*t316*t317*var2[10] + 10.*t311*t312*t313*var2[14] + 5.*t305*t306*t309*var2[18] + t301*t303*var2[22];
  p_output1[3]=t321*var2[3] + 5.*t302*t307*t319*var2[7] + 10.*t315*t316*t317*var2[11] + 10.*t311*t312*t313*var2[15] + 5.*t305*t306*t309*var2[19] + t301*t303*var2[23];
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
