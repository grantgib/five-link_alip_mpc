/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:47:31 GMT-04:00
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
  double t3853;
  double t2649;
  double t3814;
  double t4097;
  double t4641;
  double t3816;
  double t4493;
  double t4591;
  double t1759;
  double t4642;
  double t4647;
  double t4661;
  double t11180;
  double t11181;
  double t11182;
  double t11183;
  double t11206;
  double t11269;
  double t11272;
  double t11273;
  double t4640;
  double t8234;
  double t11295;
  double t11297;
  double t11298;
  double t11212;
  double t11215;
  double t11231;
  double t11256;
  double t11268;
  double t11280;
  double t11281;
  double t11286;
  double t11289;
  double t11299;
  double t11300;
  double t11301;
  double t11302;
  double t11303;
  double t11304;
  t3853 = Cos(var1[5]);
  t2649 = Cos(var1[6]);
  t3814 = Sin(var1[5]);
  t4097 = Sin(var1[6]);
  t4641 = Cos(var1[2]);
  t3816 = -1.*t2649*t3814;
  t4493 = -1.*t3853*t4097;
  t4591 = t3816 + t4493;
  t1759 = Sin(var1[2]);
  t4642 = t3853*t2649;
  t4647 = -1.*t3814*t4097;
  t4661 = t4642 + t4647;
  t11180 = -1.*t2649;
  t11181 = 1. + t11180;
  t11182 = 0.4*t11181;
  t11183 = 0.64*t2649;
  t11206 = t11182 + t11183;
  t11269 = t3853*t11206;
  t11272 = -0.24*t3814*t4097;
  t11273 = t11269 + t11272;
  t4640 = -1.*t1759*t4591;
  t8234 = t4641*t4591;
  t11295 = -1.*t3853*t2649;
  t11297 = t3814*t4097;
  t11298 = t11295 + t11297;
  t11212 = -0.24*t3853*t4097;
  t11215 = t11206*t3814;
  t11231 = 0.24*t3853*t4097;
  t11256 = t11215 + t11231;
  t11268 = t11256*t4661;
  t11280 = t4591*t11273;
  t11281 = t2649*t3814;
  t11286 = t3853*t4097;
  t11289 = t11281 + t11286;
  t11299 = t4641*t11298;
  t11300 = t4640 + t11299;
  t11301 = 0.384*var2[1]*t11300;
  t11302 = t1759*t11298;
  t11303 = t8234 + t11302;
  t11304 = 0.384*var2[0]*t11303;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(-1.*t1759*t4661 + t8234)*var2[0] + 0.384*(t4640 - 1.*t4641*t4661)*var2[1])*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(t11301 + t11304 + 0.384*(t11268 + t11280 + t11273*t11289 + (t11212 - 1.*t11206*t3814)*t4661)*var2[2])*var2[6];
  p_output1[6]=(t11301 + t11304 + 0.384*(t11268 + t11280 + t11289*(t11272 + 0.24*t2649*t3853) + (t11212 - 0.24*t2649*t3814)*t4661)*var2[2] + 0.384*(-1.*t11206*t4097 + 0.24*t2649*t4097)*var2[5])*var2[6];
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

#include "Ce3_vec7_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
