/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:09 GMT-04:00
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
  double t804;
  double t753;
  double t771;
  double t805;
  double t815;
  double t752;
  double t832;
  double t833;
  double t836;
  double t787;
  double t807;
  double t808;
  double t809;
  double t844;
  double t846;
  double t895;
  double t896;
  double t897;
  double t847;
  double t867;
  double t868;
  double t869;
  double t871;
  double t872;
  double t874;
  double t875;
  double t876;
  double t877;
  double t879;
  double t880;
  double t881;
  double t882;
  double t885;
  double t886;
  double t891;
  double t899;
  double t900;
  double t901;
  double t907;
  double t908;
  double t979;
  double t982;
  double t2538;
  double t2540;
  double t2825;
  double t5176;
  double t5213;
  double t5199;
  double t5217;
  double t5218;
  double t5240;
  double t5254;
  double t5258;
  double t5260;
  double t5283;
  double t5285;
  double t5286;
  double t5236;
  double t5266;
  double t5300;
  double t5303;
  double t5304;
  double t5267;
  double t981;
  double t983;
  double t2537;
  double t2893;
  double t3579;
  double t4874;
  double t4918;
  double t5056;
  double t5318;
  double t5320;
  double t5323;
  double t5338;
  double t5339;
  double t5344;
  double t5359;
  double t932;
  double t933;
  double t914;
  double t915;
  double t5380;
  double t5381;
  double t5384;
  double t5385;
  double t5389;
  double t5390;
  double t5391;
  double t5405;
  double t5412;
  double t5413;
  double t5426;
  double t5431;
  double t5440;
  double t5441;
  double t5446;
  double t5448;
  double t5294;
  double t5295;
  double t5271;
  double t5279;
  double t5510;
  double t5481;
  double t5482;
  double t5483;
  double t5484;
  double t5485;
  double t5486;
  double t5487;
  double t5503;
  double t5504;
  double t5559;
  double t5560;
  double t5561;
  double t5562;
  double t5568;
  double t5569;
  double t5595;
  double t5599;
  double t5604;
  double t5605;
  double t5606;
  double t5607;
  double t5611;
  double t5614;
  double t5620;
  double t5628;
  double t5632;
  double t5636;
  double t5637;
  double t5638;
  double t5615;
  double t5633;
  double t5634;
  double t5635;
  double t5645;
  double t5646;
  double t5717;
  double t5718;
  double t5719;
  double t5720;
  double t6602;
  double t6721;
  double t5817;
  double t6819;
  double t6822;
  double t5830;
  double t5582;
  double t5586;
  double t5587;
  double t5588;
  double t5593;
  double t5594;
  double t7769;
  double t7773;
  double t7800;
  double t7816;
  double t7826;
  double t7833;
  double t7855;
  double t7880;
  double t8000;
  double t8007;
  double t8017;
  double t7427;
  double t7564;
  double t7627;
  double t7635;
  double t7732;
  double t7757;
  double t7895;
  double t8019;
  double t8100;
  double t8292;
  double t8293;
  double t8408;
  double t8551;
  double t8675;
  double t8683;
  double t8525;
  double t8706;
  double t8736;
  double t8750;
  double t9342;
  double t9364;
  double t8918;
  double t9405;
  double t9451;
  double t9098;
  double t9706;
  double t9707;
  double t9708;
  double t9909;
  double t10086;
  double t10091;
  double t10093;
  double t10118;
  double t10220;
  double t10257;
  double t11121;
  double t11148;
  double t11155;
  double t11173;
  double t11280;
  double t11286;
  double t11408;
  double t11429;
  double t11625;
  double t11742;
  t804 = Cos(var1[3]);
  t753 = Cos(var1[4]);
  t771 = Sin(var1[3]);
  t805 = Sin(var1[4]);
  t815 = Cos(var1[2]);
  t752 = Sin(var1[2]);
  t832 = t804*t753;
  t833 = -1.*t771*t805;
  t836 = t832 + t833;
  t787 = -1.*t753*t771;
  t807 = -1.*t804*t805;
  t808 = t787 + t807;
  t809 = t752*t808;
  t844 = t815*t836;
  t846 = t809 + t844;
  t895 = t815*t804;
  t896 = -1.*t752*t771;
  t897 = t895 + t896;
  t847 = t753*t771;
  t867 = t804*t805;
  t868 = t847 + t867;
  t869 = t815*t868;
  t871 = t752*t836;
  t872 = t869 + t871;
  t874 = 6.4*t846*t872;
  t875 = t815*t808;
  t876 = -1.*t804*t753;
  t877 = t771*t805;
  t879 = t876 + t877;
  t880 = t752*t879;
  t881 = t875 + t880;
  t882 = 6.4*t846*t881;
  t885 = -1.*t804*t752;
  t886 = -1.*t815*t771;
  t891 = t885 + t886;
  t899 = 13.6*t891*t897;
  t900 = t804*t752;
  t901 = t815*t771;
  t907 = t900 + t901;
  t908 = 13.6*t907*t897;
  t979 = Cos(var1[5]);
  t982 = Sin(var1[5]);
  t2538 = t815*t979;
  t2540 = -1.*t752*t982;
  t2825 = t2538 + t2540;
  t5176 = Cos(var1[6]);
  t5213 = Sin(var1[6]);
  t5199 = -1.*t5176*t982;
  t5217 = -1.*t979*t5213;
  t5218 = t5199 + t5217;
  t5240 = t979*t5176;
  t5254 = -1.*t982*t5213;
  t5258 = t5240 + t5254;
  t5260 = t815*t5258;
  t5283 = t5176*t982;
  t5285 = t979*t5213;
  t5286 = t5283 + t5285;
  t5236 = t752*t5218;
  t5266 = t5236 + t5260;
  t5300 = t815*t5286;
  t5303 = t752*t5258;
  t5304 = t5300 + t5303;
  t5267 = t815*t5218;
  t981 = -1.*t979*t752;
  t983 = -1.*t815*t982;
  t2537 = t981 + t983;
  t2893 = 13.6*t2537*t2825;
  t3579 = t979*t752;
  t4874 = t815*t982;
  t4918 = t3579 + t4874;
  t5056 = 13.6*t4918*t2825;
  t5318 = 6.4*t5266*t5304;
  t5320 = -1.*t979*t5176;
  t5323 = t982*t5213;
  t5338 = t5320 + t5323;
  t5339 = t752*t5338;
  t5344 = t5267 + t5339;
  t5359 = 6.4*t5266*t5344;
  t932 = -1.*t752*t868;
  t933 = t932 + t844;
  t914 = -1.*t752*t836;
  t915 = t875 + t914;
  t5380 = 3.2*t846*t933;
  t5381 = 3.2*t915*t872;
  t5384 = -1.*t752*t808;
  t5385 = t815*t879;
  t5389 = t5384 + t5385;
  t5390 = 3.2*t846*t5389;
  t5391 = 3.2*t915*t881;
  t5405 = Power(t891,2);
  t5412 = 6.8*t5405;
  t5413 = 6.8*t891*t907;
  t5426 = Power(t897,2);
  t5431 = 6.8*t5426;
  t5440 = -1.*t815*t804;
  t5441 = t752*t771;
  t5446 = t5440 + t5441;
  t5448 = 6.8*t897*t5446;
  t5294 = -1.*t752*t5286;
  t5295 = t5294 + t5260;
  t5271 = -1.*t752*t5258;
  t5279 = t5267 + t5271;
  t5510 = -1.*t752*t5218;
  t5481 = Power(t2537,2);
  t5482 = 6.8*t5481;
  t5483 = 6.8*t2537*t4918;
  t5484 = Power(t2825,2);
  t5485 = 6.8*t5484;
  t5486 = -1.*t815*t979;
  t5487 = t752*t982;
  t5503 = t5486 + t5487;
  t5504 = 6.8*t2825*t5503;
  t5559 = 3.2*t5266*t5295;
  t5560 = 3.2*t5279*t5304;
  t5561 = t815*t5338;
  t5562 = t5510 + t5561;
  t5568 = 3.2*t5266*t5562;
  t5569 = 3.2*t5279*t5344;
  t5595 = -1.*t753;
  t5599 = 1. + t5595;
  t5604 = 0.4*t5599;
  t5605 = 0.64*t753;
  t5606 = t5604 + t5605;
  t5607 = t5606*t771;
  t5611 = 0.24*t804*t805;
  t5614 = t5607 + t5611;
  t5620 = t804*t5606;
  t5628 = -0.24*t771*t805;
  t5632 = t5620 + t5628;
  t5636 = -1.*t5606*t771;
  t5637 = -0.24*t804*t805;
  t5638 = t5636 + t5637;
  t5615 = -1.*t5614*t836;
  t5633 = -1.*t808*t5632;
  t5634 = t5615 + t5633;
  t5635 = 3.2*t846*t5634;
  t5645 = t5614*t836;
  t5646 = t808*t5632;
  t5717 = t5614*t868;
  t5718 = t836*t5632;
  t5719 = t5717 + t5718;
  t5720 = 3.2*t5719*t881;
  t6602 = -0.24*t753*t771;
  t6721 = t6602 + t5637;
  t5817 = -1.*t808*t5614;
  t6819 = 0.24*t804*t753;
  t6822 = t6819 + t5628;
  t5830 = -1.*t5632*t879;
  t5582 = Power(t804,2);
  t5586 = 0.11*t5582;
  t5587 = Power(t771,2);
  t5588 = 0.11*t5587;
  t5593 = t5586 + t5588;
  t5594 = 6.8*t891*t5593;
  t7769 = -1.*t5176;
  t7773 = 1. + t7769;
  t7800 = 0.4*t7773;
  t7816 = 0.64*t5176;
  t7826 = t7800 + t7816;
  t7833 = t7826*t982;
  t7855 = 0.24*t979*t5213;
  t7880 = t7833 + t7855;
  t8000 = t979*t7826;
  t8007 = -0.24*t982*t5213;
  t8017 = t8000 + t8007;
  t7427 = Power(t979,2);
  t7564 = 0.11*t7427;
  t7627 = Power(t982,2);
  t7635 = 0.11*t7627;
  t7732 = t7564 + t7635;
  t7757 = 6.8*t2537*t7732;
  t7895 = -1.*t7880*t5258;
  t8019 = -1.*t5218*t8017;
  t8100 = t7895 + t8019;
  t8292 = t7880*t5286;
  t8293 = t5258*t8017;
  t8408 = t8292 + t8293;
  t8551 = -1.*t7826*t982;
  t8675 = -0.24*t979*t5213;
  t8683 = t8551 + t8675;
  t8525 = 3.2*t5266*t8100;
  t8706 = t7880*t5258;
  t8736 = t5218*t8017;
  t8750 = 3.2*t8408*t5344;
  t9342 = -0.24*t5176*t982;
  t9364 = t9342 + t8675;
  t8918 = -1.*t5218*t7880;
  t9405 = 0.24*t979*t5176;
  t9451 = t9405 + t8007;
  t9098 = -1.*t8017*t5338;
  t9706 = 0.748*t891;
  t9707 = t5606*t805;
  t9708 = -0.24*t753*t805;
  t9909 = t9707 + t9708;
  t10086 = t5606*t753;
  t10091 = Power(t805,2);
  t10093 = 0.24*t10091;
  t10118 = t10086 + t10093;
  t10220 = 3.2*t9909*t846;
  t10257 = 3.2*t10118*t881;
  t11121 = 0.748*t2537;
  t11148 = t7826*t5213;
  t11155 = -0.24*t5176*t5213;
  t11173 = t11148 + t11155;
  t11280 = t7826*t5176;
  t11286 = Power(t5213,2);
  t11408 = 0.24*t11286;
  t11429 = t11280 + t11408;
  t11625 = 3.2*t11173*t5266;
  t11742 = 3.2*t11429*t5344;
  p_output1[0]=var2[0]*(-0.5*(t2893 + t5056 + 6.4*t5266*t5279 + 6.4*t5295*t5304 + t899 + t908 + 6.4*t846*t915 + 6.4*t872*t933)*var2[2] - 0.5*(t874 + t882 + t899 + t908)*var2[3] - 0.5*(t874 + t882)*var2[4] - 0.5*(t2893 + t5056 + t5318 + t5359)*var2[5] - 0.5*(t5318 + t5359)*var2[6]);
  p_output1[1]=var2[0]*(-0.5*(3.2*Power(t5279,2) + 3.2*Power(t5295,2) + t5412 + t5413 + t5431 + t5448 + t5482 + t5483 + t5485 + t5504 + 3.2*t5266*(t5510 - 1.*t5258*t815) + 3.2*t5304*(t5271 - 1.*t5286*t815) + 3.2*(t5384 - 1.*t815*t836)*t846 + 3.2*t872*(-1.*t815*t868 + t914) + 3.2*Power(t915,2) + 3.2*Power(t933,2))*var2[2] - 0.5*(t5380 + t5381 + t5390 + t5391 + t5412 + t5413 + t5431 + t5448)*var2[3] - 0.5*(t5380 + t5381 + t5390 + t5391)*var2[4] - 0.5*(t5482 + t5483 + t5485 + t5504 + t5559 + t5560 + t5568 + t5569)*var2[5] - 0.5*(t5559 + t5560 + t5568 + t5569)*var2[6]);
  p_output1[2]=var2[0]*(-0.5*(t5594 - 2.88*t752 + t7757 + 3.2*t5295*t8100 + 3.2*t5279*t8408 + 3.2*t5719*t915 + 3.2*t5634*t933)*var2[2] - 0.5*(t5594 + t5635 + t5720 + 3.2*t846*(t5645 + t5646 + t5638*t836 + t5632*t868) + 3.2*(t5817 + t5830 - 1.*t5638*t808 - 1.*t5632*t836)*t872)*var2[3] - 0.5*(t5635 + t5720 + 3.2*t846*(t5645 + t5646 + t6721*t836 + t6822*t868) + 3.2*(t5817 + t5830 - 1.*t6721*t808 - 1.*t6822*t836)*t872)*var2[4] - 0.5*(t7757 + t8525 + 3.2*t5266*(t5286*t8017 + t5258*t8683 + t8706 + t8736) + t8750 + 3.2*t5304*(-1.*t5258*t8017 - 1.*t5218*t8683 + t8918 + t9098))*var2[5] - 0.5*(t8525 + t8750 + 3.2*t5304*(t8918 + t9098 - 1.*t5218*t9364 - 1.*t5258*t9451) + 3.2*t5266*(t8706 + t8736 + t5258*t9364 + t5286*t9451))*var2[6]);
  p_output1[3]=var2[0]*(-0.5*(3.2*t10118*t915 + t9706 + 3.2*t933*t9909)*var2[2] - 0.5*(t10220 + t10257 + t9706)*var2[3] - 0.5*(t10220 + t10257 + 3.2*(-1.*t5606*t805 + 0.24*t753*t805)*t846 + 3.2*(t10086 - 0.24*Power(t753,2))*t872)*var2[4]);
  p_output1[4]=var2[0]*(-0.384*t915*var2[2] - 0.384*t881*var2[3] - 0.384*t881*var2[4]);
  p_output1[5]=var2[0]*(-0.5*(t11121 + 3.2*t11429*t5279 + 3.2*t11173*t5295)*var2[2] - 0.5*(t11121 + t11625 + t11742)*var2[5] - 0.5*(t11625 + t11742 + 3.2*(t11280 - 0.24*Power(t5176,2))*t5304 + 3.2*t5266*(0.24*t5176*t5213 - 1.*t5213*t7826))*var2[6]);
  p_output1[6]=var2[0]*(-0.384*t5279*var2[2] - 0.384*t5344*var2[5] - 0.384*t5344*var2[6]);
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

#include "Ce1_vec1_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
