/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:40 GMT-05:00
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
  double t778;
  double t804;
  double t733;
  double t807;
  double t376;
  double t783;
  double t812;
  double t816;
  double t1037;
  double t1042;
  double t1062;
  double t1063;
  double t619;
  double t721;
  double t830;
  double t1250;
  double t1257;
  double t1259;
  double t1260;
  double t1276;
  double t2652;
  double t2883;
  double t3080;
  double t3635;
  double t5025;
  double t5026;
  double t5112;
  double t5014;
  double t5127;
  double t5148;
  double t5179;
  double t5180;
  double t5188;
  double t5241;
  t778 = Cos(var1[3]);
  t804 = Sin(var1[2]);
  t733 = Cos(var1[2]);
  t807 = Sin(var1[3]);
  t376 = Cos(var1[4]);
  t783 = t733*t778;
  t812 = -1.*t804*t807;
  t816 = t783 + t812;
  t1037 = -1.*t778*t804;
  t1042 = -1.*t733*t807;
  t1062 = t1037 + t1042;
  t1063 = Sin(var1[4]);
  t619 = -1.*t376;
  t721 = 1. + t619;
  t830 = 0.4*t721*t816;
  t1250 = -0.4*t1062*t1063;
  t1257 = t376*t816;
  t1259 = t1062*t1063;
  t1260 = t1257 + t1259;
  t1276 = 0.8*t1260;
  t2652 = t830 + t1250 + t1276;
  t2883 = t778*t804;
  t3080 = t733*t807;
  t3635 = t2883 + t3080;
  t5025 = -1.*t733*t778;
  t5026 = t804*t807;
  t5112 = t5025 + t5026;
  t5014 = 0.4*t721*t1062;
  t5127 = -0.4*t5112*t1063;
  t5148 = t376*t1062;
  t5179 = t5112*t1063;
  t5180 = t5148 + t5179;
  t5188 = 0.8*t5180;
  t5241 = t5014 + t5127 + t5188;
  p_output1[0]=1.;
  p_output1[1]=t2652;
  p_output1[2]=t2652;
  p_output1[3]=0.4*t1063*t3635 + 0.8*(t1257 - 1.*t1063*t3635) - 0.4*t376*t816;
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t5241;
  p_output1[8]=t5241;
  p_output1[9]=-0.4*t1062*t376 + 0.4*t1063*t816 + 0.8*(t5148 - 1.*t1063*t816);
  p_output1[10]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightToe_RightStance.hh"

namespace RightStance
{

void J_h_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
