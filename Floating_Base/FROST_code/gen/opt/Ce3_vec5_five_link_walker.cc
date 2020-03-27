/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:47:24 GMT-04:00
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
  double t1038;
  double t1027;
  double t1031;
  double t1039;
  double t1046;
  double t1032;
  double t1042;
  double t1043;
  double t1015;
  double t1047;
  double t1048;
  double t1057;
  double t1385;
  double t1406;
  double t1411;
  double t1412;
  double t1413;
  double t1695;
  double t1699;
  double t1700;
  double t1044;
  double t1091;
  double t1722;
  double t1723;
  double t1724;
  double t1422;
  double t1670;
  double t1691;
  double t1692;
  double t1693;
  double t1701;
  double t1705;
  double t1712;
  double t1718;
  double t1725;
  double t1734;
  double t1735;
  double t1736;
  double t1737;
  double t1738;
  t1038 = Cos(var1[3]);
  t1027 = Cos(var1[4]);
  t1031 = Sin(var1[3]);
  t1039 = Sin(var1[4]);
  t1046 = Cos(var1[2]);
  t1032 = -1.*t1027*t1031;
  t1042 = -1.*t1038*t1039;
  t1043 = t1032 + t1042;
  t1015 = Sin(var1[2]);
  t1047 = t1038*t1027;
  t1048 = -1.*t1031*t1039;
  t1057 = t1047 + t1048;
  t1385 = -1.*t1027;
  t1406 = 1. + t1385;
  t1411 = 0.4*t1406;
  t1412 = 0.64*t1027;
  t1413 = t1411 + t1412;
  t1695 = t1038*t1413;
  t1699 = -0.24*t1031*t1039;
  t1700 = t1695 + t1699;
  t1044 = -1.*t1015*t1043;
  t1091 = t1046*t1043;
  t1722 = -1.*t1038*t1027;
  t1723 = t1031*t1039;
  t1724 = t1722 + t1723;
  t1422 = -0.24*t1038*t1039;
  t1670 = t1413*t1031;
  t1691 = 0.24*t1038*t1039;
  t1692 = t1670 + t1691;
  t1693 = t1692*t1057;
  t1701 = t1043*t1700;
  t1705 = t1027*t1031;
  t1712 = t1038*t1039;
  t1718 = t1705 + t1712;
  t1725 = t1046*t1724;
  t1734 = t1044 + t1725;
  t1735 = 0.384*var2[1]*t1734;
  t1736 = t1015*t1724;
  t1737 = t1091 + t1736;
  t1738 = 0.384*var2[0]*t1737;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(-1.*t1015*t1057 + t1091)*var2[0] + 0.384*(t1044 - 1.*t1046*t1057)*var2[1])*var2[4];
  p_output1[3]=(t1735 + t1738 + 0.384*(t1057*(-1.*t1031*t1413 + t1422) + t1693 + t1701 + t1700*t1718)*var2[2])*var2[4];
  p_output1[4]=(t1735 + t1738 + 0.384*(t1057*(-0.24*t1027*t1031 + t1422) + t1693 + t1701 + (0.24*t1027*t1038 + t1699)*t1718)*var2[2] + 0.384*(0.24*t1027*t1039 - 1.*t1039*t1413)*var2[3])*var2[4];
  p_output1[5]=0;
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

#include "Ce3_vec5_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
