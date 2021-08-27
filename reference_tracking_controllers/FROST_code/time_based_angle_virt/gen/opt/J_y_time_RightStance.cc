/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:19:52 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t3651;
  double t3595;
  double t3605;
  double t3643;
  double t3647;
  double t3649;
  double t3652;
  double t3653;
  double t3654;
  double t3655;
  double t3660;
  double t3661;
  double t3662;
  double t3665;
  double t3666;
  double t3667;
  double t3668;
  double t3669;
  double t3672;
  double t3673;
  double t3674;
  double t3677;
  double t3678;
  double t3681;
  double t3702;
  double t3704;
  double t3718;
  double t3719;
  double t3696;
  double t3697;
  double t3698;
  double t3699;
  double t3700;
  double t3701;
  double t3703;
  t3651 = -1.*var4[1];
  t3595 = -1. + var5[0];
  t3605 = -1. + var6[0];
  t3643 = 1/t3605;
  t3647 = -1.*t3595*t3643;
  t3649 = 1. + t3647;
  t3652 = var4[0] + t3651;
  t3653 = Power(t3652,-5);
  t3654 = -1.*var1[0];
  t3655 = t3654 + var1[1];
  t3660 = t3595*t3643*t3655;
  t3661 = t3651 + var1[0] + t3660;
  t3662 = Power(t3661,4);
  t3665 = Power(t3652,-4);
  t3666 = Power(t3661,3);
  t3667 = 1/t3652;
  t3668 = -1.*t3667*t3661;
  t3669 = 1. + t3668;
  t3672 = Power(t3652,-3);
  t3673 = Power(t3661,2);
  t3674 = Power(t3669,2);
  t3677 = Power(t3652,-2);
  t3678 = Power(t3669,3);
  t3681 = Power(t3669,4);
  t3702 = Power(t3661,5);
  t3704 = Power(t3652,-6);
  t3718 = -1.*t3677*t3661;
  t3719 = t3667 + t3718;
  t3696 = Power(t3669,5);
  t3697 = -1.*t3696;
  t3698 = -5.*t3667*t3661*t3681;
  t3699 = -10.*t3677*t3673*t3678;
  t3700 = -10.*t3672*t3666*t3674;
  t3701 = -5.*t3665*t3662*t3669;
  t3703 = -1.*t3653*t3702;
  p_output1[0]=5.*t3649*t3667*t3681*var3[0] + 20.*t3649*t3661*t3677*t3678*var3[4] - 5.*t3649*t3667*t3681*var3[4] + 30.*t3649*t3672*t3673*t3674*var3[8] - 20.*t3649*t3661*t3677*t3678*var3[8] + 20.*t3649*t3665*t3666*t3669*var3[12] - 30.*t3649*t3672*t3673*t3674*var3[12] + 5.*t3649*t3653*t3662*var3[16] - 20.*t3649*t3665*t3666*t3669*var3[16] - 5.*t3649*t3653*t3662*var3[20];
  p_output1[1]=5.*t3595*t3643*t3667*t3681*var3[0] + 20.*t3595*t3643*t3661*t3677*t3678*var3[4] - 5.*t3595*t3643*t3667*t3681*var3[4] + 30.*t3595*t3643*t3672*t3673*t3674*var3[8] - 20.*t3595*t3643*t3661*t3677*t3678*var3[8] + 20.*t3595*t3643*t3665*t3666*t3669*var3[12] - 30.*t3595*t3643*t3672*t3673*t3674*var3[12] + 5.*t3595*t3643*t3653*t3662*var3[16] - 20.*t3595*t3643*t3665*t3666*t3669*var3[16] - 5.*t3595*t3643*t3653*t3662*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t3697;
  p_output1[4]=t3698;
  p_output1[5]=t3699;
  p_output1[6]=t3700;
  p_output1[7]=t3701;
  p_output1[8]=t3703;
  p_output1[9]=-5.*t3661*t3677*t3681*var3[0] - 20.*t3672*t3673*t3678*var3[4] + 5.*t3661*t3677*t3681*var3[4] - 30.*t3665*t3666*t3674*var3[8] + 20.*t3672*t3673*t3678*var3[8] - 20.*t3653*t3662*t3669*var3[12] + 30.*t3665*t3666*t3674*var3[12] + 20.*t3653*t3662*t3669*var3[16] - 5.*t3702*t3704*var3[16] + 5.*t3702*t3704*var3[20];
  p_output1[10]=-5.*t3681*t3719*var3[0] + 5.*t3667*t3681*var3[4] - 5.*t3661*t3677*t3681*var3[4] - 20.*t3661*t3667*t3678*t3719*var3[4] - 20.*t3672*t3673*t3678*var3[8] + 20.*t3661*t3677*t3678*var3[8] - 30.*t3673*t3674*t3677*t3719*var3[8] - 30.*t3665*t3666*t3674*var3[12] + 30.*t3672*t3673*t3674*var3[12] - 20.*t3666*t3669*t3672*t3719*var3[12] - 20.*t3653*t3662*t3669*var3[16] + 20.*t3665*t3666*t3669*var3[16] - 5.*t3662*t3665*t3719*var3[16] + 5.*t3653*t3662*var3[20] - 5.*t3702*t3704*var3[20];
  p_output1[11]=5.*t3649*t3667*t3681*var3[1] + 20.*t3649*t3661*t3677*t3678*var3[5] - 5.*t3649*t3667*t3681*var3[5] + 30.*t3649*t3672*t3673*t3674*var3[9] - 20.*t3649*t3661*t3677*t3678*var3[9] + 20.*t3649*t3665*t3666*t3669*var3[13] - 30.*t3649*t3672*t3673*t3674*var3[13] + 5.*t3649*t3653*t3662*var3[17] - 20.*t3649*t3665*t3666*t3669*var3[17] - 5.*t3649*t3653*t3662*var3[21];
  p_output1[12]=5.*t3595*t3643*t3667*t3681*var3[1] + 20.*t3595*t3643*t3661*t3677*t3678*var3[5] - 5.*t3595*t3643*t3667*t3681*var3[5] + 30.*t3595*t3643*t3672*t3673*t3674*var3[9] - 20.*t3595*t3643*t3661*t3677*t3678*var3[9] + 20.*t3595*t3643*t3665*t3666*t3669*var3[13] - 30.*t3595*t3643*t3672*t3673*t3674*var3[13] + 5.*t3595*t3643*t3653*t3662*var3[17] - 20.*t3595*t3643*t3665*t3666*t3669*var3[17] - 5.*t3595*t3643*t3653*t3662*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t3697;
  p_output1[15]=t3698;
  p_output1[16]=t3699;
  p_output1[17]=t3700;
  p_output1[18]=t3701;
  p_output1[19]=t3703;
  p_output1[20]=-5.*t3661*t3677*t3681*var3[1] - 20.*t3672*t3673*t3678*var3[5] + 5.*t3661*t3677*t3681*var3[5] - 30.*t3665*t3666*t3674*var3[9] + 20.*t3672*t3673*t3678*var3[9] - 20.*t3653*t3662*t3669*var3[13] + 30.*t3665*t3666*t3674*var3[13] + 20.*t3653*t3662*t3669*var3[17] - 5.*t3702*t3704*var3[17] + 5.*t3702*t3704*var3[21];
  p_output1[21]=-5.*t3681*t3719*var3[1] + 5.*t3667*t3681*var3[5] - 5.*t3661*t3677*t3681*var3[5] - 20.*t3661*t3667*t3678*t3719*var3[5] - 20.*t3672*t3673*t3678*var3[9] + 20.*t3661*t3677*t3678*var3[9] - 30.*t3673*t3674*t3677*t3719*var3[9] - 30.*t3665*t3666*t3674*var3[13] + 30.*t3672*t3673*t3674*var3[13] - 20.*t3666*t3669*t3672*t3719*var3[13] - 20.*t3653*t3662*t3669*var3[17] + 20.*t3665*t3666*t3669*var3[17] - 5.*t3662*t3665*t3719*var3[17] + 5.*t3653*t3662*var3[21] - 5.*t3702*t3704*var3[21];
  p_output1[22]=5.*t3649*t3667*t3681*var3[2] + 20.*t3649*t3661*t3677*t3678*var3[6] - 5.*t3649*t3667*t3681*var3[6] + 30.*t3649*t3672*t3673*t3674*var3[10] - 20.*t3649*t3661*t3677*t3678*var3[10] + 20.*t3649*t3665*t3666*t3669*var3[14] - 30.*t3649*t3672*t3673*t3674*var3[14] + 5.*t3649*t3653*t3662*var3[18] - 20.*t3649*t3665*t3666*t3669*var3[18] - 5.*t3649*t3653*t3662*var3[22];
  p_output1[23]=5.*t3595*t3643*t3667*t3681*var3[2] + 20.*t3595*t3643*t3661*t3677*t3678*var3[6] - 5.*t3595*t3643*t3667*t3681*var3[6] + 30.*t3595*t3643*t3672*t3673*t3674*var3[10] - 20.*t3595*t3643*t3661*t3677*t3678*var3[10] + 20.*t3595*t3643*t3665*t3666*t3669*var3[14] - 30.*t3595*t3643*t3672*t3673*t3674*var3[14] + 5.*t3595*t3643*t3653*t3662*var3[18] - 20.*t3595*t3643*t3665*t3666*t3669*var3[18] - 5.*t3595*t3643*t3653*t3662*var3[22];
  p_output1[24]=1.;
  p_output1[25]=1.;
  p_output1[26]=1.;
  p_output1[27]=t3697;
  p_output1[28]=t3698;
  p_output1[29]=t3699;
  p_output1[30]=t3700;
  p_output1[31]=t3701;
  p_output1[32]=t3703;
  p_output1[33]=-5.*t3661*t3677*t3681*var3[2] - 20.*t3672*t3673*t3678*var3[6] + 5.*t3661*t3677*t3681*var3[6] - 30.*t3665*t3666*t3674*var3[10] + 20.*t3672*t3673*t3678*var3[10] - 20.*t3653*t3662*t3669*var3[14] + 30.*t3665*t3666*t3674*var3[14] + 20.*t3653*t3662*t3669*var3[18] - 5.*t3702*t3704*var3[18] + 5.*t3702*t3704*var3[22];
  p_output1[34]=-5.*t3681*t3719*var3[2] + 5.*t3667*t3681*var3[6] - 5.*t3661*t3677*t3681*var3[6] - 20.*t3661*t3667*t3678*t3719*var3[6] - 20.*t3672*t3673*t3678*var3[10] + 20.*t3661*t3677*t3678*var3[10] - 30.*t3673*t3674*t3677*t3719*var3[10] - 30.*t3665*t3666*t3674*var3[14] + 30.*t3672*t3673*t3674*var3[14] - 20.*t3666*t3669*t3672*t3719*var3[14] - 20.*t3653*t3662*t3669*var3[18] + 20.*t3665*t3666*t3669*var3[18] - 5.*t3662*t3665*t3719*var3[18] + 5.*t3653*t3662*var3[22] - 5.*t3702*t3704*var3[22];
  p_output1[35]=5.*t3649*t3667*t3681*var3[3] + 20.*t3649*t3661*t3677*t3678*var3[7] - 5.*t3649*t3667*t3681*var3[7] + 30.*t3649*t3672*t3673*t3674*var3[11] - 20.*t3649*t3661*t3677*t3678*var3[11] + 20.*t3649*t3665*t3666*t3669*var3[15] - 30.*t3649*t3672*t3673*t3674*var3[15] + 5.*t3649*t3653*t3662*var3[19] - 20.*t3649*t3665*t3666*t3669*var3[19] - 5.*t3649*t3653*t3662*var3[23];
  p_output1[36]=5.*t3595*t3643*t3667*t3681*var3[3] + 20.*t3595*t3643*t3661*t3677*t3678*var3[7] - 5.*t3595*t3643*t3667*t3681*var3[7] + 30.*t3595*t3643*t3672*t3673*t3674*var3[11] - 20.*t3595*t3643*t3661*t3677*t3678*var3[11] + 20.*t3595*t3643*t3665*t3666*t3669*var3[15] - 30.*t3595*t3643*t3672*t3673*t3674*var3[15] + 5.*t3595*t3643*t3653*t3662*var3[19] - 20.*t3595*t3643*t3665*t3666*t3669*var3[19] - 5.*t3595*t3643*t3653*t3662*var3[23];
  p_output1[37]=1.;
  p_output1[38]=1.;
  p_output1[39]=1.;
  p_output1[40]=t3697;
  p_output1[41]=t3698;
  p_output1[42]=t3699;
  p_output1[43]=t3700;
  p_output1[44]=t3701;
  p_output1[45]=t3703;
  p_output1[46]=-5.*t3661*t3677*t3681*var3[3] - 20.*t3672*t3673*t3678*var3[7] + 5.*t3661*t3677*t3681*var3[7] - 30.*t3665*t3666*t3674*var3[11] + 20.*t3672*t3673*t3678*var3[11] - 20.*t3653*t3662*t3669*var3[15] + 30.*t3665*t3666*t3674*var3[15] + 20.*t3653*t3662*t3669*var3[19] - 5.*t3702*t3704*var3[19] + 5.*t3702*t3704*var3[23];
  p_output1[47]=-5.*t3681*t3719*var3[3] + 5.*t3667*t3681*var3[7] - 5.*t3661*t3677*t3681*var3[7] - 20.*t3661*t3667*t3678*t3719*var3[7] - 20.*t3672*t3673*t3678*var3[11] + 20.*t3661*t3677*t3678*var3[11] - 30.*t3673*t3674*t3677*t3719*var3[11] - 30.*t3665*t3666*t3674*var3[15] + 30.*t3672*t3673*t3674*var3[15] - 20.*t3666*t3669*t3672*t3719*var3[15] - 20.*t3653*t3662*t3669*var3[19] + 20.*t3665*t3666*t3669*var3[19] - 5.*t3662*t3665*t3719*var3[19] + 5.*t3653*t3662*var3[23] - 5.*t3702*t3704*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 48, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_RightStance.hh"

namespace RightStance
{

void J_y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
