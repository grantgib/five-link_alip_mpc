/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:43 GMT-04:00
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
  double t4936;
  double t2138;
  double t4849;
  double t4945;
  double t5711;
  double t4923;
  double t4950;
  double t4957;
  double t1551;
  double t7728;
  double t7823;
  double t7878;
  double t7879;
  double t7887;
  double t8631;
  double t8643;
  double t8644;
  double t8645;
  double t8646;
  double t9180;
  double t9798;
  double t5049;
  double t5780;
  double t6255;
  double t6757;
  double t6867;
  double t7442;
  double t14949;
  double t14950;
  double t14951;
  double t14952;
  double t15001;
  double t15002;
  double t16064;
  double t16203;
  double t16423;
  double t16507;
  double t16520;
  double t16648;
  double t16929;
  double t17019;
  double t17100;
  double t17331;
  double t17363;
  double t17468;
  double t17517;
  double t16285;
  double t16287;
  double t16292;
  double t12877;
  double t13008;
  double t14662;
  double t16026;
  double t16058;
  double t7891;
  double t7986;
  double t8622;
  double t9539;
  double t9646;
  double t9724;
  double t15008;
  double t15032;
  double t15063;
  double t16063;
  double t16261;
  double t16293;
  double t16389;
  double t16392;
  double t16590;
  double t17063;
  double t17064;
  double t17400;
  double t17402;
  double t17418;
  double t17518;
  double t17536;
  double t17546;
  double t17608;
  double t17618;
  double t17638;
  double t17650;
  double t17655;
  double t17659;
  double t17663;
  double t17969;
  double t17987;
  double t17988;
  double t17990;
  double t17991;
  double t17087;
  double t17542;
  double t17634;
  double t17667;
  double t17668;
  double t17687;
  double t17691;
  double t17714;
  double t17760;
  double t17786;
  double t9439;
  double t9730;
  double t15003;
  double t15217;
  double t15752;
  double t18017;
  double t18018;
  double t18028;
  double t18033;
  double t18034;
  t4936 = Cos(var1[3]);
  t2138 = Cos(var1[4]);
  t4849 = Sin(var1[3]);
  t4945 = Sin(var1[4]);
  t5711 = Sin(var1[2]);
  t4923 = -1.*t2138*t4849;
  t4950 = -1.*t4936*t4945;
  t4957 = t4923 + t4950;
  t1551 = Cos(var1[2]);
  t7728 = -1.*t2138;
  t7823 = 1. + t7728;
  t7878 = 0.4*t7823;
  t7879 = 0.64*t2138;
  t7887 = t7878 + t7879;
  t8631 = t5711*t4957;
  t8643 = t4936*t2138;
  t8644 = -1.*t4849*t4945;
  t8645 = t8643 + t8644;
  t8646 = t1551*t8645;
  t9180 = t8631 + t8646;
  t9798 = t7887*t2138;
  t5049 = t1551*t4957;
  t5780 = -1.*t4936*t2138;
  t6255 = t4849*t4945;
  t6757 = t5780 + t6255;
  t6867 = t5711*t6757;
  t7442 = t5049 + t6867;
  t14949 = t2138*t4849;
  t14950 = t4936*t4945;
  t14951 = t14949 + t14950;
  t14952 = t1551*t14951;
  t15001 = t5711*t8645;
  t15002 = t14952 + t15001;
  t16064 = -1.*t5711*t8645;
  t16203 = t5049 + t16064;
  t16423 = t7887*t4849;
  t16507 = 0.24*t4936*t4945;
  t16520 = t16423 + t16507;
  t16648 = t4936*t7887;
  t16929 = -0.24*t4849*t4945;
  t17019 = t16648 + t16929;
  t17100 = -0.24*t2138*t4849;
  t17331 = -0.24*t4936*t4945;
  t17363 = t17100 + t17331;
  t17468 = 0.24*t4936*t2138;
  t17517 = t17468 + t16929;
  t16285 = -1.*t5711*t4957;
  t16287 = t1551*t6757;
  t16292 = t16285 + t16287;
  t12877 = Power(t2138,2);
  t13008 = -0.24*t12877;
  t14662 = t9798 + t13008;
  t16026 = -1.*t5711*t14951;
  t16058 = t16026 + t8646;
  t7891 = t7887*t4945;
  t7986 = -0.24*t2138*t4945;
  t8622 = t7891 + t7986;
  t9539 = -1.*t7887*t4945;
  t9646 = 0.24*t2138*t4945;
  t9724 = t9539 + t9646;
  t15008 = Power(t4945,2);
  t15032 = 0.24*t15008;
  t15063 = t9798 + t15032;
  t16063 = 3.2*t9180*t16058;
  t16261 = 3.2*t16203*t15002;
  t16293 = 3.2*t9180*t16292;
  t16389 = 3.2*t16203*t7442;
  t16392 = t16063 + t16261 + t16293 + t16389;
  t16590 = -1.*t16520*t8645;
  t17063 = -1.*t4957*t17019;
  t17064 = t16590 + t17063;
  t17400 = t17363*t8645;
  t17402 = t16520*t8645;
  t17418 = t4957*t17019;
  t17518 = t14951*t17517;
  t17536 = t17400 + t17402 + t17418 + t17518;
  t17546 = t16520*t14951;
  t17608 = t8645*t17019;
  t17618 = t17546 + t17608;
  t17638 = -1.*t4957*t17363;
  t17650 = -1.*t4957*t16520;
  t17655 = -1.*t8645*t17517;
  t17659 = -1.*t17019*t6757;
  t17663 = t17638 + t17650 + t17655 + t17659;
  t17969 = 3.2*t16203*t17064;
  t17987 = 3.2*t16203*t17536;
  t17988 = 3.2*t17618*t16292;
  t17990 = 3.2*t16058*t17663;
  t17991 = t17969 + t17987 + t17988 + t17990;
  t17087 = 3.2*t9180*t17064;
  t17542 = 3.2*t9180*t17536;
  t17634 = 3.2*t17618*t7442;
  t17667 = 3.2*t15002*t17663;
  t17668 = t17087 + t17542 + t17634 + t17667;
  t17687 = 3.2*t14662*t16058;
  t17691 = 3.2*t8622*t16203;
  t17714 = 3.2*t9724*t16203;
  t17760 = 3.2*t15063*t16292;
  t17786 = t17687 + t17691 + t17714 + t17760;
  t9439 = 3.2*t8622*t9180;
  t9730 = 3.2*t9724*t9180;
  t15003 = 3.2*t14662*t15002;
  t15217 = 3.2*t15063*t7442;
  t15752 = t9439 + t9730 + t15003 + t15217;
  t18017 = 3.2*t14662*t17064;
  t18018 = 3.2*t9724*t17618;
  t18028 = 3.2*t15063*t17536;
  t18033 = 3.2*t8622*t17663;
  t18034 = t18017 + t18018 + t18028 + t18033;
  p_output1[0]=var2[4]*(-0.5*(6.4*t15002*t9180 + 6.4*t7442*t9180)*var2[0] - 0.5*t16392*var2[1] - 0.5*t17668*var2[2] - 0.5*t15752*var2[3] - 0.384*t7442*var2[4]);
  p_output1[1]=var2[4]*(-0.5*t16392*var2[0] - 0.5*(6.4*t16058*t16203 + 6.4*t16203*t16292)*var2[1] - 0.5*t17991*var2[2] - 0.5*t17786*var2[3] - 0.384*t16292*var2[4]);
  p_output1[2]=var2[4]*(-0.5*t17668*var2[0] - 0.5*t17991*var2[1] - 0.5*(6.4*t17536*t17618 + 6.4*t17064*t17663)*var2[2] - 0.5*t18034*var2[3] - 0.384*t17536*var2[4]);
  p_output1[3]=var2[4]*(-0.5*t15752*var2[0] - 0.5*t17786*var2[1] - 0.5*t18034*var2[2] - 0.5*(6.4*t14662*t8622 + 6.4*t15063*t9724)*var2[3] - 0.384*t9724*var2[4]);
  p_output1[4]=(-0.384*t7442*var2[0] - 0.384*t16292*var2[1] - 0.384*t17536*var2[2] - 0.384*t9724*var2[3])*var2[4];
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

#include "Ce2_vec5_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
