/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:13 GMT-05:00
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
  double t199;
  double t77;
  double t115;
  double t280;
  double t643;
  double t33;
  double t180;
  double t382;
  double t386;
  double t639;
  double t1964;
  double t1995;
  double t2167;
  double t2170;
  double t2230;
  double t2321;
  double t2330;
  double t2357;
  double t2372;
  double t2387;
  double t4366;
  double t4310;
  double t4318;
  double t4368;
  double t4360;
  double t4391;
  double t4401;
  double t4410;
  double t4422;
  double t4558;
  double t4593;
  double t4602;
  double t4603;
  double t4752;
  double t4753;
  double t4754;
  double t4766;
  double t4836;
  double t2293;
  double t2297;
  double t2308;
  double t3496;
  double t3759;
  double t3851;
  double t3855;
  double t4093;
  double t4218;
  double t4693;
  double t4720;
  double t4725;
  double t5233;
  double t5292;
  double t5299;
  double t5316;
  double t5380;
  double t5382;
  double t5580;
  double t5619;
  double t5633;
  double t5989;
  double t6001;
  double t6088;
  double t7314;
  double t7346;
  double t7370;
  double t7430;
  double t7441;
  double t7554;
  double t8347;
  double t8381;
  double t8387;
  double t8420;
  double t8430;
  double t8450;
  double t5694;
  double t5723;
  double t5730;
  double t5447;
  double t5491;
  double t5500;
  double t2740;
  double t3358;
  double t3372;
  double t5763;
  double t5771;
  double t2388;
  double t2566;
  double t2681;
  double t2715;
  double t6105;
  double t6145;
  double t6159;
  double t5894;
  double t5948;
  double t5966;
  double t5110;
  double t5130;
  double t5131;
  double t6234;
  double t6300;
  double t4877;
  double t4887;
  double t5026;
  double t5028;
  double t6351;
  double t6356;
  double t6359;
  double t6387;
  double t6493;
  double t6495;
  double t6626;
  double t6628;
  double t5526;
  double t5679;
  double t5761;
  double t5843;
  double t5987;
  double t6092;
  double t6180;
  double t6301;
  double t6330;
  double t6990;
  double t7066;
  double t7102;
  double t7193;
  double t7218;
  double t7386;
  double t7563;
  double t7816;
  double t7985;
  double t7995;
  double t8140;
  double t8158;
  double t8185;
  double t8218;
  double t8252;
  double t8264;
  double t8404;
  double t8474;
  double t8514;
  double t8540;
  double t8552;
  double t8576;
  double t6921;
  double t7284;
  double t7919;
  double t8153;
  double t8290;
  double t8528;
  double t8601;
  double t8630;
  double t9166;
  double t9348;
  double t9382;
  double t9383;
  double t9415;
  double t9467;
  double t9499;
  double t9504;
  double t8812;
  double t8814;
  double t8819;
  double t8840;
  double t2310;
  double t2734;
  double t4226;
  double t4237;
  double t9787;
  double t9796;
  double t9837;
  double t9889;
  double t10205;
  double t10217;
  double t9622;
  double t9773;
  double t8895;
  double t8898;
  double t8909;
  double t8952;
  double t4738;
  double t5076;
  double t5406;
  double t5427;
  double t9932;
  double t9968;
  double t9975;
  double t10014;
  double t10516;
  double t10541;
  double t9912;
  double t9920;
  t199 = Cos(var1[3]);
  t77 = Cos(var1[4]);
  t115 = Sin(var1[3]);
  t280 = Sin(var1[4]);
  t643 = Cos(var1[2]);
  t33 = Sin(var1[2]);
  t180 = -1.*t77*t115;
  t382 = -1.*t199*t280;
  t386 = t180 + t382;
  t639 = t33*t386;
  t1964 = t199*t77;
  t1995 = -1.*t115*t280;
  t2167 = t1964 + t1995;
  t2170 = t643*t2167;
  t2230 = t639 + t2170;
  t2321 = -1.*t77;
  t2330 = 1. + t2321;
  t2357 = 0.4*t2330;
  t2372 = 0.64*t77;
  t2387 = t2357 + t2372;
  t4366 = Cos(var1[5]);
  t4310 = Cos(var1[6]);
  t4318 = Sin(var1[5]);
  t4368 = Sin(var1[6]);
  t4360 = -1.*t4310*t4318;
  t4391 = -1.*t4366*t4368;
  t4401 = t4360 + t4391;
  t4410 = t33*t4401;
  t4422 = t4366*t4310;
  t4558 = -1.*t4318*t4368;
  t4593 = t4422 + t4558;
  t4602 = t643*t4593;
  t4603 = t4410 + t4602;
  t4752 = -1.*t4310;
  t4753 = 1. + t4752;
  t4754 = 0.4*t4753;
  t4766 = 0.64*t4310;
  t4836 = t4754 + t4766;
  t2293 = t643*t199;
  t2297 = -1.*t33*t115;
  t2308 = t2293 + t2297;
  t3496 = t77*t115;
  t3759 = t199*t280;
  t3851 = t3496 + t3759;
  t3855 = t643*t3851;
  t4093 = t33*t2167;
  t4218 = t3855 + t4093;
  t4693 = t643*t4366;
  t4720 = -1.*t33*t4318;
  t4725 = t4693 + t4720;
  t5233 = t4310*t4318;
  t5292 = t4366*t4368;
  t5299 = t5233 + t5292;
  t5316 = t643*t5299;
  t5380 = t33*t4593;
  t5382 = t5316 + t5380;
  t5580 = t199*t33;
  t5619 = t643*t115;
  t5633 = t5580 + t5619;
  t5989 = t4366*t33;
  t6001 = t643*t4318;
  t6088 = t5989 + t6001;
  t7314 = t2387*t115;
  t7346 = 0.24*t199*t280;
  t7370 = t7314 + t7346;
  t7430 = t199*t2387;
  t7441 = -0.24*t115*t280;
  t7554 = t7430 + t7441;
  t8347 = t4836*t4318;
  t8381 = 0.24*t4366*t4368;
  t8387 = t8347 + t8381;
  t8420 = t4366*t4836;
  t8430 = -0.24*t4318*t4368;
  t8450 = t8420 + t8430;
  t5694 = t643*t386;
  t5723 = -1.*t33*t2167;
  t5730 = t5694 + t5723;
  t5447 = -1.*t199*t33;
  t5491 = -1.*t643*t115;
  t5500 = t5447 + t5491;
  t2740 = t2387*t280;
  t3358 = -0.24*t77*t280;
  t3372 = t2740 + t3358;
  t5763 = -1.*t33*t3851;
  t5771 = t5763 + t2170;
  t2388 = t2387*t77;
  t2566 = Power(t280,2);
  t2681 = 0.24*t2566;
  t2715 = t2388 + t2681;
  t6105 = t643*t4401;
  t6145 = -1.*t33*t4593;
  t6159 = t6105 + t6145;
  t5894 = -1.*t4366*t33;
  t5948 = -1.*t643*t4318;
  t5966 = t5894 + t5948;
  t5110 = t4836*t4368;
  t5130 = -0.24*t4310*t4368;
  t5131 = t5110 + t5130;
  t6234 = -1.*t33*t5299;
  t6300 = t6234 + t4602;
  t4877 = t4836*t4310;
  t4887 = Power(t4368,2);
  t5026 = 0.24*t4887;
  t5028 = t4877 + t5026;
  t6351 = Power(t643,2);
  t6356 = -12.*t6351;
  t6359 = Power(t33,2);
  t6387 = -12.*t6359;
  t6493 = Power(t2308,2);
  t6495 = -6.8*t6493;
  t6626 = Power(t4725,2);
  t6628 = -6.8*t6626;
  t5526 = -6.8*t5500*t2308;
  t5679 = -6.8*t5633*t2308;
  t5761 = -3.2*t2230*t5730;
  t5843 = -3.2*t5771*t4218;
  t5987 = -6.8*t5966*t4725;
  t6092 = -6.8*t6088*t4725;
  t6180 = -3.2*t4603*t6159;
  t6301 = -3.2*t6300*t5382;
  t6330 = t5526 + t5679 + t5761 + t5843 + t5987 + t6092 + t6180 + t6301;
  t6990 = Power(t199,2);
  t7066 = 0.11*t6990;
  t7102 = Power(t115,2);
  t7193 = 0.11*t7102;
  t7218 = t7066 + t7193;
  t7386 = -1.*t7370*t2167;
  t7563 = -1.*t386*t7554;
  t7816 = t7386 + t7563;
  t7985 = t7370*t3851;
  t7995 = t2167*t7554;
  t8140 = t7985 + t7995;
  t8158 = Power(t4366,2);
  t8185 = 0.11*t8158;
  t8218 = Power(t4318,2);
  t8252 = 0.11*t8218;
  t8264 = t8185 + t8252;
  t8404 = -1.*t8387*t4593;
  t8474 = -1.*t4401*t8450;
  t8514 = t8404 + t8474;
  t8540 = t8387*t5299;
  t8552 = t4593*t8450;
  t8576 = t8540 + t8552;
  t6921 = -2.88*t643;
  t7284 = -6.8*t2308*t7218;
  t7919 = -3.2*t4218*t7816;
  t8153 = -3.2*t2230*t8140;
  t8290 = -6.8*t4725*t8264;
  t8528 = -3.2*t5382*t8514;
  t8601 = -3.2*t4603*t8576;
  t8630 = t6921 + t7284 + t7919 + t8153 + t8290 + t8528 + t8601;
  t9166 = 2.88*t33;
  t9348 = -6.8*t5500*t7218;
  t9382 = -3.2*t5771*t7816;
  t9383 = -3.2*t5730*t8140;
  t9415 = -6.8*t5966*t8264;
  t9467 = -3.2*t6300*t8514;
  t9499 = -3.2*t6159*t8576;
  t9504 = t9166 + t9348 + t9382 + t9383 + t9415 + t9467 + t9499;
  t8812 = -0.748*t5500;
  t8814 = -3.2*t3372*t5771;
  t8819 = -3.2*t2715*t5730;
  t8840 = t8812 + t8814 + t8819;
  t2310 = -0.748*t2308;
  t2734 = -3.2*t2715*t2230;
  t4226 = -3.2*t3372*t4218;
  t4237 = t2310 + t2734 + t4226;
  t9787 = -0.748*t7218;
  t9796 = -3.2*t3372*t7816;
  t9837 = -3.2*t2715*t8140;
  t9889 = -0.67 + t9787 + t9796 + t9837;
  t10205 = -0.768*t2715;
  t10217 = -0.2 + t10205;
  t9622 = -0.768*t8140;
  t9773 = -0.2 + t9622;
  t8895 = -0.748*t5966;
  t8898 = -3.2*t5131*t6300;
  t8909 = -3.2*t5028*t6159;
  t8952 = t8895 + t8898 + t8909;
  t4738 = -0.748*t4725;
  t5076 = -3.2*t5028*t4603;
  t5406 = -3.2*t5131*t5382;
  t5427 = t4738 + t5076 + t5406;
  t9932 = -0.748*t8264;
  t9968 = -3.2*t5131*t8514;
  t9975 = -3.2*t5028*t8576;
  t10014 = -0.67 + t9932 + t9968 + t9975;
  t10516 = -0.768*t5028;
  t10541 = -0.2 + t10516;
  t9912 = -0.768*t8576;
  t9920 = -0.2 + t9912;
  p_output1[0]=(-3.2*Power(t2230,2) - 3.2*Power(t4218,2) - 3.2*Power(t4603,2) - 3.2*Power(t5382,2) - 6.8*Power(t5633,2) - 6.8*Power(t6088,2) + t6356 + t6387 + t6495 + t6628)*var2[0] + t6330*var2[1] + t8630*var2[2] + t4237*var2[3] - 0.768*t2230*var2[4] + t5427*var2[5] - 0.768*t4603*var2[6];
  p_output1[1]=t6330*var2[0] + (-6.8*Power(t5500,2) - 3.2*Power(t5730,2) - 3.2*Power(t5771,2) - 6.8*Power(t5966,2) - 3.2*Power(t6159,2) - 3.2*Power(t6300,2) + t6356 + t6387 + t6495 + t6628)*var2[1] + t9504*var2[2] + t8840*var2[3] - 0.768*t5730*var2[4] + t8952*var2[5] - 0.768*t6159*var2[6];
  p_output1[2]=t8630*var2[0] + t9504*var2[1] + (-3.3612 - 6.8*Power(t7218,2) - 3.2*Power(t7816,2) - 3.2*Power(t8140,2) - 6.8*Power(t8264,2) - 3.2*Power(t8514,2) - 3.2*Power(t8576,2))*var2[2] + t9889*var2[3] + t9773*var2[4] + t10014*var2[5] + t9920*var2[6];
  p_output1[3]=t4237*var2[0] + t8840*var2[1] + t9889*var2[2] + (-1.58228 - 3.2*Power(t2715,2) - 3.2*Power(t3372,2))*var2[3] + t10217*var2[4];
  p_output1[4]=-0.768*t2230*var2[0] - 0.768*t5730*var2[1] + t9773*var2[2] + t10217*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t5427*var2[0] + t8952*var2[1] + t10014*var2[2] + (-1.58228 - 3.2*Power(t5028,2) - 3.2*Power(t5131,2))*var2[5] + t10541*var2[6];
  p_output1[6]=-0.768*t4603*var2[0] - 0.768*t6159*var2[1] + t9920*var2[2] + t10541*var2[5] - 1.2143199999999998*var2[6];
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
