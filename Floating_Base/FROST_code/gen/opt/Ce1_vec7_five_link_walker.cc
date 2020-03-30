/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:28 GMT-04:00
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
  double t1428;
  double t24;
  double t49;
  double t1465;
  double t23;
  double t1406;
  double t1466;
  double t1468;
  double t1478;
  double t1489;
  double t4871;
  double t5467;
  double t5999;
  double t6015;
  double t6021;
  double t1497;
  double t1502;
  double t1507;
  double t6090;
  double t6094;
  double t6095;
  double t6112;
  double t6113;
  double t6114;
  double t6115;
  double t6119;
  double t6138;
  double t6142;
  double t6154;
  double t6131;
  double t6134;
  double t6135;
  double t6136;
  double t6137;
  double t6158;
  double t6159;
  double t6160;
  double t6162;
  t1428 = Cos(var1[5]);
  t24 = Cos(var1[6]);
  t49 = Sin(var1[5]);
  t1465 = Sin(var1[6]);
  t23 = Cos(var1[2]);
  t1406 = -1.*t24*t49;
  t1466 = -1.*t1428*t1465;
  t1468 = t1406 + t1466;
  t1478 = t23*t1468;
  t1489 = Sin(var1[2]);
  t4871 = -1.*t1428*t24;
  t5467 = t49*t1465;
  t5999 = t4871 + t5467;
  t6015 = t1489*t5999;
  t6021 = t1478 + t6015;
  t1497 = t1428*t24;
  t1502 = -1.*t49*t1465;
  t1507 = t1497 + t1502;
  t6090 = -1.*t1489*t1468;
  t6094 = t23*t5999;
  t6095 = t6090 + t6094;
  t6112 = -1.*t24;
  t6113 = 1. + t6112;
  t6114 = 0.4*t6113;
  t6115 = 0.64*t24;
  t6119 = t6114 + t6115;
  t6138 = t1428*t6119;
  t6142 = -0.24*t49*t1465;
  t6154 = t6138 + t6142;
  t6131 = -0.24*t1428*t1465;
  t6134 = t6119*t49;
  t6135 = 0.24*t1428*t1465;
  t6136 = t6134 + t6135;
  t6137 = t6136*t1507;
  t6158 = t1468*t6154;
  t6159 = t24*t49;
  t6160 = t1428*t1465;
  t6162 = t6159 + t6160;
  p_output1[0]=var2[6]*(-0.384*(t1478 - 1.*t1489*t1507)*var2[2] - 0.384*t6021*var2[5] - 0.384*t6021*var2[6]);
  p_output1[1]=var2[6]*(-0.384*(-1.*t1507*t23 + t6090)*var2[2] - 0.384*t6095*var2[5] - 0.384*t6095*var2[6]);
  p_output1[2]=var2[6]*(-0.384*(t1507*(-1.*t49*t6119 + t6131) + t6137 + t6158 + t6154*t6162)*var2[5] - 0.384*(t1507*(-0.24*t24*t49 + t6131) + t6137 + t6158 + (0.24*t1428*t24 + t6142)*t6162)*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.384*(0.24*t1465*t24 - 1.*t1465*t6119)*Power(var2[6],2);
  p_output1[6]=0;
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

#include "Ce1_vec7_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
