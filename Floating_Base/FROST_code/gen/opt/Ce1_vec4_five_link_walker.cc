/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:48 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t4100;
  double t4496;
  double t3598;
  double t3904;
  double t2725;
  double t3872;
  double t4159;
  double t4197;
  double t4245;
  double t4378;
  double t4394;
  double t10194;
  double t10195;
  double t10196;
  double t3678;
  double t4000;
  double t4047;
  double t4099;
  double t4759;
  double t4770;
  double t10107;
  double t10320;
  double t10335;
  double t10336;
  double t10197;
  double t10289;
  double t10296;
  double t10297;
  double t10298;
  double t10337;
  double t10353;
  double t10359;
  double t10364;
  double t10144;
  double t10145;
  double t10146;
  double t10365;
  double t10366;
  double t10367;
  double t10368;
  double t10369;
  double t10370;
  double t10345;
  double t10397;
  double t10398;
  double t10399;
  double t10400;
  double t10349;
  double t10401;
  double t10377;
  double t10382;
  double t10383;
  double t10186;
  double t10200;
  double t10410;
  double t10373;
  double t10374;
  double t10375;
  double t10411;
  double t10412;
  double t10413;
  double t10437;
  double t10438;
  double t10439;
  double t10422;
  double t10427;
  double t10431;
  double t10433;
  double t10434;
  double t10435;
  double t10436;
  double t10440;
  double t10467;
  double t10468;
  double t10445;
  double t10470;
  double t10471;
  double t10447;
  t4100 = Cos(var1[4]);
  t4496 = Sin(var1[4]);
  t3598 = Sin(var1[2]);
  t3904 = Sin(var1[3]);
  t2725 = Cos(var1[3]);
  t3872 = Cos(var1[2]);
  t4159 = -1.*t4100;
  t4197 = 1. + t4159;
  t4245 = 0.4*t4197;
  t4378 = 0.64*t4100;
  t4394 = t4245 + t4378;
  t10194 = t2725*t4100;
  t10195 = -1.*t3904*t4496;
  t10196 = t10194 + t10195;
  t3678 = -1.*t2725*t3598;
  t4000 = -1.*t3872*t3904;
  t4047 = t3678 + t4000;
  t4099 = 0.748*t4047;
  t4759 = t4394*t4496;
  t4770 = -0.24*t4100*t4496;
  t10107 = t4759 + t4770;
  t10320 = -1.*t4100*t3904;
  t10335 = -1.*t2725*t4496;
  t10336 = t10320 + t10335;
  t10197 = t3872*t10196;
  t10289 = t4394*t4100;
  t10296 = Power(t4496,2);
  t10297 = 0.24*t10296;
  t10298 = t10289 + t10297;
  t10337 = t3872*t10336;
  t10353 = t3598*t10336;
  t10359 = t10353 + t10197;
  t10364 = 3.2*t10107*t10359;
  t10144 = t4100*t3904;
  t10145 = t2725*t4496;
  t10146 = t10144 + t10145;
  t10365 = -1.*t2725*t4100;
  t10366 = t3904*t4496;
  t10367 = t10365 + t10366;
  t10368 = t3598*t10367;
  t10369 = t10337 + t10368;
  t10370 = 3.2*t10298*t10369;
  t10345 = -1.*t3598*t10196;
  t10397 = -1.*t3872*t2725;
  t10398 = t3598*t3904;
  t10399 = t10397 + t10398;
  t10400 = 0.748*t10399;
  t10349 = t10337 + t10345;
  t10401 = -1.*t3598*t10336;
  t10377 = Power(t4100,2);
  t10382 = -0.24*t10377;
  t10383 = t10289 + t10382;
  t10186 = -1.*t3598*t10146;
  t10200 = t10186 + t10197;
  t10410 = 3.2*t10107*t10349;
  t10373 = -1.*t4394*t4496;
  t10374 = 0.24*t4100*t4496;
  t10375 = t10373 + t10374;
  t10411 = t3872*t10367;
  t10412 = t10401 + t10411;
  t10413 = 3.2*t10298*t10412;
  t10437 = t2725*t4394;
  t10438 = -0.24*t3904*t4496;
  t10439 = t10437 + t10438;
  t10422 = -1.*t4394*t3904;
  t10427 = -0.24*t2725*t4496;
  t10431 = t10422 + t10427;
  t10433 = t4394*t3904;
  t10434 = 0.24*t2725*t4496;
  t10435 = t10433 + t10434;
  t10436 = t10435*t10196;
  t10440 = t10336*t10439;
  t10467 = -0.24*t4100*t3904;
  t10468 = t10467 + t10427;
  t10445 = -1.*t10336*t10435;
  t10470 = 0.24*t2725*t4100;
  t10471 = t10470 + t10438;
  t10447 = -1.*t10439*t10367;
  p_output1[0]=var2[3]*(-0.5*(3.2*t10107*t10200 + 3.2*t10298*t10349 + t4099)*var2[2] - 0.5*(t10364 + t10370 + t4099)*var2[3] - 0.5*(t10364 + t10370 + 3.2*t10359*t10375 + 3.2*t10383*(t10196*t3598 + t10146*t3872))*var2[4]);
  p_output1[1]=var2[3]*(-0.5*(t10400 + 3.2*t10107*(t10345 - 1.*t10146*t3872) + 3.2*t10298*(t10401 - 1.*t10196*t3872))*var2[2] - 0.5*(t10400 + t10410 + t10413)*var2[3] - 0.5*(3.2*t10349*t10375 + 3.2*t10200*t10383 + t10410 + t10413)*var2[4]);
  p_output1[2]=var2[3]*(-0.5*(3.2*t10298*(t10196*t10431 + t10436 + t10146*t10439 + t10440) + 3.2*t10107*(-1.*t10336*t10431 - 1.*t10196*t10439 + t10445 + t10447))*var2[3] - 0.5*(3.2*t10375*(t10146*t10435 + t10196*t10439) + 3.2*t10383*(-1.*t10196*t10435 - 1.*t10336*t10439) + 3.2*t10298*(t10436 + t10440 + t10196*t10468 + t10146*t10471) + 3.2*t10107*(t10445 + t10447 - 1.*t10336*t10468 - 1.*t10196*t10471))*var2[4]);
  p_output1[3]=-0.5*(6.4*t10298*t10375 + 6.4*t10107*t10383)*var2[3]*var2[4];
  p_output1[4]=-0.384*t10375*var2[3]*var2[4];
  p_output1[5]=0;
  p_output1[6]=0;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec4_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
