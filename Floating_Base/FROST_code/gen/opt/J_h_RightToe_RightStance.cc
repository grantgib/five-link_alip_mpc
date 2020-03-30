/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:51:06 GMT-04:00
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
  double t18138;
  double t18147;
  double t18130;
  double t18152;
  double t3076;
  double t18143;
  double t18153;
  double t18154;
  double t18171;
  double t18172;
  double t18173;
  double t18174;
  double t18090;
  double t18129;
  double t18155;
  double t18175;
  double t18176;
  double t18177;
  double t18178;
  double t18179;
  double t18180;
  double t18182;
  double t18183;
  double t18184;
  double t18215;
  double t18216;
  double t18217;
  double t18213;
  double t18219;
  double t18220;
  double t18221;
  double t18222;
  double t18223;
  double t18226;
  t18138 = Cos(var1[3]);
  t18147 = Sin(var1[2]);
  t18130 = Cos(var1[2]);
  t18152 = Sin(var1[3]);
  t3076 = Cos(var1[4]);
  t18143 = t18130*t18138;
  t18153 = -1.*t18147*t18152;
  t18154 = t18143 + t18153;
  t18171 = -1.*t18138*t18147;
  t18172 = -1.*t18130*t18152;
  t18173 = t18171 + t18172;
  t18174 = Sin(var1[4]);
  t18090 = -1.*t3076;
  t18129 = 1. + t18090;
  t18155 = 0.4*t18129*t18154;
  t18175 = -0.4*t18173*t18174;
  t18176 = t3076*t18154;
  t18177 = t18173*t18174;
  t18178 = t18176 + t18177;
  t18179 = 0.8*t18178;
  t18180 = t18155 + t18175 + t18179;
  t18182 = t18138*t18147;
  t18183 = t18130*t18152;
  t18184 = t18182 + t18183;
  t18215 = -1.*t18130*t18138;
  t18216 = t18147*t18152;
  t18217 = t18215 + t18216;
  t18213 = 0.4*t18129*t18173;
  t18219 = -0.4*t18217*t18174;
  t18220 = t3076*t18173;
  t18221 = t18217*t18174;
  t18222 = t18220 + t18221;
  t18223 = 0.8*t18222;
  t18226 = t18213 + t18219 + t18223;
  p_output1[0]=1.;
  p_output1[1]=t18180;
  p_output1[2]=t18180;
  p_output1[3]=0.4*t18174*t18184 + 0.8*(t18176 - 1.*t18174*t18184) - 0.4*t18154*t3076;
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t18226;
  p_output1[8]=t18226;
  p_output1[9]=0.4*t18154*t18174 + 0.8*(-1.*t18154*t18174 + t18220) - 0.4*t18173*t3076;
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
