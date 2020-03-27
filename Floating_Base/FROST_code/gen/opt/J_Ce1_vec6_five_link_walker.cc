/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:50:55 GMT-04:00
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
  double t4959;
  double t2588;
  double t4548;
  double t278;
  double t4970;
  double t178;
  double t4961;
  double t4962;
  double t4964;
  double t4965;
  double t4966;
  double t5061;
  double t5062;
  double t5064;
  double t284;
  double t4921;
  double t4952;
  double t4958;
  double t5087;
  double t5091;
  double t5092;
  double t4996;
  double t4997;
  double t5044;
  double t5097;
  double t4969;
  double t4971;
  double t4972;
  double t4995;
  double t5054;
  double t5093;
  double t5094;
  double t5095;
  double t5107;
  double t5108;
  double t5109;
  double t5110;
  double t5111;
  double t5112;
  double t5113;
  double t5114;
  double t5115;
  double t5116;
  double t5118;
  double t5119;
  double t5120;
  double t5122;
  double t5134;
  double t5135;
  double t5136;
  double t5137;
  double t5138;
  double t5139;
  double t5125;
  double t5126;
  double t5127;
  double t5121;
  double t5123;
  double t5124;
  double t5128;
  double t5129;
  double t5142;
  double t5143;
  double t5144;
  double t5145;
  double t5146;
  double t5166;
  double t5167;
  double t5168;
  double t5169;
  double t5170;
  double t5171;
  double t5172;
  double t5175;
  double t5157;
  double t5158;
  double t5159;
  double t5176;
  double t5179;
  double t5180;
  double t5181;
  double t5065;
  double t5185;
  double t5186;
  double t5187;
  double t5188;
  double t5067;
  double t5191;
  double t5196;
  double t5096;
  double t5098;
  double t5197;
  double t5198;
  double t5199;
  double t5200;
  double t5209;
  double t5210;
  double t5211;
  double t5202;
  double t5203;
  double t5204;
  double t5215;
  double t5216;
  double t5217;
  double t5153;
  double t5154;
  double t5155;
  double t5068;
  double t5099;
  double t5105;
  double t5106;
  double t5130;
  double t5249;
  double t5250;
  double t5251;
  double t5245;
  double t5246;
  double t5247;
  double t5259;
  double t5260;
  double t5261;
  double t5254;
  double t5255;
  double t5256;
  double t5253;
  double t5281;
  double t5283;
  double t5262;
  double t5266;
  double t5288;
  double t5289;
  double t5291;
  double t5292;
  double t5270;
  double t5275;
  double t5276;
  double t5277;
  double t5278;
  double t5279;
  double t5280;
  double t5286;
  double t5287;
  double t5290;
  double t5293;
  double t5294;
  double t5296;
  double t5297;
  double t5298;
  double t5299;
  double t5300;
  double t5301;
  double t5302;
  double t5303;
  double t5304;
  double t5305;
  double t5306;
  double t5308;
  double t5309;
  double t5310;
  double t5311;
  double t5314;
  double t5315;
  double t5316;
  double t5321;
  double t5322;
  double t5324;
  double t5325;
  double t5327;
  double t5328;
  double t5329;
  double t5338;
  double t5339;
  double t5340;
  double t5358;
  double t5359;
  double t5360;
  double t5361;
  double t5365;
  double t5379;
  double t5380;
  double t5381;
  t4959 = Cos(var1[6]);
  t2588 = Sin(var1[2]);
  t4548 = Sin(var1[5]);
  t278 = Cos(var1[5]);
  t4970 = Sin(var1[6]);
  t178 = Cos(var1[2]);
  t4961 = -1.*t4959;
  t4962 = 1. + t4961;
  t4964 = 0.4*t4962;
  t4965 = 0.64*t4959;
  t4966 = t4964 + t4965;
  t5061 = t278*t4959;
  t5062 = -1.*t4548*t4970;
  t5064 = t5061 + t5062;
  t284 = -1.*t178*t278;
  t4921 = t2588*t4548;
  t4952 = t284 + t4921;
  t4958 = 0.748*t4952;
  t5087 = t4966*t4970;
  t5091 = -0.24*t4959*t4970;
  t5092 = t5087 + t5091;
  t4996 = -1.*t4959*t4548;
  t4997 = -1.*t278*t4970;
  t5044 = t4996 + t4997;
  t5097 = -1.*t2588*t5064;
  t4969 = t4966*t4959;
  t4971 = Power(t4970,2);
  t4972 = 0.24*t4971;
  t4995 = t4969 + t4972;
  t5054 = -1.*t2588*t5044;
  t5093 = t4959*t4548;
  t5094 = t278*t4970;
  t5095 = t5093 + t5094;
  t5107 = t178*t5044;
  t5108 = t5107 + t5097;
  t5109 = 3.2*t5092*t5108;
  t5110 = -1.*t278*t4959;
  t5111 = t4548*t4970;
  t5112 = t5110 + t5111;
  t5113 = t178*t5112;
  t5114 = t5054 + t5113;
  t5115 = 3.2*t4995*t5114;
  t5116 = t4958 + t5109 + t5115;
  t5118 = Power(t4959,2);
  t5119 = -0.24*t5118;
  t5120 = t4969 + t5119;
  t5122 = t178*t5064;
  t5134 = t2588*t5095;
  t5135 = t5134 + t5113;
  t5136 = 3.2*t4995*t5135;
  t5137 = t2588*t5112;
  t5138 = t5107 + t5137;
  t5139 = 3.2*t5092*t5138;
  t5125 = -1.*t4966*t4970;
  t5126 = 0.24*t4959*t4970;
  t5127 = t5125 + t5126;
  t5121 = -1.*t2588*t5095;
  t5123 = t5121 + t5122;
  t5124 = 3.2*t5120*t5123;
  t5128 = 3.2*t5127*t5108;
  t5129 = t5124 + t5109 + t5128 + t5115;
  t5142 = t2588*t5044;
  t5143 = t5142 + t5122;
  t5144 = 3.2*t5120*t5143;
  t5145 = 3.2*t5127*t5138;
  t5146 = t5144 + t5136 + t5139 + t5145;
  t5166 = -1.*t278*t2588;
  t5167 = -1.*t178*t4548;
  t5168 = t5166 + t5167;
  t5169 = 0.748*t5168;
  t5170 = 3.2*t5092*t5123;
  t5171 = 3.2*t4995*t5108;
  t5172 = t5169 + t5170 + t5171;
  t5175 = 3.2*t5092*t5143;
  t5157 = t178*t5095;
  t5158 = t2588*t5064;
  t5159 = t5157 + t5158;
  t5176 = 3.2*t4995*t5138;
  t5179 = 3.2*t5127*t5143;
  t5180 = 3.2*t5120*t5159;
  t5181 = t5175 + t5179 + t5180 + t5176;
  t5065 = -1.*t178*t5064;
  t5185 = t278*t2588;
  t5186 = t178*t4548;
  t5187 = t5185 + t5186;
  t5188 = 0.748*t5187;
  t5067 = t5054 + t5065;
  t5191 = -1.*t178*t5044;
  t5196 = 3.2*t5092*t5067;
  t5096 = -1.*t178*t5095;
  t5098 = t5096 + t5097;
  t5197 = -1.*t2588*t5112;
  t5198 = t5191 + t5197;
  t5199 = 3.2*t4995*t5198;
  t5200 = t5188 + t5196 + t5199;
  t5209 = 3.2*t5092*t5114;
  t5210 = t5157 + t5197;
  t5211 = 3.2*t4995*t5210;
  t5202 = 3.2*t5127*t5067;
  t5203 = 3.2*t5120*t5098;
  t5204 = t5196 + t5202 + t5203 + t5199;
  t5215 = 3.2*t5120*t5108;
  t5216 = 3.2*t5127*t5114;
  t5217 = t5215 + t5209 + t5216 + t5211;
  t5153 = -1.*t4966*t4959;
  t5154 = 0.24*t5118;
  t5155 = t5153 + t5154;
  t5068 = 3.2*t4995*t5067;
  t5099 = 3.2*t5092*t5098;
  t5105 = t4958 + t5068 + t5099;
  t5106 = -0.5*var2[2]*t5105;
  t5130 = -0.5*var2[6]*t5129;
  t5249 = t278*t4966;
  t5250 = -0.24*t4548*t4970;
  t5251 = t5249 + t5250;
  t5245 = -1.*t4966*t4548;
  t5246 = -0.24*t278*t4970;
  t5247 = t5245 + t5246;
  t5259 = t4966*t4548;
  t5260 = 0.24*t278*t4970;
  t5261 = t5259 + t5260;
  t5254 = -1.*t278*t4966;
  t5255 = 0.24*t4548*t4970;
  t5256 = t5254 + t5255;
  t5253 = -1.*t5095*t5251;
  t5281 = -0.24*t4959*t4548;
  t5283 = t5281 + t5246;
  t5262 = -1.*t5261*t5112;
  t5266 = t5044*t5261;
  t5288 = 0.24*t278*t4959;
  t5289 = t5288 + t5250;
  t5291 = -0.24*t278*t4959;
  t5292 = t5291 + t5255;
  t5270 = t5251*t5112;
  t5275 = t5247*t5064;
  t5276 = t5261*t5064;
  t5277 = t5044*t5251;
  t5278 = t5095*t5251;
  t5279 = t5275 + t5276 + t5277 + t5278;
  t5280 = 3.2*t5127*t5279;
  t5286 = -1.*t5283*t5064;
  t5287 = -1.*t5044*t5251;
  t5290 = -1.*t5044*t5289;
  t5293 = -1.*t5044*t5292;
  t5294 = -1.*t5247*t5112;
  t5296 = -1.*t5283*t5112;
  t5297 = t5286 + t5287 + t5253 + t5290 + t5293 + t5294 + t5296 + t5262;
  t5298 = 3.2*t5092*t5297;
  t5299 = -1.*t5044*t5247;
  t5300 = -1.*t5044*t5261;
  t5301 = -1.*t5064*t5251;
  t5302 = -1.*t5251*t5112;
  t5303 = t5299 + t5300 + t5301 + t5302;
  t5304 = 3.2*t5120*t5303;
  t5305 = t5044*t5247;
  t5306 = t5044*t5283;
  t5308 = t5283*t5095;
  t5309 = t5064*t5251;
  t5310 = t5064*t5289;
  t5311 = t5064*t5292;
  t5314 = t5305 + t5306 + t5266 + t5308 + t5309 + t5310 + t5311 + t5270;
  t5315 = 3.2*t4995*t5314;
  t5316 = t5280 + t5298 + t5304 + t5315;
  t5321 = -1.*t5261*t5064;
  t5322 = t5321 + t5287;
  t5324 = t5261*t5095;
  t5325 = t5324 + t5309;
  t5327 = t5283*t5064;
  t5328 = t5095*t5289;
  t5329 = t5327 + t5276 + t5277 + t5328;
  t5338 = -1.*t5044*t5283;
  t5339 = -1.*t5064*t5289;
  t5340 = t5338 + t5300 + t5339 + t5302;
  t5358 = 3.2*t5120*t5322;
  t5359 = 3.2*t5127*t5325;
  t5360 = 3.2*t4995*t5329;
  t5361 = 3.2*t5092*t5340;
  t5365 = t5358 + t5359 + t5360 + t5361;
  t5379 = 6.4*t5120*t5092;
  t5380 = 6.4*t5127*t4995;
  t5381 = t5379 + t5380;
  p_output1[0]=var2[5]*(t5106 + t5130 - 0.5*t5116*var2[5]);
  p_output1[1]=var2[5]*(-0.5*t5116*var2[2] - 0.5*(t4958 + t5136 + t5139)*var2[5] - 0.5*t5146*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t5129*var2[2] - 0.5*t5146*var2[5] - 0.5*(t5136 + 6.4*t5127*t5138 + t5139 + 6.4*t5120*t5143 + 3.2*t5143*t5155 + 3.2*t5127*t5159)*var2[6]);
  p_output1[3]=-0.5*t5172*var2[5];
  p_output1[4]=-0.5*t5172*var2[2] - 1.*(t5169 + t5175 + t5176)*var2[5] - 0.5*t5181*var2[6];
  p_output1[5]=-0.5*t5181*var2[5];
  p_output1[6]=var2[5]*(-0.5*(3.2*t5092*(t5065 + t5134) + t5188 + 3.2*t4995*(t5158 + t5191))*var2[2] - 0.5*t5200*var2[5] - 0.5*t5204*var2[6]);
  p_output1[7]=var2[5]*(-0.5*t5200*var2[2] - 0.5*(t5188 + t5209 + t5211)*var2[5] - 0.5*t5217*var2[6]);
  p_output1[8]=var2[5]*(-0.5*t5204*var2[2] - 0.5*t5217*var2[5] - 0.5*(6.4*t5108*t5120 + 6.4*t5114*t5127 + 3.2*t5123*t5127 + 3.2*t5108*t5155 + t5209 + t5211)*var2[6]);
  p_output1[9]=-0.5*t5105*var2[5];
  p_output1[10]=t5106 + t5130 - 1.*t5116*var2[5];
  p_output1[11]=-0.5*t5129*var2[5];
  p_output1[12]=var2[5]*(-0.5*(3.2*t5092*(-1.*t5064*t5247 - 2.*t5112*t5247 - 2.*t5044*t5251 + t5253 - 1.*t5044*t5256 + t5262) + 3.2*t4995*(2.*t5044*t5247 + t5095*t5247 + 2.*t5064*t5251 + t5064*t5256 + t5266 + t5270))*var2[5] - 0.5*t5316*var2[6]);
  p_output1[13]=var2[5]*(-0.5*t5316*var2[5] - 0.5*(3.2*t5092*(t5253 + t5262 - 2.*t5112*t5283 + t5286 - 2.*t5044*t5289 + t5293) + 3.2*t4995*(t5266 + t5270 + 2.*t5044*t5283 + 2.*t5064*t5289 + t5308 + t5311) + 3.2*t5127*t5322 + 3.2*t5155*t5325 + 6.4*t5127*t5329 + 6.4*t5120*t5340)*var2[6]);
  p_output1[14]=-1.*(3.2*t4995*t5279 + 3.2*t5092*t5303)*var2[5] - 0.5*t5365*var2[6];
  p_output1[15]=-0.5*t5365*var2[5];
  p_output1[16]=-0.5*(6.4*Power(t5120,2) + 6.4*t5092*t5127 + 6.4*Power(t5127,2) + 6.4*t4995*t5155)*var2[5]*var2[6];
  p_output1[17]=-0.5*t5381*var2[6];
  p_output1[18]=-0.5*t5381*var2[5];
  p_output1[19]=-0.384*t5155*var2[5]*var2[6];
  p_output1[20]=-0.384*t5127*var2[6];
  p_output1[21]=-0.384*t5127*var2[5];
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
