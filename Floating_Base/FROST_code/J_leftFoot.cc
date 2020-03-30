/*
 * Automatically Generated from Mathematica.
 * Sat 28 Mar 2020 23:46:57 GMT-04:00
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
  double t2055;
  double t2130;
  double t2012;
  double t2162;
  double t1128;
  double t2124;
  double t2199;
  double t2214;
  double t2232;
  double t2257;
  double t3038;
  double t6482;
  double t1660;
  double t1957;
  double t6640;
  double t6641;
  double t6644;
  double t2229;
  double t6540;
  double t6582;
  double t6603;
  double t6608;
  double t6609;
  double t6622;
  double t6635;
  double t6647;
  double t6651;
  double t6669;
  double t6681;
  double t6683;
  double t6684;
  double t6700;
  double t6705;
  double t6752;
  t2055 = Cos(var1[5]);
  t2130 = Sin(var1[2]);
  t2012 = Cos(var1[2]);
  t2162 = Sin(var1[5]);
  t1128 = Cos(var1[6]);
  t2124 = t2012*t2055;
  t2199 = -1.*t2130*t2162;
  t2214 = t2124 + t2199;
  t2232 = -1.*t2055*t2130;
  t2257 = -1.*t2012*t2162;
  t3038 = t2232 + t2257;
  t6482 = Sin(var1[6]);
  t1660 = -1.*t1128;
  t1957 = 1. + t1660;
  t6640 = -1.*t2012*t2055;
  t6641 = t2130*t2162;
  t6644 = t6640 + t6641;
  t2229 = 0.4*t1957*t2214;
  t6540 = -0.4*t3038*t6482;
  t6582 = t1128*t2214;
  t6603 = t3038*t6482;
  t6608 = t6582 + t6603;
  t6609 = 0.8*t6608;
  t6622 = t2229 + t6540 + t6609;
  t6635 = 0.4*t1957*t3038;
  t6647 = -0.4*t6644*t6482;
  t6651 = t1128*t3038;
  t6669 = t6644*t6482;
  t6681 = t6651 + t6669;
  t6683 = 0.8*t6681;
  t6684 = t6635 + t6647 + t6683;
  t6700 = t2055*t2130;
  t6705 = t2012*t2162;
  t6752 = t6700 + t6705;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=1.;
  p_output1[4]=t6622;
  p_output1[5]=t6684;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=t6622;
  p_output1[11]=t6684;
  p_output1[12]=-0.4*t1128*t2214 + 0.4*t6482*t6752 + 0.8*(t6582 - 1.*t6482*t6752);
  p_output1[13]=-0.4*t1128*t3038 + 0.4*t2214*t6482 + 0.8*(-1.*t2214*t6482 + t6651);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_leftFoot.hh"

namespace SymExpression
{

void J_leftFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
