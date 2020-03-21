/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:12 GMT-04:00
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
  double t4752;
  double t4733;
  double t4742;
  double t8862;
  double t4582;
  double t4745;
  double t8864;
  double t8890;
  double t8894;
  double t8898;
  double t8953;
  double t8958;
  double t4588;
  double t4664;
  double t4718;
  double t4723;
  double t8967;
  double t8976;
  double t9041;
  double t9042;
  double t9057;
  t4752 = Cos(var1[2]);
  t4733 = Cos(var1[3]);
  t4742 = Sin(var1[2]);
  t8862 = Sin(var1[3]);
  t4582 = Cos(var1[4]);
  t4745 = t4733*t4742;
  t8864 = t4752*t8862;
  t8890 = t4745 + t8864;
  t8894 = t4752*t4733;
  t8898 = -1.*t4742*t8862;
  t8953 = t8894 + t8898;
  t8958 = Sin(var1[4]);
  t4588 = -1.*t4582;
  t4664 = 1. + t4588;
  t4718 = 0.4*t4664;
  t4723 = 0. + t4718;
  t8967 = -0.4*t8958;
  t8976 = 0. + t8967;
  t9041 = -1.*t4733*t4742;
  t9042 = -1.*t4752*t8862;
  t9057 = t9041 + t9042;
  p_output1[0]=0. + t4723*t8890 + 0.4*(t4582*t8890 + t8953*t8958) + t8953*t8976 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t4723*t8953 + t8976*t9057 + 0.4*(t4582*t8953 + t8958*t9057) + var1[1];
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

#include "p_q2_right.hh"

namespace SymExpression
{

void p_q2_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
