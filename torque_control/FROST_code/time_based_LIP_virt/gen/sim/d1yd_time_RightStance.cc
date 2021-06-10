/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:01:01 GMT-05:00
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
  double t1465;
  double t1472;
  double t1854;
  double t1861;
  double t2578;
  double t3960;
  double t4060;
  double t4080;
  double t4245;
  double t4320;
  double t5326;
  double t5344;
  double t5460;
  double t5717;
  double t5723;
  double t5880;
  double t6666;
  double t6667;
  double t6792;
  double t7104;
  double t7116;
  double t7453;
  t1465 = -1.*var3[1];
  t1472 = var3[0] + t1465;
  t1854 = Power(t1472,-7);
  t1861 = t1465 + var1[0];
  t2578 = Power(t1861,6);
  t3960 = Power(t1472,-6);
  t4060 = Power(t1861,5);
  t4080 = 1/t1472;
  t4245 = -1.*t4080*t1861;
  t4320 = 1. + t4245;
  t5326 = Power(t1472,-5);
  t5344 = Power(t1861,4);
  t5460 = Power(t4320,2);
  t5717 = Power(t1472,-4);
  t5723 = Power(t1861,3);
  t5880 = Power(t4320,3);
  t6666 = Power(t1472,-3);
  t6667 = Power(t1861,2);
  t6792 = Power(t4320,4);
  t7104 = Power(t1472,-2);
  t7116 = Power(t4320,5);
  t7453 = Power(t4320,6);
  p_output1[0]=-7.*t4080*t7453*var2[0] - 42.*t1861*t7104*t7116*var2[4] + 7.*t4080*t7453*var2[4] - 105.*t6666*t6667*t6792*var2[8] + 42.*t1861*t7104*t7116*var2[8] - 140.*t5717*t5723*t5880*var2[12] + 105.*t6666*t6667*t6792*var2[12] - 105.*t5326*t5344*t5460*var2[16] + 140.*t5717*t5723*t5880*var2[16] - 42.*t3960*t4060*t4320*var2[20] + 105.*t5326*t5344*t5460*var2[20] - 7.*t1854*t2578*var2[24] + 42.*t3960*t4060*t4320*var2[24] + 7.*t1854*t2578*var2[28];
  p_output1[1]=-7.*t4080*t7453*var2[1] - 42.*t1861*t7104*t7116*var2[5] + 7.*t4080*t7453*var2[5] - 105.*t6666*t6667*t6792*var2[9] + 42.*t1861*t7104*t7116*var2[9] - 140.*t5717*t5723*t5880*var2[13] + 105.*t6666*t6667*t6792*var2[13] - 105.*t5326*t5344*t5460*var2[17] + 140.*t5717*t5723*t5880*var2[17] - 42.*t3960*t4060*t4320*var2[21] + 105.*t5326*t5344*t5460*var2[21] - 7.*t1854*t2578*var2[25] + 42.*t3960*t4060*t4320*var2[25] + 7.*t1854*t2578*var2[29];
  p_output1[2]=-7.*t4080*t7453*var2[2] - 42.*t1861*t7104*t7116*var2[6] + 7.*t4080*t7453*var2[6] - 105.*t6666*t6667*t6792*var2[10] + 42.*t1861*t7104*t7116*var2[10] - 140.*t5717*t5723*t5880*var2[14] + 105.*t6666*t6667*t6792*var2[14] - 105.*t5326*t5344*t5460*var2[18] + 140.*t5717*t5723*t5880*var2[18] - 42.*t3960*t4060*t4320*var2[22] + 105.*t5326*t5344*t5460*var2[22] - 7.*t1854*t2578*var2[26] + 42.*t3960*t4060*t4320*var2[26] + 7.*t1854*t2578*var2[30];
  p_output1[3]=-7.*t4080*t7453*var2[3] - 42.*t1861*t7104*t7116*var2[7] + 7.*t4080*t7453*var2[7] - 105.*t6666*t6667*t6792*var2[11] + 42.*t1861*t7104*t7116*var2[11] - 140.*t5717*t5723*t5880*var2[15] + 105.*t6666*t6667*t6792*var2[15] - 105.*t5326*t5344*t5460*var2[19] + 140.*t5717*t5723*t5880*var2[19] - 42.*t3960*t4060*t4320*var2[23] + 105.*t5326*t5344*t5460*var2[23] - 7.*t1854*t2578*var2[27] + 42.*t3960*t4060*t4320*var2[27] + 7.*t1854*t2578*var2[31];
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

#include "d1yd_time_RightStance.hh"

namespace SymFunction
{

void d1yd_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
