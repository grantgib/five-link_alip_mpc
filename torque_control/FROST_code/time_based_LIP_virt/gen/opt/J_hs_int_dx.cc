/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:36:28 GMT-05:00
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
  double t1048;
  double t1251;
  double t1317;
  double t1451;
  double t1704;
  double t1743;
  double t1802;
  double t1912;
  double t1929;
  double t1910;
  double t1967;
  double t1968;
  double t1977;
  double t1984;
  double t2065;
  double t2097;
  double t2355;
  double t2376;
  double t2409;
  double t2414;
  double t2454;
  double t2463;
  double t2471;
  double t2472;
  double t2466;
  double t2468;
  double t2600;
  double t2604;
  double t2657;
  double t2662;
  double t2674;
  double t2678;
  double t2691;
  double t3010;
  double t3232;
  double t3279;
  t1048 = 4.*var5[0];
  t1251 = var3[0] + t1048 + var7[0];
  t1317 = -1. + var8[0];
  t1451 = 1/t1317;
  t1704 = -1.*var1[0];
  t1743 = t1704 + var1[1];
  t1802 = -0.333333333333333*t1451*t1743;
  t1912 = 4.*var5[1];
  t1929 = var3[1] + t1912 + var7[1];
  t1910 = -1.33333333333333*t1451*t1743;
  t1967 = 4.*var5[2];
  t1968 = var3[2] + t1967 + var7[2];
  t1977 = 4.*var5[3];
  t1984 = var3[3] + t1977 + var7[3];
  t2065 = 4.*var5[4];
  t2097 = var3[4] + t2065 + var7[4];
  t2355 = 4.*var5[5];
  t2376 = var3[5] + t2355 + var7[5];
  t2409 = 4.*var5[6];
  t2414 = var3[6] + t2409 + var7[6];
  t2454 = -1.*var7[0];
  t2463 = var3[0] + t2454;
  t2471 = -1.*var7[1];
  t2472 = var3[1] + t2471;
  t2466 = -0.25*t1451*t1743;
  t2468 = 0.25*t1451*t1743;
  t2600 = -1.*var7[2];
  t2604 = var3[2] + t2600;
  t2657 = -1.*var7[3];
  t2662 = var3[3] + t2657;
  t2674 = -1.*var7[4];
  t2678 = var3[4] + t2674;
  t2691 = -1.*var7[5];
  t3010 = var3[5] + t2691;
  t3232 = -1.*var7[6];
  t3279 = var3[6] + t3232;
  p_output1[0]=0.333333333333333*t1251*t1451;
  p_output1[1]=-0.333333333333333*t1251*t1451;
  p_output1[2]=-1.;
  p_output1[3]=t1802;
  p_output1[4]=t1910;
  p_output1[5]=1.;
  p_output1[6]=t1802;
  p_output1[7]=0.333333333333333*t1451*t1929;
  p_output1[8]=-0.333333333333333*t1451*t1929;
  p_output1[9]=-1.;
  p_output1[10]=t1802;
  p_output1[11]=t1910;
  p_output1[12]=1.;
  p_output1[13]=t1802;
  p_output1[14]=0.333333333333333*t1451*t1968;
  p_output1[15]=-0.333333333333333*t1451*t1968;
  p_output1[16]=-1.;
  p_output1[17]=t1802;
  p_output1[18]=t1910;
  p_output1[19]=1.;
  p_output1[20]=t1802;
  p_output1[21]=0.333333333333333*t1451*t1984;
  p_output1[22]=-0.333333333333333*t1451*t1984;
  p_output1[23]=-1.;
  p_output1[24]=t1802;
  p_output1[25]=t1910;
  p_output1[26]=1.;
  p_output1[27]=t1802;
  p_output1[28]=0.333333333333333*t1451*t2097;
  p_output1[29]=-0.333333333333333*t1451*t2097;
  p_output1[30]=-1.;
  p_output1[31]=t1802;
  p_output1[32]=t1910;
  p_output1[33]=1.;
  p_output1[34]=t1802;
  p_output1[35]=0.333333333333333*t1451*t2376;
  p_output1[36]=-0.333333333333333*t1451*t2376;
  p_output1[37]=-1.;
  p_output1[38]=t1802;
  p_output1[39]=t1910;
  p_output1[40]=1.;
  p_output1[41]=t1802;
  p_output1[42]=0.333333333333333*t1451*t2414;
  p_output1[43]=-0.333333333333333*t1451*t2414;
  p_output1[44]=-1.;
  p_output1[45]=t1802;
  p_output1[46]=t1910;
  p_output1[47]=1.;
  p_output1[48]=t1802;
  p_output1[49]=0.25*t1451*t2463;
  p_output1[50]=-0.25*t1451*t2463;
  p_output1[51]=-0.5;
  p_output1[52]=t2466;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t2468;
  p_output1[56]=0.25*t1451*t2472;
  p_output1[57]=-0.25*t1451*t2472;
  p_output1[58]=-0.5;
  p_output1[59]=t2466;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t2468;
  p_output1[63]=0.25*t1451*t2604;
  p_output1[64]=-0.25*t1451*t2604;
  p_output1[65]=-0.5;
  p_output1[66]=t2466;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t2468;
  p_output1[70]=0.25*t1451*t2662;
  p_output1[71]=-0.25*t1451*t2662;
  p_output1[72]=-0.5;
  p_output1[73]=t2466;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t2468;
  p_output1[77]=0.25*t1451*t2678;
  p_output1[78]=-0.25*t1451*t2678;
  p_output1[79]=-0.5;
  p_output1[80]=t2466;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t2468;
  p_output1[84]=0.25*t1451*t3010;
  p_output1[85]=-0.25*t1451*t3010;
  p_output1[86]=-0.5;
  p_output1[87]=t2466;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t2468;
  p_output1[91]=0.25*t1451*t3279;
  p_output1[92]=-0.25*t1451*t3279;
  p_output1[93]=-0.5;
  p_output1[94]=t2466;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t2468;
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
