/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:49 GMT-04:00
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
  double t4316;
  double t4214;
  double t4230;
  double t4325;
  double t4207;
  double t4248;
  double t4471;
  double t4809;
  double t4826;
  double t10203;
  double t10384;
  double t10386;
  double t10387;
  double t10388;
  double t10389;
  double t10350;
  double t10351;
  double t10352;
  double t10403;
  double t10407;
  double t10408;
  double t10417;
  double t10418;
  double t10419;
  double t10420;
  double t10421;
  double t10450;
  double t10451;
  double t10456;
  double t10441;
  double t10444;
  double t10446;
  double t10448;
  double t10449;
  double t10460;
  double t10461;
  double t10462;
  double t10463;
  t4316 = Cos(var1[3]);
  t4214 = Cos(var1[4]);
  t4230 = Sin(var1[3]);
  t4325 = Sin(var1[4]);
  t4207 = Cos(var1[2]);
  t4248 = -1.*t4214*t4230;
  t4471 = -1.*t4316*t4325;
  t4809 = t4248 + t4471;
  t4826 = t4207*t4809;
  t10203 = Sin(var1[2]);
  t10384 = -1.*t4316*t4214;
  t10386 = t4230*t4325;
  t10387 = t10384 + t10386;
  t10388 = t10203*t10387;
  t10389 = t4826 + t10388;
  t10350 = t4316*t4214;
  t10351 = -1.*t4230*t4325;
  t10352 = t10350 + t10351;
  t10403 = -1.*t10203*t4809;
  t10407 = t4207*t10387;
  t10408 = t10403 + t10407;
  t10417 = -1.*t4214;
  t10418 = 1. + t10417;
  t10419 = 0.4*t10418;
  t10420 = 0.64*t4214;
  t10421 = t10419 + t10420;
  t10450 = t4316*t10421;
  t10451 = -0.24*t4230*t4325;
  t10456 = t10450 + t10451;
  t10441 = -0.24*t4316*t4325;
  t10444 = t10421*t4230;
  t10446 = 0.24*t4316*t4325;
  t10448 = t10444 + t10446;
  t10449 = t10448*t10352;
  t10460 = t4809*t10456;
  t10461 = t4214*t4230;
  t10462 = t4316*t4325;
  t10463 = t10461 + t10462;
  p_output1[0]=var2[4]*(-0.384*(-1.*t10203*t10352 + t4826)*var2[2] - 0.384*t10389*var2[3] - 0.384*t10389*var2[4]);
  p_output1[1]=var2[4]*(-0.384*(t10403 - 1.*t10352*t4207)*var2[2] - 0.384*t10408*var2[3] - 0.384*t10408*var2[4]);
  p_output1[2]=var2[4]*(-0.384*(t10449 + t10460 + t10456*t10463 + t10352*(t10441 - 1.*t10421*t4230))*var2[3] - 0.384*(t10449 + t10460 + t10352*(t10441 - 0.24*t4214*t4230) + t10463*(t10451 + 0.24*t4214*t4316))*var2[4]);
  p_output1[3]=-0.384*(-1.*t10421*t4325 + 0.24*t4214*t4325)*Power(var2[4],2);
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

#include "Ce1_vec5_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
