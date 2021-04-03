/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 02:13:16 GMT-05:00
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
  double t2204;
  double t1257;
  double t1895;
  double t2697;
  double t252;
  double t2039;
  double t2716;
  double t2721;
  double t2766;
  double t2767;
  double t2822;
  double t2838;
  double t2942;
  double t3553;
  double t3555;
  double t3558;
  double t3875;
  double t8050;
  double t3873;
  double t7443;
  double t8196;
  double t8198;
  double t8220;
  double t8240;
  double t8244;
  double t8248;
  double t8252;
  double t8424;
  double t8425;
  double t8448;
  double t3329;
  double t3430;
  double t3496;
  double t3533;
  double t3566;
  double t3570;
  double t3619;
  double t3674;
  double t3729;
  double t3769;
  double t8377;
  double t8384;
  double t8412;
  double t8421;
  double t8450;
  double t8466;
  double t8467;
  double t8478;
  double t8480;
  double t8482;
  t2204 = Cos(var1[2]);
  t1257 = Cos(var1[3]);
  t1895 = Sin(var1[2]);
  t2697 = Sin(var1[3]);
  t252 = Cos(var1[4]);
  t2039 = -1.*t1257*t1895;
  t2716 = -1.*t2204*t2697;
  t2721 = t2039 + t2716;
  t2766 = t2204*t1257;
  t2767 = -1.*t1895*t2697;
  t2822 = t2766 + t2767;
  t2838 = Sin(var1[4]);
  t2942 = t252*t2721;
  t3553 = -1.*t2204*t1257;
  t3555 = t1895*t2697;
  t3558 = t3553 + t3555;
  t3875 = Cos(var1[5]);
  t8050 = Sin(var1[5]);
  t3873 = Cos(var1[6]);
  t7443 = -1.*t3875*t1895;
  t8196 = -1.*t2204*t8050;
  t8198 = t7443 + t8196;
  t8220 = t2204*t3875;
  t8240 = -1.*t1895*t8050;
  t8244 = t8220 + t8240;
  t8248 = Sin(var1[6]);
  t8252 = t3873*t8198;
  t8424 = -1.*t2204*t3875;
  t8425 = t1895*t8050;
  t8448 = t8424 + t8425;
  t3329 = 0.748*t2721;
  t3430 = -1.*t252;
  t3496 = 1. + t3430;
  t3533 = 0.4*t3496*t2721;
  t3566 = -0.4*t3558*t2838;
  t3570 = t3558*t2838;
  t3619 = t2942 + t3570;
  t3674 = 0.64*t3619;
  t3729 = t3533 + t3566 + t3674;
  t3769 = 3.2*t3729;
  t8377 = 0.748*t8198;
  t8384 = -1.*t3873;
  t8412 = 1. + t8384;
  t8421 = 0.4*t8412*t8198;
  t8450 = -0.4*t8448*t8248;
  t8466 = t8448*t8248;
  t8467 = t8252 + t8466;
  t8478 = 0.64*t8467;
  t8480 = t8421 + t8450 + t8478;
  t8482 = 3.2*t8480;
  p_output1[0]=var2[1] + 0.03125*(-2.88*t1895 + t3329 + t3769 + t8377 + t8482)*var2[2] + 0.03125*(t3329 + t3769)*var2[3] + 0.1*(-0.4*t252*t2721 + 0.4*t2822*t2838 + 0.64*(-1.*t2822*t2838 + t2942))*var2[4] + 0.03125*(t8377 + t8482)*var2[5] + 0.1*(-0.4*t3873*t8198 + 0.4*t8244*t8248 + 0.64*(-1.*t8244*t8248 + t8252))*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "vel_com.hh"

namespace RightStance
{

void vel_com_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
