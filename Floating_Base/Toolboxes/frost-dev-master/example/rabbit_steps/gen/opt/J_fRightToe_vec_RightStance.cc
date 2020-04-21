/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:52:55 GMT-04:00
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
  double t414;
  double t634;
  double t380;
  double t715;
  double t49;
  double t632;
  double t744;
  double t986;
  double t1107;
  double t1306;
  double t1308;
  double t1518;
  double t199;
  double t248;
  double t2581;
  double t2603;
  double t2894;
  double t1022;
  double t1521;
  double t1578;
  double t1715;
  double t1737;
  double t1740;
  double t1787;
  double t2501;
  double t2960;
  double t2988;
  double t3039;
  double t3062;
  double t3094;
  double t3097;
  double t3123;
  double t3252;
  double t3259;
  double t3678;
  double t3680;
  double t3711;
  double t3272;
  double t3283;
  double t3297;
  double t3307;
  double t3414;
  double t3430;
  double t3469;
  double t3510;
  double t3712;
  double t3756;
  double t3775;
  double t3800;
  double t3842;
  double t3864;
  double t3882;
  double t3948;
  double t3955;
  double t4100;
  double t4156;
  double t4185;
  double t4235;
  double t4296;
  t414 = Cos(var1[3]);
  t634 = Sin(var1[2]);
  t380 = Cos(var1[2]);
  t715 = Sin(var1[3]);
  t49 = Cos(var1[4]);
  t632 = -1.*t380*t414;
  t744 = t634*t715;
  t986 = t632 + t744;
  t1107 = t414*t634;
  t1306 = t380*t715;
  t1308 = t1107 + t1306;
  t1518 = Sin(var1[4]);
  t199 = -1.*t49;
  t248 = 1. + t199;
  t2581 = -1.*t414*t634;
  t2603 = -1.*t380*t715;
  t2894 = t2581 + t2603;
  t1022 = 0.4*t248*t986;
  t1521 = -0.4*t1308*t1518;
  t1578 = t49*t986;
  t1715 = t1308*t1518;
  t1737 = t1578 + t1715;
  t1740 = 0.8*t1737;
  t1787 = t1022 + t1521 + t1740;
  t2501 = var2[2]*t1787;
  t2960 = 0.4*t248*t2894;
  t2988 = -0.4*t986*t1518;
  t3039 = t49*t2894;
  t3062 = t986*t1518;
  t3094 = t3039 + t3062;
  t3097 = 0.8*t3094;
  t3123 = t2960 + t2988 + t3097;
  t3252 = var2[0]*t3123;
  t3259 = t2501 + t3252;
  t3678 = t380*t414;
  t3680 = -1.*t634*t715;
  t3711 = t3678 + t3680;
  t3272 = -0.4*t49*t986;
  t3283 = 0.4*t2894*t1518;
  t3297 = -1.*t2894*t1518;
  t3307 = t1578 + t3297;
  t3414 = 0.8*t3307;
  t3430 = t3272 + t3283 + t3414;
  t3469 = var2[2]*t3430;
  t3510 = -0.4*t49*t2894;
  t3712 = 0.4*t3711*t1518;
  t3756 = -1.*t3711*t1518;
  t3775 = t3039 + t3756;
  t3800 = 0.8*t3775;
  t3842 = t3510 + t3712 + t3800;
  t3864 = var2[0]*t3842;
  t3882 = t3469 + t3864;
  t3948 = 0.4*t248*t3711;
  t3955 = -0.4*t2894*t1518;
  t4100 = t49*t3711;
  t4156 = t2894*t1518;
  t4185 = t4100 + t4156;
  t4235 = 0.8*t4185;
  t4296 = t3948 + t3955 + t4235;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t3259;
  p_output1[3]=t3259;
  p_output1[4]=t3882;
  p_output1[5]=t4296;
  p_output1[6]=t3123;
  p_output1[7]=t3259;
  p_output1[8]=t3259;
  p_output1[9]=t3882;
  p_output1[10]=t4296;
  p_output1[11]=t3123;
  p_output1[12]=t3882;
  p_output1[13]=t3882;
  p_output1[14]=(t3712 + 0.4*t1308*t49 + 0.8*(t3756 - 1.*t1308*t49))*var2[0] + (t3283 + 0.4*t3711*t49 + 0.8*(t3297 - 1.*t3711*t49))*var2[2];
  p_output1[15]=0.4*t1308*t1518 + 0.8*(-1.*t1308*t1518 + t4100) - 0.4*t3711*t49;
  p_output1[16]=t3842;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightToe_vec_RightStance.hh"

namespace RightStance
{

void J_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
