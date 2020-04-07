/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:01:56 GMT-04:00
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
  double t293;
  double t1021;
  double t1401;
  double t2016;
  double t2223;
  double t2238;
  double t2253;
  double t2426;
  double t2572;
  double t2265;
  double t2719;
  double t2777;
  double t2901;
  double t2924;
  double t2988;
  double t3021;
  double t3602;
  double t3773;
  double t3906;
  double t3911;
  double t4044;
  double t4081;
  double t4850;
  double t4953;
  double t4135;
  double t4316;
  double t5247;
  double t5259;
  double t5326;
  double t5334;
  double t5341;
  double t5349;
  double t5435;
  double t5451;
  double t5480;
  double t5488;
  t293 = 4.*var5[0];
  t1021 = var3[0] + t293 + var7[0];
  t1401 = -1. + var8[0];
  t2016 = 1/t1401;
  t2223 = -1.*var1[0];
  t2238 = t2223 + var1[1];
  t2253 = -0.333333333333333*t2016*t2238;
  t2426 = 4.*var5[1];
  t2572 = var3[1] + t2426 + var7[1];
  t2265 = -1.33333333333333*t2016*t2238;
  t2719 = 4.*var5[2];
  t2777 = var3[2] + t2719 + var7[2];
  t2901 = 4.*var5[3];
  t2924 = var3[3] + t2901 + var7[3];
  t2988 = 4.*var5[4];
  t3021 = var3[4] + t2988 + var7[4];
  t3602 = 4.*var5[5];
  t3773 = var3[5] + t3602 + var7[5];
  t3906 = 4.*var5[6];
  t3911 = var3[6] + t3906 + var7[6];
  t4044 = -1.*var7[0];
  t4081 = var3[0] + t4044;
  t4850 = -1.*var7[1];
  t4953 = var3[1] + t4850;
  t4135 = -0.25*t2016*t2238;
  t4316 = 0.25*t2016*t2238;
  t5247 = -1.*var7[2];
  t5259 = var3[2] + t5247;
  t5326 = -1.*var7[3];
  t5334 = var3[3] + t5326;
  t5341 = -1.*var7[4];
  t5349 = var3[4] + t5341;
  t5435 = -1.*var7[5];
  t5451 = var3[5] + t5435;
  t5480 = -1.*var7[6];
  t5488 = var3[6] + t5480;
  p_output1[0]=0.333333333333333*t1021*t2016;
  p_output1[1]=-0.333333333333333*t1021*t2016;
  p_output1[2]=-1.;
  p_output1[3]=t2253;
  p_output1[4]=t2265;
  p_output1[5]=1.;
  p_output1[6]=t2253;
  p_output1[7]=0.333333333333333*t2016*t2572;
  p_output1[8]=-0.333333333333333*t2016*t2572;
  p_output1[9]=-1.;
  p_output1[10]=t2253;
  p_output1[11]=t2265;
  p_output1[12]=1.;
  p_output1[13]=t2253;
  p_output1[14]=0.333333333333333*t2016*t2777;
  p_output1[15]=-0.333333333333333*t2016*t2777;
  p_output1[16]=-1.;
  p_output1[17]=t2253;
  p_output1[18]=t2265;
  p_output1[19]=1.;
  p_output1[20]=t2253;
  p_output1[21]=0.333333333333333*t2016*t2924;
  p_output1[22]=-0.333333333333333*t2016*t2924;
  p_output1[23]=-1.;
  p_output1[24]=t2253;
  p_output1[25]=t2265;
  p_output1[26]=1.;
  p_output1[27]=t2253;
  p_output1[28]=0.333333333333333*t2016*t3021;
  p_output1[29]=-0.333333333333333*t2016*t3021;
  p_output1[30]=-1.;
  p_output1[31]=t2253;
  p_output1[32]=t2265;
  p_output1[33]=1.;
  p_output1[34]=t2253;
  p_output1[35]=0.333333333333333*t2016*t3773;
  p_output1[36]=-0.333333333333333*t2016*t3773;
  p_output1[37]=-1.;
  p_output1[38]=t2253;
  p_output1[39]=t2265;
  p_output1[40]=1.;
  p_output1[41]=t2253;
  p_output1[42]=0.333333333333333*t2016*t3911;
  p_output1[43]=-0.333333333333333*t2016*t3911;
  p_output1[44]=-1.;
  p_output1[45]=t2253;
  p_output1[46]=t2265;
  p_output1[47]=1.;
  p_output1[48]=t2253;
  p_output1[49]=0.25*t2016*t4081;
  p_output1[50]=-0.25*t2016*t4081;
  p_output1[51]=-0.5;
  p_output1[52]=t4135;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t4316;
  p_output1[56]=0.25*t2016*t4953;
  p_output1[57]=-0.25*t2016*t4953;
  p_output1[58]=-0.5;
  p_output1[59]=t4135;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t4316;
  p_output1[63]=0.25*t2016*t5259;
  p_output1[64]=-0.25*t2016*t5259;
  p_output1[65]=-0.5;
  p_output1[66]=t4135;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t4316;
  p_output1[70]=0.25*t2016*t5334;
  p_output1[71]=-0.25*t2016*t5334;
  p_output1[72]=-0.5;
  p_output1[73]=t4135;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t4316;
  p_output1[77]=0.25*t2016*t5349;
  p_output1[78]=-0.25*t2016*t5349;
  p_output1[79]=-0.5;
  p_output1[80]=t4135;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t4316;
  p_output1[84]=0.25*t2016*t5451;
  p_output1[85]=-0.25*t2016*t5451;
  p_output1[86]=-0.5;
  p_output1[87]=t4135;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t4316;
  p_output1[91]=0.25*t2016*t5488;
  p_output1[92]=-0.25*t2016*t5488;
  p_output1[93]=-0.5;
  p_output1[94]=t4135;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t4316;
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
