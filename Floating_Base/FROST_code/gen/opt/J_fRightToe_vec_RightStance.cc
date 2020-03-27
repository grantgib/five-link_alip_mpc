/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:52:56 GMT-04:00
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
  double t11808;
  double t12386;
  double t11780;
  double t12394;
  double t4422;
  double t12180;
  double t12473;
  double t14396;
  double t14502;
  double t14506;
  double t14510;
  double t14512;
  double t6955;
  double t7209;
  double t14585;
  double t14586;
  double t14587;
  double t14400;
  double t14560;
  double t14564;
  double t14569;
  double t14570;
  double t14574;
  double t14575;
  double t14584;
  double t14596;
  double t14597;
  double t14598;
  double t14607;
  double t14608;
  double t14609;
  double t14612;
  double t14613;
  double t14614;
  double t14625;
  double t14626;
  double t14627;
  double t14615;
  double t14616;
  double t14617;
  double t14618;
  double t14621;
  double t14622;
  double t14623;
  double t14624;
  double t14628;
  double t14629;
  double t14630;
  double t14631;
  double t14632;
  double t14633;
  double t14634;
  double t14635;
  double t14636;
  double t14637;
  double t14638;
  double t14639;
  double t14640;
  double t14641;
  t11808 = Cos(var1[3]);
  t12386 = Sin(var1[2]);
  t11780 = Cos(var1[2]);
  t12394 = Sin(var1[3]);
  t4422 = Cos(var1[4]);
  t12180 = -1.*t11780*t11808;
  t12473 = t12386*t12394;
  t14396 = t12180 + t12473;
  t14502 = t11808*t12386;
  t14506 = t11780*t12394;
  t14510 = t14502 + t14506;
  t14512 = Sin(var1[4]);
  t6955 = -1.*t4422;
  t7209 = 1. + t6955;
  t14585 = -1.*t11808*t12386;
  t14586 = -1.*t11780*t12394;
  t14587 = t14585 + t14586;
  t14400 = 0.4*t7209*t14396;
  t14560 = -0.4*t14510*t14512;
  t14564 = t4422*t14396;
  t14569 = t14510*t14512;
  t14570 = t14564 + t14569;
  t14574 = 0.8*t14570;
  t14575 = t14400 + t14560 + t14574;
  t14584 = var2[2]*t14575;
  t14596 = 0.4*t7209*t14587;
  t14597 = -0.4*t14396*t14512;
  t14598 = t4422*t14587;
  t14607 = t14396*t14512;
  t14608 = t14598 + t14607;
  t14609 = 0.8*t14608;
  t14612 = t14596 + t14597 + t14609;
  t14613 = var2[0]*t14612;
  t14614 = t14584 + t14613;
  t14625 = t11780*t11808;
  t14626 = -1.*t12386*t12394;
  t14627 = t14625 + t14626;
  t14615 = -0.4*t4422*t14396;
  t14616 = 0.4*t14587*t14512;
  t14617 = -1.*t14587*t14512;
  t14618 = t14564 + t14617;
  t14621 = 0.8*t14618;
  t14622 = t14615 + t14616 + t14621;
  t14623 = var2[2]*t14622;
  t14624 = -0.4*t4422*t14587;
  t14628 = 0.4*t14627*t14512;
  t14629 = -1.*t14627*t14512;
  t14630 = t14598 + t14629;
  t14631 = 0.8*t14630;
  t14632 = t14624 + t14628 + t14631;
  t14633 = var2[0]*t14632;
  t14634 = t14623 + t14633;
  t14635 = 0.4*t7209*t14627;
  t14636 = -0.4*t14587*t14512;
  t14637 = t4422*t14627;
  t14638 = t14587*t14512;
  t14639 = t14637 + t14638;
  t14640 = 0.8*t14639;
  t14641 = t14635 + t14636 + t14640;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t14614;
  p_output1[3]=t14614;
  p_output1[4]=t14634;
  p_output1[5]=t14641;
  p_output1[6]=t14612;
  p_output1[7]=t14614;
  p_output1[8]=t14614;
  p_output1[9]=t14634;
  p_output1[10]=t14641;
  p_output1[11]=t14612;
  p_output1[12]=t14634;
  p_output1[13]=t14634;
  p_output1[14]=(t14628 + 0.4*t14510*t4422 + 0.8*(t14629 - 1.*t14510*t4422))*var2[0] + (t14616 + 0.4*t14627*t4422 + 0.8*(t14617 - 1.*t14627*t4422))*var2[2];
  p_output1[15]=0.4*t14510*t14512 + 0.8*(-1.*t14510*t14512 + t14637) - 0.4*t14627*t4422;
  p_output1[16]=t14632;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightToe_vec_RightStance.hh"

namespace RightStance
{

void J_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
