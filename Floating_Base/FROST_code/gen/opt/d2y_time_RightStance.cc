/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:41 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t4100;
  double t4378;
  double t11551;
  double t15761;
  double t15762;
  double t15763;
  double t15769;
  double t15770;
  double t15771;
  double t15776;
  double t15777;
  double t15783;
  double t15784;
  double t15785;
  double t15786;
  double t15787;
  double t15791;
  double t15792;
  double t15796;
  double t15797;
  double t15818;
  double t15827;
  double t15832;
  double t15840;
  t4100 = -1.*var6[1];
  t4378 = var6[0] + t4100;
  t11551 = Power(t4378,-5);
  t15761 = -1. + var7[0];
  t15762 = -1. + var8[0];
  t15763 = 1/t15762;
  t15769 = -1.*var1[0];
  t15770 = t15769 + var1[1];
  t15771 = t15761*t15763*t15770;
  t15776 = t4100 + var1[0] + t15771;
  t15777 = Power(t15776,3);
  t15783 = Power(t4378,-4);
  t15784 = Power(t15776,2);
  t15785 = 1/t4378;
  t15786 = -1.*t15785*t15776;
  t15787 = 1. + t15786;
  t15791 = Power(t4378,-3);
  t15792 = Power(t15787,2);
  t15796 = Power(t4378,-2);
  t15797 = Power(t15787,3);
  t15818 = Power(t15776,4);
  t15827 = Power(t15787,4);
  t15832 = Power(t15776,5);
  t15840 = Power(t15787,5);
  p_output1[0]=var4[3] - 20.*t15796*t15797*var5[0] - 60.*t15776*t15791*t15792*var5[4] + 40.*t15796*t15797*var5[4] - 60.*t15783*t15784*t15787*var5[8] + 120.*t15776*t15791*t15792*var5[8] - 20.*t15796*t15797*var5[8] - 20.*t11551*t15777*var5[12] + 120.*t15783*t15784*t15787*var5[12] - 60.*t15776*t15791*t15792*var5[12] + 40.*t11551*t15777*var5[16] - 60.*t15783*t15784*t15787*var5[16] - 20.*t11551*t15777*var5[20] + (var2[3] - 1.*t15840*var5[0] - 5.*t15776*t15785*t15827*var5[4] - 10.*t15784*t15796*t15797*var5[8] - 10.*t15777*t15791*t15792*var5[12] - 5.*t15783*t15787*t15818*var5[16] - 1.*t11551*t15832*var5[20])*var9[0] + (var3[3] + 5.*t15785*t15827*var5[0] + 20.*t15776*t15796*t15797*var5[4] - 5.*t15785*t15827*var5[4] + 30.*t15784*t15791*t15792*var5[8] - 20.*t15776*t15796*t15797*var5[8] + 20.*t15777*t15783*t15787*var5[12] - 30.*t15784*t15791*t15792*var5[12] - 20.*t15777*t15783*t15787*var5[16] + 5.*t11551*t15818*var5[16] - 5.*t11551*t15818*var5[20])*var9[1];
  p_output1[1]=var4[4] - 20.*t15796*t15797*var5[1] - 60.*t15776*t15791*t15792*var5[5] + 40.*t15796*t15797*var5[5] - 60.*t15783*t15784*t15787*var5[9] + 120.*t15776*t15791*t15792*var5[9] - 20.*t15796*t15797*var5[9] - 20.*t11551*t15777*var5[13] + 120.*t15783*t15784*t15787*var5[13] - 60.*t15776*t15791*t15792*var5[13] + 40.*t11551*t15777*var5[17] - 60.*t15783*t15784*t15787*var5[17] - 20.*t11551*t15777*var5[21] + (var2[4] - 1.*t15840*var5[1] - 5.*t15776*t15785*t15827*var5[5] - 10.*t15784*t15796*t15797*var5[9] - 10.*t15777*t15791*t15792*var5[13] - 5.*t15783*t15787*t15818*var5[17] - 1.*t11551*t15832*var5[21])*var9[0] + (var3[4] + 5.*t15785*t15827*var5[1] + 20.*t15776*t15796*t15797*var5[5] - 5.*t15785*t15827*var5[5] + 30.*t15784*t15791*t15792*var5[9] - 20.*t15776*t15796*t15797*var5[9] + 20.*t15777*t15783*t15787*var5[13] - 30.*t15784*t15791*t15792*var5[13] - 20.*t15777*t15783*t15787*var5[17] + 5.*t11551*t15818*var5[17] - 5.*t11551*t15818*var5[21])*var9[1];
  p_output1[2]=var4[5] - 20.*t15796*t15797*var5[2] - 60.*t15776*t15791*t15792*var5[6] + 40.*t15796*t15797*var5[6] - 60.*t15783*t15784*t15787*var5[10] + 120.*t15776*t15791*t15792*var5[10] - 20.*t15796*t15797*var5[10] - 20.*t11551*t15777*var5[14] + 120.*t15783*t15784*t15787*var5[14] - 60.*t15776*t15791*t15792*var5[14] + 40.*t11551*t15777*var5[18] - 60.*t15783*t15784*t15787*var5[18] - 20.*t11551*t15777*var5[22] + (var2[5] - 1.*t15840*var5[2] - 5.*t15776*t15785*t15827*var5[6] - 10.*t15784*t15796*t15797*var5[10] - 10.*t15777*t15791*t15792*var5[14] - 5.*t15783*t15787*t15818*var5[18] - 1.*t11551*t15832*var5[22])*var9[0] + (var3[5] + 5.*t15785*t15827*var5[2] + 20.*t15776*t15796*t15797*var5[6] - 5.*t15785*t15827*var5[6] + 30.*t15784*t15791*t15792*var5[10] - 20.*t15776*t15796*t15797*var5[10] + 20.*t15777*t15783*t15787*var5[14] - 30.*t15784*t15791*t15792*var5[14] - 20.*t15777*t15783*t15787*var5[18] + 5.*t11551*t15818*var5[18] - 5.*t11551*t15818*var5[22])*var9[1];
  p_output1[3]=var4[6] - 20.*t15796*t15797*var5[3] - 60.*t15776*t15791*t15792*var5[7] + 40.*t15796*t15797*var5[7] - 60.*t15783*t15784*t15787*var5[11] + 120.*t15776*t15791*t15792*var5[11] - 20.*t15796*t15797*var5[11] - 20.*t11551*t15777*var5[15] + 120.*t15783*t15784*t15787*var5[15] - 60.*t15776*t15791*t15792*var5[15] + 40.*t11551*t15777*var5[19] - 60.*t15783*t15784*t15787*var5[19] - 20.*t11551*t15777*var5[23] + (var2[6] - 1.*t15840*var5[3] - 5.*t15776*t15785*t15827*var5[7] - 10.*t15784*t15796*t15797*var5[11] - 10.*t15777*t15791*t15792*var5[15] - 5.*t15783*t15787*t15818*var5[19] - 1.*t11551*t15832*var5[23])*var9[0] + (var3[6] + 5.*t15785*t15827*var5[3] + 20.*t15776*t15796*t15797*var5[7] - 5.*t15785*t15827*var5[7] + 30.*t15784*t15791*t15792*var5[11] - 20.*t15776*t15796*t15797*var5[11] + 20.*t15777*t15783*t15787*var5[15] - 30.*t15784*t15791*t15792*var5[15] - 20.*t15777*t15783*t15787*var5[19] + 5.*t11551*t15818*var5[19] - 5.*t11551*t15818*var5[23])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "d2y_time_RightStance.hh"

namespace RightStance
{

void d2y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
