/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 02:13:17 GMT-05:00
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
  double t2920;
  double t2982;
  double t2744;
  double t3120;
  double t2498;
  double t2953;
  double t3141;
  double t3160;
  double t3223;
  double t3281;
  double t3726;
  double t3840;
  double t5018;
  double t8300;
  double t8315;
  double t8354;
  double t8518;
  double t8527;
  double t8508;
  double t8524;
  double t8528;
  double t8529;
  double t8534;
  double t8535;
  double t8539;
  double t8549;
  double t8553;
  double t8594;
  double t8596;
  double t8599;
  double t7672;
  double t8216;
  double t8242;
  double t8249;
  double t8368;
  double t8369;
  double t8406;
  double t8487;
  double t8490;
  double t8499;
  double t8581;
  double t8588;
  double t8591;
  double t8593;
  double t8602;
  double t8605;
  double t8607;
  double t8611;
  double t8612;
  double t8614;
  double t3194;
  double t3845;
  double t5362;
  double t5368;
  double t6431;
  double t6459;
  double t6464;
  double t8506;
  double t8507;
  double t8691;
  double t8700;
  double t8702;
  double t8532;
  double t8551;
  double t8565;
  double t8568;
  double t8574;
  double t8576;
  double t8579;
  double t8617;
  double t8669;
  double t8845;
  double t8849;
  double t8850;
  double t9008;
  double t9021;
  double t9029;
  double t9032;
  double t9038;
  double t9039;
  double t9054;
  double t9076;
  double t9093;
  double t9096;
  double t9102;
  double t9104;
  double t9109;
  double t9123;
  double t9124;
  double t9125;
  double t9134;
  double t9140;
  t2920 = Cos(var1[3]);
  t2982 = Sin(var1[2]);
  t2744 = Cos(var1[2]);
  t3120 = Sin(var1[3]);
  t2498 = Cos(var1[4]);
  t2953 = -1.*t2744*t2920;
  t3141 = t2982*t3120;
  t3160 = t2953 + t3141;
  t3223 = -1.*t2920*t2982;
  t3281 = -1.*t2744*t3120;
  t3726 = t3223 + t3281;
  t3840 = Sin(var1[4]);
  t5018 = t2498*t3160;
  t8300 = t2920*t2982;
  t8315 = t2744*t3120;
  t8354 = t8300 + t8315;
  t8518 = Cos(var1[5]);
  t8527 = Sin(var1[5]);
  t8508 = Cos(var1[6]);
  t8524 = -1.*t2744*t8518;
  t8528 = t2982*t8527;
  t8529 = t8524 + t8528;
  t8534 = -1.*t8518*t2982;
  t8535 = -1.*t2744*t8527;
  t8539 = t8534 + t8535;
  t8549 = Sin(var1[6]);
  t8553 = t8508*t8529;
  t8594 = t8518*t2982;
  t8596 = t2744*t8527;
  t8599 = t8594 + t8596;
  t7672 = 0.748*t3160;
  t8216 = -1.*t2498;
  t8242 = 1. + t8216;
  t8249 = 0.4*t8242*t3160;
  t8368 = -0.4*t8354*t3840;
  t8369 = t8354*t3840;
  t8406 = t5018 + t8369;
  t8487 = 0.64*t8406;
  t8490 = t8249 + t8368 + t8487;
  t8499 = 3.2*t8490;
  t8581 = 0.748*t8529;
  t8588 = -1.*t8508;
  t8591 = 1. + t8588;
  t8593 = 0.4*t8591*t8529;
  t8602 = -0.4*t8599*t8549;
  t8605 = t8599*t8549;
  t8607 = t8553 + t8605;
  t8611 = 0.64*t8607;
  t8612 = t8593 + t8602 + t8611;
  t8614 = 3.2*t8612;
  t3194 = -0.4*t2498*t3160;
  t3845 = 0.4*t3726*t3840;
  t5362 = -1.*t3726*t3840;
  t5368 = t5018 + t5362;
  t6431 = 0.64*t5368;
  t6459 = t3194 + t3845 + t6431;
  t6464 = 0.1*var2[4]*t6459;
  t8506 = t7672 + t8499;
  t8507 = 0.03125*var2[3]*t8506;
  t8691 = t2744*t2920;
  t8700 = -1.*t2982*t3120;
  t8702 = t8691 + t8700;
  t8532 = -0.4*t8508*t8529;
  t8551 = 0.4*t8539*t8549;
  t8565 = -1.*t8539*t8549;
  t8568 = t8553 + t8565;
  t8574 = 0.64*t8568;
  t8576 = t8532 + t8551 + t8574;
  t8579 = 0.1*var2[6]*t8576;
  t8617 = t8581 + t8614;
  t8669 = 0.03125*var2[5]*t8617;
  t8845 = t2744*t8518;
  t8849 = -1.*t2982*t8527;
  t8850 = t8845 + t8849;
  t9008 = 0.748*t3726;
  t9021 = 0.4*t8242*t3726;
  t9029 = -0.4*t3160*t3840;
  t9032 = t2498*t3726;
  t9038 = t3160*t3840;
  t9039 = t9032 + t9038;
  t9054 = 0.64*t9039;
  t9076 = t9021 + t9029 + t9054;
  t9093 = 3.2*t9076;
  t9096 = 0.748*t8539;
  t9102 = 0.4*t8591*t8539;
  t9104 = -0.4*t8529*t8549;
  t9109 = t8508*t8539;
  t9123 = t8529*t8549;
  t9124 = t9109 + t9123;
  t9125 = 0.64*t9124;
  t9134 = t9102 + t9104 + t9125;
  t9140 = 3.2*t9134;
  p_output1[0]=t6464 + t8507 + t8579 + t8669 + 0.03125*(-2.88*t2744 + t7672 + t8499 + t8581 + t8614)*var2[2];
  p_output1[1]=t6464 + t8507 + 0.03125*t8506*var2[2];
  p_output1[2]=0.1*t6459*var2[2] + 0.1*t6459*var2[3] + 0.1*(t3845 + 0.4*t2498*t8702 + 0.64*(t5362 - 1.*t2498*t8702))*var2[4];
  p_output1[3]=t8579 + t8669 + 0.03125*t8617*var2[2];
  p_output1[4]=0.1*t8576*var2[2] + 0.1*t8576*var2[5] + 0.1*(t8551 + 0.4*t8508*t8850 + 0.64*(t8565 - 1.*t8508*t8850))*var2[6];
  p_output1[5]=1.;
  p_output1[6]=0.03125*(-2.88*t2982 + t9008 + t9093 + t9096 + t9140);
  p_output1[7]=0.03125*(t9008 + t9093);
  p_output1[8]=0.1*(-0.4*t2498*t3726 + 0.4*t3840*t8702 + 0.64*(-1.*t3840*t8702 + t9032));
  p_output1[9]=0.03125*(t9096 + t9140);
  p_output1[10]=0.1*(-0.4*t8508*t8539 + 0.4*t8549*t8850 + 0.64*(-1.*t8549*t8850 + t9109));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_vel_com.hh"

namespace RightStance
{

void J_vel_com_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
