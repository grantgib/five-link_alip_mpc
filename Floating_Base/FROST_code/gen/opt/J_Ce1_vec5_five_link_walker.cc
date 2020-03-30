/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:48:57 GMT-04:00
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
  double t5800;
  double t1721;
  double t1748;
  double t5801;
  double t1083;
  double t5664;
  double t5802;
  double t6824;
  double t6836;
  double t7030;
  double t7694;
  double t7701;
  double t7708;
  double t7729;
  double t7739;
  double t7858;
  double t7859;
  double t7875;
  double t8003;
  double t8528;
  double t7857;
  double t8532;
  double t8624;
  double t8647;
  double t8714;
  double t7082;
  double t7131;
  double t7132;
  double t8729;
  double t8815;
  double t8966;
  double t9012;
  double t9019;
  double t9420;
  double t9571;
  double t9574;
  double t9657;
  double t9705;
  double t9645;
  double t9709;
  double t9734;
  double t9758;
  double t9779;
  double t7437;
  double t7439;
  double t7801;
  double t7567;
  double t7743;
  double t10154;
  double t10166;
  double t10168;
  double t10174;
  double t10175;
  double t10176;
  double t10178;
  double t10179;
  double t11622;
  double t11672;
  double t14523;
  double t10194;
  double t10234;
  double t10238;
  double t10249;
  double t15852;
  double t15933;
  double t15664;
  double t15669;
  double t15849;
  double t16047;
  double t16391;
  double t16438;
  double t16466;
  double t16492;
  double t16542;
  double t16560;
  double t16579;
  double t16641;
  double t16642;
  double t17661;
  double t17703;
  double t18000;
  double t18019;
  double t18468;
  t5800 = Cos(var1[3]);
  t1721 = Cos(var1[4]);
  t1748 = Sin(var1[3]);
  t5801 = Sin(var1[4]);
  t1083 = Sin(var1[2]);
  t5664 = -1.*t1721*t1748;
  t5802 = -1.*t5800*t5801;
  t6824 = t5664 + t5802;
  t6836 = -1.*t1083*t6824;
  t7030 = Cos(var1[2]);
  t7694 = -1.*t5800*t1721;
  t7701 = t1748*t5801;
  t7708 = t7694 + t7701;
  t7729 = t7030*t7708;
  t7739 = t6836 + t7729;
  t7858 = t1721*t1748;
  t7859 = t5800*t5801;
  t7875 = t7858 + t7859;
  t8003 = t1083*t7875;
  t8528 = t8003 + t7729;
  t7857 = -0.384*var2[2]*t7739;
  t8532 = -0.384*var2[3]*t8528;
  t8624 = -0.384*var2[4]*t8528;
  t8647 = t7857 + t8532 + t8624;
  t8714 = var2[4]*t8647;
  t7082 = t5800*t1721;
  t7131 = -1.*t1748*t5801;
  t7132 = t7082 + t7131;
  t8729 = t7030*t6824;
  t8815 = -1.*t1083*t7132;
  t8966 = t8729 + t8815;
  t9012 = t1083*t7708;
  t9019 = t8729 + t9012;
  t9420 = -1.*t7030*t6824;
  t9571 = -1.*t1083*t7708;
  t9574 = t9420 + t9571;
  t9657 = t7030*t7875;
  t9705 = t9657 + t9571;
  t9645 = -0.384*var2[2]*t9574;
  t9709 = -0.384*var2[3]*t9705;
  t9734 = -0.384*var2[4]*t9705;
  t9758 = t9645 + t9709 + t9734;
  t9779 = var2[4]*t9758;
  t7437 = -1.*t7030*t7132;
  t7439 = t6836 + t7437;
  t7801 = -0.384*var2[4]*t7739;
  t7567 = -0.384*var2[2]*t7439;
  t7743 = -0.384*var2[3]*t7739;
  t10154 = -1.*t1721;
  t10166 = 1. + t10154;
  t10168 = 0.4*t10166;
  t10174 = 0.64*t1721;
  t10175 = t10168 + t10174;
  t10176 = -1.*t10175*t1748;
  t10178 = -0.24*t5800*t5801;
  t10179 = t10176 + t10178;
  t11622 = t5800*t10175;
  t11672 = -0.24*t1748*t5801;
  t14523 = t11622 + t11672;
  t10194 = t10175*t1748;
  t10234 = 0.24*t5800*t5801;
  t10238 = t10194 + t10234;
  t10249 = t6824*t10238;
  t15852 = -0.24*t1721*t1748;
  t15933 = t15852 + t10178;
  t15664 = 0.24*t1748*t5801;
  t15669 = t14523*t7708;
  t15849 = t6824*t10179;
  t16047 = t6824*t15933;
  t16391 = t15933*t7875;
  t16438 = t7132*t14523;
  t16466 = 0.24*t5800*t1721;
  t16492 = t16466 + t11672;
  t16542 = t7132*t16492;
  t16560 = -0.24*t5800*t1721;
  t16579 = t16560 + t15664;
  t16641 = t7132*t16579;
  t16642 = t15849 + t16047 + t10249 + t16391 + t16438 + t16542 + t16641 + t15669;
  t17661 = t10179*t7132;
  t17703 = t10238*t7132;
  t18000 = t6824*t14523;
  t18019 = t7875*t14523;
  t18468 = t17661 + t17703 + t18000 + t18019;
  p_output1[0]=(t7567 + t7743 + t7801)*var2[4];
  p_output1[1]=t8714;
  p_output1[2]=t8714;
  p_output1[3]=-0.384*t8966*var2[4];
  p_output1[4]=-0.384*t9019*var2[4];
  p_output1[5]=-0.384*t8966*var2[2] - 0.384*t9019*var2[3] - 0.768*t9019*var2[4];
  p_output1[6]=var2[4]*(-0.384*(t1083*t7132 + t9420)*var2[2] - 0.384*t9574*var2[3] - 0.384*t9574*var2[4]);
  p_output1[7]=t9779;
  p_output1[8]=t9779;
  p_output1[9]=-0.384*t7439*var2[4];
  p_output1[10]=t7801;
  p_output1[11]=t7567 + t7743 - 0.768*t7739*var2[4];
  p_output1[12]=var2[4]*(-0.384*(t10249 + t15669 + 2.*t10179*t6824 + 2.*t14523*t7132 + (t15664 - 1.*t10175*t5800)*t7132 + t10179*t7875)*var2[3] - 0.384*t16642*var2[4]);
  p_output1[13]=var2[4]*(-0.384*t16642*var2[3] - 0.384*(t10249 + t15669 + t16391 + t16641 + 2.*t15933*t6824 + 2.*t16492*t7132)*var2[4]);
  p_output1[14]=-0.384*t18468*var2[4];
  p_output1[15]=-0.384*t18468*var2[3] - 0.768*(t17703 + t18000 + t15933*t7132 + t16492*t7875)*var2[4];
  p_output1[16]=-0.384*(-1.*t10175*t1721 + 0.24*Power(t1721,2))*Power(var2[4],2);
  p_output1[17]=-0.768*(-1.*t10175*t5801 + 0.24*t1721*t5801)*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec5_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
