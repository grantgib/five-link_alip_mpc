/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:46:46 GMT-04:00
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
  double t10143;
  double t4719;
  double t4844;
  double t10171;
  double t4465;
  double t8167;
  double t10172;
  double t10173;
  double t10183;
  double t10184;
  double t10214;
  double t10215;
  double t10216;
  double t10222;
  double t10223;
  double t10196;
  double t10209;
  double t10210;
  double t10228;
  double t10236;
  double t10237;
  double t10245;
  double t10254;
  double t10255;
  double t10256;
  double t10257;
  double t10268;
  double t10269;
  double t10270;
  double t10261;
  double t10264;
  double t10265;
  double t10266;
  double t10267;
  double t10271;
  double t10272;
  double t10275;
  double t10278;
  t10143 = Cos(var1[5]);
  t4719 = Cos(var1[6]);
  t4844 = Sin(var1[5]);
  t10171 = Sin(var1[6]);
  t4465 = Cos(var1[2]);
  t8167 = -1.*t4719*t4844;
  t10172 = -1.*t10143*t10171;
  t10173 = t8167 + t10172;
  t10183 = t4465*t10173;
  t10184 = Sin(var1[2]);
  t10214 = -1.*t10143*t4719;
  t10215 = t4844*t10171;
  t10216 = t10214 + t10215;
  t10222 = t10184*t10216;
  t10223 = t10183 + t10222;
  t10196 = t10143*t4719;
  t10209 = -1.*t4844*t10171;
  t10210 = t10196 + t10209;
  t10228 = -1.*t10184*t10173;
  t10236 = t4465*t10216;
  t10237 = t10228 + t10236;
  t10245 = -1.*t4719;
  t10254 = 1. + t10245;
  t10255 = 0.4*t10254;
  t10256 = 0.64*t4719;
  t10257 = t10255 + t10256;
  t10268 = t10143*t10257;
  t10269 = -0.24*t4844*t10171;
  t10270 = t10268 + t10269;
  t10261 = -0.24*t10143*t10171;
  t10264 = t10257*t4844;
  t10265 = 0.24*t10143*t10171;
  t10266 = t10264 + t10265;
  t10267 = t10266*t10210;
  t10271 = t10173*t10270;
  t10272 = t4719*t4844;
  t10275 = t10143*t10171;
  t10278 = t10272 + t10275;
  p_output1[0]=var2[6]*(-0.384*(t10183 - 1.*t10184*t10210)*var2[2] - 0.384*t10223*var2[5] - 0.384*t10223*var2[6]);
  p_output1[1]=var2[6]*(-0.384*(t10228 - 1.*t10210*t4465)*var2[2] - 0.384*t10237*var2[5] - 0.384*t10237*var2[6]);
  p_output1[2]=var2[6]*(-0.384*(t10267 + t10271 + t10270*t10278 + t10210*(t10261 - 1.*t10257*t4844))*var2[5] - 0.384*(t10267 + t10271 + t10278*(t10269 + 0.24*t10143*t4719) + t10210*(t10261 - 0.24*t4719*t4844))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.384*(-1.*t10171*t10257 + 0.24*t10171*t4719)*Power(var2[6],2);
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
