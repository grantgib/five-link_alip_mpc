/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:57 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t1761;
  double t982;
  double t1485;
  double t1578;
  double t1596;
  double t1688;
  double t2535;
  double t2905;
  double t3099;
  double t3167;
  double t3214;
  double t3225;
  double t3354;
  double t3546;
  double t3579;
  double t3629;
  double t3637;
  double t3652;
  double t3920;
  double t3995;
  double t4055;
  double t4210;
  double t4410;
  double t6820;
  double t7317;
  double t7331;
  double t7599;
  double t7607;
  double t7266;
  double t7297;
  double t7301;
  double t7304;
  double t7308;
  double t7309;
  double t7329;
  double t8425;
  double t8437;
  double t8423;
  double t8438;
  double t8386;
  double t8430;
  double t8441;
  double t8453;
  double t8479;
  double t8488;
  double t8489;
  double t8493;
  double t8405;
  double t8422;
  double t8462;
  double t8505;
  double t8507;
  double t8508;
  double t8513;
  double t8514;
  double t8534;
  double t8576;
  double t8582;
  double t8587;
  double t9140;
  double t9178;
  double t9186;
  double t9135;
  double t9188;
  double t9190;
  double t9191;
  double t9198;
  double t9210;
  double t9215;
  t1761 = -1.*var4[1];
  t982 = -1. + var5[0];
  t1485 = -1. + var6[0];
  t1578 = 1/t1485;
  t1596 = -1.*t982*t1578;
  t1688 = 1. + t1596;
  t2535 = var4[0] + t1761;
  t2905 = Power(t2535,-5);
  t3099 = -1.*var1[0];
  t3167 = t3099 + var1[1];
  t3214 = t982*t1578*t3167;
  t3225 = t1761 + var1[0] + t3214;
  t3354 = Power(t3225,4);
  t3546 = Power(t2535,-4);
  t3579 = Power(t3225,3);
  t3629 = 1/t2535;
  t3637 = -1.*t3629*t3225;
  t3652 = 1. + t3637;
  t3920 = Power(t2535,-3);
  t3995 = Power(t3225,2);
  t4055 = Power(t3652,2);
  t4210 = Power(t2535,-2);
  t4410 = Power(t3652,3);
  t6820 = Power(t3652,4);
  t7317 = Power(t3225,5);
  t7331 = Power(t2535,-6);
  t7599 = -1.*t4210*t3225;
  t7607 = t3629 + t7599;
  t7266 = Power(t3652,5);
  t7297 = -1.*t7266;
  t7301 = -5.*t3629*t3225*t6820;
  t7304 = -10.*t4210*t3995*t4410;
  t7308 = -10.*t3920*t3579*t4055;
  t7309 = -5.*t3546*t3354*t3652;
  t7329 = -1.*t2905*t7317;
  t8425 = Cos(var2[5]);
  t8437 = Sin(var2[2]);
  t8423 = Cos(var2[2]);
  t8438 = Sin(var2[5]);
  t8386 = Cos(var2[6]);
  t8430 = t8423*t8425;
  t8441 = -1.*t8437*t8438;
  t8453 = t8430 + t8441;
  t8479 = -1.*t8425*t8437;
  t8488 = -1.*t8423*t8438;
  t8489 = t8479 + t8488;
  t8493 = Sin(var2[6]);
  t8405 = -1.*t8386;
  t8422 = 1. + t8405;
  t8462 = 0.4*t8422*t8453;
  t8505 = -0.4*t8489*t8493;
  t8507 = t8386*t8453;
  t8508 = t8489*t8493;
  t8513 = t8507 + t8508;
  t8514 = 0.8*t8513;
  t8534 = t8462 + t8505 + t8514;
  t8576 = t8425*t8437;
  t8582 = t8423*t8438;
  t8587 = t8576 + t8582;
  t9140 = -1.*t8423*t8425;
  t9178 = t8437*t8438;
  t9186 = t9140 + t9178;
  t9135 = 0.4*t8422*t8489;
  t9188 = -0.4*t9186*t8493;
  t9190 = t8386*t8489;
  t9191 = t9186*t8493;
  t9198 = t9190 + t9191;
  t9210 = 0.8*t9198;
  t9215 = t9135 + t9188 + t9210;
  p_output1[0]=5.*t1688*t3629*t6820*var3[0] + 20.*t1688*t3225*t4210*t4410*var3[4] - 5.*t1688*t3629*t6820*var3[4] + 30.*t1688*t3920*t3995*t4055*var3[8] - 20.*t1688*t3225*t4210*t4410*var3[8] + 20.*t1688*t3546*t3579*t3652*var3[12] - 30.*t1688*t3920*t3995*t4055*var3[12] + 5.*t1688*t2905*t3354*var3[16] - 20.*t1688*t3546*t3579*t3652*var3[16] - 5.*t1688*t2905*t3354*var3[20];
  p_output1[1]=5.*t1578*t3629*t6820*t982*var3[0] + 20.*t1578*t3225*t4210*t4410*t982*var3[4] - 5.*t1578*t3629*t6820*t982*var3[4] + 30.*t1578*t3920*t3995*t4055*t982*var3[8] - 20.*t1578*t3225*t4210*t4410*t982*var3[8] + 20.*t1578*t3546*t3579*t3652*t982*var3[12] - 30.*t1578*t3920*t3995*t4055*t982*var3[12] + 5.*t1578*t2905*t3354*t982*var3[16] - 20.*t1578*t3546*t3579*t3652*t982*var3[16] - 5.*t1578*t2905*t3354*t982*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t7297;
  p_output1[4]=t7301;
  p_output1[5]=t7304;
  p_output1[6]=t7308;
  p_output1[7]=t7309;
  p_output1[8]=t7329;
  p_output1[9]=-5.*t3225*t4210*t6820*var3[0] - 20.*t3920*t3995*t4410*var3[4] + 5.*t3225*t4210*t6820*var3[4] - 30.*t3546*t3579*t4055*var3[8] + 20.*t3920*t3995*t4410*var3[8] - 20.*t2905*t3354*t3652*var3[12] + 30.*t3546*t3579*t4055*var3[12] + 20.*t2905*t3354*t3652*var3[16] - 5.*t7317*t7331*var3[16] + 5.*t7317*t7331*var3[20];
  p_output1[10]=-5.*t6820*t7607*var3[0] + 5.*t3629*t6820*var3[4] - 5.*t3225*t4210*t6820*var3[4] - 20.*t3225*t3629*t4410*t7607*var3[4] - 20.*t3920*t3995*t4410*var3[8] + 20.*t3225*t4210*t4410*var3[8] - 30.*t3995*t4055*t4210*t7607*var3[8] - 30.*t3546*t3579*t4055*var3[12] + 30.*t3920*t3995*t4055*var3[12] - 20.*t3579*t3652*t3920*t7607*var3[12] - 20.*t2905*t3354*t3652*var3[16] + 20.*t3546*t3579*t3652*var3[16] - 5.*t3354*t3546*t7607*var3[16] + 5.*t2905*t3354*var3[20] - 5.*t7317*t7331*var3[20];
  p_output1[11]=5.*t1688*t3629*t6820*var3[1] + 20.*t1688*t3225*t4210*t4410*var3[5] - 5.*t1688*t3629*t6820*var3[5] + 30.*t1688*t3920*t3995*t4055*var3[9] - 20.*t1688*t3225*t4210*t4410*var3[9] + 20.*t1688*t3546*t3579*t3652*var3[13] - 30.*t1688*t3920*t3995*t4055*var3[13] + 5.*t1688*t2905*t3354*var3[17] - 20.*t1688*t3546*t3579*t3652*var3[17] - 5.*t1688*t2905*t3354*var3[21];
  p_output1[12]=5.*t1578*t3629*t6820*t982*var3[1] + 20.*t1578*t3225*t4210*t4410*t982*var3[5] - 5.*t1578*t3629*t6820*t982*var3[5] + 30.*t1578*t3920*t3995*t4055*t982*var3[9] - 20.*t1578*t3225*t4210*t4410*t982*var3[9] + 20.*t1578*t3546*t3579*t3652*t982*var3[13] - 30.*t1578*t3920*t3995*t4055*t982*var3[13] + 5.*t1578*t2905*t3354*t982*var3[17] - 20.*t1578*t3546*t3579*t3652*t982*var3[17] - 5.*t1578*t2905*t3354*t982*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t7297;
  p_output1[15]=t7301;
  p_output1[16]=t7304;
  p_output1[17]=t7308;
  p_output1[18]=t7309;
  p_output1[19]=t7329;
  p_output1[20]=-5.*t3225*t4210*t6820*var3[1] - 20.*t3920*t3995*t4410*var3[5] + 5.*t3225*t4210*t6820*var3[5] - 30.*t3546*t3579*t4055*var3[9] + 20.*t3920*t3995*t4410*var3[9] - 20.*t2905*t3354*t3652*var3[13] + 30.*t3546*t3579*t4055*var3[13] + 20.*t2905*t3354*t3652*var3[17] - 5.*t7317*t7331*var3[17] + 5.*t7317*t7331*var3[21];
  p_output1[21]=-5.*t6820*t7607*var3[1] + 5.*t3629*t6820*var3[5] - 5.*t3225*t4210*t6820*var3[5] - 20.*t3225*t3629*t4410*t7607*var3[5] - 20.*t3920*t3995*t4410*var3[9] + 20.*t3225*t4210*t4410*var3[9] - 30.*t3995*t4055*t4210*t7607*var3[9] - 30.*t3546*t3579*t4055*var3[13] + 30.*t3920*t3995*t4055*var3[13] - 20.*t3579*t3652*t3920*t7607*var3[13] - 20.*t2905*t3354*t3652*var3[17] + 20.*t3546*t3579*t3652*var3[17] - 5.*t3354*t3546*t7607*var3[17] + 5.*t2905*t3354*var3[21] - 5.*t7317*t7331*var3[21];
  p_output1[22]=5.*t1688*t3629*t6820*var3[2] + 20.*t1688*t3225*t4210*t4410*var3[6] - 5.*t1688*t3629*t6820*var3[6] + 30.*t1688*t3920*t3995*t4055*var3[10] - 20.*t1688*t3225*t4210*t4410*var3[10] + 20.*t1688*t3546*t3579*t3652*var3[14] - 30.*t1688*t3920*t3995*t4055*var3[14] + 5.*t1688*t2905*t3354*var3[18] - 20.*t1688*t3546*t3579*t3652*var3[18] - 5.*t1688*t2905*t3354*var3[22];
  p_output1[23]=5.*t1578*t3629*t6820*t982*var3[2] + 20.*t1578*t3225*t4210*t4410*t982*var3[6] - 5.*t1578*t3629*t6820*t982*var3[6] + 30.*t1578*t3920*t3995*t4055*t982*var3[10] - 20.*t1578*t3225*t4210*t4410*t982*var3[10] + 20.*t1578*t3546*t3579*t3652*t982*var3[14] - 30.*t1578*t3920*t3995*t4055*t982*var3[14] + 5.*t1578*t2905*t3354*t982*var3[18] - 20.*t1578*t3546*t3579*t3652*t982*var3[18] - 5.*t1578*t2905*t3354*t982*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t8534;
  p_output1[26]=t8534;
  p_output1[27]=-0.4*t8386*t8453 + 0.4*t8493*t8587 + 0.8*(t8507 - 1.*t8493*t8587);
  p_output1[28]=t7297;
  p_output1[29]=t7301;
  p_output1[30]=t7304;
  p_output1[31]=t7308;
  p_output1[32]=t7309;
  p_output1[33]=t7329;
  p_output1[34]=-5.*t3225*t4210*t6820*var3[2] - 20.*t3920*t3995*t4410*var3[6] + 5.*t3225*t4210*t6820*var3[6] - 30.*t3546*t3579*t4055*var3[10] + 20.*t3920*t3995*t4410*var3[10] - 20.*t2905*t3354*t3652*var3[14] + 30.*t3546*t3579*t4055*var3[14] + 20.*t2905*t3354*t3652*var3[18] - 5.*t7317*t7331*var3[18] + 5.*t7317*t7331*var3[22];
  p_output1[35]=-5.*t6820*t7607*var3[2] + 5.*t3629*t6820*var3[6] - 5.*t3225*t4210*t6820*var3[6] - 20.*t3225*t3629*t4410*t7607*var3[6] - 20.*t3920*t3995*t4410*var3[10] + 20.*t3225*t4210*t4410*var3[10] - 30.*t3995*t4055*t4210*t7607*var3[10] - 30.*t3546*t3579*t4055*var3[14] + 30.*t3920*t3995*t4055*var3[14] - 20.*t3579*t3652*t3920*t7607*var3[14] - 20.*t2905*t3354*t3652*var3[18] + 20.*t3546*t3579*t3652*var3[18] - 5.*t3354*t3546*t7607*var3[18] + 5.*t2905*t3354*var3[22] - 5.*t7317*t7331*var3[22];
  p_output1[36]=5.*t1688*t3629*t6820*var3[3] + 20.*t1688*t3225*t4210*t4410*var3[7] - 5.*t1688*t3629*t6820*var3[7] + 30.*t1688*t3920*t3995*t4055*var3[11] - 20.*t1688*t3225*t4210*t4410*var3[11] + 20.*t1688*t3546*t3579*t3652*var3[15] - 30.*t1688*t3920*t3995*t4055*var3[15] + 5.*t1688*t2905*t3354*var3[19] - 20.*t1688*t3546*t3579*t3652*var3[19] - 5.*t1688*t2905*t3354*var3[23];
  p_output1[37]=5.*t1578*t3629*t6820*t982*var3[3] + 20.*t1578*t3225*t4210*t4410*t982*var3[7] - 5.*t1578*t3629*t6820*t982*var3[7] + 30.*t1578*t3920*t3995*t4055*t982*var3[11] - 20.*t1578*t3225*t4210*t4410*t982*var3[11] + 20.*t1578*t3546*t3579*t3652*t982*var3[15] - 30.*t1578*t3920*t3995*t4055*t982*var3[15] + 5.*t1578*t2905*t3354*t982*var3[19] - 20.*t1578*t3546*t3579*t3652*t982*var3[19] - 5.*t1578*t2905*t3354*t982*var3[23];
  p_output1[38]=1.;
  p_output1[39]=t9215;
  p_output1[40]=t9215;
  p_output1[41]=-0.4*t8386*t8489 + 0.4*t8453*t8493 + 0.8*(-1.*t8453*t8493 + t9190);
  p_output1[42]=t7297;
  p_output1[43]=t7301;
  p_output1[44]=t7304;
  p_output1[45]=t7308;
  p_output1[46]=t7309;
  p_output1[47]=t7329;
  p_output1[48]=-5.*t3225*t4210*t6820*var3[3] - 20.*t3920*t3995*t4410*var3[7] + 5.*t3225*t4210*t6820*var3[7] - 30.*t3546*t3579*t4055*var3[11] + 20.*t3920*t3995*t4410*var3[11] - 20.*t2905*t3354*t3652*var3[15] + 30.*t3546*t3579*t4055*var3[15] + 20.*t2905*t3354*t3652*var3[19] - 5.*t7317*t7331*var3[19] + 5.*t7317*t7331*var3[23];
  p_output1[49]=-5.*t6820*t7607*var3[3] + 5.*t3629*t6820*var3[7] - 5.*t3225*t4210*t6820*var3[7] - 20.*t3225*t3629*t4410*t7607*var3[7] - 20.*t3920*t3995*t4410*var3[11] + 20.*t3225*t4210*t4410*var3[11] - 30.*t3995*t4055*t4210*t7607*var3[11] - 30.*t3546*t3579*t4055*var3[15] + 30.*t3920*t3995*t4055*var3[15] - 20.*t3579*t3652*t3920*t7607*var3[15] - 20.*t2905*t3354*t3652*var3[19] + 20.*t3546*t3579*t3652*var3[19] - 5.*t3354*t3546*t7607*var3[19] + 5.*t2905*t3354*var3[23] - 5.*t7317*t7331*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 50, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_RightStance.hh"

namespace RightStance
{

void J_y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
