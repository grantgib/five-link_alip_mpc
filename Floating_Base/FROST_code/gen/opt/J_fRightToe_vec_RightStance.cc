/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:23:03 GMT-05:00
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
  double t3022;
  double t8327;
  double t2646;
  double t8371;
  double t995;
  double t3056;
  double t8372;
  double t8450;
  double t8470;
  double t8471;
  double t8479;
  double t8514;
  double t1769;
  double t1811;
  double t8539;
  double t8548;
  double t8549;
  double t8456;
  double t8521;
  double t8522;
  double t8526;
  double t8527;
  double t8536;
  double t8537;
  double t8538;
  double t8550;
  double t8559;
  double t8560;
  double t8561;
  double t8564;
  double t8565;
  double t8566;
  double t8567;
  double t8568;
  double t8579;
  double t8580;
  double t8581;
  double t8569;
  double t8570;
  double t8573;
  double t8574;
  double t8575;
  double t8576;
  double t8577;
  double t8578;
  double t8582;
  double t8583;
  double t8584;
  double t8585;
  double t8586;
  double t8587;
  double t8588;
  double t8589;
  double t8590;
  double t8591;
  double t8592;
  double t8593;
  double t8594;
  double t8595;
  t3022 = Cos(var1[3]);
  t8327 = Sin(var1[2]);
  t2646 = Cos(var1[2]);
  t8371 = Sin(var1[3]);
  t995 = Cos(var1[4]);
  t3056 = -1.*t2646*t3022;
  t8372 = t8327*t8371;
  t8450 = t3056 + t8372;
  t8470 = t3022*t8327;
  t8471 = t2646*t8371;
  t8479 = t8470 + t8471;
  t8514 = Sin(var1[4]);
  t1769 = -1.*t995;
  t1811 = 1. + t1769;
  t8539 = -1.*t3022*t8327;
  t8548 = -1.*t2646*t8371;
  t8549 = t8539 + t8548;
  t8456 = 0.4*t1811*t8450;
  t8521 = -0.4*t8479*t8514;
  t8522 = t995*t8450;
  t8526 = t8479*t8514;
  t8527 = t8522 + t8526;
  t8536 = 0.8*t8527;
  t8537 = t8456 + t8521 + t8536;
  t8538 = var2[2]*t8537;
  t8550 = 0.4*t1811*t8549;
  t8559 = -0.4*t8450*t8514;
  t8560 = t995*t8549;
  t8561 = t8450*t8514;
  t8564 = t8560 + t8561;
  t8565 = 0.8*t8564;
  t8566 = t8550 + t8559 + t8565;
  t8567 = var2[0]*t8566;
  t8568 = t8538 + t8567;
  t8579 = t2646*t3022;
  t8580 = -1.*t8327*t8371;
  t8581 = t8579 + t8580;
  t8569 = -0.4*t995*t8450;
  t8570 = 0.4*t8549*t8514;
  t8573 = -1.*t8549*t8514;
  t8574 = t8522 + t8573;
  t8575 = 0.8*t8574;
  t8576 = t8569 + t8570 + t8575;
  t8577 = var2[2]*t8576;
  t8578 = -0.4*t995*t8549;
  t8582 = 0.4*t8581*t8514;
  t8583 = -1.*t8581*t8514;
  t8584 = t8560 + t8583;
  t8585 = 0.8*t8584;
  t8586 = t8578 + t8582 + t8585;
  t8587 = var2[0]*t8586;
  t8588 = t8577 + t8587;
  t8589 = 0.4*t1811*t8581;
  t8590 = -0.4*t8549*t8514;
  t8591 = t995*t8581;
  t8592 = t8549*t8514;
  t8593 = t8591 + t8592;
  t8594 = 0.8*t8593;
  t8595 = t8589 + t8590 + t8594;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t8568;
  p_output1[3]=t8568;
  p_output1[4]=t8588;
  p_output1[5]=t8595;
  p_output1[6]=t8566;
  p_output1[7]=t8568;
  p_output1[8]=t8568;
  p_output1[9]=t8588;
  p_output1[10]=t8595;
  p_output1[11]=t8566;
  p_output1[12]=t8588;
  p_output1[13]=t8588;
  p_output1[14]=(t8582 + 0.4*t8479*t995 + 0.8*(t8583 - 1.*t8479*t995))*var2[0] + (t8570 + 0.4*t8581*t995 + 0.8*(t8573 - 1.*t8581*t995))*var2[2];
  p_output1[15]=0.4*t8479*t8514 + 0.8*(-1.*t8479*t8514 + t8591) - 0.4*t8581*t995;
  p_output1[16]=t8586;
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
