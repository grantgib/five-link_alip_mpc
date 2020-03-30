/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:51:12 GMT-04:00
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
  double t18208;
  double t18210;
  double t18181;
  double t18211;
  double t6196;
  double t18209;
  double t18212;
  double t18227;
  double t18232;
  double t18233;
  double t18234;
  double t18235;
  double t14604;
  double t16142;
  double t18229;
  double t18237;
  double t18238;
  double t18239;
  double t18247;
  double t18248;
  double t18249;
  double t18254;
  double t18255;
  double t18259;
  double t18270;
  double t18299;
  double t18300;
  double t18301;
  double t18282;
  double t18302;
  double t18304;
  double t18305;
  double t18306;
  double t18308;
  t18208 = Cos(var1[3]);
  t18210 = Sin(var1[2]);
  t18181 = Cos(var1[2]);
  t18211 = Sin(var1[3]);
  t6196 = Cos(var1[4]);
  t18209 = t18181*t18208;
  t18212 = -1.*t18210*t18211;
  t18227 = t18209 + t18212;
  t18232 = -1.*t18208*t18210;
  t18233 = -1.*t18181*t18211;
  t18234 = t18232 + t18233;
  t18235 = Sin(var1[4]);
  t14604 = -1.*t6196;
  t16142 = 1. + t14604;
  t18229 = 0.4*t16142*t18227;
  t18237 = -0.4*t18234*t18235;
  t18238 = t6196*t18227;
  t18239 = t18234*t18235;
  t18247 = t18238 + t18239;
  t18248 = 0.8*t18247;
  t18249 = t18229 + t18237 + t18248;
  t18254 = t18208*t18210;
  t18255 = t18181*t18211;
  t18259 = t18254 + t18255;
  t18270 = t6196*t18234;
  t18299 = -1.*t18181*t18208;
  t18300 = t18210*t18211;
  t18301 = t18299 + t18300;
  t18282 = 0.4*t16142*t18234;
  t18302 = -0.4*t18301*t18235;
  t18304 = t18301*t18235;
  t18305 = t18270 + t18304;
  t18306 = 0.8*t18305;
  t18308 = t18282 + t18302 + t18306;
  p_output1[0]=var2[0] + t18249*var2[2] + t18249*var2[3] + (0.4*t18235*t18259 + 0.8*(t18238 - 1.*t18235*t18259) - 0.4*t18227*t6196)*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t18308*var2[2] + t18308*var2[3] + (0.4*t18227*t18235 + 0.8*(-1.*t18227*t18235 + t18270) - 0.4*t18234*t6196)*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightToe_RightStance.hh"

namespace RightStance
{

void dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
