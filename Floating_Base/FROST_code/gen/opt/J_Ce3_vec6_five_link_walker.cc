/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:50:32 GMT-04:00
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
  double t4981;
  double t2594;
  double t2610;
  double t2240;
  double t6864;
  double t596;
  double t5016;
  double t5017;
  double t5026;
  double t5549;
  double t5834;
  double t7067;
  double t9978;
  double t10155;
  double t10767;
  double t10768;
  double t10844;
  double t10852;
  double t10854;
  double t10857;
  double t10693;
  double t6718;
  double t6961;
  double t6981;
  double t6991;
  double t6996;
  double t7012;
  double t7039;
  double t2394;
  double t2627;
  double t2819;
  double t4972;
  double t10859;
  double t7063;
  double t10975;
  double t10976;
  double t10986;
  double t10987;
  double t10694;
  double t11012;
  double t11315;
  double t11316;
  double t11362;
  double t11156;
  double t11196;
  double t11206;
  double t11409;
  double t11530;
  double t11552;
  double t12170;
  double t14074;
  double t14075;
  double t14078;
  double t13764;
  double t13770;
  double t13792;
  double t10858;
  double t10865;
  double t12771;
  double t12801;
  double t12938;
  double t13808;
  double t14044;
  double t14065;
  double t10766;
  double t10908;
  double t10973;
  double t14475;
  double t14478;
  double t14479;
  double t14480;
  double t14481;
  double t14482;
  double t14491;
  double t11576;
  double t12167;
  double t12963;
  double t13207;
  double t13526;
  double t13757;
  double t10988;
  double t14623;
  double t14627;
  double t14632;
  double t14616;
  double t14620;
  double t14621;
  double t14756;
  double t14757;
  double t14758;
  double t14653;
  double t14751;
  double t14752;
  double t14535;
  double t14537;
  double t14538;
  double t14541;
  double t14605;
  double t14606;
  double t14607;
  double t14609;
  double t14610;
  double t14641;
  double t14900;
  double t14901;
  double t14759;
  double t14765;
  double t14906;
  double t14908;
  double t14915;
  double t14953;
  double t14785;
  double t14806;
  double t14807;
  double t14837;
  double t14865;
  double t14871;
  double t14872;
  double t14873;
  double t14963;
  double t14964;
  double t14965;
  double t14966;
  double t14970;
  double t14991;
  double t14992;
  double t14993;
  double t15010;
  double t15022;
  double t15031;
  double t14066;
  double t14119;
  double t14135;
  double t14139;
  double t14142;
  double t14144;
  double t14164;
  double t14217;
  double t14466;
  double t14471;
  double t14802;
  double t14803;
  double t14804;
  double t14805;
  double t14808;
  double t14813;
  double t14835;
  double t14836;
  double t14886;
  double t14902;
  double t14904;
  double t14910;
  double t14954;
  double t14955;
  double t14957;
  double t14959;
  double t14962;
  double t14974;
  double t14975;
  double t14976;
  double t14977;
  double t14979;
  double t14980;
  double t14981;
  double t14983;
  double t14984;
  double t14985;
  double t14986;
  double t14987;
  double t14989;
  double t15070;
  double t15299;
  double t15303;
  double t11015;
  double t17617;
  double t17672;
  double t17677;
  double t17684;
  double t17695;
  double t17699;
  double t17701;
  double t17702;
  double t17719;
  double t17720;
  double t17721;
  double t17806;
  double t17810;
  double t17811;
  double t17820;
  double t17821;
  double t17824;
  double t17825;
  double t17828;
  t4981 = Cos(var1[6]);
  t2594 = Sin(var1[2]);
  t2610 = Sin(var1[5]);
  t2240 = Cos(var1[5]);
  t6864 = Sin(var1[6]);
  t596 = Cos(var1[2]);
  t5016 = -1.*t4981;
  t5017 = 1. + t5016;
  t5026 = 0.4*t5017;
  t5549 = 0.64*t4981;
  t5834 = t5026 + t5549;
  t7067 = t2240*t4981;
  t9978 = -1.*t2610*t6864;
  t10155 = t7067 + t9978;
  t10767 = t5834*t6864;
  t10768 = -0.24*t4981*t6864;
  t10844 = t10767 + t10768;
  t10852 = t4981*t2610;
  t10854 = t2240*t6864;
  t10857 = t10852 + t10854;
  t10693 = -1.*t596*t10155;
  t6718 = t5834*t4981;
  t6961 = Power(t6864,2);
  t6981 = 0.24*t6961;
  t6991 = t6718 + t6981;
  t6996 = -1.*t4981*t2610;
  t7012 = -1.*t2240*t6864;
  t7039 = t6996 + t7012;
  t2394 = -1.*t596*t2240;
  t2627 = t2594*t2610;
  t2819 = t2394 + t2627;
  t4972 = -0.748*t2819;
  t10859 = -1.*t2594*t10155;
  t7063 = -1.*t2594*t7039;
  t10975 = t2240*t2594;
  t10976 = t596*t2610;
  t10986 = t10975 + t10976;
  t10987 = -0.748*t10986;
  t10694 = t7063 + t10693;
  t11012 = -1.*t596*t7039;
  t11315 = -1.*t2240*t4981;
  t11316 = t2610*t6864;
  t11362 = t11315 + t11316;
  t11156 = t596*t7039;
  t11196 = t11156 + t10859;
  t11206 = -3.2*t10844*t11196;
  t11409 = t596*t11362;
  t11530 = t7063 + t11409;
  t11552 = -3.2*t6991*t11530;
  t12170 = -3.2*t10844*t10694;
  t14074 = -1.*t5834*t6864;
  t14075 = 0.24*t4981*t6864;
  t14078 = t14074 + t14075;
  t13764 = Power(t4981,2);
  t13770 = -0.24*t13764;
  t13792 = t6718 + t13770;
  t10858 = -1.*t596*t10857;
  t10865 = t10858 + t10859;
  t12771 = -1.*t2594*t11362;
  t12801 = t11012 + t12771;
  t12938 = -3.2*t6991*t12801;
  t13808 = -1.*t2594*t10857;
  t14044 = t596*t10155;
  t14065 = t13808 + t14044;
  t10766 = -3.2*t6991*t10694;
  t10908 = -3.2*t10844*t10865;
  t10973 = t4972 + t10766 + t10908;
  t14475 = -1.*t2240*t2594;
  t14478 = -1.*t596*t2610;
  t14479 = t14475 + t14478;
  t14480 = -0.748*t14479;
  t14481 = -3.2*t10844*t14065;
  t14482 = -3.2*t6991*t11196;
  t14491 = t14480 + t14481 + t14482;
  t11576 = t4972 + t11206 + t11552;
  t12167 = -0.5*var2[0]*t11576;
  t12963 = t10987 + t12170 + t12938;
  t13207 = -0.5*var2[1]*t12963;
  t13526 = t12167 + t13207;
  t13757 = var2[5]*t13526;
  t10988 = t2594*t10857;
  t14623 = t2240*t5834;
  t14627 = -0.24*t2610*t6864;
  t14632 = t14623 + t14627;
  t14616 = -1.*t5834*t2610;
  t14620 = -0.24*t2240*t6864;
  t14621 = t14616 + t14620;
  t14756 = t5834*t2610;
  t14757 = 0.24*t2240*t6864;
  t14758 = t14756 + t14757;
  t14653 = -1.*t2240*t5834;
  t14751 = 0.24*t2610*t6864;
  t14752 = t14653 + t14751;
  t14535 = -3.2*t10844*t11530;
  t14537 = t596*t10857;
  t14538 = t14537 + t12771;
  t14541 = -3.2*t6991*t14538;
  t14605 = t10988 + t11409;
  t14606 = -3.2*t6991*t14605;
  t14607 = t2594*t11362;
  t14609 = t11156 + t14607;
  t14610 = -3.2*t10844*t14609;
  t14641 = -1.*t10857*t14632;
  t14900 = -0.24*t4981*t2610;
  t14901 = t14900 + t14620;
  t14759 = -1.*t14758*t11362;
  t14765 = t7039*t14758;
  t14906 = 0.24*t2240*t4981;
  t14908 = t14906 + t14627;
  t14915 = -0.24*t2240*t4981;
  t14953 = t14915 + t14751;
  t14785 = t14632*t11362;
  t14806 = t2594*t7039;
  t14807 = t14806 + t14044;
  t14837 = t14621*t10155;
  t14865 = t14758*t10155;
  t14871 = t7039*t14632;
  t14872 = t10857*t14632;
  t14873 = t14837 + t14865 + t14871 + t14872;
  t14963 = -1.*t7039*t14621;
  t14964 = -1.*t7039*t14758;
  t14965 = -1.*t10155*t14632;
  t14966 = -1.*t14632*t11362;
  t14970 = t14963 + t14964 + t14965 + t14966;
  t14991 = -3.2*t10844*t14807;
  t14992 = -3.2*t6991*t14609;
  t14993 = t14480 + t14991 + t14992;
  t15010 = -3.2*t6991*t14873;
  t15022 = -3.2*t10844*t14970;
  t15031 = t15010 + t15022;
  t14066 = -3.2*t13792*t14065;
  t14119 = -3.2*t14078*t11196;
  t14135 = t14066 + t11206 + t14119 + t11552;
  t14139 = -0.5*var2[0]*t14135;
  t14142 = -3.2*t14078*t10694;
  t14144 = -3.2*t13792*t10865;
  t14164 = t12170 + t14142 + t14144 + t12938;
  t14217 = -0.5*var2[1]*t14164;
  t14466 = t14139 + t14217;
  t14471 = var2[5]*t14466;
  t14802 = -3.2*t13792*t11196;
  t14803 = -3.2*t14078*t11530;
  t14804 = t14802 + t14535 + t14803 + t14541;
  t14805 = -0.5*var2[1]*t14804;
  t14808 = -3.2*t13792*t14807;
  t14813 = -3.2*t14078*t14609;
  t14835 = t14808 + t14606 + t14610 + t14813;
  t14836 = -0.5*var2[0]*t14835;
  t14886 = -3.2*t14078*t14873;
  t14902 = -1.*t14901*t10155;
  t14904 = -1.*t7039*t14632;
  t14910 = -1.*t7039*t14908;
  t14954 = -1.*t7039*t14953;
  t14955 = -1.*t14621*t11362;
  t14957 = -1.*t14901*t11362;
  t14959 = t14902 + t14904 + t14641 + t14910 + t14954 + t14955 + t14957 + t14759;
  t14962 = -3.2*t10844*t14959;
  t14974 = -3.2*t13792*t14970;
  t14975 = t7039*t14621;
  t14976 = t7039*t14901;
  t14977 = t14901*t10857;
  t14979 = t10155*t14632;
  t14980 = t10155*t14908;
  t14981 = t10155*t14953;
  t14983 = t14975 + t14976 + t14765 + t14977 + t14979 + t14980 + t14981 + t14785;
  t14984 = -3.2*t6991*t14983;
  t14985 = t14886 + t14962 + t14974 + t14984;
  t14986 = -0.5*var2[2]*t14985;
  t14987 = t14805 + t14836 + t14986;
  t14989 = var2[5]*t14987;
  t15070 = -1.*t5834*t4981;
  t15299 = 0.24*t13764;
  t15303 = t15070 + t15299;
  t11015 = t2594*t10155;
  t17617 = t14537 + t11015;
  t17672 = -1.*t14758*t10155;
  t17677 = t17672 + t14904;
  t17684 = t14758*t10857;
  t17695 = t17684 + t14979;
  t17699 = t14901*t10155;
  t17701 = t10857*t14908;
  t17702 = t17699 + t14865 + t14871 + t17701;
  t17719 = -1.*t7039*t14901;
  t17720 = -1.*t10155*t14908;
  t17721 = t17719 + t14964 + t17720 + t14966;
  t17806 = -3.2*t14078*t14807;
  t17810 = -3.2*t13792*t17617;
  t17811 = t14991 + t17806 + t17810 + t14992;
  t17820 = -3.2*t13792*t17677;
  t17821 = -3.2*t14078*t17695;
  t17824 = -3.2*t6991*t17702;
  t17825 = -3.2*t10844*t17721;
  t17828 = t17820 + t17821 + t17824 + t17825;
  p_output1[0]=(-0.5*t10973*var2[0] - 0.5*(t10987 - 3.2*t10844*(t10693 + t10988) - 3.2*(t11012 + t11015)*t6991)*var2[1])*var2[5];
  p_output1[1]=t13757;
  p_output1[2]=t14471;
  p_output1[3]=-0.5*t14491*var2[5];
  p_output1[4]=-0.5*t10973*var2[5];
  p_output1[5]=-0.5*t14491*var2[0] - 0.5*t10973*var2[1];
  p_output1[6]=t13757;
  p_output1[7]=(-0.5*(t14606 + t14610 + t4972)*var2[0] - 0.5*(t10987 + t14535 + t14541)*var2[1] - 0.5*(-3.2*t6991*(t10857*t14621 + 2.*t10155*t14632 + t10155*t14752 + t14765 + t14785 + 2.*t14621*t7039) - 3.2*t10844*(-1.*t10155*t14621 - 2.*t11362*t14621 + t14641 + t14759 - 2.*t14632*t7039 - 1.*t14752*t7039))*var2[2])*var2[5];
  p_output1[8]=t14989;
  p_output1[9]=-0.5*t14993*var2[5];
  p_output1[10]=-0.5*t11576*var2[5];
  p_output1[11]=-0.5*t15031*var2[5];
  p_output1[12]=-0.5*t14993*var2[0] - 0.5*t11576*var2[1] - 0.5*t15031*var2[2];
  p_output1[13]=t14471;
  p_output1[14]=t14989;
  p_output1[15]=var2[5]*(-0.5*(t14606 - 6.4*t14078*t14609 + t14610 - 6.4*t13792*t14807 - 3.2*t14807*t15303 - 3.2*t14078*t17617)*var2[0] - 0.5*(-6.4*t11196*t13792 - 6.4*t11530*t14078 - 3.2*t14065*t14078 + t14535 + t14541 - 3.2*t11196*t15303)*var2[1] - 0.5*(-3.2*t14078*t17677 - 3.2*t15303*t17695 - 6.4*t14078*t17702 - 6.4*t13792*t17721 - 3.2*t6991*(t14765 + t14785 + 2.*t10155*t14908 + t14977 + t14981 + 2.*t14901*t7039) - 3.2*t10844*(t14641 + t14759 - 2.*t11362*t14901 + t14902 + t14954 - 2.*t14908*t7039))*var2[2] - 0.5*(-6.4*Power(t13792,2) - 6.4*t10844*t14078 - 6.4*Power(t14078,2) - 6.4*t15303*t6991)*var2[5] + 0.384*t15303*var2[6]);
  p_output1[16]=-0.5*t17811*var2[5];
  p_output1[17]=-0.5*t14135*var2[5];
  p_output1[18]=-0.5*t17828*var2[5];
  p_output1[19]=-0.5*t17811*var2[0] - 0.5*t14135*var2[1] - 0.5*t17828*var2[2] - 1.*(-6.4*t10844*t13792 - 6.4*t14078*t6991)*var2[5] + 0.384*t14078*var2[6];
  p_output1[20]=0.384*t14078*var2[5];
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

#include "J_Ce3_vec6_five_link_walker.hh"

namespace RightStance
{

void J_Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
