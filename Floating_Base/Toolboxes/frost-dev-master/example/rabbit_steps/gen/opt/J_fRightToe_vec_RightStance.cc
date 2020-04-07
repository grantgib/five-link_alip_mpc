/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:51:52 GMT-04:00
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
  double t547;
  double t1518;
  double t503;
  double t1578;
  double t296;
  double t638;
  double t1685;
  double t1711;
  double t1713;
  double t1739;
  double t1826;
  double t1931;
  double t496;
  double t497;
  double t2925;
  double t2975;
  double t4453;
  double t1712;
  double t1973;
  double t2051;
  double t2064;
  double t2198;
  double t2294;
  double t2512;
  double t2639;
  double t4481;
  double t4492;
  double t4493;
  double t4539;
  double t4542;
  double t4545;
  double t4566;
  double t4567;
  double t4571;
  double t4637;
  double t4643;
  double t4644;
  double t4577;
  double t4578;
  double t4579;
  double t4581;
  double t4582;
  double t4583;
  double t4590;
  double t4633;
  double t4653;
  double t4657;
  double t4663;
  double t4664;
  double t4668;
  double t4669;
  double t4671;
  double t4673;
  double t4678;
  double t4679;
  double t4682;
  double t4683;
  double t4686;
  double t4690;
  t547 = Cos(var1[3]);
  t1518 = Sin(var1[2]);
  t503 = Cos(var1[2]);
  t1578 = Sin(var1[3]);
  t296 = Cos(var1[4]);
  t638 = -1.*t503*t547;
  t1685 = t1518*t1578;
  t1711 = t638 + t1685;
  t1713 = t547*t1518;
  t1739 = t503*t1578;
  t1826 = t1713 + t1739;
  t1931 = Sin(var1[4]);
  t496 = -1.*t296;
  t497 = 1. + t496;
  t2925 = -1.*t547*t1518;
  t2975 = -1.*t503*t1578;
  t4453 = t2925 + t2975;
  t1712 = 0.4*t497*t1711;
  t1973 = -0.4*t1826*t1931;
  t2051 = t296*t1711;
  t2064 = t1826*t1931;
  t2198 = t2051 + t2064;
  t2294 = 0.8*t2198;
  t2512 = t1712 + t1973 + t2294;
  t2639 = var2[2]*t2512;
  t4481 = 0.4*t497*t4453;
  t4492 = -0.4*t1711*t1931;
  t4493 = t296*t4453;
  t4539 = t1711*t1931;
  t4542 = t4493 + t4539;
  t4545 = 0.8*t4542;
  t4566 = t4481 + t4492 + t4545;
  t4567 = var2[0]*t4566;
  t4571 = t2639 + t4567;
  t4637 = t503*t547;
  t4643 = -1.*t1518*t1578;
  t4644 = t4637 + t4643;
  t4577 = -0.4*t296*t1711;
  t4578 = 0.4*t4453*t1931;
  t4579 = -1.*t4453*t1931;
  t4581 = t2051 + t4579;
  t4582 = 0.8*t4581;
  t4583 = t4577 + t4578 + t4582;
  t4590 = var2[2]*t4583;
  t4633 = -0.4*t296*t4453;
  t4653 = 0.4*t4644*t1931;
  t4657 = -1.*t4644*t1931;
  t4663 = t4493 + t4657;
  t4664 = 0.8*t4663;
  t4668 = t4633 + t4653 + t4664;
  t4669 = var2[0]*t4668;
  t4671 = t4590 + t4669;
  t4673 = 0.4*t497*t4644;
  t4678 = -0.4*t4453*t1931;
  t4679 = t296*t4644;
  t4682 = t4453*t1931;
  t4683 = t4679 + t4682;
  t4686 = 0.8*t4683;
  t4690 = t4673 + t4678 + t4686;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t4571;
  p_output1[3]=t4571;
  p_output1[4]=t4671;
  p_output1[5]=t4690;
  p_output1[6]=t4566;
  p_output1[7]=t4571;
  p_output1[8]=t4571;
  p_output1[9]=t4671;
  p_output1[10]=t4690;
  p_output1[11]=t4566;
  p_output1[12]=t4671;
  p_output1[13]=t4671;
  p_output1[14]=(0.4*t1826*t296 + t4653 + 0.8*(-1.*t1826*t296 + t4657))*var2[0] + (t4578 + 0.4*t296*t4644 + 0.8*(t4579 - 1.*t296*t4644))*var2[2];
  p_output1[15]=0.4*t1826*t1931 - 0.4*t296*t4644 + 0.8*(-1.*t1826*t1931 + t4679);
  p_output1[16]=t4668;
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
