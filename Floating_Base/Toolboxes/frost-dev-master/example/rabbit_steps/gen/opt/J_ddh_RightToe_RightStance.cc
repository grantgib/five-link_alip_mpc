/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:52:15 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t2852;
  double t4997;
  double t2500;
  double t4998;
  double t208;
  double t4977;
  double t4999;
  double t5000;
  double t5041;
  double t5042;
  double t5043;
  double t5044;
  double t5067;
  double t5068;
  double t5069;
  double t5070;
  double t5071;
  double t5072;
  double t5073;
  double t632;
  double t2499;
  double t5094;
  double t5095;
  double t5096;
  double t5093;
  double t5097;
  double t5098;
  double t5099;
  double t5101;
  double t5103;
  double t5114;
  double t5126;
  double t5131;
  double t5132;
  double t5133;
  double t5134;
  double t5135;
  double t5142;
  double t5143;
  double t5144;
  double t5141;
  double t5145;
  double t5146;
  double t5147;
  double t5148;
  double t5149;
  double t5140;
  double t5150;
  double t5151;
  double t5152;
  double t5001;
  double t5053;
  double t5054;
  double t5064;
  double t5065;
  double t5066;
  double t5091;
  double t5092;
  double t5104;
  double t5105;
  double t5106;
  double t5112;
  double t5113;
  double t5115;
  double t5127;
  double t5128;
  double t5129;
  double t5130;
  double t5136;
  double t5137;
  double t5138;
  double t5139;
  double t5153;
  double t5154;
  double t5155;
  double t5165;
  double t5166;
  double t5167;
  double t5168;
  double t5169;
  double t5183;
  double t5184;
  double t5185;
  double t5186;
  double t5156;
  double t5157;
  double t5158;
  double t5159;
  double t5160;
  double t5191;
  double t5197;
  double t5199;
  double t5204;
  double t5205;
  double t5206;
  double t5207;
  double t5208;
  double t5213;
  double t5214;
  double t5215;
  double t5216;
  double t5217;
  double t5218;
  double t5219;
  double t5220;
  double t5221;
  double t5222;
  double t5193;
  double t5194;
  double t5195;
  double t5196;
  double t5198;
  double t5200;
  double t5201;
  double t5202;
  double t5203;
  double t5209;
  double t5210;
  double t5211;
  double t5212;
  double t5223;
  double t5224;
  double t5225;
  double t5240;
  double t5241;
  double t5242;
  double t5243;
  t2852 = Cos(var1[3]);
  t4997 = Sin(var1[2]);
  t2500 = Cos(var1[2]);
  t4998 = Sin(var1[3]);
  t208 = Cos(var1[4]);
  t4977 = t2500*t2852;
  t4999 = -1.*t4997*t4998;
  t5000 = t4977 + t4999;
  t5041 = -1.*t2852*t4997;
  t5042 = -1.*t2500*t4998;
  t5043 = t5041 + t5042;
  t5044 = Sin(var1[4]);
  t5067 = -0.4*t208*t5043;
  t5068 = 0.4*t5000*t5044;
  t5069 = t208*t5043;
  t5070 = -1.*t5000*t5044;
  t5071 = t5069 + t5070;
  t5072 = 0.8*t5071;
  t5073 = t5067 + t5068 + t5072;
  t632 = -1.*t208;
  t2499 = 1. + t632;
  t5094 = -1.*t2500*t2852;
  t5095 = t4997*t4998;
  t5096 = t5094 + t5095;
  t5093 = 0.4*t2499*t5043;
  t5097 = -0.4*t5096*t5044;
  t5098 = t5096*t5044;
  t5099 = t5069 + t5098;
  t5101 = 0.8*t5099;
  t5103 = t5093 + t5097 + t5101;
  t5114 = 0.4*t5043*t5044;
  t5126 = -1.*t5043*t5044;
  t5131 = -0.4*t208*t5096;
  t5132 = t208*t5096;
  t5133 = t5132 + t5126;
  t5134 = 0.8*t5133;
  t5135 = t5131 + t5114 + t5134;
  t5142 = t2852*t4997;
  t5143 = t2500*t4998;
  t5144 = t5142 + t5143;
  t5141 = 0.4*t2499*t5096;
  t5145 = -0.4*t5144*t5044;
  t5146 = t5144*t5044;
  t5147 = t5132 + t5146;
  t5148 = 0.8*t5147;
  t5149 = t5141 + t5145 + t5148;
  t5140 = var2[4]*t5135;
  t5150 = var2[2]*t5149;
  t5151 = var2[3]*t5149;
  t5152 = t5140 + t5150 + t5151;
  t5001 = 0.4*t2499*t5000;
  t5053 = -0.4*t5043*t5044;
  t5054 = t208*t5000;
  t5064 = t5043*t5044;
  t5065 = t5054 + t5064;
  t5066 = 0.8*t5065;
  t5091 = var3[4]*t5073;
  t5092 = var2[4]*t5073;
  t5104 = var3[2]*t5103;
  t5105 = var3[3]*t5103;
  t5106 = var2[2]*t5103;
  t5112 = var2[3]*t5103;
  t5113 = 0.4*t208*t5000;
  t5115 = -1.*t208*t5000;
  t5127 = t5115 + t5126;
  t5128 = 0.8*t5127;
  t5129 = t5113 + t5114 + t5128;
  t5130 = var2[4]*t5129;
  t5136 = var2[2]*t5135;
  t5137 = var2[3]*t5135;
  t5138 = t5130 + t5136 + t5137;
  t5139 = var2[4]*t5138;
  t5153 = var2[2]*t5152;
  t5154 = var2[3]*t5152;
  t5155 = t5001 + t5053 + t5066 + t5091 + t5092 + t5104 + t5105 + t5106 + t5112 + t5139 + t5153 + t5154;
  t5165 = 0.4*t208*t5144;
  t5166 = -1.*t208*t5144;
  t5167 = t5166 + t5070;
  t5168 = 0.8*t5167;
  t5169 = t5165 + t5068 + t5168;
  t5183 = 2.*var2[4]*t5073;
  t5184 = 2.*var2[2]*t5103;
  t5185 = 2.*var2[3]*t5103;
  t5186 = t5001 + t5053 + t5066 + t5183 + t5184 + t5185;
  t5156 = -0.4*t208*t5000;
  t5157 = 0.4*t5144*t5044;
  t5158 = -1.*t5144*t5044;
  t5159 = t5054 + t5158;
  t5160 = 0.8*t5159;
  t5191 = t5001 + t5053 + t5066;
  t5197 = 0.4*t5096*t5044;
  t5199 = -1.*t5096*t5044;
  t5204 = -0.4*t208*t5144;
  t5205 = t208*t5144;
  t5206 = t5205 + t5199;
  t5207 = 0.8*t5206;
  t5208 = t5204 + t5197 + t5207;
  t5213 = 0.4*t2499*t5144;
  t5214 = -0.4*t5000*t5044;
  t5215 = t5000*t5044;
  t5216 = t5205 + t5215;
  t5217 = 0.8*t5216;
  t5218 = t5213 + t5214 + t5217;
  t5219 = var2[2]*t5218;
  t5220 = var2[3]*t5218;
  t5221 = var2[4]*t5208;
  t5222 = t5219 + t5220 + t5221;
  t5193 = var3[4]*t5135;
  t5194 = var3[2]*t5149;
  t5195 = var3[3]*t5149;
  t5196 = 0.4*t208*t5043;
  t5198 = -1.*t208*t5043;
  t5200 = t5198 + t5199;
  t5201 = 0.8*t5200;
  t5202 = t5196 + t5197 + t5201;
  t5203 = var2[4]*t5202;
  t5209 = var2[2]*t5208;
  t5210 = var2[3]*t5208;
  t5211 = t5203 + t5209 + t5210;
  t5212 = var2[4]*t5211;
  t5223 = var2[2]*t5222;
  t5224 = var2[3]*t5222;
  t5225 = t5093 + t5097 + t5101 + t5193 + t5140 + t5194 + t5195 + t5150 + t5151 + t5212 + t5223 + t5224;
  t5240 = 2.*var2[4]*t5135;
  t5241 = 2.*var2[2]*t5149;
  t5242 = 2.*var2[3]*t5149;
  t5243 = t5093 + t5097 + t5101 + t5240 + t5241 + t5242;
  p_output1[0]=1.;
  p_output1[1]=t5155;
  p_output1[2]=t5155;
  p_output1[3]=t5156 + t5157 + t5160 + t5073*var2[2] + t5138*var2[2] + t5073*var2[3] + t5138*var2[3] + t5169*var2[4] + var2[4]*(t5129*var2[2] + t5129*var2[3] + (t5113 + t5145 + 0.8*(t5115 + t5146))*var2[4]) + t5073*var3[2] + t5073*var3[3] + t5169*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t5186;
  p_output1[6]=t5186;
  p_output1[7]=t5156 + t5157 + t5160 + 2.*t5073*var2[2] + 2.*t5073*var2[3] + 2.*t5169*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t5191;
  p_output1[10]=t5191;
  p_output1[11]=t5156 + t5157 + t5160;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t5225;
  p_output1[16]=t5225;
  p_output1[17]=t5067 + t5068 + t5072 + t5130 + t5136 + t5137 + t5211*var2[2] + t5211*var2[3] + var2[4]*(t5202*var2[2] + t5202*var2[3] + (t5196 + t5214 + 0.8*(t5198 + t5215))*var2[4]) + t5135*var3[2] + t5135*var3[3] + t5129*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t5243;
  p_output1[20]=t5243;
  p_output1[21]=t5067 + t5068 + t5072 + 2.*t5135*var2[2] + 2.*t5135*var2[3] + 2.*t5129*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t5103;
  p_output1[24]=t5103;
  p_output1[25]=t5073;
  p_output1[26]=-1.;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightToe_RightStance.hh"

namespace RightStance
{

void J_ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
