/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:27:30 GMT-05:00
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
  double t661;
  double t657;
  double t658;
  double t662;
  double t645;
  double t660;
  double t665;
  double t666;
  double t668;
  double t669;
  double t670;
  double t671;
  double t646;
  double t650;
  double t655;
  double t656;
  double t672;
  double t675;
  double t683;
  double t684;
  double t685;
  t661 = Cos(var1[2]);
  t657 = Cos(var1[5]);
  t658 = Sin(var1[2]);
  t662 = Sin(var1[5]);
  t645 = Cos(var1[6]);
  t660 = t657*t658;
  t665 = t661*t662;
  t666 = t660 + t665;
  t668 = t661*t657;
  t669 = -1.*t658*t662;
  t670 = t668 + t669;
  t671 = Sin(var1[6]);
  t646 = -1.*t645;
  t650 = 1. + t646;
  t655 = 0.4*t650;
  t656 = 0. + t655;
  t672 = -0.4*t671;
  t675 = 0. + t672;
  t683 = -1.*t657*t658;
  t684 = -1.*t661*t662;
  t685 = t683 + t684;
  p_output1[0]=0. + t656*t666 + 0.8*(t645*t666 + t670*t671) + t670*t675 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t656*t670 + t675*t685 + 0.8*(t645*t670 + t671*t685) + var1[1];
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

#include "p_LeftToe.hh"

namespace SymExpression
{

void p_LeftToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
