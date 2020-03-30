/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:51:55 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t4309;
  double t2677;
  double t2678;
  double t4239;
  double t4258;
  double t4308;
  double t4364;
  double t4366;
  double t4371;
  double t4372;
  double t4376;
  double t4377;
  double t4378;
  double t4418;
  double t4421;
  double t4429;
  double t4430;
  double t4431;
  double t4457;
  double t4458;
  double t4468;
  double t4469;
  double t4530;
  double t4568;
  double t4586;
  double t4635;
  double t4636;
  double t4531;
  double t4538;
  double t4539;
  double t4541;
  double t4542;
  double t4543;
  double t4561;
  double t4564;
  double t4565;
  double t4567;
  double t4576;
  double t4583;
  double t4584;
  double t4585;
  t4309 = -1.*var5[1];
  t2677 = -1. + var6[0];
  t2678 = -1. + var7[0];
  t4239 = 1/t2678;
  t4258 = -1.*t2677*t4239;
  t4308 = 1. + t4258;
  t4364 = var5[0] + t4309;
  t4366 = Power(t4364,-5);
  t4371 = -1.*var1[0];
  t4372 = t4371 + var1[1];
  t4376 = t2677*t4239*t4372;
  t4377 = t4309 + var1[0] + t4376;
  t4378 = Power(t4377,3);
  t4418 = Power(t4364,-4);
  t4421 = Power(t4377,2);
  t4429 = 1/t4364;
  t4430 = -1.*t4429*t4377;
  t4431 = 1. + t4430;
  t4457 = Power(t4364,-3);
  t4458 = Power(t4431,2);
  t4468 = Power(t4364,-2);
  t4469 = Power(t4431,3);
  t4530 = Power(t4431,4);
  t4568 = Power(t4377,4);
  t4586 = Power(t4364,-6);
  t4635 = -1.*t4468*t4377;
  t4636 = t4429 + t4635;
  t4531 = 5.*t4429*t4530;
  t4538 = 20.*t4468*t4377*t4469;
  t4539 = -5.*t4429*t4530;
  t4541 = t4538 + t4539;
  t4542 = 30.*t4457*t4421*t4458;
  t4543 = -20.*t4468*t4377*t4469;
  t4561 = t4542 + t4543;
  t4564 = 20.*t4418*t4378*t4431;
  t4565 = -30.*t4457*t4421*t4458;
  t4567 = t4564 + t4565;
  t4576 = 5.*t4366*t4568;
  t4583 = -20.*t4418*t4378*t4431;
  t4584 = t4576 + t4583;
  t4585 = -5.*t4366*t4568;
  p_output1[0]=-20.*t4308*t4468*t4469*var4[0] - 60.*t4308*t4377*t4457*t4458*var4[4] + 40.*t4308*t4468*t4469*var4[4] - 60.*t4308*t4418*t4421*t4431*var4[8] + 120.*t4308*t4377*t4457*t4458*var4[8] - 20.*t4308*t4468*t4469*var4[8] - 20.*t4308*t4366*t4378*var4[12] + 120.*t4308*t4418*t4421*t4431*var4[12] - 60.*t4308*t4377*t4457*t4458*var4[12] + 40.*t4308*t4366*t4378*var4[16] - 60.*t4308*t4418*t4421*t4431*var4[16] - 20.*t4308*t4366*t4378*var4[20];
  p_output1[1]=-20.*t2677*t4239*t4468*t4469*var4[0] - 60.*t2677*t4239*t4377*t4457*t4458*var4[4] + 40.*t2677*t4239*t4468*t4469*var4[4] - 60.*t2677*t4239*t4418*t4421*t4431*var4[8] + 120.*t2677*t4239*t4377*t4457*t4458*var4[8] - 20.*t2677*t4239*t4468*t4469*var4[8] - 20.*t2677*t4239*t4366*t4378*var4[12] + 120.*t2677*t4239*t4418*t4421*t4431*var4[12] - 60.*t2677*t4239*t4377*t4457*t4458*var4[12] + 40.*t2677*t4239*t4366*t4378*var4[16] - 60.*t2677*t4239*t4418*t4421*t4431*var4[16] - 20.*t2677*t4239*t4366*t4378*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t4531;
  p_output1[4]=t4541;
  p_output1[5]=t4561;
  p_output1[6]=t4567;
  p_output1[7]=t4584;
  p_output1[8]=t4585;
  p_output1[9]=20.*t4377*t4457*t4469*var4[0] - 5.*t4468*t4530*var4[0] + 60.*t4418*t4421*t4458*var4[4] - 60.*t4377*t4457*t4469*var4[4] + 5.*t4468*t4530*var4[4] + 60.*t4366*t4378*t4431*var4[8] - 150.*t4418*t4421*t4458*var4[8] + 40.*t4377*t4457*t4469*var4[8] - 140.*t4366*t4378*t4431*var4[12] + 90.*t4418*t4421*t4458*var4[12] + 20.*t4568*t4586*var4[12] + 80.*t4366*t4378*t4431*var4[16] - 45.*t4568*t4586*var4[16] + 25.*t4568*t4586*var4[20];
  p_output1[10]=5.*t4468*t4530*var4[0] + 20.*t4429*t4469*t4636*var4[0] + 40.*t4377*t4457*t4469*var4[4] - 20.*t4468*t4469*var4[4] - 5.*t4468*t4530*var4[4] + 60.*t4377*t4458*t4468*t4636*var4[4] - 20.*t4429*t4469*t4636*var4[4] + 90.*t4418*t4421*t4458*var4[8] - 60.*t4377*t4457*t4458*var4[8] - 40.*t4377*t4457*t4469*var4[8] + 20.*t4468*t4469*var4[8] + 60.*t4421*t4431*t4457*t4636*var4[8] - 60.*t4377*t4458*t4468*t4636*var4[8] + 80.*t4366*t4378*t4431*var4[12] - 60.*t4418*t4421*t4431*var4[12] - 90.*t4418*t4421*t4458*var4[12] + 60.*t4377*t4457*t4458*var4[12] + 20.*t4378*t4418*t4636*var4[12] - 60.*t4421*t4431*t4457*t4636*var4[12] - 20.*t4366*t4378*var4[16] - 80.*t4366*t4378*t4431*var4[16] + 60.*t4418*t4421*t4431*var4[16] + 25.*t4568*t4586*var4[16] - 20.*t4378*t4418*t4636*var4[16] + 20.*t4366*t4378*var4[20] - 25.*t4568*t4586*var4[20];
  p_output1[11]=-20.*t4308*t4468*t4469*var4[1] - 60.*t4308*t4377*t4457*t4458*var4[5] + 40.*t4308*t4468*t4469*var4[5] - 60.*t4308*t4418*t4421*t4431*var4[9] + 120.*t4308*t4377*t4457*t4458*var4[9] - 20.*t4308*t4468*t4469*var4[9] - 20.*t4308*t4366*t4378*var4[13] + 120.*t4308*t4418*t4421*t4431*var4[13] - 60.*t4308*t4377*t4457*t4458*var4[13] + 40.*t4308*t4366*t4378*var4[17] - 60.*t4308*t4418*t4421*t4431*var4[17] - 20.*t4308*t4366*t4378*var4[21];
  p_output1[12]=-20.*t2677*t4239*t4468*t4469*var4[1] - 60.*t2677*t4239*t4377*t4457*t4458*var4[5] + 40.*t2677*t4239*t4468*t4469*var4[5] - 60.*t2677*t4239*t4418*t4421*t4431*var4[9] + 120.*t2677*t4239*t4377*t4457*t4458*var4[9] - 20.*t2677*t4239*t4468*t4469*var4[9] - 20.*t2677*t4239*t4366*t4378*var4[13] + 120.*t2677*t4239*t4418*t4421*t4431*var4[13] - 60.*t2677*t4239*t4377*t4457*t4458*var4[13] + 40.*t2677*t4239*t4366*t4378*var4[17] - 60.*t2677*t4239*t4418*t4421*t4431*var4[17] - 20.*t2677*t4239*t4366*t4378*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t4531;
  p_output1[15]=t4541;
  p_output1[16]=t4561;
  p_output1[17]=t4567;
  p_output1[18]=t4584;
  p_output1[19]=t4585;
  p_output1[20]=20.*t4377*t4457*t4469*var4[1] - 5.*t4468*t4530*var4[1] + 60.*t4418*t4421*t4458*var4[5] - 60.*t4377*t4457*t4469*var4[5] + 5.*t4468*t4530*var4[5] + 60.*t4366*t4378*t4431*var4[9] - 150.*t4418*t4421*t4458*var4[9] + 40.*t4377*t4457*t4469*var4[9] - 140.*t4366*t4378*t4431*var4[13] + 90.*t4418*t4421*t4458*var4[13] + 20.*t4568*t4586*var4[13] + 80.*t4366*t4378*t4431*var4[17] - 45.*t4568*t4586*var4[17] + 25.*t4568*t4586*var4[21];
  p_output1[21]=5.*t4468*t4530*var4[1] + 20.*t4429*t4469*t4636*var4[1] + 40.*t4377*t4457*t4469*var4[5] - 20.*t4468*t4469*var4[5] - 5.*t4468*t4530*var4[5] + 60.*t4377*t4458*t4468*t4636*var4[5] - 20.*t4429*t4469*t4636*var4[5] + 90.*t4418*t4421*t4458*var4[9] - 60.*t4377*t4457*t4458*var4[9] - 40.*t4377*t4457*t4469*var4[9] + 20.*t4468*t4469*var4[9] + 60.*t4421*t4431*t4457*t4636*var4[9] - 60.*t4377*t4458*t4468*t4636*var4[9] + 80.*t4366*t4378*t4431*var4[13] - 60.*t4418*t4421*t4431*var4[13] - 90.*t4418*t4421*t4458*var4[13] + 60.*t4377*t4457*t4458*var4[13] + 20.*t4378*t4418*t4636*var4[13] - 60.*t4421*t4431*t4457*t4636*var4[13] - 20.*t4366*t4378*var4[17] - 80.*t4366*t4378*t4431*var4[17] + 60.*t4418*t4421*t4431*var4[17] + 25.*t4568*t4586*var4[17] - 20.*t4378*t4418*t4636*var4[17] + 20.*t4366*t4378*var4[21] - 25.*t4568*t4586*var4[21];
  p_output1[22]=-20.*t4308*t4468*t4469*var4[2] - 60.*t4308*t4377*t4457*t4458*var4[6] + 40.*t4308*t4468*t4469*var4[6] - 60.*t4308*t4418*t4421*t4431*var4[10] + 120.*t4308*t4377*t4457*t4458*var4[10] - 20.*t4308*t4468*t4469*var4[10] - 20.*t4308*t4366*t4378*var4[14] + 120.*t4308*t4418*t4421*t4431*var4[14] - 60.*t4308*t4377*t4457*t4458*var4[14] + 40.*t4308*t4366*t4378*var4[18] - 60.*t4308*t4418*t4421*t4431*var4[18] - 20.*t4308*t4366*t4378*var4[22];
  p_output1[23]=-20.*t2677*t4239*t4468*t4469*var4[2] - 60.*t2677*t4239*t4377*t4457*t4458*var4[6] + 40.*t2677*t4239*t4468*t4469*var4[6] - 60.*t2677*t4239*t4418*t4421*t4431*var4[10] + 120.*t2677*t4239*t4377*t4457*t4458*var4[10] - 20.*t2677*t4239*t4468*t4469*var4[10] - 20.*t2677*t4239*t4366*t4378*var4[14] + 120.*t2677*t4239*t4418*t4421*t4431*var4[14] - 60.*t2677*t4239*t4377*t4457*t4458*var4[14] + 40.*t2677*t4239*t4366*t4378*var4[18] - 60.*t2677*t4239*t4418*t4421*t4431*var4[18] - 20.*t2677*t4239*t4366*t4378*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t4531;
  p_output1[26]=t4541;
  p_output1[27]=t4561;
  p_output1[28]=t4567;
  p_output1[29]=t4584;
  p_output1[30]=t4585;
  p_output1[31]=20.*t4377*t4457*t4469*var4[2] - 5.*t4468*t4530*var4[2] + 60.*t4418*t4421*t4458*var4[6] - 60.*t4377*t4457*t4469*var4[6] + 5.*t4468*t4530*var4[6] + 60.*t4366*t4378*t4431*var4[10] - 150.*t4418*t4421*t4458*var4[10] + 40.*t4377*t4457*t4469*var4[10] - 140.*t4366*t4378*t4431*var4[14] + 90.*t4418*t4421*t4458*var4[14] + 20.*t4568*t4586*var4[14] + 80.*t4366*t4378*t4431*var4[18] - 45.*t4568*t4586*var4[18] + 25.*t4568*t4586*var4[22];
  p_output1[32]=5.*t4468*t4530*var4[2] + 20.*t4429*t4469*t4636*var4[2] + 40.*t4377*t4457*t4469*var4[6] - 20.*t4468*t4469*var4[6] - 5.*t4468*t4530*var4[6] + 60.*t4377*t4458*t4468*t4636*var4[6] - 20.*t4429*t4469*t4636*var4[6] + 90.*t4418*t4421*t4458*var4[10] - 60.*t4377*t4457*t4458*var4[10] - 40.*t4377*t4457*t4469*var4[10] + 20.*t4468*t4469*var4[10] + 60.*t4421*t4431*t4457*t4636*var4[10] - 60.*t4377*t4458*t4468*t4636*var4[10] + 80.*t4366*t4378*t4431*var4[14] - 60.*t4418*t4421*t4431*var4[14] - 90.*t4418*t4421*t4458*var4[14] + 60.*t4377*t4457*t4458*var4[14] + 20.*t4378*t4418*t4636*var4[14] - 60.*t4421*t4431*t4457*t4636*var4[14] - 20.*t4366*t4378*var4[18] - 80.*t4366*t4378*t4431*var4[18] + 60.*t4418*t4421*t4431*var4[18] + 25.*t4568*t4586*var4[18] - 20.*t4378*t4418*t4636*var4[18] + 20.*t4366*t4378*var4[22] - 25.*t4568*t4586*var4[22];
  p_output1[33]=-20.*t4308*t4468*t4469*var4[3] - 60.*t4308*t4377*t4457*t4458*var4[7] + 40.*t4308*t4468*t4469*var4[7] - 60.*t4308*t4418*t4421*t4431*var4[11] + 120.*t4308*t4377*t4457*t4458*var4[11] - 20.*t4308*t4468*t4469*var4[11] - 20.*t4308*t4366*t4378*var4[15] + 120.*t4308*t4418*t4421*t4431*var4[15] - 60.*t4308*t4377*t4457*t4458*var4[15] + 40.*t4308*t4366*t4378*var4[19] - 60.*t4308*t4418*t4421*t4431*var4[19] - 20.*t4308*t4366*t4378*var4[23];
  p_output1[34]=-20.*t2677*t4239*t4468*t4469*var4[3] - 60.*t2677*t4239*t4377*t4457*t4458*var4[7] + 40.*t2677*t4239*t4468*t4469*var4[7] - 60.*t2677*t4239*t4418*t4421*t4431*var4[11] + 120.*t2677*t4239*t4377*t4457*t4458*var4[11] - 20.*t2677*t4239*t4468*t4469*var4[11] - 20.*t2677*t4239*t4366*t4378*var4[15] + 120.*t2677*t4239*t4418*t4421*t4431*var4[15] - 60.*t2677*t4239*t4377*t4457*t4458*var4[15] + 40.*t2677*t4239*t4366*t4378*var4[19] - 60.*t2677*t4239*t4418*t4421*t4431*var4[19] - 20.*t2677*t4239*t4366*t4378*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t4531;
  p_output1[37]=t4541;
  p_output1[38]=t4561;
  p_output1[39]=t4567;
  p_output1[40]=t4584;
  p_output1[41]=t4585;
  p_output1[42]=20.*t4377*t4457*t4469*var4[3] - 5.*t4468*t4530*var4[3] + 60.*t4418*t4421*t4458*var4[7] - 60.*t4377*t4457*t4469*var4[7] + 5.*t4468*t4530*var4[7] + 60.*t4366*t4378*t4431*var4[11] - 150.*t4418*t4421*t4458*var4[11] + 40.*t4377*t4457*t4469*var4[11] - 140.*t4366*t4378*t4431*var4[15] + 90.*t4418*t4421*t4458*var4[15] + 20.*t4568*t4586*var4[15] + 80.*t4366*t4378*t4431*var4[19] - 45.*t4568*t4586*var4[19] + 25.*t4568*t4586*var4[23];
  p_output1[43]=5.*t4468*t4530*var4[3] + 20.*t4429*t4469*t4636*var4[3] + 40.*t4377*t4457*t4469*var4[7] - 20.*t4468*t4469*var4[7] - 5.*t4468*t4530*var4[7] + 60.*t4377*t4458*t4468*t4636*var4[7] - 20.*t4429*t4469*t4636*var4[7] + 90.*t4418*t4421*t4458*var4[11] - 60.*t4377*t4457*t4458*var4[11] - 40.*t4377*t4457*t4469*var4[11] + 20.*t4468*t4469*var4[11] + 60.*t4421*t4431*t4457*t4636*var4[11] - 60.*t4377*t4458*t4468*t4636*var4[11] + 80.*t4366*t4378*t4431*var4[15] - 60.*t4418*t4421*t4431*var4[15] - 90.*t4418*t4421*t4458*var4[15] + 60.*t4377*t4457*t4458*var4[15] + 20.*t4378*t4418*t4636*var4[15] - 60.*t4421*t4431*t4457*t4636*var4[15] - 20.*t4366*t4378*var4[19] - 80.*t4366*t4378*t4431*var4[19] + 60.*t4418*t4421*t4431*var4[19] + 25.*t4568*t4586*var4[19] - 20.*t4378*t4418*t4636*var4[19] + 20.*t4366*t4378*var4[23] - 25.*t4568*t4586*var4[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_time_RightStance.hh"

namespace RightStance
{

void J_d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
