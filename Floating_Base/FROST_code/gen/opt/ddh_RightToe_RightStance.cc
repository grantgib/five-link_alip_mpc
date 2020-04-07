/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:02:48 GMT-04:00
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
  double t88;
  double t81;
  double t84;
  double t107;
  double t58;
  double t85;
  double t110;
  double t111;
  double t414;
  double t688;
  double t832;
  double t1670;
  double t66;
  double t79;
  double t3918;
  double t4090;
  double t6466;
  double t2626;
  double t6467;
  double t6468;
  double t6489;
  double t6490;
  double t6494;
  double t6495;
  double t6546;
  double t6547;
  double t6553;
  double t6554;
  double t6555;
  double t6556;
  double t6560;
  double t6562;
  double t6563;
  double t6564;
  double t6565;
  double t6571;
  double t6572;
  double t6609;
  double t6610;
  double t6611;
  double t6606;
  double t6612;
  double t6615;
  double t6616;
  double t6617;
  double t6618;
  double t6605;
  double t6619;
  double t6620;
  double t6621;
  double t6631;
  double t6633;
  double t6638;
  double t6639;
  double t6642;
  double t6643;
  double t6644;
  double t6652;
  double t6653;
  double t6654;
  double t6655;
  double t6656;
  double t6657;
  double t6651;
  double t6658;
  double t6659;
  double t6660;
  t88 = Cos(var1[2]);
  t81 = Cos(var1[3]);
  t84 = Sin(var1[2]);
  t107 = Sin(var1[3]);
  t58 = Cos(var1[4]);
  t85 = t81*t84;
  t110 = t88*t107;
  t111 = t85 + t110;
  t414 = t88*t81;
  t688 = -1.*t84*t107;
  t832 = t414 + t688;
  t1670 = Sin(var1[4]);
  t66 = -1.*t58;
  t79 = 1. + t66;
  t3918 = -1.*t81*t84;
  t4090 = -1.*t88*t107;
  t6466 = t3918 + t4090;
  t2626 = 0.4*t79*t832;
  t6467 = -0.4*t6466*t1670;
  t6468 = t58*t832;
  t6489 = t6466*t1670;
  t6490 = t6468 + t6489;
  t6494 = 0.8*t6490;
  t6495 = t2626 + t6467 + t6494;
  t6546 = -0.4*t58*t832;
  t6547 = 0.4*t111*t1670;
  t6553 = -1.*t111*t1670;
  t6554 = t6468 + t6553;
  t6555 = 0.8*t6554;
  t6556 = t6546 + t6547 + t6555;
  t6560 = -0.4*t58*t6466;
  t6562 = 0.4*t832*t1670;
  t6563 = t58*t6466;
  t6564 = -1.*t832*t1670;
  t6565 = t6563 + t6564;
  t6571 = 0.8*t6565;
  t6572 = t6560 + t6562 + t6571;
  t6609 = -1.*t88*t81;
  t6610 = t84*t107;
  t6611 = t6609 + t6610;
  t6606 = 0.4*t79*t6466;
  t6612 = -0.4*t6611*t1670;
  t6615 = t6611*t1670;
  t6616 = t6563 + t6615;
  t6617 = 0.8*t6616;
  t6618 = t6606 + t6612 + t6617;
  t6605 = var2[4]*t6572;
  t6619 = var2[2]*t6618;
  t6620 = var2[3]*t6618;
  t6621 = t6605 + t6619 + t6620;
  t6631 = 0.4*t6466*t1670;
  t6633 = -1.*t6466*t1670;
  t6638 = -0.4*t58*t6611;
  t6639 = t58*t6611;
  t6642 = t6639 + t6633;
  t6643 = 0.8*t6642;
  t6644 = t6638 + t6631 + t6643;
  t6652 = 0.4*t79*t6611;
  t6653 = -0.4*t111*t1670;
  t6654 = t111*t1670;
  t6655 = t6639 + t6654;
  t6656 = 0.8*t6655;
  t6657 = t6652 + t6653 + t6656;
  t6651 = var2[4]*t6644;
  t6658 = var2[2]*t6657;
  t6659 = var2[3]*t6657;
  t6660 = t6651 + t6658 + t6659;
  p_output1[0]=0.4*t111*t79 - 0.4*t1670*t832 + 0.8*(t111*t58 + t1670*t832) + var1[0] + var2[0] + t6495*var2[2] + t6621*var2[2] + t6495*var2[3] + t6621*var2[3] + t6556*var2[4] + var2[4]*(t6572*var2[2] + t6572*var2[3] + (0.4*t111*t58 + t6562 + 0.8*(-1.*t111*t58 + t6564))*var2[4]) + var3[0] + t6495*var3[2] + t6495*var3[3] + t6556*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t2626 + t6467 + t6494 + t6605 + t6619 + t6620 + var1[1] + var2[1] + t6660*var2[2] + t6660*var2[3] + var2[4]*(t6644*var2[2] + t6644*var2[3] + (t6631 + 0.4*t58*t832 + 0.8*(t6633 - 1.*t58*t832))*var2[4]) + var3[1] + t6618*var3[2] + t6618*var3[3] + t6572*var3[4] - 1.*var4[2];
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
