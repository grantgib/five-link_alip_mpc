/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:46:39 GMT-04:00
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
  double t4823;
  double t4441;
  double t4583;
  double t4849;
  double t4285;
  double t4804;
  double t5043;
  double t7828;
  double t7958;
  double t7961;
  double t8206;
  double t8209;
  double t8210;
  double t8211;
  double t8212;
  double t7980;
  double t8121;
  double t8126;
  double t8288;
  double t8315;
  double t9922;
  double t9987;
  double t10006;
  double t10007;
  double t10013;
  double t10069;
  double t10090;
  double t10091;
  double t10112;
  double t10072;
  double t10082;
  double t10084;
  double t10088;
  double t10089;
  double t10116;
  double t10117;
  double t10118;
  double t10123;
  t4823 = Cos(var1[3]);
  t4441 = Cos(var1[4]);
  t4583 = Sin(var1[3]);
  t4849 = Sin(var1[4]);
  t4285 = Cos(var1[2]);
  t4804 = -1.*t4441*t4583;
  t5043 = -1.*t4823*t4849;
  t7828 = t4804 + t5043;
  t7958 = t4285*t7828;
  t7961 = Sin(var1[2]);
  t8206 = -1.*t4823*t4441;
  t8209 = t4583*t4849;
  t8210 = t8206 + t8209;
  t8211 = t7961*t8210;
  t8212 = t7958 + t8211;
  t7980 = t4823*t4441;
  t8121 = -1.*t4583*t4849;
  t8126 = t7980 + t8121;
  t8288 = -1.*t7961*t7828;
  t8315 = t4285*t8210;
  t9922 = t8288 + t8315;
  t9987 = -1.*t4441;
  t10006 = 1. + t9987;
  t10007 = 0.4*t10006;
  t10013 = 0.64*t4441;
  t10069 = t10007 + t10013;
  t10090 = t4823*t10069;
  t10091 = -0.24*t4583*t4849;
  t10112 = t10090 + t10091;
  t10072 = -0.24*t4823*t4849;
  t10082 = t10069*t4583;
  t10084 = 0.24*t4823*t4849;
  t10088 = t10082 + t10084;
  t10089 = t10088*t8126;
  t10116 = t7828*t10112;
  t10117 = t4441*t4583;
  t10118 = t4823*t4849;
  t10123 = t10117 + t10118;
  p_output1[0]=var2[4]*(-0.384*(t7958 - 1.*t7961*t8126)*var2[2] - 0.384*t8212*var2[3] - 0.384*t8212*var2[4]);
  p_output1[1]=var2[4]*(-0.384*(-1.*t4285*t8126 + t8288)*var2[2] - 0.384*t9922*var2[3] - 0.384*t9922*var2[4]);
  p_output1[2]=var2[4]*(-0.384*(t10089 + t10116 + t10112*t10123 + (t10072 - 1.*t10069*t4583)*t8126)*var2[3] - 0.384*(t10089 + t10116 + t10123*(t10091 + 0.24*t4441*t4823) + (t10072 - 0.24*t4441*t4583)*t8126)*var2[4]);
  p_output1[3]=-0.384*(-1.*t10069*t4849 + 0.24*t4441*t4849)*Power(var2[4],2);
  p_output1[4]=0;
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

#include "Ce1_vec5_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
