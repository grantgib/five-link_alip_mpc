/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:01:03 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t720;
  double t1351;
  double t1562;
  double t3513;
  double t3753;
  double t3894;
  double t3959;
  double t3965;
  double t3976;
  double t4013;
  double t4036;
  double t4065;
  double t4121;
  double t5605;
  double t6135;
  double t6462;
  double t6960;
  double t7038;
  double t7464;
  double t7752;
  t720 = -1.*var3[1];
  t1351 = var3[0] + t720;
  t1562 = Power(t1351,-7);
  t3513 = t720 + var1[0];
  t3753 = Power(t3513,5);
  t3894 = Power(t1351,-6);
  t3959 = Power(t3513,4);
  t3965 = 1/t1351;
  t3976 = -1.*t3965*t3513;
  t4013 = 1. + t3976;
  t4036 = Power(t1351,-5);
  t4065 = Power(t3513,3);
  t4121 = Power(t4013,2);
  t5605 = Power(t1351,-4);
  t6135 = Power(t3513,2);
  t6462 = Power(t4013,3);
  t6960 = Power(t1351,-3);
  t7038 = Power(t4013,4);
  t7464 = Power(t1351,-2);
  t7752 = Power(t4013,5);
  p_output1[0]=42.*t7464*t7752*var2[0] + 210.*t3513*t6960*t7038*var2[4] - 84.*t7464*t7752*var2[4] + 420.*t5605*t6135*t6462*var2[8] - 420.*t3513*t6960*t7038*var2[8] + 42.*t7464*t7752*var2[8] + 420.*t4036*t4065*t4121*var2[12] - 840.*t5605*t6135*t6462*var2[12] + 210.*t3513*t6960*t7038*var2[12] + 210.*t3894*t3959*t4013*var2[16] - 840.*t4036*t4065*t4121*var2[16] + 420.*t5605*t6135*t6462*var2[16] + 42.*t1562*t3753*var2[20] - 420.*t3894*t3959*t4013*var2[20] + 420.*t4036*t4065*t4121*var2[20] - 84.*t1562*t3753*var2[24] + 210.*t3894*t3959*t4013*var2[24] + 42.*t1562*t3753*var2[28];
  p_output1[1]=42.*t7464*t7752*var2[1] + 210.*t3513*t6960*t7038*var2[5] - 84.*t7464*t7752*var2[5] + 420.*t5605*t6135*t6462*var2[9] - 420.*t3513*t6960*t7038*var2[9] + 42.*t7464*t7752*var2[9] + 420.*t4036*t4065*t4121*var2[13] - 840.*t5605*t6135*t6462*var2[13] + 210.*t3513*t6960*t7038*var2[13] + 210.*t3894*t3959*t4013*var2[17] - 840.*t4036*t4065*t4121*var2[17] + 420.*t5605*t6135*t6462*var2[17] + 42.*t1562*t3753*var2[21] - 420.*t3894*t3959*t4013*var2[21] + 420.*t4036*t4065*t4121*var2[21] - 84.*t1562*t3753*var2[25] + 210.*t3894*t3959*t4013*var2[25] + 42.*t1562*t3753*var2[29];
  p_output1[2]=42.*t7464*t7752*var2[2] + 210.*t3513*t6960*t7038*var2[6] - 84.*t7464*t7752*var2[6] + 420.*t5605*t6135*t6462*var2[10] - 420.*t3513*t6960*t7038*var2[10] + 42.*t7464*t7752*var2[10] + 420.*t4036*t4065*t4121*var2[14] - 840.*t5605*t6135*t6462*var2[14] + 210.*t3513*t6960*t7038*var2[14] + 210.*t3894*t3959*t4013*var2[18] - 840.*t4036*t4065*t4121*var2[18] + 420.*t5605*t6135*t6462*var2[18] + 42.*t1562*t3753*var2[22] - 420.*t3894*t3959*t4013*var2[22] + 420.*t4036*t4065*t4121*var2[22] - 84.*t1562*t3753*var2[26] + 210.*t3894*t3959*t4013*var2[26] + 42.*t1562*t3753*var2[30];
  p_output1[3]=42.*t7464*t7752*var2[3] + 210.*t3513*t6960*t7038*var2[7] - 84.*t7464*t7752*var2[7] + 420.*t5605*t6135*t6462*var2[11] - 420.*t3513*t6960*t7038*var2[11] + 42.*t7464*t7752*var2[11] + 420.*t4036*t4065*t4121*var2[15] - 840.*t5605*t6135*t6462*var2[15] + 210.*t3513*t6960*t7038*var2[15] + 210.*t3894*t3959*t4013*var2[19] - 840.*t4036*t4065*t4121*var2[19] + 420.*t5605*t6135*t6462*var2[19] + 42.*t1562*t3753*var2[23] - 420.*t3894*t3959*t4013*var2[23] + 420.*t4036*t4065*t4121*var2[23] - 84.*t1562*t3753*var2[27] + 210.*t3894*t3959*t4013*var2[27] + 42.*t1562*t3753*var2[31];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 32 && ncols == 1) && 
      !(mrows == 1 && ncols == 32))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "Jd2yd_time_RightStance.hh"

namespace SymFunction
{

void Jd2yd_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
