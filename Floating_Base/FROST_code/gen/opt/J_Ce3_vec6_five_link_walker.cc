/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:52:30 GMT-04:00
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
  double t7625;
  double t7319;
  double t7408;
  double t6632;
  double t11532;
  double t6626;
  double t8208;
  double t11325;
  double t11455;
  double t11456;
  double t11475;
  double t12294;
  double t12296;
  double t12326;
  double t13561;
  double t14124;
  double t14125;
  double t14126;
  double t14135;
  double t14139;
  double t12327;
  double t11498;
  double t11681;
  double t12073;
  double t12096;
  double t12111;
  double t12201;
  double t12220;
  double t7022;
  double t7410;
  double t7411;
  double t7503;
  double t14141;
  double t12290;
  double t14162;
  double t14228;
  double t14236;
  double t14242;
  double t12354;
  double t14247;
  double t14258;
  double t14259;
  double t14260;
  double t14255;
  double t14256;
  double t14257;
  double t14261;
  double t14262;
  double t14263;
  double t14266;
  double t14297;
  double t14298;
  double t14306;
  double t14278;
  double t14282;
  double t14283;
  double t14140;
  double t14146;
  double t14267;
  double t14268;
  double t14269;
  double t14284;
  double t14285;
  double t14290;
  double t13537;
  double t14147;
  double t14153;
  double t14323;
  double t14325;
  double t14326;
  double t14327;
  double t14329;
  double t14330;
  double t14331;
  double t14264;
  double t14265;
  double t14271;
  double t14275;
  double t14276;
  double t14277;
  double t14243;
  double t14401;
  double t14402;
  double t14403;
  double t14397;
  double t14398;
  double t14399;
  double t14411;
  double t14412;
  double t14413;
  double t14406;
  double t14407;
  double t14408;
  double t14378;
  double t14379;
  double t14380;
  double t14386;
  double t14389;
  double t14391;
  double t14392;
  double t14393;
  double t14394;
  double t14405;
  double t14452;
  double t14453;
  double t14415;
  double t14422;
  double t14456;
  double t14457;
  double t14459;
  double t14460;
  double t14429;
  double t14440;
  double t14441;
  double t14446;
  double t14447;
  double t14448;
  double t14449;
  double t14450;
  double t14466;
  double t14467;
  double t14468;
  double t14469;
  double t14470;
  double t14484;
  double t14485;
  double t14486;
  double t14489;
  double t14490;
  double t14491;
  double t14291;
  double t14307;
  double t14309;
  double t14311;
  double t14312;
  double t14317;
  double t14318;
  double t14320;
  double t14321;
  double t14322;
  double t14436;
  double t14437;
  double t14438;
  double t14439;
  double t14442;
  double t14443;
  double t14444;
  double t14445;
  double t14451;
  double t14454;
  double t14455;
  double t14458;
  double t14461;
  double t14462;
  double t14463;
  double t14464;
  double t14465;
  double t14471;
  double t14472;
  double t14473;
  double t14474;
  double t14475;
  double t14476;
  double t14477;
  double t14478;
  double t14479;
  double t14480;
  double t14481;
  double t14482;
  double t14483;
  double t14497;
  double t14498;
  double t14499;
  double t14248;
  double t14517;
  double t14522;
  double t14523;
  double t14525;
  double t14526;
  double t14528;
  double t14529;
  double t14530;
  double t14536;
  double t14537;
  double t14538;
  double t14548;
  double t14549;
  double t14550;
  double t14553;
  double t14554;
  double t14555;
  double t14556;
  double t14557;
  t7625 = Cos(var1[6]);
  t7319 = Sin(var1[2]);
  t7408 = Sin(var1[5]);
  t6632 = Cos(var1[5]);
  t11532 = Sin(var1[6]);
  t6626 = Cos(var1[2]);
  t8208 = -1.*t7625;
  t11325 = 1. + t8208;
  t11455 = 0.4*t11325;
  t11456 = 0.64*t7625;
  t11475 = t11455 + t11456;
  t12294 = t6632*t7625;
  t12296 = -1.*t7408*t11532;
  t12326 = t12294 + t12296;
  t13561 = t11475*t11532;
  t14124 = -0.24*t7625*t11532;
  t14125 = t13561 + t14124;
  t14126 = t7625*t7408;
  t14135 = t6632*t11532;
  t14139 = t14126 + t14135;
  t12327 = -1.*t6626*t12326;
  t11498 = t11475*t7625;
  t11681 = Power(t11532,2);
  t12073 = 0.24*t11681;
  t12096 = t11498 + t12073;
  t12111 = -1.*t7625*t7408;
  t12201 = -1.*t6632*t11532;
  t12220 = t12111 + t12201;
  t7022 = -1.*t6626*t6632;
  t7410 = t7319*t7408;
  t7411 = t7022 + t7410;
  t7503 = -0.748*t7411;
  t14141 = -1.*t7319*t12326;
  t12290 = -1.*t7319*t12220;
  t14162 = t6632*t7319;
  t14228 = t6626*t7408;
  t14236 = t14162 + t14228;
  t14242 = -0.748*t14236;
  t12354 = t12290 + t12327;
  t14247 = -1.*t6626*t12220;
  t14258 = -1.*t6632*t7625;
  t14259 = t7408*t11532;
  t14260 = t14258 + t14259;
  t14255 = t6626*t12220;
  t14256 = t14255 + t14141;
  t14257 = -3.2*t14125*t14256;
  t14261 = t6626*t14260;
  t14262 = t12290 + t14261;
  t14263 = -3.2*t12096*t14262;
  t14266 = -3.2*t14125*t12354;
  t14297 = -1.*t11475*t11532;
  t14298 = 0.24*t7625*t11532;
  t14306 = t14297 + t14298;
  t14278 = Power(t7625,2);
  t14282 = -0.24*t14278;
  t14283 = t11498 + t14282;
  t14140 = -1.*t6626*t14139;
  t14146 = t14140 + t14141;
  t14267 = -1.*t7319*t14260;
  t14268 = t14247 + t14267;
  t14269 = -3.2*t12096*t14268;
  t14284 = -1.*t7319*t14139;
  t14285 = t6626*t12326;
  t14290 = t14284 + t14285;
  t13537 = -3.2*t12096*t12354;
  t14147 = -3.2*t14125*t14146;
  t14153 = t7503 + t13537 + t14147;
  t14323 = -1.*t6632*t7319;
  t14325 = -1.*t6626*t7408;
  t14326 = t14323 + t14325;
  t14327 = -0.748*t14326;
  t14329 = -3.2*t14125*t14290;
  t14330 = -3.2*t12096*t14256;
  t14331 = t14327 + t14329 + t14330;
  t14264 = t7503 + t14257 + t14263;
  t14265 = -0.5*var2[0]*t14264;
  t14271 = t14242 + t14266 + t14269;
  t14275 = -0.5*var2[1]*t14271;
  t14276 = t14265 + t14275;
  t14277 = var2[5]*t14276;
  t14243 = t7319*t14139;
  t14401 = t6632*t11475;
  t14402 = -0.24*t7408*t11532;
  t14403 = t14401 + t14402;
  t14397 = -1.*t11475*t7408;
  t14398 = -0.24*t6632*t11532;
  t14399 = t14397 + t14398;
  t14411 = t11475*t7408;
  t14412 = 0.24*t6632*t11532;
  t14413 = t14411 + t14412;
  t14406 = -1.*t6632*t11475;
  t14407 = 0.24*t7408*t11532;
  t14408 = t14406 + t14407;
  t14378 = -3.2*t14125*t14262;
  t14379 = t6626*t14139;
  t14380 = t14379 + t14267;
  t14386 = -3.2*t12096*t14380;
  t14389 = t14243 + t14261;
  t14391 = -3.2*t12096*t14389;
  t14392 = t7319*t14260;
  t14393 = t14255 + t14392;
  t14394 = -3.2*t14125*t14393;
  t14405 = -1.*t14139*t14403;
  t14452 = -0.24*t7625*t7408;
  t14453 = t14452 + t14398;
  t14415 = -1.*t14413*t14260;
  t14422 = t12220*t14413;
  t14456 = 0.24*t6632*t7625;
  t14457 = t14456 + t14402;
  t14459 = -0.24*t6632*t7625;
  t14460 = t14459 + t14407;
  t14429 = t14403*t14260;
  t14440 = t7319*t12220;
  t14441 = t14440 + t14285;
  t14446 = t14399*t12326;
  t14447 = t14413*t12326;
  t14448 = t12220*t14403;
  t14449 = t14139*t14403;
  t14450 = t14446 + t14447 + t14448 + t14449;
  t14466 = -1.*t12220*t14399;
  t14467 = -1.*t12220*t14413;
  t14468 = -1.*t12326*t14403;
  t14469 = -1.*t14403*t14260;
  t14470 = t14466 + t14467 + t14468 + t14469;
  t14484 = -3.2*t14125*t14441;
  t14485 = -3.2*t12096*t14393;
  t14486 = t14327 + t14484 + t14485;
  t14489 = -3.2*t12096*t14450;
  t14490 = -3.2*t14125*t14470;
  t14491 = t14489 + t14490;
  t14291 = -3.2*t14283*t14290;
  t14307 = -3.2*t14306*t14256;
  t14309 = t14291 + t14257 + t14307 + t14263;
  t14311 = -0.5*var2[0]*t14309;
  t14312 = -3.2*t14306*t12354;
  t14317 = -3.2*t14283*t14146;
  t14318 = t14266 + t14312 + t14317 + t14269;
  t14320 = -0.5*var2[1]*t14318;
  t14321 = t14311 + t14320;
  t14322 = var2[5]*t14321;
  t14436 = -3.2*t14283*t14256;
  t14437 = -3.2*t14306*t14262;
  t14438 = t14436 + t14378 + t14437 + t14386;
  t14439 = -0.5*var2[1]*t14438;
  t14442 = -3.2*t14283*t14441;
  t14443 = -3.2*t14306*t14393;
  t14444 = t14442 + t14391 + t14394 + t14443;
  t14445 = -0.5*var2[0]*t14444;
  t14451 = -3.2*t14306*t14450;
  t14454 = -1.*t14453*t12326;
  t14455 = -1.*t12220*t14403;
  t14458 = -1.*t12220*t14457;
  t14461 = -1.*t12220*t14460;
  t14462 = -1.*t14399*t14260;
  t14463 = -1.*t14453*t14260;
  t14464 = t14454 + t14455 + t14405 + t14458 + t14461 + t14462 + t14463 + t14415;
  t14465 = -3.2*t14125*t14464;
  t14471 = -3.2*t14283*t14470;
  t14472 = t12220*t14399;
  t14473 = t12220*t14453;
  t14474 = t14453*t14139;
  t14475 = t12326*t14403;
  t14476 = t12326*t14457;
  t14477 = t12326*t14460;
  t14478 = t14472 + t14473 + t14422 + t14474 + t14475 + t14476 + t14477 + t14429;
  t14479 = -3.2*t12096*t14478;
  t14480 = t14451 + t14465 + t14471 + t14479;
  t14481 = -0.5*var2[2]*t14480;
  t14482 = t14439 + t14445 + t14481;
  t14483 = var2[5]*t14482;
  t14497 = -1.*t11475*t7625;
  t14498 = 0.24*t14278;
  t14499 = t14497 + t14498;
  t14248 = t7319*t12326;
  t14517 = t14379 + t14248;
  t14522 = -1.*t14413*t12326;
  t14523 = t14522 + t14455;
  t14525 = t14413*t14139;
  t14526 = t14525 + t14475;
  t14528 = t14453*t12326;
  t14529 = t14139*t14457;
  t14530 = t14528 + t14447 + t14448 + t14529;
  t14536 = -1.*t12220*t14453;
  t14537 = -1.*t12326*t14457;
  t14538 = t14536 + t14467 + t14537 + t14469;
  t14548 = -3.2*t14306*t14441;
  t14549 = -3.2*t14283*t14517;
  t14550 = t14484 + t14548 + t14549 + t14485;
  t14553 = -3.2*t14283*t14523;
  t14554 = -3.2*t14306*t14526;
  t14555 = -3.2*t12096*t14530;
  t14556 = -3.2*t14125*t14538;
  t14557 = t14553 + t14554 + t14555 + t14556;
  p_output1[0]=(-0.5*t14153*var2[0] - 0.5*(t14242 - 3.2*t14125*(t12327 + t14243) - 3.2*t12096*(t14247 + t14248))*var2[1])*var2[5];
  p_output1[1]=t14277;
  p_output1[2]=t14322;
  p_output1[3]=-0.5*t14331*var2[5];
  p_output1[4]=-0.5*t14153*var2[5];
  p_output1[5]=-0.5*t14331*var2[0] - 0.5*t14153*var2[1];
  p_output1[6]=t14277;
  p_output1[7]=(-0.5*(t14391 + t14394 + t7503)*var2[0] - 0.5*(t14242 + t14378 + t14386)*var2[1] - 0.5*(-3.2*t14125*(-1.*t12326*t14399 - 2.*t14260*t14399 - 2.*t12220*t14403 + t14405 - 1.*t12220*t14408 + t14415) - 3.2*t12096*(2.*t12220*t14399 + t14139*t14399 + 2.*t12326*t14403 + t12326*t14408 + t14422 + t14429))*var2[2])*var2[5];
  p_output1[8]=t14483;
  p_output1[9]=-0.5*t14486*var2[5];
  p_output1[10]=-0.5*t14264*var2[5];
  p_output1[11]=-0.5*t14491*var2[5];
  p_output1[12]=-0.5*t14486*var2[0] - 0.5*t14264*var2[1] - 0.5*t14491*var2[2];
  p_output1[13]=t14322;
  p_output1[14]=t14483;
  p_output1[15]=var2[5]*(-0.5*(t14391 - 6.4*t14306*t14393 + t14394 - 6.4*t14283*t14441 - 3.2*t14441*t14499 - 3.2*t14306*t14517)*var2[0] - 0.5*(-6.4*t14256*t14283 - 6.4*t14262*t14306 - 3.2*t14290*t14306 + t14378 + t14386 - 3.2*t14256*t14499)*var2[1] - 0.5*(-3.2*t14125*(t14405 + t14415 - 2.*t14260*t14453 + t14454 - 2.*t12220*t14457 + t14461) - 3.2*t12096*(t14422 + t14429 + 2.*t12220*t14453 + 2.*t12326*t14457 + t14474 + t14477) - 3.2*t14306*t14523 - 3.2*t14499*t14526 - 6.4*t14306*t14530 - 6.4*t14283*t14538)*var2[2] - 0.5*(-6.4*Power(t14283,2) - 6.4*t14125*t14306 - 6.4*Power(t14306,2) - 6.4*t12096*t14499)*var2[5] + 0.384*t14499*var2[6]);
  p_output1[16]=-0.5*t14550*var2[5];
  p_output1[17]=-0.5*t14309*var2[5];
  p_output1[18]=-0.5*t14557*var2[5];
  p_output1[19]=-0.5*t14550*var2[0] - 0.5*t14309*var2[1] - 0.5*t14557*var2[2] - 1.*(-6.4*t14125*t14283 - 6.4*t12096*t14306)*var2[5] + 0.384*t14306*var2[6];
  p_output1[20]=0.384*t14306*var2[5];
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
