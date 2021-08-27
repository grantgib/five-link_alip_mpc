/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:02:29 GMT-05:00
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
  double t46;
  double t47;
  double t68;
  double t69;
  double t77;
  double t80;
  double t84;
  double t112;
  double t115;
  double t116;
  double t102;
  double t107;
  double t108;
  double t90;
  double t93;
  double t94;
  double t97;
  double t98;
  double t111;
  double t119;
  double t120;
  double t128;
  double t129;
  double t143;
  double t144;
  t46 = Cos(var1[2]);
  t47 = Cos(var1[3]);
  t68 = t46*t47;
  t69 = Sin(var1[2]);
  t77 = Sin(var1[3]);
  t80 = -1.*t69*t77;
  t84 = t68 + t80;
  t112 = t47*t69;
  t115 = t46*t77;
  t116 = t112 + t115;
  t102 = -1.*t47*t69;
  t107 = -1.*t46*t77;
  t108 = t102 + t107;
  t90 = Power(t47,2);
  t93 = 0.11*t90;
  t94 = Power(t77,2);
  t97 = 0.11*t94;
  t98 = t93 + t97;
  t111 = 6.8*t108*t84;
  t119 = 6.8*t116*t84;
  t120 = t111 + t119;
  t128 = Power(t84,2);
  t129 = 6.8*t128;
  t143 = 0.748*t98;
  t144 = 0.47 + t143;
  p_output1[0]=-1.*(6.8*Power(t116,2) + t129)*var2[0] - 1.*t120*var2[1] - 6.8*t84*t98*var2[2] - 0.748*t84*var2[3];
  p_output1[1]=-1.*t120*var2[0] - 1.*(6.8*Power(t108,2) + t129)*var2[1] - 6.8*t108*t98*var2[2] - 0.748*t108*var2[3];
  p_output1[2]=-6.8*t84*t98*var2[0] - 6.8*t108*t98*var2[1] - 1.*(0.47 + 6.8*Power(t98,2))*var2[2] - 1.*t144*var2[3];
  p_output1[3]=-0.748*t84*var2[0] - 0.748*t108*var2[1] - 1.*t144*var2[2] - 0.55228*var2[3];
  p_output1[4]=0;
  p_output1[5]=0;
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

#include "MmatDx2_five_link_walker.hh"

namespace RightStance
{

void MmatDx2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
