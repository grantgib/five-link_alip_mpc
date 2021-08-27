/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:57:01 GMT-04:00
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
  double t13;
  double t22;
  double t33;
  double t37;
  double t46;
  double t47;
  double t51;
  double t57;
  double t60;
  double t56;
  double t68;
  double t69;
  double t77;
  double t78;
  double t82;
  double t83;
  double t87;
  double t88;
  double t91;
  double t92;
  double t95;
  double t96;
  double t101;
  double t102;
  double t99;
  double t100;
  double t105;
  double t106;
  double t109;
  double t110;
  double t113;
  double t114;
  double t117;
  double t118;
  double t121;
  double t122;
  t13 = 4.*var5[0];
  t22 = var3[0] + t13 + var7[0];
  t33 = -1. + var8[0];
  t37 = 1/t33;
  t46 = -1.*var1[0];
  t47 = t46 + var1[1];
  t51 = -0.333333333333333*t37*t47;
  t57 = 4.*var5[1];
  t60 = var3[1] + t57 + var7[1];
  t56 = -1.33333333333333*t37*t47;
  t68 = 4.*var5[2];
  t69 = var3[2] + t68 + var7[2];
  t77 = 4.*var5[3];
  t78 = var3[3] + t77 + var7[3];
  t82 = 4.*var5[4];
  t83 = var3[4] + t82 + var7[4];
  t87 = 4.*var5[5];
  t88 = var3[5] + t87 + var7[5];
  t91 = 4.*var5[6];
  t92 = var3[6] + t91 + var7[6];
  t95 = -1.*var7[0];
  t96 = var3[0] + t95;
  t101 = -1.*var7[1];
  t102 = var3[1] + t101;
  t99 = -0.25*t37*t47;
  t100 = 0.25*t37*t47;
  t105 = -1.*var7[2];
  t106 = var3[2] + t105;
  t109 = -1.*var7[3];
  t110 = var3[3] + t109;
  t113 = -1.*var7[4];
  t114 = var3[4] + t113;
  t117 = -1.*var7[5];
  t118 = var3[5] + t117;
  t121 = -1.*var7[6];
  t122 = var3[6] + t121;
  p_output1[0]=0.333333333333333*t22*t37;
  p_output1[1]=-0.333333333333333*t22*t37;
  p_output1[2]=-1.;
  p_output1[3]=t51;
  p_output1[4]=t56;
  p_output1[5]=1.;
  p_output1[6]=t51;
  p_output1[7]=0.333333333333333*t37*t60;
  p_output1[8]=-0.333333333333333*t37*t60;
  p_output1[9]=-1.;
  p_output1[10]=t51;
  p_output1[11]=t56;
  p_output1[12]=1.;
  p_output1[13]=t51;
  p_output1[14]=0.333333333333333*t37*t69;
  p_output1[15]=-0.333333333333333*t37*t69;
  p_output1[16]=-1.;
  p_output1[17]=t51;
  p_output1[18]=t56;
  p_output1[19]=1.;
  p_output1[20]=t51;
  p_output1[21]=0.333333333333333*t37*t78;
  p_output1[22]=-0.333333333333333*t37*t78;
  p_output1[23]=-1.;
  p_output1[24]=t51;
  p_output1[25]=t56;
  p_output1[26]=1.;
  p_output1[27]=t51;
  p_output1[28]=0.333333333333333*t37*t83;
  p_output1[29]=-0.333333333333333*t37*t83;
  p_output1[30]=-1.;
  p_output1[31]=t51;
  p_output1[32]=t56;
  p_output1[33]=1.;
  p_output1[34]=t51;
  p_output1[35]=0.333333333333333*t37*t88;
  p_output1[36]=-0.333333333333333*t37*t88;
  p_output1[37]=-1.;
  p_output1[38]=t51;
  p_output1[39]=t56;
  p_output1[40]=1.;
  p_output1[41]=t51;
  p_output1[42]=0.333333333333333*t37*t92;
  p_output1[43]=-0.333333333333333*t37*t92;
  p_output1[44]=-1.;
  p_output1[45]=t51;
  p_output1[46]=t56;
  p_output1[47]=1.;
  p_output1[48]=t51;
  p_output1[49]=0.25*t37*t96;
  p_output1[50]=-0.25*t37*t96;
  p_output1[51]=-0.5;
  p_output1[52]=t99;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t100;
  p_output1[56]=0.25*t102*t37;
  p_output1[57]=-0.25*t102*t37;
  p_output1[58]=-0.5;
  p_output1[59]=t99;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t100;
  p_output1[63]=0.25*t106*t37;
  p_output1[64]=-0.25*t106*t37;
  p_output1[65]=-0.5;
  p_output1[66]=t99;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t100;
  p_output1[70]=0.25*t110*t37;
  p_output1[71]=-0.25*t110*t37;
  p_output1[72]=-0.5;
  p_output1[73]=t99;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t100;
  p_output1[77]=0.25*t114*t37;
  p_output1[78]=-0.25*t114*t37;
  p_output1[79]=-0.5;
  p_output1[80]=t99;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t100;
  p_output1[84]=0.25*t118*t37;
  p_output1[85]=-0.25*t118*t37;
  p_output1[86]=-0.5;
  p_output1[87]=t99;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t100;
  p_output1[91]=0.25*t122*t37;
  p_output1[92]=-0.25*t122*t37;
  p_output1[93]=-0.5;
  p_output1[94]=t99;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t100;
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
