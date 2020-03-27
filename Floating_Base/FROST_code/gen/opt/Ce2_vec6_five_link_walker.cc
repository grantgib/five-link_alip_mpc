/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:47:05 GMT-04:00
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
  double t4214;
  double t3890;
  double t4207;
  double t4230;
  double t4330;
  double t3886;
  double t4213;
  double t4284;
  double t4316;
  double t10610;
  double t10623;
  double t10656;
  double t10657;
  double t10658;
  double t4325;
  double t4335;
  double t4590;
  double t4797;
  double t7977;
  double t8231;
  double t10606;
  double t10607;
  double t10608;
  double t10691;
  double t10692;
  double t10693;
  double t10667;
  double t10668;
  double t10669;
  double t10670;
  double t10676;
  double t10677;
  double t10695;
  double t10696;
  double t10697;
  double t10699;
  double t10700;
  double t10701;
  double t10702;
  double t10703;
  double t10704;
  double t10721;
  double t10722;
  double t10737;
  double t10738;
  double t10739;
  double t10741;
  double t10742;
  double t10743;
  double t10747;
  double t10748;
  double t10749;
  double t10724;
  double t10725;
  double t10726;
  double t10714;
  double t10715;
  double t10716;
  double t10659;
  double t10665;
  double t10666;
  double t10679;
  double t10685;
  double t10686;
  double t10687;
  double t10694;
  double t10718;
  double t10719;
  double t10709;
  double t10710;
  double t10711;
  double t10712;
  double t10713;
  double t10717;
  double t10720;
  double t10723;
  double t10727;
  double t10728;
  double t10729;
  double t10731;
  double t10732;
  double t10733;
  double t10734;
  double t10735;
  double t10740;
  double t10744;
  double t10745;
  double t10750;
  double t10751;
  double t10752;
  double t10753;
  double t10754;
  double t10756;
  double t10757;
  double t10758;
  double t10760;
  double t10761;
  double t10762;
  double t10763;
  double t10764;
  double t10782;
  double t10783;
  double t10784;
  double t10785;
  double t10786;
  double t10787;
  double t10736;
  double t10746;
  double t10755;
  double t10759;
  double t10765;
  double t10766;
  double t10771;
  double t10772;
  double t10773;
  double t10774;
  double t10609;
  double t10678;
  double t10688;
  double t10689;
  double t10792;
  double t10793;
  double t10794;
  t4214 = Cos(var1[5]);
  t3890 = Cos(var1[6]);
  t4207 = Sin(var1[5]);
  t4230 = Sin(var1[6]);
  t4330 = Sin(var1[2]);
  t3886 = Cos(var1[2]);
  t4213 = -1.*t3890*t4207;
  t4284 = -1.*t4214*t4230;
  t4316 = t4213 + t4284;
  t10610 = -1.*t3890;
  t10623 = 1. + t10610;
  t10656 = 0.4*t10623;
  t10657 = 0.64*t3890;
  t10658 = t10656 + t10657;
  t4325 = t3886*t4316;
  t4335 = -1.*t4214*t3890;
  t4590 = t4207*t4230;
  t4797 = t4335 + t4590;
  t7977 = t4330*t4797;
  t8231 = t4325 + t7977;
  t10606 = -1.*t4214*t4330;
  t10607 = -1.*t3886*t4207;
  t10608 = t10606 + t10607;
  t10691 = t3886*t4214;
  t10692 = -1.*t4330*t4207;
  t10693 = t10691 + t10692;
  t10667 = t4330*t4316;
  t10668 = t4214*t3890;
  t10669 = -1.*t4207*t4230;
  t10670 = t10668 + t10669;
  t10676 = t3886*t10670;
  t10677 = t10667 + t10676;
  t10695 = t4214*t4330;
  t10696 = t3886*t4207;
  t10697 = t10695 + t10696;
  t10699 = t3890*t4207;
  t10700 = t4214*t4230;
  t10701 = t10699 + t10700;
  t10702 = t3886*t10701;
  t10703 = t4330*t10670;
  t10704 = t10702 + t10703;
  t10721 = -1.*t4330*t10670;
  t10722 = t4325 + t10721;
  t10737 = t10658*t4207;
  t10738 = 0.24*t4214*t4230;
  t10739 = t10737 + t10738;
  t10741 = t4214*t10658;
  t10742 = -0.24*t4207*t4230;
  t10743 = t10741 + t10742;
  t10747 = -1.*t10658*t4207;
  t10748 = -0.24*t4214*t4230;
  t10749 = t10747 + t10748;
  t10724 = -1.*t4330*t4316;
  t10725 = t3886*t4797;
  t10726 = t10724 + t10725;
  t10714 = -1.*t3886*t4214;
  t10715 = t4330*t4207;
  t10716 = t10714 + t10715;
  t10659 = t10658*t4230;
  t10665 = -0.24*t3890*t4230;
  t10666 = t10659 + t10665;
  t10679 = t10658*t3890;
  t10685 = Power(t4230,2);
  t10686 = 0.24*t10685;
  t10687 = t10679 + t10686;
  t10694 = 13.6*t10608*t10693;
  t10718 = -1.*t4330*t10701;
  t10719 = t10718 + t10676;
  t10709 = Power(t10608,2);
  t10710 = 6.8*t10709;
  t10711 = 6.8*t10608*t10697;
  t10712 = Power(t10693,2);
  t10713 = 6.8*t10712;
  t10717 = 6.8*t10693*t10716;
  t10720 = 3.2*t10677*t10719;
  t10723 = 3.2*t10722*t10704;
  t10727 = 3.2*t10677*t10726;
  t10728 = 3.2*t10722*t8231;
  t10729 = t10710 + t10711 + t10713 + t10717 + t10720 + t10723 + t10727 + t10728;
  t10731 = Power(t4214,2);
  t10732 = 0.11*t10731;
  t10733 = Power(t4207,2);
  t10734 = 0.11*t10733;
  t10735 = t10732 + t10734;
  t10740 = -1.*t10739*t10670;
  t10744 = -1.*t4316*t10743;
  t10745 = t10740 + t10744;
  t10750 = t10749*t10670;
  t10751 = t10739*t10670;
  t10752 = t4316*t10743;
  t10753 = t10701*t10743;
  t10754 = t10750 + t10751 + t10752 + t10753;
  t10756 = t10739*t10701;
  t10757 = t10670*t10743;
  t10758 = t10756 + t10757;
  t10760 = -1.*t4316*t10749;
  t10761 = -1.*t4316*t10739;
  t10762 = -1.*t10670*t10743;
  t10763 = -1.*t10743*t4797;
  t10764 = t10760 + t10761 + t10762 + t10763;
  t10782 = 6.8*t10716*t10735;
  t10783 = 3.2*t10722*t10745;
  t10784 = 3.2*t10722*t10754;
  t10785 = 3.2*t10758*t10726;
  t10786 = 3.2*t10719*t10764;
  t10787 = t10782 + t10783 + t10784 + t10785 + t10786;
  t10736 = 6.8*t10608*t10735;
  t10746 = 3.2*t10677*t10745;
  t10755 = 3.2*t10677*t10754;
  t10759 = 3.2*t10758*t8231;
  t10765 = 3.2*t10704*t10764;
  t10766 = t10736 + t10746 + t10755 + t10759 + t10765;
  t10771 = 0.748*t10716;
  t10772 = 3.2*t10666*t10722;
  t10773 = 3.2*t10687*t10726;
  t10774 = t10771 + t10772 + t10773;
  t10609 = 0.748*t10608;
  t10678 = 3.2*t10666*t10677;
  t10688 = 3.2*t10687*t8231;
  t10689 = t10609 + t10678 + t10688;
  t10792 = 3.2*t10687*t10754;
  t10793 = 3.2*t10666*t10764;
  t10794 = t10792 + t10793;
  p_output1[0]=var2[5]*(-0.5*(t10694 + 13.6*t10693*t10697 + 6.4*t10677*t10704 + 6.4*t10677*t8231)*var2[0] - 0.5*t10729*var2[1] - 0.5*t10766*var2[2] - 0.5*t10689*var2[5] - 0.384*t8231*var2[6]);
  p_output1[1]=var2[5]*(-0.5*t10729*var2[0] - 0.5*(t10694 + 13.6*t10608*t10716 + 6.4*t10719*t10722 + 6.4*t10722*t10726)*var2[1] - 0.5*t10787*var2[2] - 0.5*t10774*var2[5] - 0.384*t10726*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t10766*var2[0] - 0.5*t10787*var2[1] - 0.5*(6.4*t10754*t10758 + 6.4*t10745*t10764)*var2[2] - 0.5*t10794*var2[5] - 0.384*t10754*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*t10689*var2[0] - 0.5*t10774*var2[1] - 0.5*t10794*var2[2])*var2[5];
  p_output1[6]=(-0.384*t8231*var2[0] - 0.384*t10726*var2[1] - 0.384*t10754*var2[2])*var2[5];
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

#include "Ce2_vec6_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
