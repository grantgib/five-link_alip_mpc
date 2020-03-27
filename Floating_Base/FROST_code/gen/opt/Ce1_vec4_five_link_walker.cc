/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:46:35 GMT-04:00
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
  double t4620;
  double t4884;
  double t3725;
  double t4156;
  double t3077;
  double t4151;
  double t4771;
  double t4772;
  double t4850;
  double t4882;
  double t4883;
  double t5014;
  double t5016;
  double t5025;
  double t3867;
  double t4299;
  double t4377;
  double t4388;
  double t4905;
  double t4909;
  double t4910;
  double t7818;
  double t7834;
  double t7946;
  double t5026;
  double t5089;
  double t5090;
  double t7787;
  double t7812;
  double t7954;
  double t7981;
  double t8028;
  double t8032;
  double t4911;
  double t4914;
  double t4919;
  double t8035;
  double t8037;
  double t8042;
  double t8047;
  double t8048;
  double t8113;
  double t7955;
  double t8230;
  double t8235;
  double t8236;
  double t8238;
  double t7957;
  double t8239;
  double t8166;
  double t8176;
  double t8181;
  double t4925;
  double t5027;
  double t8317;
  double t8129;
  double t8137;
  double t8147;
  double t8373;
  double t9142;
  double t9819;
  double t10020;
  double t10021;
  double t10022;
  double t10008;
  double t10011;
  double t10012;
  double t10014;
  double t10017;
  double t10018;
  double t10019;
  double t10057;
  double t10127;
  double t10128;
  double t10077;
  double t10132;
  double t10134;
  double t10081;
  t4620 = Cos(var1[4]);
  t4884 = Sin(var1[4]);
  t3725 = Sin(var1[2]);
  t4156 = Sin(var1[3]);
  t3077 = Cos(var1[3]);
  t4151 = Cos(var1[2]);
  t4771 = -1.*t4620;
  t4772 = 1. + t4771;
  t4850 = 0.4*t4772;
  t4882 = 0.64*t4620;
  t4883 = t4850 + t4882;
  t5014 = t3077*t4620;
  t5016 = -1.*t4156*t4884;
  t5025 = t5014 + t5016;
  t3867 = -1.*t3077*t3725;
  t4299 = -1.*t4151*t4156;
  t4377 = t3867 + t4299;
  t4388 = 0.748*t4377;
  t4905 = t4883*t4884;
  t4909 = -0.24*t4620*t4884;
  t4910 = t4905 + t4909;
  t7818 = -1.*t4620*t4156;
  t7834 = -1.*t3077*t4884;
  t7946 = t7818 + t7834;
  t5026 = t4151*t5025;
  t5089 = t4883*t4620;
  t5090 = Power(t4884,2);
  t7787 = 0.24*t5090;
  t7812 = t5089 + t7787;
  t7954 = t4151*t7946;
  t7981 = t3725*t7946;
  t8028 = t7981 + t5026;
  t8032 = 3.2*t4910*t8028;
  t4911 = t4620*t4156;
  t4914 = t3077*t4884;
  t4919 = t4911 + t4914;
  t8035 = -1.*t3077*t4620;
  t8037 = t4156*t4884;
  t8042 = t8035 + t8037;
  t8047 = t3725*t8042;
  t8048 = t7954 + t8047;
  t8113 = 3.2*t7812*t8048;
  t7955 = -1.*t3725*t5025;
  t8230 = -1.*t4151*t3077;
  t8235 = t3725*t4156;
  t8236 = t8230 + t8235;
  t8238 = 0.748*t8236;
  t7957 = t7954 + t7955;
  t8239 = -1.*t3725*t7946;
  t8166 = Power(t4620,2);
  t8176 = -0.24*t8166;
  t8181 = t5089 + t8176;
  t4925 = -1.*t3725*t4919;
  t5027 = t4925 + t5026;
  t8317 = 3.2*t4910*t7957;
  t8129 = -1.*t4883*t4884;
  t8137 = 0.24*t4620*t4884;
  t8147 = t8129 + t8137;
  t8373 = t4151*t8042;
  t9142 = t8239 + t8373;
  t9819 = 3.2*t7812*t9142;
  t10020 = t3077*t4883;
  t10021 = -0.24*t4156*t4884;
  t10022 = t10020 + t10021;
  t10008 = -1.*t4883*t4156;
  t10011 = -0.24*t3077*t4884;
  t10012 = t10008 + t10011;
  t10014 = t4883*t4156;
  t10017 = 0.24*t3077*t4884;
  t10018 = t10014 + t10017;
  t10019 = t10018*t5025;
  t10057 = t7946*t10022;
  t10127 = -0.24*t4620*t4156;
  t10128 = t10127 + t10011;
  t10077 = -1.*t7946*t10018;
  t10132 = 0.24*t3077*t4620;
  t10134 = t10132 + t10021;
  t10081 = -1.*t10022*t8042;
  p_output1[0]=var2[3]*(-0.5*(t4388 + 3.2*t4910*t5027 + 3.2*t7812*t7957)*var2[2] - 0.5*(t4388 + t8032 + t8113)*var2[3] - 0.5*(t8032 + t8113 + 3.2*t8028*t8147 + 3.2*(t4151*t4919 + t3725*t5025)*t8181)*var2[4]);
  p_output1[1]=var2[3]*(-0.5*(3.2*t4910*(-1.*t4151*t4919 + t7955) + t8238 + 3.2*t7812*(-1.*t4151*t5025 + t8239))*var2[2] - 0.5*(t8238 + t8317 + t9819)*var2[3] - 0.5*(3.2*t7957*t8147 + 3.2*t5027*t8181 + t8317 + t9819)*var2[4]);
  p_output1[2]=var2[3]*(-0.5*(3.2*(t10019 + t10057 + t10022*t4919 + t10012*t5025)*t7812 + 3.2*t4910*(t10077 + t10081 - 1.*t10022*t5025 - 1.*t10012*t7946))*var2[3] - 0.5*(3.2*(t10019 + t10057 + t10134*t4919 + t10128*t5025)*t7812 + 3.2*t4910*(t10077 + t10081 - 1.*t10134*t5025 - 1.*t10128*t7946) + 3.2*(t10018*t4919 + t10022*t5025)*t8147 + 3.2*(-1.*t10018*t5025 - 1.*t10022*t7946)*t8181)*var2[4]);
  p_output1[3]=-0.5*(6.4*t7812*t8147 + 6.4*t4910*t8181)*var2[3]*var2[4];
  p_output1[4]=-0.384*t8147*var2[3]*var2[4];
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

#include "Ce1_vec4_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
