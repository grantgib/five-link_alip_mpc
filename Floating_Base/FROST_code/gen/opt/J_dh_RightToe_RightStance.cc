/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:02:37 GMT-04:00
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
  double t6326;
  double t645;
  double t887;
  double t6327;
  double t612;
  double t6325;
  double t6350;
  double t6351;
  double t6353;
  double t6354;
  double t6357;
  double t6360;
  double t6369;
  double t6419;
  double t6420;
  double t6425;
  double t6407;
  double t6412;
  double t6414;
  double t6427;
  double t6428;
  double t6430;
  double t6431;
  double t6432;
  double t6352;
  double t6368;
  double t6375;
  double t6376;
  double t6377;
  double t6378;
  double t6379;
  double t6433;
  double t6434;
  double t6443;
  double t6449;
  double t6452;
  double t6453;
  double t6472;
  double t6473;
  double t6477;
  double t6478;
  double t6481;
  double t6482;
  double t6483;
  double t6503;
  double t6514;
  double t6515;
  double t6516;
  double t6517;
  double t6518;
  double t6519;
  double t6501;
  double t6502;
  double t6506;
  double t6507;
  double t6508;
  double t6509;
  double t6513;
  double t6520;
  double t6521;
  double t6527;
  t6326 = Cos(var1[2]);
  t645 = Cos(var1[3]);
  t887 = Sin(var1[2]);
  t6327 = Sin(var1[3]);
  t612 = Cos(var1[4]);
  t6325 = -1.*t645*t887;
  t6350 = -1.*t6326*t6327;
  t6351 = t6325 + t6350;
  t6353 = t6326*t645;
  t6354 = -1.*t887*t6327;
  t6357 = t6353 + t6354;
  t6360 = Sin(var1[4]);
  t6369 = t612*t6351;
  t6419 = -1.*t6326*t645;
  t6420 = t887*t6327;
  t6425 = t6419 + t6420;
  t6407 = -1.*t612;
  t6412 = 1. + t6407;
  t6414 = 0.4*t6412*t6351;
  t6427 = -0.4*t6425*t6360;
  t6428 = t6425*t6360;
  t6430 = t6369 + t6428;
  t6431 = 0.8*t6430;
  t6432 = t6414 + t6427 + t6431;
  t6352 = -0.4*t612*t6351;
  t6368 = 0.4*t6357*t6360;
  t6375 = -1.*t6357*t6360;
  t6376 = t6369 + t6375;
  t6377 = 0.8*t6376;
  t6378 = t6352 + t6368 + t6377;
  t6379 = var2[4]*t6378;
  t6433 = var2[2]*t6432;
  t6434 = var2[3]*t6432;
  t6443 = t6379 + t6433 + t6434;
  t6449 = t645*t887;
  t6452 = t6326*t6327;
  t6453 = t6449 + t6452;
  t6472 = 0.4*t6412*t6357;
  t6473 = -0.4*t6351*t6360;
  t6477 = t612*t6357;
  t6478 = t6351*t6360;
  t6481 = t6477 + t6478;
  t6482 = 0.8*t6481;
  t6483 = t6472 + t6473 + t6482;
  t6503 = t612*t6425;
  t6514 = 0.4*t6412*t6425;
  t6515 = -0.4*t6453*t6360;
  t6516 = t6453*t6360;
  t6517 = t6503 + t6516;
  t6518 = 0.8*t6517;
  t6519 = t6514 + t6515 + t6518;
  t6501 = -0.4*t612*t6425;
  t6502 = 0.4*t6351*t6360;
  t6506 = -1.*t6351*t6360;
  t6507 = t6503 + t6506;
  t6508 = 0.8*t6507;
  t6509 = t6501 + t6502 + t6508;
  t6513 = var2[4]*t6509;
  t6520 = var2[2]*t6519;
  t6521 = var2[3]*t6519;
  t6527 = t6513 + t6520 + t6521;
  p_output1[0]=t6443;
  p_output1[1]=t6443;
  p_output1[2]=t6378*var2[2] + t6378*var2[3] + (t6368 + 0.4*t612*t6453 + 0.8*(t6375 - 1.*t612*t6453))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t6483;
  p_output1[5]=t6483;
  p_output1[6]=-0.4*t612*t6357 + 0.4*t6360*t6453 + 0.8*(-1.*t6360*t6453 + t6477);
  p_output1[7]=t6527;
  p_output1[8]=t6527;
  p_output1[9]=t6509*var2[2] + t6509*var2[3] + (0.4*t612*t6357 + t6502 + 0.8*(-1.*t612*t6357 + t6506))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t6432;
  p_output1[12]=t6432;
  p_output1[13]=t6378;
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
