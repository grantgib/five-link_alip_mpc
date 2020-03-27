/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:53:26 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t12483;
  double t11494;
  double t11861;
  double t12495;
  double t2292;
  double t12151;
  double t14687;
  double t14688;
  double t14693;
  double t14694;
  double t14695;
  double t14696;
  double t2895;
  double t11493;
  double t14710;
  double t14711;
  double t14729;
  double t14709;
  double t14730;
  double t14731;
  double t14732;
  double t14733;
  double t14734;
  double t14735;
  double t14740;
  double t14741;
  double t14742;
  double t14743;
  double t14744;
  double t14745;
  double t14748;
  double t14749;
  double t14750;
  double t14751;
  double t14752;
  double t14753;
  double t14754;
  double t14767;
  double t14768;
  double t14769;
  double t14766;
  double t14770;
  double t14771;
  double t14772;
  double t14773;
  double t14774;
  double t14765;
  double t14775;
  double t14776;
  double t14777;
  double t14787;
  double t14789;
  double t14794;
  double t14795;
  double t14796;
  double t14797;
  double t14798;
  double t14804;
  double t14805;
  double t14806;
  double t14807;
  double t14808;
  double t14809;
  double t14803;
  double t14810;
  double t14811;
  double t14812;
  t12483 = Cos(var1[2]);
  t11494 = Cos(var1[3]);
  t11861 = Sin(var1[2]);
  t12495 = Sin(var1[3]);
  t2292 = Cos(var1[4]);
  t12151 = t11494*t11861;
  t14687 = t12483*t12495;
  t14688 = t12151 + t14687;
  t14693 = t12483*t11494;
  t14694 = -1.*t11861*t12495;
  t14695 = t14693 + t14694;
  t14696 = Sin(var1[4]);
  t2895 = -1.*t2292;
  t11493 = 1. + t2895;
  t14710 = -1.*t11494*t11861;
  t14711 = -1.*t12483*t12495;
  t14729 = t14710 + t14711;
  t14709 = 0.4*t11493*t14695;
  t14730 = -0.4*t14729*t14696;
  t14731 = t2292*t14695;
  t14732 = t14729*t14696;
  t14733 = t14731 + t14732;
  t14734 = 0.8*t14733;
  t14735 = t14709 + t14730 + t14734;
  t14740 = -0.4*t2292*t14695;
  t14741 = 0.4*t14688*t14696;
  t14742 = -1.*t14688*t14696;
  t14743 = t14731 + t14742;
  t14744 = 0.8*t14743;
  t14745 = t14740 + t14741 + t14744;
  t14748 = -0.4*t2292*t14729;
  t14749 = 0.4*t14695*t14696;
  t14750 = t2292*t14729;
  t14751 = -1.*t14695*t14696;
  t14752 = t14750 + t14751;
  t14753 = 0.8*t14752;
  t14754 = t14748 + t14749 + t14753;
  t14767 = -1.*t12483*t11494;
  t14768 = t11861*t12495;
  t14769 = t14767 + t14768;
  t14766 = 0.4*t11493*t14729;
  t14770 = -0.4*t14769*t14696;
  t14771 = t14769*t14696;
  t14772 = t14750 + t14771;
  t14773 = 0.8*t14772;
  t14774 = t14766 + t14770 + t14773;
  t14765 = var2[4]*t14754;
  t14775 = var2[2]*t14774;
  t14776 = var2[3]*t14774;
  t14777 = t14765 + t14775 + t14776;
  t14787 = 0.4*t14729*t14696;
  t14789 = -1.*t14729*t14696;
  t14794 = -0.4*t2292*t14769;
  t14795 = t2292*t14769;
  t14796 = t14795 + t14789;
  t14797 = 0.8*t14796;
  t14798 = t14794 + t14787 + t14797;
  t14804 = 0.4*t11493*t14769;
  t14805 = -0.4*t14688*t14696;
  t14806 = t14688*t14696;
  t14807 = t14795 + t14806;
  t14808 = 0.8*t14807;
  t14809 = t14804 + t14805 + t14808;
  t14803 = var2[4]*t14798;
  t14810 = var2[2]*t14809;
  t14811 = var2[3]*t14809;
  t14812 = t14803 + t14810 + t14811;
  p_output1[0]=0.4*t11493*t14688 - 0.4*t14695*t14696 + 0.8*(t14695*t14696 + t14688*t2292) + var1[0] + var2[0] + t14735*var2[2] + t14777*var2[2] + t14735*var2[3] + t14777*var2[3] + t14745*var2[4] + var2[4]*(t14754*var2[2] + t14754*var2[3] + (t14749 + 0.4*t14688*t2292 + 0.8*(t14751 - 1.*t14688*t2292))*var2[4]) + var3[0] + t14735*var3[2] + t14735*var3[3] + t14745*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t14709 + t14730 + t14734 + t14765 + t14775 + t14776 + var1[1] + var2[1] + t14812*var2[2] + t14812*var2[3] + var2[4]*(t14798*var2[2] + t14798*var2[3] + (t14787 + 0.4*t14695*t2292 + 0.8*(t14789 - 1.*t14695*t2292))*var2[4]) + var3[1] + t14774*var3[2] + t14774*var3[3] + t14754*var3[4] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightToe_RightStance.hh"

namespace RightStance
{

void ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
