/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:53 GMT-04:00
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
  double t887;
  double t349;
  double t782;
  double t4653;
  double t4901;
  double t122;
  double t6806;
  double t6856;
  double t6871;
  double t8392;
  double t8462;
  double t8927;
  double t9155;
  double t9228;
  double t870;
  double t4823;
  double t4859;
  double t4860;
  double t7037;
  double t7101;
  double t11389;
  double t11085;
  double t11201;
  double t11390;
  double t11510;
  double t11519;
  double t11520;
  double t11580;
  double t11626;
  double t11631;
  double t11635;
  double t11759;
  double t11374;
  double t11413;
  double t11459;
  double t11491;
  double t11529;
  double t11537;
  double t7219;
  double t7741;
  double t8385;
  double t18099;
  double t18100;
  double t18101;
  double t10039;
  double t9561;
  double t10032;
  double t10033;
  double t10035;
  double t10354;
  double t11546;
  double t11548;
  double t11553;
  double t18189;
  double t18201;
  double t18202;
  double t16295;
  double t11804;
  double t12985;
  double t13002;
  double t15219;
  double t16341;
  double t18103;
  double t18104;
  double t18105;
  double t18144;
  double t18145;
  double t18185;
  double t18186;
  double t18187;
  double t18204;
  double t18205;
  double t18224;
  double t18242;
  double t18243;
  double t18245;
  double t18246;
  double t18256;
  double t18415;
  double t18417;
  double t18418;
  double t18420;
  double t18421;
  double t18422;
  double t18437;
  double t18438;
  double t18439;
  double t18441;
  double t18442;
  double t18443;
  double t8391;
  double t9236;
  double t9325;
  double t9336;
  double t10414;
  double t10415;
  double t10463;
  double t10765;
  double t18459;
  double t18460;
  double t18461;
  double t18463;
  double t18464;
  double t18102;
  double t18125;
  double t18278;
  double t18279;
  double t18283;
  double t18284;
  double t18294;
  double t18295;
  double t18296;
  double t18297;
  double t18298;
  double t18303;
  double t18404;
  double t18405;
  double t18411;
  double t18412;
  double t18413;
  double t18414;
  double t18419;
  double t18423;
  double t18424;
  double t18426;
  double t18427;
  double t18428;
  double t18487;
  double t18488;
  double t18489;
  double t18465;
  double t18466;
  double t18467;
  double t18471;
  double t18472;
  double t18478;
  double t18479;
  double t18480;
  double t18481;
  double t18482;
  double t18483;
  double t18486;
  double t18491;
  double t18492;
  double t18497;
  double t18542;
  double t18543;
  double t18499;
  double t18545;
  double t18546;
  double t18501;
  double t11565;
  double t11782;
  double t11796;
  double t11797;
  double t17615;
  double t17907;
  double t18001;
  double t18040;
  double t18578;
  double t18580;
  double t18583;
  double t18584;
  double t18585;
  double t18203;
  double t18225;
  double t18347;
  double t18357;
  double t18363;
  double t18374;
  double t18375;
  double t18376;
  double t18377;
  double t18378;
  double t18379;
  double t18380;
  double t18430;
  double t18432;
  double t18433;
  double t18434;
  double t18435;
  double t18436;
  double t18440;
  double t18444;
  double t18449;
  double t18451;
  double t18452;
  double t18453;
  double t18618;
  double t18619;
  double t18620;
  double t18586;
  double t18594;
  double t18598;
  double t18605;
  double t18606;
  double t18609;
  double t18610;
  double t18611;
  double t18612;
  double t18613;
  double t18614;
  double t18617;
  double t18622;
  double t18623;
  double t18646;
  double t18683;
  double t18684;
  double t18648;
  double t18686;
  double t18690;
  double t18651;
  t887 = Cos(var1[3]);
  t349 = Cos(var1[4]);
  t782 = Sin(var1[3]);
  t4653 = Sin(var1[4]);
  t4901 = Sin(var1[2]);
  t122 = Cos(var1[2]);
  t6806 = t887*t349;
  t6856 = -1.*t782*t4653;
  t6871 = t6806 + t6856;
  t8392 = -1.*t349;
  t8462 = 1. + t8392;
  t8927 = 0.4*t8462;
  t9155 = 0.64*t349;
  t9228 = t8927 + t9155;
  t870 = -1.*t349*t782;
  t4823 = -1.*t887*t4653;
  t4859 = t870 + t4823;
  t4860 = t122*t4859;
  t7037 = -1.*t4901*t6871;
  t7101 = t4860 + t7037;
  t11389 = Cos(var1[5]);
  t11085 = Cos(var1[6]);
  t11201 = Sin(var1[5]);
  t11390 = Sin(var1[6]);
  t11510 = t11389*t11085;
  t11519 = -1.*t11201*t11390;
  t11520 = t11510 + t11519;
  t11580 = -1.*t11085;
  t11626 = 1. + t11580;
  t11631 = 0.4*t11626;
  t11635 = 0.64*t11085;
  t11759 = t11631 + t11635;
  t11374 = -1.*t11085*t11201;
  t11413 = -1.*t11389*t11390;
  t11459 = t11374 + t11413;
  t11491 = t122*t11459;
  t11529 = -1.*t4901*t11520;
  t11537 = t11491 + t11529;
  t7219 = -1.*t887*t4901;
  t7741 = -1.*t122*t782;
  t8385 = t7219 + t7741;
  t18099 = t122*t887;
  t18100 = -1.*t4901*t782;
  t18101 = t18099 + t18100;
  t10039 = t122*t6871;
  t9561 = t349*t782;
  t10032 = t887*t4653;
  t10033 = t9561 + t10032;
  t10035 = -1.*t4901*t10033;
  t10354 = t10035 + t10039;
  t11546 = -1.*t11389*t4901;
  t11548 = -1.*t122*t11201;
  t11553 = t11546 + t11548;
  t18189 = t122*t11389;
  t18201 = -1.*t4901*t11201;
  t18202 = t18189 + t18201;
  t16295 = t122*t11520;
  t11804 = t11085*t11201;
  t12985 = t11389*t11390;
  t13002 = t11804 + t12985;
  t15219 = -1.*t4901*t13002;
  t16341 = t15219 + t16295;
  t18103 = t887*t4901;
  t18104 = t122*t782;
  t18105 = t18103 + t18104;
  t18144 = t4901*t4859;
  t18145 = t18144 + t10039;
  t18185 = t122*t10033;
  t18186 = t4901*t6871;
  t18187 = t18185 + t18186;
  t18204 = t11389*t4901;
  t18205 = t122*t11201;
  t18224 = t18204 + t18205;
  t18242 = t4901*t11459;
  t18243 = t18242 + t16295;
  t18245 = t122*t13002;
  t18246 = t4901*t11520;
  t18256 = t18245 + t18246;
  t18415 = t9228*t782;
  t18417 = 0.24*t887*t4653;
  t18418 = t18415 + t18417;
  t18420 = t887*t9228;
  t18421 = -0.24*t782*t4653;
  t18422 = t18420 + t18421;
  t18437 = t11759*t11201;
  t18438 = 0.24*t11389*t11390;
  t18439 = t18437 + t18438;
  t18441 = t11389*t11759;
  t18442 = -0.24*t11201*t11390;
  t18443 = t18441 + t18442;
  t8391 = -0.748*t8385;
  t9236 = t9228*t4653;
  t9325 = -0.24*t349*t4653;
  t9336 = t9236 + t9325;
  t10414 = t9228*t349;
  t10415 = Power(t4653,2);
  t10463 = 0.24*t10415;
  t10765 = t10414 + t10463;
  t18459 = -1.*t887*t349;
  t18460 = t782*t4653;
  t18461 = t18459 + t18460;
  t18463 = t4901*t18461;
  t18464 = t4860 + t18463;
  t18102 = -13.6*t8385*t18101;
  t18125 = -13.6*t18105*t18101;
  t18278 = Power(t8385,2);
  t18279 = -6.8*t18278;
  t18283 = -6.8*t8385*t18105;
  t18284 = Power(t18101,2);
  t18294 = -6.8*t18284;
  t18295 = -1.*t122*t887;
  t18296 = t4901*t782;
  t18297 = t18295 + t18296;
  t18298 = -6.8*t18101*t18297;
  t18303 = -1.*t4901*t4859;
  t18404 = Power(t887,2);
  t18405 = 0.11*t18404;
  t18411 = Power(t782,2);
  t18412 = 0.11*t18411;
  t18413 = t18405 + t18412;
  t18414 = -6.8*t8385*t18413;
  t18419 = -1.*t18418*t6871;
  t18423 = -1.*t4859*t18422;
  t18424 = t18419 + t18423;
  t18426 = t18418*t10033;
  t18427 = t6871*t18422;
  t18428 = t18426 + t18427;
  t18487 = -1.*t9228*t782;
  t18488 = -0.24*t887*t4653;
  t18489 = t18487 + t18488;
  t18465 = 0.384*var2[4]*t18464;
  t18466 = -3.2*t9336*t18145;
  t18467 = -3.2*t10765*t18464;
  t18471 = -6.4*t18145*t18187;
  t18472 = -6.4*t18145*t18464;
  t18478 = -3.2*t18145*t10354;
  t18479 = -3.2*t7101*t18187;
  t18480 = t122*t18461;
  t18481 = t18303 + t18480;
  t18482 = -3.2*t18145*t18481;
  t18483 = -3.2*t7101*t18464;
  t18486 = -3.2*t18145*t18424;
  t18491 = t18418*t6871;
  t18492 = t4859*t18422;
  t18497 = -3.2*t18428*t18464;
  t18542 = -0.24*t349*t782;
  t18543 = t18542 + t18488;
  t18499 = -1.*t4859*t18418;
  t18545 = 0.24*t887*t349;
  t18546 = t18545 + t18421;
  t18501 = -1.*t18422*t18461;
  t11565 = -0.748*t11553;
  t11782 = t11759*t11390;
  t11796 = -0.24*t11085*t11390;
  t11797 = t11782 + t11796;
  t17615 = t11759*t11085;
  t17907 = Power(t11390,2);
  t18001 = 0.24*t17907;
  t18040 = t17615 + t18001;
  t18578 = -1.*t11389*t11085;
  t18580 = t11201*t11390;
  t18583 = t18578 + t18580;
  t18584 = t4901*t18583;
  t18585 = t11491 + t18584;
  t18203 = -13.6*t11553*t18202;
  t18225 = -13.6*t18224*t18202;
  t18347 = Power(t11553,2);
  t18357 = -6.8*t18347;
  t18363 = -6.8*t11553*t18224;
  t18374 = Power(t18202,2);
  t18375 = -6.8*t18374;
  t18376 = -1.*t122*t11389;
  t18377 = t4901*t11201;
  t18378 = t18376 + t18377;
  t18379 = -6.8*t18202*t18378;
  t18380 = -1.*t4901*t11459;
  t18430 = Power(t11389,2);
  t18432 = 0.11*t18430;
  t18433 = Power(t11201,2);
  t18434 = 0.11*t18433;
  t18435 = t18432 + t18434;
  t18436 = -6.8*t11553*t18435;
  t18440 = -1.*t18439*t11520;
  t18444 = -1.*t11459*t18443;
  t18449 = t18440 + t18444;
  t18451 = t18439*t13002;
  t18452 = t11520*t18443;
  t18453 = t18451 + t18452;
  t18618 = -1.*t11759*t11201;
  t18619 = -0.24*t11389*t11390;
  t18620 = t18618 + t18619;
  t18586 = 0.384*var2[6]*t18585;
  t18594 = -3.2*t11797*t18243;
  t18598 = -3.2*t18040*t18585;
  t18605 = -6.4*t18243*t18256;
  t18606 = -6.4*t18243*t18585;
  t18609 = -3.2*t18243*t16341;
  t18610 = -3.2*t11537*t18256;
  t18611 = t122*t18583;
  t18612 = t18380 + t18611;
  t18613 = -3.2*t18243*t18612;
  t18614 = -3.2*t11537*t18585;
  t18617 = -3.2*t18243*t18449;
  t18622 = t18439*t11520;
  t18623 = t11459*t18443;
  t18646 = -3.2*t18453*t18585;
  t18683 = -0.24*t11085*t11201;
  t18684 = t18683 + t18619;
  t18648 = -1.*t11459*t18439;
  t18686 = 0.24*t11389*t11085;
  t18690 = t18686 + t18442;
  t18651 = -1.*t18443*t18583;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(-0.5*(t18102 + t18125 - 6.4*t10354*t18187 + t18203 + t18225 - 6.4*t11537*t18243 - 6.4*t16341*t18256 - 6.4*t18145*t7101)*var2[0] - 0.5*(-3.2*Power(t10354,2) - 3.2*Power(t11537,2) - 3.2*Power(t16341,2) - 3.2*(t11529 - 1.*t122*t13002)*t18256 + t18279 + t18283 + t18294 + t18298 + t18357 + t18363 + t18375 + t18379 - 3.2*t18243*(-1.*t11520*t122 + t18380) - 3.2*t18145*(t18303 - 1.*t122*t6871) - 3.2*t18187*(-1.*t10033*t122 + t7037) - 3.2*Power(t7101,2))*var2[1] - 0.5*(t18414 - 3.2*t10354*t18424 + t18436 - 3.2*t16341*t18449 - 3.2*t11537*t18453 + 2.88*t4901 - 3.2*t18428*t7101)*var2[2] - 0.5*(-3.2*t10765*t7101 + t8391 - 3.2*t10354*t9336)*var2[3] + 0.384*t7101*var2[4] - 0.5*(t11565 - 3.2*t11797*t16341 - 3.2*t11537*t18040)*var2[5] + 0.384*t11537*var2[6]);
  p_output1[3]=var2[0]*(t18465 - 0.5*(t18102 + t18125 + t18471 + t18472)*var2[0] - 0.5*(t18279 + t18283 + t18294 + t18298 + t18478 + t18479 + t18482 + t18483)*var2[1] - 0.5*(t18414 + t18486 + t18497 - 3.2*t18187*(t18499 + t18501 - 1.*t18489*t4859 - 1.*t18422*t6871) - 3.2*t18145*(t10033*t18422 + t18491 + t18492 + t18489*t6871))*var2[2] - 0.5*(t18466 + t18467 + t8391)*var2[3]);
  p_output1[4]=var2[0]*(t18465 - 0.5*(t18471 + t18472)*var2[0] - 0.5*(t18478 + t18479 + t18482 + t18483)*var2[1] - 0.5*(t18486 + t18497 - 3.2*t18145*(t18491 + t18492 + t10033*t18546 + t18543*t6871) - 3.2*t18187*(t18499 + t18501 - 1.*t18543*t4859 - 1.*t18546*t6871))*var2[2] - 0.5*(t18466 + t18467 - 3.2*t18187*(t10414 - 0.24*Power(t349,2)) - 3.2*t18145*(0.24*t349*t4653 - 1.*t4653*t9228))*var2[3]);
  p_output1[5]=var2[0]*(t18586 - 0.5*(t18203 + t18225 + t18605 + t18606)*var2[0] - 0.5*(t18357 + t18363 + t18375 + t18379 + t18609 + t18610 + t18613 + t18614)*var2[1] - 0.5*(t18436 + t18617 - 3.2*t18243*(t13002*t18443 + t11520*t18620 + t18622 + t18623) + t18646 - 3.2*t18256*(-1.*t11520*t18443 - 1.*t11459*t18620 + t18648 + t18651))*var2[2] - 0.5*(t11565 + t18594 + t18598)*var2[5]);
  p_output1[6]=var2[0]*(t18586 - 0.5*(t18605 + t18606)*var2[0] - 0.5*(t18609 + t18610 + t18613 + t18614)*var2[1] - 0.5*(t18617 + t18646 - 3.2*t18256*(t18648 + t18651 - 1.*t11459*t18684 - 1.*t11520*t18690) - 3.2*t18243*(t18622 + t18623 + t11520*t18684 + t13002*t18690))*var2[2] - 0.5*(-3.2*(0.24*t11085*t11390 - 1.*t11390*t11759)*t18243 - 3.2*(-0.24*Power(t11085,2) + t17615)*t18256 + t18594 + t18598)*var2[5]);
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

#include "Ce3_vec1_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
