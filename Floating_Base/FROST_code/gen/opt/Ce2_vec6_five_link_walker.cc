/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:47 GMT-04:00
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
  double t4645;
  double t2899;
  double t2913;
  double t4667;
  double t7584;
  double t2898;
  double t3368;
  double t6787;
  double t6788;
  double t10312;
  double t10313;
  double t10314;
  double t10325;
  double t10326;
  double t6992;
  double t9473;
  double t9474;
  double t9924;
  double t10274;
  double t10283;
  double t10297;
  double t10298;
  double t10308;
  double t10393;
  double t10394;
  double t10395;
  double t10351;
  double t10355;
  double t10369;
  double t10370;
  double t10373;
  double t10380;
  double t10397;
  double t10398;
  double t10399;
  double t10404;
  double t10405;
  double t10406;
  double t10407;
  double t10408;
  double t10409;
  double t10445;
  double t10454;
  double t10488;
  double t10489;
  double t14496;
  double t15816;
  double t15841;
  double t15862;
  double t16091;
  double t16400;
  double t16401;
  double t10456;
  double t10458;
  double t10459;
  double t10430;
  double t10431;
  double t10432;
  double t10327;
  double t10328;
  double t10345;
  double t10385;
  double t10386;
  double t10387;
  double t10388;
  double t10396;
  double t10442;
  double t10443;
  double t10416;
  double t10418;
  double t10419;
  double t10420;
  double t10429;
  double t10433;
  double t10444;
  double t10455;
  double t10460;
  double t10461;
  double t10462;
  double t10464;
  double t10465;
  double t10470;
  double t10472;
  double t10485;
  double t14631;
  double t15994;
  double t16010;
  double t17492;
  double t17669;
  double t17673;
  double t17676;
  double t17678;
  double t17827;
  double t17830;
  double t17946;
  double t17968;
  double t18011;
  double t18012;
  double t18015;
  double t18016;
  double t18111;
  double t18112;
  double t18114;
  double t18116;
  double t18117;
  double t18118;
  double t10486;
  double t16090;
  double t17795;
  double t17967;
  double t18037;
  double t18038;
  double t18092;
  double t18093;
  double t18097;
  double t18098;
  double t10310;
  double t10384;
  double t10390;
  double t10391;
  double t18148;
  double t18149;
  double t18151;
  t4645 = Cos(var1[5]);
  t2899 = Cos(var1[6]);
  t2913 = Sin(var1[5]);
  t4667 = Sin(var1[6]);
  t7584 = Sin(var1[2]);
  t2898 = Cos(var1[2]);
  t3368 = -1.*t2899*t2913;
  t6787 = -1.*t4645*t4667;
  t6788 = t3368 + t6787;
  t10312 = -1.*t2899;
  t10313 = 1. + t10312;
  t10314 = 0.4*t10313;
  t10325 = 0.64*t2899;
  t10326 = t10314 + t10325;
  t6992 = t2898*t6788;
  t9473 = -1.*t4645*t2899;
  t9474 = t2913*t4667;
  t9924 = t9473 + t9474;
  t10274 = t7584*t9924;
  t10283 = t6992 + t10274;
  t10297 = -1.*t4645*t7584;
  t10298 = -1.*t2898*t2913;
  t10308 = t10297 + t10298;
  t10393 = t2898*t4645;
  t10394 = -1.*t7584*t2913;
  t10395 = t10393 + t10394;
  t10351 = t7584*t6788;
  t10355 = t4645*t2899;
  t10369 = -1.*t2913*t4667;
  t10370 = t10355 + t10369;
  t10373 = t2898*t10370;
  t10380 = t10351 + t10373;
  t10397 = t4645*t7584;
  t10398 = t2898*t2913;
  t10399 = t10397 + t10398;
  t10404 = t2899*t2913;
  t10405 = t4645*t4667;
  t10406 = t10404 + t10405;
  t10407 = t2898*t10406;
  t10408 = t7584*t10370;
  t10409 = t10407 + t10408;
  t10445 = -1.*t7584*t10370;
  t10454 = t6992 + t10445;
  t10488 = t10326*t2913;
  t10489 = 0.24*t4645*t4667;
  t14496 = t10488 + t10489;
  t15816 = t4645*t10326;
  t15841 = -0.24*t2913*t4667;
  t15862 = t15816 + t15841;
  t16091 = -1.*t10326*t2913;
  t16400 = -0.24*t4645*t4667;
  t16401 = t16091 + t16400;
  t10456 = -1.*t7584*t6788;
  t10458 = t2898*t9924;
  t10459 = t10456 + t10458;
  t10430 = -1.*t2898*t4645;
  t10431 = t7584*t2913;
  t10432 = t10430 + t10431;
  t10327 = t10326*t4667;
  t10328 = -0.24*t2899*t4667;
  t10345 = t10327 + t10328;
  t10385 = t10326*t2899;
  t10386 = Power(t4667,2);
  t10387 = 0.24*t10386;
  t10388 = t10385 + t10387;
  t10396 = 13.6*t10308*t10395;
  t10442 = -1.*t7584*t10406;
  t10443 = t10442 + t10373;
  t10416 = Power(t10308,2);
  t10418 = 6.8*t10416;
  t10419 = 6.8*t10308*t10399;
  t10420 = Power(t10395,2);
  t10429 = 6.8*t10420;
  t10433 = 6.8*t10395*t10432;
  t10444 = 3.2*t10380*t10443;
  t10455 = 3.2*t10454*t10409;
  t10460 = 3.2*t10380*t10459;
  t10461 = 3.2*t10454*t10283;
  t10462 = t10418 + t10419 + t10429 + t10433 + t10444 + t10455 + t10460 + t10461;
  t10464 = Power(t4645,2);
  t10465 = 0.11*t10464;
  t10470 = Power(t2913,2);
  t10472 = 0.11*t10470;
  t10485 = t10465 + t10472;
  t14631 = -1.*t14496*t10370;
  t15994 = -1.*t6788*t15862;
  t16010 = t14631 + t15994;
  t17492 = t16401*t10370;
  t17669 = t14496*t10370;
  t17673 = t6788*t15862;
  t17676 = t10406*t15862;
  t17678 = t17492 + t17669 + t17673 + t17676;
  t17827 = t14496*t10406;
  t17830 = t10370*t15862;
  t17946 = t17827 + t17830;
  t17968 = -1.*t6788*t16401;
  t18011 = -1.*t6788*t14496;
  t18012 = -1.*t10370*t15862;
  t18015 = -1.*t15862*t9924;
  t18016 = t17968 + t18011 + t18012 + t18015;
  t18111 = 6.8*t10432*t10485;
  t18112 = 3.2*t10454*t16010;
  t18114 = 3.2*t10454*t17678;
  t18116 = 3.2*t17946*t10459;
  t18117 = 3.2*t10443*t18016;
  t18118 = t18111 + t18112 + t18114 + t18116 + t18117;
  t10486 = 6.8*t10308*t10485;
  t16090 = 3.2*t10380*t16010;
  t17795 = 3.2*t10380*t17678;
  t17967 = 3.2*t17946*t10283;
  t18037 = 3.2*t10409*t18016;
  t18038 = t10486 + t16090 + t17795 + t17967 + t18037;
  t18092 = 0.748*t10432;
  t18093 = 3.2*t10345*t10454;
  t18097 = 3.2*t10388*t10459;
  t18098 = t18092 + t18093 + t18097;
  t10310 = 0.748*t10308;
  t10384 = 3.2*t10345*t10380;
  t10390 = 3.2*t10388*t10283;
  t10391 = t10310 + t10384 + t10390;
  t18148 = 3.2*t10388*t17678;
  t18149 = 3.2*t10345*t18016;
  t18151 = t18148 + t18149;
  p_output1[0]=var2[5]*(-0.5*(6.4*t10283*t10380 + t10396 + 13.6*t10395*t10399 + 6.4*t10380*t10409)*var2[0] - 0.5*t10462*var2[1] - 0.5*t18038*var2[2] - 0.5*t10391*var2[5] - 0.384*t10283*var2[6]);
  p_output1[1]=var2[5]*(-0.5*t10462*var2[0] - 0.5*(t10396 + 13.6*t10308*t10432 + 6.4*t10443*t10454 + 6.4*t10454*t10459)*var2[1] - 0.5*t18118*var2[2] - 0.5*t18098*var2[5] - 0.384*t10459*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t18038*var2[0] - 0.5*t18118*var2[1] - 0.5*(6.4*t17678*t17946 + 6.4*t16010*t18016)*var2[2] - 0.5*t18151*var2[5] - 0.384*t17678*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*t10391*var2[0] - 0.5*t18098*var2[1] - 0.5*t18151*var2[2])*var2[5];
  p_output1[6]=(-0.384*t10283*var2[0] - 0.384*t10459*var2[1] - 0.384*t17678*var2[2])*var2[5];
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

#include "Ce2_vec6_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
