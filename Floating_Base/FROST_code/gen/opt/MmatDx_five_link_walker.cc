/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:46:22 GMT-04:00
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
  double t4549;
  double t4391;
  double t4501;
  double t4551;
  double t4610;
  double t4157;
  double t4512;
  double t4594;
  double t4597;
  double t4606;
  double t4658;
  double t4717;
  double t4737;
  double t4746;
  double t4755;
  double t9039;
  double t9057;
  double t9063;
  double t9115;
  double t9164;
  double t9338;
  double t9330;
  double t9331;
  double t9339;
  double t9334;
  double t9344;
  double t9345;
  double t9346;
  double t9347;
  double t9358;
  double t9359;
  double t9369;
  double t9370;
  double t9387;
  double t9388;
  double t9390;
  double t9392;
  double t9397;
  double t8862;
  double t8891;
  double t8958;
  double t9260;
  double t9261;
  double t9271;
  double t9290;
  double t9317;
  double t9319;
  double t9372;
  double t9373;
  double t9376;
  double t9417;
  double t9418;
  double t9429;
  double t9430;
  double t9440;
  double t9441;
  double t9462;
  double t9463;
  double t9464;
  double t9500;
  double t9501;
  double t9502;
  double t9603;
  double t9607;
  double t9608;
  double t9613;
  double t9615;
  double t9617;
  double t9661;
  double t9662;
  double t9663;
  double t9665;
  double t9666;
  double t9667;
  double t9466;
  double t9467;
  double t9468;
  double t9447;
  double t9450;
  double t9458;
  double t9230;
  double t9244;
  double t9251;
  double t9485;
  double t9489;
  double t9175;
  double t9191;
  double t9207;
  double t9212;
  double t9514;
  double t9519;
  double t9521;
  double t9496;
  double t9497;
  double t9498;
  double t9410;
  double t9415;
  double t9416;
  double t9527;
  double t9532;
  double t9398;
  double t9401;
  double t9402;
  double t9405;
  double t9538;
  double t9539;
  double t9540;
  double t9541;
  double t9554;
  double t9555;
  double t9572;
  double t9573;
  double t9459;
  double t9465;
  double t9477;
  double t9494;
  double t9499;
  double t9510;
  double t9526;
  double t9534;
  double t9535;
  double t9589;
  double t9595;
  double t9596;
  double t9600;
  double t9601;
  double t9609;
  double t9619;
  double t9621;
  double t9624;
  double t9639;
  double t9640;
  double t9648;
  double t9653;
  double t9654;
  double t9655;
  double t9656;
  double t9664;
  double t9668;
  double t9688;
  double t9690;
  double t9691;
  double t9692;
  double t9588;
  double t9602;
  double t9623;
  double t9647;
  double t9660;
  double t9689;
  double t9693;
  double t9694;
  double t9752;
  double t9754;
  double t9755;
  double t9758;
  double t9759;
  double t9760;
  double t9761;
  double t9762;
  double t9701;
  double t9702;
  double t9703;
  double t9704;
  double t9035;
  double t9226;
  double t9321;
  double t9326;
  double t9768;
  double t9769;
  double t9770;
  double t9771;
  double t9803;
  double t9804;
  double t9765;
  double t9766;
  double t9707;
  double t9708;
  double t9714;
  double t9715;
  double t9379;
  double t9409;
  double t9442;
  double t9443;
  double t9776;
  double t9779;
  double t9780;
  double t9781;
  double t9826;
  double t9827;
  double t9773;
  double t9774;
  t4549 = Cos(var1[3]);
  t4391 = Cos(var1[4]);
  t4501 = Sin(var1[3]);
  t4551 = Sin(var1[4]);
  t4610 = Cos(var1[2]);
  t4157 = Sin(var1[2]);
  t4512 = -1.*t4391*t4501;
  t4594 = -1.*t4549*t4551;
  t4597 = t4512 + t4594;
  t4606 = t4157*t4597;
  t4658 = t4549*t4391;
  t4717 = -1.*t4501*t4551;
  t4737 = t4658 + t4717;
  t4746 = t4610*t4737;
  t4755 = t4606 + t4746;
  t9039 = -1.*t4391;
  t9057 = 1. + t9039;
  t9063 = 0.4*t9057;
  t9115 = 0.64*t4391;
  t9164 = t9063 + t9115;
  t9338 = Cos(var1[5]);
  t9330 = Cos(var1[6]);
  t9331 = Sin(var1[5]);
  t9339 = Sin(var1[6]);
  t9334 = -1.*t9330*t9331;
  t9344 = -1.*t9338*t9339;
  t9345 = t9334 + t9344;
  t9346 = t4157*t9345;
  t9347 = t9338*t9330;
  t9358 = -1.*t9331*t9339;
  t9359 = t9347 + t9358;
  t9369 = t4610*t9359;
  t9370 = t9346 + t9369;
  t9387 = -1.*t9330;
  t9388 = 1. + t9387;
  t9390 = 0.4*t9388;
  t9392 = 0.64*t9330;
  t9397 = t9390 + t9392;
  t8862 = t4610*t4549;
  t8891 = -1.*t4157*t4501;
  t8958 = t8862 + t8891;
  t9260 = t4391*t4501;
  t9261 = t4549*t4551;
  t9271 = t9260 + t9261;
  t9290 = t4610*t9271;
  t9317 = t4157*t4737;
  t9319 = t9290 + t9317;
  t9372 = t4610*t9338;
  t9373 = -1.*t4157*t9331;
  t9376 = t9372 + t9373;
  t9417 = t9330*t9331;
  t9418 = t9338*t9339;
  t9429 = t9417 + t9418;
  t9430 = t4610*t9429;
  t9440 = t4157*t9359;
  t9441 = t9430 + t9440;
  t9462 = t4549*t4157;
  t9463 = t4610*t4501;
  t9464 = t9462 + t9463;
  t9500 = t9338*t4157;
  t9501 = t4610*t9331;
  t9502 = t9500 + t9501;
  t9603 = t9164*t4501;
  t9607 = 0.24*t4549*t4551;
  t9608 = t9603 + t9607;
  t9613 = t4549*t9164;
  t9615 = -0.24*t4501*t4551;
  t9617 = t9613 + t9615;
  t9661 = t9397*t9331;
  t9662 = 0.24*t9338*t9339;
  t9663 = t9661 + t9662;
  t9665 = t9338*t9397;
  t9666 = -0.24*t9331*t9339;
  t9667 = t9665 + t9666;
  t9466 = t4610*t4597;
  t9467 = -1.*t4157*t4737;
  t9468 = t9466 + t9467;
  t9447 = -1.*t4549*t4157;
  t9450 = -1.*t4610*t4501;
  t9458 = t9447 + t9450;
  t9230 = t9164*t4551;
  t9244 = -0.24*t4391*t4551;
  t9251 = t9230 + t9244;
  t9485 = -1.*t4157*t9271;
  t9489 = t9485 + t4746;
  t9175 = t9164*t4391;
  t9191 = Power(t4551,2);
  t9207 = 0.24*t9191;
  t9212 = t9175 + t9207;
  t9514 = t4610*t9345;
  t9519 = -1.*t4157*t9359;
  t9521 = t9514 + t9519;
  t9496 = -1.*t9338*t4157;
  t9497 = -1.*t4610*t9331;
  t9498 = t9496 + t9497;
  t9410 = t9397*t9339;
  t9415 = -0.24*t9330*t9339;
  t9416 = t9410 + t9415;
  t9527 = -1.*t4157*t9429;
  t9532 = t9527 + t9369;
  t9398 = t9397*t9330;
  t9401 = Power(t9339,2);
  t9402 = 0.24*t9401;
  t9405 = t9398 + t9402;
  t9538 = Power(t4610,2);
  t9539 = -12.*t9538;
  t9540 = Power(t4157,2);
  t9541 = -12.*t9540;
  t9554 = Power(t8958,2);
  t9555 = -6.8*t9554;
  t9572 = Power(t9376,2);
  t9573 = -6.8*t9572;
  t9459 = -6.8*t9458*t8958;
  t9465 = -6.8*t9464*t8958;
  t9477 = -3.2*t4755*t9468;
  t9494 = -3.2*t9489*t9319;
  t9499 = -6.8*t9498*t9376;
  t9510 = -6.8*t9502*t9376;
  t9526 = -3.2*t9370*t9521;
  t9534 = -3.2*t9532*t9441;
  t9535 = t9459 + t9465 + t9477 + t9494 + t9499 + t9510 + t9526 + t9534;
  t9589 = Power(t4549,2);
  t9595 = 0.11*t9589;
  t9596 = Power(t4501,2);
  t9600 = 0.11*t9596;
  t9601 = t9595 + t9600;
  t9609 = -1.*t9608*t4737;
  t9619 = -1.*t4597*t9617;
  t9621 = t9609 + t9619;
  t9624 = t9608*t9271;
  t9639 = t4737*t9617;
  t9640 = t9624 + t9639;
  t9648 = Power(t9338,2);
  t9653 = 0.11*t9648;
  t9654 = Power(t9331,2);
  t9655 = 0.11*t9654;
  t9656 = t9653 + t9655;
  t9664 = -1.*t9663*t9359;
  t9668 = -1.*t9345*t9667;
  t9688 = t9664 + t9668;
  t9690 = t9663*t9429;
  t9691 = t9359*t9667;
  t9692 = t9690 + t9691;
  t9588 = -2.88*t4610;
  t9602 = -6.8*t8958*t9601;
  t9623 = -3.2*t9319*t9621;
  t9647 = -3.2*t4755*t9640;
  t9660 = -6.8*t9376*t9656;
  t9689 = -3.2*t9441*t9688;
  t9693 = -3.2*t9370*t9692;
  t9694 = t9588 + t9602 + t9623 + t9647 + t9660 + t9689 + t9693;
  t9752 = 2.88*t4157;
  t9754 = -6.8*t9458*t9601;
  t9755 = -3.2*t9489*t9621;
  t9758 = -3.2*t9468*t9640;
  t9759 = -6.8*t9498*t9656;
  t9760 = -3.2*t9532*t9688;
  t9761 = -3.2*t9521*t9692;
  t9762 = t9752 + t9754 + t9755 + t9758 + t9759 + t9760 + t9761;
  t9701 = -0.748*t9458;
  t9702 = -3.2*t9251*t9489;
  t9703 = -3.2*t9212*t9468;
  t9704 = t9701 + t9702 + t9703;
  t9035 = -0.748*t8958;
  t9226 = -3.2*t9212*t4755;
  t9321 = -3.2*t9251*t9319;
  t9326 = t9035 + t9226 + t9321;
  t9768 = -0.748*t9601;
  t9769 = -3.2*t9251*t9621;
  t9770 = -3.2*t9212*t9640;
  t9771 = -0.67 + t9768 + t9769 + t9770;
  t9803 = -0.768*t9212;
  t9804 = -0.2 + t9803;
  t9765 = -0.768*t9640;
  t9766 = -0.2 + t9765;
  t9707 = -0.748*t9498;
  t9708 = -3.2*t9416*t9532;
  t9714 = -3.2*t9405*t9521;
  t9715 = t9707 + t9708 + t9714;
  t9379 = -0.748*t9376;
  t9409 = -3.2*t9405*t9370;
  t9442 = -3.2*t9416*t9441;
  t9443 = t9379 + t9409 + t9442;
  t9776 = -0.748*t9656;
  t9779 = -3.2*t9416*t9688;
  t9780 = -3.2*t9405*t9692;
  t9781 = -0.67 + t9776 + t9779 + t9780;
  t9826 = -0.768*t9405;
  t9827 = -0.2 + t9826;
  t9773 = -0.768*t9692;
  t9774 = -0.2 + t9773;
  p_output1[0]=(-3.2*Power(t4755,2) - 3.2*Power(t9319,2) - 3.2*Power(t9370,2) - 3.2*Power(t9441,2) - 6.8*Power(t9464,2) - 6.8*Power(t9502,2) + t9539 + t9541 + t9555 + t9573)*var2[0] + t9535*var2[1] + t9694*var2[2] + t9326*var2[3] - 0.768*t4755*var2[4] + t9443*var2[5] - 0.768*t9370*var2[6];
  p_output1[1]=t9535*var2[0] + (-6.8*Power(t9458,2) - 3.2*Power(t9468,2) - 3.2*Power(t9489,2) - 6.8*Power(t9498,2) - 3.2*Power(t9521,2) - 3.2*Power(t9532,2) + t9539 + t9541 + t9555 + t9573)*var2[1] + t9762*var2[2] + t9704*var2[3] - 0.768*t9468*var2[4] + t9715*var2[5] - 0.768*t9521*var2[6];
  p_output1[2]=t9694*var2[0] + t9762*var2[1] + (-3.3612 - 6.8*Power(t9601,2) - 3.2*Power(t9621,2) - 3.2*Power(t9640,2) - 6.8*Power(t9656,2) - 3.2*Power(t9688,2) - 3.2*Power(t9692,2))*var2[2] + t9771*var2[3] + t9766*var2[4] + t9781*var2[5] + t9774*var2[6];
  p_output1[3]=t9326*var2[0] + t9704*var2[1] + t9771*var2[2] + (-1.58228 - 3.2*Power(t9212,2) - 3.2*Power(t9251,2))*var2[3] + t9804*var2[4];
  p_output1[4]=-0.768*t4755*var2[0] - 0.768*t9468*var2[1] + t9766*var2[2] + t9804*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t9443*var2[0] + t9715*var2[1] + t9781*var2[2] + (-1.58228 - 3.2*Power(t9405,2) - 3.2*Power(t9416,2))*var2[5] + t9827*var2[6];
  p_output1[6]=-0.768*t9370*var2[0] - 0.768*t9521*var2[1] + t9774*var2[2] + t9827*var2[5] - 1.2143199999999998*var2[6];
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

#include "MmatDx_five_link_walker.hh"

namespace RightStance
{

void MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
