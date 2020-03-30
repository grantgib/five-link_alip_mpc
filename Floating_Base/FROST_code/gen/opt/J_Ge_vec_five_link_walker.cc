/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:50:45 GMT-04:00
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
  double t770;
  double t817;
  double t8389;
  double t8463;
  double t8730;
  double t9954;
  double t10688;
  double t10823;
  double t12340;
  double t12982;
  double t13060;
  double t13087;
  double t15968;
  double t16108;
  double t16137;
  double t16318;
  double t16607;
  double t17420;
  double t17832;
  double t17833;
  double t17838;
  double t17839;
  double t10812;
  double t10869;
  double t10952;
  double t10974;
  double t14543;
  double t14611;
  double t14612;
  double t14615;
  double t14618;
  double t14994;
  double t15068;
  double t17899;
  double t17903;
  double t17904;
  double t17084;
  double t17539;
  double t17779;
  double t17785;
  double t17840;
  double t17841;
  double t17852;
  double t17853;
  double t17863;
  double t17864;
  double t17866;
  double t17936;
  double t17938;
  double t17941;
  double t17891;
  double t17896;
  double t17909;
  double t17910;
  double t17911;
  double t17912;
  double t17923;
  double t17924;
  double t17961;
  double t17962;
  double t17963;
  double t17934;
  double t17935;
  double t17944;
  double t17952;
  double t17953;
  double t17958;
  double t17959;
  double t17960;
  double t18004;
  double t18009;
  double t18014;
  t770 = Cos(var1[2]);
  t817 = Cos(var1[3]);
  t8389 = -1.*t770*t817;
  t8463 = Sin(var1[2]);
  t8730 = Sin(var1[3]);
  t9954 = t8463*t8730;
  t10688 = t8389 + t9954;
  t10823 = Cos(var1[4]);
  t12340 = t817*t8463;
  t12982 = t770*t8730;
  t13060 = t12340 + t12982;
  t13087 = Sin(var1[4]);
  t15968 = Cos(var1[5]);
  t16108 = -1.*t770*t15968;
  t16137 = Sin(var1[5]);
  t16318 = t8463*t16137;
  t16607 = t16108 + t16318;
  t17420 = Cos(var1[6]);
  t17832 = t15968*t8463;
  t17833 = t770*t16137;
  t17838 = t17832 + t17833;
  t17839 = Sin(var1[6]);
  t10812 = -7.33788*t10688;
  t10869 = -1.*t10823;
  t10952 = 1. + t10869;
  t10974 = 0.4*t10952*t10688;
  t14543 = -0.4*t13060*t13087;
  t14611 = t10823*t10688;
  t14612 = t13060*t13087;
  t14615 = t14611 + t14612;
  t14618 = 0.64*t14615;
  t14994 = t10974 + t14543 + t14618;
  t15068 = -31.392000000000003*t14994;
  t17899 = -1.*t817*t8463;
  t17903 = -1.*t770*t8730;
  t17904 = t17899 + t17903;
  t17084 = -7.33788*t16607;
  t17539 = -1.*t17420;
  t17779 = 1. + t17539;
  t17785 = 0.4*t17779*t16607;
  t17840 = -0.4*t17838*t17839;
  t17841 = t17420*t16607;
  t17852 = t17838*t17839;
  t17853 = t17841 + t17852;
  t17863 = 0.64*t17853;
  t17864 = t17785 + t17840 + t17863;
  t17866 = -31.392000000000003*t17864;
  t17936 = -1.*t15968*t8463;
  t17938 = -1.*t770*t16137;
  t17941 = t17936 + t17938;
  t17891 = t10812 + t15068;
  t17896 = -0.4*t10823*t10688;
  t17909 = 0.4*t17904*t13087;
  t17910 = -1.*t17904*t13087;
  t17911 = t14611 + t17910;
  t17912 = 0.64*t17911;
  t17923 = t17896 + t17909 + t17912;
  t17924 = -31.392000000000003*t17923;
  t17961 = t770*t817;
  t17962 = -1.*t8463*t8730;
  t17963 = t17961 + t17962;
  t17934 = t17084 + t17866;
  t17935 = -0.4*t17420*t16607;
  t17944 = 0.4*t17941*t17839;
  t17952 = -1.*t17941*t17839;
  t17953 = t17841 + t17952;
  t17958 = 0.64*t17953;
  t17959 = t17935 + t17944 + t17958;
  t17960 = -31.392000000000003*t17959;
  t18004 = t770*t15968;
  t18009 = -1.*t8463*t16137;
  t18014 = t18004 + t18009;
  p_output1[0]=t10812 + t15068 + t17084 + t17866 + 28.252799999999997*t770;
  p_output1[1]=t17891;
  p_output1[2]=t17924;
  p_output1[3]=t17934;
  p_output1[4]=t17960;
  p_output1[5]=t17891;
  p_output1[6]=t17891;
  p_output1[7]=t17924;
  p_output1[8]=t17924;
  p_output1[9]=t17924;
  p_output1[10]=-31.392000000000003*(t17909 + 0.4*t10823*t17963 + 0.64*(t17910 - 1.*t10823*t17963));
  p_output1[11]=t17934;
  p_output1[12]=t17934;
  p_output1[13]=t17960;
  p_output1[14]=t17960;
  p_output1[15]=t17960;
  p_output1[16]=-31.392000000000003*(t17944 + 0.4*t17420*t18014 + 0.64*(t17952 - 1.*t17420*t18014));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_five_link_walker.hh"

namespace RightStance
{

void J_Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
