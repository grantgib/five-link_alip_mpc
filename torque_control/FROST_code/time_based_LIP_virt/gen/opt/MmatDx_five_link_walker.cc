/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:36:31 GMT-05:00
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
  double t787;
  double t61;
  double t382;
  double t1453;
  double t1971;
  double t50;
  double t690;
  double t1699;
  double t1930;
  double t1944;
  double t1975;
  double t1985;
  double t2056;
  double t2156;
  double t2198;
  double t2453;
  double t2464;
  double t2465;
  double t2482;
  double t2484;
  double t3401;
  double t3368;
  double t3394;
  double t3407;
  double t3395;
  double t3474;
  double t3490;
  double t3497;
  double t3542;
  double t3560;
  double t3565;
  double t3607;
  double t3608;
  double t3739;
  double t3782;
  double t3896;
  double t3912;
  double t3926;
  double t2246;
  double t2380;
  double t2396;
  double t3079;
  double t3080;
  double t3188;
  double t3208;
  double t3209;
  double t3228;
  double t3645;
  double t3685;
  double t3717;
  double t4176;
  double t4188;
  double t4215;
  double t4216;
  double t4234;
  double t4249;
  double t4313;
  double t4314;
  double t4333;
  double t5452;
  double t5608;
  double t5610;
  double t5918;
  double t5920;
  double t6015;
  double t6117;
  double t6128;
  double t6143;
  double t6487;
  double t6490;
  double t6493;
  double t6557;
  double t6593;
  double t6621;
  double t4593;
  double t4731;
  double t4732;
  double t4279;
  double t4281;
  double t4304;
  double t2686;
  double t3045;
  double t3063;
  double t4806;
  double t4818;
  double t2625;
  double t2628;
  double t2668;
  double t2672;
  double t5641;
  double t5647;
  double t5648;
  double t4871;
  double t5142;
  double t5394;
  double t4035;
  double t4086;
  double t4118;
  double t5658;
  double t5659;
  double t3958;
  double t3997;
  double t4023;
  double t4026;
  double t5677;
  double t5679;
  double t5680;
  double t5681;
  double t5689;
  double t5726;
  double t5892;
  double t5896;
  double t4306;
  double t4387;
  double t4785;
  double t4851;
  double t5434;
  double t5615;
  double t5649;
  double t5660;
  double t5661;
  double t5908;
  double t5909;
  double t5910;
  double t5911;
  double t5916;
  double t6036;
  double t6145;
  double t6154;
  double t6186;
  double t6219;
  double t6221;
  double t6384;
  double t6391;
  double t6442;
  double t6448;
  double t6471;
  double t6540;
  double t6709;
  double t6734;
  double t6764;
  double t6784;
  double t6803;
  double t5907;
  double t5917;
  double t6167;
  double t6250;
  double t6478;
  double t6735;
  double t6860;
  double t6887;
  double t7737;
  double t7740;
  double t7746;
  double t7749;
  double t7750;
  double t7754;
  double t7761;
  double t7764;
  double t7076;
  double t7080;
  double t7102;
  double t7105;
  double t2417;
  double t2685;
  double t3324;
  double t3337;
  double t7796;
  double t7797;
  double t7804;
  double t7859;
  double t8242;
  double t8245;
  double t7782;
  double t7785;
  double t7160;
  double t7299;
  double t7309;
  double t7333;
  double t3737;
  double t4029;
  double t4253;
  double t4257;
  double t7940;
  double t7957;
  double t7969;
  double t7994;
  double t8443;
  double t8445;
  double t7868;
  double t7871;
  t787 = Cos(var1[3]);
  t61 = Cos(var1[4]);
  t382 = Sin(var1[3]);
  t1453 = Sin(var1[4]);
  t1971 = Cos(var1[2]);
  t50 = Sin(var1[2]);
  t690 = -1.*t61*t382;
  t1699 = -1.*t787*t1453;
  t1930 = t690 + t1699;
  t1944 = t50*t1930;
  t1975 = t787*t61;
  t1985 = -1.*t382*t1453;
  t2056 = t1975 + t1985;
  t2156 = t1971*t2056;
  t2198 = t1944 + t2156;
  t2453 = -1.*t61;
  t2464 = 1. + t2453;
  t2465 = 0.4*t2464;
  t2482 = 0.64*t61;
  t2484 = t2465 + t2482;
  t3401 = Cos(var1[5]);
  t3368 = Cos(var1[6]);
  t3394 = Sin(var1[5]);
  t3407 = Sin(var1[6]);
  t3395 = -1.*t3368*t3394;
  t3474 = -1.*t3401*t3407;
  t3490 = t3395 + t3474;
  t3497 = t50*t3490;
  t3542 = t3401*t3368;
  t3560 = -1.*t3394*t3407;
  t3565 = t3542 + t3560;
  t3607 = t1971*t3565;
  t3608 = t3497 + t3607;
  t3739 = -1.*t3368;
  t3782 = 1. + t3739;
  t3896 = 0.4*t3782;
  t3912 = 0.64*t3368;
  t3926 = t3896 + t3912;
  t2246 = t1971*t787;
  t2380 = -1.*t50*t382;
  t2396 = t2246 + t2380;
  t3079 = t61*t382;
  t3080 = t787*t1453;
  t3188 = t3079 + t3080;
  t3208 = t1971*t3188;
  t3209 = t50*t2056;
  t3228 = t3208 + t3209;
  t3645 = t1971*t3401;
  t3685 = -1.*t50*t3394;
  t3717 = t3645 + t3685;
  t4176 = t3368*t3394;
  t4188 = t3401*t3407;
  t4215 = t4176 + t4188;
  t4216 = t1971*t4215;
  t4234 = t50*t3565;
  t4249 = t4216 + t4234;
  t4313 = t787*t50;
  t4314 = t1971*t382;
  t4333 = t4313 + t4314;
  t5452 = t3401*t50;
  t5608 = t1971*t3394;
  t5610 = t5452 + t5608;
  t5918 = t2484*t382;
  t5920 = 0.24*t787*t1453;
  t6015 = t5918 + t5920;
  t6117 = t787*t2484;
  t6128 = -0.24*t382*t1453;
  t6143 = t6117 + t6128;
  t6487 = t3926*t3394;
  t6490 = 0.24*t3401*t3407;
  t6493 = t6487 + t6490;
  t6557 = t3401*t3926;
  t6593 = -0.24*t3394*t3407;
  t6621 = t6557 + t6593;
  t4593 = t1971*t1930;
  t4731 = -1.*t50*t2056;
  t4732 = t4593 + t4731;
  t4279 = -1.*t787*t50;
  t4281 = -1.*t1971*t382;
  t4304 = t4279 + t4281;
  t2686 = t2484*t1453;
  t3045 = -0.24*t61*t1453;
  t3063 = t2686 + t3045;
  t4806 = -1.*t50*t3188;
  t4818 = t4806 + t2156;
  t2625 = t2484*t61;
  t2628 = Power(t1453,2);
  t2668 = 0.24*t2628;
  t2672 = t2625 + t2668;
  t5641 = t1971*t3490;
  t5647 = -1.*t50*t3565;
  t5648 = t5641 + t5647;
  t4871 = -1.*t3401*t50;
  t5142 = -1.*t1971*t3394;
  t5394 = t4871 + t5142;
  t4035 = t3926*t3407;
  t4086 = -0.24*t3368*t3407;
  t4118 = t4035 + t4086;
  t5658 = -1.*t50*t4215;
  t5659 = t5658 + t3607;
  t3958 = t3926*t3368;
  t3997 = Power(t3407,2);
  t4023 = 0.24*t3997;
  t4026 = t3958 + t4023;
  t5677 = Power(t1971,2);
  t5679 = -12.*t5677;
  t5680 = Power(t50,2);
  t5681 = -12.*t5680;
  t5689 = Power(t2396,2);
  t5726 = -6.8*t5689;
  t5892 = Power(t3717,2);
  t5896 = -6.8*t5892;
  t4306 = -6.8*t4304*t2396;
  t4387 = -6.8*t4333*t2396;
  t4785 = -3.2*t2198*t4732;
  t4851 = -3.2*t4818*t3228;
  t5434 = -6.8*t5394*t3717;
  t5615 = -6.8*t5610*t3717;
  t5649 = -3.2*t3608*t5648;
  t5660 = -3.2*t5659*t4249;
  t5661 = t4306 + t4387 + t4785 + t4851 + t5434 + t5615 + t5649 + t5660;
  t5908 = Power(t787,2);
  t5909 = 0.11*t5908;
  t5910 = Power(t382,2);
  t5911 = 0.11*t5910;
  t5916 = t5909 + t5911;
  t6036 = -1.*t6015*t2056;
  t6145 = -1.*t1930*t6143;
  t6154 = t6036 + t6145;
  t6186 = t6015*t3188;
  t6219 = t2056*t6143;
  t6221 = t6186 + t6219;
  t6384 = Power(t3401,2);
  t6391 = 0.11*t6384;
  t6442 = Power(t3394,2);
  t6448 = 0.11*t6442;
  t6471 = t6391 + t6448;
  t6540 = -1.*t6493*t3565;
  t6709 = -1.*t3490*t6621;
  t6734 = t6540 + t6709;
  t6764 = t6493*t4215;
  t6784 = t3565*t6621;
  t6803 = t6764 + t6784;
  t5907 = -2.88*t1971;
  t5917 = -6.8*t2396*t5916;
  t6167 = -3.2*t3228*t6154;
  t6250 = -3.2*t2198*t6221;
  t6478 = -6.8*t3717*t6471;
  t6735 = -3.2*t4249*t6734;
  t6860 = -3.2*t3608*t6803;
  t6887 = t5907 + t5917 + t6167 + t6250 + t6478 + t6735 + t6860;
  t7737 = 2.88*t50;
  t7740 = -6.8*t4304*t5916;
  t7746 = -3.2*t4818*t6154;
  t7749 = -3.2*t4732*t6221;
  t7750 = -6.8*t5394*t6471;
  t7754 = -3.2*t5659*t6734;
  t7761 = -3.2*t5648*t6803;
  t7764 = t7737 + t7740 + t7746 + t7749 + t7750 + t7754 + t7761;
  t7076 = -0.748*t4304;
  t7080 = -3.2*t3063*t4818;
  t7102 = -3.2*t2672*t4732;
  t7105 = t7076 + t7080 + t7102;
  t2417 = -0.748*t2396;
  t2685 = -3.2*t2672*t2198;
  t3324 = -3.2*t3063*t3228;
  t3337 = t2417 + t2685 + t3324;
  t7796 = -0.748*t5916;
  t7797 = -3.2*t3063*t6154;
  t7804 = -3.2*t2672*t6221;
  t7859 = -0.67 + t7796 + t7797 + t7804;
  t8242 = -0.768*t2672;
  t8245 = -0.2 + t8242;
  t7782 = -0.768*t6221;
  t7785 = -0.2 + t7782;
  t7160 = -0.748*t5394;
  t7299 = -3.2*t4118*t5659;
  t7309 = -3.2*t4026*t5648;
  t7333 = t7160 + t7299 + t7309;
  t3737 = -0.748*t3717;
  t4029 = -3.2*t4026*t3608;
  t4253 = -3.2*t4118*t4249;
  t4257 = t3737 + t4029 + t4253;
  t7940 = -0.748*t6471;
  t7957 = -3.2*t4118*t6734;
  t7969 = -3.2*t4026*t6803;
  t7994 = -0.67 + t7940 + t7957 + t7969;
  t8443 = -0.768*t4026;
  t8445 = -0.2 + t8443;
  t7868 = -0.768*t6803;
  t7871 = -0.2 + t7868;
  p_output1[0]=(-3.2*Power(t2198,2) - 3.2*Power(t3228,2) - 3.2*Power(t3608,2) - 3.2*Power(t4249,2) - 6.8*Power(t4333,2) - 6.8*Power(t5610,2) + t5679 + t5681 + t5726 + t5896)*var2[0] + t5661*var2[1] + t6887*var2[2] + t3337*var2[3] - 0.768*t2198*var2[4] + t4257*var2[5] - 0.768*t3608*var2[6];
  p_output1[1]=t5661*var2[0] + (-6.8*Power(t4304,2) - 3.2*Power(t4732,2) - 3.2*Power(t4818,2) - 6.8*Power(t5394,2) - 3.2*Power(t5648,2) - 3.2*Power(t5659,2) + t5679 + t5681 + t5726 + t5896)*var2[1] + t7764*var2[2] + t7105*var2[3] - 0.768*t4732*var2[4] + t7333*var2[5] - 0.768*t5648*var2[6];
  p_output1[2]=t6887*var2[0] + t7764*var2[1] + (-3.3612 - 6.8*Power(t5916,2) - 3.2*Power(t6154,2) - 3.2*Power(t6221,2) - 6.8*Power(t6471,2) - 3.2*Power(t6734,2) - 3.2*Power(t6803,2))*var2[2] + t7859*var2[3] + t7785*var2[4] + t7994*var2[5] + t7871*var2[6];
  p_output1[3]=t3337*var2[0] + t7105*var2[1] + t7859*var2[2] + (-1.58228 - 3.2*Power(t2672,2) - 3.2*Power(t3063,2))*var2[3] + t8245*var2[4];
  p_output1[4]=-0.768*t2198*var2[0] - 0.768*t4732*var2[1] + t7785*var2[2] + t8245*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t4257*var2[0] + t7333*var2[1] + t7994*var2[2] + (-1.58228 - 3.2*Power(t4026,2) - 3.2*Power(t4118,2))*var2[5] + t8445*var2[6];
  p_output1[6]=-0.768*t3608*var2[0] - 0.768*t5648*var2[1] + t7871*var2[2] + t8445*var2[5] - 1.2143199999999998*var2[6];
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
