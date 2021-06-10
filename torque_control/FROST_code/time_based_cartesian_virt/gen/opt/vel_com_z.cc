/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:16:28 GMT-05:00
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
  double t295;
  double t232;
  double t237;
  double t358;
  double t225;
  double t244;
  double t418;
  double t507;
  double t617;
  double t657;
  double t1148;
  double t3994;
  double t4104;
  double t4278;
  double t4279;
  double t4280;
  double t4657;
  double t5814;
  double t4629;
  double t4851;
  double t5819;
  double t5827;
  double t5846;
  double t5866;
  double t5873;
  double t5881;
  double t5952;
  double t6006;
  double t6011;
  double t6080;
  double t4216;
  double t4221;
  double t4243;
  double t4277;
  double t4282;
  double t4336;
  double t4341;
  double t4342;
  double t4350;
  double t4565;
  double t5974;
  double t5975;
  double t5978;
  double t5991;
  double t6081;
  double t6086;
  double t6087;
  double t6096;
  double t6101;
  double t6103;
  t295 = Cos(var1[2]);
  t232 = Cos(var1[3]);
  t237 = Sin(var1[2]);
  t358 = Sin(var1[3]);
  t225 = Cos(var1[4]);
  t244 = -1.*t232*t237;
  t418 = -1.*t295*t358;
  t507 = t244 + t418;
  t617 = t295*t232;
  t657 = -1.*t237*t358;
  t1148 = t617 + t657;
  t3994 = Sin(var1[4]);
  t4104 = t225*t507;
  t4278 = -1.*t295*t232;
  t4279 = t237*t358;
  t4280 = t4278 + t4279;
  t4657 = Cos(var1[5]);
  t5814 = Sin(var1[5]);
  t4629 = Cos(var1[6]);
  t4851 = -1.*t4657*t237;
  t5819 = -1.*t295*t5814;
  t5827 = t4851 + t5819;
  t5846 = t295*t4657;
  t5866 = -1.*t237*t5814;
  t5873 = t5846 + t5866;
  t5881 = Sin(var1[6]);
  t5952 = t4629*t5827;
  t6006 = -1.*t295*t4657;
  t6011 = t237*t5814;
  t6080 = t6006 + t6011;
  t4216 = 0.748*t507;
  t4221 = -1.*t225;
  t4243 = 1. + t4221;
  t4277 = 0.4*t4243*t507;
  t4282 = -0.4*t4280*t3994;
  t4336 = t4280*t3994;
  t4341 = t4104 + t4336;
  t4342 = 0.64*t4341;
  t4350 = t4277 + t4282 + t4342;
  t4565 = 3.2*t4350;
  t5974 = 0.748*t5827;
  t5975 = -1.*t4629;
  t5978 = 1. + t5975;
  t5991 = 0.4*t5978*t5827;
  t6081 = -0.4*t6080*t5881;
  t6086 = t6080*t5881;
  t6087 = t5952 + t6086;
  t6096 = 0.64*t6087;
  t6101 = t5991 + t6081 + t6096;
  t6103 = 3.2*t6101;
  p_output1[0]=var2[1] + 0.03125*(-2.88*t237 + t4216 + t4565 + t5974 + t6103)*var2[2] + 0.03125*(t4216 + t4565)*var2[3] + 0.1*(0.4*t1148*t3994 + 0.64*(-1.*t1148*t3994 + t4104) - 0.4*t225*t507)*var2[4] + 0.03125*(t5974 + t6103)*var2[5] + 0.1*(-0.4*t4629*t5827 + 0.4*t5873*t5881 + 0.64*(-1.*t5873*t5881 + t5952))*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "vel_com_z.hh"

namespace RightStance
{

void vel_com_z_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
