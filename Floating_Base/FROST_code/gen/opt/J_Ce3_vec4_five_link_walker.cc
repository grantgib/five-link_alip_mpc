/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:00 GMT-04:00
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
  double t1443;
  double t1418;
  double t1421;
  double t1411;
  double t3571;
  double t1410;
  double t1444;
  double t1445;
  double t1450;
  double t1451;
  double t1452;
  double t7564;
  double t7832;
  double t8254;
  double t9173;
  double t9250;
  double t9258;
  double t9364;
  double t9365;
  double t9423;
  double t8897;
  double t3043;
  double t4116;
  double t4200;
  double t4212;
  double t4243;
  double t4275;
  double t4298;
  double t1417;
  double t1422;
  double t1432;
  double t1440;
  double t10399;
  double t4811;
  double t11752;
  double t11753;
  double t11759;
  double t11760;
  double t8982;
  double t14283;
  double t14564;
  double t14608;
  double t14609;
  double t14552;
  double t14553;
  double t14561;
  double t14610;
  double t14611;
  double t14618;
  double t14624;
  double t14774;
  double t14778;
  double t14779;
  double t14632;
  double t14633;
  double t14634;
  double t10345;
  double t10400;
  double t14625;
  double t14626;
  double t14627;
  double t14635;
  double t14636;
  double t14772;
  double t8992;
  double t10401;
  double t11600;
  double t14796;
  double t14797;
  double t14801;
  double t14802;
  double t14803;
  double t14804;
  double t14808;
  double t14622;
  double t14623;
  double t14628;
  double t14629;
  double t14630;
  double t14631;
  double t11768;
  double t14831;
  double t14832;
  double t14833;
  double t14827;
  double t14828;
  double t14829;
  double t14849;
  double t14850;
  double t14851;
  double t14839;
  double t14840;
  double t14846;
  double t14814;
  double t14815;
  double t14816;
  double t14817;
  double t14820;
  double t14821;
  double t14822;
  double t14823;
  double t14824;
  double t14838;
  double t14975;
  double t14976;
  double t14852;
  double t14866;
  double t14982;
  double t14983;
  double t14985;
  double t14986;
  double t14884;
  double t14907;
  double t14908;
  double t14913;
  double t14914;
  double t14915;
  double t14916;
  double t14917;
  double t14995;
  double t14996;
  double t14997;
  double t14998;
  double t14999;
  double t15016;
  double t15017;
  double t15018;
  double t15021;
  double t15022;
  double t15023;
  double t14773;
  double t14780;
  double t14781;
  double t14782;
  double t14783;
  double t14784;
  double t14785;
  double t14786;
  double t14787;
  double t14795;
  double t14901;
  double t14904;
  double t14905;
  double t14906;
  double t14909;
  double t14910;
  double t14911;
  double t14912;
  double t14918;
  double t14977;
  double t14981;
  double t14984;
  double t14987;
  double t14988;
  double t14989;
  double t14990;
  double t14994;
  double t15000;
  double t15004;
  double t15005;
  double t15006;
  double t15007;
  double t15008;
  double t15009;
  double t15010;
  double t15011;
  double t15012;
  double t15013;
  double t15014;
  double t15015;
  double t15029;
  double t15030;
  double t15034;
  double t14478;
  double t15057;
  double t15062;
  double t15063;
  double t15065;
  double t15066;
  double t15068;
  double t15069;
  double t15070;
  double t15076;
  double t15077;
  double t15078;
  double t15088;
  double t15089;
  double t15090;
  double t15093;
  double t15094;
  double t15095;
  double t15096;
  double t15097;
  t1443 = Cos(var1[4]);
  t1418 = Sin(var1[2]);
  t1421 = Sin(var1[3]);
  t1411 = Cos(var1[3]);
  t3571 = Sin(var1[4]);
  t1410 = Cos(var1[2]);
  t1444 = -1.*t1443;
  t1445 = 1. + t1444;
  t1450 = 0.4*t1445;
  t1451 = 0.64*t1443;
  t1452 = t1450 + t1451;
  t7564 = t1411*t1443;
  t7832 = -1.*t1421*t3571;
  t8254 = t7564 + t7832;
  t9173 = t1452*t3571;
  t9250 = -0.24*t1443*t3571;
  t9258 = t9173 + t9250;
  t9364 = t1443*t1421;
  t9365 = t1411*t3571;
  t9423 = t9364 + t9365;
  t8897 = -1.*t1410*t8254;
  t3043 = t1452*t1443;
  t4116 = Power(t3571,2);
  t4200 = 0.24*t4116;
  t4212 = t3043 + t4200;
  t4243 = -1.*t1443*t1421;
  t4275 = -1.*t1411*t3571;
  t4298 = t4243 + t4275;
  t1417 = -1.*t1410*t1411;
  t1422 = t1418*t1421;
  t1432 = t1417 + t1422;
  t1440 = -0.748*t1432;
  t10399 = -1.*t1418*t8254;
  t4811 = -1.*t1418*t4298;
  t11752 = t1411*t1418;
  t11753 = t1410*t1421;
  t11759 = t11752 + t11753;
  t11760 = -0.748*t11759;
  t8982 = t4811 + t8897;
  t14283 = -1.*t1410*t4298;
  t14564 = -1.*t1411*t1443;
  t14608 = t1421*t3571;
  t14609 = t14564 + t14608;
  t14552 = t1410*t4298;
  t14553 = t14552 + t10399;
  t14561 = -3.2*t9258*t14553;
  t14610 = t1410*t14609;
  t14611 = t4811 + t14610;
  t14618 = -3.2*t4212*t14611;
  t14624 = -3.2*t9258*t8982;
  t14774 = -1.*t1452*t3571;
  t14778 = 0.24*t1443*t3571;
  t14779 = t14774 + t14778;
  t14632 = Power(t1443,2);
  t14633 = -0.24*t14632;
  t14634 = t3043 + t14633;
  t10345 = -1.*t1410*t9423;
  t10400 = t10345 + t10399;
  t14625 = -1.*t1418*t14609;
  t14626 = t14283 + t14625;
  t14627 = -3.2*t4212*t14626;
  t14635 = -1.*t1418*t9423;
  t14636 = t1410*t8254;
  t14772 = t14635 + t14636;
  t8992 = -3.2*t4212*t8982;
  t10401 = -3.2*t9258*t10400;
  t11600 = t1440 + t8992 + t10401;
  t14796 = -1.*t1411*t1418;
  t14797 = -1.*t1410*t1421;
  t14801 = t14796 + t14797;
  t14802 = -0.748*t14801;
  t14803 = -3.2*t9258*t14772;
  t14804 = -3.2*t4212*t14553;
  t14808 = t14802 + t14803 + t14804;
  t14622 = t1440 + t14561 + t14618;
  t14623 = -0.5*var2[0]*t14622;
  t14628 = t11760 + t14624 + t14627;
  t14629 = -0.5*var2[1]*t14628;
  t14630 = t14623 + t14629;
  t14631 = var2[3]*t14630;
  t11768 = t1418*t9423;
  t14831 = t1411*t1452;
  t14832 = -0.24*t1421*t3571;
  t14833 = t14831 + t14832;
  t14827 = -1.*t1452*t1421;
  t14828 = -0.24*t1411*t3571;
  t14829 = t14827 + t14828;
  t14849 = t1452*t1421;
  t14850 = 0.24*t1411*t3571;
  t14851 = t14849 + t14850;
  t14839 = -1.*t1411*t1452;
  t14840 = 0.24*t1421*t3571;
  t14846 = t14839 + t14840;
  t14814 = -3.2*t9258*t14611;
  t14815 = t1410*t9423;
  t14816 = t14815 + t14625;
  t14817 = -3.2*t4212*t14816;
  t14820 = t11768 + t14610;
  t14821 = -3.2*t4212*t14820;
  t14822 = t1418*t14609;
  t14823 = t14552 + t14822;
  t14824 = -3.2*t9258*t14823;
  t14838 = -1.*t9423*t14833;
  t14975 = -0.24*t1443*t1421;
  t14976 = t14975 + t14828;
  t14852 = -1.*t14851*t14609;
  t14866 = t4298*t14851;
  t14982 = 0.24*t1411*t1443;
  t14983 = t14982 + t14832;
  t14985 = -0.24*t1411*t1443;
  t14986 = t14985 + t14840;
  t14884 = t14833*t14609;
  t14907 = t1418*t4298;
  t14908 = t14907 + t14636;
  t14913 = t14829*t8254;
  t14914 = t14851*t8254;
  t14915 = t4298*t14833;
  t14916 = t9423*t14833;
  t14917 = t14913 + t14914 + t14915 + t14916;
  t14995 = -1.*t4298*t14829;
  t14996 = -1.*t4298*t14851;
  t14997 = -1.*t8254*t14833;
  t14998 = -1.*t14833*t14609;
  t14999 = t14995 + t14996 + t14997 + t14998;
  t15016 = -3.2*t9258*t14908;
  t15017 = -3.2*t4212*t14823;
  t15018 = t14802 + t15016 + t15017;
  t15021 = -3.2*t4212*t14917;
  t15022 = -3.2*t9258*t14999;
  t15023 = t15021 + t15022;
  t14773 = -3.2*t14634*t14772;
  t14780 = -3.2*t14779*t14553;
  t14781 = t14773 + t14561 + t14780 + t14618;
  t14782 = -0.5*var2[0]*t14781;
  t14783 = -3.2*t14779*t8982;
  t14784 = -3.2*t14634*t10400;
  t14785 = t14624 + t14783 + t14784 + t14627;
  t14786 = -0.5*var2[1]*t14785;
  t14787 = t14782 + t14786;
  t14795 = var2[3]*t14787;
  t14901 = -3.2*t14634*t14553;
  t14904 = -3.2*t14779*t14611;
  t14905 = t14901 + t14814 + t14904 + t14817;
  t14906 = -0.5*var2[1]*t14905;
  t14909 = -3.2*t14634*t14908;
  t14910 = -3.2*t14779*t14823;
  t14911 = t14909 + t14821 + t14824 + t14910;
  t14912 = -0.5*var2[0]*t14911;
  t14918 = -3.2*t14779*t14917;
  t14977 = -1.*t14976*t8254;
  t14981 = -1.*t4298*t14833;
  t14984 = -1.*t4298*t14983;
  t14987 = -1.*t4298*t14986;
  t14988 = -1.*t14829*t14609;
  t14989 = -1.*t14976*t14609;
  t14990 = t14977 + t14981 + t14838 + t14984 + t14987 + t14988 + t14989 + t14852;
  t14994 = -3.2*t9258*t14990;
  t15000 = -3.2*t14634*t14999;
  t15004 = t4298*t14829;
  t15005 = t4298*t14976;
  t15006 = t14976*t9423;
  t15007 = t8254*t14833;
  t15008 = t8254*t14983;
  t15009 = t8254*t14986;
  t15010 = t15004 + t15005 + t14866 + t15006 + t15007 + t15008 + t15009 + t14884;
  t15011 = -3.2*t4212*t15010;
  t15012 = t14918 + t14994 + t15000 + t15011;
  t15013 = -0.5*var2[2]*t15012;
  t15014 = t14906 + t14912 + t15013;
  t15015 = var2[3]*t15014;
  t15029 = -1.*t1452*t1443;
  t15030 = 0.24*t14632;
  t15034 = t15029 + t15030;
  t14478 = t1418*t8254;
  t15057 = t14815 + t14478;
  t15062 = -1.*t14851*t8254;
  t15063 = t15062 + t14981;
  t15065 = t14851*t9423;
  t15066 = t15065 + t15007;
  t15068 = t14976*t8254;
  t15069 = t9423*t14983;
  t15070 = t15068 + t14914 + t14915 + t15069;
  t15076 = -1.*t4298*t14976;
  t15077 = -1.*t8254*t14983;
  t15078 = t15076 + t14996 + t15077 + t14998;
  t15088 = -3.2*t14779*t14908;
  t15089 = -3.2*t14634*t15057;
  t15090 = t15016 + t15088 + t15089 + t15017;
  t15093 = -3.2*t14634*t15063;
  t15094 = -3.2*t14779*t15066;
  t15095 = -3.2*t4212*t15070;
  t15096 = -3.2*t9258*t15078;
  t15097 = t15093 + t15094 + t15095 + t15096;
  p_output1[0]=(-0.5*t11600*var2[0] - 0.5*(t11760 - 3.2*(t14283 + t14478)*t4212 - 3.2*(t11768 + t8897)*t9258)*var2[1])*var2[3];
  p_output1[1]=t14631;
  p_output1[2]=t14795;
  p_output1[3]=-0.5*t14808*var2[3];
  p_output1[4]=-0.5*t11600*var2[3];
  p_output1[5]=-0.5*t14808*var2[0] - 0.5*t11600*var2[1];
  p_output1[6]=t14631;
  p_output1[7]=(-0.5*(t1440 + t14821 + t14824)*var2[0] - 0.5*(t11760 + t14814 + t14817)*var2[1] - 0.5*(-3.2*(-2.*t14609*t14829 + t14838 + t14852 - 2.*t14833*t4298 - 1.*t14846*t4298 - 1.*t14829*t8254)*t9258 - 3.2*t4212*(t14866 + t14884 + 2.*t14829*t4298 + 2.*t14833*t8254 + t14846*t8254 + t14829*t9423))*var2[2])*var2[3];
  p_output1[8]=t15015;
  p_output1[9]=-0.5*t15018*var2[3];
  p_output1[10]=-0.5*t14622*var2[3];
  p_output1[11]=-0.5*t15023*var2[3];
  p_output1[12]=-0.5*t15018*var2[0] - 0.5*t14622*var2[1] - 0.5*t15023*var2[2];
  p_output1[13]=t14795;
  p_output1[14]=t15015;
  p_output1[15]=var2[3]*(-0.5*(t14821 - 6.4*t14779*t14823 + t14824 - 6.4*t14634*t14908 - 3.2*t14908*t15034 - 3.2*t14779*t15057)*var2[0] - 0.5*(-6.4*t14553*t14634 - 6.4*t14611*t14779 - 3.2*t14772*t14779 + t14814 + t14817 - 3.2*t14553*t15034)*var2[1] - 0.5*(-3.2*t14779*t15063 - 3.2*t15034*t15066 - 6.4*t14779*t15070 - 6.4*t14634*t15078 - 3.2*t4212*(t14866 + t14884 + t15006 + t15009 + 2.*t14976*t4298 + 2.*t14983*t8254) - 3.2*(t14838 + t14852 - 2.*t14609*t14976 + t14977 + t14987 - 2.*t14983*t4298)*t9258)*var2[2] - 0.5*(-6.4*Power(t14634,2) - 6.4*Power(t14779,2) - 6.4*t15034*t4212 - 6.4*t14779*t9258)*var2[3] + 0.384*t15034*var2[4]);
  p_output1[16]=-0.5*t15090*var2[3];
  p_output1[17]=-0.5*t14781*var2[3];
  p_output1[18]=-0.5*t15097*var2[3];
  p_output1[19]=-0.5*t15090*var2[0] - 0.5*t14781*var2[1] - 0.5*t15097*var2[2] - 1.*(-6.4*t14779*t4212 - 6.4*t14634*t9258)*var2[3] + 0.384*t14779*var2[4];
  p_output1[20]=0.384*t14779*var2[3];
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

#include "J_Ce3_vec4_five_link_walker.hh"

namespace RightStance
{

void J_Ce3_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
