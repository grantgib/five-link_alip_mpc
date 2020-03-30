/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:53:01 GMT-04:00
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
  double t4672;
  double t4647;
  double t4648;
  double t4673;
  double t4612;
  double t4671;
  double t4678;
  double t4682;
  double t4691;
  double t4692;
  double t4693;
  double t4694;
  double t4613;
  double t4634;
  double t4686;
  double t4704;
  double t4705;
  double t4706;
  double t4718;
  double t4722;
  double t4726;
  double t4732;
  double t4733;
  double t4734;
  t4672 = Cos(var1[2]);
  t4647 = Cos(var1[5]);
  t4648 = Sin(var1[2]);
  t4673 = Sin(var1[5]);
  t4612 = Cos(var1[6]);
  t4671 = -1.*t4647*t4648;
  t4678 = -1.*t4672*t4673;
  t4682 = t4671 + t4678;
  t4691 = -1.*t4672*t4647;
  t4692 = t4648*t4673;
  t4693 = t4691 + t4692;
  t4694 = Sin(var1[6]);
  t4613 = -1.*t4612;
  t4634 = 1. + t4613;
  t4686 = 0.4*t4634*t4682;
  t4704 = -0.4*t4693*t4694;
  t4705 = t4612*t4682;
  t4706 = t4693*t4694;
  t4718 = t4705 + t4706;
  t4722 = 0.8*t4718;
  t4726 = t4686 + t4704 + t4722;
  t4732 = t4672*t4647;
  t4733 = -1.*t4648*t4673;
  t4734 = t4732 + t4733;
  p_output1[0]=1.;
  p_output1[1]=t4726;
  p_output1[2]=t4726;
  p_output1[3]=-0.4*t4612*t4682 + 0.4*t4694*t4734 + 0.8*(t4705 - 1.*t4694*t4734);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_leftFootHeight_RightStance.hh"

namespace RightStance
{

void J_u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
