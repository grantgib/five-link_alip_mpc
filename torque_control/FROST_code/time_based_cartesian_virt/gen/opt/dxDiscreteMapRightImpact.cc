/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:16:50 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t1019;
  double t900;
  double t953;
  double t1590;
  double t5118;
  double t881;
  double t958;
  double t2114;
  double t2140;
  double t5114;
  double t5123;
  double t5158;
  double t5215;
  double t5305;
  double t5331;
  double t7165;
  double t7170;
  double t7179;
  double t7183;
  double t7184;
  double t7295;
  double t7288;
  double t7289;
  double t7296;
  double t7294;
  double t7298;
  double t7299;
  double t7300;
  double t7303;
  double t7307;
  double t7313;
  double t7317;
  double t7319;
  double t7362;
  double t7368;
  double t7369;
  double t7372;
  double t7378;
  double t5455;
  double t5550;
  double t5753;
  double t7253;
  double t7254;
  double t7255;
  double t7256;
  double t7257;
  double t7266;
  double t7340;
  double t7346;
  double t7348;
  double t7477;
  double t7479;
  double t7480;
  double t7481;
  double t7484;
  double t7486;
  double t7517;
  double t7520;
  double t7521;
  double t7559;
  double t7560;
  double t7567;
  double t7677;
  double t7679;
  double t7683;
  double t7691;
  double t7693;
  double t7694;
  double t7715;
  double t7716;
  double t7717;
  double t7723;
  double t7726;
  double t7727;
  double t606;
  double t803;
  double t7534;
  double t7535;
  double t7536;
  double t5437;
  double t5448;
  double t7502;
  double t7508;
  double t7509;
  double t7241;
  double t7249;
  double t7250;
  double t7539;
  double t7542;
  double t7185;
  double t7192;
  double t7196;
  double t7234;
  double t7282;
  double t7286;
  double t7569;
  double t7572;
  double t7573;
  double t7334;
  double t7336;
  double t7552;
  double t7556;
  double t7557;
  double t7461;
  double t7469;
  double t7475;
  double t7576;
  double t7579;
  double t7394;
  double t7395;
  double t7410;
  double t7411;
  double t7495;
  double t7501;
  double t7591;
  double t7593;
  double t7595;
  double t7597;
  double t7610;
  double t7611;
  double t7637;
  double t7640;
  double t7589;
  double t7590;
  double t7511;
  double t7523;
  double t7538;
  double t7543;
  double t7558;
  double t7568;
  double t7574;
  double t7583;
  double t7586;
  double t7656;
  double t7657;
  double t7665;
  double t7668;
  double t7670;
  double t7672;
  double t7673;
  double t7684;
  double t7695;
  double t7696;
  double t7699;
  double t7702;
  double t7703;
  double t7708;
  double t7709;
  double t7710;
  double t7712;
  double t7713;
  double t7720;
  double t7729;
  double t7732;
  double t7734;
  double t7738;
  double t7741;
  double t7970;
  double t7991;
  double t7992;
  double t7664;
  double t7675;
  double t7697;
  double t7704;
  double t7714;
  double t7733;
  double t7743;
  double t7744;
  double t7890;
  double t7891;
  double t7892;
  double t7898;
  double t7901;
  double t7902;
  double t7904;
  double t7910;
  double t7921;
  double t7922;
  double t7929;
  double t7944;
  double t7949;
  double t7952;
  double t7953;
  double t7968;
  double t7969;
  double t7994;
  double t7995;
  double t7998;
  double t8018;
  double t8021;
  double t8026;
  double t8035;
  double t7760;
  double t7764;
  double t7770;
  double t7776;
  double t7155;
  double t7235;
  double t7267;
  double t7268;
  double t8076;
  double t8088;
  double t8099;
  double t8103;
  double t8293;
  double t8314;
  double t8044;
  double t8072;
  double t7787;
  double t7789;
  double t7791;
  double t7795;
  double t7361;
  double t7415;
  double t7487;
  double t7489;
  double t8141;
  double t8143;
  double t8145;
  double t8147;
  double t8473;
  double t8476;
  double t8118;
  double t8123;
  t1019 = Cos(var2[3]);
  t900 = Cos(var2[4]);
  t953 = Sin(var2[3]);
  t1590 = Sin(var2[4]);
  t5118 = Cos(var2[2]);
  t881 = Sin(var2[2]);
  t958 = -1.*t900*t953;
  t2114 = -1.*t1019*t1590;
  t2140 = t958 + t2114;
  t5114 = t881*t2140;
  t5123 = t1019*t900;
  t5158 = -1.*t953*t1590;
  t5215 = t5123 + t5158;
  t5305 = t5118*t5215;
  t5331 = t5114 + t5305;
  t7165 = -1.*t900;
  t7170 = 1. + t7165;
  t7179 = 0.4*t7170;
  t7183 = 0.64*t900;
  t7184 = t7179 + t7183;
  t7295 = Cos(var2[5]);
  t7288 = Cos(var2[6]);
  t7289 = Sin(var2[5]);
  t7296 = Sin(var2[6]);
  t7294 = -1.*t7288*t7289;
  t7298 = -1.*t7295*t7296;
  t7299 = t7294 + t7298;
  t7300 = t881*t7299;
  t7303 = t7295*t7288;
  t7307 = -1.*t7289*t7296;
  t7313 = t7303 + t7307;
  t7317 = t5118*t7313;
  t7319 = t7300 + t7317;
  t7362 = -1.*t7288;
  t7368 = 1. + t7362;
  t7369 = 0.4*t7368;
  t7372 = 0.64*t7288;
  t7378 = t7369 + t7372;
  t5455 = t5118*t1019;
  t5550 = -1.*t881*t953;
  t5753 = t5455 + t5550;
  t7253 = t900*t953;
  t7254 = t1019*t1590;
  t7255 = t7253 + t7254;
  t7256 = t5118*t7255;
  t7257 = t881*t5215;
  t7266 = t7256 + t7257;
  t7340 = t5118*t7295;
  t7346 = -1.*t881*t7289;
  t7348 = t7340 + t7346;
  t7477 = t7288*t7289;
  t7479 = t7295*t7296;
  t7480 = t7477 + t7479;
  t7481 = t5118*t7480;
  t7484 = t881*t7313;
  t7486 = t7481 + t7484;
  t7517 = t1019*t881;
  t7520 = t5118*t953;
  t7521 = t7517 + t7520;
  t7559 = t7295*t881;
  t7560 = t5118*t7289;
  t7567 = t7559 + t7560;
  t7677 = t7184*t953;
  t7679 = 0.24*t1019*t1590;
  t7683 = t7677 + t7679;
  t7691 = t1019*t7184;
  t7693 = -0.24*t953*t1590;
  t7694 = t7691 + t7693;
  t7715 = t7378*t7289;
  t7716 = 0.24*t7295*t7296;
  t7717 = t7715 + t7716;
  t7723 = t7295*t7378;
  t7726 = -0.24*t7289*t7296;
  t7727 = t7723 + t7726;
  t606 = -1.*var1[6];
  t803 = var3[4] + t606;
  t7534 = t5118*t2140;
  t7535 = -1.*t881*t5215;
  t7536 = t7534 + t7535;
  t5437 = -1.*var1[5];
  t5448 = var3[3] + t5437;
  t7502 = -1.*t1019*t881;
  t7508 = -1.*t5118*t953;
  t7509 = t7502 + t7508;
  t7241 = t7184*t1590;
  t7249 = -0.24*t900*t1590;
  t7250 = t7241 + t7249;
  t7539 = -1.*t881*t7255;
  t7542 = t7539 + t5305;
  t7185 = t7184*t900;
  t7192 = Power(t1590,2);
  t7196 = 0.24*t7192;
  t7234 = t7185 + t7196;
  t7282 = -1.*var1[4];
  t7286 = var3[6] + t7282;
  t7569 = t5118*t7299;
  t7572 = -1.*t881*t7313;
  t7573 = t7569 + t7572;
  t7334 = -1.*var1[3];
  t7336 = var3[5] + t7334;
  t7552 = -1.*t7295*t881;
  t7556 = -1.*t5118*t7289;
  t7557 = t7552 + t7556;
  t7461 = t7378*t7296;
  t7469 = -0.24*t7288*t7296;
  t7475 = t7461 + t7469;
  t7576 = -1.*t881*t7480;
  t7579 = t7576 + t7317;
  t7394 = t7378*t7288;
  t7395 = Power(t7296,2);
  t7410 = 0.24*t7395;
  t7411 = t7394 + t7410;
  t7495 = -1.*var1[1];
  t7501 = var3[1] + t7495;
  t7591 = Power(t5118,2);
  t7593 = 12.*t7591;
  t7595 = Power(t881,2);
  t7597 = 12.*t7595;
  t7610 = Power(t5753,2);
  t7611 = 6.8*t7610;
  t7637 = Power(t7348,2);
  t7640 = 6.8*t7637;
  t7589 = -1.*var1[0];
  t7590 = var3[0] + t7589;
  t7511 = 6.8*t7509*t5753;
  t7523 = 6.8*t7521*t5753;
  t7538 = 3.2*t5331*t7536;
  t7543 = 3.2*t7542*t7266;
  t7558 = 6.8*t7557*t7348;
  t7568 = 6.8*t7567*t7348;
  t7574 = 3.2*t7319*t7573;
  t7583 = 3.2*t7579*t7486;
  t7586 = t7511 + t7523 + t7538 + t7543 + t7558 + t7568 + t7574 + t7583;
  t7656 = -1.*var1[2];
  t7657 = var3[2] + t7656;
  t7665 = Power(t1019,2);
  t7668 = 0.11*t7665;
  t7670 = Power(t953,2);
  t7672 = 0.11*t7670;
  t7673 = t7668 + t7672;
  t7684 = -1.*t7683*t5215;
  t7695 = -1.*t2140*t7694;
  t7696 = t7684 + t7695;
  t7699 = t7683*t7255;
  t7702 = t5215*t7694;
  t7703 = t7699 + t7702;
  t7708 = Power(t7295,2);
  t7709 = 0.11*t7708;
  t7710 = Power(t7289,2);
  t7712 = 0.11*t7710;
  t7713 = t7709 + t7712;
  t7720 = -1.*t7717*t7313;
  t7729 = -1.*t7299*t7727;
  t7732 = t7720 + t7729;
  t7734 = t7717*t7480;
  t7738 = t7313*t7727;
  t7741 = t7734 + t7738;
  t7970 = -1.*t5118*t1019;
  t7991 = t881*t953;
  t7992 = t7970 + t7991;
  t7664 = 2.88*t5118;
  t7675 = 6.8*t5753*t7673;
  t7697 = 3.2*t7266*t7696;
  t7704 = 3.2*t5331*t7703;
  t7714 = 6.8*t7348*t7713;
  t7733 = 3.2*t7486*t7732;
  t7743 = 3.2*t7319*t7741;
  t7744 = t7664 + t7675 + t7697 + t7704 + t7714 + t7733 + t7743;
  t7890 = -2.88*t881;
  t7891 = 6.8*t7509*t7673;
  t7892 = 3.2*t7542*t7696;
  t7898 = 3.2*t7536*t7703;
  t7901 = 6.8*t7557*t7713;
  t7902 = 3.2*t7579*t7732;
  t7904 = 3.2*t7573*t7741;
  t7910 = t7890 + t7891 + t7892 + t7898 + t7901 + t7902 + t7904;
  t7921 = 0.4*t7170*t5753;
  t7922 = -0.4*t7509*t1590;
  t7929 = t900*t5753;
  t7944 = t7509*t1590;
  t7949 = t7929 + t7944;
  t7952 = 0.8*t7949;
  t7953 = t7921 + t7922 + t7952;
  t7968 = -1.*var4[0]*t7953;
  t7969 = 0.4*t7170*t7509;
  t7994 = -0.4*t7992*t1590;
  t7995 = t900*t7509;
  t7998 = t7992*t1590;
  t8018 = t7995 + t7998;
  t8021 = 0.8*t8018;
  t8026 = t7969 + t7994 + t8021;
  t8035 = -1.*var4[2]*t8026;
  t7760 = 0.748*t7509;
  t7764 = 3.2*t7250*t7542;
  t7770 = 3.2*t7234*t7536;
  t7776 = t7760 + t7764 + t7770;
  t7155 = 0.748*t5753;
  t7235 = 3.2*t7234*t5331;
  t7267 = 3.2*t7250*t7266;
  t7268 = t7155 + t7235 + t7267;
  t8076 = 0.748*t7673;
  t8088 = 3.2*t7250*t7696;
  t8099 = 3.2*t7234*t7703;
  t8103 = 0.67 + t8076 + t8088 + t8099;
  t8293 = 0.768*t7234;
  t8314 = 0.2 + t8293;
  t8044 = 0.768*t7703;
  t8072 = 0.2 + t8044;
  t7787 = 0.748*t7557;
  t7789 = 3.2*t7475*t7579;
  t7791 = 3.2*t7411*t7573;
  t7795 = t7787 + t7789 + t7791;
  t7361 = 0.748*t7348;
  t7415 = 3.2*t7411*t7319;
  t7487 = 3.2*t7475*t7486;
  t7489 = t7361 + t7415 + t7487;
  t8141 = 0.748*t7713;
  t8143 = 3.2*t7475*t7732;
  t8145 = 3.2*t7411*t7741;
  t8147 = 0.67 + t8141 + t8143 + t8145;
  t8473 = 0.768*t7411;
  t8476 = 0.2 + t8473;
  t8118 = 0.768*t7741;
  t8123 = 0.2 + t8118;
  p_output1[0]=t5448*t7268 + 0.768*t7286*t7319 + t7336*t7489 + t7501*t7586 + t7590*(3.2*Power(t5331,2) + 3.2*Power(t7266,2) + 3.2*Power(t7319,2) + 3.2*Power(t7486,2) + 6.8*Power(t7521,2) + 6.8*Power(t7567,2) + t7593 + t7597 + t7611 + t7640) + t7657*t7744 + 0.768*t5331*t803 - 1.*var4[0];
  p_output1[1]=0.768*t7286*t7573 + t7586*t7590 + t7501*(6.8*Power(t7509,2) + 3.2*Power(t7536,2) + 3.2*Power(t7542,2) + 6.8*Power(t7557,2) + 3.2*Power(t7573,2) + 3.2*Power(t7579,2) + t7593 + t7597 + t7611 + t7640) + t5448*t7776 + t7336*t7795 + t7657*t7910 + 0.768*t7536*t803 - 1.*var4[2];
  p_output1[2]=t7657*(3.3612 + 6.8*Power(t7673,2) + 3.2*Power(t7696,2) + 3.2*Power(t7703,2) + 6.8*Power(t7713,2) + 3.2*Power(t7732,2) + 3.2*Power(t7741,2)) + t7590*t7744 + t7501*t7910 + t7968 + t8035 + t803*t8072 + t5448*t8103 + t7286*t8123 + t7336*t8147;
  p_output1[3]=t5448*(1.58228 + 3.2*Power(t7234,2) + 3.2*Power(t7250,2)) + t7268*t7590 + t7501*t7776 + t7968 + t8035 + t7657*t8103 + t803*t8314;
  p_output1[4]=0.768*t7501*t7536 + 0.768*t5331*t7590 + 1.2143199999999998*t803 + t7657*t8072 + t5448*t8314 - 1.*(0.4*t1590*t7521 + 0.8*(-1.*t1590*t7521 + t7929) - 0.4*t5753*t900)*var4[0] - 1.*(0.4*t1590*t5753 + 0.8*(-1.*t1590*t5753 + t7995) - 0.4*t7509*t900)*var4[2];
  p_output1[5]=t7336*(1.58228 + 3.2*Power(t7411,2) + 3.2*Power(t7475,2)) + t7489*t7590 + t7501*t7795 + t7657*t8147 + t7286*t8476;
  p_output1[6]=1.2143199999999998*t7286 + 0.768*t7501*t7573 + 0.768*t7319*t7590 + t7657*t8123 + t7336*t8476;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMapRightImpact.hh"

namespace RightImpact
{

void dxDiscreteMapRightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
