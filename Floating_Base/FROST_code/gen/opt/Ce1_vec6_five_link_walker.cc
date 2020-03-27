/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:46:43 GMT-04:00
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
  double t8253;
  double t9926;
  double t8130;
  double t8203;
  double t8049;
  double t8199;
  double t8285;
  double t8291;
  double t8292;
  double t8312;
  double t8390;
  double t10130;
  double t10135;
  double t10136;
  double t8154;
  double t8223;
  double t8245;
  double t8246;
  double t9927;
  double t9960;
  double t9963;
  double t10148;
  double t10149;
  double t10150;
  double t10137;
  double t10144;
  double t10145;
  double t10146;
  double t10147;
  double t10163;
  double t10174;
  double t10175;
  double t10176;
  double t10071;
  double t10074;
  double t10080;
  double t10177;
  double t10178;
  double t10179;
  double t10180;
  double t10181;
  double t10182;
  double t10169;
  double t10217;
  double t10218;
  double t10219;
  double t10220;
  double t10170;
  double t10221;
  double t10197;
  double t10204;
  double t10208;
  double t10126;
  double t10140;
  double t10230;
  double t10185;
  double t10186;
  double t10192;
  double t10231;
  double t10232;
  double t10233;
  double t10250;
  double t10251;
  double t10252;
  double t10242;
  double t10243;
  double t10244;
  double t10246;
  double t10247;
  double t10248;
  double t10249;
  double t10253;
  double t10273;
  double t10274;
  double t10258;
  double t10276;
  double t10277;
  double t10260;
  t8253 = Cos(var1[6]);
  t9926 = Sin(var1[6]);
  t8130 = Sin(var1[2]);
  t8203 = Sin(var1[5]);
  t8049 = Cos(var1[5]);
  t8199 = Cos(var1[2]);
  t8285 = -1.*t8253;
  t8291 = 1. + t8285;
  t8292 = 0.4*t8291;
  t8312 = 0.64*t8253;
  t8390 = t8292 + t8312;
  t10130 = t8049*t8253;
  t10135 = -1.*t8203*t9926;
  t10136 = t10130 + t10135;
  t8154 = -1.*t8049*t8130;
  t8223 = -1.*t8199*t8203;
  t8245 = t8154 + t8223;
  t8246 = 0.748*t8245;
  t9927 = t8390*t9926;
  t9960 = -0.24*t8253*t9926;
  t9963 = t9927 + t9960;
  t10148 = -1.*t8253*t8203;
  t10149 = -1.*t8049*t9926;
  t10150 = t10148 + t10149;
  t10137 = t8199*t10136;
  t10144 = t8390*t8253;
  t10145 = Power(t9926,2);
  t10146 = 0.24*t10145;
  t10147 = t10144 + t10146;
  t10163 = t8199*t10150;
  t10174 = t8130*t10150;
  t10175 = t10174 + t10137;
  t10176 = 3.2*t9963*t10175;
  t10071 = t8253*t8203;
  t10074 = t8049*t9926;
  t10080 = t10071 + t10074;
  t10177 = -1.*t8049*t8253;
  t10178 = t8203*t9926;
  t10179 = t10177 + t10178;
  t10180 = t8130*t10179;
  t10181 = t10163 + t10180;
  t10182 = 3.2*t10147*t10181;
  t10169 = -1.*t8130*t10136;
  t10217 = -1.*t8199*t8049;
  t10218 = t8130*t8203;
  t10219 = t10217 + t10218;
  t10220 = 0.748*t10219;
  t10170 = t10163 + t10169;
  t10221 = -1.*t8130*t10150;
  t10197 = Power(t8253,2);
  t10204 = -0.24*t10197;
  t10208 = t10144 + t10204;
  t10126 = -1.*t8130*t10080;
  t10140 = t10126 + t10137;
  t10230 = 3.2*t9963*t10170;
  t10185 = -1.*t8390*t9926;
  t10186 = 0.24*t8253*t9926;
  t10192 = t10185 + t10186;
  t10231 = t8199*t10179;
  t10232 = t10221 + t10231;
  t10233 = 3.2*t10147*t10232;
  t10250 = t8049*t8390;
  t10251 = -0.24*t8203*t9926;
  t10252 = t10250 + t10251;
  t10242 = -1.*t8390*t8203;
  t10243 = -0.24*t8049*t9926;
  t10244 = t10242 + t10243;
  t10246 = t8390*t8203;
  t10247 = 0.24*t8049*t9926;
  t10248 = t10246 + t10247;
  t10249 = t10248*t10136;
  t10253 = t10150*t10252;
  t10273 = -0.24*t8253*t8203;
  t10274 = t10273 + t10243;
  t10258 = -1.*t10150*t10248;
  t10276 = 0.24*t8049*t8253;
  t10277 = t10276 + t10251;
  t10260 = -1.*t10252*t10179;
  p_output1[0]=var2[5]*(-0.5*(3.2*t10147*t10170 + t8246 + 3.2*t10140*t9963)*var2[2] - 0.5*(t10176 + t10182 + t8246)*var2[5] - 0.5*(t10176 + t10182 + 3.2*t10175*t10192 + 3.2*t10208*(t10136*t8130 + t10080*t8199))*var2[6]);
  p_output1[1]=var2[5]*(-0.5*(t10220 + 3.2*t10147*(t10221 - 1.*t10136*t8199) + 3.2*(t10169 - 1.*t10080*t8199)*t9963)*var2[2] - 0.5*(t10220 + t10230 + t10233)*var2[5] - 0.5*(3.2*t10170*t10192 + 3.2*t10140*t10208 + t10230 + t10233)*var2[6]);
  p_output1[2]=var2[5]*(-0.5*(3.2*t10147*(t10136*t10244 + t10249 + t10080*t10252 + t10253) + 3.2*(-1.*t10150*t10244 - 1.*t10136*t10252 + t10258 + t10260)*t9963)*var2[5] - 0.5*(3.2*t10192*(t10080*t10248 + t10136*t10252) + 3.2*t10208*(-1.*t10136*t10248 - 1.*t10150*t10252) + 3.2*t10147*(t10249 + t10253 + t10136*t10274 + t10080*t10277) + 3.2*(t10258 + t10260 - 1.*t10150*t10274 - 1.*t10136*t10277)*t9963)*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.5*(6.4*t10147*t10192 + 6.4*t10208*t9963)*var2[5]*var2[6];
  p_output1[6]=-0.384*t10192*var2[5]*var2[6];
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

#include "Ce1_vec6_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
