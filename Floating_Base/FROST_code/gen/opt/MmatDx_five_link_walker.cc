/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:42 GMT-04:00
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
  double t4755;
  double t4621;
  double t4641;
  double t9256;
  double t9417;
  double t2825;
  double t4717;
  double t9326;
  double t9397;
  double t9398;
  double t9430;
  double t9458;
  double t9459;
  double t9465;
  double t9466;
  double t9502;
  double t9526;
  double t9527;
  double t9535;
  double t9537;
  double t9602;
  double t9596;
  double t9600;
  double t9603;
  double t9601;
  double t9607;
  double t9608;
  double t9609;
  double t9613;
  double t9615;
  double t9617;
  double t9619;
  double t9621;
  double t9648;
  double t9653;
  double t9654;
  double t9655;
  double t9656;
  double t9489;
  double t9497;
  double t9498;
  double t9574;
  double t9578;
  double t9579;
  double t9583;
  double t9584;
  double t9587;
  double t9624;
  double t9639;
  double t9640;
  double t9668;
  double t9688;
  double t9689;
  double t9690;
  double t9691;
  double t9692;
  double t9703;
  double t9704;
  double t9705;
  double t9723;
  double t9724;
  double t9725;
  double t9793;
  double t9794;
  double t9795;
  double t9797;
  double t9798;
  double t9799;
  double t9817;
  double t9818;
  double t9819;
  double t9821;
  double t9822;
  double t9823;
  double t9707;
  double t9708;
  double t9714;
  double t9696;
  double t9700;
  double t9701;
  double t9566;
  double t9572;
  double t9573;
  double t9716;
  double t9717;
  double t9540;
  double t9541;
  double t9554;
  double t9555;
  double t9727;
  double t9728;
  double t9743;
  double t9719;
  double t9720;
  double t9721;
  double t9665;
  double t9666;
  double t9667;
  double t9750;
  double t9752;
  double t9660;
  double t9661;
  double t9662;
  double t9663;
  double t9759;
  double t9760;
  double t9761;
  double t9762;
  double t9765;
  double t9766;
  double t9773;
  double t9774;
  double t9702;
  double t9706;
  double t9715;
  double t9718;
  double t9722;
  double t9726;
  double t9746;
  double t9754;
  double t9755;
  double t9786;
  double t9787;
  double t9789;
  double t9790;
  double t9791;
  double t9796;
  double t9800;
  double t9801;
  double t9803;
  double t9804;
  double t9805;
  double t9807;
  double t9808;
  double t9810;
  double t9812;
  double t9813;
  double t9820;
  double t9824;
  double t9825;
  double t9827;
  double t9828;
  double t9829;
  double t9785;
  double t9792;
  double t9802;
  double t9806;
  double t9816;
  double t9826;
  double t9830;
  double t9831;
  double t9865;
  double t9866;
  double t9867;
  double t9868;
  double t9869;
  double t9870;
  double t9871;
  double t9872;
  double t9837;
  double t9838;
  double t9839;
  double t9840;
  double t9501;
  double t9560;
  double t9588;
  double t9589;
  double t9878;
  double t9879;
  double t9880;
  double t9881;
  double t9908;
  double t9909;
  double t9875;
  double t9876;
  double t9845;
  double t9846;
  double t9847;
  double t9848;
  double t9647;
  double t9664;
  double t9693;
  double t9694;
  double t9886;
  double t9887;
  double t9888;
  double t9889;
  double t9927;
  double t9928;
  double t9883;
  double t9884;
  t4755 = Cos(var1[3]);
  t4621 = Cos(var1[4]);
  t4641 = Sin(var1[3]);
  t9256 = Sin(var1[4]);
  t9417 = Cos(var1[2]);
  t2825 = Sin(var1[2]);
  t4717 = -1.*t4621*t4641;
  t9326 = -1.*t4755*t9256;
  t9397 = t4717 + t9326;
  t9398 = t2825*t9397;
  t9430 = t4755*t4621;
  t9458 = -1.*t4641*t9256;
  t9459 = t9430 + t9458;
  t9465 = t9417*t9459;
  t9466 = t9398 + t9465;
  t9502 = -1.*t4621;
  t9526 = 1. + t9502;
  t9527 = 0.4*t9526;
  t9535 = 0.64*t4621;
  t9537 = t9527 + t9535;
  t9602 = Cos(var1[5]);
  t9596 = Cos(var1[6]);
  t9600 = Sin(var1[5]);
  t9603 = Sin(var1[6]);
  t9601 = -1.*t9596*t9600;
  t9607 = -1.*t9602*t9603;
  t9608 = t9601 + t9607;
  t9609 = t2825*t9608;
  t9613 = t9602*t9596;
  t9615 = -1.*t9600*t9603;
  t9617 = t9613 + t9615;
  t9619 = t9417*t9617;
  t9621 = t9609 + t9619;
  t9648 = -1.*t9596;
  t9653 = 1. + t9648;
  t9654 = 0.4*t9653;
  t9655 = 0.64*t9596;
  t9656 = t9654 + t9655;
  t9489 = t9417*t4755;
  t9497 = -1.*t2825*t4641;
  t9498 = t9489 + t9497;
  t9574 = t4621*t4641;
  t9578 = t4755*t9256;
  t9579 = t9574 + t9578;
  t9583 = t9417*t9579;
  t9584 = t2825*t9459;
  t9587 = t9583 + t9584;
  t9624 = t9417*t9602;
  t9639 = -1.*t2825*t9600;
  t9640 = t9624 + t9639;
  t9668 = t9596*t9600;
  t9688 = t9602*t9603;
  t9689 = t9668 + t9688;
  t9690 = t9417*t9689;
  t9691 = t2825*t9617;
  t9692 = t9690 + t9691;
  t9703 = t4755*t2825;
  t9704 = t9417*t4641;
  t9705 = t9703 + t9704;
  t9723 = t9602*t2825;
  t9724 = t9417*t9600;
  t9725 = t9723 + t9724;
  t9793 = t9537*t4641;
  t9794 = 0.24*t4755*t9256;
  t9795 = t9793 + t9794;
  t9797 = t4755*t9537;
  t9798 = -0.24*t4641*t9256;
  t9799 = t9797 + t9798;
  t9817 = t9656*t9600;
  t9818 = 0.24*t9602*t9603;
  t9819 = t9817 + t9818;
  t9821 = t9602*t9656;
  t9822 = -0.24*t9600*t9603;
  t9823 = t9821 + t9822;
  t9707 = t9417*t9397;
  t9708 = -1.*t2825*t9459;
  t9714 = t9707 + t9708;
  t9696 = -1.*t4755*t2825;
  t9700 = -1.*t9417*t4641;
  t9701 = t9696 + t9700;
  t9566 = t9537*t9256;
  t9572 = -0.24*t4621*t9256;
  t9573 = t9566 + t9572;
  t9716 = -1.*t2825*t9579;
  t9717 = t9716 + t9465;
  t9540 = t9537*t4621;
  t9541 = Power(t9256,2);
  t9554 = 0.24*t9541;
  t9555 = t9540 + t9554;
  t9727 = t9417*t9608;
  t9728 = -1.*t2825*t9617;
  t9743 = t9727 + t9728;
  t9719 = -1.*t9602*t2825;
  t9720 = -1.*t9417*t9600;
  t9721 = t9719 + t9720;
  t9665 = t9656*t9603;
  t9666 = -0.24*t9596*t9603;
  t9667 = t9665 + t9666;
  t9750 = -1.*t2825*t9689;
  t9752 = t9750 + t9619;
  t9660 = t9656*t9596;
  t9661 = Power(t9603,2);
  t9662 = 0.24*t9661;
  t9663 = t9660 + t9662;
  t9759 = Power(t9417,2);
  t9760 = -12.*t9759;
  t9761 = Power(t2825,2);
  t9762 = -12.*t9761;
  t9765 = Power(t9498,2);
  t9766 = -6.8*t9765;
  t9773 = Power(t9640,2);
  t9774 = -6.8*t9773;
  t9702 = -6.8*t9701*t9498;
  t9706 = -6.8*t9705*t9498;
  t9715 = -3.2*t9466*t9714;
  t9718 = -3.2*t9717*t9587;
  t9722 = -6.8*t9721*t9640;
  t9726 = -6.8*t9725*t9640;
  t9746 = -3.2*t9621*t9743;
  t9754 = -3.2*t9752*t9692;
  t9755 = t9702 + t9706 + t9715 + t9718 + t9722 + t9726 + t9746 + t9754;
  t9786 = Power(t4755,2);
  t9787 = 0.11*t9786;
  t9789 = Power(t4641,2);
  t9790 = 0.11*t9789;
  t9791 = t9787 + t9790;
  t9796 = -1.*t9795*t9459;
  t9800 = -1.*t9397*t9799;
  t9801 = t9796 + t9800;
  t9803 = t9795*t9579;
  t9804 = t9459*t9799;
  t9805 = t9803 + t9804;
  t9807 = Power(t9602,2);
  t9808 = 0.11*t9807;
  t9810 = Power(t9600,2);
  t9812 = 0.11*t9810;
  t9813 = t9808 + t9812;
  t9820 = -1.*t9819*t9617;
  t9824 = -1.*t9608*t9823;
  t9825 = t9820 + t9824;
  t9827 = t9819*t9689;
  t9828 = t9617*t9823;
  t9829 = t9827 + t9828;
  t9785 = -2.88*t9417;
  t9792 = -6.8*t9498*t9791;
  t9802 = -3.2*t9587*t9801;
  t9806 = -3.2*t9466*t9805;
  t9816 = -6.8*t9640*t9813;
  t9826 = -3.2*t9692*t9825;
  t9830 = -3.2*t9621*t9829;
  t9831 = t9785 + t9792 + t9802 + t9806 + t9816 + t9826 + t9830;
  t9865 = 2.88*t2825;
  t9866 = -6.8*t9701*t9791;
  t9867 = -3.2*t9717*t9801;
  t9868 = -3.2*t9714*t9805;
  t9869 = -6.8*t9721*t9813;
  t9870 = -3.2*t9752*t9825;
  t9871 = -3.2*t9743*t9829;
  t9872 = t9865 + t9866 + t9867 + t9868 + t9869 + t9870 + t9871;
  t9837 = -0.748*t9701;
  t9838 = -3.2*t9573*t9717;
  t9839 = -3.2*t9555*t9714;
  t9840 = t9837 + t9838 + t9839;
  t9501 = -0.748*t9498;
  t9560 = -3.2*t9555*t9466;
  t9588 = -3.2*t9573*t9587;
  t9589 = t9501 + t9560 + t9588;
  t9878 = -0.748*t9791;
  t9879 = -3.2*t9573*t9801;
  t9880 = -3.2*t9555*t9805;
  t9881 = -0.67 + t9878 + t9879 + t9880;
  t9908 = -0.768*t9555;
  t9909 = -0.2 + t9908;
  t9875 = -0.768*t9805;
  t9876 = -0.2 + t9875;
  t9845 = -0.748*t9721;
  t9846 = -3.2*t9667*t9752;
  t9847 = -3.2*t9663*t9743;
  t9848 = t9845 + t9846 + t9847;
  t9647 = -0.748*t9640;
  t9664 = -3.2*t9663*t9621;
  t9693 = -3.2*t9667*t9692;
  t9694 = t9647 + t9664 + t9693;
  t9886 = -0.748*t9813;
  t9887 = -3.2*t9667*t9825;
  t9888 = -3.2*t9663*t9829;
  t9889 = -0.67 + t9886 + t9887 + t9888;
  t9927 = -0.768*t9663;
  t9928 = -0.2 + t9927;
  t9883 = -0.768*t9829;
  t9884 = -0.2 + t9883;
  p_output1[0]=(-3.2*Power(t9466,2) - 3.2*Power(t9587,2) - 3.2*Power(t9621,2) - 3.2*Power(t9692,2) - 6.8*Power(t9705,2) - 6.8*Power(t9725,2) + t9760 + t9762 + t9766 + t9774)*var2[0] + t9755*var2[1] + t9831*var2[2] + t9589*var2[3] - 0.768*t9466*var2[4] + t9694*var2[5] - 0.768*t9621*var2[6];
  p_output1[1]=t9755*var2[0] + (-6.8*Power(t9701,2) - 3.2*Power(t9714,2) - 3.2*Power(t9717,2) - 6.8*Power(t9721,2) - 3.2*Power(t9743,2) - 3.2*Power(t9752,2) + t9760 + t9762 + t9766 + t9774)*var2[1] + t9872*var2[2] + t9840*var2[3] - 0.768*t9714*var2[4] + t9848*var2[5] - 0.768*t9743*var2[6];
  p_output1[2]=t9831*var2[0] + t9872*var2[1] + (-3.3612 - 6.8*Power(t9791,2) - 3.2*Power(t9801,2) - 3.2*Power(t9805,2) - 6.8*Power(t9813,2) - 3.2*Power(t9825,2) - 3.2*Power(t9829,2))*var2[2] + t9881*var2[3] + t9876*var2[4] + t9889*var2[5] + t9884*var2[6];
  p_output1[3]=t9589*var2[0] + t9840*var2[1] + t9881*var2[2] + (-1.58228 - 3.2*Power(t9555,2) - 3.2*Power(t9573,2))*var2[3] + t9909*var2[4];
  p_output1[4]=-0.768*t9466*var2[0] - 0.768*t9714*var2[1] + t9876*var2[2] + t9909*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t9694*var2[0] + t9848*var2[1] + t9889*var2[2] + (-1.58228 - 3.2*Power(t9663,2) - 3.2*Power(t9667,2))*var2[5] + t9928*var2[6];
  p_output1[6]=-0.768*t9621*var2[0] - 0.768*t9743*var2[1] + t9884*var2[2] + t9928*var2[5] - 1.2143199999999998*var2[6];
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
