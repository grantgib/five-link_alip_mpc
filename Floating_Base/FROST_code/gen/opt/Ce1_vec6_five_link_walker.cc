/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:50 GMT-04:00
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
  double t10405;
  double t10432;
  double t10372;
  double t10392;
  double t10371;
  double t10390;
  double t10406;
  double t10409;
  double t10414;
  double t10415;
  double t10416;
  double t10473;
  double t10474;
  double t10475;
  double t10376;
  double t10396;
  double t10402;
  double t10404;
  double t10442;
  double t10443;
  double t10464;
  double t10483;
  double t10484;
  double t10485;
  double t10476;
  double t10479;
  double t10480;
  double t10481;
  double t10482;
  double t10486;
  double t10492;
  double t10493;
  double t10494;
  double t10465;
  double t10466;
  double t10469;
  double t10495;
  double t10496;
  double t10497;
  double t10498;
  double t10499;
  double t10500;
  double t10487;
  double t10518;
  double t10519;
  double t10520;
  double t10521;
  double t10488;
  double t10522;
  double t10507;
  double t10508;
  double t10509;
  double t10472;
  double t10477;
  double t10531;
  double t10503;
  double t10504;
  double t10505;
  double t10532;
  double t10533;
  double t10534;
  double t10551;
  double t10552;
  double t10553;
  double t10543;
  double t10544;
  double t10545;
  double t10547;
  double t10548;
  double t10549;
  double t10550;
  double t10554;
  double t10574;
  double t10575;
  double t10559;
  double t10577;
  double t10578;
  double t10561;
  t10405 = Cos(var1[6]);
  t10432 = Sin(var1[6]);
  t10372 = Sin(var1[2]);
  t10392 = Sin(var1[5]);
  t10371 = Cos(var1[5]);
  t10390 = Cos(var1[2]);
  t10406 = -1.*t10405;
  t10409 = 1. + t10406;
  t10414 = 0.4*t10409;
  t10415 = 0.64*t10405;
  t10416 = t10414 + t10415;
  t10473 = t10371*t10405;
  t10474 = -1.*t10392*t10432;
  t10475 = t10473 + t10474;
  t10376 = -1.*t10371*t10372;
  t10396 = -1.*t10390*t10392;
  t10402 = t10376 + t10396;
  t10404 = 0.748*t10402;
  t10442 = t10416*t10432;
  t10443 = -0.24*t10405*t10432;
  t10464 = t10442 + t10443;
  t10483 = -1.*t10405*t10392;
  t10484 = -1.*t10371*t10432;
  t10485 = t10483 + t10484;
  t10476 = t10390*t10475;
  t10479 = t10416*t10405;
  t10480 = Power(t10432,2);
  t10481 = 0.24*t10480;
  t10482 = t10479 + t10481;
  t10486 = t10390*t10485;
  t10492 = t10372*t10485;
  t10493 = t10492 + t10476;
  t10494 = 3.2*t10464*t10493;
  t10465 = t10405*t10392;
  t10466 = t10371*t10432;
  t10469 = t10465 + t10466;
  t10495 = -1.*t10371*t10405;
  t10496 = t10392*t10432;
  t10497 = t10495 + t10496;
  t10498 = t10372*t10497;
  t10499 = t10486 + t10498;
  t10500 = 3.2*t10482*t10499;
  t10487 = -1.*t10372*t10475;
  t10518 = -1.*t10390*t10371;
  t10519 = t10372*t10392;
  t10520 = t10518 + t10519;
  t10521 = 0.748*t10520;
  t10488 = t10486 + t10487;
  t10522 = -1.*t10372*t10485;
  t10507 = Power(t10405,2);
  t10508 = -0.24*t10507;
  t10509 = t10479 + t10508;
  t10472 = -1.*t10372*t10469;
  t10477 = t10472 + t10476;
  t10531 = 3.2*t10464*t10488;
  t10503 = -1.*t10416*t10432;
  t10504 = 0.24*t10405*t10432;
  t10505 = t10503 + t10504;
  t10532 = t10390*t10497;
  t10533 = t10522 + t10532;
  t10534 = 3.2*t10482*t10533;
  t10551 = t10371*t10416;
  t10552 = -0.24*t10392*t10432;
  t10553 = t10551 + t10552;
  t10543 = -1.*t10416*t10392;
  t10544 = -0.24*t10371*t10432;
  t10545 = t10543 + t10544;
  t10547 = t10416*t10392;
  t10548 = 0.24*t10371*t10432;
  t10549 = t10547 + t10548;
  t10550 = t10549*t10475;
  t10554 = t10485*t10553;
  t10574 = -0.24*t10405*t10392;
  t10575 = t10574 + t10544;
  t10559 = -1.*t10485*t10549;
  t10577 = 0.24*t10371*t10405;
  t10578 = t10577 + t10552;
  t10561 = -1.*t10553*t10497;
  p_output1[0]=var2[5]*(-0.5*(t10404 + 3.2*t10464*t10477 + 3.2*t10482*t10488)*var2[2] - 0.5*(t10404 + t10494 + t10500)*var2[5] - 0.5*(t10494 + t10500 + 3.2*t10493*t10505 + 3.2*(t10390*t10469 + t10372*t10475)*t10509)*var2[6]);
  p_output1[1]=var2[5]*(-0.5*(3.2*t10464*(-1.*t10390*t10469 + t10487) + t10521 + 3.2*t10482*(-1.*t10390*t10475 + t10522))*var2[2] - 0.5*(t10521 + t10531 + t10534)*var2[5] - 0.5*(3.2*t10488*t10505 + 3.2*t10477*t10509 + t10531 + t10534)*var2[6]);
  p_output1[2]=var2[5]*(-0.5*(3.2*t10482*(t10475*t10545 + t10550 + t10469*t10553 + t10554) + 3.2*t10464*(-1.*t10485*t10545 - 1.*t10475*t10553 + t10559 + t10561))*var2[5] - 0.5*(3.2*t10505*(t10469*t10549 + t10475*t10553) + 3.2*t10509*(-1.*t10475*t10549 - 1.*t10485*t10553) + 3.2*t10482*(t10550 + t10554 + t10475*t10575 + t10469*t10578) + 3.2*t10464*(t10559 + t10561 - 1.*t10485*t10575 - 1.*t10475*t10578))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.5*(6.4*t10482*t10505 + 6.4*t10464*t10509)*var2[5]*var2[6];
  p_output1[6]=-0.384*t10505*var2[5]*var2[6];
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

#include "Ce1_vec6_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
