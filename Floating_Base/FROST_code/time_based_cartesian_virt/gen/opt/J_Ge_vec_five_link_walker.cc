/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:30 GMT-05:00
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
  double t38;
  double t68;
  double t208;
  double t244;
  double t408;
  double t468;
  double t495;
  double t666;
  double t902;
  double t933;
  double t940;
  double t946;
  double t1565;
  double t1570;
  double t1618;
  double t1664;
  double t1705;
  double t1775;
  double t1856;
  double t1858;
  double t1897;
  double t1907;
  double t596;
  double t698;
  double t885;
  double t901;
  double t994;
  double t1103;
  double t1142;
  double t1241;
  double t1494;
  double t1518;
  double t1538;
  double t2763;
  double t2838;
  double t2857;
  double t1734;
  double t1786;
  double t1846;
  double t1850;
  double t1923;
  double t2056;
  double t2066;
  double t2081;
  double t2083;
  double t2284;
  double t2480;
  double t3188;
  double t3206;
  double t3273;
  double t2669;
  double t2670;
  double t2939;
  double t2977;
  double t3097;
  double t3112;
  double t3147;
  double t3154;
  double t3400;
  double t3468;
  double t3490;
  double t3156;
  double t3171;
  double t3277;
  double t3311;
  double t3323;
  double t3339;
  double t3357;
  double t3391;
  double t3886;
  double t3988;
  double t4015;
  t38 = Cos(var1[2]);
  t68 = Cos(var1[3]);
  t208 = -1.*t38*t68;
  t244 = Sin(var1[2]);
  t408 = Sin(var1[3]);
  t468 = t244*t408;
  t495 = t208 + t468;
  t666 = Cos(var1[4]);
  t902 = t68*t244;
  t933 = t38*t408;
  t940 = t902 + t933;
  t946 = Sin(var1[4]);
  t1565 = Cos(var1[5]);
  t1570 = -1.*t38*t1565;
  t1618 = Sin(var1[5]);
  t1664 = t244*t1618;
  t1705 = t1570 + t1664;
  t1775 = Cos(var1[6]);
  t1856 = t1565*t244;
  t1858 = t38*t1618;
  t1897 = t1856 + t1858;
  t1907 = Sin(var1[6]);
  t596 = -7.33788*t495;
  t698 = -1.*t666;
  t885 = 1. + t698;
  t901 = 0.4*t885*t495;
  t994 = -0.4*t940*t946;
  t1103 = t666*t495;
  t1142 = t940*t946;
  t1241 = t1103 + t1142;
  t1494 = 0.64*t1241;
  t1518 = t901 + t994 + t1494;
  t1538 = -31.392000000000003*t1518;
  t2763 = -1.*t68*t244;
  t2838 = -1.*t38*t408;
  t2857 = t2763 + t2838;
  t1734 = -7.33788*t1705;
  t1786 = -1.*t1775;
  t1846 = 1. + t1786;
  t1850 = 0.4*t1846*t1705;
  t1923 = -0.4*t1897*t1907;
  t2056 = t1775*t1705;
  t2066 = t1897*t1907;
  t2081 = t2056 + t2066;
  t2083 = 0.64*t2081;
  t2284 = t1850 + t1923 + t2083;
  t2480 = -31.392000000000003*t2284;
  t3188 = -1.*t1565*t244;
  t3206 = -1.*t38*t1618;
  t3273 = t3188 + t3206;
  t2669 = t596 + t1538;
  t2670 = -0.4*t666*t495;
  t2939 = 0.4*t2857*t946;
  t2977 = -1.*t2857*t946;
  t3097 = t1103 + t2977;
  t3112 = 0.64*t3097;
  t3147 = t2670 + t2939 + t3112;
  t3154 = -31.392000000000003*t3147;
  t3400 = t38*t68;
  t3468 = -1.*t244*t408;
  t3490 = t3400 + t3468;
  t3156 = t1734 + t2480;
  t3171 = -0.4*t1775*t1705;
  t3277 = 0.4*t3273*t1907;
  t3311 = -1.*t3273*t1907;
  t3323 = t2056 + t3311;
  t3339 = 0.64*t3323;
  t3357 = t3171 + t3277 + t3339;
  t3391 = -31.392000000000003*t3357;
  t3886 = t38*t1565;
  t3988 = -1.*t244*t1618;
  t4015 = t3886 + t3988;
  p_output1[0]=t1538 + t1734 + t2480 + 28.252799999999997*t38 + t596;
  p_output1[1]=t2669;
  p_output1[2]=t3154;
  p_output1[3]=t3156;
  p_output1[4]=t3391;
  p_output1[5]=t2669;
  p_output1[6]=t2669;
  p_output1[7]=t3154;
  p_output1[8]=t3154;
  p_output1[9]=t3154;
  p_output1[10]=-31.392000000000003*(t2939 + 0.4*t3490*t666 + 0.64*(t2977 - 1.*t3490*t666));
  p_output1[11]=t3156;
  p_output1[12]=t3156;
  p_output1[13]=t3391;
  p_output1[14]=t3391;
  p_output1[15]=t3391;
  p_output1[16]=-31.392000000000003*(t3277 + 0.4*t1775*t4015 + 0.64*(t3311 - 1.*t1775*t4015));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_five_link_walker.hh"

namespace RightStance
{

void J_Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
