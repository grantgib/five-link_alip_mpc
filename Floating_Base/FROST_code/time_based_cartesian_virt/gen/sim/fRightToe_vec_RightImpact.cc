/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 15:59:18 GMT-05:00
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
  double t4481;
  double t4493;
  double t4480;
  double t4494;
  double t4474;
  double t4482;
  double t4495;
  double t4496;
  double t4498;
  double t4499;
  double t4500;
  double t4501;
  double t4478;
  double t4479;
  double t4510;
  double t4511;
  double t4512;
  double t4497;
  double t4502;
  double t4503;
  double t4504;
  double t4505;
  double t4506;
  double t4507;
  double t4508;
  double t4509;
  double t4513;
  double t4514;
  double t4515;
  double t4516;
  double t4517;
  double t4518;
  double t4519;
  double t4520;
  double t4522;
  double t4523;
  double t4524;
  t4481 = Cos(var1[3]);
  t4493 = Sin(var1[2]);
  t4480 = Cos(var1[2]);
  t4494 = Sin(var1[3]);
  t4474 = Cos(var1[4]);
  t4482 = t4480*t4481;
  t4495 = -1.*t4493*t4494;
  t4496 = t4482 + t4495;
  t4498 = -1.*t4481*t4493;
  t4499 = -1.*t4480*t4494;
  t4500 = t4498 + t4499;
  t4501 = Sin(var1[4]);
  t4478 = -1.*t4474;
  t4479 = 1. + t4478;
  t4510 = -1.*t4480*t4481;
  t4511 = t4493*t4494;
  t4512 = t4510 + t4511;
  t4497 = 0.4*t4479*t4496;
  t4502 = -0.4*t4500*t4501;
  t4503 = t4474*t4496;
  t4504 = t4500*t4501;
  t4505 = t4503 + t4504;
  t4506 = 0.8*t4505;
  t4507 = t4497 + t4502 + t4506;
  t4508 = var2[0]*t4507;
  t4509 = 0.4*t4479*t4500;
  t4513 = -0.4*t4512*t4501;
  t4514 = t4474*t4500;
  t4515 = t4512*t4501;
  t4516 = t4514 + t4515;
  t4517 = 0.8*t4516;
  t4518 = t4509 + t4513 + t4517;
  t4519 = var2[2]*t4518;
  t4520 = t4508 + t4519;
  t4522 = t4481*t4493;
  t4523 = t4480*t4494;
  t4524 = t4522 + t4523;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t4520;
  p_output1[3]=t4520;
  p_output1[4]=(-0.4*t4474*t4496 + 0.4*t4501*t4524 + 0.8*(t4503 - 1.*t4501*t4524))*var2[0] + (-0.4*t4474*t4500 + 0.4*t4496*t4501 + 0.8*(-1.*t4496*t4501 + t4514))*var2[2];
  p_output1[5]=0;
  p_output1[6]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_vec_RightImpact.hh"

namespace SymFunction
{

void fRightToe_vec_RightImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
