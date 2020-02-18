/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:21 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t786;
  double t861;
  double t762;
  double t779;
  double t712;
  double t765;
  double t794;
  double t800;
  double t852;
  double t859;
  double t860;
  double t904;
  double t905;
  double t906;
  double t763;
  double t783;
  double t784;
  double t785;
  double t873;
  double t888;
  double t889;
  double t923;
  double t924;
  double t925;
  double t912;
  double t919;
  double t920;
  double t921;
  double t922;
  double t926;
  double t936;
  double t937;
  double t939;
  double t890;
  double t898;
  double t902;
  double t940;
  double t941;
  double t942;
  double t943;
  double t945;
  double t949;
  double t927;
  double t967;
  double t968;
  double t969;
  double t970;
  double t928;
  double t971;
  double t956;
  double t957;
  double t958;
  double t903;
  double t917;
  double t987;
  double t952;
  double t953;
  double t954;
  double t988;
  double t989;
  double t990;
  double t1014;
  double t1015;
  double t1016;
  double t999;
  double t1000;
  double t1001;
  double t1003;
  double t1004;
  double t1009;
  double t1013;
  double t1017;
  double t1037;
  double t1038;
  double t1022;
  double t1040;
  double t1041;
  double t1024;
  t786 = Cos(var1[4]);
  t861 = Sin(var1[4]);
  t762 = Sin(var1[2]);
  t779 = Sin(var1[3]);
  t712 = Cos(var1[3]);
  t765 = Cos(var1[2]);
  t794 = -1.*t786;
  t800 = 1. + t794;
  t852 = 0.4*t800;
  t859 = 0.64*t786;
  t860 = t852 + t859;
  t904 = t712*t786;
  t905 = -1.*t779*t861;
  t906 = t904 + t905;
  t763 = -1.*t712*t762;
  t783 = -1.*t765*t779;
  t784 = t763 + t783;
  t785 = 0.748*t784;
  t873 = t860*t861;
  t888 = -0.24*t786*t861;
  t889 = t873 + t888;
  t923 = -1.*t786*t779;
  t924 = -1.*t712*t861;
  t925 = t923 + t924;
  t912 = t765*t906;
  t919 = t860*t786;
  t920 = Power(t861,2);
  t921 = 0.24*t920;
  t922 = t919 + t921;
  t926 = t765*t925;
  t936 = t762*t925;
  t937 = t936 + t912;
  t939 = 3.2*t889*t937;
  t890 = t786*t779;
  t898 = t712*t861;
  t902 = t890 + t898;
  t940 = -1.*t712*t786;
  t941 = t779*t861;
  t942 = t940 + t941;
  t943 = t762*t942;
  t945 = t926 + t943;
  t949 = 3.2*t922*t945;
  t927 = -1.*t762*t906;
  t967 = -1.*t765*t712;
  t968 = t762*t779;
  t969 = t967 + t968;
  t970 = 0.748*t969;
  t928 = t926 + t927;
  t971 = -1.*t762*t925;
  t956 = Power(t786,2);
  t957 = -0.24*t956;
  t958 = t919 + t957;
  t903 = -1.*t762*t902;
  t917 = t903 + t912;
  t987 = 3.2*t889*t928;
  t952 = -1.*t860*t861;
  t953 = 0.24*t786*t861;
  t954 = t952 + t953;
  t988 = t765*t942;
  t989 = t971 + t988;
  t990 = 3.2*t922*t989;
  t1014 = t712*t860;
  t1015 = -0.24*t779*t861;
  t1016 = t1014 + t1015;
  t999 = -1.*t860*t779;
  t1000 = -0.24*t712*t861;
  t1001 = t999 + t1000;
  t1003 = t860*t779;
  t1004 = 0.24*t712*t861;
  t1009 = t1003 + t1004;
  t1013 = t1009*t906;
  t1017 = t925*t1016;
  t1037 = -0.24*t786*t779;
  t1038 = t1037 + t1000;
  t1022 = -1.*t925*t1009;
  t1040 = 0.24*t712*t786;
  t1041 = t1040 + t1015;
  t1024 = -1.*t1016*t942;
  p_output1[0]=var2[3]*(-0.5*(t785 + 3.2*t889*t917 + 3.2*t922*t928)*var2[2] - 0.5*(t785 + t939 + t949)*var2[3] - 0.5*(t939 + t949 + 3.2*t937*t954 + 3.2*(t765*t902 + t762*t906)*t958)*var2[4]);
  p_output1[1]=var2[3]*(-0.5*(3.2*t889*(-1.*t765*t902 + t927) + t970 + 3.2*t922*(-1.*t765*t906 + t971))*var2[2] - 0.5*(t970 + t987 + t990)*var2[3] - 0.5*(3.2*t928*t954 + 3.2*t917*t958 + t987 + t990)*var2[4]);
  p_output1[2]=var2[3]*(-0.5*(3.2*(t1013 + t1017 + t1016*t902 + t1001*t906)*t922 + 3.2*t889*(t1022 + t1024 - 1.*t1016*t906 - 1.*t1001*t925))*var2[3] - 0.5*(3.2*(t1013 + t1017 + t1041*t902 + t1038*t906)*t922 + 3.2*t889*(t1022 + t1024 - 1.*t1041*t906 - 1.*t1038*t925) + 3.2*(t1009*t902 + t1016*t906)*t954 + 3.2*(-1.*t1009*t906 - 1.*t1016*t925)*t958)*var2[4]);
  p_output1[3]=-0.5*(6.4*t922*t954 + 6.4*t889*t958)*var2[3]*var2[4];
  p_output1[4]=-0.384*t954*var2[3]*var2[4];
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
