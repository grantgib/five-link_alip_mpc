/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:40 GMT-04:00
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
  double t197;
  double t4615;
  double t4622;
  double t9063;
  double t9334;
  double t9346;
  double t9347;
  double t9371;
  double t9379;
  double t9370;
  double t9405;
  double t9416;
  double t9440;
  double t9444;
  double t9462;
  double t9464;
  double t9467;
  double t9477;
  double t9494;
  double t9496;
  double t9499;
  double t9500;
  double t9519;
  double t9521;
  double t9510;
  double t9514;
  double t9532;
  double t9534;
  double t9538;
  double t9539;
  double t9549;
  double t9550;
  double t9558;
  double t9559;
  double t9567;
  double t9571;
  t197 = 4.*var5[0];
  t4615 = var3[0] + t197 + var7[0];
  t4622 = -1. + var8[0];
  t9063 = 1/t4622;
  t9334 = -1.*var1[0];
  t9346 = t9334 + var1[1];
  t9347 = -0.333333333333333*t9063*t9346;
  t9371 = 4.*var5[1];
  t9379 = var3[1] + t9371 + var7[1];
  t9370 = -1.33333333333333*t9063*t9346;
  t9405 = 4.*var5[2];
  t9416 = var3[2] + t9405 + var7[2];
  t9440 = 4.*var5[3];
  t9444 = var3[3] + t9440 + var7[3];
  t9462 = 4.*var5[4];
  t9464 = var3[4] + t9462 + var7[4];
  t9467 = 4.*var5[5];
  t9477 = var3[5] + t9467 + var7[5];
  t9494 = 4.*var5[6];
  t9496 = var3[6] + t9494 + var7[6];
  t9499 = -1.*var7[0];
  t9500 = var3[0] + t9499;
  t9519 = -1.*var7[1];
  t9521 = var3[1] + t9519;
  t9510 = -0.25*t9063*t9346;
  t9514 = 0.25*t9063*t9346;
  t9532 = -1.*var7[2];
  t9534 = var3[2] + t9532;
  t9538 = -1.*var7[3];
  t9539 = var3[3] + t9538;
  t9549 = -1.*var7[4];
  t9550 = var3[4] + t9549;
  t9558 = -1.*var7[5];
  t9559 = var3[5] + t9558;
  t9567 = -1.*var7[6];
  t9571 = var3[6] + t9567;
  p_output1[0]=0.333333333333333*t4615*t9063;
  p_output1[1]=-0.333333333333333*t4615*t9063;
  p_output1[2]=-1.;
  p_output1[3]=t9347;
  p_output1[4]=t9370;
  p_output1[5]=1.;
  p_output1[6]=t9347;
  p_output1[7]=0.333333333333333*t9063*t9379;
  p_output1[8]=-0.333333333333333*t9063*t9379;
  p_output1[9]=-1.;
  p_output1[10]=t9347;
  p_output1[11]=t9370;
  p_output1[12]=1.;
  p_output1[13]=t9347;
  p_output1[14]=0.333333333333333*t9063*t9416;
  p_output1[15]=-0.333333333333333*t9063*t9416;
  p_output1[16]=-1.;
  p_output1[17]=t9347;
  p_output1[18]=t9370;
  p_output1[19]=1.;
  p_output1[20]=t9347;
  p_output1[21]=0.333333333333333*t9063*t9444;
  p_output1[22]=-0.333333333333333*t9063*t9444;
  p_output1[23]=-1.;
  p_output1[24]=t9347;
  p_output1[25]=t9370;
  p_output1[26]=1.;
  p_output1[27]=t9347;
  p_output1[28]=0.333333333333333*t9063*t9464;
  p_output1[29]=-0.333333333333333*t9063*t9464;
  p_output1[30]=-1.;
  p_output1[31]=t9347;
  p_output1[32]=t9370;
  p_output1[33]=1.;
  p_output1[34]=t9347;
  p_output1[35]=0.333333333333333*t9063*t9477;
  p_output1[36]=-0.333333333333333*t9063*t9477;
  p_output1[37]=-1.;
  p_output1[38]=t9347;
  p_output1[39]=t9370;
  p_output1[40]=1.;
  p_output1[41]=t9347;
  p_output1[42]=0.333333333333333*t9063*t9496;
  p_output1[43]=-0.333333333333333*t9063*t9496;
  p_output1[44]=-1.;
  p_output1[45]=t9347;
  p_output1[46]=t9370;
  p_output1[47]=1.;
  p_output1[48]=t9347;
  p_output1[49]=0.25*t9063*t9500;
  p_output1[50]=-0.25*t9063*t9500;
  p_output1[51]=-0.5;
  p_output1[52]=t9510;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t9514;
  p_output1[56]=0.25*t9063*t9521;
  p_output1[57]=-0.25*t9063*t9521;
  p_output1[58]=-0.5;
  p_output1[59]=t9510;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t9514;
  p_output1[63]=0.25*t9063*t9534;
  p_output1[64]=-0.25*t9063*t9534;
  p_output1[65]=-0.5;
  p_output1[66]=t9510;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t9514;
  p_output1[70]=0.25*t9063*t9539;
  p_output1[71]=-0.25*t9063*t9539;
  p_output1[72]=-0.5;
  p_output1[73]=t9510;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t9514;
  p_output1[77]=0.25*t9063*t9550;
  p_output1[78]=-0.25*t9063*t9550;
  p_output1[79]=-0.5;
  p_output1[80]=t9510;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t9514;
  p_output1[84]=0.25*t9063*t9559;
  p_output1[85]=-0.25*t9063*t9559;
  p_output1[86]=-0.5;
  p_output1[87]=t9510;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t9514;
  p_output1[91]=0.25*t9063*t9571;
  p_output1[92]=-0.25*t9063*t9571;
  p_output1[93]=-0.5;
  p_output1[94]=t9510;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t9514;
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
