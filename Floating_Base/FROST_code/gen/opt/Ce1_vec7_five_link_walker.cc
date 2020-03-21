/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:52 GMT-04:00
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
  double t10491;
  double t10478;
  double t10489;
  double t10501;
  double t3867;
  double t10490;
  double t10502;
  double t10506;
  double t10510;
  double t10511;
  double t10523;
  double t10524;
  double t10525;
  double t10526;
  double t10527;
  double t10512;
  double t10513;
  double t10514;
  double t10536;
  double t10540;
  double t10541;
  double t10557;
  double t10558;
  double t10560;
  double t10562;
  double t10563;
  double t10572;
  double t10573;
  double t10576;
  double t10565;
  double t10568;
  double t10569;
  double t10570;
  double t10571;
  double t10579;
  double t10580;
  double t10581;
  double t10582;
  t10491 = Cos(var1[5]);
  t10478 = Cos(var1[6]);
  t10489 = Sin(var1[5]);
  t10501 = Sin(var1[6]);
  t3867 = Cos(var1[2]);
  t10490 = -1.*t10478*t10489;
  t10502 = -1.*t10491*t10501;
  t10506 = t10490 + t10502;
  t10510 = t3867*t10506;
  t10511 = Sin(var1[2]);
  t10523 = -1.*t10491*t10478;
  t10524 = t10489*t10501;
  t10525 = t10523 + t10524;
  t10526 = t10511*t10525;
  t10527 = t10510 + t10526;
  t10512 = t10491*t10478;
  t10513 = -1.*t10489*t10501;
  t10514 = t10512 + t10513;
  t10536 = -1.*t10511*t10506;
  t10540 = t3867*t10525;
  t10541 = t10536 + t10540;
  t10557 = -1.*t10478;
  t10558 = 1. + t10557;
  t10560 = 0.4*t10558;
  t10562 = 0.64*t10478;
  t10563 = t10560 + t10562;
  t10572 = t10491*t10563;
  t10573 = -0.24*t10489*t10501;
  t10576 = t10572 + t10573;
  t10565 = -0.24*t10491*t10501;
  t10568 = t10563*t10489;
  t10569 = 0.24*t10491*t10501;
  t10570 = t10568 + t10569;
  t10571 = t10570*t10514;
  t10579 = t10506*t10576;
  t10580 = t10478*t10489;
  t10581 = t10491*t10501;
  t10582 = t10580 + t10581;
  p_output1[0]=var2[6]*(-0.384*(t10510 - 1.*t10511*t10514)*var2[2] - 0.384*t10527*var2[5] - 0.384*t10527*var2[6]);
  p_output1[1]=var2[6]*(-0.384*(t10536 - 1.*t10514*t3867)*var2[2] - 0.384*t10541*var2[5] - 0.384*t10541*var2[6]);
  p_output1[2]=var2[6]*(-0.384*(t10514*(-1.*t10489*t10563 + t10565) + t10571 + t10579 + t10576*t10582)*var2[5] - 0.384*(t10514*(-0.24*t10478*t10489 + t10565) + t10571 + t10579 + (0.24*t10478*t10491 + t10573)*t10582)*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.384*(0.24*t10478*t10501 - 1.*t10501*t10563)*Power(var2[6],2);
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

#include "Ce1_vec7_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
