/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 16:57:47 GMT-04:00
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
  double t4238;
  double t4239;
  double t4241;
  double t4246;
  double t4247;
  double t4248;
  double t4240;
  double t4242;
  double t4244;
  double t4245;
  double t4250;
  double t4251;
  double t4252;
  double t4254;
  double t4255;
  double t4256;
  double t4258;
  double t4260;
  t4238 = -1.*var3[1];
  t4239 = var3[0] + t4238;
  t4241 = t4238 + var1[0];
  t4246 = 1/t4239;
  t4247 = -1.*t4246*t4241;
  t4248 = 1. + t4247;
  t4240 = Power(t4239,-5);
  t4242 = Power(t4241,5);
  t4244 = Power(t4239,-4);
  t4245 = Power(t4241,4);
  t4250 = Power(t4239,-3);
  t4251 = Power(t4241,3);
  t4252 = Power(t4248,2);
  t4254 = Power(t4239,-2);
  t4255 = Power(t4241,2);
  t4256 = Power(t4248,3);
  t4258 = Power(t4248,4);
  t4260 = Power(t4248,5);
  p_output1[0]=t4260*var2[0] + 5.*t4241*t4246*t4258*var2[4] + 10.*t4254*t4255*t4256*var2[8] + 10.*t4250*t4251*t4252*var2[12] + 5.*t4244*t4245*t4248*var2[16] + t4240*t4242*var2[20];
  p_output1[1]=t4260*var2[1] + 5.*t4241*t4246*t4258*var2[5] + 10.*t4254*t4255*t4256*var2[9] + 10.*t4250*t4251*t4252*var2[13] + 5.*t4244*t4245*t4248*var2[17] + t4240*t4242*var2[21];
  p_output1[2]=t4260*var2[2] + 5.*t4241*t4246*t4258*var2[6] + 10.*t4254*t4255*t4256*var2[10] + 10.*t4250*t4251*t4252*var2[14] + 5.*t4244*t4245*t4248*var2[18] + t4240*t4242*var2[22];
  p_output1[3]=t4260*var2[3] + 5.*t4241*t4246*t4258*var2[7] + 10.*t4254*t4255*t4256*var2[11] + 10.*t4250*t4251*t4252*var2[15] + 5.*t4244*t4245*t4248*var2[19] + t4240*t4242*var2[23];
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
