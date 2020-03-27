/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:48:54 GMT-04:00
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
  double t370;
  double t173;
  double t210;
  double t146;
  double t2893;
  double t130;
  double t388;
  double t419;
  double t427;
  double t574;
  double t2888;
  double t4159;
  double t4319;
  double t4331;
  double t154;
  double t310;
  double t321;
  double t357;
  double t4440;
  double t4472;
  double t4480;
  double t3263;
  double t3641;
  double t4084;
  double t4657;
  double t2889;
  double t3025;
  double t3043;
  double t3127;
  double t4121;
  double t4529;
  double t4564;
  double t4606;
  double t4786;
  double t4955;
  double t6573;
  double t6596;
  double t6624;
  double t6674;
  double t6728;
  double t6752;
  double t6756;
  double t6757;
  double t6760;
  double t6797;
  double t6798;
  double t6801;
  double t7041;
  double t7045;
  double t7052;
  double t7093;
  double t7116;
  double t7119;
  double t6859;
  double t6880;
  double t6900;
  double t6800;
  double t6836;
  double t6843;
  double t6901;
  double t6936;
  double t7152;
  double t7153;
  double t7154;
  double t7186;
  double t7188;
  double t7237;
  double t7238;
  double t7242;
  double t7244;
  double t7245;
  double t7248;
  double t7253;
  double t7257;
  double t7224;
  double t7225;
  double t7226;
  double t7259;
  double t7309;
  double t7310;
  double t7311;
  double t4397;
  double t7362;
  double t7363;
  double t7364;
  double t7367;
  double t4415;
  double t7373;
  double t7384;
  double t4627;
  double t4658;
  double t7388;
  double t7404;
  double t7416;
  double t7417;
  double t7480;
  double t7481;
  double t7501;
  double t7421;
  double t7426;
  double t7430;
  double t7508;
  double t7534;
  double t7539;
  double t7216;
  double t7219;
  double t7221;
  double t4423;
  double t4714;
  double t4768;
  double t4778;
  double t6938;
  double t7647;
  double t7661;
  double t7662;
  double t7626;
  double t7629;
  double t7634;
  double t7670;
  double t7676;
  double t7677;
  double t7665;
  double t7666;
  double t7667;
  double t7664;
  double t8140;
  double t8150;
  double t7678;
  double t7691;
  double t8160;
  double t8177;
  double t8201;
  double t8202;
  double t7700;
  double t8008;
  double t8040;
  double t8041;
  double t8112;
  double t8120;
  double t8135;
  double t8151;
  double t8152;
  double t8178;
  double t8205;
  double t8215;
  double t8218;
  double t8243;
  double t8320;
  double t8321;
  double t8328;
  double t8345;
  double t8347;
  double t8365;
  double t8375;
  double t8377;
  double t8378;
  double t8381;
  double t8387;
  double t8389;
  double t8397;
  double t8441;
  double t8442;
  double t8443;
  double t8464;
  double t8470;
  double t8489;
  double t8490;
  double t8494;
  double t8673;
  double t8737;
  double t9048;
  double t9063;
  double t9074;
  double t9281;
  double t9290;
  double t9296;
  double t9317;
  double t9327;
  double t9463;
  double t9508;
  double t9546;
  t370 = Cos(var1[4]);
  t173 = Sin(var1[2]);
  t210 = Sin(var1[3]);
  t146 = Cos(var1[3]);
  t2893 = Sin(var1[4]);
  t130 = Cos(var1[2]);
  t388 = -1.*t370;
  t419 = 1. + t388;
  t427 = 0.4*t419;
  t574 = 0.64*t370;
  t2888 = t427 + t574;
  t4159 = t146*t370;
  t4319 = -1.*t210*t2893;
  t4331 = t4159 + t4319;
  t154 = -1.*t130*t146;
  t310 = t173*t210;
  t321 = t154 + t310;
  t357 = 0.748*t321;
  t4440 = t2888*t2893;
  t4472 = -0.24*t370*t2893;
  t4480 = t4440 + t4472;
  t3263 = -1.*t370*t210;
  t3641 = -1.*t146*t2893;
  t4084 = t3263 + t3641;
  t4657 = -1.*t173*t4331;
  t2889 = t2888*t370;
  t3025 = Power(t2893,2);
  t3043 = 0.24*t3025;
  t3127 = t2889 + t3043;
  t4121 = -1.*t173*t4084;
  t4529 = t370*t210;
  t4564 = t146*t2893;
  t4606 = t4529 + t4564;
  t4786 = t130*t4084;
  t4955 = t4786 + t4657;
  t6573 = 3.2*t4480*t4955;
  t6596 = -1.*t146*t370;
  t6624 = t210*t2893;
  t6674 = t6596 + t6624;
  t6728 = t130*t6674;
  t6752 = t4121 + t6728;
  t6756 = 3.2*t3127*t6752;
  t6757 = t357 + t6573 + t6756;
  t6760 = Power(t370,2);
  t6797 = -0.24*t6760;
  t6798 = t2889 + t6797;
  t6801 = t130*t4331;
  t7041 = t173*t4606;
  t7045 = t7041 + t6728;
  t7052 = 3.2*t3127*t7045;
  t7093 = t173*t6674;
  t7116 = t4786 + t7093;
  t7119 = 3.2*t4480*t7116;
  t6859 = -1.*t2888*t2893;
  t6880 = 0.24*t370*t2893;
  t6900 = t6859 + t6880;
  t6800 = -1.*t173*t4606;
  t6836 = t6800 + t6801;
  t6843 = 3.2*t6798*t6836;
  t6901 = 3.2*t6900*t4955;
  t6936 = t6843 + t6573 + t6901 + t6756;
  t7152 = t173*t4084;
  t7153 = t7152 + t6801;
  t7154 = 3.2*t6798*t7153;
  t7186 = 3.2*t6900*t7116;
  t7188 = t7154 + t7052 + t7119 + t7186;
  t7237 = -1.*t146*t173;
  t7238 = -1.*t130*t210;
  t7242 = t7237 + t7238;
  t7244 = 0.748*t7242;
  t7245 = 3.2*t4480*t6836;
  t7248 = 3.2*t3127*t4955;
  t7253 = t7244 + t7245 + t7248;
  t7257 = 3.2*t4480*t7153;
  t7224 = t130*t4606;
  t7225 = t173*t4331;
  t7226 = t7224 + t7225;
  t7259 = 3.2*t3127*t7116;
  t7309 = 3.2*t6900*t7153;
  t7310 = 3.2*t6798*t7226;
  t7311 = t7257 + t7309 + t7310 + t7259;
  t4397 = -1.*t130*t4331;
  t7362 = t146*t173;
  t7363 = t130*t210;
  t7364 = t7362 + t7363;
  t7367 = 0.748*t7364;
  t4415 = t4121 + t4397;
  t7373 = -1.*t130*t4084;
  t7384 = 3.2*t4480*t4415;
  t4627 = -1.*t130*t4606;
  t4658 = t4627 + t4657;
  t7388 = -1.*t173*t6674;
  t7404 = t7373 + t7388;
  t7416 = 3.2*t3127*t7404;
  t7417 = t7367 + t7384 + t7416;
  t7480 = 3.2*t4480*t6752;
  t7481 = t7224 + t7388;
  t7501 = 3.2*t3127*t7481;
  t7421 = 3.2*t6900*t4415;
  t7426 = 3.2*t6798*t4658;
  t7430 = t7384 + t7421 + t7426 + t7416;
  t7508 = 3.2*t6798*t4955;
  t7534 = 3.2*t6900*t6752;
  t7539 = t7508 + t7480 + t7534 + t7501;
  t7216 = -1.*t2888*t370;
  t7219 = 0.24*t6760;
  t7221 = t7216 + t7219;
  t4423 = 3.2*t3127*t4415;
  t4714 = 3.2*t4480*t4658;
  t4768 = t357 + t4423 + t4714;
  t4778 = -0.5*var2[2]*t4768;
  t6938 = -0.5*var2[4]*t6936;
  t7647 = t146*t2888;
  t7661 = -0.24*t210*t2893;
  t7662 = t7647 + t7661;
  t7626 = -1.*t2888*t210;
  t7629 = -0.24*t146*t2893;
  t7634 = t7626 + t7629;
  t7670 = t2888*t210;
  t7676 = 0.24*t146*t2893;
  t7677 = t7670 + t7676;
  t7665 = -1.*t146*t2888;
  t7666 = 0.24*t210*t2893;
  t7667 = t7665 + t7666;
  t7664 = -1.*t4606*t7662;
  t8140 = -0.24*t370*t210;
  t8150 = t8140 + t7629;
  t7678 = -1.*t7677*t6674;
  t7691 = t4084*t7677;
  t8160 = 0.24*t146*t370;
  t8177 = t8160 + t7661;
  t8201 = -0.24*t146*t370;
  t8202 = t8201 + t7666;
  t7700 = t7662*t6674;
  t8008 = t7634*t4331;
  t8040 = t7677*t4331;
  t8041 = t4084*t7662;
  t8112 = t4606*t7662;
  t8120 = t8008 + t8040 + t8041 + t8112;
  t8135 = 3.2*t6900*t8120;
  t8151 = -1.*t8150*t4331;
  t8152 = -1.*t4084*t7662;
  t8178 = -1.*t4084*t8177;
  t8205 = -1.*t4084*t8202;
  t8215 = -1.*t7634*t6674;
  t8218 = -1.*t8150*t6674;
  t8243 = t8151 + t8152 + t7664 + t8178 + t8205 + t8215 + t8218 + t7678;
  t8320 = 3.2*t4480*t8243;
  t8321 = -1.*t4084*t7634;
  t8328 = -1.*t4084*t7677;
  t8345 = -1.*t4331*t7662;
  t8347 = -1.*t7662*t6674;
  t8365 = t8321 + t8328 + t8345 + t8347;
  t8375 = 3.2*t6798*t8365;
  t8377 = t4084*t7634;
  t8378 = t4084*t8150;
  t8381 = t8150*t4606;
  t8387 = t4331*t7662;
  t8389 = t4331*t8177;
  t8397 = t4331*t8202;
  t8441 = t8377 + t8378 + t7691 + t8381 + t8387 + t8389 + t8397 + t7700;
  t8442 = 3.2*t3127*t8441;
  t8443 = t8135 + t8320 + t8375 + t8442;
  t8464 = -1.*t7677*t4331;
  t8470 = t8464 + t8152;
  t8489 = t7677*t4606;
  t8490 = t8489 + t8387;
  t8494 = t8150*t4331;
  t8673 = t4606*t8177;
  t8737 = t8494 + t8040 + t8041 + t8673;
  t9048 = -1.*t4084*t8150;
  t9063 = -1.*t4331*t8177;
  t9074 = t9048 + t8328 + t9063 + t8347;
  t9281 = 3.2*t6798*t8470;
  t9290 = 3.2*t6900*t8490;
  t9296 = 3.2*t3127*t8737;
  t9317 = 3.2*t4480*t9074;
  t9327 = t9281 + t9290 + t9296 + t9317;
  t9463 = 6.4*t6798*t4480;
  t9508 = 6.4*t6900*t3127;
  t9546 = t9463 + t9508;
  p_output1[0]=var2[3]*(t4778 + t6938 - 0.5*t6757*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t6757*var2[2] - 0.5*(t357 + t7052 + t7119)*var2[3] - 0.5*t7188*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t6936*var2[2] - 0.5*t7188*var2[3] - 0.5*(t7052 + 6.4*t6900*t7116 + t7119 + 6.4*t6798*t7153 + 3.2*t7153*t7221 + 3.2*t6900*t7226)*var2[4]);
  p_output1[3]=-0.5*t7253*var2[3];
  p_output1[4]=-0.5*t7253*var2[2] - 1.*(t7244 + t7257 + t7259)*var2[3] - 0.5*t7311*var2[4];
  p_output1[5]=-0.5*t7311*var2[3];
  p_output1[6]=var2[3]*(-0.5*(3.2*t4480*(t4397 + t7041) + t7367 + 3.2*t3127*(t7225 + t7373))*var2[2] - 0.5*t7417*var2[3] - 0.5*t7430*var2[4]);
  p_output1[7]=var2[3]*(-0.5*t7417*var2[2] - 0.5*(t7367 + t7480 + t7501)*var2[3] - 0.5*t7539*var2[4]);
  p_output1[8]=var2[3]*(-0.5*t7430*var2[2] - 0.5*t7539*var2[3] - 0.5*(6.4*t4955*t6798 + 6.4*t6752*t6900 + 3.2*t6836*t6900 + 3.2*t4955*t7221 + t7480 + t7501)*var2[4]);
  p_output1[9]=-0.5*t4768*var2[3];
  p_output1[10]=t4778 + t6938 - 1.*t6757*var2[3];
  p_output1[11]=-0.5*t6936*var2[3];
  p_output1[12]=var2[3]*(-0.5*(3.2*t4480*(-1.*t4331*t7634 - 2.*t6674*t7634 - 2.*t4084*t7662 + t7664 - 1.*t4084*t7667 + t7678) + 3.2*t3127*(2.*t4084*t7634 + t4606*t7634 + 2.*t4331*t7662 + t4331*t7667 + t7691 + t7700))*var2[3] - 0.5*t8443*var2[4]);
  p_output1[13]=var2[3]*(-0.5*t8443*var2[3] - 0.5*(3.2*t4480*(t7664 + t7678 - 2.*t6674*t8150 + t8151 - 2.*t4084*t8177 + t8205) + 3.2*t3127*(t7691 + t7700 + 2.*t4084*t8150 + 2.*t4331*t8177 + t8381 + t8397) + 3.2*t6900*t8470 + 3.2*t7221*t8490 + 6.4*t6900*t8737 + 6.4*t6798*t9074)*var2[4]);
  p_output1[14]=-1.*(3.2*t3127*t8120 + 3.2*t4480*t8365)*var2[3] - 0.5*t9327*var2[4];
  p_output1[15]=-0.5*t9327*var2[3];
  p_output1[16]=-0.5*(6.4*Power(t6798,2) + 6.4*t4480*t6900 + 6.4*Power(t6900,2) + 6.4*t3127*t7221)*var2[3]*var2[4];
  p_output1[17]=-0.5*t9546*var2[4];
  p_output1[18]=-0.5*t9546*var2[3];
  p_output1[19]=-0.384*t7221*var2[3]*var2[4];
  p_output1[20]=-0.384*t6900*var2[4];
  p_output1[21]=-0.384*t6900*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec4_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
