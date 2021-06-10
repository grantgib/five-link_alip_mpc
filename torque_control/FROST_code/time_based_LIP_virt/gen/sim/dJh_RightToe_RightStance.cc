/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:00:51 GMT-05:00
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
  double t2331;
  double t2319;
  double t2320;
  double t2332;
  double t2305;
  double t2321;
  double t2333;
  double t2809;
  double t2837;
  double t2866;
  double t2877;
  double t2899;
  double t2986;
  double t3109;
  double t3203;
  double t3258;
  double t3058;
  double t3064;
  double t3071;
  double t3276;
  double t3302;
  double t3341;
  double t3349;
  double t3403;
  double t3720;
  double t4616;
  double t4722;
  double t4884;
  double t4393;
  double t5005;
  double t5025;
  double t5027;
  double t5185;
  double t5335;
  double t2811;
  double t2913;
  double t2987;
  double t3015;
  double t3023;
  double t3043;
  double t3046;
  double t3563;
  double t3660;
  double t3669;
  double t3711;
  double t3716;
  double t3839;
  double t3857;
  double t3994;
  double t4120;
  double t4148;
  double t5425;
  double t5560;
  double t5584;
  t2331 = Cos(var1[2]);
  t2319 = Cos(var1[3]);
  t2320 = Sin(var1[2]);
  t2332 = Sin(var1[3]);
  t2305 = Cos(var1[4]);
  t2321 = -1.*t2319*t2320;
  t2333 = -1.*t2331*t2332;
  t2809 = t2321 + t2333;
  t2837 = t2331*t2319;
  t2866 = -1.*t2320*t2332;
  t2877 = t2837 + t2866;
  t2899 = Sin(var1[4]);
  t2986 = t2305*t2809;
  t3109 = -1.*t2331*t2319;
  t3203 = t2320*t2332;
  t3258 = t3109 + t3203;
  t3058 = -1.*t2305;
  t3064 = 1. + t3058;
  t3071 = 0.4*t3064*t2809;
  t3276 = -0.4*t3258*t2899;
  t3302 = t3258*t2899;
  t3341 = t2986 + t3302;
  t3349 = 0.8*t3341;
  t3403 = t3071 + t3276 + t3349;
  t3720 = t2305*t3258;
  t4616 = t2319*t2320;
  t4722 = t2331*t2332;
  t4884 = t4616 + t4722;
  t4393 = 0.4*t3064*t3258;
  t5005 = -0.4*t4884*t2899;
  t5025 = t4884*t2899;
  t5027 = t3720 + t5025;
  t5185 = 0.8*t5027;
  t5335 = t4393 + t5005 + t5185;
  t2811 = -0.4*t2305*t2809;
  t2913 = 0.4*t2877*t2899;
  t2987 = -1.*t2877*t2899;
  t3015 = t2986 + t2987;
  t3023 = 0.8*t3015;
  t3043 = t2811 + t2913 + t3023;
  t3046 = var2[4]*t3043;
  t3563 = var2[2]*t3403;
  t3660 = var2[3]*t3403;
  t3669 = t3046 + t3563 + t3660;
  t3711 = -0.4*t2305*t3258;
  t3716 = 0.4*t2809*t2899;
  t3839 = -1.*t2809*t2899;
  t3857 = t3720 + t3839;
  t3994 = 0.8*t3857;
  t4120 = t3711 + t3716 + t3994;
  t4148 = var2[4]*t4120;
  t5425 = var2[2]*t5335;
  t5560 = var2[3]*t5335;
  t5584 = t4148 + t5425 + t5560;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t3669;
  p_output1[7]=0;
  p_output1[8]=t5584;
  p_output1[9]=t3669;
  p_output1[10]=0;
  p_output1[11]=t5584;
  p_output1[12]=t3043*var2[2] + t3043*var2[3] + (t2913 + 0.4*t2305*t4884 + 0.8*(t2987 - 1.*t2305*t4884))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t4120*var2[2] + t4120*var2[3] + (0.4*t2305*t2877 + t3716 + 0.8*(-1.*t2305*t2877 + t3839))*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_RightToe_RightStance.hh"

namespace SymFunction
{

void dJh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
