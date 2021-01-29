/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:19 GMT-05:00
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
  double t58;
  double t320;
  double t321;
  double t606;
  double t1766;
  double t1927;
  double t1936;
  double t2318;
  double t2330;
  double t2043;
  double t2491;
  double t2522;
  double t2591;
  double t2609;
  double t2730;
  double t2739;
  double t2848;
  double t2913;
  double t2959;
  double t2986;
  double t3011;
  double t3027;
  double t3085;
  double t3091;
  double t3051;
  double t3071;
  double t3137;
  double t3143;
  double t3173;
  double t3174;
  double t3195;
  double t3200;
  double t3302;
  double t3314;
  double t3335;
  double t3351;
  t58 = 4.*var5[0];
  t320 = var3[0] + t58 + var7[0];
  t321 = -1. + var8[0];
  t606 = 1/t321;
  t1766 = -1.*var1[0];
  t1927 = t1766 + var1[1];
  t1936 = -0.333333333333333*t606*t1927;
  t2318 = 4.*var5[1];
  t2330 = var3[1] + t2318 + var7[1];
  t2043 = -1.33333333333333*t606*t1927;
  t2491 = 4.*var5[2];
  t2522 = var3[2] + t2491 + var7[2];
  t2591 = 4.*var5[3];
  t2609 = var3[3] + t2591 + var7[3];
  t2730 = 4.*var5[4];
  t2739 = var3[4] + t2730 + var7[4];
  t2848 = 4.*var5[5];
  t2913 = var3[5] + t2848 + var7[5];
  t2959 = 4.*var5[6];
  t2986 = var3[6] + t2959 + var7[6];
  t3011 = -1.*var7[0];
  t3027 = var3[0] + t3011;
  t3085 = -1.*var7[1];
  t3091 = var3[1] + t3085;
  t3051 = -0.25*t606*t1927;
  t3071 = 0.25*t606*t1927;
  t3137 = -1.*var7[2];
  t3143 = var3[2] + t3137;
  t3173 = -1.*var7[3];
  t3174 = var3[3] + t3173;
  t3195 = -1.*var7[4];
  t3200 = var3[4] + t3195;
  t3302 = -1.*var7[5];
  t3314 = var3[5] + t3302;
  t3335 = -1.*var7[6];
  t3351 = var3[6] + t3335;
  p_output1[0]=0.333333333333333*t320*t606;
  p_output1[1]=-0.333333333333333*t320*t606;
  p_output1[2]=-1.;
  p_output1[3]=t1936;
  p_output1[4]=t2043;
  p_output1[5]=1.;
  p_output1[6]=t1936;
  p_output1[7]=0.333333333333333*t2330*t606;
  p_output1[8]=-0.333333333333333*t2330*t606;
  p_output1[9]=-1.;
  p_output1[10]=t1936;
  p_output1[11]=t2043;
  p_output1[12]=1.;
  p_output1[13]=t1936;
  p_output1[14]=0.333333333333333*t2522*t606;
  p_output1[15]=-0.333333333333333*t2522*t606;
  p_output1[16]=-1.;
  p_output1[17]=t1936;
  p_output1[18]=t2043;
  p_output1[19]=1.;
  p_output1[20]=t1936;
  p_output1[21]=0.333333333333333*t2609*t606;
  p_output1[22]=-0.333333333333333*t2609*t606;
  p_output1[23]=-1.;
  p_output1[24]=t1936;
  p_output1[25]=t2043;
  p_output1[26]=1.;
  p_output1[27]=t1936;
  p_output1[28]=0.333333333333333*t2739*t606;
  p_output1[29]=-0.333333333333333*t2739*t606;
  p_output1[30]=-1.;
  p_output1[31]=t1936;
  p_output1[32]=t2043;
  p_output1[33]=1.;
  p_output1[34]=t1936;
  p_output1[35]=0.333333333333333*t2913*t606;
  p_output1[36]=-0.333333333333333*t2913*t606;
  p_output1[37]=-1.;
  p_output1[38]=t1936;
  p_output1[39]=t2043;
  p_output1[40]=1.;
  p_output1[41]=t1936;
  p_output1[42]=0.333333333333333*t2986*t606;
  p_output1[43]=-0.333333333333333*t2986*t606;
  p_output1[44]=-1.;
  p_output1[45]=t1936;
  p_output1[46]=t2043;
  p_output1[47]=1.;
  p_output1[48]=t1936;
  p_output1[49]=0.25*t3027*t606;
  p_output1[50]=-0.25*t3027*t606;
  p_output1[51]=-0.5;
  p_output1[52]=t3051;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t3071;
  p_output1[56]=0.25*t3091*t606;
  p_output1[57]=-0.25*t3091*t606;
  p_output1[58]=-0.5;
  p_output1[59]=t3051;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t3071;
  p_output1[63]=0.25*t3143*t606;
  p_output1[64]=-0.25*t3143*t606;
  p_output1[65]=-0.5;
  p_output1[66]=t3051;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t3071;
  p_output1[70]=0.25*t3174*t606;
  p_output1[71]=-0.25*t3174*t606;
  p_output1[72]=-0.5;
  p_output1[73]=t3051;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t3071;
  p_output1[77]=0.25*t3200*t606;
  p_output1[78]=-0.25*t3200*t606;
  p_output1[79]=-0.5;
  p_output1[80]=t3051;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t3071;
  p_output1[84]=0.25*t3314*t606;
  p_output1[85]=-0.25*t3314*t606;
  p_output1[86]=-0.5;
  p_output1[87]=t3051;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t3071;
  p_output1[91]=0.25*t3351*t606;
  p_output1[92]=-0.25*t3351*t606;
  p_output1[93]=-0.5;
  p_output1[94]=t3051;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t3071;
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
