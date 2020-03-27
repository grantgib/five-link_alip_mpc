/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:52:36 GMT-04:00
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
  double t6817;
  double t2894;
  double t3014;
  double t7020;
  double t10339;
  double t6811;
  double t7290;
  double t7656;
  double t2157;
  double t10413;
  double t10456;
  double t11384;
  double t10299;
  double t11934;
  double t14245;
  double t14249;
  double t14250;
  double t14251;
  double t14252;
  double t14253;
  double t14254;
  double t14332;
  double t14333;
  double t14334;
  double t14372;
  double t11535;
  double t11747;
  double t14377;
  double t14387;
  double t14388;
  double t14410;
  double t14419;
  double t14420;
  double t14432;
  double t14433;
  double t14434;
  double t14435;
  double t14487;
  double t14488;
  double t14492;
  double t14493;
  double t14503;
  double t14504;
  double t14505;
  double t14421;
  double t14426;
  double t14427;
  double t14428;
  double t14430;
  double t14431;
  double t14495;
  double t14496;
  double t14500;
  double t14501;
  double t14518;
  double t14519;
  double t14508;
  double t14511;
  double t14547;
  double t14551;
  double t14552;
  double t14558;
  double t14559;
  double t14543;
  double t14544;
  double t14516;
  double t14520;
  double t14521;
  double t14524;
  double t14527;
  double t14531;
  double t14532;
  double t14533;
  double t14534;
  double t14535;
  double t14539;
  double t14540;
  double t14541;
  double t14542;
  double t14545;
  double t14546;
  double t14580;
  double t14581;
  double t14582;
  double t14576;
  double t14577;
  double t14578;
  double t14562;
  double t14563;
  t6817 = Cos(var1[5]);
  t2894 = Cos(var1[6]);
  t3014 = Sin(var1[5]);
  t7020 = Sin(var1[6]);
  t10339 = Cos(var1[2]);
  t6811 = -1.*t2894*t3014;
  t7290 = -1.*t6817*t7020;
  t7656 = t6811 + t7290;
  t2157 = Sin(var1[2]);
  t10413 = t6817*t2894;
  t10456 = -1.*t3014*t7020;
  t11384 = t10413 + t10456;
  t10299 = -1.*t2157*t7656;
  t11934 = -1.*t10339*t7656;
  t14245 = -1.*t6817*t2894;
  t14249 = t3014*t7020;
  t14250 = t14245 + t14249;
  t14251 = t10339*t14250;
  t14252 = t10299 + t14251;
  t14253 = 0.384*var2[0]*t14252;
  t14254 = -1.*t2157*t14250;
  t14332 = t11934 + t14254;
  t14333 = 0.384*var2[1]*t14332;
  t14334 = t14253 + t14333;
  t14372 = var2[6]*t14334;
  t11535 = -1.*t10339*t11384;
  t11747 = t10299 + t11535;
  t14377 = t10339*t7656;
  t14387 = -1.*t2157*t11384;
  t14388 = t14377 + t14387;
  t14410 = t2894*t3014;
  t14419 = t6817*t7020;
  t14420 = t14410 + t14419;
  t14432 = -1.*t2894;
  t14433 = 1. + t14432;
  t14434 = 0.4*t14433;
  t14435 = 0.64*t2894;
  t14487 = t14434 + t14435;
  t14488 = -1.*t14487*t3014;
  t14492 = -0.24*t6817*t7020;
  t14493 = t14488 + t14492;
  t14503 = t6817*t14487;
  t14504 = -0.24*t3014*t7020;
  t14505 = t14503 + t14504;
  t14421 = t2157*t14420;
  t14426 = t14421 + t14251;
  t14427 = 0.384*var2[0]*t14426;
  t14428 = t10339*t14420;
  t14430 = t14428 + t14254;
  t14431 = 0.384*var2[1]*t14430;
  t14495 = t14487*t3014;
  t14496 = 0.24*t6817*t7020;
  t14500 = t14495 + t14496;
  t14501 = t7656*t14500;
  t14518 = -0.24*t2894*t3014;
  t14519 = t14518 + t14492;
  t14508 = 0.24*t3014*t7020;
  t14511 = t14505*t14250;
  t14547 = t14493*t11384;
  t14551 = t14500*t11384;
  t14552 = t7656*t14505;
  t14558 = t14420*t14505;
  t14559 = t14547 + t14551 + t14552 + t14558;
  t14543 = t2157*t14250;
  t14544 = t14377 + t14543;
  t14516 = t7656*t14493;
  t14520 = t7656*t14519;
  t14521 = t14519*t14420;
  t14524 = t11384*t14505;
  t14527 = 0.24*t6817*t2894;
  t14531 = t14527 + t14504;
  t14532 = t11384*t14531;
  t14533 = -0.24*t6817*t2894;
  t14534 = t14533 + t14508;
  t14535 = t11384*t14534;
  t14539 = t14516 + t14520 + t14501 + t14521 + t14524 + t14532 + t14535 + t14511;
  t14540 = 0.384*var2[2]*t14539;
  t14541 = t14427 + t14431 + t14540;
  t14542 = var2[6]*t14541;
  t14545 = 0.384*var2[6]*t14544;
  t14546 = 0.384*var2[6]*t14252;
  t14580 = -1.*t14487*t7020;
  t14581 = 0.24*t2894*t7020;
  t14582 = t14580 + t14581;
  t14576 = t14519*t11384;
  t14577 = t14420*t14531;
  t14578 = t14576 + t14551 + t14552 + t14577;
  t14562 = 0.384*var2[1]*t14252;
  t14563 = 0.384*var2[0]*t14544;
  p_output1[0]=(0.384*t11747*var2[0] + 0.384*(t11934 + t11384*t2157)*var2[1])*var2[6];
  p_output1[1]=t14372;
  p_output1[2]=t14372;
  p_output1[3]=0.384*t14388*var2[6];
  p_output1[4]=0.384*t11747*var2[6];
  p_output1[5]=0.384*t14388*var2[0] + 0.384*t11747*var2[1];
  p_output1[6]=t14372;
  p_output1[7]=(t14427 + t14431 + 0.384*(t14420*t14493 + t14501 + 2.*t11384*t14505 + t14511 + t11384*(t14508 - 1.*t14487*t6817) + 2.*t14493*t7656)*var2[2])*var2[6];
  p_output1[8]=t14542;
  p_output1[9]=t14545;
  p_output1[10]=t14546;
  p_output1[11]=0.384*t14559*var2[6];
  p_output1[12]=t14562 + t14563 + 0.384*t14559*var2[2];
  p_output1[13]=t14372;
  p_output1[14]=t14542;
  p_output1[15]=(t14427 + t14431 + 0.384*(t14501 + t14511 + t14521 + 2.*t11384*t14531 + t14535 + 2.*t14519*t7656)*var2[2] + 0.384*(-1.*t14487*t2894 + 0.24*Power(t2894,2))*var2[5])*var2[6];
  p_output1[16]=t14545;
  p_output1[17]=t14546;
  p_output1[18]=0.384*t14578*var2[6];
  p_output1[19]=0.384*t14582*var2[6];
  p_output1[20]=t14562 + t14563 + 0.384*t14578*var2[2] + 0.384*t14582*var2[5];
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
