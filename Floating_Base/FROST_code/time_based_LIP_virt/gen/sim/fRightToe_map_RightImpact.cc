/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:01:17 GMT-05:00
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
  double t8656;
  double t8661;
  double t8619;
  double t8664;
  double t3778;
  double t8658;
  double t8667;
  double t8673;
  double t8700;
  double t8709;
  double t8711;
  double t8735;
  double t3851;
  double t6348;
  double t8697;
  double t8736;
  double t8739;
  double t8740;
  double t8747;
  double t8751;
  double t8760;
  double t8763;
  double t8774;
  double t8776;
  double t8809;
  double t8815;
  double t8820;
  double t8808;
  double t8826;
  double t8828;
  double t8829;
  double t8831;
  double t8838;
  double t8851;
  t8656 = Cos(var1[3]);
  t8661 = Sin(var1[2]);
  t8619 = Cos(var1[2]);
  t8664 = Sin(var1[3]);
  t3778 = Cos(var1[4]);
  t8658 = t8619*t8656;
  t8667 = -1.*t8661*t8664;
  t8673 = t8658 + t8667;
  t8700 = -1.*t8656*t8661;
  t8709 = -1.*t8619*t8664;
  t8711 = t8700 + t8709;
  t8735 = Sin(var1[4]);
  t3851 = -1.*t3778;
  t6348 = 1. + t3851;
  t8697 = 0.4*t6348*t8673;
  t8736 = -0.4*t8711*t8735;
  t8739 = t3778*t8673;
  t8740 = t8711*t8735;
  t8747 = t8739 + t8740;
  t8751 = 0.8*t8747;
  t8760 = t8697 + t8736 + t8751;
  t8763 = t8656*t8661;
  t8774 = t8619*t8664;
  t8776 = t8763 + t8774;
  t8809 = -1.*t8619*t8656;
  t8815 = t8661*t8664;
  t8820 = t8809 + t8815;
  t8808 = 0.4*t6348*t8711;
  t8826 = -0.4*t8820*t8735;
  t8828 = t3778*t8711;
  t8829 = t8820*t8735;
  t8831 = t8828 + t8829;
  t8838 = 0.8*t8831;
  t8851 = t8808 + t8826 + t8838;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t8760;
  p_output1[3]=t8760;
  p_output1[4]=-0.4*t3778*t8673 + 0.4*t8735*t8776 + 0.8*(t8739 - 1.*t8735*t8776);
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=1.;
  p_output1[16]=t8851;
  p_output1[17]=t8851;
  p_output1[18]=-0.4*t3778*t8711 + 0.4*t8673*t8735 + 0.8*(-1.*t8673*t8735 + t8828);
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_map_RightImpact.hh"

namespace SymFunction
{

void fRightToe_map_RightImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
