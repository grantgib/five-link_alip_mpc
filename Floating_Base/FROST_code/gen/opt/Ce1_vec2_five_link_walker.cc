/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:12 GMT-04:00
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
  double t283;
  double t216;
  double t276;
  double t344;
  double t208;
  double t913;
  double t931;
  double t978;
  double t2708;
  double t3246;
  double t277;
  double t883;
  double t884;
  double t4609;
  double t4663;
  double t4670;
  double t909;
  double t3316;
  double t4897;
  double t4905;
  double t4938;
  double t4978;
  double t4993;
  double t5001;
  double t5280;
  double t5306;
  double t5307;
  double t5379;
  double t5392;
  double t5401;
  double t4723;
  double t4883;
  double t4896;
  double t4961;
  double t4965;
  double t4969;
  double t4970;
  double t4975;
  double t5042;
  double t5050;
  double t5063;
  double t5084;
  double t5096;
  double t5111;
  double t5313;
  double t5369;
  double t5373;
  double t5376;
  double t5377;
  double t5378;
  double t5452;
  double t5459;
  double t5460;
  double t5468;
  double t5469;
  double t5470;
  double t5537;
  double t5544;
  double t5545;
  double t5555;
  double t5556;
  double t5581;
  double t5644;
  double t5647;
  double t5858;
  double t5933;
  double t5899;
  double t5970;
  double t5986;
  double t6415;
  double t6534;
  double t6547;
  double t6645;
  double t6660;
  double t6661;
  double t6708;
  double t6812;
  double t6618;
  double t6646;
  double t6720;
  double t6723;
  double t6778;
  double t6870;
  double t6920;
  double t6935;
  double t6944;
  double t6360;
  double t6985;
  double t6994;
  double t6995;
  double t5557;
  double t5571;
  double t5572;
  double t5578;
  double t5579;
  double t5580;
  double t5677;
  double t5691;
  double t5726;
  double t5764;
  double t5826;
  double t5847;
  double t6975;
  double t6979;
  double t7013;
  double t7014;
  double t7017;
  double t7018;
  double t7019;
  double t7020;
  double t7142;
  double t7218;
  double t7249;
  double t7412;
  double t5473;
  double t5474;
  double t5533;
  double t5534;
  double t6583;
  double t6617;
  double t6905;
  double t6908;
  double t7821;
  double t8022;
  double t8247;
  double t8249;
  double t8287;
  double t8289;
  double t8290;
  double t8291;
  double t8299;
  double t8306;
  double t8308;
  double t8311;
  double t8321;
  double t8330;
  double t8337;
  double t8356;
  double t8357;
  double t8377;
  double t8320;
  double t8343;
  double t8346;
  double t8351;
  double t8380;
  double t8381;
  double t8386;
  double t8387;
  double t8407;
  double t8409;
  double t8435;
  double t8436;
  double t8411;
  double t8460;
  double t8466;
  double t8414;
  double t8266;
  double t8279;
  double t8281;
  double t8282;
  double t8283;
  double t8285;
  double t9270;
  double t9279;
  double t9280;
  double t9338;
  double t9365;
  double t9427;
  double t9504;
  double t9513;
  double t9544;
  double t9548;
  double t9572;
  double t8835;
  double t8838;
  double t8839;
  double t8854;
  double t8952;
  double t9152;
  double t9536;
  double t9629;
  double t9631;
  double t9639;
  double t9654;
  double t9659;
  double t10286;
  double t10376;
  double t10377;
  double t10157;
  double t10726;
  double t10738;
  double t10758;
  double t10861;
  double t10862;
  double t10760;
  double t10897;
  double t10900;
  double t10770;
  double t10954;
  double t10992;
  double t10997;
  double t11000;
  double t10971;
  double t10980;
  double t10983;
  double t10984;
  double t11008;
  double t11009;
  double t11039;
  double t11046;
  double t11050;
  double t11054;
  double t11041;
  double t11042;
  double t11043;
  double t11044;
  double t11059;
  double t11060;
  t283 = Cos(var1[3]);
  t216 = Cos(var1[4]);
  t276 = Sin(var1[3]);
  t344 = Sin(var1[4]);
  t208 = Sin(var1[2]);
  t913 = Cos(var1[2]);
  t931 = t283*t216;
  t978 = -1.*t276*t344;
  t2708 = t931 + t978;
  t3246 = t913*t2708;
  t277 = -1.*t216*t276;
  t883 = -1.*t283*t344;
  t884 = t277 + t883;
  t4609 = t216*t276;
  t4663 = t283*t344;
  t4670 = t4609 + t4663;
  t909 = t208*t884;
  t3316 = t909 + t3246;
  t4897 = t913*t884;
  t4905 = -1.*t208*t2708;
  t4938 = t4897 + t4905;
  t4978 = -1.*t283*t216;
  t4993 = t276*t344;
  t5001 = t4978 + t4993;
  t5280 = -1.*t283*t208;
  t5306 = -1.*t913*t276;
  t5307 = t5280 + t5306;
  t5379 = t913*t283;
  t5392 = -1.*t208*t276;
  t5401 = t5379 + t5392;
  t4723 = -1.*t208*t4670;
  t4883 = t4723 + t3246;
  t4896 = 3.2*t3316*t4883;
  t4961 = t913*t4670;
  t4965 = t208*t2708;
  t4969 = t4961 + t4965;
  t4970 = 3.2*t4938*t4969;
  t4975 = -1.*t208*t884;
  t5042 = t913*t5001;
  t5050 = t4975 + t5042;
  t5063 = 3.2*t3316*t5050;
  t5084 = t208*t5001;
  t5096 = t4897 + t5084;
  t5111 = 3.2*t4938*t5096;
  t5313 = Power(t5307,2);
  t5369 = 6.8*t5313;
  t5373 = t283*t208;
  t5376 = t913*t276;
  t5377 = t5373 + t5376;
  t5378 = 6.8*t5307*t5377;
  t5452 = Power(t5401,2);
  t5459 = 6.8*t5452;
  t5460 = -1.*t913*t283;
  t5468 = t208*t276;
  t5469 = t5460 + t5468;
  t5470 = 6.8*t5401*t5469;
  t5537 = Cos(var1[5]);
  t5544 = -1.*t5537*t208;
  t5545 = Sin(var1[5]);
  t5555 = -1.*t913*t5545;
  t5556 = t5544 + t5555;
  t5581 = t913*t5537;
  t5644 = -1.*t208*t5545;
  t5647 = t5581 + t5644;
  t5858 = Cos(var1[6]);
  t5933 = Sin(var1[6]);
  t5899 = -1.*t5858*t5545;
  t5970 = -1.*t5537*t5933;
  t5986 = t5899 + t5970;
  t6415 = t5537*t5858;
  t6534 = -1.*t5545*t5933;
  t6547 = t6415 + t6534;
  t6645 = t913*t6547;
  t6660 = t5858*t5545;
  t6661 = t5537*t5933;
  t6708 = t6660 + t6661;
  t6812 = -1.*t208*t6547;
  t6618 = t208*t5986;
  t6646 = t6618 + t6645;
  t6720 = -1.*t208*t6708;
  t6723 = t6720 + t6645;
  t6778 = t913*t5986;
  t6870 = t6778 + t6812;
  t6920 = t913*t6708;
  t6935 = t208*t6547;
  t6944 = t6920 + t6935;
  t6360 = -1.*t208*t5986;
  t6985 = -1.*t5537*t5858;
  t6994 = t5545*t5933;
  t6995 = t6985 + t6994;
  t5557 = Power(t5556,2);
  t5571 = 6.8*t5557;
  t5572 = t5537*t208;
  t5578 = t913*t5545;
  t5579 = t5572 + t5578;
  t5580 = 6.8*t5556*t5579;
  t5677 = Power(t5647,2);
  t5691 = 6.8*t5677;
  t5726 = -1.*t913*t5537;
  t5764 = t208*t5545;
  t5826 = t5726 + t5764;
  t5847 = 6.8*t5647*t5826;
  t6975 = 3.2*t6646*t6723;
  t6979 = 3.2*t6870*t6944;
  t7013 = t913*t6995;
  t7014 = t6360 + t7013;
  t7017 = 3.2*t6646*t7014;
  t7018 = t208*t6995;
  t7019 = t6778 + t7018;
  t7020 = 3.2*t6870*t7019;
  t7142 = 6.4*t4883*t4938;
  t7218 = 6.4*t4938*t5050;
  t7249 = 13.6*t5307*t5401;
  t7412 = 13.6*t5307*t5469;
  t5473 = -1.*t913*t2708;
  t5474 = t4975 + t5473;
  t5533 = -1.*t913*t4670;
  t5534 = t5533 + t4905;
  t6583 = -1.*t913*t6547;
  t6617 = t6360 + t6583;
  t6905 = -1.*t913*t6708;
  t6908 = t6905 + t6812;
  t7821 = 13.6*t5556*t5647;
  t8022 = 13.6*t5556*t5826;
  t8247 = 6.4*t6723*t6870;
  t8249 = 6.4*t6870*t7014;
  t8287 = -1.*t216;
  t8289 = 1. + t8287;
  t8290 = 0.4*t8289;
  t8291 = 0.64*t216;
  t8299 = t8290 + t8291;
  t8306 = t8299*t276;
  t8308 = 0.24*t283*t344;
  t8311 = t8306 + t8308;
  t8321 = t283*t8299;
  t8330 = -0.24*t276*t344;
  t8337 = t8321 + t8330;
  t8356 = -1.*t8299*t276;
  t8357 = -0.24*t283*t344;
  t8377 = t8356 + t8357;
  t8320 = -1.*t8311*t2708;
  t8343 = -1.*t884*t8337;
  t8346 = t8320 + t8343;
  t8351 = 3.2*t4938*t8346;
  t8380 = t8311*t2708;
  t8381 = t884*t8337;
  t8386 = t8311*t4670;
  t8387 = t2708*t8337;
  t8407 = t8386 + t8387;
  t8409 = 3.2*t8407*t5050;
  t8435 = -0.24*t216*t276;
  t8436 = t8435 + t8357;
  t8411 = -1.*t884*t8311;
  t8460 = 0.24*t283*t216;
  t8466 = t8460 + t8330;
  t8414 = -1.*t8337*t5001;
  t8266 = Power(t283,2);
  t8279 = 0.11*t8266;
  t8281 = Power(t276,2);
  t8282 = 0.11*t8281;
  t8283 = t8279 + t8282;
  t8285 = 6.8*t5469*t8283;
  t9270 = -1.*t5858;
  t9279 = 1. + t9270;
  t9280 = 0.4*t9279;
  t9338 = 0.64*t5858;
  t9365 = t9280 + t9338;
  t9427 = t9365*t5545;
  t9504 = 0.24*t5537*t5933;
  t9513 = t9427 + t9504;
  t9544 = t5537*t9365;
  t9548 = -0.24*t5545*t5933;
  t9572 = t9544 + t9548;
  t8835 = Power(t5537,2);
  t8838 = 0.11*t8835;
  t8839 = Power(t5545,2);
  t8854 = 0.11*t8839;
  t8952 = t8838 + t8854;
  t9152 = 6.8*t5826*t8952;
  t9536 = -1.*t9513*t6547;
  t9629 = -1.*t5986*t9572;
  t9631 = t9536 + t9629;
  t9639 = t9513*t6708;
  t9654 = t6547*t9572;
  t9659 = t9639 + t9654;
  t10286 = -1.*t9365*t5545;
  t10376 = -0.24*t5537*t5933;
  t10377 = t10286 + t10376;
  t10157 = 3.2*t6870*t9631;
  t10726 = t9513*t6547;
  t10738 = t5986*t9572;
  t10758 = 3.2*t9659*t7014;
  t10861 = -0.24*t5858*t5545;
  t10862 = t10861 + t10376;
  t10760 = -1.*t5986*t9513;
  t10897 = 0.24*t5537*t5858;
  t10900 = t10897 + t9548;
  t10770 = -1.*t9572*t6995;
  t10954 = 0.748*t5469;
  t10992 = t8299*t344;
  t10997 = -0.24*t216*t344;
  t11000 = t10992 + t10997;
  t10971 = t8299*t216;
  t10980 = Power(t344,2);
  t10983 = 0.24*t10980;
  t10984 = t10971 + t10983;
  t11008 = 3.2*t11000*t4938;
  t11009 = 3.2*t10984*t5050;
  t11039 = 0.748*t5826;
  t11046 = t9365*t5933;
  t11050 = -0.24*t5858*t5933;
  t11054 = t11046 + t11050;
  t11041 = t9365*t5858;
  t11042 = Power(t5933,2);
  t11043 = 0.24*t11042;
  t11044 = t11041 + t11043;
  t11059 = 3.2*t11054*t6870;
  t11060 = 3.2*t11044*t7014;
  p_output1[0]=var2[1]*(-0.5*(3.2*Power(t4883,2) + 3.2*Power(t4938,2) + t5369 + t5378 + t5459 + t5470 + 3.2*t3316*t5474 + 3.2*t4969*t5534 + t5571 + t5580 + t5691 + t5847 + 3.2*t6617*t6646 + 3.2*Power(t6723,2) + 3.2*Power(t6870,2) + 3.2*t6908*t6944)*var2[2] - 0.5*(t4896 + t4970 + t5063 + t5111 + t5369 + t5378 + t5459 + t5470)*var2[3] - 0.5*(t4896 + t4970 + t5063 + t5111)*var2[4] - 0.5*(t5571 + t5580 + t5691 + t5847 + t6975 + t6979 + t7017 + t7020)*var2[5] - 0.5*(t6975 + t6979 + t7017 + t7020)*var2[6]);
  p_output1[1]=var2[1]*(-0.5*(6.4*t4938*t5474 + 6.4*t4883*t5534 + 6.4*t6617*t6870 + 6.4*t6723*t6908 + t7249 + t7412 + t7821 + t8022)*var2[2] - 0.5*(t7142 + t7218 + t7249 + t7412)*var2[3] - 0.5*(t7142 + t7218)*var2[4] - 0.5*(t7821 + t8022 + t8247 + t8249)*var2[5] - 0.5*(t8247 + t8249)*var2[6]);
  p_output1[2]=var2[1]*(-0.5*(t8285 + 3.2*t5534*t8346 + 3.2*t5474*t8407 - 2.88*t913 + t9152 + 3.2*t6908*t9631 + 3.2*t6617*t9659)*var2[2] - 0.5*(t8285 + t8351 + 3.2*t4938*(t4670*t8337 + t2708*t8377 + t8380 + t8381) + t8409 + 3.2*t4883*(-1.*t2708*t8337 + t8411 + t8414 - 1.*t8377*t884))*var2[3] - 0.5*(t8351 + t8409 + 3.2*t4938*(t8380 + t8381 + t2708*t8436 + t4670*t8466) + 3.2*t4883*(t8411 + t8414 - 1.*t2708*t8466 - 1.*t8436*t884))*var2[4] - 0.5*(t10157 + t10758 + t9152 + 3.2*t6723*(t10760 + t10770 - 1.*t10377*t5986 - 1.*t6547*t9572) + 3.2*t6870*(t10726 + t10738 + t10377*t6547 + t6708*t9572))*var2[5] - 0.5*(t10157 + t10758 + 3.2*(t10760 + t10770 - 1.*t10862*t5986 - 1.*t10900*t6547)*t6723 + 3.2*(t10726 + t10738 + t10862*t6547 + t10900*t6708)*t6870)*var2[6]);
  p_output1[3]=var2[1]*(-0.5*(t10954 + 3.2*t10984*t5474 + 3.2*t11000*t5534)*var2[2] - 0.5*(t10954 + t11008 + t11009)*var2[3] - 0.5*(t11008 + t11009 + 3.2*(t10971 - 0.24*Power(t216,2))*t4883 + 3.2*t4938*(0.24*t216*t344 - 1.*t344*t8299))*var2[4]);
  p_output1[4]=var2[1]*(-0.384*t5474*var2[2] - 0.384*t5050*var2[3] - 0.384*t5050*var2[4]);
  p_output1[5]=var2[1]*(-0.5*(t11039 + 3.2*t11044*t6617 + 3.2*t11054*t6908)*var2[2] - 0.5*(t11039 + t11059 + t11060)*var2[5] - 0.5*(t11059 + t11060 + 3.2*(t11041 - 0.24*Power(t5858,2))*t6723 + 3.2*t6870*(0.24*t5858*t5933 - 1.*t5933*t9365))*var2[6]);
  p_output1[6]=var2[1]*(-0.384*t6617*var2[2] - 0.384*t7014*var2[5] - 0.384*t7014*var2[6]);
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

#include "Ce1_vec2_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
