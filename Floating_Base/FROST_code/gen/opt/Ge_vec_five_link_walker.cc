/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:02:03 GMT-04:00
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
  double t320;
  double t501;
  double t502;
  double t694;
  double t1125;
  double t1160;
  double t1536;
  double t1672;
  double t2222;
  double t2331;
  double t2415;
  double t2428;
  double t4075;
  double t4088;
  double t4101;
  double t4224;
  double t4341;
  double t5318;
  double t5491;
  double t5504;
  double t5540;
  double t5543;
  double t1537;
  double t1975;
  double t2103;
  double t2138;
  double t2783;
  double t2960;
  double t2977;
  double t3631;
  double t3710;
  double t3788;
  double t3999;
  double t5671;
  double t5687;
  double t5689;
  double t4820;
  double t5399;
  double t5414;
  double t5474;
  double t5556;
  double t5560;
  double t5561;
  double t5620;
  double t5625;
  double t5637;
  double t5644;
  double t5796;
  double t5797;
  double t5798;
  t320 = Sin(var1[2]);
  t501 = Cos(var1[3]);
  t502 = -1.*t501*t320;
  t694 = Cos(var1[2]);
  t1125 = Sin(var1[3]);
  t1160 = -1.*t694*t1125;
  t1536 = t502 + t1160;
  t1672 = Cos(var1[4]);
  t2222 = -1.*t694*t501;
  t2331 = t320*t1125;
  t2415 = t2222 + t2331;
  t2428 = Sin(var1[4]);
  t4075 = Cos(var1[5]);
  t4088 = -1.*t4075*t320;
  t4101 = Sin(var1[5]);
  t4224 = -1.*t694*t4101;
  t4341 = t4088 + t4224;
  t5318 = Cos(var1[6]);
  t5491 = -1.*t694*t4075;
  t5504 = t320*t4101;
  t5540 = t5491 + t5504;
  t5543 = Sin(var1[6]);
  t1537 = -7.33788*t1536;
  t1975 = -1.*t1672;
  t2103 = 1. + t1975;
  t2138 = 0.4*t2103*t1536;
  t2783 = -0.4*t2415*t2428;
  t2960 = t1672*t1536;
  t2977 = t2415*t2428;
  t3631 = t2960 + t2977;
  t3710 = 0.64*t3631;
  t3788 = t2138 + t2783 + t3710;
  t3999 = -31.392000000000003*t3788;
  t5671 = t694*t501;
  t5687 = -1.*t320*t1125;
  t5689 = t5671 + t5687;
  t4820 = -7.33788*t4341;
  t5399 = -1.*t5318;
  t5414 = 1. + t5399;
  t5474 = 0.4*t5414*t4341;
  t5556 = -0.4*t5540*t5543;
  t5560 = t5318*t4341;
  t5561 = t5540*t5543;
  t5620 = t5560 + t5561;
  t5625 = 0.64*t5620;
  t5637 = t5474 + t5556 + t5625;
  t5644 = -31.392000000000003*t5637;
  t5796 = t694*t4075;
  t5797 = -1.*t320*t4101;
  t5798 = t5796 + t5797;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=t1537 + 28.252799999999997*t320 + t3999 + t4820 + t5644;
  p_output1[3]=t1537 + t3999;
  p_output1[4]=-31.392000000000003*(-0.4*t1536*t1672 + 0.4*t2428*t5689 + 0.64*(t2960 - 1.*t2428*t5689));
  p_output1[5]=t4820 + t5644;
  p_output1[6]=-31.392000000000003*(-0.4*t4341*t5318 + 0.4*t5543*t5798 + 0.64*(t5560 - 1.*t5543*t5798));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_five_link_walker.hh"

namespace RightStance
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
