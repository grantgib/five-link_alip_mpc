/*
 * Automatically Generated from Mathematica.
 * Wed 1 Apr 2020 22:02:00 GMT-04:00
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
  double t1689;
  double t422;
  double t531;
  double t1927;
  double t2427;
  double t385;
  double t1113;
  double t2127;
  double t2200;
  double t2222;
  double t2428;
  double t2573;
  double t2643;
  double t2783;
  double t2848;
  double t3896;
  double t3950;
  double t3983;
  double t4084;
  double t4088;
  double t5518;
  double t5506;
  double t5511;
  double t5525;
  double t5515;
  double t5529;
  double t5533;
  double t5540;
  double t5543;
  double t5550;
  double t5555;
  double t5556;
  double t5559;
  double t5604;
  double t5615;
  double t5616;
  double t5618;
  double t5620;
  double t2977;
  double t3034;
  double t3376;
  double t5399;
  double t5414;
  double t5473;
  double t5474;
  double t5491;
  double t5494;
  double t5561;
  double t5562;
  double t5570;
  double t5644;
  double t5645;
  double t5646;
  double t5657;
  double t5658;
  double t5668;
  double t5687;
  double t5689;
  double t5691;
  double t5729;
  double t5739;
  double t5740;
  double t5848;
  double t5849;
  double t5853;
  double t5857;
  double t5858;
  double t5859;
  double t5888;
  double t5894;
  double t5895;
  double t5900;
  double t5901;
  double t5902;
  double t5697;
  double t5700;
  double t5701;
  double t5672;
  double t5675;
  double t5678;
  double t5318;
  double t5337;
  double t5340;
  double t5708;
  double t5709;
  double t4101;
  double t4278;
  double t5195;
  double t5246;
  double t5742;
  double t5743;
  double t5746;
  double t5715;
  double t5716;
  double t5717;
  double t5637;
  double t5638;
  double t5643;
  double t5757;
  double t5758;
  double t5625;
  double t5626;
  double t5629;
  double t5630;
  double t5764;
  double t5765;
  double t5766;
  double t5767;
  double t5788;
  double t5793;
  double t5801;
  double t5809;
  double t5686;
  double t5696;
  double t5704;
  double t5714;
  double t5728;
  double t5741;
  double t5749;
  double t5761;
  double t5762;
  double t5834;
  double t5836;
  double t5837;
  double t5838;
  double t5839;
  double t5854;
  double t5865;
  double t5866;
  double t5871;
  double t5872;
  double t5873;
  double t5878;
  double t5882;
  double t5883;
  double t5885;
  double t5886;
  double t5899;
  double t5906;
  double t5907;
  double t5912;
  double t5914;
  double t5916;
  double t5833;
  double t5840;
  double t5870;
  double t5877;
  double t5887;
  double t5908;
  double t5918;
  double t5920;
  double t6000;
  double t6001;
  double t6002;
  double t6003;
  double t6004;
  double t6005;
  double t6006;
  double t6007;
  double t5939;
  double t5946;
  double t5947;
  double t5952;
  double t3779;
  double t5315;
  double t5500;
  double t5501;
  double t6018;
  double t6019;
  double t6020;
  double t6021;
  double t6071;
  double t6072;
  double t6015;
  double t6016;
  double t5955;
  double t5959;
  double t5960;
  double t5961;
  double t5589;
  double t5633;
  double t5669;
  double t5670;
  double t6026;
  double t6027;
  double t6042;
  double t6045;
  double t6095;
  double t6096;
  double t6023;
  double t6024;
  t1689 = Cos(var1[3]);
  t422 = Cos(var1[4]);
  t531 = Sin(var1[3]);
  t1927 = Sin(var1[4]);
  t2427 = Cos(var1[2]);
  t385 = Sin(var1[2]);
  t1113 = -1.*t422*t531;
  t2127 = -1.*t1689*t1927;
  t2200 = t1113 + t2127;
  t2222 = t385*t2200;
  t2428 = t1689*t422;
  t2573 = -1.*t531*t1927;
  t2643 = t2428 + t2573;
  t2783 = t2427*t2643;
  t2848 = t2222 + t2783;
  t3896 = -1.*t422;
  t3950 = 1. + t3896;
  t3983 = 0.4*t3950;
  t4084 = 0.64*t422;
  t4088 = t3983 + t4084;
  t5518 = Cos(var1[5]);
  t5506 = Cos(var1[6]);
  t5511 = Sin(var1[5]);
  t5525 = Sin(var1[6]);
  t5515 = -1.*t5506*t5511;
  t5529 = -1.*t5518*t5525;
  t5533 = t5515 + t5529;
  t5540 = t385*t5533;
  t5543 = t5518*t5506;
  t5550 = -1.*t5511*t5525;
  t5555 = t5543 + t5550;
  t5556 = t2427*t5555;
  t5559 = t5540 + t5556;
  t5604 = -1.*t5506;
  t5615 = 1. + t5604;
  t5616 = 0.4*t5615;
  t5618 = 0.64*t5506;
  t5620 = t5616 + t5618;
  t2977 = t2427*t1689;
  t3034 = -1.*t385*t531;
  t3376 = t2977 + t3034;
  t5399 = t422*t531;
  t5414 = t1689*t1927;
  t5473 = t5399 + t5414;
  t5474 = t2427*t5473;
  t5491 = t385*t2643;
  t5494 = t5474 + t5491;
  t5561 = t2427*t5518;
  t5562 = -1.*t385*t5511;
  t5570 = t5561 + t5562;
  t5644 = t5506*t5511;
  t5645 = t5518*t5525;
  t5646 = t5644 + t5645;
  t5657 = t2427*t5646;
  t5658 = t385*t5555;
  t5668 = t5657 + t5658;
  t5687 = t1689*t385;
  t5689 = t2427*t531;
  t5691 = t5687 + t5689;
  t5729 = t5518*t385;
  t5739 = t2427*t5511;
  t5740 = t5729 + t5739;
  t5848 = t4088*t531;
  t5849 = 0.24*t1689*t1927;
  t5853 = t5848 + t5849;
  t5857 = t1689*t4088;
  t5858 = -0.24*t531*t1927;
  t5859 = t5857 + t5858;
  t5888 = t5620*t5511;
  t5894 = 0.24*t5518*t5525;
  t5895 = t5888 + t5894;
  t5900 = t5518*t5620;
  t5901 = -0.24*t5511*t5525;
  t5902 = t5900 + t5901;
  t5697 = t2427*t2200;
  t5700 = -1.*t385*t2643;
  t5701 = t5697 + t5700;
  t5672 = -1.*t1689*t385;
  t5675 = -1.*t2427*t531;
  t5678 = t5672 + t5675;
  t5318 = t4088*t1927;
  t5337 = -0.24*t422*t1927;
  t5340 = t5318 + t5337;
  t5708 = -1.*t385*t5473;
  t5709 = t5708 + t2783;
  t4101 = t4088*t422;
  t4278 = Power(t1927,2);
  t5195 = 0.24*t4278;
  t5246 = t4101 + t5195;
  t5742 = t2427*t5533;
  t5743 = -1.*t385*t5555;
  t5746 = t5742 + t5743;
  t5715 = -1.*t5518*t385;
  t5716 = -1.*t2427*t5511;
  t5717 = t5715 + t5716;
  t5637 = t5620*t5525;
  t5638 = -0.24*t5506*t5525;
  t5643 = t5637 + t5638;
  t5757 = -1.*t385*t5646;
  t5758 = t5757 + t5556;
  t5625 = t5620*t5506;
  t5626 = Power(t5525,2);
  t5629 = 0.24*t5626;
  t5630 = t5625 + t5629;
  t5764 = Power(t2427,2);
  t5765 = -12.*t5764;
  t5766 = Power(t385,2);
  t5767 = -12.*t5766;
  t5788 = Power(t3376,2);
  t5793 = -6.8*t5788;
  t5801 = Power(t5570,2);
  t5809 = -6.8*t5801;
  t5686 = -6.8*t5678*t3376;
  t5696 = -6.8*t5691*t3376;
  t5704 = -3.2*t2848*t5701;
  t5714 = -3.2*t5709*t5494;
  t5728 = -6.8*t5717*t5570;
  t5741 = -6.8*t5740*t5570;
  t5749 = -3.2*t5559*t5746;
  t5761 = -3.2*t5758*t5668;
  t5762 = t5686 + t5696 + t5704 + t5714 + t5728 + t5741 + t5749 + t5761;
  t5834 = Power(t1689,2);
  t5836 = 0.11*t5834;
  t5837 = Power(t531,2);
  t5838 = 0.11*t5837;
  t5839 = t5836 + t5838;
  t5854 = -1.*t5853*t2643;
  t5865 = -1.*t2200*t5859;
  t5866 = t5854 + t5865;
  t5871 = t5853*t5473;
  t5872 = t2643*t5859;
  t5873 = t5871 + t5872;
  t5878 = Power(t5518,2);
  t5882 = 0.11*t5878;
  t5883 = Power(t5511,2);
  t5885 = 0.11*t5883;
  t5886 = t5882 + t5885;
  t5899 = -1.*t5895*t5555;
  t5906 = -1.*t5533*t5902;
  t5907 = t5899 + t5906;
  t5912 = t5895*t5646;
  t5914 = t5555*t5902;
  t5916 = t5912 + t5914;
  t5833 = -2.88*t2427;
  t5840 = -6.8*t3376*t5839;
  t5870 = -3.2*t5494*t5866;
  t5877 = -3.2*t2848*t5873;
  t5887 = -6.8*t5570*t5886;
  t5908 = -3.2*t5668*t5907;
  t5918 = -3.2*t5559*t5916;
  t5920 = t5833 + t5840 + t5870 + t5877 + t5887 + t5908 + t5918;
  t6000 = 2.88*t385;
  t6001 = -6.8*t5678*t5839;
  t6002 = -3.2*t5709*t5866;
  t6003 = -3.2*t5701*t5873;
  t6004 = -6.8*t5717*t5886;
  t6005 = -3.2*t5758*t5907;
  t6006 = -3.2*t5746*t5916;
  t6007 = t6000 + t6001 + t6002 + t6003 + t6004 + t6005 + t6006;
  t5939 = -0.748*t5678;
  t5946 = -3.2*t5340*t5709;
  t5947 = -3.2*t5246*t5701;
  t5952 = t5939 + t5946 + t5947;
  t3779 = -0.748*t3376;
  t5315 = -3.2*t5246*t2848;
  t5500 = -3.2*t5340*t5494;
  t5501 = t3779 + t5315 + t5500;
  t6018 = -0.748*t5839;
  t6019 = -3.2*t5340*t5866;
  t6020 = -3.2*t5246*t5873;
  t6021 = -0.67 + t6018 + t6019 + t6020;
  t6071 = -0.768*t5246;
  t6072 = -0.2 + t6071;
  t6015 = -0.768*t5873;
  t6016 = -0.2 + t6015;
  t5955 = -0.748*t5717;
  t5959 = -3.2*t5643*t5758;
  t5960 = -3.2*t5630*t5746;
  t5961 = t5955 + t5959 + t5960;
  t5589 = -0.748*t5570;
  t5633 = -3.2*t5630*t5559;
  t5669 = -3.2*t5643*t5668;
  t5670 = t5589 + t5633 + t5669;
  t6026 = -0.748*t5886;
  t6027 = -3.2*t5643*t5907;
  t6042 = -3.2*t5630*t5916;
  t6045 = -0.67 + t6026 + t6027 + t6042;
  t6095 = -0.768*t5630;
  t6096 = -0.2 + t6095;
  t6023 = -0.768*t5916;
  t6024 = -0.2 + t6023;
  p_output1[0]=(-3.2*Power(t2848,2) - 3.2*Power(t5494,2) - 3.2*Power(t5559,2) - 3.2*Power(t5668,2) - 6.8*Power(t5691,2) - 6.8*Power(t5740,2) + t5765 + t5767 + t5793 + t5809)*var2[0] + t5762*var2[1] + t5920*var2[2] + t5501*var2[3] - 0.768*t2848*var2[4] + t5670*var2[5] - 0.768*t5559*var2[6];
  p_output1[1]=t5762*var2[0] + (-6.8*Power(t5678,2) - 3.2*Power(t5701,2) - 3.2*Power(t5709,2) - 6.8*Power(t5717,2) - 3.2*Power(t5746,2) - 3.2*Power(t5758,2) + t5765 + t5767 + t5793 + t5809)*var2[1] + t6007*var2[2] + t5952*var2[3] - 0.768*t5701*var2[4] + t5961*var2[5] - 0.768*t5746*var2[6];
  p_output1[2]=t5920*var2[0] + t6007*var2[1] + (-3.3612 - 6.8*Power(t5839,2) - 3.2*Power(t5866,2) - 3.2*Power(t5873,2) - 6.8*Power(t5886,2) - 3.2*Power(t5907,2) - 3.2*Power(t5916,2))*var2[2] + t6021*var2[3] + t6016*var2[4] + t6045*var2[5] + t6024*var2[6];
  p_output1[3]=t5501*var2[0] + t5952*var2[1] + t6021*var2[2] + (-1.58228 - 3.2*Power(t5246,2) - 3.2*Power(t5340,2))*var2[3] + t6072*var2[4];
  p_output1[4]=-0.768*t2848*var2[0] - 0.768*t5701*var2[1] + t6016*var2[2] + t6072*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t5670*var2[0] + t5961*var2[1] + t6045*var2[2] + (-1.58228 - 3.2*Power(t5630,2) - 3.2*Power(t5643,2))*var2[5] + t6096*var2[6];
  p_output1[6]=-0.768*t5559*var2[0] - 0.768*t5746*var2[1] + t6024*var2[2] + t6096*var2[5] - 1.2143199999999998*var2[6];
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
