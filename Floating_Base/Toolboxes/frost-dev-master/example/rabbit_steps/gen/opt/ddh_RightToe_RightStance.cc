/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:52:13 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t4970;
  double t2900;
  double t3622;
  double t4974;
  double t673;
  double t4969;
  double t4975;
  double t4976;
  double t4981;
  double t4982;
  double t4983;
  double t4996;
  double t1861;
  double t2751;
  double t5032;
  double t5033;
  double t5034;
  double t5031;
  double t5035;
  double t5036;
  double t5037;
  double t5038;
  double t5039;
  double t5040;
  double t5045;
  double t5046;
  double t5047;
  double t5048;
  double t5051;
  double t5052;
  double t5057;
  double t5058;
  double t5059;
  double t5060;
  double t5061;
  double t5062;
  double t5063;
  double t5076;
  double t5077;
  double t5078;
  double t5075;
  double t5079;
  double t5080;
  double t5081;
  double t5084;
  double t5085;
  double t5074;
  double t5086;
  double t5087;
  double t5090;
  double t5100;
  double t5102;
  double t5107;
  double t5108;
  double t5109;
  double t5110;
  double t5111;
  double t5117;
  double t5118;
  double t5119;
  double t5120;
  double t5121;
  double t5122;
  double t5116;
  double t5123;
  double t5124;
  double t5125;
  t4970 = Cos(var1[2]);
  t2900 = Cos(var1[3]);
  t3622 = Sin(var1[2]);
  t4974 = Sin(var1[3]);
  t673 = Cos(var1[4]);
  t4969 = t2900*t3622;
  t4975 = t4970*t4974;
  t4976 = t4969 + t4975;
  t4981 = t4970*t2900;
  t4982 = -1.*t3622*t4974;
  t4983 = t4981 + t4982;
  t4996 = Sin(var1[4]);
  t1861 = -1.*t673;
  t2751 = 1. + t1861;
  t5032 = -1.*t2900*t3622;
  t5033 = -1.*t4970*t4974;
  t5034 = t5032 + t5033;
  t5031 = 0.4*t2751*t4983;
  t5035 = -0.4*t5034*t4996;
  t5036 = t673*t4983;
  t5037 = t5034*t4996;
  t5038 = t5036 + t5037;
  t5039 = 0.8*t5038;
  t5040 = t5031 + t5035 + t5039;
  t5045 = -0.4*t673*t4983;
  t5046 = 0.4*t4976*t4996;
  t5047 = -1.*t4976*t4996;
  t5048 = t5036 + t5047;
  t5051 = 0.8*t5048;
  t5052 = t5045 + t5046 + t5051;
  t5057 = -0.4*t673*t5034;
  t5058 = 0.4*t4983*t4996;
  t5059 = t673*t5034;
  t5060 = -1.*t4983*t4996;
  t5061 = t5059 + t5060;
  t5062 = 0.8*t5061;
  t5063 = t5057 + t5058 + t5062;
  t5076 = -1.*t4970*t2900;
  t5077 = t3622*t4974;
  t5078 = t5076 + t5077;
  t5075 = 0.4*t2751*t5034;
  t5079 = -0.4*t5078*t4996;
  t5080 = t5078*t4996;
  t5081 = t5059 + t5080;
  t5084 = 0.8*t5081;
  t5085 = t5075 + t5079 + t5084;
  t5074 = var2[4]*t5063;
  t5086 = var2[2]*t5085;
  t5087 = var2[3]*t5085;
  t5090 = t5074 + t5086 + t5087;
  t5100 = 0.4*t5034*t4996;
  t5102 = -1.*t5034*t4996;
  t5107 = -0.4*t673*t5078;
  t5108 = t673*t5078;
  t5109 = t5108 + t5102;
  t5110 = 0.8*t5109;
  t5111 = t5107 + t5100 + t5110;
  t5117 = 0.4*t2751*t5078;
  t5118 = -0.4*t4976*t4996;
  t5119 = t4976*t4996;
  t5120 = t5108 + t5119;
  t5121 = 0.8*t5120;
  t5122 = t5117 + t5118 + t5121;
  t5116 = var2[4]*t5111;
  t5123 = var2[2]*t5122;
  t5124 = var2[3]*t5122;
  t5125 = t5116 + t5123 + t5124;
  p_output1[0]=0.4*t2751*t4976 - 0.4*t4983*t4996 + 0.8*(t4983*t4996 + t4976*t673) + var1[0] + var2[0] + t5040*var2[2] + t5090*var2[2] + t5040*var2[3] + t5090*var2[3] + t5052*var2[4] + var2[4]*(t5063*var2[2] + t5063*var2[3] + (t5058 + 0.4*t4976*t673 + 0.8*(t5060 - 1.*t4976*t673))*var2[4]) + var3[0] + t5040*var3[2] + t5040*var3[3] + t5052*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t5031 + t5035 + t5039 + t5074 + t5086 + t5087 + var1[1] + var2[1] + t5125*var2[2] + t5125*var2[3] + var2[4]*(t5111*var2[2] + t5111*var2[3] + (t5100 + 0.4*t4983*t673 + 0.8*(t5102 - 1.*t4983*t673))*var2[4]) + var3[1] + t5085*var3[2] + t5085*var3[3] + t5063*var3[4] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightToe_RightStance.hh"

namespace RightStance
{

void ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
