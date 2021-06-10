/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:37:33 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t1205;
  double t1214;
  double t1198;
  double t1215;
  double t1161;
  double t1211;
  double t1222;
  double t1226;
  double t1238;
  double t1239;
  double t1240;
  double t1245;
  double t1162;
  double t1186;
  double t1231;
  double t1249;
  double t1253;
  double t1255;
  double t1267;
  double t1269;
  double t1280;
  double t1287;
  double t1296;
  double t1298;
  t1205 = Cos(var1[5]);
  t1214 = Sin(var1[2]);
  t1198 = Cos(var1[2]);
  t1215 = Sin(var1[5]);
  t1161 = Cos(var1[6]);
  t1211 = t1198*t1205;
  t1222 = -1.*t1214*t1215;
  t1226 = t1211 + t1222;
  t1238 = -1.*t1205*t1214;
  t1239 = -1.*t1198*t1215;
  t1240 = t1238 + t1239;
  t1245 = Sin(var1[6]);
  t1162 = -1.*t1161;
  t1186 = 1. + t1162;
  t1231 = 0.4*t1186*t1226;
  t1249 = -0.4*t1240*t1245;
  t1253 = t1161*t1226;
  t1255 = t1240*t1245;
  t1267 = t1253 + t1255;
  t1269 = 0.8*t1267;
  t1280 = t1231 + t1249 + t1269;
  t1287 = t1205*t1214;
  t1296 = t1198*t1215;
  t1298 = t1287 + t1296;
  p_output1[0]=1.;
  p_output1[1]=t1280;
  p_output1[2]=t1280;
  p_output1[3]=-0.4*t1161*t1226 + 0.4*t1245*t1298 + 0.8*(t1253 - 1.*t1245*t1298);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_pos_swing_x.hh"

namespace RightStance
{

void J_pos_swing_x_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
