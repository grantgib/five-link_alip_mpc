/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:25 GMT-05:00
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
  double t1080;
  double t1068;
  double t1069;
  double t1081;
  double t1057;
  double t1070;
  double t1085;
  double t1089;
  double t1090;
  double t1091;
  double t1103;
  double t1104;
  double t1105;
  double t1106;
  double t1107;
  double t1092;
  double t1093;
  double t1094;
  double t1116;
  double t1120;
  double t1121;
  double t1137;
  double t1139;
  double t1141;
  double t1142;
  double t1143;
  double t1152;
  double t1155;
  double t1158;
  double t1145;
  double t1148;
  double t1149;
  double t1150;
  double t1151;
  double t1159;
  double t1160;
  double t1161;
  double t1162;
  t1080 = Cos(var1[5]);
  t1068 = Cos(var1[6]);
  t1069 = Sin(var1[5]);
  t1081 = Sin(var1[6]);
  t1057 = Cos(var1[2]);
  t1070 = -1.*t1068*t1069;
  t1085 = -1.*t1080*t1081;
  t1089 = t1070 + t1085;
  t1090 = t1057*t1089;
  t1091 = Sin(var1[2]);
  t1103 = -1.*t1080*t1068;
  t1104 = t1069*t1081;
  t1105 = t1103 + t1104;
  t1106 = t1091*t1105;
  t1107 = t1090 + t1106;
  t1092 = t1080*t1068;
  t1093 = -1.*t1069*t1081;
  t1094 = t1092 + t1093;
  t1116 = -1.*t1091*t1089;
  t1120 = t1057*t1105;
  t1121 = t1116 + t1120;
  t1137 = -1.*t1068;
  t1139 = 1. + t1137;
  t1141 = 0.4*t1139;
  t1142 = 0.64*t1068;
  t1143 = t1141 + t1142;
  t1152 = t1080*t1143;
  t1155 = -0.24*t1069*t1081;
  t1158 = t1152 + t1155;
  t1145 = -0.24*t1080*t1081;
  t1148 = t1143*t1069;
  t1149 = 0.24*t1080*t1081;
  t1150 = t1148 + t1149;
  t1151 = t1150*t1094;
  t1159 = t1089*t1158;
  t1160 = t1068*t1069;
  t1161 = t1080*t1081;
  t1162 = t1160 + t1161;
  p_output1[0]=var2[6]*(-0.384*(t1090 - 1.*t1091*t1094)*var2[2] - 0.384*t1107*var2[5] - 0.384*t1107*var2[6]);
  p_output1[1]=var2[6]*(-0.384*(-1.*t1057*t1094 + t1116)*var2[2] - 0.384*t1121*var2[5] - 0.384*t1121*var2[6]);
  p_output1[2]=var2[6]*(-0.384*(t1094*(-1.*t1069*t1143 + t1145) + t1151 + t1159 + t1158*t1162)*var2[5] - 0.384*(t1094*(-0.24*t1068*t1069 + t1145) + t1151 + t1159 + (0.24*t1068*t1080 + t1155)*t1162)*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.384*(0.24*t1068*t1081 - 1.*t1081*t1143)*Power(var2[6],2);
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

#include "Ce1_vec7_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
