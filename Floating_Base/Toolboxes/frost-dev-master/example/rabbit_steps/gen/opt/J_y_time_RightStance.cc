/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:52:29 GMT-04:00
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
  double t5189;
  double t1869;
  double t5164;
  double t5175;
  double t5179;
  double t5187;
  double t5192;
  double t5226;
  double t5227;
  double t5228;
  double t5229;
  double t5230;
  double t5231;
  double t5234;
  double t5235;
  double t5236;
  double t5237;
  double t5238;
  double t5245;
  double t5246;
  double t5247;
  double t5250;
  double t5251;
  double t5254;
  double t5275;
  double t5277;
  double t5291;
  double t5292;
  double t5269;
  double t5270;
  double t5271;
  double t5272;
  double t5273;
  double t5274;
  double t5276;
  t5189 = -1.*var4[1];
  t1869 = -1. + var5[0];
  t5164 = -1. + var6[0];
  t5175 = 1/t5164;
  t5179 = -1.*t1869*t5175;
  t5187 = 1. + t5179;
  t5192 = var4[0] + t5189;
  t5226 = Power(t5192,-5);
  t5227 = -1.*var1[0];
  t5228 = t5227 + var1[1];
  t5229 = t1869*t5175*t5228;
  t5230 = t5189 + var1[0] + t5229;
  t5231 = Power(t5230,4);
  t5234 = Power(t5192,-4);
  t5235 = Power(t5230,3);
  t5236 = 1/t5192;
  t5237 = -1.*t5236*t5230;
  t5238 = 1. + t5237;
  t5245 = Power(t5192,-3);
  t5246 = Power(t5230,2);
  t5247 = Power(t5238,2);
  t5250 = Power(t5192,-2);
  t5251 = Power(t5238,3);
  t5254 = Power(t5238,4);
  t5275 = Power(t5230,5);
  t5277 = Power(t5192,-6);
  t5291 = -1.*t5250*t5230;
  t5292 = t5236 + t5291;
  t5269 = Power(t5238,5);
  t5270 = -1.*t5269;
  t5271 = -5.*t5236*t5230*t5254;
  t5272 = -10.*t5250*t5246*t5251;
  t5273 = -10.*t5245*t5235*t5247;
  t5274 = -5.*t5234*t5231*t5238;
  t5276 = -1.*t5226*t5275;
  p_output1[0]=5.*t5187*t5236*t5254*var3[0] + 20.*t5187*t5230*t5250*t5251*var3[4] - 5.*t5187*t5236*t5254*var3[4] + 30.*t5187*t5245*t5246*t5247*var3[8] - 20.*t5187*t5230*t5250*t5251*var3[8] + 20.*t5187*t5234*t5235*t5238*var3[12] - 30.*t5187*t5245*t5246*t5247*var3[12] + 5.*t5187*t5226*t5231*var3[16] - 20.*t5187*t5234*t5235*t5238*var3[16] - 5.*t5187*t5226*t5231*var3[20];
  p_output1[1]=5.*t1869*t5175*t5236*t5254*var3[0] + 20.*t1869*t5175*t5230*t5250*t5251*var3[4] - 5.*t1869*t5175*t5236*t5254*var3[4] + 30.*t1869*t5175*t5245*t5246*t5247*var3[8] - 20.*t1869*t5175*t5230*t5250*t5251*var3[8] + 20.*t1869*t5175*t5234*t5235*t5238*var3[12] - 30.*t1869*t5175*t5245*t5246*t5247*var3[12] + 5.*t1869*t5175*t5226*t5231*var3[16] - 20.*t1869*t5175*t5234*t5235*t5238*var3[16] - 5.*t1869*t5175*t5226*t5231*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t5270;
  p_output1[4]=t5271;
  p_output1[5]=t5272;
  p_output1[6]=t5273;
  p_output1[7]=t5274;
  p_output1[8]=t5276;
  p_output1[9]=-5.*t5230*t5250*t5254*var3[0] - 20.*t5245*t5246*t5251*var3[4] + 5.*t5230*t5250*t5254*var3[4] - 30.*t5234*t5235*t5247*var3[8] + 20.*t5245*t5246*t5251*var3[8] - 20.*t5226*t5231*t5238*var3[12] + 30.*t5234*t5235*t5247*var3[12] + 20.*t5226*t5231*t5238*var3[16] - 5.*t5275*t5277*var3[16] + 5.*t5275*t5277*var3[20];
  p_output1[10]=-5.*t5254*t5292*var3[0] + 5.*t5236*t5254*var3[4] - 5.*t5230*t5250*t5254*var3[4] - 20.*t5230*t5236*t5251*t5292*var3[4] - 20.*t5245*t5246*t5251*var3[8] + 20.*t5230*t5250*t5251*var3[8] - 30.*t5246*t5247*t5250*t5292*var3[8] - 30.*t5234*t5235*t5247*var3[12] + 30.*t5245*t5246*t5247*var3[12] - 20.*t5235*t5238*t5245*t5292*var3[12] - 20.*t5226*t5231*t5238*var3[16] + 20.*t5234*t5235*t5238*var3[16] - 5.*t5231*t5234*t5292*var3[16] + 5.*t5226*t5231*var3[20] - 5.*t5275*t5277*var3[20];
  p_output1[11]=5.*t5187*t5236*t5254*var3[1] + 20.*t5187*t5230*t5250*t5251*var3[5] - 5.*t5187*t5236*t5254*var3[5] + 30.*t5187*t5245*t5246*t5247*var3[9] - 20.*t5187*t5230*t5250*t5251*var3[9] + 20.*t5187*t5234*t5235*t5238*var3[13] - 30.*t5187*t5245*t5246*t5247*var3[13] + 5.*t5187*t5226*t5231*var3[17] - 20.*t5187*t5234*t5235*t5238*var3[17] - 5.*t5187*t5226*t5231*var3[21];
  p_output1[12]=5.*t1869*t5175*t5236*t5254*var3[1] + 20.*t1869*t5175*t5230*t5250*t5251*var3[5] - 5.*t1869*t5175*t5236*t5254*var3[5] + 30.*t1869*t5175*t5245*t5246*t5247*var3[9] - 20.*t1869*t5175*t5230*t5250*t5251*var3[9] + 20.*t1869*t5175*t5234*t5235*t5238*var3[13] - 30.*t1869*t5175*t5245*t5246*t5247*var3[13] + 5.*t1869*t5175*t5226*t5231*var3[17] - 20.*t1869*t5175*t5234*t5235*t5238*var3[17] - 5.*t1869*t5175*t5226*t5231*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t5270;
  p_output1[15]=t5271;
  p_output1[16]=t5272;
  p_output1[17]=t5273;
  p_output1[18]=t5274;
  p_output1[19]=t5276;
  p_output1[20]=-5.*t5230*t5250*t5254*var3[1] - 20.*t5245*t5246*t5251*var3[5] + 5.*t5230*t5250*t5254*var3[5] - 30.*t5234*t5235*t5247*var3[9] + 20.*t5245*t5246*t5251*var3[9] - 20.*t5226*t5231*t5238*var3[13] + 30.*t5234*t5235*t5247*var3[13] + 20.*t5226*t5231*t5238*var3[17] - 5.*t5275*t5277*var3[17] + 5.*t5275*t5277*var3[21];
  p_output1[21]=-5.*t5254*t5292*var3[1] + 5.*t5236*t5254*var3[5] - 5.*t5230*t5250*t5254*var3[5] - 20.*t5230*t5236*t5251*t5292*var3[5] - 20.*t5245*t5246*t5251*var3[9] + 20.*t5230*t5250*t5251*var3[9] - 30.*t5246*t5247*t5250*t5292*var3[9] - 30.*t5234*t5235*t5247*var3[13] + 30.*t5245*t5246*t5247*var3[13] - 20.*t5235*t5238*t5245*t5292*var3[13] - 20.*t5226*t5231*t5238*var3[17] + 20.*t5234*t5235*t5238*var3[17] - 5.*t5231*t5234*t5292*var3[17] + 5.*t5226*t5231*var3[21] - 5.*t5275*t5277*var3[21];
  p_output1[22]=5.*t5187*t5236*t5254*var3[2] + 20.*t5187*t5230*t5250*t5251*var3[6] - 5.*t5187*t5236*t5254*var3[6] + 30.*t5187*t5245*t5246*t5247*var3[10] - 20.*t5187*t5230*t5250*t5251*var3[10] + 20.*t5187*t5234*t5235*t5238*var3[14] - 30.*t5187*t5245*t5246*t5247*var3[14] + 5.*t5187*t5226*t5231*var3[18] - 20.*t5187*t5234*t5235*t5238*var3[18] - 5.*t5187*t5226*t5231*var3[22];
  p_output1[23]=5.*t1869*t5175*t5236*t5254*var3[2] + 20.*t1869*t5175*t5230*t5250*t5251*var3[6] - 5.*t1869*t5175*t5236*t5254*var3[6] + 30.*t1869*t5175*t5245*t5246*t5247*var3[10] - 20.*t1869*t5175*t5230*t5250*t5251*var3[10] + 20.*t1869*t5175*t5234*t5235*t5238*var3[14] - 30.*t1869*t5175*t5245*t5246*t5247*var3[14] + 5.*t1869*t5175*t5226*t5231*var3[18] - 20.*t1869*t5175*t5234*t5235*t5238*var3[18] - 5.*t1869*t5175*t5226*t5231*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t5270;
  p_output1[26]=t5271;
  p_output1[27]=t5272;
  p_output1[28]=t5273;
  p_output1[29]=t5274;
  p_output1[30]=t5276;
  p_output1[31]=-5.*t5230*t5250*t5254*var3[2] - 20.*t5245*t5246*t5251*var3[6] + 5.*t5230*t5250*t5254*var3[6] - 30.*t5234*t5235*t5247*var3[10] + 20.*t5245*t5246*t5251*var3[10] - 20.*t5226*t5231*t5238*var3[14] + 30.*t5234*t5235*t5247*var3[14] + 20.*t5226*t5231*t5238*var3[18] - 5.*t5275*t5277*var3[18] + 5.*t5275*t5277*var3[22];
  p_output1[32]=-5.*t5254*t5292*var3[2] + 5.*t5236*t5254*var3[6] - 5.*t5230*t5250*t5254*var3[6] - 20.*t5230*t5236*t5251*t5292*var3[6] - 20.*t5245*t5246*t5251*var3[10] + 20.*t5230*t5250*t5251*var3[10] - 30.*t5246*t5247*t5250*t5292*var3[10] - 30.*t5234*t5235*t5247*var3[14] + 30.*t5245*t5246*t5247*var3[14] - 20.*t5235*t5238*t5245*t5292*var3[14] - 20.*t5226*t5231*t5238*var3[18] + 20.*t5234*t5235*t5238*var3[18] - 5.*t5231*t5234*t5292*var3[18] + 5.*t5226*t5231*var3[22] - 5.*t5275*t5277*var3[22];
  p_output1[33]=5.*t5187*t5236*t5254*var3[3] + 20.*t5187*t5230*t5250*t5251*var3[7] - 5.*t5187*t5236*t5254*var3[7] + 30.*t5187*t5245*t5246*t5247*var3[11] - 20.*t5187*t5230*t5250*t5251*var3[11] + 20.*t5187*t5234*t5235*t5238*var3[15] - 30.*t5187*t5245*t5246*t5247*var3[15] + 5.*t5187*t5226*t5231*var3[19] - 20.*t5187*t5234*t5235*t5238*var3[19] - 5.*t5187*t5226*t5231*var3[23];
  p_output1[34]=5.*t1869*t5175*t5236*t5254*var3[3] + 20.*t1869*t5175*t5230*t5250*t5251*var3[7] - 5.*t1869*t5175*t5236*t5254*var3[7] + 30.*t1869*t5175*t5245*t5246*t5247*var3[11] - 20.*t1869*t5175*t5230*t5250*t5251*var3[11] + 20.*t1869*t5175*t5234*t5235*t5238*var3[15] - 30.*t1869*t5175*t5245*t5246*t5247*var3[15] + 5.*t1869*t5175*t5226*t5231*var3[19] - 20.*t1869*t5175*t5234*t5235*t5238*var3[19] - 5.*t1869*t5175*t5226*t5231*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t5270;
  p_output1[37]=t5271;
  p_output1[38]=t5272;
  p_output1[39]=t5273;
  p_output1[40]=t5274;
  p_output1[41]=t5276;
  p_output1[42]=-5.*t5230*t5250*t5254*var3[3] - 20.*t5245*t5246*t5251*var3[7] + 5.*t5230*t5250*t5254*var3[7] - 30.*t5234*t5235*t5247*var3[11] + 20.*t5245*t5246*t5251*var3[11] - 20.*t5226*t5231*t5238*var3[15] + 30.*t5234*t5235*t5247*var3[15] + 20.*t5226*t5231*t5238*var3[19] - 5.*t5275*t5277*var3[19] + 5.*t5275*t5277*var3[23];
  p_output1[43]=-5.*t5254*t5292*var3[3] + 5.*t5236*t5254*var3[7] - 5.*t5230*t5250*t5254*var3[7] - 20.*t5230*t5236*t5251*t5292*var3[7] - 20.*t5245*t5246*t5251*var3[11] + 20.*t5230*t5250*t5251*var3[11] - 30.*t5246*t5247*t5250*t5292*var3[11] - 30.*t5234*t5235*t5247*var3[15] + 30.*t5245*t5246*t5247*var3[15] - 20.*t5235*t5238*t5245*t5292*var3[15] - 20.*t5226*t5231*t5238*var3[19] + 20.*t5234*t5235*t5238*var3[19] - 5.*t5231*t5234*t5292*var3[19] + 5.*t5226*t5231*var3[23] - 5.*t5275*t5277*var3[23];
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
