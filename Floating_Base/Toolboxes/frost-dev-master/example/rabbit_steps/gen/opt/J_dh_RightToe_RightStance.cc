/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:53:09 GMT-04:00
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
  double t3580;
  double t1890;
  double t3512;
  double t4483;
  double t1816;
  double t3573;
  double t4510;
  double t4511;
  double t4558;
  double t4567;
  double t4606;
  double t4625;
  double t4655;
  double t5253;
  double t5351;
  double t5368;
  double t4939;
  double t4944;
  double t5215;
  double t5369;
  double t5419;
  double t5435;
  double t5467;
  double t5484;
  double t4550;
  double t4654;
  double t4693;
  double t4745;
  double t4879;
  double t4908;
  double t4911;
  double t5608;
  double t5612;
  double t5644;
  double t5700;
  double t5704;
  double t5716;
  double t5797;
  double t5804;
  double t5806;
  double t5825;
  double t5839;
  double t5864;
  double t5868;
  double t5973;
  double t6094;
  double t6097;
  double t6152;
  double t6153;
  double t6155;
  double t6181;
  double t5942;
  double t5954;
  double t5992;
  double t6033;
  double t6058;
  double t6063;
  double t6078;
  double t6188;
  double t6239;
  double t6242;
  t3580 = Cos(var1[2]);
  t1890 = Cos(var1[3]);
  t3512 = Sin(var1[2]);
  t4483 = Sin(var1[3]);
  t1816 = Cos(var1[4]);
  t3573 = -1.*t1890*t3512;
  t4510 = -1.*t3580*t4483;
  t4511 = t3573 + t4510;
  t4558 = t3580*t1890;
  t4567 = -1.*t3512*t4483;
  t4606 = t4558 + t4567;
  t4625 = Sin(var1[4]);
  t4655 = t1816*t4511;
  t5253 = -1.*t3580*t1890;
  t5351 = t3512*t4483;
  t5368 = t5253 + t5351;
  t4939 = -1.*t1816;
  t4944 = 1. + t4939;
  t5215 = 0.4*t4944*t4511;
  t5369 = -0.4*t5368*t4625;
  t5419 = t5368*t4625;
  t5435 = t4655 + t5419;
  t5467 = 0.8*t5435;
  t5484 = t5215 + t5369 + t5467;
  t4550 = -0.4*t1816*t4511;
  t4654 = 0.4*t4606*t4625;
  t4693 = -1.*t4606*t4625;
  t4745 = t4655 + t4693;
  t4879 = 0.8*t4745;
  t4908 = t4550 + t4654 + t4879;
  t4911 = var2[4]*t4908;
  t5608 = var2[2]*t5484;
  t5612 = var2[3]*t5484;
  t5644 = t4911 + t5608 + t5612;
  t5700 = t1890*t3512;
  t5704 = t3580*t4483;
  t5716 = t5700 + t5704;
  t5797 = 0.4*t4944*t4606;
  t5804 = -0.4*t4511*t4625;
  t5806 = t1816*t4606;
  t5825 = t4511*t4625;
  t5839 = t5806 + t5825;
  t5864 = 0.8*t5839;
  t5868 = t5797 + t5804 + t5864;
  t5973 = t1816*t5368;
  t6094 = 0.4*t4944*t5368;
  t6097 = -0.4*t5716*t4625;
  t6152 = t5716*t4625;
  t6153 = t5973 + t6152;
  t6155 = 0.8*t6153;
  t6181 = t6094 + t6097 + t6155;
  t5942 = -0.4*t1816*t5368;
  t5954 = 0.4*t4511*t4625;
  t5992 = -1.*t4511*t4625;
  t6033 = t5973 + t5992;
  t6058 = 0.8*t6033;
  t6063 = t5942 + t5954 + t6058;
  t6078 = var2[4]*t6063;
  t6188 = var2[2]*t6181;
  t6239 = var2[3]*t6181;
  t6242 = t6078 + t6188 + t6239;
  p_output1[0]=t5644;
  p_output1[1]=t5644;
  p_output1[2]=t4908*var2[2] + t4908*var2[3] + (t4654 + 0.4*t1816*t5716 + 0.8*(t4693 - 1.*t1816*t5716))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t5868;
  p_output1[5]=t5868;
  p_output1[6]=-0.4*t1816*t4606 + 0.4*t4625*t5716 + 0.8*(-1.*t4625*t5716 + t5806);
  p_output1[7]=t6242;
  p_output1[8]=t6242;
  p_output1[9]=t6063*var2[2] + t6063*var2[3] + (0.4*t1816*t4606 + t5954 + 0.8*(-1.*t1816*t4606 + t5992))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t5484;
  p_output1[12]=t5484;
  p_output1[13]=t4908;
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
