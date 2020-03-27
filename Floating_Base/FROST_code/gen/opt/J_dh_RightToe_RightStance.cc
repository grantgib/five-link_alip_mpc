/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:53:19 GMT-04:00
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
  double t14647;
  double t12437;
  double t14642;
  double t14648;
  double t7179;
  double t14643;
  double t14649;
  double t14650;
  double t14652;
  double t14653;
  double t14654;
  double t14655;
  double t14658;
  double t14676;
  double t14677;
  double t14678;
  double t14673;
  double t14674;
  double t14675;
  double t14679;
  double t14680;
  double t14681;
  double t14682;
  double t14683;
  double t14651;
  double t14657;
  double t14659;
  double t14660;
  double t14661;
  double t14671;
  double t14672;
  double t14684;
  double t14685;
  double t14686;
  double t14689;
  double t14690;
  double t14691;
  double t14699;
  double t14700;
  double t14701;
  double t14702;
  double t14703;
  double t14704;
  double t14705;
  double t14714;
  double t14720;
  double t14721;
  double t14722;
  double t14723;
  double t14724;
  double t14725;
  double t14712;
  double t14713;
  double t14715;
  double t14716;
  double t14717;
  double t14718;
  double t14719;
  double t14726;
  double t14727;
  double t14728;
  t14647 = Cos(var1[2]);
  t12437 = Cos(var1[3]);
  t14642 = Sin(var1[2]);
  t14648 = Sin(var1[3]);
  t7179 = Cos(var1[4]);
  t14643 = -1.*t12437*t14642;
  t14649 = -1.*t14647*t14648;
  t14650 = t14643 + t14649;
  t14652 = t14647*t12437;
  t14653 = -1.*t14642*t14648;
  t14654 = t14652 + t14653;
  t14655 = Sin(var1[4]);
  t14658 = t7179*t14650;
  t14676 = -1.*t14647*t12437;
  t14677 = t14642*t14648;
  t14678 = t14676 + t14677;
  t14673 = -1.*t7179;
  t14674 = 1. + t14673;
  t14675 = 0.4*t14674*t14650;
  t14679 = -0.4*t14678*t14655;
  t14680 = t14678*t14655;
  t14681 = t14658 + t14680;
  t14682 = 0.8*t14681;
  t14683 = t14675 + t14679 + t14682;
  t14651 = -0.4*t7179*t14650;
  t14657 = 0.4*t14654*t14655;
  t14659 = -1.*t14654*t14655;
  t14660 = t14658 + t14659;
  t14661 = 0.8*t14660;
  t14671 = t14651 + t14657 + t14661;
  t14672 = var2[4]*t14671;
  t14684 = var2[2]*t14683;
  t14685 = var2[3]*t14683;
  t14686 = t14672 + t14684 + t14685;
  t14689 = t12437*t14642;
  t14690 = t14647*t14648;
  t14691 = t14689 + t14690;
  t14699 = 0.4*t14674*t14654;
  t14700 = -0.4*t14650*t14655;
  t14701 = t7179*t14654;
  t14702 = t14650*t14655;
  t14703 = t14701 + t14702;
  t14704 = 0.8*t14703;
  t14705 = t14699 + t14700 + t14704;
  t14714 = t7179*t14678;
  t14720 = 0.4*t14674*t14678;
  t14721 = -0.4*t14691*t14655;
  t14722 = t14691*t14655;
  t14723 = t14714 + t14722;
  t14724 = 0.8*t14723;
  t14725 = t14720 + t14721 + t14724;
  t14712 = -0.4*t7179*t14678;
  t14713 = 0.4*t14650*t14655;
  t14715 = -1.*t14650*t14655;
  t14716 = t14714 + t14715;
  t14717 = 0.8*t14716;
  t14718 = t14712 + t14713 + t14717;
  t14719 = var2[4]*t14718;
  t14726 = var2[2]*t14725;
  t14727 = var2[3]*t14725;
  t14728 = t14719 + t14726 + t14727;
  p_output1[0]=t14686;
  p_output1[1]=t14686;
  p_output1[2]=t14671*var2[2] + t14671*var2[3] + (t14657 + 0.4*t14691*t7179 + 0.8*(t14659 - 1.*t14691*t7179))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t14705;
  p_output1[5]=t14705;
  p_output1[6]=0.4*t14655*t14691 + 0.8*(-1.*t14655*t14691 + t14701) - 0.4*t14654*t7179;
  p_output1[7]=t14728;
  p_output1[8]=t14728;
  p_output1[9]=t14718*var2[2] + t14718*var2[3] + (t14713 + 0.4*t14654*t7179 + 0.8*(t14715 - 1.*t14654*t7179))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t14683;
  p_output1[12]=t14683;
  p_output1[13]=t14671;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RightToe_RightStance.hh"

namespace RightStance
{

void J_dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
