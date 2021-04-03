/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:35:11 GMT-05:00
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
  double t5748;
  double t5750;
  double t5747;
  double t5751;
  double t1045;
  double t5749;
  double t5752;
  double t5753;
  double t5755;
  double t5756;
  double t5757;
  double t5758;
  double t2095;
  double t5743;
  double t5754;
  double t5759;
  double t5760;
  double t5761;
  double t5762;
  double t5763;
  double t5764;
  double t5766;
  double t5767;
  double t5768;
  double t5775;
  double t5776;
  double t5777;
  double t5774;
  double t5778;
  double t5779;
  double t5780;
  double t5781;
  double t5782;
  double t5783;
  t5748 = Cos(var1[3]);
  t5750 = Sin(var1[2]);
  t5747 = Cos(var1[2]);
  t5751 = Sin(var1[3]);
  t1045 = Cos(var1[4]);
  t5749 = t5747*t5748;
  t5752 = -1.*t5750*t5751;
  t5753 = t5749 + t5752;
  t5755 = -1.*t5748*t5750;
  t5756 = -1.*t5747*t5751;
  t5757 = t5755 + t5756;
  t5758 = Sin(var1[4]);
  t2095 = -1.*t1045;
  t5743 = 1. + t2095;
  t5754 = 0.4*t5743*t5753;
  t5759 = -0.4*t5757*t5758;
  t5760 = t1045*t5753;
  t5761 = t5757*t5758;
  t5762 = t5760 + t5761;
  t5763 = 0.8*t5762;
  t5764 = t5754 + t5759 + t5763;
  t5766 = t5748*t5750;
  t5767 = t5747*t5751;
  t5768 = t5766 + t5767;
  t5775 = -1.*t5747*t5748;
  t5776 = t5750*t5751;
  t5777 = t5775 + t5776;
  t5774 = 0.4*t5743*t5757;
  t5778 = -0.4*t5777*t5758;
  t5779 = t1045*t5757;
  t5780 = t5777*t5758;
  t5781 = t5779 + t5780;
  t5782 = 0.8*t5781;
  t5783 = t5774 + t5778 + t5782;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t5764;
  p_output1[3]=t5764;
  p_output1[4]=-0.4*t1045*t5753 + 0.4*t5758*t5768 + 0.8*(t5760 - 1.*t5758*t5768);
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
  p_output1[16]=t5783;
  p_output1[17]=t5783;
  p_output1[18]=-0.4*t1045*t5757 + 0.4*t5753*t5758 + 0.8*(-1.*t5753*t5758 + t5779);
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
