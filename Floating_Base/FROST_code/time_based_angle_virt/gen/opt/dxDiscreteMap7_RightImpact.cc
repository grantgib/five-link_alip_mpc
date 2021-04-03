/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 17:04:40 GMT-05:00
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
  double t949;
  double t944;
  double t945;
  double t950;
  double t960;
  double t946;
  double t951;
  double t955;
  double t924;
  double t969;
  double t961;
  double t962;
  double t963;
  double t971;
  double t972;
  double t973;
  double t997;
  double t998;
  double t999;
  double t1001;
  double t1002;
  double t1003;
  double t1004;
  double t1005;
  double t1007;
  double t1009;
  double t1010;
  t949 = Cos(var2[3]);
  t944 = Cos(var2[4]);
  t945 = Sin(var2[3]);
  t950 = Sin(var2[4]);
  t960 = Cos(var2[2]);
  t946 = -1.*t944*t945;
  t951 = -1.*t949*t950;
  t955 = t946 + t951;
  t924 = Sin(var2[2]);
  t969 = t960*t955;
  t961 = t949*t944;
  t962 = -1.*t945*t950;
  t963 = t961 + t962;
  t971 = -1.*t949*t944;
  t972 = t945*t950;
  t973 = t971 + t972;
  t997 = -1.*t944;
  t998 = 1. + t997;
  t999 = 0.4*t998;
  t1001 = 0.8*t944;
  t1002 = t999 + t1001;
  t1003 = t1002*t945;
  t1004 = 0.4*t949*t950;
  t1005 = t1003 + t1004;
  t1007 = t949*t1002;
  t1009 = -0.4*t945*t950;
  t1010 = t1007 + t1009;
  p_output1[0]=(t924*t955 + t960*t963)*var4[0] + (t969 + t924*t973)*var4[2];
  p_output1[1]=(-1.*t924*t963 + t969)*var4[0] + (-1.*t924*t955 + t960*t973)*var4[2];
  p_output1[2]=-1.*(t1005*t955 + t1010*t973)*var4[0] - 1.*(-1.*t1010*t955 - 1.*t1005*t963)*var4[2];
  p_output1[3]=-1.*(-1.*t1002*t944 - 0.4*Power(t950,2))*var4[0] - 1.*(t1002*t950 - 0.4*t944*t950)*var4[2];
  p_output1[4]=0.4*var4[0];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMap7_RightImpact.hh"

namespace RightImpact
{

void dxDiscreteMap7_RightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
