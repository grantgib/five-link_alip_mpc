/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:22:53 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t2755;
  double t1110;
  double t1113;
  double t8260;
  double t8274;
  double t2185;
  double t8269;
  double t8270;
  double t1100;
  double t8275;
  double t8276;
  double t8277;
  double t8273;
  double t8326;
  double t8341;
  double t8345;
  double t8349;
  double t8354;
  double t8355;
  double t8360;
  double t8361;
  double t8362;
  double t8364;
  double t8365;
  double t8366;
  double t8278;
  double t8324;
  double t8368;
  double t8369;
  double t8370;
  double t8430;
  double t8431;
  double t8432;
  double t8442;
  double t8443;
  double t8444;
  double t8445;
  double t8446;
  double t8447;
  double t8448;
  double t8449;
  double t8457;
  double t8458;
  double t8459;
  double t8433;
  double t8434;
  double t8438;
  double t8439;
  double t8440;
  double t8441;
  double t8451;
  double t8452;
  double t8453;
  double t8454;
  double t8481;
  double t8482;
  double t8469;
  double t8472;
  double t8508;
  double t8509;
  double t8510;
  double t8511;
  double t8512;
  double t8504;
  double t8505;
  double t8480;
  double t8483;
  double t8484;
  double t8485;
  double t8489;
  double t8490;
  double t8496;
  double t8497;
  double t8498;
  double t8499;
  double t8500;
  double t8501;
  double t8502;
  double t8503;
  double t8506;
  double t8507;
  double t8533;
  double t8534;
  double t8535;
  double t8529;
  double t8530;
  double t8531;
  double t8515;
  double t8516;
  t2755 = Cos(var1[5]);
  t1110 = Cos(var1[6]);
  t1113 = Sin(var1[5]);
  t8260 = Sin(var1[6]);
  t8274 = Cos(var1[2]);
  t2185 = -1.*t1110*t1113;
  t8269 = -1.*t2755*t8260;
  t8270 = t2185 + t8269;
  t1100 = Sin(var1[2]);
  t8275 = t2755*t1110;
  t8276 = -1.*t1113*t8260;
  t8277 = t8275 + t8276;
  t8273 = -1.*t1100*t8270;
  t8326 = -1.*t8274*t8270;
  t8341 = -1.*t2755*t1110;
  t8345 = t1113*t8260;
  t8349 = t8341 + t8345;
  t8354 = t8274*t8349;
  t8355 = t8273 + t8354;
  t8360 = 0.384*var2[0]*t8355;
  t8361 = -1.*t1100*t8349;
  t8362 = t8326 + t8361;
  t8364 = 0.384*var2[1]*t8362;
  t8365 = t8360 + t8364;
  t8366 = var2[6]*t8365;
  t8278 = -1.*t8274*t8277;
  t8324 = t8273 + t8278;
  t8368 = t8274*t8270;
  t8369 = -1.*t1100*t8277;
  t8370 = t8368 + t8369;
  t8430 = t1110*t1113;
  t8431 = t2755*t8260;
  t8432 = t8430 + t8431;
  t8442 = -1.*t1110;
  t8443 = 1. + t8442;
  t8444 = 0.4*t8443;
  t8445 = 0.64*t1110;
  t8446 = t8444 + t8445;
  t8447 = -1.*t8446*t1113;
  t8448 = -0.24*t2755*t8260;
  t8449 = t8447 + t8448;
  t8457 = t2755*t8446;
  t8458 = -0.24*t1113*t8260;
  t8459 = t8457 + t8458;
  t8433 = t1100*t8432;
  t8434 = t8433 + t8354;
  t8438 = 0.384*var2[0]*t8434;
  t8439 = t8274*t8432;
  t8440 = t8439 + t8361;
  t8441 = 0.384*var2[1]*t8440;
  t8451 = t8446*t1113;
  t8452 = 0.24*t2755*t8260;
  t8453 = t8451 + t8452;
  t8454 = t8270*t8453;
  t8481 = -0.24*t1110*t1113;
  t8482 = t8481 + t8448;
  t8469 = 0.24*t1113*t8260;
  t8472 = t8459*t8349;
  t8508 = t8449*t8277;
  t8509 = t8453*t8277;
  t8510 = t8270*t8459;
  t8511 = t8432*t8459;
  t8512 = t8508 + t8509 + t8510 + t8511;
  t8504 = t1100*t8349;
  t8505 = t8368 + t8504;
  t8480 = t8270*t8449;
  t8483 = t8270*t8482;
  t8484 = t8482*t8432;
  t8485 = t8277*t8459;
  t8489 = 0.24*t2755*t1110;
  t8490 = t8489 + t8458;
  t8496 = t8277*t8490;
  t8497 = -0.24*t2755*t1110;
  t8498 = t8497 + t8469;
  t8499 = t8277*t8498;
  t8500 = t8480 + t8483 + t8454 + t8484 + t8485 + t8496 + t8499 + t8472;
  t8501 = 0.384*var2[2]*t8500;
  t8502 = t8438 + t8441 + t8501;
  t8503 = var2[6]*t8502;
  t8506 = 0.384*var2[6]*t8505;
  t8507 = 0.384*var2[6]*t8355;
  t8533 = -1.*t8446*t8260;
  t8534 = 0.24*t1110*t8260;
  t8535 = t8533 + t8534;
  t8529 = t8482*t8277;
  t8530 = t8432*t8490;
  t8531 = t8529 + t8509 + t8510 + t8530;
  t8515 = 0.384*var2[1]*t8355;
  t8516 = 0.384*var2[0]*t8505;
  p_output1[0]=(0.384*t8324*var2[0] + 0.384*(t1100*t8277 + t8326)*var2[1])*var2[6];
  p_output1[1]=t8366;
  p_output1[2]=t8366;
  p_output1[3]=0.384*t8370*var2[6];
  p_output1[4]=0.384*t8324*var2[6];
  p_output1[5]=0.384*t8370*var2[0] + 0.384*t8324*var2[1];
  p_output1[6]=t8366;
  p_output1[7]=(t8438 + t8441 + 0.384*(2.*t8270*t8449 + t8432*t8449 + t8454 + 2.*t8277*t8459 + t8277*(-1.*t2755*t8446 + t8469) + t8472)*var2[2])*var2[6];
  p_output1[8]=t8503;
  p_output1[9]=t8506;
  p_output1[10]=t8507;
  p_output1[11]=0.384*t8512*var2[6];
  p_output1[12]=t8515 + t8516 + 0.384*t8512*var2[2];
  p_output1[13]=t8366;
  p_output1[14]=t8503;
  p_output1[15]=(t8438 + t8441 + 0.384*(t8454 + t8472 + 2.*t8270*t8482 + t8484 + 2.*t8277*t8490 + t8499)*var2[2] + 0.384*(0.24*Power(t1110,2) - 1.*t1110*t8446)*var2[5])*var2[6];
  p_output1[16]=t8506;
  p_output1[17]=t8507;
  p_output1[18]=0.384*t8531*var2[6];
  p_output1[19]=0.384*t8535*var2[6];
  p_output1[20]=t8515 + t8516 + 0.384*t8531*var2[2] + 0.384*t8535*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec7_five_link_walker.hh"

namespace RightStance
{

void J_Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
