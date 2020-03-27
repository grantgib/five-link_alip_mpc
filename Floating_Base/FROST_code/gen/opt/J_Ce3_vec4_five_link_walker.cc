/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:52:16 GMT-04:00
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
  double t4339;
  double t1897;
  double t1899;
  double t1022;
  double t4704;
  double t1009;
  double t4352;
  double t4429;
  double t4446;
  double t4460;
  double t4488;
  double t6595;
  double t6785;
  double t6789;
  double t6812;
  double t6816;
  double t6834;
  double t6883;
  double t6923;
  double t6947;
  double t6795;
  double t4690;
  double t4743;
  double t4750;
  double t4759;
  double t4770;
  double t4780;
  double t4851;
  double t1070;
  double t2098;
  double t2099;
  double t3217;
  double t7030;
  double t4975;
  double t7214;
  double t7274;
  double t7302;
  double t7314;
  double t6806;
  double t7394;
  double t8261;
  double t8355;
  double t8584;
  double t7645;
  double t7654;
  double t8222;
  double t8585;
  double t8613;
  double t8678;
  double t8731;
  double t9547;
  double t9571;
  double t9574;
  double t9134;
  double t9217;
  double t9274;
  double t7006;
  double t7059;
  double t8735;
  double t8750;
  double t8758;
  double t9440;
  double t9452;
  double t9466;
  double t6809;
  double t7137;
  double t7208;
  double t10373;
  double t10374;
  double t10400;
  double t10404;
  double t10405;
  double t10420;
  double t11307;
  double t8705;
  double t8727;
  double t8979;
  double t9116;
  double t9120;
  double t9121;
  double t7334;
  double t11942;
  double t11946;
  double t11947;
  double t11929;
  double t11930;
  double t11935;
  double t12026;
  double t12028;
  double t12031;
  double t11978;
  double t11982;
  double t11983;
  double t11549;
  double t11821;
  double t11822;
  double t11823;
  double t11872;
  double t11902;
  double t11912;
  double t11916;
  double t11917;
  double t11975;
  double t12145;
  double t12148;
  double t12032;
  double t12070;
  double t12157;
  double t12158;
  double t12162;
  double t12163;
  double t12088;
  double t12105;
  double t12107;
  double t12119;
  double t12120;
  double t12121;
  double t12133;
  double t12140;
  double t12191;
  double t12193;
  double t12200;
  double t12209;
  double t12214;
  double t12285;
  double t12286;
  double t12287;
  double t12291;
  double t12292;
  double t12293;
  double t9481;
  double t9583;
  double t9608;
  double t9609;
  double t9669;
  double t10262;
  double t10279;
  double t10280;
  double t10297;
  double t10317;
  double t12100;
  double t12101;
  double t12102;
  double t12104;
  double t12108;
  double t12112;
  double t12113;
  double t12118;
  double t12143;
  double t12153;
  double t12156;
  double t12159;
  double t12165;
  double t12166;
  double t12167;
  double t12168;
  double t12169;
  double t12219;
  double t12222;
  double t12223;
  double t12224;
  double t12228;
  double t12234;
  double t12242;
  double t12246;
  double t12248;
  double t12249;
  double t12260;
  double t12279;
  double t12284;
  double t12345;
  double t12349;
  double t12388;
  double t7395;
  double t12581;
  double t13541;
  double t13557;
  double t13562;
  double t14110;
  double t14118;
  double t14119;
  double t14122;
  double t14136;
  double t14137;
  double t14138;
  double t14165;
  double t14167;
  double t14168;
  double t14179;
  double t14181;
  double t14182;
  double t14189;
  double t14190;
  t4339 = Cos(var1[4]);
  t1897 = Sin(var1[2]);
  t1899 = Sin(var1[3]);
  t1022 = Cos(var1[3]);
  t4704 = Sin(var1[4]);
  t1009 = Cos(var1[2]);
  t4352 = -1.*t4339;
  t4429 = 1. + t4352;
  t4446 = 0.4*t4429;
  t4460 = 0.64*t4339;
  t4488 = t4446 + t4460;
  t6595 = t1022*t4339;
  t6785 = -1.*t1899*t4704;
  t6789 = t6595 + t6785;
  t6812 = t4488*t4704;
  t6816 = -0.24*t4339*t4704;
  t6834 = t6812 + t6816;
  t6883 = t4339*t1899;
  t6923 = t1022*t4704;
  t6947 = t6883 + t6923;
  t6795 = -1.*t1009*t6789;
  t4690 = t4488*t4339;
  t4743 = Power(t4704,2);
  t4750 = 0.24*t4743;
  t4759 = t4690 + t4750;
  t4770 = -1.*t4339*t1899;
  t4780 = -1.*t1022*t4704;
  t4851 = t4770 + t4780;
  t1070 = -1.*t1009*t1022;
  t2098 = t1897*t1899;
  t2099 = t1070 + t2098;
  t3217 = -0.748*t2099;
  t7030 = -1.*t1897*t6789;
  t4975 = -1.*t1897*t4851;
  t7214 = t1022*t1897;
  t7274 = t1009*t1899;
  t7302 = t7214 + t7274;
  t7314 = -0.748*t7302;
  t6806 = t4975 + t6795;
  t7394 = -1.*t1009*t4851;
  t8261 = -1.*t1022*t4339;
  t8355 = t1899*t4704;
  t8584 = t8261 + t8355;
  t7645 = t1009*t4851;
  t7654 = t7645 + t7030;
  t8222 = -3.2*t6834*t7654;
  t8585 = t1009*t8584;
  t8613 = t4975 + t8585;
  t8678 = -3.2*t4759*t8613;
  t8731 = -3.2*t6834*t6806;
  t9547 = -1.*t4488*t4704;
  t9571 = 0.24*t4339*t4704;
  t9574 = t9547 + t9571;
  t9134 = Power(t4339,2);
  t9217 = -0.24*t9134;
  t9274 = t4690 + t9217;
  t7006 = -1.*t1009*t6947;
  t7059 = t7006 + t7030;
  t8735 = -1.*t1897*t8584;
  t8750 = t7394 + t8735;
  t8758 = -3.2*t4759*t8750;
  t9440 = -1.*t1897*t6947;
  t9452 = t1009*t6789;
  t9466 = t9440 + t9452;
  t6809 = -3.2*t4759*t6806;
  t7137 = -3.2*t6834*t7059;
  t7208 = t3217 + t6809 + t7137;
  t10373 = -1.*t1022*t1897;
  t10374 = -1.*t1009*t1899;
  t10400 = t10373 + t10374;
  t10404 = -0.748*t10400;
  t10405 = -3.2*t6834*t9466;
  t10420 = -3.2*t4759*t7654;
  t11307 = t10404 + t10405 + t10420;
  t8705 = t3217 + t8222 + t8678;
  t8727 = -0.5*var2[0]*t8705;
  t8979 = t7314 + t8731 + t8758;
  t9116 = -0.5*var2[1]*t8979;
  t9120 = t8727 + t9116;
  t9121 = var2[3]*t9120;
  t7334 = t1897*t6947;
  t11942 = t1022*t4488;
  t11946 = -0.24*t1899*t4704;
  t11947 = t11942 + t11946;
  t11929 = -1.*t4488*t1899;
  t11930 = -0.24*t1022*t4704;
  t11935 = t11929 + t11930;
  t12026 = t4488*t1899;
  t12028 = 0.24*t1022*t4704;
  t12031 = t12026 + t12028;
  t11978 = -1.*t1022*t4488;
  t11982 = 0.24*t1899*t4704;
  t11983 = t11978 + t11982;
  t11549 = -3.2*t6834*t8613;
  t11821 = t1009*t6947;
  t11822 = t11821 + t8735;
  t11823 = -3.2*t4759*t11822;
  t11872 = t7334 + t8585;
  t11902 = -3.2*t4759*t11872;
  t11912 = t1897*t8584;
  t11916 = t7645 + t11912;
  t11917 = -3.2*t6834*t11916;
  t11975 = -1.*t6947*t11947;
  t12145 = -0.24*t4339*t1899;
  t12148 = t12145 + t11930;
  t12032 = -1.*t12031*t8584;
  t12070 = t4851*t12031;
  t12157 = 0.24*t1022*t4339;
  t12158 = t12157 + t11946;
  t12162 = -0.24*t1022*t4339;
  t12163 = t12162 + t11982;
  t12088 = t11947*t8584;
  t12105 = t1897*t4851;
  t12107 = t12105 + t9452;
  t12119 = t11935*t6789;
  t12120 = t12031*t6789;
  t12121 = t4851*t11947;
  t12133 = t6947*t11947;
  t12140 = t12119 + t12120 + t12121 + t12133;
  t12191 = -1.*t4851*t11935;
  t12193 = -1.*t4851*t12031;
  t12200 = -1.*t6789*t11947;
  t12209 = -1.*t11947*t8584;
  t12214 = t12191 + t12193 + t12200 + t12209;
  t12285 = -3.2*t6834*t12107;
  t12286 = -3.2*t4759*t11916;
  t12287 = t10404 + t12285 + t12286;
  t12291 = -3.2*t4759*t12140;
  t12292 = -3.2*t6834*t12214;
  t12293 = t12291 + t12292;
  t9481 = -3.2*t9274*t9466;
  t9583 = -3.2*t9574*t7654;
  t9608 = t9481 + t8222 + t9583 + t8678;
  t9609 = -0.5*var2[0]*t9608;
  t9669 = -3.2*t9574*t6806;
  t10262 = -3.2*t9274*t7059;
  t10279 = t8731 + t9669 + t10262 + t8758;
  t10280 = -0.5*var2[1]*t10279;
  t10297 = t9609 + t10280;
  t10317 = var2[3]*t10297;
  t12100 = -3.2*t9274*t7654;
  t12101 = -3.2*t9574*t8613;
  t12102 = t12100 + t11549 + t12101 + t11823;
  t12104 = -0.5*var2[1]*t12102;
  t12108 = -3.2*t9274*t12107;
  t12112 = -3.2*t9574*t11916;
  t12113 = t12108 + t11902 + t11917 + t12112;
  t12118 = -0.5*var2[0]*t12113;
  t12143 = -3.2*t9574*t12140;
  t12153 = -1.*t12148*t6789;
  t12156 = -1.*t4851*t11947;
  t12159 = -1.*t4851*t12158;
  t12165 = -1.*t4851*t12163;
  t12166 = -1.*t11935*t8584;
  t12167 = -1.*t12148*t8584;
  t12168 = t12153 + t12156 + t11975 + t12159 + t12165 + t12166 + t12167 + t12032;
  t12169 = -3.2*t6834*t12168;
  t12219 = -3.2*t9274*t12214;
  t12222 = t4851*t11935;
  t12223 = t4851*t12148;
  t12224 = t12148*t6947;
  t12228 = t6789*t11947;
  t12234 = t6789*t12158;
  t12242 = t6789*t12163;
  t12246 = t12222 + t12223 + t12070 + t12224 + t12228 + t12234 + t12242 + t12088;
  t12248 = -3.2*t4759*t12246;
  t12249 = t12143 + t12169 + t12219 + t12248;
  t12260 = -0.5*var2[2]*t12249;
  t12279 = t12104 + t12118 + t12260;
  t12284 = var2[3]*t12279;
  t12345 = -1.*t4488*t4339;
  t12349 = 0.24*t9134;
  t12388 = t12345 + t12349;
  t7395 = t1897*t6789;
  t12581 = t11821 + t7395;
  t13541 = -1.*t12031*t6789;
  t13557 = t13541 + t12156;
  t13562 = t12031*t6947;
  t14110 = t13562 + t12228;
  t14118 = t12148*t6789;
  t14119 = t6947*t12158;
  t14122 = t14118 + t12120 + t12121 + t14119;
  t14136 = -1.*t4851*t12148;
  t14137 = -1.*t6789*t12158;
  t14138 = t14136 + t12193 + t14137 + t12209;
  t14165 = -3.2*t9574*t12107;
  t14167 = -3.2*t9274*t12581;
  t14168 = t12285 + t14165 + t14167 + t12286;
  t14179 = -3.2*t9274*t13557;
  t14181 = -3.2*t9574*t14110;
  t14182 = -3.2*t4759*t14122;
  t14189 = -3.2*t6834*t14138;
  t14190 = t14179 + t14181 + t14182 + t14189;
  p_output1[0]=(-0.5*t7208*var2[0] - 0.5*(t7314 - 3.2*t6834*(t6795 + t7334) - 3.2*t4759*(t7394 + t7395))*var2[1])*var2[3];
  p_output1[1]=t9121;
  p_output1[2]=t10317;
  p_output1[3]=-0.5*t11307*var2[3];
  p_output1[4]=-0.5*t7208*var2[3];
  p_output1[5]=-0.5*t11307*var2[0] - 0.5*t7208*var2[1];
  p_output1[6]=t9121;
  p_output1[7]=(-0.5*(t11902 + t11917 + t3217)*var2[0] - 0.5*(t11549 + t11823 + t7314)*var2[1] - 0.5*(-3.2*t4759*(t12070 + t12088 + 2.*t11935*t4851 + 2.*t11947*t6789 + t11983*t6789 + t11935*t6947) - 3.2*t6834*(t11975 + t12032 - 2.*t11947*t4851 - 1.*t11983*t4851 - 1.*t11935*t6789 - 2.*t11935*t8584))*var2[2])*var2[3];
  p_output1[8]=t12284;
  p_output1[9]=-0.5*t12287*var2[3];
  p_output1[10]=-0.5*t8705*var2[3];
  p_output1[11]=-0.5*t12293*var2[3];
  p_output1[12]=-0.5*t12287*var2[0] - 0.5*t8705*var2[1] - 0.5*t12293*var2[2];
  p_output1[13]=t10317;
  p_output1[14]=t12284;
  p_output1[15]=var2[3]*(-0.5*(t11902 + t11917 - 3.2*t12107*t12388 - 6.4*t12107*t9274 - 6.4*t11916*t9574 - 3.2*t12581*t9574)*var2[0] - 0.5*(t11549 + t11823 - 3.2*t12388*t7654 - 6.4*t7654*t9274 - 6.4*t8613*t9574 - 3.2*t9466*t9574)*var2[1] - 0.5*(-3.2*t12388*t14110 - 3.2*t4759*(t12070 + t12088 + t12224 + t12242 + 2.*t12148*t4851 + 2.*t12158*t6789) - 3.2*t6834*(t11975 + t12032 + t12153 + t12165 - 2.*t12158*t4851 - 2.*t12148*t8584) - 6.4*t14138*t9274 - 3.2*t13557*t9574 - 6.4*t14122*t9574)*var2[2] - 0.5*(-6.4*t12388*t4759 - 6.4*Power(t9274,2) - 6.4*t6834*t9574 - 6.4*Power(t9574,2))*var2[3] + 0.384*t12388*var2[4]);
  p_output1[16]=-0.5*t14168*var2[3];
  p_output1[17]=-0.5*t9608*var2[3];
  p_output1[18]=-0.5*t14190*var2[3];
  p_output1[19]=-0.5*t14168*var2[0] - 0.5*t9608*var2[1] - 0.5*t14190*var2[2] - 1.*(-6.4*t6834*t9274 - 6.4*t4759*t9574)*var2[3] + 0.384*t9574*var2[4];
  p_output1[20]=0.384*t9574*var2[3];
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
