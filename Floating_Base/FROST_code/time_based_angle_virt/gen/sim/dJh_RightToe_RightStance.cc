/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:34:40 GMT-05:00
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
  double t5484;
  double t5466;
  double t5482;
  double t5485;
  double t887;
  double t5483;
  double t5488;
  double t5489;
  double t5491;
  double t5492;
  double t5495;
  double t5496;
  double t5498;
  double t5507;
  double t5508;
  double t5509;
  double t5504;
  double t5505;
  double t5506;
  double t5510;
  double t5511;
  double t5512;
  double t5513;
  double t5514;
  double t5520;
  double t5527;
  double t5528;
  double t5529;
  double t5526;
  double t5530;
  double t5531;
  double t5532;
  double t5533;
  double t5534;
  double t5490;
  double t5497;
  double t5499;
  double t5500;
  double t5501;
  double t5502;
  double t5503;
  double t5515;
  double t5516;
  double t5517;
  double t5518;
  double t5519;
  double t5521;
  double t5522;
  double t5523;
  double t5524;
  double t5525;
  double t5535;
  double t5536;
  double t5537;
  t5484 = Cos(var1[2]);
  t5466 = Cos(var1[3]);
  t5482 = Sin(var1[2]);
  t5485 = Sin(var1[3]);
  t887 = Cos(var1[4]);
  t5483 = -1.*t5466*t5482;
  t5488 = -1.*t5484*t5485;
  t5489 = t5483 + t5488;
  t5491 = t5484*t5466;
  t5492 = -1.*t5482*t5485;
  t5495 = t5491 + t5492;
  t5496 = Sin(var1[4]);
  t5498 = t887*t5489;
  t5507 = -1.*t5484*t5466;
  t5508 = t5482*t5485;
  t5509 = t5507 + t5508;
  t5504 = -1.*t887;
  t5505 = 1. + t5504;
  t5506 = 0.4*t5505*t5489;
  t5510 = -0.4*t5509*t5496;
  t5511 = t5509*t5496;
  t5512 = t5498 + t5511;
  t5513 = 0.8*t5512;
  t5514 = t5506 + t5510 + t5513;
  t5520 = t887*t5509;
  t5527 = t5466*t5482;
  t5528 = t5484*t5485;
  t5529 = t5527 + t5528;
  t5526 = 0.4*t5505*t5509;
  t5530 = -0.4*t5529*t5496;
  t5531 = t5529*t5496;
  t5532 = t5520 + t5531;
  t5533 = 0.8*t5532;
  t5534 = t5526 + t5530 + t5533;
  t5490 = -0.4*t887*t5489;
  t5497 = 0.4*t5495*t5496;
  t5499 = -1.*t5495*t5496;
  t5500 = t5498 + t5499;
  t5501 = 0.8*t5500;
  t5502 = t5490 + t5497 + t5501;
  t5503 = var2[4]*t5502;
  t5515 = var2[2]*t5514;
  t5516 = var2[3]*t5514;
  t5517 = t5503 + t5515 + t5516;
  t5518 = -0.4*t887*t5509;
  t5519 = 0.4*t5489*t5496;
  t5521 = -1.*t5489*t5496;
  t5522 = t5520 + t5521;
  t5523 = 0.8*t5522;
  t5524 = t5518 + t5519 + t5523;
  t5525 = var2[4]*t5524;
  t5535 = var2[2]*t5534;
  t5536 = var2[3]*t5534;
  t5537 = t5525 + t5535 + t5536;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t5517;
  p_output1[7]=0;
  p_output1[8]=t5537;
  p_output1[9]=t5517;
  p_output1[10]=0;
  p_output1[11]=t5537;
  p_output1[12]=t5502*var2[2] + t5502*var2[3] + (t5497 + 0.4*t5529*t887 + 0.8*(t5499 - 1.*t5529*t887))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t5524*var2[2] + t5524*var2[3] + (t5519 + 0.4*t5495*t887 + 0.8*(t5521 - 1.*t5495*t887))*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_RightToe_RightStance.hh"

namespace SymFunction
{

void dJh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
