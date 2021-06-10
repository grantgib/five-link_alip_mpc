/*
 * Automatically Generated from Mathematica.
 * Thu 4 Feb 2021 10:19:38 GMT-05:00
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
  double t3226;
  double t3236;
  double t3225;
  double t3237;
  double t3175;
  double t3227;
  double t3241;
  double t3242;
  double t3254;
  double t3258;
  double t3259;
  double t3260;
  double t3213;
  double t3224;
  double t3245;
  double t3261;
  double t3265;
  double t3266;
  double t3270;
  double t3271;
  double t3274;
  double t3276;
  double t3282;
  double t3283;
  double t3296;
  double t3299;
  double t3300;
  double t3295;
  double t3301;
  double t3302;
  double t3306;
  double t3307;
  double t3308;
  double t3309;
  t3226 = Cos(var1[3]);
  t3236 = Sin(var1[2]);
  t3225 = Cos(var1[2]);
  t3237 = Sin(var1[3]);
  t3175 = Cos(var1[4]);
  t3227 = t3225*t3226;
  t3241 = -1.*t3236*t3237;
  t3242 = t3227 + t3241;
  t3254 = -1.*t3226*t3236;
  t3258 = -1.*t3225*t3237;
  t3259 = t3254 + t3258;
  t3260 = Sin(var1[4]);
  t3213 = -1.*t3175;
  t3224 = 1. + t3213;
  t3245 = 0.4*t3224*t3242;
  t3261 = -0.4*t3259*t3260;
  t3265 = t3175*t3242;
  t3266 = t3259*t3260;
  t3270 = t3265 + t3266;
  t3271 = 0.8*t3270;
  t3274 = t3245 + t3261 + t3271;
  t3276 = t3226*t3236;
  t3282 = t3225*t3237;
  t3283 = t3276 + t3282;
  t3296 = -1.*t3225*t3226;
  t3299 = t3236*t3237;
  t3300 = t3296 + t3299;
  t3295 = 0.4*t3224*t3259;
  t3301 = -0.4*t3300*t3260;
  t3302 = t3175*t3259;
  t3306 = t3300*t3260;
  t3307 = t3302 + t3306;
  t3308 = 0.8*t3307;
  t3309 = t3295 + t3301 + t3308;
  p_output1[0]=1.;
  p_output1[1]=t3274;
  p_output1[2]=t3274;
  p_output1[3]=-0.4*t3175*t3242 + 0.4*t3260*t3283 + 0.8*(t3265 - 1.*t3260*t3283);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t3309;
  p_output1[8]=t3309;
  p_output1[9]=-0.4*t3175*t3259 + 0.4*t3242*t3260 + 0.8*(-1.*t3242*t3260 + t3302);
  p_output1[10]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightToe_RightStance.hh"

namespace RightStance
{

void J_h_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
