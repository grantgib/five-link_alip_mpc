/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:52:26 GMT-04:00
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
  double t448;
  double t519;
  double t813;
  double t918;
  double t1340;
  double t1371;
  double t1567;
  double t1782;
  double t1832;
  double t1691;
  double t2019;
  double t2064;
  double t2286;
  double t2326;
  double t2631;
  double t2699;
  double t2901;
  double t2924;
  double t3115;
  double t3117;
  double t3174;
  double t3379;
  double t3515;
  double t3524;
  double t3441;
  double t3472;
  double t3621;
  double t3646;
  double t3708;
  double t3729;
  double t3767;
  double t3789;
  double t3853;
  double t3861;
  double t3915;
  double t3940;
  t448 = 4.*var5[0];
  t519 = var3[0] + t448 + var7[0];
  t813 = -1. + var8[0];
  t918 = 1/t813;
  t1340 = -1.*var1[0];
  t1371 = t1340 + var1[1];
  t1567 = -0.333333333333333*t918*t1371;
  t1782 = 4.*var5[1];
  t1832 = var3[1] + t1782 + var7[1];
  t1691 = -1.33333333333333*t918*t1371;
  t2019 = 4.*var5[2];
  t2064 = var3[2] + t2019 + var7[2];
  t2286 = 4.*var5[3];
  t2326 = var3[3] + t2286 + var7[3];
  t2631 = 4.*var5[4];
  t2699 = var3[4] + t2631 + var7[4];
  t2901 = 4.*var5[5];
  t2924 = var3[5] + t2901 + var7[5];
  t3115 = 4.*var5[6];
  t3117 = var3[6] + t3115 + var7[6];
  t3174 = -1.*var7[0];
  t3379 = var3[0] + t3174;
  t3515 = -1.*var7[1];
  t3524 = var3[1] + t3515;
  t3441 = -0.25*t918*t1371;
  t3472 = 0.25*t918*t1371;
  t3621 = -1.*var7[2];
  t3646 = var3[2] + t3621;
  t3708 = -1.*var7[3];
  t3729 = var3[3] + t3708;
  t3767 = -1.*var7[4];
  t3789 = var3[4] + t3767;
  t3853 = -1.*var7[5];
  t3861 = var3[5] + t3853;
  t3915 = -1.*var7[6];
  t3940 = var3[6] + t3915;
  p_output1[0]=0.333333333333333*t519*t918;
  p_output1[1]=-0.333333333333333*t519*t918;
  p_output1[2]=-1.;
  p_output1[3]=t1567;
  p_output1[4]=t1691;
  p_output1[5]=1.;
  p_output1[6]=t1567;
  p_output1[7]=0.333333333333333*t1832*t918;
  p_output1[8]=-0.333333333333333*t1832*t918;
  p_output1[9]=-1.;
  p_output1[10]=t1567;
  p_output1[11]=t1691;
  p_output1[12]=1.;
  p_output1[13]=t1567;
  p_output1[14]=0.333333333333333*t2064*t918;
  p_output1[15]=-0.333333333333333*t2064*t918;
  p_output1[16]=-1.;
  p_output1[17]=t1567;
  p_output1[18]=t1691;
  p_output1[19]=1.;
  p_output1[20]=t1567;
  p_output1[21]=0.333333333333333*t2326*t918;
  p_output1[22]=-0.333333333333333*t2326*t918;
  p_output1[23]=-1.;
  p_output1[24]=t1567;
  p_output1[25]=t1691;
  p_output1[26]=1.;
  p_output1[27]=t1567;
  p_output1[28]=0.333333333333333*t2699*t918;
  p_output1[29]=-0.333333333333333*t2699*t918;
  p_output1[30]=-1.;
  p_output1[31]=t1567;
  p_output1[32]=t1691;
  p_output1[33]=1.;
  p_output1[34]=t1567;
  p_output1[35]=0.333333333333333*t2924*t918;
  p_output1[36]=-0.333333333333333*t2924*t918;
  p_output1[37]=-1.;
  p_output1[38]=t1567;
  p_output1[39]=t1691;
  p_output1[40]=1.;
  p_output1[41]=t1567;
  p_output1[42]=0.333333333333333*t3117*t918;
  p_output1[43]=-0.333333333333333*t3117*t918;
  p_output1[44]=-1.;
  p_output1[45]=t1567;
  p_output1[46]=t1691;
  p_output1[47]=1.;
  p_output1[48]=t1567;
  p_output1[49]=0.25*t3379*t918;
  p_output1[50]=-0.25*t3379*t918;
  p_output1[51]=-0.5;
  p_output1[52]=t3441;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t3472;
  p_output1[56]=0.25*t3524*t918;
  p_output1[57]=-0.25*t3524*t918;
  p_output1[58]=-0.5;
  p_output1[59]=t3441;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t3472;
  p_output1[63]=0.25*t3646*t918;
  p_output1[64]=-0.25*t3646*t918;
  p_output1[65]=-0.5;
  p_output1[66]=t3441;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t3472;
  p_output1[70]=0.25*t3729*t918;
  p_output1[71]=-0.25*t3729*t918;
  p_output1[72]=-0.5;
  p_output1[73]=t3441;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t3472;
  p_output1[77]=0.25*t3789*t918;
  p_output1[78]=-0.25*t3789*t918;
  p_output1[79]=-0.5;
  p_output1[80]=t3441;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t3472;
  p_output1[84]=0.25*t3861*t918;
  p_output1[85]=-0.25*t3861*t918;
  p_output1[86]=-0.5;
  p_output1[87]=t3441;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t3472;
  p_output1[91]=0.25*t3940*t918;
  p_output1[92]=-0.25*t3940*t918;
  p_output1[93]=-0.5;
  p_output1[94]=t3441;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t3472;
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
