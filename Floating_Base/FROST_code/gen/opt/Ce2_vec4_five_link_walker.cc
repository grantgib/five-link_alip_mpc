/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:46:58 GMT-04:00
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
  double t4400;
  double t4353;
  double t4354;
  double t4527;
  double t8107;
  double t4085;
  double t4373;
  double t4546;
  double t4580;
  double t10300;
  double t10314;
  double t10340;
  double t10348;
  double t10351;
  double t4672;
  double t8369;
  double t8372;
  double t8374;
  double t8392;
  double t8394;
  double t8906;
  double t8969;
  double t9024;
  double t10475;
  double t10476;
  double t10477;
  double t10370;
  double t10371;
  double t10372;
  double t10414;
  double t10457;
  double t10458;
  double t10479;
  double t10480;
  double t10489;
  double t10491;
  double t10492;
  double t10493;
  double t10494;
  double t10495;
  double t10496;
  double t10513;
  double t10514;
  double t10529;
  double t10530;
  double t10531;
  double t10533;
  double t10534;
  double t10535;
  double t10539;
  double t10540;
  double t10541;
  double t10516;
  double t10517;
  double t10518;
  double t10506;
  double t10507;
  double t10508;
  double t10355;
  double t10363;
  double t10366;
  double t10460;
  double t10465;
  double t10466;
  double t10471;
  double t10478;
  double t10510;
  double t10511;
  double t10501;
  double t10502;
  double t10503;
  double t10504;
  double t10505;
  double t10509;
  double t10512;
  double t10515;
  double t10519;
  double t10520;
  double t10521;
  double t10523;
  double t10524;
  double t10525;
  double t10526;
  double t10527;
  double t10532;
  double t10536;
  double t10537;
  double t10542;
  double t10543;
  double t10544;
  double t10545;
  double t10546;
  double t10548;
  double t10549;
  double t10550;
  double t10552;
  double t10553;
  double t10554;
  double t10555;
  double t10556;
  double t10574;
  double t10575;
  double t10576;
  double t10577;
  double t10578;
  double t10579;
  double t10528;
  double t10538;
  double t10547;
  double t10551;
  double t10557;
  double t10558;
  double t10563;
  double t10564;
  double t10565;
  double t10566;
  double t10240;
  double t10459;
  double t10472;
  double t10473;
  double t10584;
  double t10585;
  double t10586;
  t4400 = Cos(var1[3]);
  t4353 = Cos(var1[4]);
  t4354 = Sin(var1[3]);
  t4527 = Sin(var1[4]);
  t8107 = Sin(var1[2]);
  t4085 = Cos(var1[2]);
  t4373 = -1.*t4353*t4354;
  t4546 = -1.*t4400*t4527;
  t4580 = t4373 + t4546;
  t10300 = -1.*t4353;
  t10314 = 1. + t10300;
  t10340 = 0.4*t10314;
  t10348 = 0.64*t4353;
  t10351 = t10340 + t10348;
  t4672 = t4085*t4580;
  t8369 = -1.*t4400*t4353;
  t8372 = t4354*t4527;
  t8374 = t8369 + t8372;
  t8392 = t8107*t8374;
  t8394 = t4672 + t8392;
  t8906 = -1.*t4400*t8107;
  t8969 = -1.*t4085*t4354;
  t9024 = t8906 + t8969;
  t10475 = t4085*t4400;
  t10476 = -1.*t8107*t4354;
  t10477 = t10475 + t10476;
  t10370 = t8107*t4580;
  t10371 = t4400*t4353;
  t10372 = -1.*t4354*t4527;
  t10414 = t10371 + t10372;
  t10457 = t4085*t10414;
  t10458 = t10370 + t10457;
  t10479 = t4400*t8107;
  t10480 = t4085*t4354;
  t10489 = t10479 + t10480;
  t10491 = t4353*t4354;
  t10492 = t4400*t4527;
  t10493 = t10491 + t10492;
  t10494 = t4085*t10493;
  t10495 = t8107*t10414;
  t10496 = t10494 + t10495;
  t10513 = -1.*t8107*t10414;
  t10514 = t4672 + t10513;
  t10529 = t10351*t4354;
  t10530 = 0.24*t4400*t4527;
  t10531 = t10529 + t10530;
  t10533 = t4400*t10351;
  t10534 = -0.24*t4354*t4527;
  t10535 = t10533 + t10534;
  t10539 = -1.*t10351*t4354;
  t10540 = -0.24*t4400*t4527;
  t10541 = t10539 + t10540;
  t10516 = -1.*t8107*t4580;
  t10517 = t4085*t8374;
  t10518 = t10516 + t10517;
  t10506 = -1.*t4085*t4400;
  t10507 = t8107*t4354;
  t10508 = t10506 + t10507;
  t10355 = t10351*t4527;
  t10363 = -0.24*t4353*t4527;
  t10366 = t10355 + t10363;
  t10460 = t10351*t4353;
  t10465 = Power(t4527,2);
  t10466 = 0.24*t10465;
  t10471 = t10460 + t10466;
  t10478 = 13.6*t9024*t10477;
  t10510 = -1.*t8107*t10493;
  t10511 = t10510 + t10457;
  t10501 = Power(t9024,2);
  t10502 = 6.8*t10501;
  t10503 = 6.8*t9024*t10489;
  t10504 = Power(t10477,2);
  t10505 = 6.8*t10504;
  t10509 = 6.8*t10477*t10508;
  t10512 = 3.2*t10458*t10511;
  t10515 = 3.2*t10514*t10496;
  t10519 = 3.2*t10458*t10518;
  t10520 = 3.2*t10514*t8394;
  t10521 = t10502 + t10503 + t10505 + t10509 + t10512 + t10515 + t10519 + t10520;
  t10523 = Power(t4400,2);
  t10524 = 0.11*t10523;
  t10525 = Power(t4354,2);
  t10526 = 0.11*t10525;
  t10527 = t10524 + t10526;
  t10532 = -1.*t10531*t10414;
  t10536 = -1.*t4580*t10535;
  t10537 = t10532 + t10536;
  t10542 = t10541*t10414;
  t10543 = t10531*t10414;
  t10544 = t4580*t10535;
  t10545 = t10493*t10535;
  t10546 = t10542 + t10543 + t10544 + t10545;
  t10548 = t10531*t10493;
  t10549 = t10414*t10535;
  t10550 = t10548 + t10549;
  t10552 = -1.*t4580*t10541;
  t10553 = -1.*t4580*t10531;
  t10554 = -1.*t10414*t10535;
  t10555 = -1.*t10535*t8374;
  t10556 = t10552 + t10553 + t10554 + t10555;
  t10574 = 6.8*t10508*t10527;
  t10575 = 3.2*t10514*t10537;
  t10576 = 3.2*t10514*t10546;
  t10577 = 3.2*t10550*t10518;
  t10578 = 3.2*t10511*t10556;
  t10579 = t10574 + t10575 + t10576 + t10577 + t10578;
  t10528 = 6.8*t9024*t10527;
  t10538 = 3.2*t10458*t10537;
  t10547 = 3.2*t10458*t10546;
  t10551 = 3.2*t10550*t8394;
  t10557 = 3.2*t10496*t10556;
  t10558 = t10528 + t10538 + t10547 + t10551 + t10557;
  t10563 = 0.748*t10508;
  t10564 = 3.2*t10366*t10514;
  t10565 = 3.2*t10471*t10518;
  t10566 = t10563 + t10564 + t10565;
  t10240 = 0.748*t9024;
  t10459 = 3.2*t10366*t10458;
  t10472 = 3.2*t10471*t8394;
  t10473 = t10240 + t10459 + t10472;
  t10584 = 3.2*t10471*t10546;
  t10585 = 3.2*t10366*t10556;
  t10586 = t10584 + t10585;
  p_output1[0]=var2[3]*(-0.5*(t10478 + 13.6*t10477*t10489 + 6.4*t10458*t10496 + 6.4*t10458*t8394)*var2[0] - 0.5*t10521*var2[1] - 0.5*t10558*var2[2] - 0.5*t10473*var2[3] - 0.384*t8394*var2[4]);
  p_output1[1]=var2[3]*(-0.5*t10521*var2[0] - 0.5*(t10478 + 6.4*t10511*t10514 + 6.4*t10514*t10518 + 13.6*t10508*t9024)*var2[1] - 0.5*t10579*var2[2] - 0.5*t10566*var2[3] - 0.384*t10518*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t10558*var2[0] - 0.5*t10579*var2[1] - 0.5*(6.4*t10546*t10550 + 6.4*t10537*t10556)*var2[2] - 0.5*t10586*var2[3] - 0.384*t10546*var2[4]);
  p_output1[3]=(-0.5*t10473*var2[0] - 0.5*t10566*var2[1] - 0.5*t10586*var2[2])*var2[3];
  p_output1[4]=(-0.384*t8394*var2[0] - 0.384*t10518*var2[1] - 0.384*t10546*var2[2])*var2[3];
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

#include "Ce2_vec4_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
