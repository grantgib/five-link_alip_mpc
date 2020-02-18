/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:22:44 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1780;
  double t1709;
  double t1710;
  double t1101;
  double t2208;
  double t985;
  double t1942;
  double t2112;
  double t2116;
  double t2121;
  double t2128;
  double t2649;
  double t2666;
  double t2675;
  double t3119;
  double t3191;
  double t7489;
  double t7490;
  double t7537;
  double t7538;
  double t2772;
  double t2192;
  double t2230;
  double t2239;
  double t2241;
  double t2244;
  double t2355;
  double t2356;
  double t1638;
  double t1735;
  double t1752;
  double t1776;
  double t7547;
  double t2359;
  double t7560;
  double t7561;
  double t7562;
  double t7563;
  double t2900;
  double t7785;
  double t7829;
  double t7830;
  double t7832;
  double t7824;
  double t7827;
  double t7828;
  double t7835;
  double t7836;
  double t7837;
  double t7840;
  double t7914;
  double t7915;
  double t7916;
  double t7848;
  double t7849;
  double t7906;
  double t7546;
  double t7554;
  double t7841;
  double t7842;
  double t7843;
  double t7907;
  double t7908;
  double t7912;
  double t2931;
  double t7555;
  double t7558;
  double t7929;
  double t7930;
  double t7931;
  double t7935;
  double t7936;
  double t7937;
  double t7938;
  double t7838;
  double t7839;
  double t7844;
  double t7845;
  double t7846;
  double t7847;
  double t7782;
  double t7961;
  double t7965;
  double t7966;
  double t7957;
  double t7958;
  double t7959;
  double t7979;
  double t7980;
  double t7981;
  double t7974;
  double t7975;
  double t7976;
  double t7944;
  double t7945;
  double t7946;
  double t7947;
  double t7950;
  double t7951;
  double t7952;
  double t7953;
  double t7954;
  double t7973;
  double t8108;
  double t8109;
  double t7982;
  double t8010;
  double t8112;
  double t8113;
  double t8115;
  double t8116;
  double t8023;
  double t8037;
  double t8038;
  double t8043;
  double t8044;
  double t8045;
  double t8102;
  double t8103;
  double t8125;
  double t8126;
  double t8127;
  double t8131;
  double t8132;
  double t8146;
  double t8147;
  double t8148;
  double t8151;
  double t8152;
  double t8153;
  double t7913;
  double t7917;
  double t7918;
  double t7919;
  double t7920;
  double t7921;
  double t7925;
  double t7926;
  double t7927;
  double t7928;
  double t8033;
  double t8034;
  double t8035;
  double t8036;
  double t8039;
  double t8040;
  double t8041;
  double t8042;
  double t8104;
  double t8110;
  double t8111;
  double t8114;
  double t8117;
  double t8121;
  double t8122;
  double t8123;
  double t8124;
  double t8133;
  double t8134;
  double t8135;
  double t8136;
  double t8137;
  double t8138;
  double t8139;
  double t8140;
  double t8141;
  double t8142;
  double t8143;
  double t8144;
  double t8145;
  double t8162;
  double t8163;
  double t8169;
  double t7786;
  double t8187;
  double t8192;
  double t8193;
  double t8195;
  double t8196;
  double t8198;
  double t8199;
  double t8200;
  double t8206;
  double t8207;
  double t8208;
  double t8218;
  double t8219;
  double t8220;
  double t8223;
  double t8224;
  double t8225;
  double t8226;
  double t8227;
  t1780 = Cos(var1[4]);
  t1709 = Sin(var1[2]);
  t1710 = Sin(var1[3]);
  t1101 = Cos(var1[3]);
  t2208 = Sin(var1[4]);
  t985 = Cos(var1[2]);
  t1942 = -1.*t1780;
  t2112 = 1. + t1942;
  t2116 = 0.4*t2112;
  t2121 = 0.64*t1780;
  t2128 = t2116 + t2121;
  t2649 = t1101*t1780;
  t2666 = -1.*t1710*t2208;
  t2675 = t2649 + t2666;
  t3119 = t2128*t2208;
  t3191 = -0.24*t1780*t2208;
  t7489 = t3119 + t3191;
  t7490 = t1780*t1710;
  t7537 = t1101*t2208;
  t7538 = t7490 + t7537;
  t2772 = -1.*t985*t2675;
  t2192 = t2128*t1780;
  t2230 = Power(t2208,2);
  t2239 = 0.24*t2230;
  t2241 = t2192 + t2239;
  t2244 = -1.*t1780*t1710;
  t2355 = -1.*t1101*t2208;
  t2356 = t2244 + t2355;
  t1638 = -1.*t985*t1101;
  t1735 = t1709*t1710;
  t1752 = t1638 + t1735;
  t1776 = -0.748*t1752;
  t7547 = -1.*t1709*t2675;
  t2359 = -1.*t1709*t2356;
  t7560 = t1101*t1709;
  t7561 = t985*t1710;
  t7562 = t7560 + t7561;
  t7563 = -0.748*t7562;
  t2900 = t2359 + t2772;
  t7785 = -1.*t985*t2356;
  t7829 = -1.*t1101*t1780;
  t7830 = t1710*t2208;
  t7832 = t7829 + t7830;
  t7824 = t985*t2356;
  t7827 = t7824 + t7547;
  t7828 = -3.2*t7489*t7827;
  t7835 = t985*t7832;
  t7836 = t2359 + t7835;
  t7837 = -3.2*t2241*t7836;
  t7840 = -3.2*t7489*t2900;
  t7914 = -1.*t2128*t2208;
  t7915 = 0.24*t1780*t2208;
  t7916 = t7914 + t7915;
  t7848 = Power(t1780,2);
  t7849 = -0.24*t7848;
  t7906 = t2192 + t7849;
  t7546 = -1.*t985*t7538;
  t7554 = t7546 + t7547;
  t7841 = -1.*t1709*t7832;
  t7842 = t7785 + t7841;
  t7843 = -3.2*t2241*t7842;
  t7907 = -1.*t1709*t7538;
  t7908 = t985*t2675;
  t7912 = t7907 + t7908;
  t2931 = -3.2*t2241*t2900;
  t7555 = -3.2*t7489*t7554;
  t7558 = t1776 + t2931 + t7555;
  t7929 = -1.*t1101*t1709;
  t7930 = -1.*t985*t1710;
  t7931 = t7929 + t7930;
  t7935 = -0.748*t7931;
  t7936 = -3.2*t7489*t7912;
  t7937 = -3.2*t2241*t7827;
  t7938 = t7935 + t7936 + t7937;
  t7838 = t1776 + t7828 + t7837;
  t7839 = -0.5*var2[0]*t7838;
  t7844 = t7563 + t7840 + t7843;
  t7845 = -0.5*var2[1]*t7844;
  t7846 = t7839 + t7845;
  t7847 = var2[3]*t7846;
  t7782 = t1709*t7538;
  t7961 = t1101*t2128;
  t7965 = -0.24*t1710*t2208;
  t7966 = t7961 + t7965;
  t7957 = -1.*t2128*t1710;
  t7958 = -0.24*t1101*t2208;
  t7959 = t7957 + t7958;
  t7979 = t2128*t1710;
  t7980 = 0.24*t1101*t2208;
  t7981 = t7979 + t7980;
  t7974 = -1.*t1101*t2128;
  t7975 = 0.24*t1710*t2208;
  t7976 = t7974 + t7975;
  t7944 = -3.2*t7489*t7836;
  t7945 = t985*t7538;
  t7946 = t7945 + t7841;
  t7947 = -3.2*t2241*t7946;
  t7950 = t7782 + t7835;
  t7951 = -3.2*t2241*t7950;
  t7952 = t1709*t7832;
  t7953 = t7824 + t7952;
  t7954 = -3.2*t7489*t7953;
  t7973 = -1.*t7538*t7966;
  t8108 = -0.24*t1780*t1710;
  t8109 = t8108 + t7958;
  t7982 = -1.*t7981*t7832;
  t8010 = t2356*t7981;
  t8112 = 0.24*t1101*t1780;
  t8113 = t8112 + t7965;
  t8115 = -0.24*t1101*t1780;
  t8116 = t8115 + t7975;
  t8023 = t7966*t7832;
  t8037 = t1709*t2356;
  t8038 = t8037 + t7908;
  t8043 = t7959*t2675;
  t8044 = t7981*t2675;
  t8045 = t2356*t7966;
  t8102 = t7538*t7966;
  t8103 = t8043 + t8044 + t8045 + t8102;
  t8125 = -1.*t2356*t7959;
  t8126 = -1.*t2356*t7981;
  t8127 = -1.*t2675*t7966;
  t8131 = -1.*t7966*t7832;
  t8132 = t8125 + t8126 + t8127 + t8131;
  t8146 = -3.2*t7489*t8038;
  t8147 = -3.2*t2241*t7953;
  t8148 = t7935 + t8146 + t8147;
  t8151 = -3.2*t2241*t8103;
  t8152 = -3.2*t7489*t8132;
  t8153 = t8151 + t8152;
  t7913 = -3.2*t7906*t7912;
  t7917 = -3.2*t7916*t7827;
  t7918 = t7913 + t7828 + t7917 + t7837;
  t7919 = -0.5*var2[0]*t7918;
  t7920 = -3.2*t7916*t2900;
  t7921 = -3.2*t7906*t7554;
  t7925 = t7840 + t7920 + t7921 + t7843;
  t7926 = -0.5*var2[1]*t7925;
  t7927 = t7919 + t7926;
  t7928 = var2[3]*t7927;
  t8033 = -3.2*t7906*t7827;
  t8034 = -3.2*t7916*t7836;
  t8035 = t8033 + t7944 + t8034 + t7947;
  t8036 = -0.5*var2[1]*t8035;
  t8039 = -3.2*t7906*t8038;
  t8040 = -3.2*t7916*t7953;
  t8041 = t8039 + t7951 + t7954 + t8040;
  t8042 = -0.5*var2[0]*t8041;
  t8104 = -3.2*t7916*t8103;
  t8110 = -1.*t8109*t2675;
  t8111 = -1.*t2356*t7966;
  t8114 = -1.*t2356*t8113;
  t8117 = -1.*t2356*t8116;
  t8121 = -1.*t7959*t7832;
  t8122 = -1.*t8109*t7832;
  t8123 = t8110 + t8111 + t7973 + t8114 + t8117 + t8121 + t8122 + t7982;
  t8124 = -3.2*t7489*t8123;
  t8133 = -3.2*t7906*t8132;
  t8134 = t2356*t7959;
  t8135 = t2356*t8109;
  t8136 = t8109*t7538;
  t8137 = t2675*t7966;
  t8138 = t2675*t8113;
  t8139 = t2675*t8116;
  t8140 = t8134 + t8135 + t8010 + t8136 + t8137 + t8138 + t8139 + t8023;
  t8141 = -3.2*t2241*t8140;
  t8142 = t8104 + t8124 + t8133 + t8141;
  t8143 = -0.5*var2[2]*t8142;
  t8144 = t8036 + t8042 + t8143;
  t8145 = var2[3]*t8144;
  t8162 = -1.*t2128*t1780;
  t8163 = 0.24*t7848;
  t8169 = t8162 + t8163;
  t7786 = t1709*t2675;
  t8187 = t7945 + t7786;
  t8192 = -1.*t7981*t2675;
  t8193 = t8192 + t8111;
  t8195 = t7981*t7538;
  t8196 = t8195 + t8137;
  t8198 = t8109*t2675;
  t8199 = t7538*t8113;
  t8200 = t8198 + t8044 + t8045 + t8199;
  t8206 = -1.*t2356*t8109;
  t8207 = -1.*t2675*t8113;
  t8208 = t8206 + t8126 + t8207 + t8131;
  t8218 = -3.2*t7916*t8038;
  t8219 = -3.2*t7906*t8187;
  t8220 = t8146 + t8218 + t8219 + t8147;
  t8223 = -3.2*t7906*t8193;
  t8224 = -3.2*t7916*t8196;
  t8225 = -3.2*t2241*t8200;
  t8226 = -3.2*t7489*t8208;
  t8227 = t8223 + t8224 + t8225 + t8226;
  p_output1[0]=(-0.5*t7558*var2[0] - 0.5*(t7563 - 3.2*t7489*(t2772 + t7782) - 3.2*t2241*(t7785 + t7786))*var2[1])*var2[3];
  p_output1[1]=t7847;
  p_output1[2]=t7928;
  p_output1[3]=-0.5*t7938*var2[3];
  p_output1[4]=-0.5*t7558*var2[3];
  p_output1[5]=-0.5*t7938*var2[0] - 0.5*t7558*var2[1];
  p_output1[6]=t7847;
  p_output1[7]=(-0.5*(t1776 + t7951 + t7954)*var2[0] - 0.5*(t7563 + t7944 + t7947)*var2[1] - 0.5*(-3.2*t7489*(-1.*t2675*t7959 - 2.*t7832*t7959 - 2.*t2356*t7966 + t7973 - 1.*t2356*t7976 + t7982) - 3.2*t2241*(2.*t2356*t7959 + t7538*t7959 + 2.*t2675*t7966 + t2675*t7976 + t8010 + t8023))*var2[2])*var2[3];
  p_output1[8]=t8145;
  p_output1[9]=-0.5*t8148*var2[3];
  p_output1[10]=-0.5*t7838*var2[3];
  p_output1[11]=-0.5*t8153*var2[3];
  p_output1[12]=-0.5*t8148*var2[0] - 0.5*t7838*var2[1] - 0.5*t8153*var2[2];
  p_output1[13]=t7928;
  p_output1[14]=t8145;
  p_output1[15]=var2[3]*(-0.5*(t7951 - 6.4*t7916*t7953 + t7954 - 6.4*t7906*t8038 - 3.2*t8038*t8169 - 3.2*t7916*t8187)*var2[0] - 0.5*(-6.4*t7827*t7906 - 6.4*t7836*t7916 - 3.2*t7912*t7916 + t7944 + t7947 - 3.2*t7827*t8169)*var2[1] - 0.5*(-3.2*t7489*(t7973 + t7982 - 2.*t7832*t8109 + t8110 - 2.*t2356*t8113 + t8117) - 3.2*t2241*(t8010 + t8023 + 2.*t2356*t8109 + 2.*t2675*t8113 + t8136 + t8139) - 3.2*t7916*t8193 - 3.2*t8169*t8196 - 6.4*t7916*t8200 - 6.4*t7906*t8208)*var2[2] - 0.5*(-6.4*Power(t7906,2) - 6.4*t7489*t7916 - 6.4*Power(t7916,2) - 6.4*t2241*t8169)*var2[3] + 0.384*t8169*var2[4]);
  p_output1[16]=-0.5*t8220*var2[3];
  p_output1[17]=-0.5*t7918*var2[3];
  p_output1[18]=-0.5*t8227*var2[3];
  p_output1[19]=-0.5*t8220*var2[0] - 0.5*t7918*var2[1] - 0.5*t8227*var2[2] - 1.*(-6.4*t7489*t7906 - 6.4*t2241*t7916)*var2[3] + 0.384*t7916*var2[4];
  p_output1[20]=0.384*t7916*var2[3];
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
