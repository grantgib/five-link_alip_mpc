/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:47:08 GMT-04:00
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
  double t3911;
  double t3015;
  double t3287;
  double t4584;
  double t8252;
  double t3640;
  double t4831;
  double t4866;
  double t213;
  double t10707;
  double t10708;
  double t10730;
  double t10767;
  double t10768;
  double t10776;
  double t10777;
  double t10778;
  double t10779;
  double t10780;
  double t10781;
  double t10796;
  double t8116;
  double t8300;
  double t10500;
  double t10690;
  double t10698;
  double t10705;
  double t10800;
  double t10801;
  double t10802;
  double t10803;
  double t10804;
  double t10805;
  double t10820;
  double t10821;
  double t10830;
  double t10831;
  double t10832;
  double t10834;
  double t10835;
  double t10836;
  double t10840;
  double t10841;
  double t10842;
  double t10846;
  double t10847;
  double t10823;
  double t10824;
  double t10825;
  double t10797;
  double t10798;
  double t10799;
  double t10817;
  double t10818;
  double t10769;
  double t10770;
  double t10775;
  double t10789;
  double t10790;
  double t10791;
  double t10807;
  double t10808;
  double t10809;
  double t10819;
  double t10822;
  double t10826;
  double t10827;
  double t10828;
  double t10833;
  double t10837;
  double t10838;
  double t10843;
  double t10844;
  double t10845;
  double t10848;
  double t10849;
  double t10851;
  double t10852;
  double t10853;
  double t10855;
  double t10856;
  double t10857;
  double t10858;
  double t10859;
  double t10877;
  double t10878;
  double t10879;
  double t10880;
  double t10881;
  double t10839;
  double t10850;
  double t10854;
  double t10860;
  double t10861;
  double t10866;
  double t10867;
  double t10868;
  double t10869;
  double t10870;
  double t10788;
  double t10795;
  double t10806;
  double t10810;
  double t10811;
  double t10886;
  double t10887;
  double t10888;
  double t10889;
  double t10890;
  t3911 = Cos(var1[5]);
  t3015 = Cos(var1[6]);
  t3287 = Sin(var1[5]);
  t4584 = Sin(var1[6]);
  t8252 = Sin(var1[2]);
  t3640 = -1.*t3015*t3287;
  t4831 = -1.*t3911*t4584;
  t4866 = t3640 + t4831;
  t213 = Cos(var1[2]);
  t10707 = -1.*t3015;
  t10708 = 1. + t10707;
  t10730 = 0.4*t10708;
  t10767 = 0.64*t3015;
  t10768 = t10730 + t10767;
  t10776 = t8252*t4866;
  t10777 = t3911*t3015;
  t10778 = -1.*t3287*t4584;
  t10779 = t10777 + t10778;
  t10780 = t213*t10779;
  t10781 = t10776 + t10780;
  t10796 = t10768*t3015;
  t8116 = t213*t4866;
  t8300 = -1.*t3911*t3015;
  t10500 = t3287*t4584;
  t10690 = t8300 + t10500;
  t10698 = t8252*t10690;
  t10705 = t8116 + t10698;
  t10800 = t3015*t3287;
  t10801 = t3911*t4584;
  t10802 = t10800 + t10801;
  t10803 = t213*t10802;
  t10804 = t8252*t10779;
  t10805 = t10803 + t10804;
  t10820 = -1.*t8252*t10779;
  t10821 = t8116 + t10820;
  t10830 = t10768*t3287;
  t10831 = 0.24*t3911*t4584;
  t10832 = t10830 + t10831;
  t10834 = t3911*t10768;
  t10835 = -0.24*t3287*t4584;
  t10836 = t10834 + t10835;
  t10840 = -0.24*t3015*t3287;
  t10841 = -0.24*t3911*t4584;
  t10842 = t10840 + t10841;
  t10846 = 0.24*t3911*t3015;
  t10847 = t10846 + t10835;
  t10823 = -1.*t8252*t4866;
  t10824 = t213*t10690;
  t10825 = t10823 + t10824;
  t10797 = Power(t3015,2);
  t10798 = -0.24*t10797;
  t10799 = t10796 + t10798;
  t10817 = -1.*t8252*t10802;
  t10818 = t10817 + t10780;
  t10769 = t10768*t4584;
  t10770 = -0.24*t3015*t4584;
  t10775 = t10769 + t10770;
  t10789 = -1.*t10768*t4584;
  t10790 = 0.24*t3015*t4584;
  t10791 = t10789 + t10790;
  t10807 = Power(t4584,2);
  t10808 = 0.24*t10807;
  t10809 = t10796 + t10808;
  t10819 = 3.2*t10781*t10818;
  t10822 = 3.2*t10821*t10805;
  t10826 = 3.2*t10781*t10825;
  t10827 = 3.2*t10821*t10705;
  t10828 = t10819 + t10822 + t10826 + t10827;
  t10833 = -1.*t10832*t10779;
  t10837 = -1.*t4866*t10836;
  t10838 = t10833 + t10837;
  t10843 = t10842*t10779;
  t10844 = t10832*t10779;
  t10845 = t4866*t10836;
  t10848 = t10802*t10847;
  t10849 = t10843 + t10844 + t10845 + t10848;
  t10851 = t10832*t10802;
  t10852 = t10779*t10836;
  t10853 = t10851 + t10852;
  t10855 = -1.*t4866*t10842;
  t10856 = -1.*t4866*t10832;
  t10857 = -1.*t10779*t10847;
  t10858 = -1.*t10836*t10690;
  t10859 = t10855 + t10856 + t10857 + t10858;
  t10877 = 3.2*t10821*t10838;
  t10878 = 3.2*t10821*t10849;
  t10879 = 3.2*t10853*t10825;
  t10880 = 3.2*t10818*t10859;
  t10881 = t10877 + t10878 + t10879 + t10880;
  t10839 = 3.2*t10781*t10838;
  t10850 = 3.2*t10781*t10849;
  t10854 = 3.2*t10853*t10705;
  t10860 = 3.2*t10805*t10859;
  t10861 = t10839 + t10850 + t10854 + t10860;
  t10866 = 3.2*t10799*t10818;
  t10867 = 3.2*t10775*t10821;
  t10868 = 3.2*t10791*t10821;
  t10869 = 3.2*t10809*t10825;
  t10870 = t10866 + t10867 + t10868 + t10869;
  t10788 = 3.2*t10775*t10781;
  t10795 = 3.2*t10791*t10781;
  t10806 = 3.2*t10799*t10805;
  t10810 = 3.2*t10809*t10705;
  t10811 = t10788 + t10795 + t10806 + t10810;
  t10886 = 3.2*t10799*t10838;
  t10887 = 3.2*t10791*t10853;
  t10888 = 3.2*t10809*t10849;
  t10889 = 3.2*t10775*t10859;
  t10890 = t10886 + t10887 + t10888 + t10889;
  p_output1[0]=var2[6]*(-0.5*(6.4*t10705*t10781 + 6.4*t10781*t10805)*var2[0] - 0.5*t10828*var2[1] - 0.5*t10861*var2[2] - 0.5*t10811*var2[5] - 0.384*t10705*var2[6]);
  p_output1[1]=var2[6]*(-0.5*t10828*var2[0] - 0.5*(6.4*t10818*t10821 + 6.4*t10821*t10825)*var2[1] - 0.5*t10881*var2[2] - 0.5*t10870*var2[5] - 0.384*t10825*var2[6]);
  p_output1[2]=var2[6]*(-0.5*t10861*var2[0] - 0.5*t10881*var2[1] - 0.5*(6.4*t10849*t10853 + 6.4*t10838*t10859)*var2[2] - 0.5*t10890*var2[5] - 0.384*t10849*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[6]*(-0.5*t10811*var2[0] - 0.5*t10870*var2[1] - 0.5*t10890*var2[2] - 0.5*(6.4*t10775*t10799 + 6.4*t10791*t10809)*var2[5] - 0.384*t10791*var2[6]);
  p_output1[6]=(-0.384*t10705*var2[0] - 0.384*t10825*var2[1] - 0.384*t10849*var2[2] - 0.384*t10791*var2[5])*var2[6];
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

#include "Ce2_vec7_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
