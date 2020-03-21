/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:06 GMT-04:00
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
  double t10826;
  double t10468;
  double t10471;
  double t10445;
  double t10856;
  double t9529;
  double t10827;
  double t10828;
  double t10847;
  double t10851;
  double t10852;
  double t10901;
  double t10902;
  double t10903;
  double t10946;
  double t10953;
  double t10954;
  double t11517;
  double t11677;
  double t12122;
  double t10904;
  double t10855;
  double t10857;
  double t10884;
  double t10891;
  double t10895;
  double t10896;
  double t10898;
  double t10447;
  double t10807;
  double t10816;
  double t10818;
  double t14479;
  double t10899;
  double t14551;
  double t14812;
  double t14825;
  double t14826;
  double t10933;
  double t14848;
  double t14898;
  double t14899;
  double t15019;
  double t14893;
  double t14896;
  double t14897;
  double t15020;
  double t15024;
  double t15025;
  double t15028;
  double t15054;
  double t15055;
  double t15056;
  double t15047;
  double t15048;
  double t15049;
  double t12133;
  double t14484;
  double t15035;
  double t15036;
  double t15042;
  double t15050;
  double t15051;
  double t15052;
  double t10945;
  double t14485;
  double t14512;
  double t15074;
  double t15075;
  double t15079;
  double t15080;
  double t15081;
  double t15082;
  double t15083;
  double t15026;
  double t15027;
  double t15043;
  double t15044;
  double t15045;
  double t15046;
  double t14830;
  double t15114;
  double t15115;
  double t15116;
  double t15110;
  double t15111;
  double t15112;
  double t15124;
  double t15125;
  double t15126;
  double t15119;
  double t15120;
  double t15121;
  double t15092;
  double t15098;
  double t15099;
  double t15100;
  double t15103;
  double t15104;
  double t15105;
  double t15106;
  double t15107;
  double t15118;
  double t15158;
  double t15159;
  double t15127;
  double t15131;
  double t15162;
  double t15163;
  double t15165;
  double t15166;
  double t15135;
  double t15146;
  double t15147;
  double t15152;
  double t15153;
  double t15154;
  double t15155;
  double t15156;
  double t15172;
  double t15173;
  double t15174;
  double t15175;
  double t15176;
  double t15190;
  double t15191;
  double t15192;
  double t15195;
  double t15196;
  double t15197;
  double t15053;
  double t15058;
  double t15059;
  double t15060;
  double t15061;
  double t15064;
  double t15067;
  double t15071;
  double t15072;
  double t15073;
  double t15142;
  double t15143;
  double t15144;
  double t15145;
  double t15148;
  double t15149;
  double t15150;
  double t15151;
  double t15157;
  double t15160;
  double t15161;
  double t15164;
  double t15167;
  double t15168;
  double t15169;
  double t15170;
  double t15171;
  double t15177;
  double t15178;
  double t15179;
  double t15180;
  double t15181;
  double t15182;
  double t15183;
  double t15184;
  double t15185;
  double t15186;
  double t15187;
  double t15188;
  double t15189;
  double t15203;
  double t15204;
  double t15205;
  double t14853;
  double t15223;
  double t15228;
  double t15229;
  double t15231;
  double t15232;
  double t15234;
  double t15235;
  double t15236;
  double t15242;
  double t15243;
  double t15244;
  double t15254;
  double t15255;
  double t15256;
  double t15259;
  double t15260;
  double t15261;
  double t15262;
  double t15263;
  t10826 = Cos(var1[6]);
  t10468 = Sin(var1[2]);
  t10471 = Sin(var1[5]);
  t10445 = Cos(var1[5]);
  t10856 = Sin(var1[6]);
  t9529 = Cos(var1[2]);
  t10827 = -1.*t10826;
  t10828 = 1. + t10827;
  t10847 = 0.4*t10828;
  t10851 = 0.64*t10826;
  t10852 = t10847 + t10851;
  t10901 = t10445*t10826;
  t10902 = -1.*t10471*t10856;
  t10903 = t10901 + t10902;
  t10946 = t10852*t10856;
  t10953 = -0.24*t10826*t10856;
  t10954 = t10946 + t10953;
  t11517 = t10826*t10471;
  t11677 = t10445*t10856;
  t12122 = t11517 + t11677;
  t10904 = -1.*t9529*t10903;
  t10855 = t10852*t10826;
  t10857 = Power(t10856,2);
  t10884 = 0.24*t10857;
  t10891 = t10855 + t10884;
  t10895 = -1.*t10826*t10471;
  t10896 = -1.*t10445*t10856;
  t10898 = t10895 + t10896;
  t10447 = -1.*t9529*t10445;
  t10807 = t10468*t10471;
  t10816 = t10447 + t10807;
  t10818 = -0.748*t10816;
  t14479 = -1.*t10468*t10903;
  t10899 = -1.*t10468*t10898;
  t14551 = t10445*t10468;
  t14812 = t9529*t10471;
  t14825 = t14551 + t14812;
  t14826 = -0.748*t14825;
  t10933 = t10899 + t10904;
  t14848 = -1.*t9529*t10898;
  t14898 = -1.*t10445*t10826;
  t14899 = t10471*t10856;
  t15019 = t14898 + t14899;
  t14893 = t9529*t10898;
  t14896 = t14893 + t14479;
  t14897 = -3.2*t10954*t14896;
  t15020 = t9529*t15019;
  t15024 = t10899 + t15020;
  t15025 = -3.2*t10891*t15024;
  t15028 = -3.2*t10954*t10933;
  t15054 = -1.*t10852*t10856;
  t15055 = 0.24*t10826*t10856;
  t15056 = t15054 + t15055;
  t15047 = Power(t10826,2);
  t15048 = -0.24*t15047;
  t15049 = t10855 + t15048;
  t12133 = -1.*t9529*t12122;
  t14484 = t12133 + t14479;
  t15035 = -1.*t10468*t15019;
  t15036 = t14848 + t15035;
  t15042 = -3.2*t10891*t15036;
  t15050 = -1.*t10468*t12122;
  t15051 = t9529*t10903;
  t15052 = t15050 + t15051;
  t10945 = -3.2*t10891*t10933;
  t14485 = -3.2*t10954*t14484;
  t14512 = t10818 + t10945 + t14485;
  t15074 = -1.*t10445*t10468;
  t15075 = -1.*t9529*t10471;
  t15079 = t15074 + t15075;
  t15080 = -0.748*t15079;
  t15081 = -3.2*t10954*t15052;
  t15082 = -3.2*t10891*t14896;
  t15083 = t15080 + t15081 + t15082;
  t15026 = t10818 + t14897 + t15025;
  t15027 = -0.5*var2[0]*t15026;
  t15043 = t14826 + t15028 + t15042;
  t15044 = -0.5*var2[1]*t15043;
  t15045 = t15027 + t15044;
  t15046 = var2[5]*t15045;
  t14830 = t10468*t12122;
  t15114 = t10445*t10852;
  t15115 = -0.24*t10471*t10856;
  t15116 = t15114 + t15115;
  t15110 = -1.*t10852*t10471;
  t15111 = -0.24*t10445*t10856;
  t15112 = t15110 + t15111;
  t15124 = t10852*t10471;
  t15125 = 0.24*t10445*t10856;
  t15126 = t15124 + t15125;
  t15119 = -1.*t10445*t10852;
  t15120 = 0.24*t10471*t10856;
  t15121 = t15119 + t15120;
  t15092 = -3.2*t10954*t15024;
  t15098 = t9529*t12122;
  t15099 = t15098 + t15035;
  t15100 = -3.2*t10891*t15099;
  t15103 = t14830 + t15020;
  t15104 = -3.2*t10891*t15103;
  t15105 = t10468*t15019;
  t15106 = t14893 + t15105;
  t15107 = -3.2*t10954*t15106;
  t15118 = -1.*t12122*t15116;
  t15158 = -0.24*t10826*t10471;
  t15159 = t15158 + t15111;
  t15127 = -1.*t15126*t15019;
  t15131 = t10898*t15126;
  t15162 = 0.24*t10445*t10826;
  t15163 = t15162 + t15115;
  t15165 = -0.24*t10445*t10826;
  t15166 = t15165 + t15120;
  t15135 = t15116*t15019;
  t15146 = t10468*t10898;
  t15147 = t15146 + t15051;
  t15152 = t15112*t10903;
  t15153 = t15126*t10903;
  t15154 = t10898*t15116;
  t15155 = t12122*t15116;
  t15156 = t15152 + t15153 + t15154 + t15155;
  t15172 = -1.*t10898*t15112;
  t15173 = -1.*t10898*t15126;
  t15174 = -1.*t10903*t15116;
  t15175 = -1.*t15116*t15019;
  t15176 = t15172 + t15173 + t15174 + t15175;
  t15190 = -3.2*t10954*t15147;
  t15191 = -3.2*t10891*t15106;
  t15192 = t15080 + t15190 + t15191;
  t15195 = -3.2*t10891*t15156;
  t15196 = -3.2*t10954*t15176;
  t15197 = t15195 + t15196;
  t15053 = -3.2*t15049*t15052;
  t15058 = -3.2*t15056*t14896;
  t15059 = t15053 + t14897 + t15058 + t15025;
  t15060 = -0.5*var2[0]*t15059;
  t15061 = -3.2*t15056*t10933;
  t15064 = -3.2*t15049*t14484;
  t15067 = t15028 + t15061 + t15064 + t15042;
  t15071 = -0.5*var2[1]*t15067;
  t15072 = t15060 + t15071;
  t15073 = var2[5]*t15072;
  t15142 = -3.2*t15049*t14896;
  t15143 = -3.2*t15056*t15024;
  t15144 = t15142 + t15092 + t15143 + t15100;
  t15145 = -0.5*var2[1]*t15144;
  t15148 = -3.2*t15049*t15147;
  t15149 = -3.2*t15056*t15106;
  t15150 = t15148 + t15104 + t15107 + t15149;
  t15151 = -0.5*var2[0]*t15150;
  t15157 = -3.2*t15056*t15156;
  t15160 = -1.*t15159*t10903;
  t15161 = -1.*t10898*t15116;
  t15164 = -1.*t10898*t15163;
  t15167 = -1.*t10898*t15166;
  t15168 = -1.*t15112*t15019;
  t15169 = -1.*t15159*t15019;
  t15170 = t15160 + t15161 + t15118 + t15164 + t15167 + t15168 + t15169 + t15127;
  t15171 = -3.2*t10954*t15170;
  t15177 = -3.2*t15049*t15176;
  t15178 = t10898*t15112;
  t15179 = t10898*t15159;
  t15180 = t15159*t12122;
  t15181 = t10903*t15116;
  t15182 = t10903*t15163;
  t15183 = t10903*t15166;
  t15184 = t15178 + t15179 + t15131 + t15180 + t15181 + t15182 + t15183 + t15135;
  t15185 = -3.2*t10891*t15184;
  t15186 = t15157 + t15171 + t15177 + t15185;
  t15187 = -0.5*var2[2]*t15186;
  t15188 = t15145 + t15151 + t15187;
  t15189 = var2[5]*t15188;
  t15203 = -1.*t10852*t10826;
  t15204 = 0.24*t15047;
  t15205 = t15203 + t15204;
  t14853 = t10468*t10903;
  t15223 = t15098 + t14853;
  t15228 = -1.*t15126*t10903;
  t15229 = t15228 + t15161;
  t15231 = t15126*t12122;
  t15232 = t15231 + t15181;
  t15234 = t15159*t10903;
  t15235 = t12122*t15163;
  t15236 = t15234 + t15153 + t15154 + t15235;
  t15242 = -1.*t10898*t15159;
  t15243 = -1.*t10903*t15163;
  t15244 = t15242 + t15173 + t15243 + t15175;
  t15254 = -3.2*t15056*t15147;
  t15255 = -3.2*t15049*t15223;
  t15256 = t15190 + t15254 + t15255 + t15191;
  t15259 = -3.2*t15049*t15229;
  t15260 = -3.2*t15056*t15232;
  t15261 = -3.2*t10891*t15236;
  t15262 = -3.2*t10954*t15244;
  t15263 = t15259 + t15260 + t15261 + t15262;
  p_output1[0]=(-0.5*t14512*var2[0] - 0.5*(t14826 - 3.2*t10954*(t10904 + t14830) - 3.2*t10891*(t14848 + t14853))*var2[1])*var2[5];
  p_output1[1]=t15046;
  p_output1[2]=t15073;
  p_output1[3]=-0.5*t15083*var2[5];
  p_output1[4]=-0.5*t14512*var2[5];
  p_output1[5]=-0.5*t15083*var2[0] - 0.5*t14512*var2[1];
  p_output1[6]=t15046;
  p_output1[7]=(-0.5*(t10818 + t15104 + t15107)*var2[0] - 0.5*(t14826 + t15092 + t15100)*var2[1] - 0.5*(-3.2*t10954*(-1.*t10903*t15112 - 2.*t15019*t15112 - 2.*t10898*t15116 + t15118 - 1.*t10898*t15121 + t15127) - 3.2*t10891*(2.*t10898*t15112 + t12122*t15112 + 2.*t10903*t15116 + t10903*t15121 + t15131 + t15135))*var2[2])*var2[5];
  p_output1[8]=t15189;
  p_output1[9]=-0.5*t15192*var2[5];
  p_output1[10]=-0.5*t15026*var2[5];
  p_output1[11]=-0.5*t15197*var2[5];
  p_output1[12]=-0.5*t15192*var2[0] - 0.5*t15026*var2[1] - 0.5*t15197*var2[2];
  p_output1[13]=t15073;
  p_output1[14]=t15189;
  p_output1[15]=var2[5]*(-0.5*(t15104 - 6.4*t15056*t15106 + t15107 - 6.4*t15049*t15147 - 3.2*t15147*t15205 - 3.2*t15056*t15223)*var2[0] - 0.5*(-6.4*t14896*t15049 - 6.4*t15024*t15056 - 3.2*t15052*t15056 + t15092 + t15100 - 3.2*t14896*t15205)*var2[1] - 0.5*(-3.2*t10954*(t15118 + t15127 - 2.*t15019*t15159 + t15160 - 2.*t10898*t15163 + t15167) - 3.2*t10891*(t15131 + t15135 + 2.*t10898*t15159 + 2.*t10903*t15163 + t15180 + t15183) - 3.2*t15056*t15229 - 3.2*t15205*t15232 - 6.4*t15056*t15236 - 6.4*t15049*t15244)*var2[2] - 0.5*(-6.4*Power(t15049,2) - 6.4*t10954*t15056 - 6.4*Power(t15056,2) - 6.4*t10891*t15205)*var2[5] + 0.384*t15205*var2[6]);
  p_output1[16]=-0.5*t15256*var2[5];
  p_output1[17]=-0.5*t15059*var2[5];
  p_output1[18]=-0.5*t15263*var2[5];
  p_output1[19]=-0.5*t15256*var2[0] - 0.5*t15059*var2[1] - 0.5*t15263*var2[2] - 1.*(-6.4*t10954*t15049 - 6.4*t10891*t15056)*var2[5] + 0.384*t15056*var2[6];
  p_output1[20]=0.384*t15056*var2[5];
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
