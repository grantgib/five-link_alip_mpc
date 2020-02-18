/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:45 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t2602;
  double t2594;
  double t2595;
  double t2603;
  double t2607;
  double t2596;
  double t2604;
  double t2605;
  double t2583;
  double t2608;
  double t2609;
  double t2610;
  double t2644;
  double t2646;
  double t2648;
  double t2649;
  double t2650;
  double t2665;
  double t2666;
  double t2667;
  double t2606;
  double t2627;
  double t2675;
  double t2676;
  double t2677;
  double t2652;
  double t2661;
  double t2662;
  double t2663;
  double t2664;
  double t2668;
  double t2669;
  double t2670;
  double t2671;
  double t2678;
  double t2679;
  double t2680;
  double t2681;
  double t2682;
  double t2683;
  t2602 = Cos(var1[5]);
  t2594 = Cos(var1[6]);
  t2595 = Sin(var1[5]);
  t2603 = Sin(var1[6]);
  t2607 = Cos(var1[2]);
  t2596 = -1.*t2594*t2595;
  t2604 = -1.*t2602*t2603;
  t2605 = t2596 + t2604;
  t2583 = Sin(var1[2]);
  t2608 = t2602*t2594;
  t2609 = -1.*t2595*t2603;
  t2610 = t2608 + t2609;
  t2644 = -1.*t2594;
  t2646 = 1. + t2644;
  t2648 = 0.4*t2646;
  t2649 = 0.64*t2594;
  t2650 = t2648 + t2649;
  t2665 = t2602*t2650;
  t2666 = -0.24*t2595*t2603;
  t2667 = t2665 + t2666;
  t2606 = -1.*t2583*t2605;
  t2627 = t2607*t2605;
  t2675 = -1.*t2602*t2594;
  t2676 = t2595*t2603;
  t2677 = t2675 + t2676;
  t2652 = -0.24*t2602*t2603;
  t2661 = t2650*t2595;
  t2662 = 0.24*t2602*t2603;
  t2663 = t2661 + t2662;
  t2664 = t2663*t2610;
  t2668 = t2605*t2667;
  t2669 = t2594*t2595;
  t2670 = t2602*t2603;
  t2671 = t2669 + t2670;
  t2678 = t2607*t2677;
  t2679 = t2606 + t2678;
  t2680 = 0.384*var2[1]*t2679;
  t2681 = t2583*t2677;
  t2682 = t2627 + t2681;
  t2683 = 0.384*var2[0]*t2682;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(-1.*t2583*t2610 + t2627)*var2[0] + 0.384*(t2606 - 1.*t2607*t2610)*var2[1])*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(t2680 + t2683 + 0.384*(t2610*(-1.*t2595*t2650 + t2652) + t2664 + t2668 + t2667*t2671)*var2[2])*var2[6];
  p_output1[6]=(t2680 + t2683 + 0.384*(t2610*(-0.24*t2594*t2595 + t2652) + t2664 + t2668 + (0.24*t2594*t2602 + t2666)*t2671)*var2[2] + 0.384*(0.24*t2594*t2603 - 1.*t2603*t2650)*var2[5])*var2[6];
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

#include "Ce3_vec7_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
