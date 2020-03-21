/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:55 GMT-04:00
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
  double t10516;
  double t4161;
  double t4400;
  double t10517;
  double t10535;
  double t4124;
  double t10537;
  double t10538;
  double t10539;
  double t10583;
  double t10584;
  double t10585;
  double t10586;
  double t10587;
  double t10515;
  double t10528;
  double t10529;
  double t10530;
  double t10542;
  double t10546;
  double t10608;
  double t10605;
  double t10606;
  double t10609;
  double t10613;
  double t10614;
  double t10615;
  double t10623;
  double t10624;
  double t10625;
  double t10626;
  double t10627;
  double t10607;
  double t10610;
  double t10611;
  double t10612;
  double t10616;
  double t10617;
  double t10556;
  double t10564;
  double t10566;
  double t10645;
  double t10646;
  double t10647;
  double t10595;
  double t10591;
  double t10592;
  double t10593;
  double t10594;
  double t10596;
  double t10619;
  double t10620;
  double t10621;
  double t10660;
  double t10661;
  double t10662;
  double t10635;
  double t10631;
  double t10632;
  double t10633;
  double t10634;
  double t10636;
  double t10649;
  double t10650;
  double t10651;
  double t10653;
  double t10654;
  double t10656;
  double t10657;
  double t10658;
  double t10664;
  double t10665;
  double t10666;
  double t10668;
  double t10669;
  double t10671;
  double t10672;
  double t10673;
  double t10726;
  double t10727;
  double t10728;
  double t10730;
  double t10731;
  double t10732;
  double t10746;
  double t10747;
  double t10748;
  double t10750;
  double t10751;
  double t10752;
  double t10686;
  double t10687;
  double t10688;
  double t10682;
  double t10683;
  double t10684;
  double t10598;
  double t10599;
  double t10600;
  double t10601;
  double t10588;
  double t10589;
  double t10590;
  double t10694;
  double t10695;
  double t10706;
  double t10707;
  double t10708;
  double t10702;
  double t10703;
  double t10704;
  double t10638;
  double t10639;
  double t10640;
  double t10641;
  double t10628;
  double t10629;
  double t10630;
  double t10714;
  double t10715;
  double t10648;
  double t10663;
  double t10677;
  double t10678;
  double t10679;
  double t10680;
  double t10681;
  double t10685;
  double t10689;
  double t10690;
  double t10691;
  double t10692;
  double t10693;
  double t10696;
  double t10697;
  double t10698;
  double t10699;
  double t10700;
  double t10701;
  double t10705;
  double t10709;
  double t10710;
  double t10711;
  double t10712;
  double t10713;
  double t10716;
  double t10717;
  double t10720;
  double t10721;
  double t10722;
  double t10723;
  double t10724;
  double t10729;
  double t10733;
  double t10734;
  double t10736;
  double t10737;
  double t10738;
  double t10740;
  double t10741;
  double t10742;
  double t10743;
  double t10744;
  double t10749;
  double t10753;
  double t10754;
  double t10756;
  double t10757;
  double t10758;
  double t10785;
  double t10786;
  double t10787;
  double t10788;
  double t10789;
  double t10790;
  double t10791;
  double t10792;
  double t10719;
  double t10725;
  double t10735;
  double t10739;
  double t10745;
  double t10755;
  double t10759;
  double t10760;
  double t10567;
  double t10597;
  double t10602;
  double t10603;
  double t10765;
  double t10766;
  double t10767;
  double t10768;
  double t10622;
  double t10637;
  double t10642;
  double t10643;
  double t10771;
  double t10772;
  double t10773;
  double t10774;
  t10516 = Cos(var1[3]);
  t4161 = Cos(var1[4]);
  t4400 = Sin(var1[3]);
  t10517 = Sin(var1[4]);
  t10535 = Sin(var1[2]);
  t4124 = Cos(var1[2]);
  t10537 = t10516*t4161;
  t10538 = -1.*t4400*t10517;
  t10539 = t10537 + t10538;
  t10583 = -1.*t4161;
  t10584 = 1. + t10583;
  t10585 = 0.4*t10584;
  t10586 = 0.64*t4161;
  t10587 = t10585 + t10586;
  t10515 = -1.*t4161*t4400;
  t10528 = -1.*t10516*t10517;
  t10529 = t10515 + t10528;
  t10530 = t4124*t10529;
  t10542 = -1.*t10535*t10539;
  t10546 = t10530 + t10542;
  t10608 = Cos(var1[5]);
  t10605 = Cos(var1[6]);
  t10606 = Sin(var1[5]);
  t10609 = Sin(var1[6]);
  t10613 = t10608*t10605;
  t10614 = -1.*t10606*t10609;
  t10615 = t10613 + t10614;
  t10623 = -1.*t10605;
  t10624 = 1. + t10623;
  t10625 = 0.4*t10624;
  t10626 = 0.64*t10605;
  t10627 = t10625 + t10626;
  t10607 = -1.*t10605*t10606;
  t10610 = -1.*t10608*t10609;
  t10611 = t10607 + t10610;
  t10612 = t4124*t10611;
  t10616 = -1.*t10535*t10615;
  t10617 = t10612 + t10616;
  t10556 = -1.*t10516*t10535;
  t10564 = -1.*t4124*t4400;
  t10566 = t10556 + t10564;
  t10645 = t4124*t10516;
  t10646 = -1.*t10535*t4400;
  t10647 = t10645 + t10646;
  t10595 = t4124*t10539;
  t10591 = t4161*t4400;
  t10592 = t10516*t10517;
  t10593 = t10591 + t10592;
  t10594 = -1.*t10535*t10593;
  t10596 = t10594 + t10595;
  t10619 = -1.*t10608*t10535;
  t10620 = -1.*t4124*t10606;
  t10621 = t10619 + t10620;
  t10660 = t4124*t10608;
  t10661 = -1.*t10535*t10606;
  t10662 = t10660 + t10661;
  t10635 = t4124*t10615;
  t10631 = t10605*t10606;
  t10632 = t10608*t10609;
  t10633 = t10631 + t10632;
  t10634 = -1.*t10535*t10633;
  t10636 = t10634 + t10635;
  t10649 = t10516*t10535;
  t10650 = t4124*t4400;
  t10651 = t10649 + t10650;
  t10653 = t10535*t10529;
  t10654 = t10653 + t10595;
  t10656 = t4124*t10593;
  t10657 = t10535*t10539;
  t10658 = t10656 + t10657;
  t10664 = t10608*t10535;
  t10665 = t4124*t10606;
  t10666 = t10664 + t10665;
  t10668 = t10535*t10611;
  t10669 = t10668 + t10635;
  t10671 = t4124*t10633;
  t10672 = t10535*t10615;
  t10673 = t10671 + t10672;
  t10726 = t10587*t4400;
  t10727 = 0.24*t10516*t10517;
  t10728 = t10726 + t10727;
  t10730 = t10516*t10587;
  t10731 = -0.24*t4400*t10517;
  t10732 = t10730 + t10731;
  t10746 = t10627*t10606;
  t10747 = 0.24*t10608*t10609;
  t10748 = t10746 + t10747;
  t10750 = t10608*t10627;
  t10751 = -0.24*t10606*t10609;
  t10752 = t10750 + t10751;
  t10686 = -1.*t10535*t10529;
  t10687 = -1.*t4124*t10539;
  t10688 = t10686 + t10687;
  t10682 = -1.*t4124*t10516;
  t10683 = t10535*t4400;
  t10684 = t10682 + t10683;
  t10598 = t10587*t4161;
  t10599 = Power(t10517,2);
  t10600 = 0.24*t10599;
  t10601 = t10598 + t10600;
  t10588 = t10587*t10517;
  t10589 = -0.24*t4161*t10517;
  t10590 = t10588 + t10589;
  t10694 = -1.*t4124*t10593;
  t10695 = t10694 + t10542;
  t10706 = -1.*t10535*t10611;
  t10707 = -1.*t4124*t10615;
  t10708 = t10706 + t10707;
  t10702 = -1.*t4124*t10608;
  t10703 = t10535*t10606;
  t10704 = t10702 + t10703;
  t10638 = t10627*t10605;
  t10639 = Power(t10609,2);
  t10640 = 0.24*t10639;
  t10641 = t10638 + t10640;
  t10628 = t10627*t10609;
  t10629 = -0.24*t10605*t10609;
  t10630 = t10628 + t10629;
  t10714 = -1.*t4124*t10633;
  t10715 = t10714 + t10616;
  t10648 = 13.6*t10566*t10647;
  t10663 = 13.6*t10621*t10662;
  t10677 = Power(t10566,2);
  t10678 = 6.8*t10677;
  t10679 = 6.8*t10566*t10651;
  t10680 = Power(t10647,2);
  t10681 = 6.8*t10680;
  t10685 = 6.8*t10647*t10684;
  t10689 = 3.2*t10688*t10654;
  t10690 = Power(t10596,2);
  t10691 = 3.2*t10690;
  t10692 = Power(t10546,2);
  t10693 = 3.2*t10692;
  t10696 = 3.2*t10695*t10658;
  t10697 = Power(t10621,2);
  t10698 = 6.8*t10697;
  t10699 = 6.8*t10621*t10666;
  t10700 = Power(t10662,2);
  t10701 = 6.8*t10700;
  t10705 = 6.8*t10662*t10704;
  t10709 = 3.2*t10708*t10669;
  t10710 = Power(t10636,2);
  t10711 = 3.2*t10710;
  t10712 = Power(t10617,2);
  t10713 = 3.2*t10712;
  t10716 = 3.2*t10715*t10673;
  t10717 = t10678 + t10679 + t10681 + t10685 + t10689 + t10691 + t10693 + t10696 + t10698 + t10699 + t10701 + t10705 + t10709 + t10711 + t10713 + t10716;
  t10720 = Power(t10516,2);
  t10721 = 0.11*t10720;
  t10722 = Power(t4400,2);
  t10723 = 0.11*t10722;
  t10724 = t10721 + t10723;
  t10729 = -1.*t10728*t10539;
  t10733 = -1.*t10529*t10732;
  t10734 = t10729 + t10733;
  t10736 = t10728*t10593;
  t10737 = t10539*t10732;
  t10738 = t10736 + t10737;
  t10740 = Power(t10608,2);
  t10741 = 0.11*t10740;
  t10742 = Power(t10606,2);
  t10743 = 0.11*t10742;
  t10744 = t10741 + t10743;
  t10749 = -1.*t10748*t10615;
  t10753 = -1.*t10611*t10752;
  t10754 = t10749 + t10753;
  t10756 = t10748*t10633;
  t10757 = t10615*t10752;
  t10758 = t10756 + t10757;
  t10785 = -2.88*t4124;
  t10786 = 6.8*t10684*t10724;
  t10787 = 3.2*t10695*t10734;
  t10788 = 3.2*t10688*t10738;
  t10789 = 6.8*t10704*t10744;
  t10790 = 3.2*t10715*t10754;
  t10791 = 3.2*t10708*t10758;
  t10792 = t10785 + t10786 + t10787 + t10788 + t10789 + t10790 + t10791;
  t10719 = -2.88*t10535;
  t10725 = 6.8*t10566*t10724;
  t10735 = 3.2*t10596*t10734;
  t10739 = 3.2*t10546*t10738;
  t10745 = 6.8*t10621*t10744;
  t10755 = 3.2*t10636*t10754;
  t10759 = 3.2*t10617*t10758;
  t10760 = t10719 + t10725 + t10735 + t10739 + t10745 + t10755 + t10759;
  t10567 = 0.748*t10566;
  t10597 = 3.2*t10590*t10596;
  t10602 = 3.2*t10601*t10546;
  t10603 = t10567 + t10597 + t10602;
  t10765 = 0.748*t10684;
  t10766 = 3.2*t10601*t10688;
  t10767 = 3.2*t10590*t10695;
  t10768 = t10765 + t10766 + t10767;
  t10622 = 0.748*t10621;
  t10637 = 3.2*t10630*t10636;
  t10642 = 3.2*t10641*t10617;
  t10643 = t10622 + t10637 + t10642;
  t10771 = 0.748*t10704;
  t10772 = 3.2*t10641*t10708;
  t10773 = 3.2*t10630*t10715;
  t10774 = t10771 + t10772 + t10773;
  p_output1[0]=var2[2]*(-0.5*(t10648 + 13.6*t10647*t10651 + 6.4*t10546*t10654 + 6.4*t10596*t10658 + t10663 + 13.6*t10662*t10666 + 6.4*t10617*t10669 + 6.4*t10636*t10673)*var2[0] - 0.5*t10717*var2[1] - 0.5*t10760*var2[2] - 0.5*t10603*var2[3] - 0.384*t10546*var2[4] - 0.5*t10643*var2[5] - 0.384*t10617*var2[6]);
  p_output1[1]=var2[2]*(-0.5*t10717*var2[0] - 0.5*(t10648 + t10663 + 13.6*t10566*t10684 + 6.4*t10546*t10688 + 6.4*t10596*t10695 + 13.6*t10621*t10704 + 6.4*t10617*t10708 + 6.4*t10636*t10715)*var2[1] - 0.5*t10792*var2[2] - 0.5*t10768*var2[3] - 0.384*t10688*var2[4] - 0.5*t10774*var2[5] - 0.384*t10708*var2[6]);
  p_output1[2]=(-0.5*t10760*var2[0] - 0.5*t10792*var2[1])*var2[2];
  p_output1[3]=(-0.5*t10603*var2[0] - 0.5*t10768*var2[1])*var2[2];
  p_output1[4]=(-0.384*t10546*var2[0] - 0.384*t10688*var2[1])*var2[2];
  p_output1[5]=(-0.5*t10643*var2[0] - 0.5*t10774*var2[1])*var2[2];
  p_output1[6]=(-0.384*t10617*var2[0] - 0.384*t10708*var2[1])*var2[2];
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

#include "Ce2_vec3_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
