/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:10 GMT-05:00
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
  double t309;
  double t1522;
  double t1545;
  double t1582;
  double t2109;
  double t2113;
  double t2118;
  double t2159;
  double t2164;
  double t2157;
  double t2204;
  double t2228;
  double t2276;
  double t2282;
  double t2306;
  double t2307;
  double t2316;
  double t2318;
  double t2334;
  double t2338;
  double t2373;
  double t2386;
  double t2437;
  double t2450;
  double t2415;
  double t2418;
  double t2728;
  double t2732;
  double t2743;
  double t2792;
  double t3413;
  double t3464;
  double t3766;
  double t3806;
  double t3908;
  double t4090;
  t309 = 4.*var5[0];
  t1522 = var3[0] + t309 + var7[0];
  t1545 = -1. + var8[0];
  t1582 = 1/t1545;
  t2109 = -1.*var1[0];
  t2113 = t2109 + var1[1];
  t2118 = -0.333333333333333*t1582*t2113;
  t2159 = 4.*var5[1];
  t2164 = var3[1] + t2159 + var7[1];
  t2157 = -1.33333333333333*t1582*t2113;
  t2204 = 4.*var5[2];
  t2228 = var3[2] + t2204 + var7[2];
  t2276 = 4.*var5[3];
  t2282 = var3[3] + t2276 + var7[3];
  t2306 = 4.*var5[4];
  t2307 = var3[4] + t2306 + var7[4];
  t2316 = 4.*var5[5];
  t2318 = var3[5] + t2316 + var7[5];
  t2334 = 4.*var5[6];
  t2338 = var3[6] + t2334 + var7[6];
  t2373 = -1.*var7[0];
  t2386 = var3[0] + t2373;
  t2437 = -1.*var7[1];
  t2450 = var3[1] + t2437;
  t2415 = -0.25*t1582*t2113;
  t2418 = 0.25*t1582*t2113;
  t2728 = -1.*var7[2];
  t2732 = var3[2] + t2728;
  t2743 = -1.*var7[3];
  t2792 = var3[3] + t2743;
  t3413 = -1.*var7[4];
  t3464 = var3[4] + t3413;
  t3766 = -1.*var7[5];
  t3806 = var3[5] + t3766;
  t3908 = -1.*var7[6];
  t4090 = var3[6] + t3908;
  p_output1[0]=0.333333333333333*t1522*t1582;
  p_output1[1]=-0.333333333333333*t1522*t1582;
  p_output1[2]=-1.;
  p_output1[3]=t2118;
  p_output1[4]=t2157;
  p_output1[5]=1.;
  p_output1[6]=t2118;
  p_output1[7]=0.333333333333333*t1582*t2164;
  p_output1[8]=-0.333333333333333*t1582*t2164;
  p_output1[9]=-1.;
  p_output1[10]=t2118;
  p_output1[11]=t2157;
  p_output1[12]=1.;
  p_output1[13]=t2118;
  p_output1[14]=0.333333333333333*t1582*t2228;
  p_output1[15]=-0.333333333333333*t1582*t2228;
  p_output1[16]=-1.;
  p_output1[17]=t2118;
  p_output1[18]=t2157;
  p_output1[19]=1.;
  p_output1[20]=t2118;
  p_output1[21]=0.333333333333333*t1582*t2282;
  p_output1[22]=-0.333333333333333*t1582*t2282;
  p_output1[23]=-1.;
  p_output1[24]=t2118;
  p_output1[25]=t2157;
  p_output1[26]=1.;
  p_output1[27]=t2118;
  p_output1[28]=0.333333333333333*t1582*t2307;
  p_output1[29]=-0.333333333333333*t1582*t2307;
  p_output1[30]=-1.;
  p_output1[31]=t2118;
  p_output1[32]=t2157;
  p_output1[33]=1.;
  p_output1[34]=t2118;
  p_output1[35]=0.333333333333333*t1582*t2318;
  p_output1[36]=-0.333333333333333*t1582*t2318;
  p_output1[37]=-1.;
  p_output1[38]=t2118;
  p_output1[39]=t2157;
  p_output1[40]=1.;
  p_output1[41]=t2118;
  p_output1[42]=0.333333333333333*t1582*t2338;
  p_output1[43]=-0.333333333333333*t1582*t2338;
  p_output1[44]=-1.;
  p_output1[45]=t2118;
  p_output1[46]=t2157;
  p_output1[47]=1.;
  p_output1[48]=t2118;
  p_output1[49]=0.25*t1582*t2386;
  p_output1[50]=-0.25*t1582*t2386;
  p_output1[51]=-0.5;
  p_output1[52]=t2415;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t2418;
  p_output1[56]=0.25*t1582*t2450;
  p_output1[57]=-0.25*t1582*t2450;
  p_output1[58]=-0.5;
  p_output1[59]=t2415;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t2418;
  p_output1[63]=0.25*t1582*t2732;
  p_output1[64]=-0.25*t1582*t2732;
  p_output1[65]=-0.5;
  p_output1[66]=t2415;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t2418;
  p_output1[70]=0.25*t1582*t2792;
  p_output1[71]=-0.25*t1582*t2792;
  p_output1[72]=-0.5;
  p_output1[73]=t2415;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t2418;
  p_output1[77]=0.25*t1582*t3464;
  p_output1[78]=-0.25*t1582*t3464;
  p_output1[79]=-0.5;
  p_output1[80]=t2415;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t2418;
  p_output1[84]=0.25*t1582*t3806;
  p_output1[85]=-0.25*t1582*t3806;
  p_output1[86]=-0.5;
  p_output1[87]=t2415;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t2418;
  p_output1[91]=0.25*t1582*t4090;
  p_output1[92]=-0.25*t1582*t4090;
  p_output1[93]=-0.5;
  p_output1[94]=t2415;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t2418;
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
