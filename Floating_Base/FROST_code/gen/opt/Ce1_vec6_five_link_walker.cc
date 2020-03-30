/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:25 GMT-04:00
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
  double t1130;
  double t4899;
  double t1075;
  double t1111;
  double t1074;
  double t1098;
  double t1131;
  double t2300;
  double t2316;
  double t2770;
  double t2771;
  double t5973;
  double t5977;
  double t5996;
  double t1076;
  double t1112;
  double t1122;
  double t1126;
  double t5011;
  double t5023;
  double t5947;
  double t6009;
  double t6010;
  double t6011;
  double t5997;
  double t6000;
  double t6001;
  double t6002;
  double t6008;
  double t6012;
  double t6023;
  double t6030;
  double t6049;
  double t5948;
  double t5957;
  double t5971;
  double t6050;
  double t6051;
  double t6057;
  double t6063;
  double t6064;
  double t6065;
  double t6013;
  double t6105;
  double t6106;
  double t6107;
  double t6108;
  double t6014;
  double t6109;
  double t6076;
  double t6077;
  double t6078;
  double t5972;
  double t5998;
  double t6127;
  double t6071;
  double t6073;
  double t6074;
  double t6128;
  double t6129;
  double t6130;
  double t6149;
  double t6150;
  double t6152;
  double t6139;
  double t6140;
  double t6141;
  double t6145;
  double t6146;
  double t6147;
  double t6148;
  double t6153;
  double t6181;
  double t6182;
  double t6161;
  double t6184;
  double t6185;
  double t6164;
  t1130 = Cos(var1[6]);
  t4899 = Sin(var1[6]);
  t1075 = Sin(var1[2]);
  t1111 = Sin(var1[5]);
  t1074 = Cos(var1[5]);
  t1098 = Cos(var1[2]);
  t1131 = -1.*t1130;
  t2300 = 1. + t1131;
  t2316 = 0.4*t2300;
  t2770 = 0.64*t1130;
  t2771 = t2316 + t2770;
  t5973 = t1074*t1130;
  t5977 = -1.*t1111*t4899;
  t5996 = t5973 + t5977;
  t1076 = -1.*t1074*t1075;
  t1112 = -1.*t1098*t1111;
  t1122 = t1076 + t1112;
  t1126 = 0.748*t1122;
  t5011 = t2771*t4899;
  t5023 = -0.24*t1130*t4899;
  t5947 = t5011 + t5023;
  t6009 = -1.*t1130*t1111;
  t6010 = -1.*t1074*t4899;
  t6011 = t6009 + t6010;
  t5997 = t1098*t5996;
  t6000 = t2771*t1130;
  t6001 = Power(t4899,2);
  t6002 = 0.24*t6001;
  t6008 = t6000 + t6002;
  t6012 = t1098*t6011;
  t6023 = t1075*t6011;
  t6030 = t6023 + t5997;
  t6049 = 3.2*t5947*t6030;
  t5948 = t1130*t1111;
  t5957 = t1074*t4899;
  t5971 = t5948 + t5957;
  t6050 = -1.*t1074*t1130;
  t6051 = t1111*t4899;
  t6057 = t6050 + t6051;
  t6063 = t1075*t6057;
  t6064 = t6012 + t6063;
  t6065 = 3.2*t6008*t6064;
  t6013 = -1.*t1075*t5996;
  t6105 = -1.*t1098*t1074;
  t6106 = t1075*t1111;
  t6107 = t6105 + t6106;
  t6108 = 0.748*t6107;
  t6014 = t6012 + t6013;
  t6109 = -1.*t1075*t6011;
  t6076 = Power(t1130,2);
  t6077 = -0.24*t6076;
  t6078 = t6000 + t6077;
  t5972 = -1.*t1075*t5971;
  t5998 = t5972 + t5997;
  t6127 = 3.2*t5947*t6014;
  t6071 = -1.*t2771*t4899;
  t6073 = 0.24*t1130*t4899;
  t6074 = t6071 + t6073;
  t6128 = t1098*t6057;
  t6129 = t6109 + t6128;
  t6130 = 3.2*t6008*t6129;
  t6149 = t1074*t2771;
  t6150 = -0.24*t1111*t4899;
  t6152 = t6149 + t6150;
  t6139 = -1.*t2771*t1111;
  t6140 = -0.24*t1074*t4899;
  t6141 = t6139 + t6140;
  t6145 = t2771*t1111;
  t6146 = 0.24*t1074*t4899;
  t6147 = t6145 + t6146;
  t6148 = t6147*t5996;
  t6153 = t6011*t6152;
  t6181 = -0.24*t1130*t1111;
  t6182 = t6181 + t6140;
  t6161 = -1.*t6011*t6147;
  t6184 = 0.24*t1074*t1130;
  t6185 = t6184 + t6150;
  t6164 = -1.*t6152*t6057;
  p_output1[0]=var2[5]*(-0.5*(t1126 + 3.2*t5947*t5998 + 3.2*t6008*t6014)*var2[2] - 0.5*(t1126 + t6049 + t6065)*var2[5] - 0.5*(t6049 + t6065 + 3.2*t6030*t6074 + 3.2*(t1098*t5971 + t1075*t5996)*t6078)*var2[6]);
  p_output1[1]=var2[5]*(-0.5*(3.2*t5947*(-1.*t1098*t5971 + t6013) + t6108 + 3.2*t6008*(-1.*t1098*t5996 + t6109))*var2[2] - 0.5*(t6108 + t6127 + t6130)*var2[5] - 0.5*(3.2*t6014*t6074 + 3.2*t5998*t6078 + t6127 + t6130)*var2[6]);
  p_output1[2]=var2[5]*(-0.5*(3.2*t6008*(t5996*t6141 + t6148 + t5971*t6152 + t6153) + 3.2*t5947*(-1.*t6011*t6141 - 1.*t5996*t6152 + t6161 + t6164))*var2[5] - 0.5*(3.2*t6074*(t5971*t6147 + t5996*t6152) + 3.2*t6078*(-1.*t5996*t6147 - 1.*t6011*t6152) + 3.2*t6008*(t6148 + t6153 + t5996*t6182 + t5971*t6185) + 3.2*t5947*(t6161 + t6164 - 1.*t6011*t6182 - 1.*t5996*t6185))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.5*(6.4*t6008*t6074 + 6.4*t5947*t6078)*var2[5]*var2[6];
  p_output1[6]=-0.384*t6074*var2[5]*var2[6];
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

#include "Ce1_vec6_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
