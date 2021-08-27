/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 15:18:20 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t3019;
  double t3015;
  double t3016;
  double t3020;
  double t3006;
  double t3018;
  double t3021;
  double t3022;
  double t3024;
  double t3025;
  double t3026;
  double t3027;
  double t3007;
  double t3010;
  double t3013;
  double t3014;
  double t3028;
  double t3031;
  double t3039;
  double t3040;
  double t3041;
  t3019 = Cos(var1[2]);
  t3015 = Cos(var1[5]);
  t3016 = Sin(var1[2]);
  t3020 = Sin(var1[5]);
  t3006 = Cos(var1[6]);
  t3018 = t3015*t3016;
  t3021 = t3019*t3020;
  t3022 = t3018 + t3021;
  t3024 = t3019*t3015;
  t3025 = -1.*t3016*t3020;
  t3026 = t3024 + t3025;
  t3027 = Sin(var1[6]);
  t3007 = -1.*t3006;
  t3010 = 1. + t3007;
  t3013 = 0.4*t3010;
  t3014 = 0. + t3013;
  t3028 = -0.4*t3027;
  t3031 = 0. + t3028;
  t3039 = -1.*t3015*t3016;
  t3040 = -1.*t3019*t3020;
  t3041 = t3039 + t3040;
  p_output1[0]=0. + t3014*t3022 + 0.4*(t3006*t3022 + t3026*t3027) + t3026*t3031 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t3014*t3026 + t3031*t3041 + 0.4*(t3006*t3026 + t3027*t3041) + var1[1];
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_q2_left.hh"

namespace SymExpression
{

void p_q2_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
