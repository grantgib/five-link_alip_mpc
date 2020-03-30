/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:00 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t2820;
  double t2915;
  double t3027;
  double t4857;
  double t5000;
  double t5053;
  double t5069;
  double t5122;
  double t5133;
  double t5094;
  double t5152;
  double t5168;
  double t5178;
  double t5195;
  double t5200;
  double t5202;
  double t5210;
  double t5212;
  double t5215;
  double t5216;
  double t5219;
  double t5220;
  double t5225;
  double t5226;
  double t5223;
  double t5224;
  double t5229;
  double t5230;
  double t5233;
  double t5234;
  double t5237;
  double t5239;
  double t5242;
  double t5243;
  double t5251;
  double t5252;
  t2820 = 4.*var5[0];
  t2915 = var3[0] + t2820 + var7[0];
  t3027 = -1. + var8[0];
  t4857 = 1/t3027;
  t5000 = -1.*var1[0];
  t5053 = t5000 + var1[1];
  t5069 = -0.333333333333333*t4857*t5053;
  t5122 = 4.*var5[1];
  t5133 = var3[1] + t5122 + var7[1];
  t5094 = -1.33333333333333*t4857*t5053;
  t5152 = 4.*var5[2];
  t5168 = var3[2] + t5152 + var7[2];
  t5178 = 4.*var5[3];
  t5195 = var3[3] + t5178 + var7[3];
  t5200 = 4.*var5[4];
  t5202 = var3[4] + t5200 + var7[4];
  t5210 = 4.*var5[5];
  t5212 = var3[5] + t5210 + var7[5];
  t5215 = 4.*var5[6];
  t5216 = var3[6] + t5215 + var7[6];
  t5219 = -1.*var7[0];
  t5220 = var3[0] + t5219;
  t5225 = -1.*var7[1];
  t5226 = var3[1] + t5225;
  t5223 = -0.25*t4857*t5053;
  t5224 = 0.25*t4857*t5053;
  t5229 = -1.*var7[2];
  t5230 = var3[2] + t5229;
  t5233 = -1.*var7[3];
  t5234 = var3[3] + t5233;
  t5237 = -1.*var7[4];
  t5239 = var3[4] + t5237;
  t5242 = -1.*var7[5];
  t5243 = var3[5] + t5242;
  t5251 = -1.*var7[6];
  t5252 = var3[6] + t5251;
  p_output1[0]=0.333333333333333*t2915*t4857;
  p_output1[1]=-0.333333333333333*t2915*t4857;
  p_output1[2]=-1.;
  p_output1[3]=t5069;
  p_output1[4]=t5094;
  p_output1[5]=1.;
  p_output1[6]=t5069;
  p_output1[7]=0.333333333333333*t4857*t5133;
  p_output1[8]=-0.333333333333333*t4857*t5133;
  p_output1[9]=-1.;
  p_output1[10]=t5069;
  p_output1[11]=t5094;
  p_output1[12]=1.;
  p_output1[13]=t5069;
  p_output1[14]=0.333333333333333*t4857*t5168;
  p_output1[15]=-0.333333333333333*t4857*t5168;
  p_output1[16]=-1.;
  p_output1[17]=t5069;
  p_output1[18]=t5094;
  p_output1[19]=1.;
  p_output1[20]=t5069;
  p_output1[21]=0.333333333333333*t4857*t5195;
  p_output1[22]=-0.333333333333333*t4857*t5195;
  p_output1[23]=-1.;
  p_output1[24]=t5069;
  p_output1[25]=t5094;
  p_output1[26]=1.;
  p_output1[27]=t5069;
  p_output1[28]=0.333333333333333*t4857*t5202;
  p_output1[29]=-0.333333333333333*t4857*t5202;
  p_output1[30]=-1.;
  p_output1[31]=t5069;
  p_output1[32]=t5094;
  p_output1[33]=1.;
  p_output1[34]=t5069;
  p_output1[35]=0.333333333333333*t4857*t5212;
  p_output1[36]=-0.333333333333333*t4857*t5212;
  p_output1[37]=-1.;
  p_output1[38]=t5069;
  p_output1[39]=t5094;
  p_output1[40]=1.;
  p_output1[41]=t5069;
  p_output1[42]=0.333333333333333*t4857*t5216;
  p_output1[43]=-0.333333333333333*t4857*t5216;
  p_output1[44]=-1.;
  p_output1[45]=t5069;
  p_output1[46]=t5094;
  p_output1[47]=1.;
  p_output1[48]=t5069;
  p_output1[49]=0.25*t4857*t5220;
  p_output1[50]=-0.25*t4857*t5220;
  p_output1[51]=-0.5;
  p_output1[52]=t5223;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t5224;
  p_output1[56]=0.25*t4857*t5226;
  p_output1[57]=-0.25*t4857*t5226;
  p_output1[58]=-0.5;
  p_output1[59]=t5223;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t5224;
  p_output1[63]=0.25*t4857*t5230;
  p_output1[64]=-0.25*t4857*t5230;
  p_output1[65]=-0.5;
  p_output1[66]=t5223;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t5224;
  p_output1[70]=0.25*t4857*t5234;
  p_output1[71]=-0.25*t4857*t5234;
  p_output1[72]=-0.5;
  p_output1[73]=t5223;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t5224;
  p_output1[77]=0.25*t4857*t5239;
  p_output1[78]=-0.25*t4857*t5239;
  p_output1[79]=-0.5;
  p_output1[80]=t5223;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t5224;
  p_output1[84]=0.25*t4857*t5243;
  p_output1[85]=-0.25*t4857*t5243;
  p_output1[86]=-0.5;
  p_output1[87]=t5223;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t5224;
  p_output1[91]=0.25*t4857*t5252;
  p_output1[92]=-0.25*t4857*t5252;
  p_output1[93]=-0.5;
  p_output1[94]=t5223;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t5224;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 98, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_dx.hh"

namespace RightStance
{

void J_hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
