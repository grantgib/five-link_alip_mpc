/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:53:31 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t2851;
  double t175;
  double t232;
  double t233;
  double t1499;
  double t2500;
  double t3336;
  double t4188;
  double t4470;
  double t4657;
  double t4658;
  double t4707;
  double t4993;
  double t5620;
  double t5766;
  double t6083;
  double t6093;
  double t6177;
  double t7002;
  double t7010;
  double t7080;
  double t7105;
  double t7163;
  double t7215;
  double t8021;
  double t8066;
  double t8230;
  double t8235;
  double t7634;
  double t7766;
  double t7767;
  double t7841;
  double t8016;
  double t8017;
  double t8042;
  t2851 = -1.*var4[1];
  t175 = -1. + var5[0];
  t232 = -1. + var6[0];
  t233 = 1/t232;
  t1499 = -1.*t175*t233;
  t2500 = 1. + t1499;
  t3336 = var4[0] + t2851;
  t4188 = Power(t3336,-5);
  t4470 = -1.*var1[0];
  t4657 = t4470 + var1[1];
  t4658 = t175*t233*t4657;
  t4707 = t2851 + var1[0] + t4658;
  t4993 = Power(t4707,4);
  t5620 = Power(t3336,-4);
  t5766 = Power(t4707,3);
  t6083 = 1/t3336;
  t6093 = -1.*t6083*t4707;
  t6177 = 1. + t6093;
  t7002 = Power(t3336,-3);
  t7010 = Power(t4707,2);
  t7080 = Power(t6177,2);
  t7105 = Power(t3336,-2);
  t7163 = Power(t6177,3);
  t7215 = Power(t6177,4);
  t8021 = Power(t4707,5);
  t8066 = Power(t3336,-6);
  t8230 = -1.*t7105*t4707;
  t8235 = t6083 + t8230;
  t7634 = Power(t6177,5);
  t7766 = -1.*t7634;
  t7767 = -5.*t6083*t4707*t7215;
  t7841 = -10.*t7105*t7010*t7163;
  t8016 = -10.*t7002*t5766*t7080;
  t8017 = -5.*t5620*t4993*t6177;
  t8042 = -1.*t4188*t8021;
  p_output1[0]=5.*t2500*t6083*t7215*var3[0] + 20.*t2500*t4707*t7105*t7163*var3[4] - 5.*t2500*t6083*t7215*var3[4] + 30.*t2500*t7002*t7010*t7080*var3[8] - 20.*t2500*t4707*t7105*t7163*var3[8] + 20.*t2500*t5620*t5766*t6177*var3[12] - 30.*t2500*t7002*t7010*t7080*var3[12] + 5.*t2500*t4188*t4993*var3[16] - 20.*t2500*t5620*t5766*t6177*var3[16] - 5.*t2500*t4188*t4993*var3[20];
  p_output1[1]=5.*t175*t233*t6083*t7215*var3[0] + 20.*t175*t233*t4707*t7105*t7163*var3[4] - 5.*t175*t233*t6083*t7215*var3[4] + 30.*t175*t233*t7002*t7010*t7080*var3[8] - 20.*t175*t233*t4707*t7105*t7163*var3[8] + 20.*t175*t233*t5620*t5766*t6177*var3[12] - 30.*t175*t233*t7002*t7010*t7080*var3[12] + 5.*t175*t233*t4188*t4993*var3[16] - 20.*t175*t233*t5620*t5766*t6177*var3[16] - 5.*t175*t233*t4188*t4993*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t7766;
  p_output1[4]=t7767;
  p_output1[5]=t7841;
  p_output1[6]=t8016;
  p_output1[7]=t8017;
  p_output1[8]=t8042;
  p_output1[9]=-5.*t4707*t7105*t7215*var3[0] - 20.*t7002*t7010*t7163*var3[4] + 5.*t4707*t7105*t7215*var3[4] - 30.*t5620*t5766*t7080*var3[8] + 20.*t7002*t7010*t7163*var3[8] - 20.*t4188*t4993*t6177*var3[12] + 30.*t5620*t5766*t7080*var3[12] + 20.*t4188*t4993*t6177*var3[16] - 5.*t8021*t8066*var3[16] + 5.*t8021*t8066*var3[20];
  p_output1[10]=-5.*t7215*t8235*var3[0] + 5.*t6083*t7215*var3[4] - 5.*t4707*t7105*t7215*var3[4] - 20.*t4707*t6083*t7163*t8235*var3[4] - 20.*t7002*t7010*t7163*var3[8] + 20.*t4707*t7105*t7163*var3[8] - 30.*t7010*t7080*t7105*t8235*var3[8] - 30.*t5620*t5766*t7080*var3[12] + 30.*t7002*t7010*t7080*var3[12] - 20.*t5766*t6177*t7002*t8235*var3[12] - 20.*t4188*t4993*t6177*var3[16] + 20.*t5620*t5766*t6177*var3[16] - 5.*t4993*t5620*t8235*var3[16] + 5.*t4188*t4993*var3[20] - 5.*t8021*t8066*var3[20];
  p_output1[11]=5.*t2500*t6083*t7215*var3[1] + 20.*t2500*t4707*t7105*t7163*var3[5] - 5.*t2500*t6083*t7215*var3[5] + 30.*t2500*t7002*t7010*t7080*var3[9] - 20.*t2500*t4707*t7105*t7163*var3[9] + 20.*t2500*t5620*t5766*t6177*var3[13] - 30.*t2500*t7002*t7010*t7080*var3[13] + 5.*t2500*t4188*t4993*var3[17] - 20.*t2500*t5620*t5766*t6177*var3[17] - 5.*t2500*t4188*t4993*var3[21];
  p_output1[12]=5.*t175*t233*t6083*t7215*var3[1] + 20.*t175*t233*t4707*t7105*t7163*var3[5] - 5.*t175*t233*t6083*t7215*var3[5] + 30.*t175*t233*t7002*t7010*t7080*var3[9] - 20.*t175*t233*t4707*t7105*t7163*var3[9] + 20.*t175*t233*t5620*t5766*t6177*var3[13] - 30.*t175*t233*t7002*t7010*t7080*var3[13] + 5.*t175*t233*t4188*t4993*var3[17] - 20.*t175*t233*t5620*t5766*t6177*var3[17] - 5.*t175*t233*t4188*t4993*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t7766;
  p_output1[15]=t7767;
  p_output1[16]=t7841;
  p_output1[17]=t8016;
  p_output1[18]=t8017;
  p_output1[19]=t8042;
  p_output1[20]=-5.*t4707*t7105*t7215*var3[1] - 20.*t7002*t7010*t7163*var3[5] + 5.*t4707*t7105*t7215*var3[5] - 30.*t5620*t5766*t7080*var3[9] + 20.*t7002*t7010*t7163*var3[9] - 20.*t4188*t4993*t6177*var3[13] + 30.*t5620*t5766*t7080*var3[13] + 20.*t4188*t4993*t6177*var3[17] - 5.*t8021*t8066*var3[17] + 5.*t8021*t8066*var3[21];
  p_output1[21]=-5.*t7215*t8235*var3[1] + 5.*t6083*t7215*var3[5] - 5.*t4707*t7105*t7215*var3[5] - 20.*t4707*t6083*t7163*t8235*var3[5] - 20.*t7002*t7010*t7163*var3[9] + 20.*t4707*t7105*t7163*var3[9] - 30.*t7010*t7080*t7105*t8235*var3[9] - 30.*t5620*t5766*t7080*var3[13] + 30.*t7002*t7010*t7080*var3[13] - 20.*t5766*t6177*t7002*t8235*var3[13] - 20.*t4188*t4993*t6177*var3[17] + 20.*t5620*t5766*t6177*var3[17] - 5.*t4993*t5620*t8235*var3[17] + 5.*t4188*t4993*var3[21] - 5.*t8021*t8066*var3[21];
  p_output1[22]=5.*t2500*t6083*t7215*var3[2] + 20.*t2500*t4707*t7105*t7163*var3[6] - 5.*t2500*t6083*t7215*var3[6] + 30.*t2500*t7002*t7010*t7080*var3[10] - 20.*t2500*t4707*t7105*t7163*var3[10] + 20.*t2500*t5620*t5766*t6177*var3[14] - 30.*t2500*t7002*t7010*t7080*var3[14] + 5.*t2500*t4188*t4993*var3[18] - 20.*t2500*t5620*t5766*t6177*var3[18] - 5.*t2500*t4188*t4993*var3[22];
  p_output1[23]=5.*t175*t233*t6083*t7215*var3[2] + 20.*t175*t233*t4707*t7105*t7163*var3[6] - 5.*t175*t233*t6083*t7215*var3[6] + 30.*t175*t233*t7002*t7010*t7080*var3[10] - 20.*t175*t233*t4707*t7105*t7163*var3[10] + 20.*t175*t233*t5620*t5766*t6177*var3[14] - 30.*t175*t233*t7002*t7010*t7080*var3[14] + 5.*t175*t233*t4188*t4993*var3[18] - 20.*t175*t233*t5620*t5766*t6177*var3[18] - 5.*t175*t233*t4188*t4993*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t7766;
  p_output1[26]=t7767;
  p_output1[27]=t7841;
  p_output1[28]=t8016;
  p_output1[29]=t8017;
  p_output1[30]=t8042;
  p_output1[31]=-5.*t4707*t7105*t7215*var3[2] - 20.*t7002*t7010*t7163*var3[6] + 5.*t4707*t7105*t7215*var3[6] - 30.*t5620*t5766*t7080*var3[10] + 20.*t7002*t7010*t7163*var3[10] - 20.*t4188*t4993*t6177*var3[14] + 30.*t5620*t5766*t7080*var3[14] + 20.*t4188*t4993*t6177*var3[18] - 5.*t8021*t8066*var3[18] + 5.*t8021*t8066*var3[22];
  p_output1[32]=-5.*t7215*t8235*var3[2] + 5.*t6083*t7215*var3[6] - 5.*t4707*t7105*t7215*var3[6] - 20.*t4707*t6083*t7163*t8235*var3[6] - 20.*t7002*t7010*t7163*var3[10] + 20.*t4707*t7105*t7163*var3[10] - 30.*t7010*t7080*t7105*t8235*var3[10] - 30.*t5620*t5766*t7080*var3[14] + 30.*t7002*t7010*t7080*var3[14] - 20.*t5766*t6177*t7002*t8235*var3[14] - 20.*t4188*t4993*t6177*var3[18] + 20.*t5620*t5766*t6177*var3[18] - 5.*t4993*t5620*t8235*var3[18] + 5.*t4188*t4993*var3[22] - 5.*t8021*t8066*var3[22];
  p_output1[33]=5.*t2500*t6083*t7215*var3[3] + 20.*t2500*t4707*t7105*t7163*var3[7] - 5.*t2500*t6083*t7215*var3[7] + 30.*t2500*t7002*t7010*t7080*var3[11] - 20.*t2500*t4707*t7105*t7163*var3[11] + 20.*t2500*t5620*t5766*t6177*var3[15] - 30.*t2500*t7002*t7010*t7080*var3[15] + 5.*t2500*t4188*t4993*var3[19] - 20.*t2500*t5620*t5766*t6177*var3[19] - 5.*t2500*t4188*t4993*var3[23];
  p_output1[34]=5.*t175*t233*t6083*t7215*var3[3] + 20.*t175*t233*t4707*t7105*t7163*var3[7] - 5.*t175*t233*t6083*t7215*var3[7] + 30.*t175*t233*t7002*t7010*t7080*var3[11] - 20.*t175*t233*t4707*t7105*t7163*var3[11] + 20.*t175*t233*t5620*t5766*t6177*var3[15] - 30.*t175*t233*t7002*t7010*t7080*var3[15] + 5.*t175*t233*t4188*t4993*var3[19] - 20.*t175*t233*t5620*t5766*t6177*var3[19] - 5.*t175*t233*t4188*t4993*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t7766;
  p_output1[37]=t7767;
  p_output1[38]=t7841;
  p_output1[39]=t8016;
  p_output1[40]=t8017;
  p_output1[41]=t8042;
  p_output1[42]=-5.*t4707*t7105*t7215*var3[3] - 20.*t7002*t7010*t7163*var3[7] + 5.*t4707*t7105*t7215*var3[7] - 30.*t5620*t5766*t7080*var3[11] + 20.*t7002*t7010*t7163*var3[11] - 20.*t4188*t4993*t6177*var3[15] + 30.*t5620*t5766*t7080*var3[15] + 20.*t4188*t4993*t6177*var3[19] - 5.*t8021*t8066*var3[19] + 5.*t8021*t8066*var3[23];
  p_output1[43]=-5.*t7215*t8235*var3[3] + 5.*t6083*t7215*var3[7] - 5.*t4707*t7105*t7215*var3[7] - 20.*t4707*t6083*t7163*t8235*var3[7] - 20.*t7002*t7010*t7163*var3[11] + 20.*t4707*t7105*t7163*var3[11] - 30.*t7010*t7080*t7105*t8235*var3[11] - 30.*t5620*t5766*t7080*var3[15] + 30.*t7002*t7010*t7080*var3[15] - 20.*t5766*t6177*t7002*t8235*var3[15] - 20.*t4188*t4993*t6177*var3[19] + 20.*t5620*t5766*t6177*var3[19] - 5.*t4993*t5620*t8235*var3[19] + 5.*t4188*t4993*var3[23] - 5.*t8021*t8066*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_RightStance.hh"

namespace RightStance
{

void J_y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
