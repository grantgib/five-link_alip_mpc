/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 14:36:47 GMT-05:00
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
  double t4954;
  double t8104;
  double t1444;
  double t8121;
  double t356;
  double t8088;
  double t8208;
  double t8215;
  double t8220;
  double t8222;
  double t8225;
  double t8232;
  double t1037;
  double t1362;
  double t8216;
  double t8246;
  double t8288;
  double t8743;
  double t8744;
  double t8749;
  double t8856;
  double t8926;
  double t8929;
  double t8934;
  double t9103;
  double t9104;
  double t9106;
  double t9067;
  double t9136;
  double t9155;
  double t9160;
  double t9168;
  double t9186;
  double t9187;
  t4954 = Cos(var1[3]);
  t8104 = Sin(var1[2]);
  t1444 = Cos(var1[2]);
  t8121 = Sin(var1[3]);
  t356 = Cos(var1[4]);
  t8088 = t1444*t4954;
  t8208 = -1.*t8104*t8121;
  t8215 = t8088 + t8208;
  t8220 = -1.*t4954*t8104;
  t8222 = -1.*t1444*t8121;
  t8225 = t8220 + t8222;
  t8232 = Sin(var1[4]);
  t1037 = -1.*t356;
  t1362 = 1. + t1037;
  t8216 = 0.4*t1362*t8215;
  t8246 = -0.4*t8225*t8232;
  t8288 = t356*t8215;
  t8743 = t8225*t8232;
  t8744 = t8288 + t8743;
  t8749 = 0.8*t8744;
  t8856 = t8216 + t8246 + t8749;
  t8926 = t4954*t8104;
  t8929 = t1444*t8121;
  t8934 = t8926 + t8929;
  t9103 = -1.*t1444*t4954;
  t9104 = t8104*t8121;
  t9106 = t9103 + t9104;
  t9067 = 0.4*t1362*t8225;
  t9136 = -0.4*t9106*t8232;
  t9155 = t356*t8225;
  t9160 = t9106*t8232;
  t9168 = t9155 + t9160;
  t9186 = 0.8*t9168;
  t9187 = t9067 + t9136 + t9186;
  p_output1[0]=1.;
  p_output1[1]=t8856;
  p_output1[2]=t8856;
  p_output1[3]=-0.4*t356*t8215 + 0.4*t8232*t8934 + 0.8*(t8288 - 1.*t8232*t8934);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t9187;
  p_output1[8]=t9187;
  p_output1[9]=-0.4*t356*t8225 + 0.4*t8215*t8232 + 0.8*(-1.*t8215*t8232 + t9155);
  p_output1[10]=-1.;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "J_h_RightToe_RightStance.hh"

namespace RightStance
{

void J_h_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
