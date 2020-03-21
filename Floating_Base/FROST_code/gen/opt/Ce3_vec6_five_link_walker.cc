/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:08 GMT-04:00
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
  double t8223;
  double t8989;
  double t8131;
  double t8177;
  double t8130;
  double t8176;
  double t8249;
  double t8254;
  double t8292;
  double t8313;
  double t8316;
  double t11460;
  double t11463;
  double t11471;
  double t11491;
  double t11509;
  double t11510;
  double t11512;
  double t11516;
  double t11517;
  double t11518;
  double t9240;
  double t9250;
  double t9315;
  double t11341;
  double t11351;
  double t11352;
  double t11529;
  double t11534;
  double t11535;
  double t11536;
  double t11537;
  double t11522;
  double t11530;
  double t11545;
  double t8135;
  double t8181;
  double t8210;
  double t8211;
  double t11478;
  double t11560;
  double t11561;
  double t11562;
  double t11614;
  double t11621;
  double t11622;
  double t11588;
  double t11600;
  double t11601;
  double t11604;
  double t11608;
  double t11609;
  double t11644;
  double t11645;
  double t11646;
  double t11651;
  double t11652;
  double t11653;
  double t11451;
  double t11479;
  double t11559;
  double t11563;
  double t11564;
  double t11565;
  double t11568;
  double t11569;
  double t11570;
  double t11571;
  double t11572;
  double t11573;
  double t11610;
  double t11623;
  double t11677;
  double t11678;
  double t11628;
  double t11680;
  double t11681;
  double t11637;
  t8223 = Cos(var1[6]);
  t8989 = Sin(var1[6]);
  t8131 = Sin(var1[2]);
  t8177 = Sin(var1[5]);
  t8130 = Cos(var1[5]);
  t8176 = Cos(var1[2]);
  t8249 = -1.*t8223;
  t8254 = 1. + t8249;
  t8292 = 0.4*t8254;
  t8313 = 0.64*t8223;
  t8316 = t8292 + t8313;
  t11460 = t8130*t8223;
  t11463 = -1.*t8177*t8989;
  t11471 = t11460 + t11463;
  t11491 = t8316*t8223;
  t11509 = Power(t8989,2);
  t11510 = 0.24*t11509;
  t11512 = t11491 + t11510;
  t11516 = -1.*t8223*t8177;
  t11517 = -1.*t8130*t8989;
  t11518 = t11516 + t11517;
  t9240 = t8316*t8989;
  t9250 = -0.24*t8223*t8989;
  t9315 = t9240 + t9250;
  t11341 = t8223*t8177;
  t11351 = t8130*t8989;
  t11352 = t11341 + t11351;
  t11529 = -1.*t8131*t11471;
  t11534 = -1.*t8176*t8130;
  t11535 = t8131*t8177;
  t11536 = t11534 + t11535;
  t11537 = -0.748*t11536;
  t11522 = t8176*t11518;
  t11530 = t11522 + t11529;
  t11545 = -1.*t8131*t11518;
  t8135 = -1.*t8130*t8131;
  t8181 = -1.*t8176*t8177;
  t8210 = t8135 + t8181;
  t8211 = -0.748*t8210;
  t11478 = t8176*t11471;
  t11560 = -1.*t8130*t8223;
  t11561 = t8177*t8989;
  t11562 = t11560 + t11561;
  t11614 = t8130*t8316;
  t11621 = -0.24*t8177*t8989;
  t11622 = t11614 + t11621;
  t11588 = -1.*t8316*t8177;
  t11600 = -0.24*t8130*t8989;
  t11601 = t11588 + t11600;
  t11604 = t8316*t8177;
  t11608 = 0.24*t8130*t8989;
  t11609 = t11604 + t11608;
  t11644 = -1.*t8316*t8989;
  t11645 = 0.24*t8223*t8989;
  t11646 = t11644 + t11645;
  t11651 = Power(t8223,2);
  t11652 = -0.24*t11651;
  t11653 = t11491 + t11652;
  t11451 = -1.*t8131*t11352;
  t11479 = t11451 + t11478;
  t11559 = -3.2*t9315*t11530;
  t11563 = t8176*t11562;
  t11564 = t11545 + t11563;
  t11565 = -3.2*t11512*t11564;
  t11568 = t8131*t11518;
  t11569 = t11568 + t11478;
  t11570 = -3.2*t9315*t11569;
  t11571 = t8131*t11562;
  t11572 = t11522 + t11571;
  t11573 = -3.2*t11512*t11572;
  t11610 = t11609*t11471;
  t11623 = t11518*t11622;
  t11677 = -0.24*t8223*t8177;
  t11678 = t11677 + t11600;
  t11628 = -1.*t11518*t11609;
  t11680 = 0.24*t8130*t8223;
  t11681 = t11680 + t11621;
  t11637 = -1.*t11622*t11562;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(-3.2*t11512*t11530 + t8211 - 3.2*t11479*t9315)*var2[0] - 0.5*(t11537 - 3.2*t11512*(t11545 - 1.*t11471*t8176) - 3.2*(t11529 - 1.*t11352*t8176)*t9315)*var2[1])*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*(t11570 + t11573 + t8211)*var2[0] - 0.5*(t11537 + t11559 + t11565)*var2[1] - 0.5*(-3.2*t11512*(t11471*t11601 + t11610 + t11352*t11622 + t11623) - 3.2*(-1.*t11518*t11601 - 1.*t11471*t11622 + t11628 + t11637)*t9315)*var2[2])*var2[5];
  p_output1[6]=var2[5]*(-0.5*(t11570 + t11573 - 3.2*t11569*t11646 - 3.2*t11653*(t11471*t8131 + t11352*t8176))*var2[0] - 0.5*(t11559 + t11565 - 3.2*t11530*t11646 - 3.2*t11479*t11653)*var2[1] - 0.5*(-3.2*(t11352*t11609 + t11471*t11622)*t11646 - 3.2*(-1.*t11471*t11609 - 1.*t11518*t11622)*t11653 - 3.2*t11512*(t11610 + t11623 + t11471*t11678 + t11352*t11681) - 3.2*(t11628 + t11637 - 1.*t11518*t11678 - 1.*t11471*t11681)*t9315)*var2[2] - 0.5*(-6.4*t11512*t11646 - 6.4*t11653*t9315)*var2[5] + 0.384*t11646*var2[6]);
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

#include "Ce3_vec6_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
