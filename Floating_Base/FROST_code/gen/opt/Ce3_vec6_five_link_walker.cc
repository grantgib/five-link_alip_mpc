/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:47:27 GMT-04:00
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
  double t1414;
  double t1741;
  double t1082;
  double t1113;
  double t1058;
  double t1092;
  double t1429;
  double t1544;
  double t1719;
  double t1720;
  double t1721;
  double t1754;
  double t1755;
  double t1756;
  double t1760;
  double t1761;
  double t1762;
  double t1767;
  double t1782;
  double t1791;
  double t3261;
  double t1747;
  double t1748;
  double t1749;
  double t1750;
  double t1751;
  double t1752;
  double t3338;
  double t4100;
  double t4245;
  double t4248;
  double t4418;
  double t3264;
  double t3761;
  double t4436;
  double t1083;
  double t1354;
  double t1359;
  double t1380;
  double t1757;
  double t5023;
  double t7965;
  double t8119;
  double t11147;
  double t11163;
  double t11164;
  double t9423;
  double t9643;
  double t9745;
  double t10984;
  double t11004;
  double t11120;
  double t11235;
  double t11251;
  double t11255;
  double t11257;
  double t11258;
  double t11259;
  double t1753;
  double t1758;
  double t4809;
  double t8127;
  double t8128;
  double t8346;
  double t8462;
  double t8491;
  double t8493;
  double t8989;
  double t9020;
  double t9136;
  double t11126;
  double t11165;
  double t11308;
  double t11309;
  double t11205;
  double t11311;
  double t11312;
  double t11207;
  t1414 = Cos(var1[6]);
  t1741 = Sin(var1[6]);
  t1082 = Sin(var1[2]);
  t1113 = Sin(var1[5]);
  t1058 = Cos(var1[5]);
  t1092 = Cos(var1[2]);
  t1429 = -1.*t1414;
  t1544 = 1. + t1429;
  t1719 = 0.4*t1544;
  t1720 = 0.64*t1414;
  t1721 = t1719 + t1720;
  t1754 = t1058*t1414;
  t1755 = -1.*t1113*t1741;
  t1756 = t1754 + t1755;
  t1760 = t1721*t1414;
  t1761 = Power(t1741,2);
  t1762 = 0.24*t1761;
  t1767 = t1760 + t1762;
  t1782 = -1.*t1414*t1113;
  t1791 = -1.*t1058*t1741;
  t3261 = t1782 + t1791;
  t1747 = t1721*t1741;
  t1748 = -0.24*t1414*t1741;
  t1749 = t1747 + t1748;
  t1750 = t1414*t1113;
  t1751 = t1058*t1741;
  t1752 = t1750 + t1751;
  t3338 = -1.*t1082*t1756;
  t4100 = -1.*t1092*t1058;
  t4245 = t1082*t1113;
  t4248 = t4100 + t4245;
  t4418 = -0.748*t4248;
  t3264 = t1092*t3261;
  t3761 = t3264 + t3338;
  t4436 = -1.*t1082*t3261;
  t1083 = -1.*t1058*t1082;
  t1354 = -1.*t1092*t1113;
  t1359 = t1083 + t1354;
  t1380 = -0.748*t1359;
  t1757 = t1092*t1756;
  t5023 = -1.*t1058*t1414;
  t7965 = t1113*t1741;
  t8119 = t5023 + t7965;
  t11147 = t1058*t1721;
  t11163 = -0.24*t1113*t1741;
  t11164 = t11147 + t11163;
  t9423 = -1.*t1721*t1113;
  t9643 = -0.24*t1058*t1741;
  t9745 = t9423 + t9643;
  t10984 = t1721*t1113;
  t11004 = 0.24*t1058*t1741;
  t11120 = t10984 + t11004;
  t11235 = -1.*t1721*t1741;
  t11251 = 0.24*t1414*t1741;
  t11255 = t11235 + t11251;
  t11257 = Power(t1414,2);
  t11258 = -0.24*t11257;
  t11259 = t1760 + t11258;
  t1753 = -1.*t1082*t1752;
  t1758 = t1753 + t1757;
  t4809 = -3.2*t1749*t3761;
  t8127 = t1092*t8119;
  t8128 = t4436 + t8127;
  t8346 = -3.2*t1767*t8128;
  t8462 = t1082*t3261;
  t8491 = t8462 + t1757;
  t8493 = -3.2*t1749*t8491;
  t8989 = t1082*t8119;
  t9020 = t3264 + t8989;
  t9136 = -3.2*t1767*t9020;
  t11126 = t11120*t1756;
  t11165 = t3261*t11164;
  t11308 = -0.24*t1414*t1113;
  t11309 = t11308 + t9643;
  t11205 = -1.*t3261*t11120;
  t11311 = 0.24*t1058*t1414;
  t11312 = t11311 + t11163;
  t11207 = -1.*t11164*t8119;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t1380 - 3.2*t1749*t1758 - 3.2*t1767*t3761)*var2[0] - 0.5*(-3.2*t1749*(-1.*t1092*t1752 + t3338) + t4418 - 3.2*t1767*(-1.*t1092*t1756 + t4436))*var2[1])*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*(t1380 + t8493 + t9136)*var2[0] - 0.5*(t4418 + t4809 + t8346)*var2[1] - 0.5*(-3.2*t1767*(t11126 + t11165 + t11164*t1752 + t1756*t9745) - 3.2*t1749*(t11205 + t11207 - 1.*t11164*t1756 - 1.*t3261*t9745))*var2[2])*var2[5];
  p_output1[6]=var2[5]*(-0.5*(-3.2*t11259*(t1092*t1752 + t1082*t1756) - 3.2*t11255*t8491 + t8493 + t9136)*var2[0] - 0.5*(-3.2*t11259*t1758 - 3.2*t11255*t3761 + t4809 + t8346)*var2[1] - 0.5*(-3.2*t11255*(t11120*t1752 + t11164*t1756) - 3.2*(t11126 + t11165 + t11312*t1752 + t11309*t1756)*t1767 - 3.2*t11259*(-1.*t11120*t1756 - 1.*t11164*t3261) - 3.2*t1749*(t11205 + t11207 - 1.*t11312*t1756 - 1.*t11309*t3261))*var2[2] - 0.5*(-6.4*t11259*t1749 - 6.4*t11255*t1767)*var2[5] + 0.384*t11255*var2[6]);
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

#include "Ce3_vec6_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
