/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:51:31 GMT-04:00
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
  double t742;
  double t401;
  double t420;
  double t751;
  double t139;
  double t441;
  double t785;
  double t1195;
  double t1351;
  double t1492;
  double t1493;
  double t1495;
  double t145;
  double t186;
  double t282;
  double t293;
  double t1503;
  double t1507;
  double t1608;
  double t1651;
  double t1652;
  t742 = Cos(var1[2]);
  t401 = Cos(var1[3]);
  t420 = Sin(var1[2]);
  t751 = Sin(var1[3]);
  t139 = Cos(var1[4]);
  t441 = t401*t420;
  t785 = t742*t751;
  t1195 = t441 + t785;
  t1351 = t742*t401;
  t1492 = -1.*t420*t751;
  t1493 = t1351 + t1492;
  t1495 = Sin(var1[4]);
  t145 = -1.*t139;
  t186 = 1. + t145;
  t282 = 0.4*t186;
  t293 = 0. + t282;
  t1503 = -0.4*t1495;
  t1507 = 0. + t1503;
  t1608 = -1.*t401*t420;
  t1651 = -1.*t742*t751;
  t1652 = t1608 + t1651;
  p_output1[0]=0. + 0.4*(t1195*t139 + t1493*t1495) + t1493*t1507 + t1195*t293 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t1507*t1652 + 0.4*(t139*t1493 + t1495*t1652) + t1493*t293 + var1[1];
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
