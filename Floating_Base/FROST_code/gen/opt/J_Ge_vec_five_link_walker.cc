/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:02:15 GMT-04:00
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
  double t203;
  double t289;
  double t427;
  double t493;
  double t546;
  double t547;
  double t618;
  double t634;
  double t819;
  double t1535;
  double t1542;
  double t1543;
  double t2067;
  double t2085;
  double t2119;
  double t2157;
  double t2170;
  double t2233;
  double t2383;
  double t2499;
  double t2528;
  double t2529;
  double t619;
  double t643;
  double t780;
  double t785;
  double t1695;
  double t1706;
  double t1785;
  double t1807;
  double t1980;
  double t1994;
  double t1996;
  double t3503;
  double t3669;
  double t3702;
  double t2172;
  double t2269;
  double t2323;
  double t2337;
  double t2595;
  double t2601;
  double t2641;
  double t2642;
  double t2651;
  double t2843;
  double t3067;
  double t4175;
  double t4283;
  double t4417;
  double t3406;
  double t3431;
  double t3740;
  double t3785;
  double t3871;
  double t3942;
  double t3988;
  double t4028;
  double t5966;
  double t5988;
  double t5989;
  double t4123;
  double t4167;
  double t4462;
  double t4578;
  double t4579;
  double t5848;
  double t5871;
  double t5914;
  double t6080;
  double t6085;
  double t6086;
  t203 = Cos(var1[2]);
  t289 = Cos(var1[3]);
  t427 = -1.*t203*t289;
  t493 = Sin(var1[2]);
  t546 = Sin(var1[3]);
  t547 = t493*t546;
  t618 = t427 + t547;
  t634 = Cos(var1[4]);
  t819 = t289*t493;
  t1535 = t203*t546;
  t1542 = t819 + t1535;
  t1543 = Sin(var1[4]);
  t2067 = Cos(var1[5]);
  t2085 = -1.*t203*t2067;
  t2119 = Sin(var1[5]);
  t2157 = t493*t2119;
  t2170 = t2085 + t2157;
  t2233 = Cos(var1[6]);
  t2383 = t2067*t493;
  t2499 = t203*t2119;
  t2528 = t2383 + t2499;
  t2529 = Sin(var1[6]);
  t619 = -7.33788*t618;
  t643 = -1.*t634;
  t780 = 1. + t643;
  t785 = 0.4*t780*t618;
  t1695 = -0.4*t1542*t1543;
  t1706 = t634*t618;
  t1785 = t1542*t1543;
  t1807 = t1706 + t1785;
  t1980 = 0.64*t1807;
  t1994 = t785 + t1695 + t1980;
  t1996 = -31.392000000000003*t1994;
  t3503 = -1.*t289*t493;
  t3669 = -1.*t203*t546;
  t3702 = t3503 + t3669;
  t2172 = -7.33788*t2170;
  t2269 = -1.*t2233;
  t2323 = 1. + t2269;
  t2337 = 0.4*t2323*t2170;
  t2595 = -0.4*t2528*t2529;
  t2601 = t2233*t2170;
  t2641 = t2528*t2529;
  t2642 = t2601 + t2641;
  t2651 = 0.64*t2642;
  t2843 = t2337 + t2595 + t2651;
  t3067 = -31.392000000000003*t2843;
  t4175 = -1.*t2067*t493;
  t4283 = -1.*t203*t2119;
  t4417 = t4175 + t4283;
  t3406 = t619 + t1996;
  t3431 = -0.4*t634*t618;
  t3740 = 0.4*t3702*t1543;
  t3785 = -1.*t3702*t1543;
  t3871 = t1706 + t3785;
  t3942 = 0.64*t3871;
  t3988 = t3431 + t3740 + t3942;
  t4028 = -31.392000000000003*t3988;
  t5966 = t203*t289;
  t5988 = -1.*t493*t546;
  t5989 = t5966 + t5988;
  t4123 = t2172 + t3067;
  t4167 = -0.4*t2233*t2170;
  t4462 = 0.4*t4417*t2529;
  t4578 = -1.*t4417*t2529;
  t4579 = t2601 + t4578;
  t5848 = 0.64*t4579;
  t5871 = t4167 + t4462 + t5848;
  t5914 = -31.392000000000003*t5871;
  t6080 = t203*t2067;
  t6085 = -1.*t493*t2119;
  t6086 = t6080 + t6085;
  p_output1[0]=t1996 + 28.252799999999997*t203 + t2172 + t3067 + t619;
  p_output1[1]=t3406;
  p_output1[2]=t4028;
  p_output1[3]=t4123;
  p_output1[4]=t5914;
  p_output1[5]=t3406;
  p_output1[6]=t3406;
  p_output1[7]=t4028;
  p_output1[8]=t4028;
  p_output1[9]=t4028;
  p_output1[10]=-31.392000000000003*(t3740 + 0.4*t5989*t634 + 0.64*(t3785 - 1.*t5989*t634));
  p_output1[11]=t4123;
  p_output1[12]=t4123;
  p_output1[13]=t5914;
  p_output1[14]=t5914;
  p_output1[15]=t5914;
  p_output1[16]=-31.392000000000003*(t4462 + 0.4*t2233*t6086 + 0.64*(t4578 - 1.*t2233*t6086));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_five_link_walker.hh"

namespace RightStance
{

void J_Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
