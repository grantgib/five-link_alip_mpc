/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:12 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t51;
  double t62;
  double t73;
  double t77;
  double t86;
  double t87;
  double t91;
  double t97;
  double t100;
  double t96;
  double t108;
  double t109;
  double t117;
  double t118;
  double t122;
  double t123;
  double t127;
  double t128;
  double t131;
  double t132;
  double t135;
  double t136;
  double t141;
  double t142;
  double t139;
  double t140;
  double t145;
  double t146;
  double t149;
  double t150;
  double t153;
  double t154;
  double t157;
  double t158;
  double t161;
  double t162;
  t51 = 4.*var5[0];
  t62 = var3[0] + t51 + var7[0];
  t73 = -1. + var8[0];
  t77 = 1/t73;
  t86 = -1.*var1[0];
  t87 = t86 + var1[1];
  t91 = -0.333333333333333*t77*t87;
  t97 = 4.*var5[1];
  t100 = var3[1] + t97 + var7[1];
  t96 = -1.33333333333333*t77*t87;
  t108 = 4.*var5[2];
  t109 = var3[2] + t108 + var7[2];
  t117 = 4.*var5[3];
  t118 = var3[3] + t117 + var7[3];
  t122 = 4.*var5[4];
  t123 = var3[4] + t122 + var7[4];
  t127 = 4.*var5[5];
  t128 = var3[5] + t127 + var7[5];
  t131 = 4.*var5[6];
  t132 = var3[6] + t131 + var7[6];
  t135 = -1.*var7[0];
  t136 = var3[0] + t135;
  t141 = -1.*var7[1];
  t142 = var3[1] + t141;
  t139 = -0.25*t77*t87;
  t140 = 0.25*t77*t87;
  t145 = -1.*var7[2];
  t146 = var3[2] + t145;
  t149 = -1.*var7[3];
  t150 = var3[3] + t149;
  t153 = -1.*var7[4];
  t154 = var3[4] + t153;
  t157 = -1.*var7[5];
  t158 = var3[5] + t157;
  t161 = -1.*var7[6];
  t162 = var3[6] + t161;
  p_output1[0]=0.333333333333333*t62*t77;
  p_output1[1]=-0.333333333333333*t62*t77;
  p_output1[2]=-1.;
  p_output1[3]=t91;
  p_output1[4]=t96;
  p_output1[5]=1.;
  p_output1[6]=t91;
  p_output1[7]=0.333333333333333*t100*t77;
  p_output1[8]=-0.333333333333333*t100*t77;
  p_output1[9]=-1.;
  p_output1[10]=t91;
  p_output1[11]=t96;
  p_output1[12]=1.;
  p_output1[13]=t91;
  p_output1[14]=0.333333333333333*t109*t77;
  p_output1[15]=-0.333333333333333*t109*t77;
  p_output1[16]=-1.;
  p_output1[17]=t91;
  p_output1[18]=t96;
  p_output1[19]=1.;
  p_output1[20]=t91;
  p_output1[21]=0.333333333333333*t118*t77;
  p_output1[22]=-0.333333333333333*t118*t77;
  p_output1[23]=-1.;
  p_output1[24]=t91;
  p_output1[25]=t96;
  p_output1[26]=1.;
  p_output1[27]=t91;
  p_output1[28]=0.333333333333333*t123*t77;
  p_output1[29]=-0.333333333333333*t123*t77;
  p_output1[30]=-1.;
  p_output1[31]=t91;
  p_output1[32]=t96;
  p_output1[33]=1.;
  p_output1[34]=t91;
  p_output1[35]=0.333333333333333*t128*t77;
  p_output1[36]=-0.333333333333333*t128*t77;
  p_output1[37]=-1.;
  p_output1[38]=t91;
  p_output1[39]=t96;
  p_output1[40]=1.;
  p_output1[41]=t91;
  p_output1[42]=0.333333333333333*t132*t77;
  p_output1[43]=-0.333333333333333*t132*t77;
  p_output1[44]=-1.;
  p_output1[45]=t91;
  p_output1[46]=t96;
  p_output1[47]=1.;
  p_output1[48]=t91;
  p_output1[49]=0.25*t136*t77;
  p_output1[50]=-0.25*t136*t77;
  p_output1[51]=-0.5;
  p_output1[52]=t139;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t140;
  p_output1[56]=0.25*t142*t77;
  p_output1[57]=-0.25*t142*t77;
  p_output1[58]=-0.5;
  p_output1[59]=t139;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t140;
  p_output1[63]=0.25*t146*t77;
  p_output1[64]=-0.25*t146*t77;
  p_output1[65]=-0.5;
  p_output1[66]=t139;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t140;
  p_output1[70]=0.25*t150*t77;
  p_output1[71]=-0.25*t150*t77;
  p_output1[72]=-0.5;
  p_output1[73]=t139;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t140;
  p_output1[77]=0.25*t154*t77;
  p_output1[78]=-0.25*t154*t77;
  p_output1[79]=-0.5;
  p_output1[80]=t139;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t140;
  p_output1[84]=0.25*t158*t77;
  p_output1[85]=-0.25*t158*t77;
  p_output1[86]=-0.5;
  p_output1[87]=t139;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t140;
  p_output1[91]=0.25*t162*t77;
  p_output1[92]=-0.25*t162*t77;
  p_output1[93]=-0.5;
  p_output1[94]=t139;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t140;
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
