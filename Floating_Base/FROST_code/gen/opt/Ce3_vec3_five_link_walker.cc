/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:04 GMT-04:00
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
  double t4661;
  double t8346;
  double t8386;
  double t8385;
  double t11119;
  double t11144;
  double t11219;
  double t11234;
  double t11235;
  double t11238;
  double t11242;
  double t11258;
  double t11259;
  double t11260;
  double t11288;
  double t11291;
  double t11310;
  double t11261;
  double t11270;
  double t11282;
  double t11140;
  double t11201;
  double t11215;
  double t11314;
  double t11334;
  double t11338;
  double t11369;
  double t11373;
  double t11385;
  double t11387;
  double t11391;
  double t11392;
  double t11393;
  double t11396;
  double t11397;
  double t11398;
  double t11399;
  double t11402;
  double t11409;
  double t11410;
  double t11411;
  double t11405;
  double t11406;
  double t11407;
  double t11386;
  double t11388;
  double t11389;
  double t11412;
  double t11413;
  double t11414;
  double t9020;
  double t9481;
  double t9590;
  double t11084;
  double t11117;
  double t11283;
  double t11339;
  double t11340;
  double t11236;
  double t11355;
  double t11356;
  double t11363;
  double t11378;
  double t11380;
  double t11381;
  double t11382;
  double t11383;
  double t11408;
  double t11415;
  double t11424;
  double t11394;
  double t11437;
  double t11442;
  double t11445;
  double t11483;
  double t11484;
  double t11485;
  double t11486;
  double t11487;
  double t11488;
  double t11489;
  double t11490;
  double t8350;
  double t8391;
  double t8491;
  double t11118;
  double t11461;
  double t11462;
  double t11342;
  double t11503;
  double t11504;
  double t11505;
  double t11457;
  double t11458;
  double t11459;
  double t11500;
  double t11501;
  double t11502;
  double t11506;
  double t11507;
  double t11453;
  double t11454;
  double t11455;
  double t11456;
  double t11519;
  double t11520;
  double t11492;
  double t11493;
  double t11494;
  double t11495;
  double t11538;
  double t11539;
  double t11540;
  double t11541;
  double t11542;
  double t11543;
  double t11544;
  double t11497;
  double t11498;
  double t11499;
  double t11511;
  double t11513;
  double t11514;
  double t11515;
  double t11555;
  double t11556;
  double t11557;
  double t11521;
  double t11523;
  double t11524;
  double t11525;
  double t11526;
  double t11527;
  double t11528;
  double t11575;
  double t11576;
  double t11577;
  double t11578;
  double t11579;
  double t11580;
  double t11581;
  double t11582;
  double t11372;
  double t11374;
  double t11376;
  double t11384;
  double t11472;
  double t11475;
  double t11428;
  double t11595;
  double t11596;
  double t11597;
  double t11468;
  double t11469;
  double t11470;
  double t11592;
  double t11593;
  double t11594;
  double t11598;
  double t11599;
  double t11464;
  double t11465;
  double t11466;
  double t11467;
  double t11611;
  double t11612;
  double t11584;
  double t11585;
  double t11586;
  double t11587;
  double t11630;
  double t11631;
  double t11632;
  double t11633;
  double t11634;
  double t11635;
  double t11636;
  double t11589;
  double t11590;
  double t11591;
  double t11603;
  double t11605;
  double t11606;
  double t11607;
  double t11647;
  double t11648;
  double t11649;
  double t11613;
  double t11615;
  double t11616;
  double t11617;
  double t11618;
  double t11619;
  double t11620;
  t4661 = Cos(var1[2]);
  t8346 = Cos(var1[3]);
  t8386 = Sin(var1[3]);
  t8385 = Sin(var1[2]);
  t11119 = Cos(var1[4]);
  t11144 = Sin(var1[4]);
  t11219 = t8346*t11119;
  t11234 = -1.*t8386*t11144;
  t11235 = t11219 + t11234;
  t11238 = -1.*t11119;
  t11242 = 1. + t11238;
  t11258 = 0.4*t11242;
  t11259 = 0.64*t11119;
  t11260 = t11258 + t11259;
  t11288 = -1.*t11119*t8386;
  t11291 = -1.*t8346*t11144;
  t11310 = t11288 + t11291;
  t11261 = t11260*t8386;
  t11270 = 0.24*t8346*t11144;
  t11282 = t11261 + t11270;
  t11140 = t11119*t8386;
  t11201 = t8346*t11144;
  t11215 = t11140 + t11201;
  t11314 = t8346*t11260;
  t11334 = -0.24*t8386*t11144;
  t11338 = t11314 + t11334;
  t11369 = Cos(var1[5]);
  t11373 = Sin(var1[5]);
  t11385 = Cos(var1[6]);
  t11387 = Sin(var1[6]);
  t11391 = t11369*t11385;
  t11392 = -1.*t11373*t11387;
  t11393 = t11391 + t11392;
  t11396 = -1.*t11385;
  t11397 = 1. + t11396;
  t11398 = 0.4*t11397;
  t11399 = 0.64*t11385;
  t11402 = t11398 + t11399;
  t11409 = -1.*t11385*t11373;
  t11410 = -1.*t11369*t11387;
  t11411 = t11409 + t11410;
  t11405 = t11402*t11373;
  t11406 = 0.24*t11369*t11387;
  t11407 = t11405 + t11406;
  t11386 = t11385*t11373;
  t11388 = t11369*t11387;
  t11389 = t11386 + t11388;
  t11412 = t11369*t11402;
  t11413 = -0.24*t11373*t11387;
  t11414 = t11412 + t11413;
  t9020 = Power(t8346,2);
  t9481 = 0.11*t9020;
  t9590 = Power(t8386,2);
  t11084 = 0.11*t9590;
  t11117 = t9481 + t11084;
  t11283 = -1.*t11282*t11235;
  t11339 = -1.*t11310*t11338;
  t11340 = t11283 + t11339;
  t11236 = -1.*t8385*t11235;
  t11355 = t11282*t11215;
  t11356 = t11235*t11338;
  t11363 = t11355 + t11356;
  t11378 = Power(t11369,2);
  t11380 = 0.11*t11378;
  t11381 = Power(t11373,2);
  t11382 = 0.11*t11381;
  t11383 = t11380 + t11382;
  t11408 = -1.*t11407*t11393;
  t11415 = -1.*t11411*t11414;
  t11424 = t11408 + t11415;
  t11394 = -1.*t8385*t11393;
  t11437 = t11407*t11389;
  t11442 = t11393*t11414;
  t11445 = t11437 + t11442;
  t11483 = -1.*t11260*t8386;
  t11484 = -0.24*t8346*t11144;
  t11485 = t11483 + t11484;
  t11486 = t11485*t11235;
  t11487 = t11282*t11235;
  t11488 = t11310*t11338;
  t11489 = t11215*t11338;
  t11490 = t11486 + t11487 + t11488 + t11489;
  t8350 = -1.*t4661*t8346;
  t8391 = t8385*t8386;
  t8491 = t8350 + t8391;
  t11118 = -6.8*t8491*t11117;
  t11461 = t4661*t11310;
  t11462 = t11461 + t11236;
  t11342 = -1.*t8385*t11310;
  t11503 = -1.*t8346*t11119;
  t11504 = t8386*t11144;
  t11505 = t11503 + t11504;
  t11457 = -1.*t8385*t11215;
  t11458 = t4661*t11235;
  t11459 = t11457 + t11458;
  t11500 = -1.*t11310*t11485;
  t11501 = -1.*t11310*t11282;
  t11502 = -1.*t11235*t11338;
  t11506 = -1.*t11338*t11505;
  t11507 = t11500 + t11501 + t11502 + t11506;
  t11453 = -1.*t8346*t8385;
  t11454 = -1.*t4661*t8386;
  t11455 = t11453 + t11454;
  t11456 = -6.8*t11455*t11117;
  t11519 = t8385*t11310;
  t11520 = t11519 + t11458;
  t11492 = t11260*t11119;
  t11493 = Power(t11144,2);
  t11494 = 0.24*t11493;
  t11495 = t11492 + t11494;
  t11538 = -0.24*t11119*t8386;
  t11539 = t11538 + t11484;
  t11540 = t11539*t11235;
  t11541 = 0.24*t8346*t11119;
  t11542 = t11541 + t11334;
  t11543 = t11215*t11542;
  t11544 = t11540 + t11487 + t11488 + t11543;
  t11497 = t11260*t11144;
  t11498 = -0.24*t11119*t11144;
  t11499 = t11497 + t11498;
  t11511 = -3.2*t11462*t11340;
  t11513 = t4661*t11505;
  t11514 = t11342 + t11513;
  t11515 = -3.2*t11363*t11514;
  t11555 = -1.*t11310*t11539;
  t11556 = -1.*t11235*t11542;
  t11557 = t11555 + t11501 + t11556 + t11506;
  t11521 = -3.2*t11520*t11340;
  t11523 = t8385*t11505;
  t11524 = t11461 + t11523;
  t11525 = -3.2*t11363*t11524;
  t11526 = t4661*t11215;
  t11527 = t8385*t11235;
  t11528 = t11526 + t11527;
  t11575 = -1.*t11402*t11373;
  t11576 = -0.24*t11369*t11387;
  t11577 = t11575 + t11576;
  t11578 = t11577*t11393;
  t11579 = t11407*t11393;
  t11580 = t11411*t11414;
  t11581 = t11389*t11414;
  t11582 = t11578 + t11579 + t11580 + t11581;
  t11372 = -1.*t4661*t11369;
  t11374 = t8385*t11373;
  t11376 = t11372 + t11374;
  t11384 = -6.8*t11376*t11383;
  t11472 = t4661*t11411;
  t11475 = t11472 + t11394;
  t11428 = -1.*t8385*t11411;
  t11595 = -1.*t11369*t11385;
  t11596 = t11373*t11387;
  t11597 = t11595 + t11596;
  t11468 = -1.*t8385*t11389;
  t11469 = t4661*t11393;
  t11470 = t11468 + t11469;
  t11592 = -1.*t11411*t11577;
  t11593 = -1.*t11411*t11407;
  t11594 = -1.*t11393*t11414;
  t11598 = -1.*t11414*t11597;
  t11599 = t11592 + t11593 + t11594 + t11598;
  t11464 = -1.*t11369*t8385;
  t11465 = -1.*t4661*t11373;
  t11466 = t11464 + t11465;
  t11467 = -6.8*t11466*t11383;
  t11611 = t8385*t11411;
  t11612 = t11611 + t11469;
  t11584 = t11402*t11385;
  t11585 = Power(t11387,2);
  t11586 = 0.24*t11585;
  t11587 = t11584 + t11586;
  t11630 = -0.24*t11385*t11373;
  t11631 = t11630 + t11576;
  t11632 = t11631*t11393;
  t11633 = 0.24*t11369*t11385;
  t11634 = t11633 + t11413;
  t11635 = t11389*t11634;
  t11636 = t11632 + t11579 + t11580 + t11635;
  t11589 = t11402*t11387;
  t11590 = -0.24*t11385*t11387;
  t11591 = t11589 + t11590;
  t11603 = -3.2*t11475*t11424;
  t11605 = t4661*t11597;
  t11606 = t11428 + t11605;
  t11607 = -3.2*t11445*t11606;
  t11647 = -1.*t11411*t11631;
  t11648 = -1.*t11393*t11634;
  t11649 = t11647 + t11593 + t11648 + t11598;
  t11613 = -3.2*t11612*t11424;
  t11615 = t8385*t11597;
  t11616 = t11472 + t11615;
  t11617 = -3.2*t11445*t11616;
  t11618 = t4661*t11389;
  t11619 = t8385*t11393;
  t11620 = t11618 + t11619;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t11456 - 3.2*t11340*t11459 - 3.2*t11363*t11462 + t11467 - 3.2*t11424*t11470 - 3.2*t11445*t11475 + 2.88*t8385)*var2[0] - 0.5*(t11118 + t11384 + 2.88*t4661 - 3.2*t11340*(t11236 - 1.*t11215*t4661) - 3.2*t11363*(t11342 - 1.*t11235*t4661) - 3.2*t11424*(t11394 - 1.*t11389*t4661) - 3.2*t11445*(t11428 - 1.*t11393*t4661))*var2[1])*var2[2];
  p_output1[3]=var2[2]*(-0.5*(t11456 - 3.2*t11490*t11520 + t11521 + t11525 - 3.2*t11507*t11528)*var2[0] - 0.5*(t11118 - 3.2*t11462*t11490 - 3.2*t11459*t11507 + t11511 + t11515)*var2[1] - 0.5*(-6.4*t11363*t11490 - 6.4*t11340*t11507)*var2[2] - 0.5*(-3.2*t11490*t11495 - 3.2*t11499*t11507)*var2[3] + 0.384*t11490*var2[4]);
  p_output1[4]=var2[2]*(-0.5*(t11521 + t11525 - 3.2*t11520*t11544 - 3.2*t11528*t11557)*var2[0] - 0.5*(t11511 + t11515 - 3.2*t11462*t11544 - 3.2*t11459*t11557)*var2[1] - 0.5*(-6.4*t11363*t11544 - 6.4*t11340*t11557)*var2[2] - 0.5*(-3.2*(0.24*t11119*t11144 - 1.*t11144*t11260)*t11363 - 3.2*t11340*(-0.24*Power(t11119,2) + t11492) - 3.2*t11495*t11544 - 3.2*t11499*t11557)*var2[3] + 0.384*t11544*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(t11467 - 3.2*t11582*t11612 + t11613 + t11617 - 3.2*t11599*t11620)*var2[0] - 0.5*(t11384 - 3.2*t11475*t11582 - 3.2*t11470*t11599 + t11603 + t11607)*var2[1] - 0.5*(-6.4*t11445*t11582 - 6.4*t11424*t11599)*var2[2] - 0.5*(-3.2*t11582*t11587 - 3.2*t11591*t11599)*var2[5] + 0.384*t11582*var2[6]);
  p_output1[6]=var2[2]*(-0.5*(t11613 + t11617 - 3.2*t11612*t11636 - 3.2*t11620*t11649)*var2[0] - 0.5*(t11603 + t11607 - 3.2*t11475*t11636 - 3.2*t11470*t11649)*var2[1] - 0.5*(-6.4*t11445*t11636 - 6.4*t11424*t11649)*var2[2] - 0.5*(-3.2*(0.24*t11385*t11387 - 1.*t11387*t11402)*t11445 - 3.2*t11424*(-0.24*Power(t11385,2) + t11584) - 3.2*t11587*t11636 - 3.2*t11591*t11649)*var2[5] + 0.384*t11636*var2[6]);
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

#include "Ce3_vec3_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
