/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:02:31 GMT-05:00
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
  double t68;
  double t84;
  double t89;
  double t90;
  double t93;
  double t94;
  double t97;
  double t128;
  double t129;
  double t130;
  double t119;
  double t123;
  double t124;
  double t101;
  double t108;
  double t111;
  double t112;
  double t115;
  double t127;
  double t131;
  double t132;
  double t136;
  double t137;
  double t152;
  double t153;
  t68 = Cos(var1[2]);
  t84 = Cos(var1[5]);
  t89 = t68*t84;
  t90 = Sin(var1[2]);
  t93 = Sin(var1[5]);
  t94 = -1.*t90*t93;
  t97 = t89 + t94;
  t128 = t84*t90;
  t129 = t68*t93;
  t130 = t128 + t129;
  t119 = -1.*t84*t90;
  t123 = -1.*t68*t93;
  t124 = t119 + t123;
  t101 = Power(t84,2);
  t108 = 0.11*t101;
  t111 = Power(t93,2);
  t112 = 0.11*t111;
  t115 = t108 + t112;
  t127 = 6.8*t124*t97;
  t131 = 6.8*t130*t97;
  t132 = t127 + t131;
  t136 = Power(t97,2);
  t137 = 6.8*t136;
  t152 = 0.748*t115;
  t153 = 0.47 + t152;
  p_output1[0]=-1.*(6.8*Power(t130,2) + t137)*var2[0] - 1.*t132*var2[1] - 6.8*t115*t97*var2[2] - 0.748*t97*var2[5];
  p_output1[1]=-1.*t132*var2[0] - 1.*(6.8*Power(t124,2) + t137)*var2[1] - 6.8*t115*t124*var2[2] - 0.748*t124*var2[5];
  p_output1[2]=-6.8*t115*t97*var2[0] - 6.8*t115*t124*var2[1] - 1.*(0.47 + 6.8*Power(t115,2))*var2[2] - 1.*t153*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.748*t97*var2[0] - 0.748*t124*var2[1] - 1.*t153*var2[2] - 0.55228*var2[5];
  p_output1[6]=0;
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

#include "MmatDx3_five_link_walker.hh"

namespace RightStance
{

void MmatDx3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
