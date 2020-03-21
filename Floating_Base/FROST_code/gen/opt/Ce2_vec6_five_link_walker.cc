/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:59 GMT-04:00
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
  double t4866;
  double t3077;
  double t3973;
  double t4948;
  double t5076;
  double t225;
  double t4686;
  double t5073;
  double t5074;
  double t10819;
  double t10820;
  double t10826;
  double t10827;
  double t10828;
  double t5075;
  double t5088;
  double t10674;
  double t10806;
  double t10807;
  double t10808;
  double t10815;
  double t10816;
  double t10817;
  double t10851;
  double t10852;
  double t10853;
  double t10837;
  double t10838;
  double t10839;
  double t10840;
  double t10841;
  double t10842;
  double t10855;
  double t10856;
  double t10857;
  double t10859;
  double t10860;
  double t10861;
  double t10862;
  double t10863;
  double t10864;
  double t10881;
  double t10882;
  double t10897;
  double t10898;
  double t10899;
  double t10901;
  double t10902;
  double t10903;
  double t10907;
  double t10908;
  double t10909;
  double t10884;
  double t10885;
  double t10886;
  double t10874;
  double t10875;
  double t10876;
  double t10829;
  double t10835;
  double t10836;
  double t10844;
  double t10845;
  double t10846;
  double t10847;
  double t10854;
  double t10878;
  double t10879;
  double t10869;
  double t10870;
  double t10871;
  double t10872;
  double t10873;
  double t10877;
  double t10880;
  double t10883;
  double t10887;
  double t10888;
  double t10889;
  double t10891;
  double t10892;
  double t10893;
  double t10894;
  double t10895;
  double t10900;
  double t10904;
  double t10905;
  double t10910;
  double t10911;
  double t10912;
  double t10913;
  double t10914;
  double t10916;
  double t10917;
  double t10918;
  double t10920;
  double t10921;
  double t10922;
  double t10923;
  double t10924;
  double t10942;
  double t10943;
  double t10944;
  double t10945;
  double t10946;
  double t10947;
  double t10896;
  double t10906;
  double t10915;
  double t10919;
  double t10925;
  double t10926;
  double t10931;
  double t10932;
  double t10933;
  double t10934;
  double t10818;
  double t10843;
  double t10848;
  double t10849;
  double t10952;
  double t10953;
  double t10954;
  t4866 = Cos(var1[5]);
  t3077 = Cos(var1[6]);
  t3973 = Sin(var1[5]);
  t4948 = Sin(var1[6]);
  t5076 = Sin(var1[2]);
  t225 = Cos(var1[2]);
  t4686 = -1.*t3077*t3973;
  t5073 = -1.*t4866*t4948;
  t5074 = t4686 + t5073;
  t10819 = -1.*t3077;
  t10820 = 1. + t10819;
  t10826 = 0.4*t10820;
  t10827 = 0.64*t3077;
  t10828 = t10826 + t10827;
  t5075 = t225*t5074;
  t5088 = -1.*t4866*t3077;
  t10674 = t3973*t4948;
  t10806 = t5088 + t10674;
  t10807 = t5076*t10806;
  t10808 = t5075 + t10807;
  t10815 = -1.*t4866*t5076;
  t10816 = -1.*t225*t3973;
  t10817 = t10815 + t10816;
  t10851 = t225*t4866;
  t10852 = -1.*t5076*t3973;
  t10853 = t10851 + t10852;
  t10837 = t5076*t5074;
  t10838 = t4866*t3077;
  t10839 = -1.*t3973*t4948;
  t10840 = t10838 + t10839;
  t10841 = t225*t10840;
  t10842 = t10837 + t10841;
  t10855 = t4866*t5076;
  t10856 = t225*t3973;
  t10857 = t10855 + t10856;
  t10859 = t3077*t3973;
  t10860 = t4866*t4948;
  t10861 = t10859 + t10860;
  t10862 = t225*t10861;
  t10863 = t5076*t10840;
  t10864 = t10862 + t10863;
  t10881 = -1.*t5076*t10840;
  t10882 = t5075 + t10881;
  t10897 = t10828*t3973;
  t10898 = 0.24*t4866*t4948;
  t10899 = t10897 + t10898;
  t10901 = t4866*t10828;
  t10902 = -0.24*t3973*t4948;
  t10903 = t10901 + t10902;
  t10907 = -1.*t10828*t3973;
  t10908 = -0.24*t4866*t4948;
  t10909 = t10907 + t10908;
  t10884 = -1.*t5076*t5074;
  t10885 = t225*t10806;
  t10886 = t10884 + t10885;
  t10874 = -1.*t225*t4866;
  t10875 = t5076*t3973;
  t10876 = t10874 + t10875;
  t10829 = t10828*t4948;
  t10835 = -0.24*t3077*t4948;
  t10836 = t10829 + t10835;
  t10844 = t10828*t3077;
  t10845 = Power(t4948,2);
  t10846 = 0.24*t10845;
  t10847 = t10844 + t10846;
  t10854 = 13.6*t10817*t10853;
  t10878 = -1.*t5076*t10861;
  t10879 = t10878 + t10841;
  t10869 = Power(t10817,2);
  t10870 = 6.8*t10869;
  t10871 = 6.8*t10817*t10857;
  t10872 = Power(t10853,2);
  t10873 = 6.8*t10872;
  t10877 = 6.8*t10853*t10876;
  t10880 = 3.2*t10842*t10879;
  t10883 = 3.2*t10882*t10864;
  t10887 = 3.2*t10842*t10886;
  t10888 = 3.2*t10882*t10808;
  t10889 = t10870 + t10871 + t10873 + t10877 + t10880 + t10883 + t10887 + t10888;
  t10891 = Power(t4866,2);
  t10892 = 0.11*t10891;
  t10893 = Power(t3973,2);
  t10894 = 0.11*t10893;
  t10895 = t10892 + t10894;
  t10900 = -1.*t10899*t10840;
  t10904 = -1.*t5074*t10903;
  t10905 = t10900 + t10904;
  t10910 = t10909*t10840;
  t10911 = t10899*t10840;
  t10912 = t5074*t10903;
  t10913 = t10861*t10903;
  t10914 = t10910 + t10911 + t10912 + t10913;
  t10916 = t10899*t10861;
  t10917 = t10840*t10903;
  t10918 = t10916 + t10917;
  t10920 = -1.*t5074*t10909;
  t10921 = -1.*t5074*t10899;
  t10922 = -1.*t10840*t10903;
  t10923 = -1.*t10903*t10806;
  t10924 = t10920 + t10921 + t10922 + t10923;
  t10942 = 6.8*t10876*t10895;
  t10943 = 3.2*t10882*t10905;
  t10944 = 3.2*t10882*t10914;
  t10945 = 3.2*t10918*t10886;
  t10946 = 3.2*t10879*t10924;
  t10947 = t10942 + t10943 + t10944 + t10945 + t10946;
  t10896 = 6.8*t10817*t10895;
  t10906 = 3.2*t10842*t10905;
  t10915 = 3.2*t10842*t10914;
  t10919 = 3.2*t10918*t10808;
  t10925 = 3.2*t10864*t10924;
  t10926 = t10896 + t10906 + t10915 + t10919 + t10925;
  t10931 = 0.748*t10876;
  t10932 = 3.2*t10836*t10882;
  t10933 = 3.2*t10847*t10886;
  t10934 = t10931 + t10932 + t10933;
  t10818 = 0.748*t10817;
  t10843 = 3.2*t10836*t10842;
  t10848 = 3.2*t10847*t10808;
  t10849 = t10818 + t10843 + t10848;
  t10952 = 3.2*t10847*t10914;
  t10953 = 3.2*t10836*t10924;
  t10954 = t10952 + t10953;
  p_output1[0]=var2[5]*(-0.5*(6.4*t10808*t10842 + t10854 + 13.6*t10853*t10857 + 6.4*t10842*t10864)*var2[0] - 0.5*t10889*var2[1] - 0.5*t10926*var2[2] - 0.5*t10849*var2[5] - 0.384*t10808*var2[6]);
  p_output1[1]=var2[5]*(-0.5*t10889*var2[0] - 0.5*(t10854 + 13.6*t10817*t10876 + 6.4*t10879*t10882 + 6.4*t10882*t10886)*var2[1] - 0.5*t10947*var2[2] - 0.5*t10934*var2[5] - 0.384*t10886*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t10926*var2[0] - 0.5*t10947*var2[1] - 0.5*(6.4*t10914*t10918 + 6.4*t10905*t10924)*var2[2] - 0.5*t10954*var2[5] - 0.384*t10914*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*t10849*var2[0] - 0.5*t10934*var2[1] - 0.5*t10954*var2[2])*var2[5];
  p_output1[6]=(-0.384*t10808*var2[0] - 0.384*t10886*var2[1] - 0.384*t10914*var2[2])*var2[5];
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
