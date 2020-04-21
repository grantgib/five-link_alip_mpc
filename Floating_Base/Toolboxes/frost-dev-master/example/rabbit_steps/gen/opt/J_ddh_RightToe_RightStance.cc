/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:53:16 GMT-04:00
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
  double t444;
  double t553;
  double t443;
  double t641;
  double t53;
  double t552;
  double t665;
  double t776;
  double t994;
  double t1592;
  double t1677;
  double t1680;
  double t1960;
  double t1994;
  double t2035;
  double t2063;
  double t2226;
  double t2390;
  double t2508;
  double t235;
  double t419;
  double t2714;
  double t2809;
  double t2876;
  double t2711;
  double t2981;
  double t3154;
  double t3251;
  double t3496;
  double t4273;
  double t5420;
  double t5564;
  double t5850;
  double t5940;
  double t6045;
  double t6183;
  double t6246;
  double t6345;
  double t6376;
  double t6614;
  double t6334;
  double t6621;
  double t6624;
  double t6639;
  double t6647;
  double t6649;
  double t6322;
  double t6650;
  double t6653;
  double t6663;
  double t803;
  double t1689;
  double t1725;
  double t1869;
  double t1888;
  double t1941;
  double t2580;
  double t2611;
  double t4326;
  double t4376;
  double t4405;
  double t4682;
  double t5105;
  double t5528;
  double t5607;
  double t5629;
  double t5759;
  double t5771;
  double t6267;
  double t6292;
  double t6320;
  double t6321;
  double t6681;
  double t6727;
  double t6729;
  double t7020;
  double t7027;
  double t7033;
  double t7042;
  double t7064;
  double t7456;
  double t7499;
  double t7537;
  double t7558;
  double t6750;
  double t6766;
  double t6803;
  double t6861;
  double t6863;
  double t7631;
  double t7716;
  double t7730;
  double t7778;
  double t7796;
  double t7802;
  double t7838;
  double t7848;
  double t7913;
  double t7918;
  double t7925;
  double t7948;
  double t7951;
  double t7952;
  double t7953;
  double t7960;
  double t7961;
  double t7966;
  double t7651;
  double t7658;
  double t7677;
  double t7705;
  double t7717;
  double t7736;
  double t7754;
  double t7757;
  double t7764;
  double t7853;
  double t7854;
  double t7905;
  double t7912;
  double t7980;
  double t8002;
  double t8009;
  double t8174;
  double t8178;
  double t8192;
  double t8200;
  t444 = Cos(var1[3]);
  t553 = Sin(var1[2]);
  t443 = Cos(var1[2]);
  t641 = Sin(var1[3]);
  t53 = Cos(var1[4]);
  t552 = t443*t444;
  t665 = -1.*t553*t641;
  t776 = t552 + t665;
  t994 = -1.*t444*t553;
  t1592 = -1.*t443*t641;
  t1677 = t994 + t1592;
  t1680 = Sin(var1[4]);
  t1960 = -0.4*t53*t1677;
  t1994 = 0.4*t776*t1680;
  t2035 = t53*t1677;
  t2063 = -1.*t776*t1680;
  t2226 = t2035 + t2063;
  t2390 = 0.8*t2226;
  t2508 = t1960 + t1994 + t2390;
  t235 = -1.*t53;
  t419 = 1. + t235;
  t2714 = -1.*t443*t444;
  t2809 = t553*t641;
  t2876 = t2714 + t2809;
  t2711 = 0.4*t419*t1677;
  t2981 = -0.4*t2876*t1680;
  t3154 = t2876*t1680;
  t3251 = t2035 + t3154;
  t3496 = 0.8*t3251;
  t4273 = t2711 + t2981 + t3496;
  t5420 = 0.4*t1677*t1680;
  t5564 = -1.*t1677*t1680;
  t5850 = -0.4*t53*t2876;
  t5940 = t53*t2876;
  t6045 = t5940 + t5564;
  t6183 = 0.8*t6045;
  t6246 = t5850 + t5420 + t6183;
  t6345 = t444*t553;
  t6376 = t443*t641;
  t6614 = t6345 + t6376;
  t6334 = 0.4*t419*t2876;
  t6621 = -0.4*t6614*t1680;
  t6624 = t6614*t1680;
  t6639 = t5940 + t6624;
  t6647 = 0.8*t6639;
  t6649 = t6334 + t6621 + t6647;
  t6322 = var2[4]*t6246;
  t6650 = var2[2]*t6649;
  t6653 = var2[3]*t6649;
  t6663 = t6322 + t6650 + t6653;
  t803 = 0.4*t419*t776;
  t1689 = -0.4*t1677*t1680;
  t1725 = t53*t776;
  t1869 = t1677*t1680;
  t1888 = t1725 + t1869;
  t1941 = 0.8*t1888;
  t2580 = var3[4]*t2508;
  t2611 = var2[4]*t2508;
  t4326 = var3[2]*t4273;
  t4376 = var3[3]*t4273;
  t4405 = var2[2]*t4273;
  t4682 = var2[3]*t4273;
  t5105 = 0.4*t53*t776;
  t5528 = -1.*t53*t776;
  t5607 = t5528 + t5564;
  t5629 = 0.8*t5607;
  t5759 = t5105 + t5420 + t5629;
  t5771 = var2[4]*t5759;
  t6267 = var2[2]*t6246;
  t6292 = var2[3]*t6246;
  t6320 = t5771 + t6267 + t6292;
  t6321 = var2[4]*t6320;
  t6681 = var2[2]*t6663;
  t6727 = var2[3]*t6663;
  t6729 = t803 + t1689 + t1941 + t2580 + t2611 + t4326 + t4376 + t4405 + t4682 + t6321 + t6681 + t6727;
  t7020 = 0.4*t53*t6614;
  t7027 = -1.*t53*t6614;
  t7033 = t7027 + t2063;
  t7042 = 0.8*t7033;
  t7064 = t7020 + t1994 + t7042;
  t7456 = 2.*var2[4]*t2508;
  t7499 = 2.*var2[2]*t4273;
  t7537 = 2.*var2[3]*t4273;
  t7558 = t803 + t1689 + t1941 + t7456 + t7499 + t7537;
  t6750 = -0.4*t53*t776;
  t6766 = 0.4*t6614*t1680;
  t6803 = -1.*t6614*t1680;
  t6861 = t1725 + t6803;
  t6863 = 0.8*t6861;
  t7631 = t803 + t1689 + t1941;
  t7716 = 0.4*t2876*t1680;
  t7730 = -1.*t2876*t1680;
  t7778 = -0.4*t53*t6614;
  t7796 = t53*t6614;
  t7802 = t7796 + t7730;
  t7838 = 0.8*t7802;
  t7848 = t7778 + t7716 + t7838;
  t7913 = 0.4*t419*t6614;
  t7918 = -0.4*t776*t1680;
  t7925 = t776*t1680;
  t7948 = t7796 + t7925;
  t7951 = 0.8*t7948;
  t7952 = t7913 + t7918 + t7951;
  t7953 = var2[2]*t7952;
  t7960 = var2[3]*t7952;
  t7961 = var2[4]*t7848;
  t7966 = t7953 + t7960 + t7961;
  t7651 = var3[4]*t6246;
  t7658 = var3[2]*t6649;
  t7677 = var3[3]*t6649;
  t7705 = 0.4*t53*t1677;
  t7717 = -1.*t53*t1677;
  t7736 = t7717 + t7730;
  t7754 = 0.8*t7736;
  t7757 = t7705 + t7716 + t7754;
  t7764 = var2[4]*t7757;
  t7853 = var2[2]*t7848;
  t7854 = var2[3]*t7848;
  t7905 = t7764 + t7853 + t7854;
  t7912 = var2[4]*t7905;
  t7980 = var2[2]*t7966;
  t8002 = var2[3]*t7966;
  t8009 = t2711 + t2981 + t3496 + t7651 + t6322 + t7658 + t7677 + t6650 + t6653 + t7912 + t7980 + t8002;
  t8174 = 2.*var2[4]*t6246;
  t8178 = 2.*var2[2]*t6649;
  t8192 = 2.*var2[3]*t6649;
  t8200 = t2711 + t2981 + t3496 + t8174 + t8178 + t8192;
  p_output1[0]=1.;
  p_output1[1]=t6729;
  p_output1[2]=t6729;
  p_output1[3]=t6750 + t6766 + t6863 + t2508*var2[2] + t6320*var2[2] + t2508*var2[3] + t6320*var2[3] + t7064*var2[4] + var2[4]*(t5759*var2[2] + t5759*var2[3] + (t5105 + t6621 + 0.8*(t5528 + t6624))*var2[4]) + t2508*var3[2] + t2508*var3[3] + t7064*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t7558;
  p_output1[6]=t7558;
  p_output1[7]=t6750 + t6766 + t6863 + 2.*t2508*var2[2] + 2.*t2508*var2[3] + 2.*t7064*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t7631;
  p_output1[10]=t7631;
  p_output1[11]=t6750 + t6766 + t6863;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t8009;
  p_output1[16]=t8009;
  p_output1[17]=t1960 + t1994 + t2390 + t5771 + t6267 + t6292 + t7905*var2[2] + t7905*var2[3] + var2[4]*(t7757*var2[2] + t7757*var2[3] + (t7705 + t7918 + 0.8*(t7717 + t7925))*var2[4]) + t6246*var3[2] + t6246*var3[3] + t5759*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t8200;
  p_output1[20]=t8200;
  p_output1[21]=t1960 + t1994 + t2390 + 2.*t6246*var2[2] + 2.*t6246*var2[3] + 2.*t5759*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t4273;
  p_output1[24]=t4273;
  p_output1[25]=t2508;
  p_output1[26]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightToe_RightStance.hh"

namespace RightStance
{

void J_ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
