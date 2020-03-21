/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:07 GMT-04:00
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
  double t8042;
  double t7957;
  double t8037;
  double t8107;
  double t8117;
  double t8041;
  double t8112;
  double t8113;
  double t4664;
  double t8121;
  double t8126;
  double t8129;
  double t8239;
  double t8245;
  double t8246;
  double t8253;
  double t8288;
  double t8494;
  double t8886;
  double t9047;
  double t8115;
  double t8136;
  double t11364;
  double t11390;
  double t11395;
  double t8312;
  double t8317;
  double t8318;
  double t8378;
  double t8390;
  double t9048;
  double t9560;
  double t11218;
  double t11237;
  double t11425;
  double t11429;
  double t11436;
  double t11446;
  double t11447;
  double t11449;
  t8042 = Cos(var1[3]);
  t7957 = Cos(var1[4]);
  t8037 = Sin(var1[3]);
  t8107 = Sin(var1[4]);
  t8117 = Cos(var1[2]);
  t8041 = -1.*t7957*t8037;
  t8112 = -1.*t8042*t8107;
  t8113 = t8041 + t8112;
  t4664 = Sin(var1[2]);
  t8121 = t8042*t7957;
  t8126 = -1.*t8037*t8107;
  t8129 = t8121 + t8126;
  t8239 = -1.*t7957;
  t8245 = 1. + t8239;
  t8246 = 0.4*t8245;
  t8253 = 0.64*t7957;
  t8288 = t8246 + t8253;
  t8494 = t8042*t8288;
  t8886 = -0.24*t8037*t8107;
  t9047 = t8494 + t8886;
  t8115 = -1.*t4664*t8113;
  t8136 = t8117*t8113;
  t11364 = -1.*t8042*t7957;
  t11390 = t8037*t8107;
  t11395 = t11364 + t11390;
  t8312 = -0.24*t8042*t8107;
  t8317 = t8288*t8037;
  t8318 = 0.24*t8042*t8107;
  t8378 = t8317 + t8318;
  t8390 = t8378*t8129;
  t9048 = t8113*t9047;
  t9560 = t7957*t8037;
  t11218 = t8042*t8107;
  t11237 = t9560 + t11218;
  t11425 = t8117*t11395;
  t11429 = t8115 + t11425;
  t11436 = 0.384*var2[1]*t11429;
  t11446 = t4664*t11395;
  t11447 = t8136 + t11446;
  t11449 = 0.384*var2[0]*t11447;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(-1.*t4664*t8129 + t8136)*var2[0] + 0.384*(t8115 - 1.*t8117*t8129)*var2[1])*var2[4];
  p_output1[3]=(t11436 + t11449 + 0.384*(t8129*(-1.*t8037*t8288 + t8312) + t8390 + t11237*t9047 + t9048)*var2[2])*var2[4];
  p_output1[4]=(t11436 + t11449 + 0.384*(t8129*(-0.24*t7957*t8037 + t8312) + t8390 + t11237*(0.24*t7957*t8042 + t8886) + t9048)*var2[2] + 0.384*(0.24*t7957*t8107 - 1.*t8107*t8288)*var2[3])*var2[4];
  p_output1[5]=0;
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

#include "Ce3_vec5_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
