/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:52:31 GMT-04:00
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
  double t2144;
  double t1238;
  double t1872;
  double t2187;
  double t2846;
  double t1009;
  double t1939;
  double t2478;
  double t2525;
  double t2716;
  double t3040;
  double t3045;
  double t3120;
  double t3167;
  double t3417;
  double t3737;
  double t3742;
  double t3792;
  double t3802;
  double t3867;
  double t4158;
  double t4107;
  double t4127;
  double t4180;
  double t4140;
  double t4181;
  double t4192;
  double t4193;
  double t4226;
  double t4240;
  double t4241;
  double t4252;
  double t4254;
  double t4402;
  double t4437;
  double t4485;
  double t4503;
  double t4510;
  double t3530;
  double t3620;
  double t3659;
  double t3999;
  double t4001;
  double t4035;
  double t4047;
  double t4054;
  double t4055;
  double t4350;
  double t4360;
  double t4366;
  double t4758;
  double t4790;
  double t4821;
  double t4839;
  double t4879;
  double t4906;
  double t5142;
  double t5185;
  double t5192;
  double t5337;
  double t5370;
  double t5371;
  double t5916;
  double t5917;
  double t5921;
  double t5925;
  double t5927;
  double t5939;
  double t6255;
  double t6266;
  double t6277;
  double t6288;
  double t6290;
  double t6294;
  double t5199;
  double t5205;
  double t5209;
  double t5084;
  double t5085;
  double t5091;
  double t3992;
  double t3993;
  double t3995;
  double t5211;
  double t5223;
  double t3903;
  double t3947;
  double t3965;
  double t3983;
  double t5378;
  double t5390;
  double t5392;
  double t5292;
  double t5310;
  double t5317;
  double t4670;
  double t4702;
  double t4718;
  double t5417;
  double t5440;
  double t4523;
  double t4577;
  double t4578;
  double t4636;
  double t5536;
  double t5539;
  double t5652;
  double t5653;
  double t5678;
  double t5683;
  double t5736;
  double t5751;
  double t5106;
  double t5193;
  double t5210;
  double t5247;
  double t5332;
  double t5376;
  double t5410;
  double t5492;
  double t5506;
  double t5876;
  double t5878;
  double t5879;
  double t5880;
  double t5893;
  double t5923;
  double t5951;
  double t6008;
  double t6127;
  double t6155;
  double t6172;
  double t6184;
  double t6191;
  double t6199;
  double t6210;
  double t6213;
  double t6284;
  double t6300;
  double t6306;
  double t6322;
  double t6332;
  double t6333;
  double t5865;
  double t5909;
  double t6016;
  double t6180;
  double t6222;
  double t6308;
  double t6358;
  double t6364;
  double t6730;
  double t6749;
  double t6781;
  double t6787;
  double t6800;
  double t6807;
  double t6821;
  double t6824;
  double t6406;
  double t6451;
  double t6485;
  double t6552;
  double t3678;
  double t3988;
  double t4061;
  double t4076;
  double t6906;
  double t6907;
  double t6911;
  double t6923;
  double t7222;
  double t7223;
  double t6878;
  double t6879;
  double t6569;
  double t6571;
  double t6583;
  double t6591;
  double t4396;
  double t4647;
  double t4966;
  double t4968;
  double t6989;
  double t6992;
  double t7015;
  double t7019;
  double t7408;
  double t7415;
  double t6930;
  double t6943;
  t2144 = Cos(var1[3]);
  t1238 = Cos(var1[4]);
  t1872 = Sin(var1[3]);
  t2187 = Sin(var1[4]);
  t2846 = Cos(var1[2]);
  t1009 = Sin(var1[2]);
  t1939 = -1.*t1238*t1872;
  t2478 = -1.*t2144*t2187;
  t2525 = t1939 + t2478;
  t2716 = t1009*t2525;
  t3040 = t2144*t1238;
  t3045 = -1.*t1872*t2187;
  t3120 = t3040 + t3045;
  t3167 = t2846*t3120;
  t3417 = t2716 + t3167;
  t3737 = -1.*t1238;
  t3742 = 1. + t3737;
  t3792 = 0.4*t3742;
  t3802 = 0.64*t1238;
  t3867 = t3792 + t3802;
  t4158 = Cos(var1[5]);
  t4107 = Cos(var1[6]);
  t4127 = Sin(var1[5]);
  t4180 = Sin(var1[6]);
  t4140 = -1.*t4107*t4127;
  t4181 = -1.*t4158*t4180;
  t4192 = t4140 + t4181;
  t4193 = t1009*t4192;
  t4226 = t4158*t4107;
  t4240 = -1.*t4127*t4180;
  t4241 = t4226 + t4240;
  t4252 = t2846*t4241;
  t4254 = t4193 + t4252;
  t4402 = -1.*t4107;
  t4437 = 1. + t4402;
  t4485 = 0.4*t4437;
  t4503 = 0.64*t4107;
  t4510 = t4485 + t4503;
  t3530 = t2846*t2144;
  t3620 = -1.*t1009*t1872;
  t3659 = t3530 + t3620;
  t3999 = t1238*t1872;
  t4001 = t2144*t2187;
  t4035 = t3999 + t4001;
  t4047 = t2846*t4035;
  t4054 = t1009*t3120;
  t4055 = t4047 + t4054;
  t4350 = t2846*t4158;
  t4360 = -1.*t1009*t4127;
  t4366 = t4350 + t4360;
  t4758 = t4107*t4127;
  t4790 = t4158*t4180;
  t4821 = t4758 + t4790;
  t4839 = t2846*t4821;
  t4879 = t1009*t4241;
  t4906 = t4839 + t4879;
  t5142 = t2144*t1009;
  t5185 = t2846*t1872;
  t5192 = t5142 + t5185;
  t5337 = t4158*t1009;
  t5370 = t2846*t4127;
  t5371 = t5337 + t5370;
  t5916 = t3867*t1872;
  t5917 = 0.24*t2144*t2187;
  t5921 = t5916 + t5917;
  t5925 = t2144*t3867;
  t5927 = -0.24*t1872*t2187;
  t5939 = t5925 + t5927;
  t6255 = t4510*t4127;
  t6266 = 0.24*t4158*t4180;
  t6277 = t6255 + t6266;
  t6288 = t4158*t4510;
  t6290 = -0.24*t4127*t4180;
  t6294 = t6288 + t6290;
  t5199 = t2846*t2525;
  t5205 = -1.*t1009*t3120;
  t5209 = t5199 + t5205;
  t5084 = -1.*t2144*t1009;
  t5085 = -1.*t2846*t1872;
  t5091 = t5084 + t5085;
  t3992 = t3867*t2187;
  t3993 = -0.24*t1238*t2187;
  t3995 = t3992 + t3993;
  t5211 = -1.*t1009*t4035;
  t5223 = t5211 + t3167;
  t3903 = t3867*t1238;
  t3947 = Power(t2187,2);
  t3965 = 0.24*t3947;
  t3983 = t3903 + t3965;
  t5378 = t2846*t4192;
  t5390 = -1.*t1009*t4241;
  t5392 = t5378 + t5390;
  t5292 = -1.*t4158*t1009;
  t5310 = -1.*t2846*t4127;
  t5317 = t5292 + t5310;
  t4670 = t4510*t4180;
  t4702 = -0.24*t4107*t4180;
  t4718 = t4670 + t4702;
  t5417 = -1.*t1009*t4821;
  t5440 = t5417 + t4252;
  t4523 = t4510*t4107;
  t4577 = Power(t4180,2);
  t4578 = 0.24*t4577;
  t4636 = t4523 + t4578;
  t5536 = Power(t2846,2);
  t5539 = -12.*t5536;
  t5652 = Power(t1009,2);
  t5653 = -12.*t5652;
  t5678 = Power(t3659,2);
  t5683 = -6.8*t5678;
  t5736 = Power(t4366,2);
  t5751 = -6.8*t5736;
  t5106 = -6.8*t5091*t3659;
  t5193 = -6.8*t5192*t3659;
  t5210 = -3.2*t3417*t5209;
  t5247 = -3.2*t5223*t4055;
  t5332 = -6.8*t5317*t4366;
  t5376 = -6.8*t5371*t4366;
  t5410 = -3.2*t4254*t5392;
  t5492 = -3.2*t5440*t4906;
  t5506 = t5106 + t5193 + t5210 + t5247 + t5332 + t5376 + t5410 + t5492;
  t5876 = Power(t2144,2);
  t5878 = 0.11*t5876;
  t5879 = Power(t1872,2);
  t5880 = 0.11*t5879;
  t5893 = t5878 + t5880;
  t5923 = -1.*t5921*t3120;
  t5951 = -1.*t2525*t5939;
  t6008 = t5923 + t5951;
  t6127 = t5921*t4035;
  t6155 = t3120*t5939;
  t6172 = t6127 + t6155;
  t6184 = Power(t4158,2);
  t6191 = 0.11*t6184;
  t6199 = Power(t4127,2);
  t6210 = 0.11*t6199;
  t6213 = t6191 + t6210;
  t6284 = -1.*t6277*t4241;
  t6300 = -1.*t4192*t6294;
  t6306 = t6284 + t6300;
  t6322 = t6277*t4821;
  t6332 = t4241*t6294;
  t6333 = t6322 + t6332;
  t5865 = -2.88*t2846;
  t5909 = -6.8*t3659*t5893;
  t6016 = -3.2*t4055*t6008;
  t6180 = -3.2*t3417*t6172;
  t6222 = -6.8*t4366*t6213;
  t6308 = -3.2*t4906*t6306;
  t6358 = -3.2*t4254*t6333;
  t6364 = t5865 + t5909 + t6016 + t6180 + t6222 + t6308 + t6358;
  t6730 = 2.88*t1009;
  t6749 = -6.8*t5091*t5893;
  t6781 = -3.2*t5223*t6008;
  t6787 = -3.2*t5209*t6172;
  t6800 = -6.8*t5317*t6213;
  t6807 = -3.2*t5440*t6306;
  t6821 = -3.2*t5392*t6333;
  t6824 = t6730 + t6749 + t6781 + t6787 + t6800 + t6807 + t6821;
  t6406 = -0.748*t5091;
  t6451 = -3.2*t3995*t5223;
  t6485 = -3.2*t3983*t5209;
  t6552 = t6406 + t6451 + t6485;
  t3678 = -0.748*t3659;
  t3988 = -3.2*t3983*t3417;
  t4061 = -3.2*t3995*t4055;
  t4076 = t3678 + t3988 + t4061;
  t6906 = -0.748*t5893;
  t6907 = -3.2*t3995*t6008;
  t6911 = -3.2*t3983*t6172;
  t6923 = -0.67 + t6906 + t6907 + t6911;
  t7222 = -0.768*t3983;
  t7223 = -0.2 + t7222;
  t6878 = -0.768*t6172;
  t6879 = -0.2 + t6878;
  t6569 = -0.748*t5317;
  t6571 = -3.2*t4718*t5440;
  t6583 = -3.2*t4636*t5392;
  t6591 = t6569 + t6571 + t6583;
  t4396 = -0.748*t4366;
  t4647 = -3.2*t4636*t4254;
  t4966 = -3.2*t4718*t4906;
  t4968 = t4396 + t4647 + t4966;
  t6989 = -0.748*t6213;
  t6992 = -3.2*t4718*t6306;
  t7015 = -3.2*t4636*t6333;
  t7019 = -0.67 + t6989 + t6992 + t7015;
  t7408 = -0.768*t4636;
  t7415 = -0.2 + t7408;
  t6930 = -0.768*t6333;
  t6943 = -0.2 + t6930;
  p_output1[0]=(-3.2*Power(t3417,2) - 3.2*Power(t4055,2) - 3.2*Power(t4254,2) - 3.2*Power(t4906,2) - 6.8*Power(t5192,2) - 6.8*Power(t5371,2) + t5539 + t5653 + t5683 + t5751)*var2[0] + t5506*var2[1] + t6364*var2[2] + t4076*var2[3] - 0.768*t3417*var2[4] + t4968*var2[5] - 0.768*t4254*var2[6];
  p_output1[1]=t5506*var2[0] + (-6.8*Power(t5091,2) - 3.2*Power(t5209,2) - 3.2*Power(t5223,2) - 6.8*Power(t5317,2) - 3.2*Power(t5392,2) - 3.2*Power(t5440,2) + t5539 + t5653 + t5683 + t5751)*var2[1] + t6824*var2[2] + t6552*var2[3] - 0.768*t5209*var2[4] + t6591*var2[5] - 0.768*t5392*var2[6];
  p_output1[2]=t6364*var2[0] + t6824*var2[1] + (-3.3612 - 6.8*Power(t5893,2) - 3.2*Power(t6008,2) - 3.2*Power(t6172,2) - 6.8*Power(t6213,2) - 3.2*Power(t6306,2) - 3.2*Power(t6333,2))*var2[2] + t6923*var2[3] + t6879*var2[4] + t7019*var2[5] + t6943*var2[6];
  p_output1[3]=t4076*var2[0] + t6552*var2[1] + t6923*var2[2] + (-1.58228 - 3.2*Power(t3983,2) - 3.2*Power(t3995,2))*var2[3] + t7223*var2[4];
  p_output1[4]=-0.768*t3417*var2[0] - 0.768*t5209*var2[1] + t6879*var2[2] + t7223*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t4968*var2[0] + t6591*var2[1] + t7019*var2[2] + (-1.58228 - 3.2*Power(t4636,2) - 3.2*Power(t4718,2))*var2[5] + t7415*var2[6];
  p_output1[6]=-0.768*t4254*var2[0] - 0.768*t5392*var2[1] + t6943*var2[2] + t7415*var2[5] - 1.2143199999999998*var2[6];
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

#include "MmatDx_five_link_walker.hh"

namespace RightStance
{

void MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
