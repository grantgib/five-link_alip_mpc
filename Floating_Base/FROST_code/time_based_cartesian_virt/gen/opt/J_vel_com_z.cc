/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:16:29 GMT-05:00
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
  double t4151;
  double t4167;
  double t4097;
  double t4171;
  double t588;
  double t4166;
  double t4212;
  double t4566;
  double t5609;
  double t5833;
  double t5885;
  double t5960;
  double t5965;
  double t6310;
  double t6333;
  double t6338;
  double t6409;
  double t6418;
  double t6402;
  double t6411;
  double t6421;
  double t6432;
  double t6482;
  double t6484;
  double t6489;
  double t6510;
  double t6557;
  double t6729;
  double t6743;
  double t6760;
  double t6289;
  double t6290;
  double t6293;
  double t6304;
  double t6349;
  double t6355;
  double t6357;
  double t6358;
  double t6360;
  double t6365;
  double t6672;
  double t6678;
  double t6680;
  double t6696;
  double t6761;
  double t6763;
  double t6765;
  double t6771;
  double t6783;
  double t6819;
  double t4596;
  double t5961;
  double t5967;
  double t5970;
  double t6118;
  double t6278;
  double t6281;
  double t6376;
  double t6399;
  double t6944;
  double t6946;
  double t6961;
  double t6465;
  double t6517;
  double t6566;
  double t6612;
  double t6635;
  double t6645;
  double t6667;
  double t6823;
  double t6830;
  double t7134;
  double t7135;
  double t7159;
  double t7199;
  double t7201;
  double t7202;
  double t7208;
  double t7211;
  double t7212;
  double t7213;
  double t7214;
  double t7215;
  double t7216;
  double t7217;
  double t7220;
  double t7221;
  double t7224;
  double t7225;
  double t7227;
  double t7231;
  double t7233;
  t4151 = Cos(var1[3]);
  t4167 = Sin(var1[2]);
  t4097 = Cos(var1[2]);
  t4171 = Sin(var1[3]);
  t588 = Cos(var1[4]);
  t4166 = -1.*t4097*t4151;
  t4212 = t4167*t4171;
  t4566 = t4166 + t4212;
  t5609 = -1.*t4151*t4167;
  t5833 = -1.*t4097*t4171;
  t5885 = t5609 + t5833;
  t5960 = Sin(var1[4]);
  t5965 = t588*t4566;
  t6310 = t4151*t4167;
  t6333 = t4097*t4171;
  t6338 = t6310 + t6333;
  t6409 = Cos(var1[5]);
  t6418 = Sin(var1[5]);
  t6402 = Cos(var1[6]);
  t6411 = -1.*t4097*t6409;
  t6421 = t4167*t6418;
  t6432 = t6411 + t6421;
  t6482 = -1.*t6409*t4167;
  t6484 = -1.*t4097*t6418;
  t6489 = t6482 + t6484;
  t6510 = Sin(var1[6]);
  t6557 = t6402*t6432;
  t6729 = t6409*t4167;
  t6743 = t4097*t6418;
  t6760 = t6729 + t6743;
  t6289 = 0.748*t4566;
  t6290 = -1.*t588;
  t6293 = 1. + t6290;
  t6304 = 0.4*t6293*t4566;
  t6349 = -0.4*t6338*t5960;
  t6355 = t6338*t5960;
  t6357 = t5965 + t6355;
  t6358 = 0.64*t6357;
  t6360 = t6304 + t6349 + t6358;
  t6365 = 3.2*t6360;
  t6672 = 0.748*t6432;
  t6678 = -1.*t6402;
  t6680 = 1. + t6678;
  t6696 = 0.4*t6680*t6432;
  t6761 = -0.4*t6760*t6510;
  t6763 = t6760*t6510;
  t6765 = t6557 + t6763;
  t6771 = 0.64*t6765;
  t6783 = t6696 + t6761 + t6771;
  t6819 = 3.2*t6783;
  t4596 = -0.4*t588*t4566;
  t5961 = 0.4*t5885*t5960;
  t5967 = -1.*t5885*t5960;
  t5970 = t5965 + t5967;
  t6118 = 0.64*t5970;
  t6278 = t4596 + t5961 + t6118;
  t6281 = 0.1*var2[4]*t6278;
  t6376 = t6289 + t6365;
  t6399 = 0.03125*var2[3]*t6376;
  t6944 = t4097*t4151;
  t6946 = -1.*t4167*t4171;
  t6961 = t6944 + t6946;
  t6465 = -0.4*t6402*t6432;
  t6517 = 0.4*t6489*t6510;
  t6566 = -1.*t6489*t6510;
  t6612 = t6557 + t6566;
  t6635 = 0.64*t6612;
  t6645 = t6465 + t6517 + t6635;
  t6667 = 0.1*var2[6]*t6645;
  t6823 = t6672 + t6819;
  t6830 = 0.03125*var2[5]*t6823;
  t7134 = t4097*t6409;
  t7135 = -1.*t4167*t6418;
  t7159 = t7134 + t7135;
  t7199 = 0.748*t5885;
  t7201 = 0.4*t6293*t5885;
  t7202 = -0.4*t4566*t5960;
  t7208 = t588*t5885;
  t7211 = t4566*t5960;
  t7212 = t7208 + t7211;
  t7213 = 0.64*t7212;
  t7214 = t7201 + t7202 + t7213;
  t7215 = 3.2*t7214;
  t7216 = 0.748*t6489;
  t7217 = 0.4*t6680*t6489;
  t7220 = -0.4*t6432*t6510;
  t7221 = t6402*t6489;
  t7224 = t6432*t6510;
  t7225 = t7221 + t7224;
  t7227 = 0.64*t7225;
  t7231 = t7217 + t7220 + t7227;
  t7233 = 3.2*t7231;
  p_output1[0]=t6281 + t6399 + t6667 + t6830 + 0.03125*(-2.88*t4097 + t6289 + t6365 + t6672 + t6819)*var2[2];
  p_output1[1]=t6281 + t6399 + 0.03125*t6376*var2[2];
  p_output1[2]=0.1*t6278*var2[2] + 0.1*t6278*var2[3] + 0.1*(t5961 + 0.4*t588*t6961 + 0.64*(t5967 - 1.*t588*t6961))*var2[4];
  p_output1[3]=t6667 + t6830 + 0.03125*t6823*var2[2];
  p_output1[4]=0.1*t6645*var2[2] + 0.1*t6645*var2[5] + 0.1*(t6517 + 0.4*t6402*t7159 + 0.64*(t6566 - 1.*t6402*t7159))*var2[6];
  p_output1[5]=1.;
  p_output1[6]=0.03125*(-2.88*t4167 + t7199 + t7215 + t7216 + t7233);
  p_output1[7]=0.03125*(t7199 + t7215);
  p_output1[8]=0.1*(-0.4*t588*t5885 + 0.4*t5960*t6961 + 0.64*(-1.*t5960*t6961 + t7208));
  p_output1[9]=0.03125*(t7216 + t7233);
  p_output1[10]=0.1*(-0.4*t6402*t6489 + 0.4*t6510*t7159 + 0.64*(-1.*t6510*t7159 + t7221));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_vel_com_z.hh"

namespace RightStance
{

void J_vel_com_z_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
