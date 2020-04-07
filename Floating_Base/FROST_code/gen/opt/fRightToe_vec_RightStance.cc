/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:02:07 GMT-04:00
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
  double t1737;
  double t2347;
  double t1537;
  double t2494;
  double t80;
  double t2331;
  double t2977;
  double t3526;
  double t3999;
  double t4820;
  double t5504;
  double t5561;
  double t347;
  double t426;
  double t5739;
  double t5742;
  double t5763;
  double t3788;
  double t5637;
  double t5644;
  double t5645;
  double t5657;
  double t5658;
  double t5671;
  double t5697;
  double t5729;
  double t5776;
  double t5784;
  double t5795;
  double t5796;
  double t5799;
  double t5800;
  double t5813;
  double t5818;
  double t5825;
  double t5826;
  double t5831;
  t1737 = Cos(var1[3]);
  t2347 = Sin(var1[2]);
  t1537 = Cos(var1[2]);
  t2494 = Sin(var1[3]);
  t80 = Cos(var1[4]);
  t2331 = t1537*t1737;
  t2977 = -1.*t2347*t2494;
  t3526 = t2331 + t2977;
  t3999 = -1.*t1737*t2347;
  t4820 = -1.*t1537*t2494;
  t5504 = t3999 + t4820;
  t5561 = Sin(var1[4]);
  t347 = -1.*t80;
  t426 = 1. + t347;
  t5739 = -1.*t1537*t1737;
  t5742 = t2347*t2494;
  t5763 = t5739 + t5742;
  t3788 = 0.4*t426*t3526;
  t5637 = -0.4*t5504*t5561;
  t5644 = t80*t3526;
  t5645 = t5504*t5561;
  t5657 = t5644 + t5645;
  t5658 = 0.8*t5657;
  t5671 = t3788 + t5637 + t5658;
  t5697 = var2[0]*t5671;
  t5729 = 0.4*t426*t5504;
  t5776 = -0.4*t5763*t5561;
  t5784 = t80*t5504;
  t5795 = t5763*t5561;
  t5796 = t5784 + t5795;
  t5799 = 0.8*t5796;
  t5800 = t5729 + t5776 + t5799;
  t5813 = var2[2]*t5800;
  t5818 = t5697 + t5813;
  t5825 = t1737*t2347;
  t5826 = t1537*t2494;
  t5831 = t5825 + t5826;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t5818;
  p_output1[3]=t5818;
  p_output1[4]=(0.4*t5561*t5831 + 0.8*(t5644 - 1.*t5561*t5831) - 0.4*t3526*t80)*var2[0] + (0.4*t3526*t5561 + 0.8*(-1.*t3526*t5561 + t5784) - 0.4*t5504*t80)*var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "fRightToe_vec_RightStance.hh"

namespace RightStance
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
