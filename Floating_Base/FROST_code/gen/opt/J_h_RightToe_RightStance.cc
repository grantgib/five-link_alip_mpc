/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:23:07 GMT-05:00
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
  double t8610;
  double t8612;
  double t8609;
  double t8613;
  double t1628;
  double t8611;
  double t8614;
  double t8615;
  double t8620;
  double t8621;
  double t8622;
  double t8623;
  double t8603;
  double t8608;
  double t8616;
  double t8624;
  double t8625;
  double t8626;
  double t8627;
  double t8628;
  double t8629;
  double t8631;
  double t8632;
  double t8633;
  double t8640;
  double t8641;
  double t8642;
  double t8639;
  double t8643;
  double t8644;
  double t8645;
  double t8646;
  double t8647;
  double t8648;
  t8610 = Cos(var1[3]);
  t8612 = Sin(var1[2]);
  t8609 = Cos(var1[2]);
  t8613 = Sin(var1[3]);
  t1628 = Cos(var1[4]);
  t8611 = t8609*t8610;
  t8614 = -1.*t8612*t8613;
  t8615 = t8611 + t8614;
  t8620 = -1.*t8610*t8612;
  t8621 = -1.*t8609*t8613;
  t8622 = t8620 + t8621;
  t8623 = Sin(var1[4]);
  t8603 = -1.*t1628;
  t8608 = 1. + t8603;
  t8616 = 0.4*t8608*t8615;
  t8624 = -0.4*t8622*t8623;
  t8625 = t1628*t8615;
  t8626 = t8622*t8623;
  t8627 = t8625 + t8626;
  t8628 = 0.8*t8627;
  t8629 = t8616 + t8624 + t8628;
  t8631 = t8610*t8612;
  t8632 = t8609*t8613;
  t8633 = t8631 + t8632;
  t8640 = -1.*t8609*t8610;
  t8641 = t8612*t8613;
  t8642 = t8640 + t8641;
  t8639 = 0.4*t8608*t8622;
  t8643 = -0.4*t8642*t8623;
  t8644 = t1628*t8622;
  t8645 = t8642*t8623;
  t8646 = t8644 + t8645;
  t8647 = 0.8*t8646;
  t8648 = t8639 + t8643 + t8647;
  p_output1[0]=1.;
  p_output1[1]=t8629;
  p_output1[2]=t8629;
  p_output1[3]=-0.4*t1628*t8615 + 0.4*t8623*t8633 + 0.8*(t8625 - 1.*t8623*t8633);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t8648;
  p_output1[8]=t8648;
  p_output1[9]=-0.4*t1628*t8622 + 0.4*t8615*t8623 + 0.8*(-1.*t8615*t8623 + t8644);
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
