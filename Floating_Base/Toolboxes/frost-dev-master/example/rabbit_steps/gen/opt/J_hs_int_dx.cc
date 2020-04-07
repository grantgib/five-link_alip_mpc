/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:51:20 GMT-04:00
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
  double t29;
  double t188;
  double t612;
  double t2172;
  double t3663;
  double t3675;
  double t3713;
  double t3745;
  double t3751;
  double t3738;
  double t3852;
  double t3869;
  double t3906;
  double t3911;
  double t3960;
  double t3974;
  double t3985;
  double t3986;
  double t3994;
  double t3999;
  double t4002;
  double t4013;
  double t4027;
  double t4028;
  double t4025;
  double t4026;
  double t4042;
  double t4043;
  double t4052;
  double t4053;
  double t4060;
  double t4064;
  double t4071;
  double t4072;
  double t4085;
  double t4095;
  t29 = 4.*var5[0];
  t188 = var3[0] + t29 + var7[0];
  t612 = -1. + var8[0];
  t2172 = 1/t612;
  t3663 = -1.*var1[0];
  t3675 = t3663 + var1[1];
  t3713 = -0.333333333333333*t2172*t3675;
  t3745 = 4.*var5[1];
  t3751 = var3[1] + t3745 + var7[1];
  t3738 = -1.33333333333333*t2172*t3675;
  t3852 = 4.*var5[2];
  t3869 = var3[2] + t3852 + var7[2];
  t3906 = 4.*var5[3];
  t3911 = var3[3] + t3906 + var7[3];
  t3960 = 4.*var5[4];
  t3974 = var3[4] + t3960 + var7[4];
  t3985 = 4.*var5[5];
  t3986 = var3[5] + t3985 + var7[5];
  t3994 = 4.*var5[6];
  t3999 = var3[6] + t3994 + var7[6];
  t4002 = -1.*var7[0];
  t4013 = var3[0] + t4002;
  t4027 = -1.*var7[1];
  t4028 = var3[1] + t4027;
  t4025 = -0.25*t2172*t3675;
  t4026 = 0.25*t2172*t3675;
  t4042 = -1.*var7[2];
  t4043 = var3[2] + t4042;
  t4052 = -1.*var7[3];
  t4053 = var3[3] + t4052;
  t4060 = -1.*var7[4];
  t4064 = var3[4] + t4060;
  t4071 = -1.*var7[5];
  t4072 = var3[5] + t4071;
  t4085 = -1.*var7[6];
  t4095 = var3[6] + t4085;
  p_output1[0]=0.333333333333333*t188*t2172;
  p_output1[1]=-0.333333333333333*t188*t2172;
  p_output1[2]=-1.;
  p_output1[3]=t3713;
  p_output1[4]=t3738;
  p_output1[5]=1.;
  p_output1[6]=t3713;
  p_output1[7]=0.333333333333333*t2172*t3751;
  p_output1[8]=-0.333333333333333*t2172*t3751;
  p_output1[9]=-1.;
  p_output1[10]=t3713;
  p_output1[11]=t3738;
  p_output1[12]=1.;
  p_output1[13]=t3713;
  p_output1[14]=0.333333333333333*t2172*t3869;
  p_output1[15]=-0.333333333333333*t2172*t3869;
  p_output1[16]=-1.;
  p_output1[17]=t3713;
  p_output1[18]=t3738;
  p_output1[19]=1.;
  p_output1[20]=t3713;
  p_output1[21]=0.333333333333333*t2172*t3911;
  p_output1[22]=-0.333333333333333*t2172*t3911;
  p_output1[23]=-1.;
  p_output1[24]=t3713;
  p_output1[25]=t3738;
  p_output1[26]=1.;
  p_output1[27]=t3713;
  p_output1[28]=0.333333333333333*t2172*t3974;
  p_output1[29]=-0.333333333333333*t2172*t3974;
  p_output1[30]=-1.;
  p_output1[31]=t3713;
  p_output1[32]=t3738;
  p_output1[33]=1.;
  p_output1[34]=t3713;
  p_output1[35]=0.333333333333333*t2172*t3986;
  p_output1[36]=-0.333333333333333*t2172*t3986;
  p_output1[37]=-1.;
  p_output1[38]=t3713;
  p_output1[39]=t3738;
  p_output1[40]=1.;
  p_output1[41]=t3713;
  p_output1[42]=0.333333333333333*t2172*t3999;
  p_output1[43]=-0.333333333333333*t2172*t3999;
  p_output1[44]=-1.;
  p_output1[45]=t3713;
  p_output1[46]=t3738;
  p_output1[47]=1.;
  p_output1[48]=t3713;
  p_output1[49]=0.25*t2172*t4013;
  p_output1[50]=-0.25*t2172*t4013;
  p_output1[51]=-0.5;
  p_output1[52]=t4025;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t4026;
  p_output1[56]=0.25*t2172*t4028;
  p_output1[57]=-0.25*t2172*t4028;
  p_output1[58]=-0.5;
  p_output1[59]=t4025;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t4026;
  p_output1[63]=0.25*t2172*t4043;
  p_output1[64]=-0.25*t2172*t4043;
  p_output1[65]=-0.5;
  p_output1[66]=t4025;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t4026;
  p_output1[70]=0.25*t2172*t4053;
  p_output1[71]=-0.25*t2172*t4053;
  p_output1[72]=-0.5;
  p_output1[73]=t4025;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t4026;
  p_output1[77]=0.25*t2172*t4064;
  p_output1[78]=-0.25*t2172*t4064;
  p_output1[79]=-0.5;
  p_output1[80]=t4025;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t4026;
  p_output1[84]=0.25*t2172*t4072;
  p_output1[85]=-0.25*t2172*t4072;
  p_output1[86]=-0.5;
  p_output1[87]=t4025;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t4026;
  p_output1[91]=0.25*t2172*t4095;
  p_output1[92]=-0.25*t2172*t4095;
  p_output1[93]=-0.5;
  p_output1[94]=t4025;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t4026;
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
