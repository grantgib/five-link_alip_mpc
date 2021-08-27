/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:16:02 GMT-05:00
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
  double t55;
  double t80;
  double t44;
  double t81;
  double t25;
  double t56;
  double t102;
  double t167;
  double t190;
  double t198;
  double t277;
  double t294;
  double t31;
  double t37;
  double t400;
  double t473;
  double t488;
  double t619;
  double t621;
  double t565;
  double t620;
  double t633;
  double t658;
  double t685;
  double t686;
  double t687;
  double t721;
  double t171;
  double t307;
  double t308;
  double t318;
  double t342;
  double t377;
  double t583;
  double t616;
  double t812;
  double t815;
  double t819;
  t55 = Cos(var1[3]);
  t80 = Sin(var1[2]);
  t44 = Cos(var1[2]);
  t81 = Sin(var1[3]);
  t25 = Cos(var1[4]);
  t56 = t44*t55;
  t102 = -1.*t80*t81;
  t167 = t56 + t102;
  t190 = -1.*t55*t80;
  t198 = -1.*t44*t81;
  t277 = t190 + t198;
  t294 = Sin(var1[4]);
  t31 = -1.*t25;
  t37 = 1. + t31;
  t400 = t55*t80;
  t473 = t44*t81;
  t488 = t400 + t473;
  t619 = Cos(var1[5]);
  t621 = Sin(var1[5]);
  t565 = Cos(var1[6]);
  t620 = t619*t80;
  t633 = t44*t621;
  t658 = t620 + t633;
  t685 = t44*t619;
  t686 = -1.*t80*t621;
  t687 = t685 + t686;
  t721 = Sin(var1[6]);
  t171 = -0.4*t37*t167;
  t307 = 0.4*t277*t294;
  t308 = t25*t167;
  t318 = t277*t294;
  t342 = t308 + t318;
  t377 = -0.8*t342;
  t583 = -1.*t565;
  t616 = 1. + t583;
  t812 = -1.*t619*t80;
  t815 = -1.*t44*t621;
  t819 = t812 + t815;
  p_output1[0]=var1[2];
  p_output1[1]=t171 + t307 + t377;
  p_output1[2]=0.4*t167*t294 - 0.4*t37*t488 - 0.8*(t167*t294 + t25*t488) + 0.4*t616*t658 - 0.4*t687*t721 + 0.8*(t565*t658 + t687*t721);
  p_output1[3]=t171 + t307 + t377 + 0.4*t616*t687 - 0.4*t721*t819 + 0.8*(t565*t687 + t721*t819);
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

#include "output_boundary_RightStance.hh"

namespace RightStance
{

void output_boundary_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
