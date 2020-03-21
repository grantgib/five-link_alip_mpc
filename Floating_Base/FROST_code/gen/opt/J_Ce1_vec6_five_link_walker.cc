/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:30 GMT-04:00
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
  double t8408;
  double t4792;
  double t5107;
  double t3768;
  double t9196;
  double t364;
  double t8411;
  double t8840;
  double t8851;
  double t8874;
  double t9112;
  double t12329;
  double t12490;
  double t12496;
  double t4403;
  double t5359;
  double t5570;
  double t8145;
  double t12641;
  double t12642;
  double t12644;
  double t9799;
  double t12304;
  double t12305;
  double t12679;
  double t9145;
  double t9397;
  double t9669;
  double t9689;
  double t12328;
  double t12648;
  double t12656;
  double t12657;
  double t12703;
  double t12704;
  double t12705;
  double t12707;
  double t12714;
  double t12785;
  double t12786;
  double t12787;
  double t12788;
  double t12791;
  double t12806;
  double t12807;
  double t12808;
  double t12810;
  double t12832;
  double t12833;
  double t12850;
  double t12851;
  double t12852;
  double t12853;
  double t12816;
  double t12817;
  double t12818;
  double t12809;
  double t12814;
  double t12815;
  double t12819;
  double t12820;
  double t12856;
  double t12857;
  double t12858;
  double t12859;
  double t12860;
  double t12891;
  double t12892;
  double t12893;
  double t12894;
  double t12895;
  double t12896;
  double t12897;
  double t12900;
  double t12882;
  double t12883;
  double t12884;
  double t12901;
  double t12904;
  double t12905;
  double t12906;
  double t12524;
  double t12910;
  double t12911;
  double t12912;
  double t12913;
  double t12594;
  double t12916;
  double t12921;
  double t12678;
  double t12683;
  double t12922;
  double t12923;
  double t12924;
  double t12925;
  double t12934;
  double t12935;
  double t12936;
  double t12927;
  double t12928;
  double t12929;
  double t12939;
  double t12940;
  double t12941;
  double t12878;
  double t12879;
  double t12880;
  double t12619;
  double t12687;
  double t12697;
  double t12698;
  double t12821;
  double t12963;
  double t12964;
  double t12965;
  double t12959;
  double t12960;
  double t12961;
  double t12973;
  double t12974;
  double t12975;
  double t12968;
  double t12969;
  double t12970;
  double t12967;
  double t12995;
  double t12996;
  double t12976;
  double t12980;
  double t12999;
  double t13000;
  double t13002;
  double t13003;
  double t12984;
  double t12989;
  double t12990;
  double t12991;
  double t12992;
  double t12993;
  double t12994;
  double t12997;
  double t12998;
  double t13001;
  double t13004;
  double t13005;
  double t13006;
  double t13007;
  double t13008;
  double t13009;
  double t13010;
  double t13011;
  double t13012;
  double t13013;
  double t13014;
  double t13015;
  double t13016;
  double t13017;
  double t13018;
  double t13019;
  double t13020;
  double t13021;
  double t13022;
  double t13023;
  double t13028;
  double t13029;
  double t13031;
  double t13032;
  double t13034;
  double t13035;
  double t13036;
  double t13042;
  double t13043;
  double t13044;
  double t13058;
  double t13059;
  double t13060;
  double t13061;
  double t13062;
  double t13074;
  double t13075;
  double t13076;
  t8408 = Cos(var1[6]);
  t4792 = Sin(var1[2]);
  t5107 = Sin(var1[5]);
  t3768 = Cos(var1[5]);
  t9196 = Sin(var1[6]);
  t364 = Cos(var1[2]);
  t8411 = -1.*t8408;
  t8840 = 1. + t8411;
  t8851 = 0.4*t8840;
  t8874 = 0.64*t8408;
  t9112 = t8851 + t8874;
  t12329 = t3768*t8408;
  t12490 = -1.*t5107*t9196;
  t12496 = t12329 + t12490;
  t4403 = -1.*t364*t3768;
  t5359 = t4792*t5107;
  t5570 = t4403 + t5359;
  t8145 = 0.748*t5570;
  t12641 = t9112*t9196;
  t12642 = -0.24*t8408*t9196;
  t12644 = t12641 + t12642;
  t9799 = -1.*t8408*t5107;
  t12304 = -1.*t3768*t9196;
  t12305 = t9799 + t12304;
  t12679 = -1.*t4792*t12496;
  t9145 = t9112*t8408;
  t9397 = Power(t9196,2);
  t9669 = 0.24*t9397;
  t9689 = t9145 + t9669;
  t12328 = -1.*t4792*t12305;
  t12648 = t8408*t5107;
  t12656 = t3768*t9196;
  t12657 = t12648 + t12656;
  t12703 = t364*t12305;
  t12704 = t12703 + t12679;
  t12705 = 3.2*t12644*t12704;
  t12707 = -1.*t3768*t8408;
  t12714 = t5107*t9196;
  t12785 = t12707 + t12714;
  t12786 = t364*t12785;
  t12787 = t12328 + t12786;
  t12788 = 3.2*t9689*t12787;
  t12791 = t8145 + t12705 + t12788;
  t12806 = Power(t8408,2);
  t12807 = -0.24*t12806;
  t12808 = t9145 + t12807;
  t12810 = t364*t12496;
  t12832 = t4792*t12657;
  t12833 = t12832 + t12786;
  t12850 = 3.2*t9689*t12833;
  t12851 = t4792*t12785;
  t12852 = t12703 + t12851;
  t12853 = 3.2*t12644*t12852;
  t12816 = -1.*t9112*t9196;
  t12817 = 0.24*t8408*t9196;
  t12818 = t12816 + t12817;
  t12809 = -1.*t4792*t12657;
  t12814 = t12809 + t12810;
  t12815 = 3.2*t12808*t12814;
  t12819 = 3.2*t12818*t12704;
  t12820 = t12815 + t12705 + t12819 + t12788;
  t12856 = t4792*t12305;
  t12857 = t12856 + t12810;
  t12858 = 3.2*t12808*t12857;
  t12859 = 3.2*t12818*t12852;
  t12860 = t12858 + t12850 + t12853 + t12859;
  t12891 = -1.*t3768*t4792;
  t12892 = -1.*t364*t5107;
  t12893 = t12891 + t12892;
  t12894 = 0.748*t12893;
  t12895 = 3.2*t12644*t12814;
  t12896 = 3.2*t9689*t12704;
  t12897 = t12894 + t12895 + t12896;
  t12900 = 3.2*t12644*t12857;
  t12882 = t364*t12657;
  t12883 = t4792*t12496;
  t12884 = t12882 + t12883;
  t12901 = 3.2*t9689*t12852;
  t12904 = 3.2*t12818*t12857;
  t12905 = 3.2*t12808*t12884;
  t12906 = t12900 + t12904 + t12905 + t12901;
  t12524 = -1.*t364*t12496;
  t12910 = t3768*t4792;
  t12911 = t364*t5107;
  t12912 = t12910 + t12911;
  t12913 = 0.748*t12912;
  t12594 = t12328 + t12524;
  t12916 = -1.*t364*t12305;
  t12921 = 3.2*t12644*t12594;
  t12678 = -1.*t364*t12657;
  t12683 = t12678 + t12679;
  t12922 = -1.*t4792*t12785;
  t12923 = t12916 + t12922;
  t12924 = 3.2*t9689*t12923;
  t12925 = t12913 + t12921 + t12924;
  t12934 = 3.2*t12644*t12787;
  t12935 = t12882 + t12922;
  t12936 = 3.2*t9689*t12935;
  t12927 = 3.2*t12818*t12594;
  t12928 = 3.2*t12808*t12683;
  t12929 = t12921 + t12927 + t12928 + t12924;
  t12939 = 3.2*t12808*t12704;
  t12940 = 3.2*t12818*t12787;
  t12941 = t12939 + t12934 + t12940 + t12936;
  t12878 = -1.*t9112*t8408;
  t12879 = 0.24*t12806;
  t12880 = t12878 + t12879;
  t12619 = 3.2*t9689*t12594;
  t12687 = 3.2*t12644*t12683;
  t12697 = t8145 + t12619 + t12687;
  t12698 = -0.5*var2[2]*t12697;
  t12821 = -0.5*var2[6]*t12820;
  t12963 = t3768*t9112;
  t12964 = -0.24*t5107*t9196;
  t12965 = t12963 + t12964;
  t12959 = -1.*t9112*t5107;
  t12960 = -0.24*t3768*t9196;
  t12961 = t12959 + t12960;
  t12973 = t9112*t5107;
  t12974 = 0.24*t3768*t9196;
  t12975 = t12973 + t12974;
  t12968 = -1.*t3768*t9112;
  t12969 = 0.24*t5107*t9196;
  t12970 = t12968 + t12969;
  t12967 = -1.*t12657*t12965;
  t12995 = -0.24*t8408*t5107;
  t12996 = t12995 + t12960;
  t12976 = -1.*t12975*t12785;
  t12980 = t12305*t12975;
  t12999 = 0.24*t3768*t8408;
  t13000 = t12999 + t12964;
  t13002 = -0.24*t3768*t8408;
  t13003 = t13002 + t12969;
  t12984 = t12965*t12785;
  t12989 = t12961*t12496;
  t12990 = t12975*t12496;
  t12991 = t12305*t12965;
  t12992 = t12657*t12965;
  t12993 = t12989 + t12990 + t12991 + t12992;
  t12994 = 3.2*t12818*t12993;
  t12997 = -1.*t12996*t12496;
  t12998 = -1.*t12305*t12965;
  t13001 = -1.*t12305*t13000;
  t13004 = -1.*t12305*t13003;
  t13005 = -1.*t12961*t12785;
  t13006 = -1.*t12996*t12785;
  t13007 = t12997 + t12998 + t12967 + t13001 + t13004 + t13005 + t13006 + t12976;
  t13008 = 3.2*t12644*t13007;
  t13009 = -1.*t12305*t12961;
  t13010 = -1.*t12305*t12975;
  t13011 = -1.*t12496*t12965;
  t13012 = -1.*t12965*t12785;
  t13013 = t13009 + t13010 + t13011 + t13012;
  t13014 = 3.2*t12808*t13013;
  t13015 = t12305*t12961;
  t13016 = t12305*t12996;
  t13017 = t12996*t12657;
  t13018 = t12496*t12965;
  t13019 = t12496*t13000;
  t13020 = t12496*t13003;
  t13021 = t13015 + t13016 + t12980 + t13017 + t13018 + t13019 + t13020 + t12984;
  t13022 = 3.2*t9689*t13021;
  t13023 = t12994 + t13008 + t13014 + t13022;
  t13028 = -1.*t12975*t12496;
  t13029 = t13028 + t12998;
  t13031 = t12975*t12657;
  t13032 = t13031 + t13018;
  t13034 = t12996*t12496;
  t13035 = t12657*t13000;
  t13036 = t13034 + t12990 + t12991 + t13035;
  t13042 = -1.*t12305*t12996;
  t13043 = -1.*t12496*t13000;
  t13044 = t13042 + t13010 + t13043 + t13012;
  t13058 = 3.2*t12808*t13029;
  t13059 = 3.2*t12818*t13032;
  t13060 = 3.2*t9689*t13036;
  t13061 = 3.2*t12644*t13044;
  t13062 = t13058 + t13059 + t13060 + t13061;
  t13074 = 6.4*t12808*t12644;
  t13075 = 6.4*t12818*t9689;
  t13076 = t13074 + t13075;
  p_output1[0]=var2[5]*(t12698 + t12821 - 0.5*t12791*var2[5]);
  p_output1[1]=var2[5]*(-0.5*t12791*var2[2] - 0.5*(t12850 + t12853 + t8145)*var2[5] - 0.5*t12860*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t12820*var2[2] - 0.5*t12860*var2[5] - 0.5*(t12850 + 6.4*t12818*t12852 + t12853 + 6.4*t12808*t12857 + 3.2*t12857*t12880 + 3.2*t12818*t12884)*var2[6]);
  p_output1[3]=-0.5*t12897*var2[5];
  p_output1[4]=-0.5*t12897*var2[2] - 1.*(t12894 + t12900 + t12901)*var2[5] - 0.5*t12906*var2[6];
  p_output1[5]=-0.5*t12906*var2[5];
  p_output1[6]=var2[5]*(-0.5*(3.2*t12644*(t12524 + t12832) + t12913 + 3.2*(t12883 + t12916)*t9689)*var2[2] - 0.5*t12925*var2[5] - 0.5*t12929*var2[6]);
  p_output1[7]=var2[5]*(-0.5*t12925*var2[2] - 0.5*(t12913 + t12934 + t12936)*var2[5] - 0.5*t12941*var2[6]);
  p_output1[8]=var2[5]*(-0.5*t12929*var2[2] - 0.5*t12941*var2[5] - 0.5*(6.4*t12704*t12808 + 6.4*t12787*t12818 + 3.2*t12814*t12818 + 3.2*t12704*t12880 + t12934 + t12936)*var2[6]);
  p_output1[9]=-0.5*t12697*var2[5];
  p_output1[10]=t12698 + t12821 - 1.*t12791*var2[5];
  p_output1[11]=-0.5*t12820*var2[5];
  p_output1[12]=var2[5]*(-0.5*(3.2*t12644*(-1.*t12496*t12961 - 2.*t12785*t12961 - 2.*t12305*t12965 + t12967 - 1.*t12305*t12970 + t12976) + 3.2*(2.*t12305*t12961 + t12657*t12961 + 2.*t12496*t12965 + t12496*t12970 + t12980 + t12984)*t9689)*var2[5] - 0.5*t13023*var2[6]);
  p_output1[13]=var2[5]*(-0.5*t13023*var2[5] - 0.5*(3.2*t12644*(t12967 + t12976 - 2.*t12785*t12996 + t12997 - 2.*t12305*t13000 + t13004) + 3.2*t12818*t13029 + 3.2*t12880*t13032 + 6.4*t12818*t13036 + 6.4*t12808*t13044 + 3.2*(t12980 + t12984 + 2.*t12305*t12996 + 2.*t12496*t13000 + t13017 + t13020)*t9689)*var2[6]);
  p_output1[14]=-1.*(3.2*t12644*t13013 + 3.2*t12993*t9689)*var2[5] - 0.5*t13062*var2[6];
  p_output1[15]=-0.5*t13062*var2[5];
  p_output1[16]=-0.5*(6.4*Power(t12808,2) + 6.4*t12644*t12818 + 6.4*Power(t12818,2) + 6.4*t12880*t9689)*var2[5]*var2[6];
  p_output1[17]=-0.5*t13076*var2[6];
  p_output1[18]=-0.5*t13076*var2[5];
  p_output1[19]=-0.384*t12880*var2[5]*var2[6];
  p_output1[20]=-0.384*t12818*var2[6];
  p_output1[21]=-0.384*t12818*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec6_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
