/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:22 GMT-05:00
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
  double t581;
  double t335;
  double t415;
  double t613;
  double t675;
  double t326;
  double t508;
  double t656;
  double t660;
  double t667;
  double t724;
  double t767;
  double t839;
  double t844;
  double t862;
  double t884;
  double t888;
  double t905;
  double t911;
  double t912;
  double t2829;
  double t2614;
  double t2627;
  double t2929;
  double t2758;
  double t2951;
  double t2995;
  double t2999;
  double t3042;
  double t3044;
  double t3094;
  double t3095;
  double t3150;
  double t3328;
  double t3331;
  double t3392;
  double t3393;
  double t3398;
  double t871;
  double t873;
  double t876;
  double t1247;
  double t1251;
  double t1255;
  double t1442;
  double t1573;
  double t2370;
  double t3180;
  double t3194;
  double t3253;
  double t3525;
  double t3529;
  double t3544;
  double t3570;
  double t3579;
  double t3599;
  double t3666;
  double t3670;
  double t3726;
  double t3946;
  double t3968;
  double t4012;
  double t4658;
  double t4676;
  double t4677;
  double t4679;
  double t4683;
  double t4688;
  double t4879;
  double t4885;
  double t4894;
  double t4904;
  double t4917;
  double t4925;
  double t3825;
  double t3832;
  double t3849;
  double t3636;
  double t3647;
  double t3648;
  double t1218;
  double t1234;
  double t1244;
  double t3873;
  double t3894;
  double t913;
  double t916;
  double t917;
  double t929;
  double t4082;
  double t4155;
  double t4164;
  double t3934;
  double t3936;
  double t3941;
  double t3452;
  double t3502;
  double t3513;
  double t4253;
  double t4254;
  double t3408;
  double t3411;
  double t3413;
  double t3418;
  double t4281;
  double t4283;
  double t4304;
  double t4317;
  double t4372;
  double t4373;
  double t4400;
  double t4407;
  double t3663;
  double t3769;
  double t3856;
  double t3907;
  double t3942;
  double t4014;
  double t4200;
  double t4255;
  double t4259;
  double t4536;
  double t4551;
  double t4572;
  double t4574;
  double t4596;
  double t4678;
  double t4712;
  double t4716;
  double t4778;
  double t4787;
  double t4801;
  double t4836;
  double t4839;
  double t4845;
  double t4850;
  double t4872;
  double t4900;
  double t4928;
  double t4929;
  double t4946;
  double t4979;
  double t4980;
  double t4530;
  double t4654;
  double t4755;
  double t4820;
  double t4876;
  double t4936;
  double t4996;
  double t5000;
  double t5278;
  double t5299;
  double t5303;
  double t5313;
  double t5314;
  double t5326;
  double t5327;
  double t5328;
  double t5033;
  double t5068;
  double t5071;
  double t5074;
  double t878;
  double t930;
  double t2419;
  double t2545;
  double t5407;
  double t5452;
  double t5509;
  double t5550;
  double t6162;
  double t6236;
  double t5362;
  double t5363;
  double t5088;
  double t5101;
  double t5103;
  double t5106;
  double t3269;
  double t3425;
  double t3617;
  double t3623;
  double t5656;
  double t5661;
  double t5663;
  double t5664;
  double t6488;
  double t6489;
  double t5623;
  double t5639;
  t581 = Cos(var1[3]);
  t335 = Cos(var1[4]);
  t415 = Sin(var1[3]);
  t613 = Sin(var1[4]);
  t675 = Cos(var1[2]);
  t326 = Sin(var1[2]);
  t508 = -1.*t335*t415;
  t656 = -1.*t581*t613;
  t660 = t508 + t656;
  t667 = t326*t660;
  t724 = t581*t335;
  t767 = -1.*t415*t613;
  t839 = t724 + t767;
  t844 = t675*t839;
  t862 = t667 + t844;
  t884 = -1.*t335;
  t888 = 1. + t884;
  t905 = 0.4*t888;
  t911 = 0.64*t335;
  t912 = t905 + t911;
  t2829 = Cos(var1[5]);
  t2614 = Cos(var1[6]);
  t2627 = Sin(var1[5]);
  t2929 = Sin(var1[6]);
  t2758 = -1.*t2614*t2627;
  t2951 = -1.*t2829*t2929;
  t2995 = t2758 + t2951;
  t2999 = t326*t2995;
  t3042 = t2829*t2614;
  t3044 = -1.*t2627*t2929;
  t3094 = t3042 + t3044;
  t3095 = t675*t3094;
  t3150 = t2999 + t3095;
  t3328 = -1.*t2614;
  t3331 = 1. + t3328;
  t3392 = 0.4*t3331;
  t3393 = 0.64*t2614;
  t3398 = t3392 + t3393;
  t871 = t675*t581;
  t873 = -1.*t326*t415;
  t876 = t871 + t873;
  t1247 = t335*t415;
  t1251 = t581*t613;
  t1255 = t1247 + t1251;
  t1442 = t675*t1255;
  t1573 = t326*t839;
  t2370 = t1442 + t1573;
  t3180 = t675*t2829;
  t3194 = -1.*t326*t2627;
  t3253 = t3180 + t3194;
  t3525 = t2614*t2627;
  t3529 = t2829*t2929;
  t3544 = t3525 + t3529;
  t3570 = t675*t3544;
  t3579 = t326*t3094;
  t3599 = t3570 + t3579;
  t3666 = t581*t326;
  t3670 = t675*t415;
  t3726 = t3666 + t3670;
  t3946 = t2829*t326;
  t3968 = t675*t2627;
  t4012 = t3946 + t3968;
  t4658 = t912*t415;
  t4676 = 0.24*t581*t613;
  t4677 = t4658 + t4676;
  t4679 = t581*t912;
  t4683 = -0.24*t415*t613;
  t4688 = t4679 + t4683;
  t4879 = t3398*t2627;
  t4885 = 0.24*t2829*t2929;
  t4894 = t4879 + t4885;
  t4904 = t2829*t3398;
  t4917 = -0.24*t2627*t2929;
  t4925 = t4904 + t4917;
  t3825 = t675*t660;
  t3832 = -1.*t326*t839;
  t3849 = t3825 + t3832;
  t3636 = -1.*t581*t326;
  t3647 = -1.*t675*t415;
  t3648 = t3636 + t3647;
  t1218 = t912*t613;
  t1234 = -0.24*t335*t613;
  t1244 = t1218 + t1234;
  t3873 = -1.*t326*t1255;
  t3894 = t3873 + t844;
  t913 = t912*t335;
  t916 = Power(t613,2);
  t917 = 0.24*t916;
  t929 = t913 + t917;
  t4082 = t675*t2995;
  t4155 = -1.*t326*t3094;
  t4164 = t4082 + t4155;
  t3934 = -1.*t2829*t326;
  t3936 = -1.*t675*t2627;
  t3941 = t3934 + t3936;
  t3452 = t3398*t2929;
  t3502 = -0.24*t2614*t2929;
  t3513 = t3452 + t3502;
  t4253 = -1.*t326*t3544;
  t4254 = t4253 + t3095;
  t3408 = t3398*t2614;
  t3411 = Power(t2929,2);
  t3413 = 0.24*t3411;
  t3418 = t3408 + t3413;
  t4281 = Power(t675,2);
  t4283 = -12.*t4281;
  t4304 = Power(t326,2);
  t4317 = -12.*t4304;
  t4372 = Power(t876,2);
  t4373 = -6.8*t4372;
  t4400 = Power(t3253,2);
  t4407 = -6.8*t4400;
  t3663 = -6.8*t3648*t876;
  t3769 = -6.8*t3726*t876;
  t3856 = -3.2*t862*t3849;
  t3907 = -3.2*t3894*t2370;
  t3942 = -6.8*t3941*t3253;
  t4014 = -6.8*t4012*t3253;
  t4200 = -3.2*t3150*t4164;
  t4255 = -3.2*t4254*t3599;
  t4259 = t3663 + t3769 + t3856 + t3907 + t3942 + t4014 + t4200 + t4255;
  t4536 = Power(t581,2);
  t4551 = 0.11*t4536;
  t4572 = Power(t415,2);
  t4574 = 0.11*t4572;
  t4596 = t4551 + t4574;
  t4678 = -1.*t4677*t839;
  t4712 = -1.*t660*t4688;
  t4716 = t4678 + t4712;
  t4778 = t4677*t1255;
  t4787 = t839*t4688;
  t4801 = t4778 + t4787;
  t4836 = Power(t2829,2);
  t4839 = 0.11*t4836;
  t4845 = Power(t2627,2);
  t4850 = 0.11*t4845;
  t4872 = t4839 + t4850;
  t4900 = -1.*t4894*t3094;
  t4928 = -1.*t2995*t4925;
  t4929 = t4900 + t4928;
  t4946 = t4894*t3544;
  t4979 = t3094*t4925;
  t4980 = t4946 + t4979;
  t4530 = -2.88*t675;
  t4654 = -6.8*t876*t4596;
  t4755 = -3.2*t2370*t4716;
  t4820 = -3.2*t862*t4801;
  t4876 = -6.8*t3253*t4872;
  t4936 = -3.2*t3599*t4929;
  t4996 = -3.2*t3150*t4980;
  t5000 = t4530 + t4654 + t4755 + t4820 + t4876 + t4936 + t4996;
  t5278 = 2.88*t326;
  t5299 = -6.8*t3648*t4596;
  t5303 = -3.2*t3894*t4716;
  t5313 = -3.2*t3849*t4801;
  t5314 = -6.8*t3941*t4872;
  t5326 = -3.2*t4254*t4929;
  t5327 = -3.2*t4164*t4980;
  t5328 = t5278 + t5299 + t5303 + t5313 + t5314 + t5326 + t5327;
  t5033 = -0.748*t3648;
  t5068 = -3.2*t1244*t3894;
  t5071 = -3.2*t929*t3849;
  t5074 = t5033 + t5068 + t5071;
  t878 = -0.748*t876;
  t930 = -3.2*t929*t862;
  t2419 = -3.2*t1244*t2370;
  t2545 = t878 + t930 + t2419;
  t5407 = -0.748*t4596;
  t5452 = -3.2*t1244*t4716;
  t5509 = -3.2*t929*t4801;
  t5550 = -0.67 + t5407 + t5452 + t5509;
  t6162 = -0.768*t929;
  t6236 = -0.2 + t6162;
  t5362 = -0.768*t4801;
  t5363 = -0.2 + t5362;
  t5088 = -0.748*t3941;
  t5101 = -3.2*t3513*t4254;
  t5103 = -3.2*t3418*t4164;
  t5106 = t5088 + t5101 + t5103;
  t3269 = -0.748*t3253;
  t3425 = -3.2*t3418*t3150;
  t3617 = -3.2*t3513*t3599;
  t3623 = t3269 + t3425 + t3617;
  t5656 = -0.748*t4872;
  t5661 = -3.2*t3513*t4929;
  t5663 = -3.2*t3418*t4980;
  t5664 = -0.67 + t5656 + t5661 + t5663;
  t6488 = -0.768*t3418;
  t6489 = -0.2 + t6488;
  t5623 = -0.768*t4980;
  t5639 = -0.2 + t5623;
  p_output1[0]=(-3.2*Power(t2370,2) - 3.2*Power(t3150,2) - 3.2*Power(t3599,2) - 6.8*Power(t3726,2) - 6.8*Power(t4012,2) + t4283 + t4317 + t4373 + t4407 - 3.2*Power(t862,2))*var2[0] + t4259*var2[1] + t5000*var2[2] + t2545*var2[3] - 0.768*t862*var2[4] + t3623*var2[5] - 0.768*t3150*var2[6];
  p_output1[1]=t4259*var2[0] + (-6.8*Power(t3648,2) - 3.2*Power(t3849,2) - 3.2*Power(t3894,2) - 6.8*Power(t3941,2) - 3.2*Power(t4164,2) - 3.2*Power(t4254,2) + t4283 + t4317 + t4373 + t4407)*var2[1] + t5328*var2[2] + t5074*var2[3] - 0.768*t3849*var2[4] + t5106*var2[5] - 0.768*t4164*var2[6];
  p_output1[2]=t5000*var2[0] + t5328*var2[1] + (-3.3612 - 6.8*Power(t4596,2) - 3.2*Power(t4716,2) - 3.2*Power(t4801,2) - 6.8*Power(t4872,2) - 3.2*Power(t4929,2) - 3.2*Power(t4980,2))*var2[2] + t5550*var2[3] + t5363*var2[4] + t5664*var2[5] + t5639*var2[6];
  p_output1[3]=t2545*var2[0] + t5074*var2[1] + t5550*var2[2] + (-1.58228 - 3.2*Power(t1244,2) - 3.2*Power(t929,2))*var2[3] + t6236*var2[4];
  p_output1[4]=-0.768*t862*var2[0] - 0.768*t3849*var2[1] + t5363*var2[2] + t6236*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t3623*var2[0] + t5106*var2[1] + t5664*var2[2] + (-1.58228 - 3.2*Power(t3418,2) - 3.2*Power(t3513,2))*var2[5] + t6489*var2[6];
  p_output1[6]=-0.768*t3150*var2[0] - 0.768*t4164*var2[1] + t5639*var2[2] + t6489*var2[5] - 1.2143199999999998*var2[6];
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

#include "MmatDx_five_link_walker.hh"

namespace RightStance
{

void MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
