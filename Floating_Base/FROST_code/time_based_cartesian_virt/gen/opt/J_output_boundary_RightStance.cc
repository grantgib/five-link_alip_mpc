/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:16:04 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t531;
  double t497;
  double t503;
  double t546;
  double t103;
  double t519;
  double t549;
  double t679;
  double t750;
  double t774;
  double t784;
  double t804;
  double t298;
  double t380;
  double t745;
  double t805;
  double t808;
  double t824;
  double t836;
  double t842;
  double t844;
  double t856;
  double t865;
  double t869;
  double t945;
  double t967;
  double t913;
  double t963;
  double t1012;
  double t1083;
  double t1235;
  double t1254;
  double t1298;
  double t1378;
  double t890;
  double t891;
  double t892;
  double t893;
  double t901;
  double t905;
  double t1584;
  double t1597;
  double t1618;
  double t921;
  double t930;
  double t1125;
  double t1394;
  double t1424;
  double t1428;
  double t1449;
  double t1477;
  double t1908;
  double t1954;
  double t1991;
  double t2160;
  double t2177;
  double t2205;
  double t846;
  double t872;
  double t873;
  double t877;
  double t880;
  double t887;
  double t2093;
  double t2210;
  double t2248;
  double t2254;
  double t2262;
  double t2264;
  t531 = Cos(var1[2]);
  t497 = Cos(var1[3]);
  t503 = Sin(var1[2]);
  t546 = Sin(var1[3]);
  t103 = Cos(var1[4]);
  t519 = -1.*t497*t503;
  t549 = -1.*t531*t546;
  t679 = t519 + t549;
  t750 = -1.*t531*t497;
  t774 = t503*t546;
  t784 = t750 + t774;
  t804 = Sin(var1[4]);
  t298 = -1.*t103;
  t380 = 1. + t298;
  t745 = -0.4*t380*t679;
  t805 = 0.4*t784*t804;
  t808 = t103*t679;
  t824 = t784*t804;
  t836 = t808 + t824;
  t842 = -0.8*t836;
  t844 = t745 + t805 + t842;
  t856 = t531*t497;
  t865 = -1.*t503*t546;
  t869 = t856 + t865;
  t945 = Cos(var1[5]);
  t967 = Sin(var1[5]);
  t913 = Cos(var1[6]);
  t963 = t531*t945;
  t1012 = -1.*t503*t967;
  t1083 = t963 + t1012;
  t1235 = -1.*t945*t503;
  t1254 = -1.*t531*t967;
  t1298 = t1235 + t1254;
  t1378 = Sin(var1[6]);
  t890 = -0.4*t380*t869;
  t891 = 0.4*t679*t804;
  t892 = t103*t869;
  t893 = t679*t804;
  t901 = t892 + t893;
  t905 = -0.8*t901;
  t1584 = t497*t503;
  t1597 = t531*t546;
  t1618 = t1584 + t1597;
  t921 = -1.*t913;
  t930 = 1. + t921;
  t1125 = 0.4*t930*t1083;
  t1394 = -0.4*t1298*t1378;
  t1424 = t913*t1083;
  t1428 = t1298*t1378;
  t1449 = t1424 + t1428;
  t1477 = 0.8*t1449;
  t1908 = t945*t503;
  t1954 = t531*t967;
  t1991 = t1908 + t1954;
  t2160 = -1.*t531*t945;
  t2177 = t503*t967;
  t2205 = t2160 + t2177;
  t846 = 0.4*t103*t679;
  t872 = -0.4*t869*t804;
  t873 = -1.*t869*t804;
  t877 = t808 + t873;
  t880 = -0.8*t877;
  t887 = t846 + t872 + t880;
  t2093 = 0.4*t930*t1298;
  t2210 = -0.4*t2205*t1378;
  t2248 = t913*t1298;
  t2254 = t2205*t1378;
  t2262 = t2248 + t2254;
  t2264 = 0.8*t2262;
  p_output1[0]=1.;
  p_output1[1]=t844;
  p_output1[2]=t844;
  p_output1[3]=t887;
  p_output1[4]=t1125 + t1394 + t1477 + t890 + t891 + t905;
  p_output1[5]=t890 + t891 + t905;
  p_output1[6]=-0.4*t1618*t804 + 0.4*t103*t869 - 0.8*(-1.*t1618*t804 + t892);
  p_output1[7]=t1125 + t1394 + t1477;
  p_output1[8]=0.4*t1378*t1991 + 0.8*(t1424 - 1.*t1378*t1991) - 0.4*t1083*t913;
  p_output1[9]=t2093 + t2210 + t2264 + t745 + t805 + t842;
  p_output1[10]=t844;
  p_output1[11]=t887;
  p_output1[12]=t2093 + t2210 + t2264;
  p_output1[13]=0.4*t1083*t1378 + 0.8*(-1.*t1083*t1378 + t2248) - 0.4*t1298*t913;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_output_boundary_RightStance.hh"

namespace RightStance
{

void J_output_boundary_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
