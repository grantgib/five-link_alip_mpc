/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:23:12 GMT-05:00
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
  double t8669;
  double t8663;
  double t8664;
  double t8670;
  double t3012;
  double t8665;
  double t8671;
  double t8672;
  double t8674;
  double t8675;
  double t8676;
  double t8677;
  double t8680;
  double t8698;
  double t8699;
  double t8700;
  double t8695;
  double t8696;
  double t8697;
  double t8701;
  double t8702;
  double t8703;
  double t8704;
  double t8705;
  double t8673;
  double t8679;
  double t8681;
  double t8682;
  double t8683;
  double t8693;
  double t8694;
  double t8706;
  double t8707;
  double t8708;
  double t8711;
  double t8712;
  double t8713;
  double t8721;
  double t8722;
  double t8723;
  double t8724;
  double t8725;
  double t8726;
  double t8727;
  double t8736;
  double t8742;
  double t8743;
  double t8744;
  double t8745;
  double t8746;
  double t8747;
  double t8734;
  double t8735;
  double t8737;
  double t8738;
  double t8739;
  double t8740;
  double t8741;
  double t8748;
  double t8749;
  double t8750;
  t8669 = Cos(var1[2]);
  t8663 = Cos(var1[3]);
  t8664 = Sin(var1[2]);
  t8670 = Sin(var1[3]);
  t3012 = Cos(var1[4]);
  t8665 = -1.*t8663*t8664;
  t8671 = -1.*t8669*t8670;
  t8672 = t8665 + t8671;
  t8674 = t8669*t8663;
  t8675 = -1.*t8664*t8670;
  t8676 = t8674 + t8675;
  t8677 = Sin(var1[4]);
  t8680 = t3012*t8672;
  t8698 = -1.*t8669*t8663;
  t8699 = t8664*t8670;
  t8700 = t8698 + t8699;
  t8695 = -1.*t3012;
  t8696 = 1. + t8695;
  t8697 = 0.4*t8696*t8672;
  t8701 = -0.4*t8700*t8677;
  t8702 = t8700*t8677;
  t8703 = t8680 + t8702;
  t8704 = 0.8*t8703;
  t8705 = t8697 + t8701 + t8704;
  t8673 = -0.4*t3012*t8672;
  t8679 = 0.4*t8676*t8677;
  t8681 = -1.*t8676*t8677;
  t8682 = t8680 + t8681;
  t8683 = 0.8*t8682;
  t8693 = t8673 + t8679 + t8683;
  t8694 = var2[4]*t8693;
  t8706 = var2[2]*t8705;
  t8707 = var2[3]*t8705;
  t8708 = t8694 + t8706 + t8707;
  t8711 = t8663*t8664;
  t8712 = t8669*t8670;
  t8713 = t8711 + t8712;
  t8721 = 0.4*t8696*t8676;
  t8722 = -0.4*t8672*t8677;
  t8723 = t3012*t8676;
  t8724 = t8672*t8677;
  t8725 = t8723 + t8724;
  t8726 = 0.8*t8725;
  t8727 = t8721 + t8722 + t8726;
  t8736 = t3012*t8700;
  t8742 = 0.4*t8696*t8700;
  t8743 = -0.4*t8713*t8677;
  t8744 = t8713*t8677;
  t8745 = t8736 + t8744;
  t8746 = 0.8*t8745;
  t8747 = t8742 + t8743 + t8746;
  t8734 = -0.4*t3012*t8700;
  t8735 = 0.4*t8672*t8677;
  t8737 = -1.*t8672*t8677;
  t8738 = t8736 + t8737;
  t8739 = 0.8*t8738;
  t8740 = t8734 + t8735 + t8739;
  t8741 = var2[4]*t8740;
  t8748 = var2[2]*t8747;
  t8749 = var2[3]*t8747;
  t8750 = t8741 + t8748 + t8749;
  p_output1[0]=t8708;
  p_output1[1]=t8708;
  p_output1[2]=t8693*var2[2] + t8693*var2[3] + (t8679 + 0.4*t3012*t8713 + 0.8*(t8681 - 1.*t3012*t8713))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t8727;
  p_output1[5]=t8727;
  p_output1[6]=-0.4*t3012*t8676 + 0.4*t8677*t8713 + 0.8*(-1.*t8677*t8713 + t8723);
  p_output1[7]=t8750;
  p_output1[8]=t8750;
  p_output1[9]=t8740*var2[2] + t8740*var2[3] + (0.4*t3012*t8676 + t8735 + 0.8*(-1.*t3012*t8676 + t8737))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t8705;
  p_output1[12]=t8705;
  p_output1[13]=t8693;
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
