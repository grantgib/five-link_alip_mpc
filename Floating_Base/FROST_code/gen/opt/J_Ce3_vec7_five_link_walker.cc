/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:08 GMT-04:00
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
  double t3913;
  double t2725;
  double t3819;
  double t4239;
  double t10375;
  double t3868;
  double t4329;
  double t10200;
  double t2651;
  double t10383;
  double t10410;
  double t10413;
  double t10349;
  double t12052;
  double t14877;
  double t14882;
  double t14883;
  double t14890;
  double t15084;
  double t15085;
  double t15086;
  double t15087;
  double t15091;
  double t15101;
  double t15102;
  double t10470;
  double t10819;
  double t15108;
  double t15109;
  double t15113;
  double t15130;
  double t15132;
  double t15133;
  double t15141;
  double t15193;
  double t15194;
  double t15198;
  double t15199;
  double t15200;
  double t15201;
  double t15202;
  double t15212;
  double t15213;
  double t15214;
  double t15134;
  double t15136;
  double t15137;
  double t15138;
  double t15139;
  double t15140;
  double t15207;
  double t15208;
  double t15209;
  double t15210;
  double t15227;
  double t15230;
  double t15217;
  double t15220;
  double t15264;
  double t15265;
  double t15266;
  double t15267;
  double t15268;
  double t15252;
  double t15253;
  double t15226;
  double t15233;
  double t15237;
  double t15238;
  double t15239;
  double t15240;
  double t15241;
  double t15245;
  double t15246;
  double t15247;
  double t15248;
  double t15249;
  double t15250;
  double t15251;
  double t15257;
  double t15258;
  double t15289;
  double t15290;
  double t15291;
  double t15285;
  double t15286;
  double t15287;
  double t15271;
  double t15272;
  t3913 = Cos(var1[5]);
  t2725 = Cos(var1[6]);
  t3819 = Sin(var1[5]);
  t4239 = Sin(var1[6]);
  t10375 = Cos(var1[2]);
  t3868 = -1.*t2725*t3819;
  t4329 = -1.*t3913*t4239;
  t10200 = t3868 + t4329;
  t2651 = Sin(var1[2]);
  t10383 = t3913*t2725;
  t10410 = -1.*t3819*t4239;
  t10413 = t10383 + t10410;
  t10349 = -1.*t2651*t10200;
  t12052 = -1.*t10375*t10200;
  t14877 = -1.*t3913*t2725;
  t14882 = t3819*t4239;
  t14883 = t14877 + t14882;
  t14890 = t10375*t14883;
  t15084 = t10349 + t14890;
  t15085 = 0.384*var2[0]*t15084;
  t15086 = -1.*t2651*t14883;
  t15087 = t12052 + t15086;
  t15091 = 0.384*var2[1]*t15087;
  t15101 = t15085 + t15091;
  t15102 = var2[6]*t15101;
  t10470 = -1.*t10375*t10413;
  t10819 = t10349 + t10470;
  t15108 = t10375*t10200;
  t15109 = -1.*t2651*t10413;
  t15113 = t15108 + t15109;
  t15130 = t2725*t3819;
  t15132 = t3913*t4239;
  t15133 = t15130 + t15132;
  t15141 = -1.*t2725;
  t15193 = 1. + t15141;
  t15194 = 0.4*t15193;
  t15198 = 0.64*t2725;
  t15199 = t15194 + t15198;
  t15200 = -1.*t15199*t3819;
  t15201 = -0.24*t3913*t4239;
  t15202 = t15200 + t15201;
  t15212 = t3913*t15199;
  t15213 = -0.24*t3819*t4239;
  t15214 = t15212 + t15213;
  t15134 = t2651*t15133;
  t15136 = t15134 + t14890;
  t15137 = 0.384*var2[0]*t15136;
  t15138 = t10375*t15133;
  t15139 = t15138 + t15086;
  t15140 = 0.384*var2[1]*t15139;
  t15207 = t15199*t3819;
  t15208 = 0.24*t3913*t4239;
  t15209 = t15207 + t15208;
  t15210 = t10200*t15209;
  t15227 = -0.24*t2725*t3819;
  t15230 = t15227 + t15201;
  t15217 = 0.24*t3819*t4239;
  t15220 = t15214*t14883;
  t15264 = t15202*t10413;
  t15265 = t15209*t10413;
  t15266 = t10200*t15214;
  t15267 = t15133*t15214;
  t15268 = t15264 + t15265 + t15266 + t15267;
  t15252 = t2651*t14883;
  t15253 = t15108 + t15252;
  t15226 = t10200*t15202;
  t15233 = t10200*t15230;
  t15237 = t15230*t15133;
  t15238 = t10413*t15214;
  t15239 = 0.24*t3913*t2725;
  t15240 = t15239 + t15213;
  t15241 = t10413*t15240;
  t15245 = -0.24*t3913*t2725;
  t15246 = t15245 + t15217;
  t15247 = t10413*t15246;
  t15248 = t15226 + t15233 + t15210 + t15237 + t15238 + t15241 + t15247 + t15220;
  t15249 = 0.384*var2[2]*t15248;
  t15250 = t15137 + t15140 + t15249;
  t15251 = var2[6]*t15250;
  t15257 = 0.384*var2[6]*t15253;
  t15258 = 0.384*var2[6]*t15084;
  t15289 = -1.*t15199*t4239;
  t15290 = 0.24*t2725*t4239;
  t15291 = t15289 + t15290;
  t15285 = t15230*t10413;
  t15286 = t15133*t15240;
  t15287 = t15285 + t15265 + t15266 + t15286;
  t15271 = 0.384*var2[1]*t15084;
  t15272 = 0.384*var2[0]*t15253;
  p_output1[0]=(0.384*t10819*var2[0] + 0.384*(t12052 + t10413*t2651)*var2[1])*var2[6];
  p_output1[1]=t15102;
  p_output1[2]=t15102;
  p_output1[3]=0.384*t15113*var2[6];
  p_output1[4]=0.384*t10819*var2[6];
  p_output1[5]=0.384*t15113*var2[0] + 0.384*t10819*var2[1];
  p_output1[6]=t15102;
  p_output1[7]=(t15137 + t15140 + 0.384*(2.*t10200*t15202 + t15133*t15202 + t15210 + 2.*t10413*t15214 + t15220 + t10413*(t15217 - 1.*t15199*t3913))*var2[2])*var2[6];
  p_output1[8]=t15251;
  p_output1[9]=t15257;
  p_output1[10]=t15258;
  p_output1[11]=0.384*t15268*var2[6];
  p_output1[12]=t15271 + t15272 + 0.384*t15268*var2[2];
  p_output1[13]=t15102;
  p_output1[14]=t15251;
  p_output1[15]=(t15137 + t15140 + 0.384*(t15210 + t15220 + 2.*t10200*t15230 + t15237 + 2.*t10413*t15240 + t15247)*var2[2] + 0.384*(-1.*t15199*t2725 + 0.24*Power(t2725,2))*var2[5])*var2[6];
  p_output1[16]=t15257;
  p_output1[17]=t15258;
  p_output1[18]=0.384*t15287*var2[6];
  p_output1[19]=0.384*t15291*var2[6];
  p_output1[20]=t15271 + t15272 + 0.384*t15287*var2[2] + 0.384*t15291*var2[5];
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

#include "J_Ce3_vec7_five_link_walker.hh"

namespace RightStance
{

void J_Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
