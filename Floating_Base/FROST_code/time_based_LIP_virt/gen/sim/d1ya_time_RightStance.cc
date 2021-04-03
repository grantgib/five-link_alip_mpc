/*
 * Automatically Generated from Mathematica.
 * Wed 10 Feb 2021 16:00:56 GMT-05:00
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
  double t5382;
  double t3656;
  double t3968;
  double t5602;
  double t1011;
  double t5054;
  double t5912;
  double t5960;
  double t5998;
  double t6093;
  double t6176;
  double t6363;
  double t6618;
  double t6630;
  double t6640;
  double t6799;
  double t6801;
  double t6804;
  double t6783;
  double t6790;
  double t6808;
  double t6856;
  double t6991;
  double t6995;
  double t6983;
  double t6994;
  double t6996;
  double t6997;
  double t7019;
  double t7020;
  double t7043;
  double t7086;
  double t7095;
  double t7134;
  double t7137;
  double t7138;
  double t6795;
  double t6807;
  double t6881;
  double t6897;
  double t6907;
  double t6927;
  double t6931;
  double t6963;
  double t6964;
  double t7113;
  double t7114;
  double t7125;
  double t7130;
  double t7141;
  double t7142;
  double t7148;
  double t7152;
  double t7187;
  double t7211;
  double t7276;
  double t7302;
  double t7304;
  double t7309;
  double t7611;
  double t7613;
  double t7630;
  double t7639;
  double t7652;
  double t7653;
  double t7710;
  double t7712;
  double t7715;
  double t7716;
  double t7723;
  double t7497;
  double t7510;
  double t7511;
  double t7530;
  double t7550;
  double t7555;
  double t7572;
  double t7588;
  double t7736;
  double t7742;
  double t7745;
  double t7750;
  double t5977;
  double t6606;
  double t6999;
  double t7092;
  double t7096;
  double t7099;
  double t7919;
  double t7840;
  double t7844;
  double t7920;
  double t7926;
  t5382 = Cos(var1[2]);
  t3656 = Cos(var1[3]);
  t3968 = Sin(var1[2]);
  t5602 = Sin(var1[3]);
  t1011 = Cos(var1[4]);
  t5054 = -1.*t3656*t3968;
  t5912 = -1.*t5382*t5602;
  t5960 = t5054 + t5912;
  t5998 = t5382*t3656;
  t6093 = -1.*t3968*t5602;
  t6176 = t5998 + t6093;
  t6363 = Sin(var1[4]);
  t6618 = t1011*t5960;
  t6630 = -1.*t6176*t6363;
  t6640 = t6618 + t6630;
  t6799 = -1.*t5382*t3656;
  t6801 = t3968*t5602;
  t6804 = t6799 + t6801;
  t6783 = -1.*t1011;
  t6790 = 1. + t6783;
  t6808 = t6804*t6363;
  t6856 = t6618 + t6808;
  t6991 = Cos(var1[5]);
  t6995 = Sin(var1[5]);
  t6983 = Cos(var1[6]);
  t6994 = -1.*t6991*t3968;
  t6996 = -1.*t5382*t6995;
  t6997 = t6994 + t6996;
  t7019 = t5382*t6991;
  t7020 = -1.*t3968*t6995;
  t7043 = t7019 + t7020;
  t7086 = Sin(var1[6]);
  t7095 = t6983*t6997;
  t7134 = -1.*t5382*t6991;
  t7137 = t3968*t6995;
  t7138 = t7134 + t7137;
  t6795 = -0.4*t6790*t5960;
  t6807 = 0.4*t6804*t6363;
  t6881 = -0.8*t6856;
  t6897 = 0.748*t5960;
  t6907 = 0.4*t6790*t5960;
  t6927 = -0.4*t6804*t6363;
  t6931 = 0.64*t6856;
  t6963 = t6907 + t6927 + t6931;
  t6964 = 3.2*t6963;
  t7113 = 0.748*t6997;
  t7114 = -1.*t6983;
  t7125 = 1. + t7114;
  t7130 = 0.4*t7125*t6997;
  t7141 = -0.4*t7138*t7086;
  t7142 = t7138*t7086;
  t7148 = t7095 + t7142;
  t7152 = 0.64*t7148;
  t7187 = t7130 + t7141 + t7152;
  t7211 = 3.2*t7187;
  t7276 = t3656*t3968;
  t7302 = t5382*t5602;
  t7304 = t7276 + t7302;
  t7309 = t1011*t6176;
  t7611 = t6991*t3968;
  t7613 = t5382*t6995;
  t7630 = t7611 + t7613;
  t7639 = t6983*t7043;
  t7652 = -1.*t7630*t7086;
  t7653 = t7639 + t7652;
  t7710 = 0.4*t7125*t7043;
  t7712 = -0.4*t6997*t7086;
  t7715 = t6997*t7086;
  t7716 = t7639 + t7715;
  t7723 = 0.8*t7716;
  t7497 = -0.748*t6176;
  t7510 = 0.4*t6790*t6176;
  t7511 = -0.4*t5960*t6363;
  t7530 = t5960*t6363;
  t7550 = t7309 + t7530;
  t7555 = 0.64*t7550;
  t7572 = t7510 + t7511 + t7555;
  t7588 = -3.2*t7572;
  t7736 = -0.748*t7043;
  t7742 = 0.64*t7716;
  t7745 = t7710 + t7712 + t7742;
  t7750 = -3.2*t7745;
  t5977 = 0.4*t1011*t5960;
  t6606 = -0.4*t6176*t6363;
  t6999 = -0.4*t6983*t6997;
  t7092 = 0.4*t7043*t7086;
  t7096 = -1.*t7043*t7086;
  t7099 = t7095 + t7096;
  t7919 = 0.8*t7148;
  t7840 = -0.748*t5960;
  t7844 = -3.2*t6963;
  t7920 = -0.748*t6997;
  t7926 = -3.2*t7187;
  p_output1[0]=var2[2];
  p_output1[1]=(t6795 + t6807 + t6881 + 0.03125*(-2.88*t3968 + t6897 + t6964 + t7113 + t7211))*var2[2] + (t6795 + t6807 + t6881 + 0.03125*(t6897 + t6964))*var2[3] + (t5977 + t6606 + 0.1*(-0.4*t1011*t5960 + 0.4*t6176*t6363 + 0.64*t6640) - 0.8*t6640)*var2[4] + 0.03125*(t7113 + t7211)*var2[5] + 0.1*(t6999 + t7092 + 0.64*t7099)*var2[6];
  p_output1[2]=(t7710 + t7712 + t7723 + 0.03125*(-2.88*t5382 + t7497 + t7588 + t7736 + t7750))*var2[2] + 0.03125*(t7497 + t7588)*var2[3] + 0.1*(0.4*t1011*t6176 - 0.4*t6363*t7304 - 0.64*(-1.*t6363*t7304 + t7309))*var2[4] + (t7710 + t7712 + t7723 + 0.03125*(t7736 + t7750))*var2[5] + (-0.4*t6983*t7043 + 0.4*t7086*t7630 + 0.1*(0.4*t6983*t7043 - 0.4*t7086*t7630 - 0.64*t7653) + 0.8*t7653)*var2[6];
  p_output1[3]=(t7130 + t7141 + t7919 + 0.03125*(2.88*t3968 + t7840 + t7844 + t7920 + t7926))*var2[2] + 0.03125*(t7840 + t7844)*var2[3] + 0.1*(t5977 + t6606 - 0.64*t6640)*var2[4] + (t7130 + t7141 + t7919 + 0.03125*(t7920 + t7926))*var2[5] + (t6999 + t7092 + 0.1*(0.4*t6983*t6997 - 0.4*t7043*t7086 - 0.64*t7099) + 0.8*t7099)*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "d1ya_time_RightStance.hh"

namespace SymFunction
{

void d1ya_time_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
