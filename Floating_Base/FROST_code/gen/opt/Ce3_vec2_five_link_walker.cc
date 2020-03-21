/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:03 GMT-04:00
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
  double t3816;
  double t124;
  double t3338;
  double t3853;
  double t4338;
  double t123;
  double t3814;
  double t4097;
  double t4166;
  double t4186;
  double t4358;
  double t4398;
  double t4447;
  double t4640;
  double t4647;
  double t8259;
  double t8266;
  double t8315;
  double t8324;
  double t8329;
  double t8400;
  double t8393;
  double t8396;
  double t8456;
  double t8398;
  double t8461;
  double t8462;
  double t8463;
  double t8468;
  double t8469;
  double t8486;
  double t8488;
  double t8490;
  double t11027;
  double t11028;
  double t11029;
  double t11043;
  double t11062;
  double t11120;
  double t11121;
  double t11132;
  double t4720;
  double t4744;
  double t4797;
  double t8383;
  double t8369;
  double t8373;
  double t8375;
  double t8382;
  double t8384;
  double t11160;
  double t11164;
  double t11180;
  double t8493;
  double t8879;
  double t10988;
  double t11115;
  double t11101;
  double t11112;
  double t11113;
  double t11114;
  double t11116;
  double t11133;
  double t11134;
  double t11135;
  double t11142;
  double t11141;
  double t11143;
  double t11138;
  double t11139;
  double t11184;
  double t11185;
  double t11186;
  double t11209;
  double t11202;
  double t11210;
  double t11197;
  double t11198;
  double t11301;
  double t11302;
  double t11303;
  double t11305;
  double t11306;
  double t11307;
  double t11325;
  double t11326;
  double t11327;
  double t11329;
  double t11330;
  double t11331;
  double t8151;
  double t8357;
  double t8358;
  double t8367;
  double t8330;
  double t8334;
  double t8335;
  double t8344;
  double t11343;
  double t11344;
  double t11345;
  double t11346;
  double t11347;
  double t11136;
  double t11137;
  double t11220;
  double t11222;
  double t11224;
  double t11226;
  double t11227;
  double t11228;
  double t11229;
  double t11230;
  double t11231;
  double t11232;
  double t11233;
  double t11239;
  double t11240;
  double t11241;
  double t11292;
  double t11293;
  double t11295;
  double t11297;
  double t11299;
  double t11300;
  double t11304;
  double t11308;
  double t11309;
  double t11311;
  double t11312;
  double t11313;
  double t11366;
  double t11367;
  double t11368;
  double t11348;
  double t11349;
  double t11350;
  double t11353;
  double t11354;
  double t11357;
  double t11358;
  double t11359;
  double t11360;
  double t11361;
  double t11362;
  double t11365;
  double t11370;
  double t11371;
  double t11375;
  double t11400;
  double t11401;
  double t11377;
  double t11403;
  double t11404;
  double t11379;
  double t11022;
  double t11095;
  double t11099;
  double t11100;
  double t11067;
  double t11068;
  double t11069;
  double t11080;
  double t11416;
  double t11417;
  double t11418;
  double t11419;
  double t11420;
  double t11187;
  double t11188;
  double t11243;
  double t11244;
  double t11245;
  double t11248;
  double t11251;
  double t11252;
  double t11253;
  double t11254;
  double t11255;
  double t11256;
  double t11257;
  double t11271;
  double t11274;
  double t11275;
  double t11315;
  double t11316;
  double t11317;
  double t11318;
  double t11321;
  double t11324;
  double t11328;
  double t11332;
  double t11333;
  double t11335;
  double t11336;
  double t11337;
  double t11439;
  double t11440;
  double t11441;
  double t11421;
  double t11422;
  double t11423;
  double t11426;
  double t11427;
  double t11430;
  double t11431;
  double t11432;
  double t11433;
  double t11434;
  double t11435;
  double t11438;
  double t11443;
  double t11444;
  double t11448;
  double t11473;
  double t11474;
  double t11450;
  double t11476;
  double t11477;
  double t11452;
  t3816 = Cos(var1[3]);
  t124 = Cos(var1[4]);
  t3338 = Sin(var1[3]);
  t3853 = Sin(var1[4]);
  t4338 = Cos(var1[2]);
  t123 = Sin(var1[2]);
  t3814 = -1.*t124*t3338;
  t4097 = -1.*t3816*t3853;
  t4166 = t3814 + t4097;
  t4186 = -1.*t123*t4166;
  t4358 = t3816*t124;
  t4398 = -1.*t3338*t3853;
  t4447 = t4358 + t4398;
  t4640 = -1.*t4338*t4447;
  t4647 = t4186 + t4640;
  t8259 = -1.*t124;
  t8266 = 1. + t8259;
  t8315 = 0.4*t8266;
  t8324 = 0.64*t124;
  t8329 = t8315 + t8324;
  t8400 = Cos(var1[5]);
  t8393 = Cos(var1[6]);
  t8396 = Sin(var1[5]);
  t8456 = Sin(var1[6]);
  t8398 = -1.*t8393*t8396;
  t8461 = -1.*t8400*t8456;
  t8462 = t8398 + t8461;
  t8463 = -1.*t123*t8462;
  t8468 = t8400*t8393;
  t8469 = -1.*t8396*t8456;
  t8486 = t8468 + t8469;
  t8488 = -1.*t4338*t8486;
  t8490 = t8463 + t8488;
  t11027 = -1.*t8393;
  t11028 = 1. + t11027;
  t11029 = 0.4*t11028;
  t11043 = 0.64*t8393;
  t11062 = t11029 + t11043;
  t11120 = -1.*t3816*t123;
  t11121 = -1.*t4338*t3338;
  t11132 = t11120 + t11121;
  t4720 = -1.*t4338*t3816;
  t4744 = t123*t3338;
  t4797 = t4720 + t4744;
  t8383 = -1.*t123*t4447;
  t8369 = t124*t3338;
  t8373 = t3816*t3853;
  t8375 = t8369 + t8373;
  t8382 = -1.*t4338*t8375;
  t8384 = t8382 + t8383;
  t11160 = -1.*t8400*t123;
  t11164 = -1.*t4338*t8396;
  t11180 = t11160 + t11164;
  t8493 = -1.*t4338*t8400;
  t8879 = t123*t8396;
  t10988 = t8493 + t8879;
  t11115 = -1.*t123*t8486;
  t11101 = t8393*t8396;
  t11112 = t8400*t8456;
  t11113 = t11101 + t11112;
  t11114 = -1.*t4338*t11113;
  t11116 = t11114 + t11115;
  t11133 = t4338*t3816;
  t11134 = -1.*t123*t3338;
  t11135 = t11133 + t11134;
  t11142 = t4338*t4447;
  t11141 = -1.*t123*t8375;
  t11143 = t11141 + t11142;
  t11138 = t4338*t4166;
  t11139 = t11138 + t8383;
  t11184 = t4338*t8400;
  t11185 = -1.*t123*t8396;
  t11186 = t11184 + t11185;
  t11209 = t4338*t8486;
  t11202 = -1.*t123*t11113;
  t11210 = t11202 + t11209;
  t11197 = t4338*t8462;
  t11198 = t11197 + t11115;
  t11301 = t8329*t3338;
  t11302 = 0.24*t3816*t3853;
  t11303 = t11301 + t11302;
  t11305 = t3816*t8329;
  t11306 = -0.24*t3338*t3853;
  t11307 = t11305 + t11306;
  t11325 = t11062*t8396;
  t11326 = 0.24*t8400*t8456;
  t11327 = t11325 + t11326;
  t11329 = t8400*t11062;
  t11330 = -0.24*t8396*t8456;
  t11331 = t11329 + t11330;
  t8151 = -0.748*t4797;
  t8357 = t8329*t3853;
  t8358 = -0.24*t124*t3853;
  t8367 = t8357 + t8358;
  t8330 = t8329*t124;
  t8334 = Power(t3853,2);
  t8335 = 0.24*t8334;
  t8344 = t8330 + t8335;
  t11343 = -1.*t3816*t124;
  t11344 = t3338*t3853;
  t11345 = t11343 + t11344;
  t11346 = t4338*t11345;
  t11347 = t4186 + t11346;
  t11136 = -13.6*t11132*t11135;
  t11137 = -13.6*t11132*t4797;
  t11220 = Power(t11132,2);
  t11222 = -6.8*t11220;
  t11224 = t3816*t123;
  t11226 = t4338*t3338;
  t11227 = t11224 + t11226;
  t11228 = -6.8*t11132*t11227;
  t11229 = Power(t11135,2);
  t11230 = -6.8*t11229;
  t11231 = -6.8*t11135*t4797;
  t11232 = t123*t4166;
  t11233 = t11232 + t11142;
  t11239 = t4338*t8375;
  t11240 = t123*t4447;
  t11241 = t11239 + t11240;
  t11292 = Power(t3816,2);
  t11293 = 0.11*t11292;
  t11295 = Power(t3338,2);
  t11297 = 0.11*t11295;
  t11299 = t11293 + t11297;
  t11300 = -6.8*t4797*t11299;
  t11304 = -1.*t11303*t4447;
  t11308 = -1.*t4166*t11307;
  t11309 = t11304 + t11308;
  t11311 = t11303*t8375;
  t11312 = t4447*t11307;
  t11313 = t11311 + t11312;
  t11366 = -1.*t8329*t3338;
  t11367 = -0.24*t3816*t3853;
  t11368 = t11366 + t11367;
  t11348 = 0.384*var2[4]*t11347;
  t11349 = -3.2*t8367*t11139;
  t11350 = -3.2*t8344*t11347;
  t11353 = -6.4*t11143*t11139;
  t11354 = -6.4*t11139*t11347;
  t11357 = -3.2*t11233*t11143;
  t11358 = -3.2*t11139*t11241;
  t11359 = -3.2*t11233*t11347;
  t11360 = t123*t11345;
  t11361 = t11138 + t11360;
  t11362 = -3.2*t11139*t11361;
  t11365 = -3.2*t11139*t11309;
  t11370 = t11303*t4447;
  t11371 = t4166*t11307;
  t11375 = -3.2*t11313*t11347;
  t11400 = -0.24*t124*t3338;
  t11401 = t11400 + t11367;
  t11377 = -1.*t4166*t11303;
  t11403 = 0.24*t3816*t124;
  t11404 = t11403 + t11306;
  t11379 = -1.*t11307*t11345;
  t11022 = -0.748*t10988;
  t11095 = t11062*t8456;
  t11099 = -0.24*t8393*t8456;
  t11100 = t11095 + t11099;
  t11067 = t11062*t8393;
  t11068 = Power(t8456,2);
  t11069 = 0.24*t11068;
  t11080 = t11067 + t11069;
  t11416 = -1.*t8400*t8393;
  t11417 = t8396*t8456;
  t11418 = t11416 + t11417;
  t11419 = t4338*t11418;
  t11420 = t8463 + t11419;
  t11187 = -13.6*t11180*t11186;
  t11188 = -13.6*t11180*t10988;
  t11243 = Power(t11180,2);
  t11244 = -6.8*t11243;
  t11245 = t8400*t123;
  t11248 = t4338*t8396;
  t11251 = t11245 + t11248;
  t11252 = -6.8*t11180*t11251;
  t11253 = Power(t11186,2);
  t11254 = -6.8*t11253;
  t11255 = -6.8*t11186*t10988;
  t11256 = t123*t8462;
  t11257 = t11256 + t11209;
  t11271 = t4338*t11113;
  t11274 = t123*t8486;
  t11275 = t11271 + t11274;
  t11315 = Power(t8400,2);
  t11316 = 0.11*t11315;
  t11317 = Power(t8396,2);
  t11318 = 0.11*t11317;
  t11321 = t11316 + t11318;
  t11324 = -6.8*t10988*t11321;
  t11328 = -1.*t11327*t8486;
  t11332 = -1.*t8462*t11331;
  t11333 = t11328 + t11332;
  t11335 = t11327*t11113;
  t11336 = t8486*t11331;
  t11337 = t11335 + t11336;
  t11439 = -1.*t11062*t8396;
  t11440 = -0.24*t8400*t8456;
  t11441 = t11439 + t11440;
  t11421 = 0.384*var2[6]*t11420;
  t11422 = -3.2*t11100*t11198;
  t11423 = -3.2*t11080*t11420;
  t11426 = -6.4*t11210*t11198;
  t11427 = -6.4*t11198*t11420;
  t11430 = -3.2*t11257*t11210;
  t11431 = -3.2*t11198*t11275;
  t11432 = -3.2*t11257*t11420;
  t11433 = t123*t11418;
  t11434 = t11197 + t11433;
  t11435 = -3.2*t11198*t11434;
  t11438 = -3.2*t11198*t11333;
  t11443 = t11327*t8486;
  t11444 = t8462*t11331;
  t11448 = -3.2*t11337*t11420;
  t11473 = -0.24*t8393*t8396;
  t11474 = t11473 + t11440;
  t11450 = -1.*t8462*t11327;
  t11476 = 0.24*t8400*t8393;
  t11477 = t11476 + t11330;
  t11452 = -1.*t11331*t11418;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(-0.5*(-3.2*Power(t11139,2) - 3.2*Power(t11143,2) - 3.2*Power(t11198,2) - 3.2*Power(t11210,2) + t11222 + t11228 + t11230 + t11231 + t11244 + t11252 + t11254 + t11255 - 3.2*t11116*t11275 - 3.2*t11233*t4647 - 3.2*t11241*t8384 - 3.2*t11257*t8490)*var2[0] - 0.5*(t11136 + t11137 + t11187 + t11188 - 6.4*t11116*t11210 - 6.4*t11139*t4647 - 6.4*t11143*t8384 - 6.4*t11198*t8490)*var2[1] - 0.5*(t11300 + t11324 - 3.2*t11116*t11333 + 2.88*t4338 - 3.2*t11313*t4647 - 3.2*t11309*t8384 - 3.2*t11337*t8490)*var2[2] - 0.5*(t8151 - 3.2*t4647*t8344 - 3.2*t8367*t8384)*var2[3] + 0.384*t4647*var2[4] - 0.5*(t11022 - 3.2*t11100*t11116 - 3.2*t11080*t8490)*var2[5] + 0.384*t8490*var2[6]);
  p_output1[3]=var2[1]*(t11348 - 0.5*(t11222 + t11228 + t11230 + t11231 + t11357 + t11358 + t11359 + t11362)*var2[0] - 0.5*(t11136 + t11137 + t11353 + t11354)*var2[1] - 0.5*(t11300 + t11365 + t11375 - 3.2*t11143*(t11377 + t11379 - 1.*t11368*t4166 - 1.*t11307*t4447) - 3.2*t11139*(t11370 + t11371 + t11368*t4447 + t11307*t8375))*var2[2] - 0.5*(t11349 + t11350 + t8151)*var2[3]);
  p_output1[4]=var2[1]*(t11348 - 0.5*(t11357 + t11358 + t11359 + t11362)*var2[0] - 0.5*(t11353 + t11354)*var2[1] - 0.5*(t11365 + t11375 - 3.2*t11143*(t11377 + t11379 - 1.*t11401*t4166 - 1.*t11404*t4447) - 3.2*t11139*(t11370 + t11371 + t11401*t4447 + t11404*t8375))*var2[2] - 0.5*(t11349 + t11350 - 3.2*t11139*(0.24*t124*t3853 - 1.*t3853*t8329) - 3.2*t11143*(-0.24*Power(t124,2) + t8330))*var2[3]);
  p_output1[5]=var2[1]*(t11421 - 0.5*(t11244 + t11252 + t11254 + t11255 + t11430 + t11431 + t11432 + t11435)*var2[0] - 0.5*(t11187 + t11188 + t11426 + t11427)*var2[1] - 0.5*(t11324 + t11438 + t11448 - 3.2*t11210*(t11450 + t11452 - 1.*t11441*t8462 - 1.*t11331*t8486) - 3.2*t11198*(t11113*t11331 + t11443 + t11444 + t11441*t8486))*var2[2] - 0.5*(t11022 + t11422 + t11423)*var2[5]);
  p_output1[6]=var2[1]*(t11421 - 0.5*(t11430 + t11431 + t11432 + t11435)*var2[0] - 0.5*(t11426 + t11427)*var2[1] - 0.5*(t11438 + t11448 - 3.2*t11198*(t11443 + t11444 + t11113*t11477 + t11474*t8486) - 3.2*t11210*(t11450 + t11452 - 1.*t11474*t8462 - 1.*t11477*t8486))*var2[2] - 0.5*(t11422 + t11423 - 3.2*t11210*(t11067 - 0.24*Power(t8393,2)) - 3.2*t11198*(-1.*t11062*t8456 + 0.24*t8393*t8456))*var2[5]);
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

#include "Ce3_vec2_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
