/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:27 GMT-04:00
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
  double t3098;
  double t278;
  double t441;
  double t3117;
  double t138;
  double t3030;
  double t3174;
  double t3855;
  double t3908;
  double t4049;
  double t8150;
  double t8300;
  double t8403;
  double t8404;
  double t8405;
  double t8413;
  double t8414;
  double t8424;
  double t8425;
  double t8426;
  double t8412;
  double t8807;
  double t8825;
  double t8826;
  double t8832;
  double t4419;
  double t4493;
  double t5169;
  double t8833;
  double t8834;
  double t8838;
  double t8843;
  double t8848;
  double t9452;
  double t9800;
  double t12260;
  double t12418;
  double t12422;
  double t12417;
  double t12458;
  double t12463;
  double t12467;
  double t12478;
  double t7840;
  double t7951;
  double t8407;
  double t7984;
  double t8406;
  double t12531;
  double t12532;
  double t12533;
  double t12563;
  double t12564;
  double t12572;
  double t12586;
  double t12593;
  double t12620;
  double t12621;
  double t12630;
  double t12595;
  double t12605;
  double t12606;
  double t12618;
  double t12659;
  double t12660;
  double t12643;
  double t12649;
  double t12658;
  double t12668;
  double t12669;
  double t12670;
  double t12671;
  double t12672;
  double t12673;
  double t12674;
  double t12675;
  double t12676;
  double t12677;
  double t12708;
  double t12709;
  double t12711;
  double t12712;
  double t12713;
  t3098 = Cos(var1[3]);
  t278 = Cos(var1[4]);
  t441 = Sin(var1[3]);
  t3117 = Sin(var1[4]);
  t138 = Sin(var1[2]);
  t3030 = -1.*t278*t441;
  t3174 = -1.*t3098*t3117;
  t3855 = t3030 + t3174;
  t3908 = -1.*t138*t3855;
  t4049 = Cos(var1[2]);
  t8150 = -1.*t3098*t278;
  t8300 = t441*t3117;
  t8403 = t8150 + t8300;
  t8404 = t4049*t8403;
  t8405 = t3908 + t8404;
  t8413 = t278*t441;
  t8414 = t3098*t3117;
  t8424 = t8413 + t8414;
  t8425 = t138*t8424;
  t8426 = t8425 + t8404;
  t8412 = -0.384*var2[2]*t8405;
  t8807 = -0.384*var2[3]*t8426;
  t8825 = -0.384*var2[4]*t8426;
  t8826 = t8412 + t8807 + t8825;
  t8832 = var2[4]*t8826;
  t4419 = t3098*t278;
  t4493 = -1.*t441*t3117;
  t5169 = t4419 + t4493;
  t8833 = t4049*t3855;
  t8834 = -1.*t138*t5169;
  t8838 = t8833 + t8834;
  t8843 = t138*t8403;
  t8848 = t8833 + t8843;
  t9452 = -1.*t4049*t3855;
  t9800 = -1.*t138*t8403;
  t12260 = t9452 + t9800;
  t12418 = t4049*t8424;
  t12422 = t12418 + t9800;
  t12417 = -0.384*var2[2]*t12260;
  t12458 = -0.384*var2[3]*t12422;
  t12463 = -0.384*var2[4]*t12422;
  t12467 = t12417 + t12458 + t12463;
  t12478 = var2[4]*t12467;
  t7840 = -1.*t4049*t5169;
  t7951 = t3908 + t7840;
  t8407 = -0.384*var2[4]*t8405;
  t7984 = -0.384*var2[2]*t7951;
  t8406 = -0.384*var2[3]*t8405;
  t12531 = -1.*t278;
  t12532 = 1. + t12531;
  t12533 = 0.4*t12532;
  t12563 = 0.64*t278;
  t12564 = t12533 + t12563;
  t12572 = -1.*t12564*t441;
  t12586 = -0.24*t3098*t3117;
  t12593 = t12572 + t12586;
  t12620 = t3098*t12564;
  t12621 = -0.24*t441*t3117;
  t12630 = t12620 + t12621;
  t12595 = t12564*t441;
  t12605 = 0.24*t3098*t3117;
  t12606 = t12595 + t12605;
  t12618 = t3855*t12606;
  t12659 = -0.24*t278*t441;
  t12660 = t12659 + t12586;
  t12643 = 0.24*t441*t3117;
  t12649 = t12630*t8403;
  t12658 = t3855*t12593;
  t12668 = t3855*t12660;
  t12669 = t12660*t8424;
  t12670 = t5169*t12630;
  t12671 = 0.24*t3098*t278;
  t12672 = t12671 + t12621;
  t12673 = t5169*t12672;
  t12674 = -0.24*t3098*t278;
  t12675 = t12674 + t12643;
  t12676 = t5169*t12675;
  t12677 = t12658 + t12668 + t12618 + t12669 + t12670 + t12673 + t12676 + t12649;
  t12708 = t12593*t5169;
  t12709 = t12606*t5169;
  t12711 = t3855*t12630;
  t12712 = t8424*t12630;
  t12713 = t12708 + t12709 + t12711 + t12712;
  p_output1[0]=(t7984 + t8406 + t8407)*var2[4];
  p_output1[1]=t8832;
  p_output1[2]=t8832;
  p_output1[3]=-0.384*t8838*var2[4];
  p_output1[4]=-0.384*t8848*var2[4];
  p_output1[5]=-0.384*t8838*var2[2] - 0.384*t8848*var2[3] - 0.768*t8848*var2[4];
  p_output1[6]=var2[4]*(-0.384*(t138*t5169 + t9452)*var2[2] - 0.384*t12260*var2[3] - 0.384*t12260*var2[4]);
  p_output1[7]=t12478;
  p_output1[8]=t12478;
  p_output1[9]=-0.384*t7951*var2[4];
  p_output1[10]=t8407;
  p_output1[11]=t7984 + t8406 - 0.768*t8405*var2[4];
  p_output1[12]=var2[4]*(-0.384*(t12618 + t12649 + 2.*t12593*t3855 + 2.*t12630*t5169 + (t12643 - 1.*t12564*t3098)*t5169 + t12593*t8424)*var2[3] - 0.384*t12677*var2[4]);
  p_output1[13]=var2[4]*(-0.384*t12677*var2[3] - 0.384*(t12618 + t12649 + t12669 + t12676 + 2.*t12660*t3855 + 2.*t12672*t5169)*var2[4]);
  p_output1[14]=-0.384*t12713*var2[4];
  p_output1[15]=-0.384*t12713*var2[3] - 0.768*(t12709 + t12711 + t12660*t5169 + t12672*t8424)*var2[4];
  p_output1[16]=-0.384*(-1.*t12564*t278 + 0.24*Power(t278,2))*Power(var2[4],2);
  p_output1[17]=-0.768*(-1.*t12564*t3117 + 0.24*t278*t3117)*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec5_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
