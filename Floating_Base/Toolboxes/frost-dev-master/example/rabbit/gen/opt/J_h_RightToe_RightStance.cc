/*
 * Automatically Generated from Mathematica.
 * Mon 6 Apr 2020 23:57:13 GMT-04:00
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
  double t782;
  double t787;
  double t773;
  double t788;
  double t723;
  double t783;
  double t791;
  double t792;
  double t805;
  double t806;
  double t807;
  double t811;
  double t766;
  double t772;
  double t793;
  double t812;
  double t816;
  double t817;
  double t820;
  double t821;
  double t822;
  double t829;
  double t833;
  double t834;
  double t846;
  double t847;
  double t848;
  double t845;
  double t852;
  double t853;
  double t854;
  double t855;
  double t856;
  double t857;
  t782 = Cos(var1[3]);
  t787 = Sin(var1[2]);
  t773 = Cos(var1[2]);
  t788 = Sin(var1[3]);
  t723 = Cos(var1[4]);
  t783 = t773*t782;
  t791 = -1.*t787*t788;
  t792 = t783 + t791;
  t805 = -1.*t782*t787;
  t806 = -1.*t773*t788;
  t807 = t805 + t806;
  t811 = Sin(var1[4]);
  t766 = -1.*t723;
  t772 = 1. + t766;
  t793 = 0.4*t772*t792;
  t812 = -0.4*t807*t811;
  t816 = t723*t792;
  t817 = t807*t811;
  t820 = t816 + t817;
  t821 = 0.8*t820;
  t822 = t793 + t812 + t821;
  t829 = t782*t787;
  t833 = t773*t788;
  t834 = t829 + t833;
  t846 = -1.*t773*t782;
  t847 = t787*t788;
  t848 = t846 + t847;
  t845 = 0.4*t772*t807;
  t852 = -0.4*t848*t811;
  t853 = t723*t807;
  t854 = t848*t811;
  t855 = t853 + t854;
  t856 = 0.8*t855;
  t857 = t845 + t852 + t856;
  p_output1[0]=1.;
  p_output1[1]=t822;
  p_output1[2]=t822;
  p_output1[3]=-0.4*t723*t792 + 0.4*t811*t834 + 0.8*(t816 - 1.*t811*t834);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t857;
  p_output1[8]=t857;
  p_output1[9]=-0.4*t723*t807 + 0.4*t792*t811 + 0.8*(-1.*t792*t811 + t853);
  p_output1[10]=-1.;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightToe_RightStance.hh"

namespace RightStance
{

void J_h_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
