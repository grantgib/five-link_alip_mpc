/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 15:03:30 GMT-04:00
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
  double t3127;
  double t3129;
  double t3126;
  double t3140;
  double t500;
  double t3128;
  double t3141;
  double t3142;
  double t3150;
  double t3151;
  double t3159;
  double t3160;
  double t3166;
  double t3167;
  double t3168;
  double t3182;
  double t3183;
  double t3184;
  double t3185;
  double t3099;
  double t3104;
  double t3189;
  double t3190;
  double t3192;
  double t3188;
  double t3194;
  double t3195;
  double t3196;
  double t3197;
  double t3203;
  double t3219;
  double t3221;
  double t3226;
  double t3227;
  double t3228;
  double t3229;
  double t3230;
  double t3237;
  double t3238;
  double t3239;
  double t3236;
  double t3240;
  double t3241;
  double t3242;
  double t3243;
  double t3244;
  double t3235;
  double t3245;
  double t3246;
  double t3247;
  double t3143;
  double t3161;
  double t3162;
  double t3163;
  double t3164;
  double t3165;
  double t3186;
  double t3187;
  double t3204;
  double t3205;
  double t3206;
  double t3217;
  double t3218;
  double t3220;
  double t3222;
  double t3223;
  double t3224;
  double t3225;
  double t3231;
  double t3232;
  double t3233;
  double t3234;
  double t3248;
  double t3249;
  double t3250;
  double t3260;
  double t3261;
  double t3262;
  double t3263;
  double t3264;
  double t3278;
  double t3279;
  double t3280;
  double t3281;
  double t3251;
  double t3252;
  double t3253;
  double t3254;
  double t3255;
  double t3286;
  double t3292;
  double t3294;
  double t3299;
  double t3300;
  double t3301;
  double t3302;
  double t3303;
  double t3308;
  double t3309;
  double t3310;
  double t3311;
  double t3312;
  double t3313;
  double t3314;
  double t3315;
  double t3316;
  double t3317;
  double t3288;
  double t3289;
  double t3290;
  double t3291;
  double t3293;
  double t3295;
  double t3296;
  double t3297;
  double t3298;
  double t3304;
  double t3305;
  double t3306;
  double t3307;
  double t3318;
  double t3319;
  double t3320;
  double t3335;
  double t3336;
  double t3337;
  double t3338;
  t3127 = Cos(var1[3]);
  t3129 = Sin(var1[2]);
  t3126 = Cos(var1[2]);
  t3140 = Sin(var1[3]);
  t500 = Cos(var1[4]);
  t3128 = t3126*t3127;
  t3141 = -1.*t3129*t3140;
  t3142 = t3128 + t3141;
  t3150 = -1.*t3127*t3129;
  t3151 = -1.*t3126*t3140;
  t3159 = t3150 + t3151;
  t3160 = Sin(var1[4]);
  t3166 = -0.4*t500*t3159;
  t3167 = 0.4*t3142*t3160;
  t3168 = t500*t3159;
  t3182 = -1.*t3142*t3160;
  t3183 = t3168 + t3182;
  t3184 = 0.8*t3183;
  t3185 = t3166 + t3167 + t3184;
  t3099 = -1.*t500;
  t3104 = 1. + t3099;
  t3189 = -1.*t3126*t3127;
  t3190 = t3129*t3140;
  t3192 = t3189 + t3190;
  t3188 = 0.4*t3104*t3159;
  t3194 = -0.4*t3192*t3160;
  t3195 = t3192*t3160;
  t3196 = t3168 + t3195;
  t3197 = 0.8*t3196;
  t3203 = t3188 + t3194 + t3197;
  t3219 = 0.4*t3159*t3160;
  t3221 = -1.*t3159*t3160;
  t3226 = -0.4*t500*t3192;
  t3227 = t500*t3192;
  t3228 = t3227 + t3221;
  t3229 = 0.8*t3228;
  t3230 = t3226 + t3219 + t3229;
  t3237 = t3127*t3129;
  t3238 = t3126*t3140;
  t3239 = t3237 + t3238;
  t3236 = 0.4*t3104*t3192;
  t3240 = -0.4*t3239*t3160;
  t3241 = t3239*t3160;
  t3242 = t3227 + t3241;
  t3243 = 0.8*t3242;
  t3244 = t3236 + t3240 + t3243;
  t3235 = var2[4]*t3230;
  t3245 = var2[2]*t3244;
  t3246 = var2[3]*t3244;
  t3247 = t3235 + t3245 + t3246;
  t3143 = 0.4*t3104*t3142;
  t3161 = -0.4*t3159*t3160;
  t3162 = t500*t3142;
  t3163 = t3159*t3160;
  t3164 = t3162 + t3163;
  t3165 = 0.8*t3164;
  t3186 = var3[4]*t3185;
  t3187 = var2[4]*t3185;
  t3204 = var3[2]*t3203;
  t3205 = var3[3]*t3203;
  t3206 = var2[2]*t3203;
  t3217 = var2[3]*t3203;
  t3218 = 0.4*t500*t3142;
  t3220 = -1.*t500*t3142;
  t3222 = t3220 + t3221;
  t3223 = 0.8*t3222;
  t3224 = t3218 + t3219 + t3223;
  t3225 = var2[4]*t3224;
  t3231 = var2[2]*t3230;
  t3232 = var2[3]*t3230;
  t3233 = t3225 + t3231 + t3232;
  t3234 = var2[4]*t3233;
  t3248 = var2[2]*t3247;
  t3249 = var2[3]*t3247;
  t3250 = t3143 + t3161 + t3165 + t3186 + t3187 + t3204 + t3205 + t3206 + t3217 + t3234 + t3248 + t3249;
  t3260 = 0.4*t500*t3239;
  t3261 = -1.*t500*t3239;
  t3262 = t3261 + t3182;
  t3263 = 0.8*t3262;
  t3264 = t3260 + t3167 + t3263;
  t3278 = 2.*var2[4]*t3185;
  t3279 = 2.*var2[2]*t3203;
  t3280 = 2.*var2[3]*t3203;
  t3281 = t3143 + t3161 + t3165 + t3278 + t3279 + t3280;
  t3251 = -0.4*t500*t3142;
  t3252 = 0.4*t3239*t3160;
  t3253 = -1.*t3239*t3160;
  t3254 = t3162 + t3253;
  t3255 = 0.8*t3254;
  t3286 = t3143 + t3161 + t3165;
  t3292 = 0.4*t3192*t3160;
  t3294 = -1.*t3192*t3160;
  t3299 = -0.4*t500*t3239;
  t3300 = t500*t3239;
  t3301 = t3300 + t3294;
  t3302 = 0.8*t3301;
  t3303 = t3299 + t3292 + t3302;
  t3308 = 0.4*t3104*t3239;
  t3309 = -0.4*t3142*t3160;
  t3310 = t3142*t3160;
  t3311 = t3300 + t3310;
  t3312 = 0.8*t3311;
  t3313 = t3308 + t3309 + t3312;
  t3314 = var2[2]*t3313;
  t3315 = var2[3]*t3313;
  t3316 = var2[4]*t3303;
  t3317 = t3314 + t3315 + t3316;
  t3288 = var3[4]*t3230;
  t3289 = var3[2]*t3244;
  t3290 = var3[3]*t3244;
  t3291 = 0.4*t500*t3159;
  t3293 = -1.*t500*t3159;
  t3295 = t3293 + t3294;
  t3296 = 0.8*t3295;
  t3297 = t3291 + t3292 + t3296;
  t3298 = var2[4]*t3297;
  t3304 = var2[2]*t3303;
  t3305 = var2[3]*t3303;
  t3306 = t3298 + t3304 + t3305;
  t3307 = var2[4]*t3306;
  t3318 = var2[2]*t3317;
  t3319 = var2[3]*t3317;
  t3320 = t3188 + t3194 + t3197 + t3288 + t3235 + t3289 + t3290 + t3245 + t3246 + t3307 + t3318 + t3319;
  t3335 = 2.*var2[4]*t3230;
  t3336 = 2.*var2[2]*t3244;
  t3337 = 2.*var2[3]*t3244;
  t3338 = t3188 + t3194 + t3197 + t3335 + t3336 + t3337;
  p_output1[0]=1.;
  p_output1[1]=t3250;
  p_output1[2]=t3250;
  p_output1[3]=t3251 + t3252 + t3255 + t3185*var2[2] + t3233*var2[2] + t3185*var2[3] + t3233*var2[3] + t3264*var2[4] + var2[4]*(t3224*var2[2] + t3224*var2[3] + (t3218 + t3240 + 0.8*(t3220 + t3241))*var2[4]) + t3185*var3[2] + t3185*var3[3] + t3264*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t3281;
  p_output1[6]=t3281;
  p_output1[7]=t3251 + t3252 + t3255 + 2.*t3185*var2[2] + 2.*t3185*var2[3] + 2.*t3264*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t3286;
  p_output1[10]=t3286;
  p_output1[11]=t3251 + t3252 + t3255;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t3320;
  p_output1[16]=t3320;
  p_output1[17]=t3166 + t3167 + t3184 + t3225 + t3231 + t3232 + t3306*var2[2] + t3306*var2[3] + var2[4]*(t3297*var2[2] + t3297*var2[3] + (t3291 + t3309 + 0.8*(t3293 + t3310))*var2[4]) + t3230*var3[2] + t3230*var3[3] + t3224*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t3338;
  p_output1[20]=t3338;
  p_output1[21]=t3166 + t3167 + t3184 + 2.*t3230*var2[2] + 2.*t3230*var2[3] + 2.*t3224*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t3203;
  p_output1[24]=t3203;
  p_output1[25]=t3185;
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
