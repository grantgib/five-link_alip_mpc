/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 15:58:59 GMT-05:00
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
  double t4117;
  double t4114;
  double t4115;
  double t4118;
  double t4110;
  double t4116;
  double t4119;
  double t4128;
  double t4134;
  double t4135;
  double t4136;
  double t4137;
  double t4139;
  double t4151;
  double t4152;
  double t4153;
  double t4148;
  double t4149;
  double t4150;
  double t4154;
  double t4155;
  double t4156;
  double t4157;
  double t4158;
  double t4164;
  double t4171;
  double t4172;
  double t4173;
  double t4183;
  double t4185;
  double t4180;
  double t4184;
  double t4186;
  double t4187;
  double t4189;
  double t4190;
  double t4191;
  double t4192;
  double t4162;
  double t4163;
  double t4165;
  double t4166;
  double t4167;
  double t4181;
  double t4182;
  double t4188;
  double t4193;
  double t4194;
  double t4195;
  double t4196;
  double t4197;
  double t4203;
  double t4204;
  double t4205;
  double t4133;
  double t4138;
  double t4143;
  double t4144;
  double t4145;
  double t4146;
  double t4147;
  double t4160;
  double t4215;
  double t4222;
  double t4223;
  double t4224;
  double t4221;
  double t4225;
  double t4226;
  double t4227;
  double t4228;
  t4117 = Cos(var1[2]);
  t4114 = Cos(var1[3]);
  t4115 = Sin(var1[2]);
  t4118 = Sin(var1[3]);
  t4110 = Cos(var1[4]);
  t4116 = -1.*t4114*t4115;
  t4119 = -1.*t4117*t4118;
  t4128 = t4116 + t4119;
  t4134 = t4117*t4114;
  t4135 = -1.*t4115*t4118;
  t4136 = t4134 + t4135;
  t4137 = Sin(var1[4]);
  t4139 = t4110*t4128;
  t4151 = -1.*t4117*t4114;
  t4152 = t4115*t4118;
  t4153 = t4151 + t4152;
  t4148 = -1.*t4110;
  t4149 = 1. + t4148;
  t4150 = -0.4*t4149*t4128;
  t4154 = 0.4*t4153*t4137;
  t4155 = t4153*t4137;
  t4156 = t4139 + t4155;
  t4157 = -0.8*t4156;
  t4158 = t4150 + t4154 + t4157;
  t4164 = t4110*t4136;
  t4171 = t4114*t4115;
  t4172 = t4117*t4118;
  t4173 = t4171 + t4172;
  t4183 = Cos(var1[5]);
  t4185 = Sin(var1[5]);
  t4180 = Cos(var1[6]);
  t4184 = t4117*t4183;
  t4186 = -1.*t4115*t4185;
  t4187 = t4184 + t4186;
  t4189 = -1.*t4183*t4115;
  t4190 = -1.*t4117*t4185;
  t4191 = t4189 + t4190;
  t4192 = Sin(var1[6]);
  t4162 = -0.4*t4149*t4136;
  t4163 = 0.4*t4128*t4137;
  t4165 = t4128*t4137;
  t4166 = t4164 + t4165;
  t4167 = -0.8*t4166;
  t4181 = -1.*t4180;
  t4182 = 1. + t4181;
  t4188 = 0.4*t4182*t4187;
  t4193 = -0.4*t4191*t4192;
  t4194 = t4180*t4187;
  t4195 = t4191*t4192;
  t4196 = t4194 + t4195;
  t4197 = 0.8*t4196;
  t4203 = t4183*t4115;
  t4204 = t4117*t4185;
  t4205 = t4203 + t4204;
  t4133 = 0.4*t4110*t4128;
  t4138 = -0.4*t4136*t4137;
  t4143 = -1.*t4136*t4137;
  t4144 = t4139 + t4143;
  t4145 = -0.8*t4144;
  t4146 = t4133 + t4138 + t4145;
  t4147 = var2[4]*t4146;
  t4160 = var2[3]*t4158;
  t4215 = t4180*t4191;
  t4222 = -1.*t4117*t4183;
  t4223 = t4115*t4185;
  t4224 = t4222 + t4223;
  t4221 = 0.4*t4182*t4191;
  t4225 = -0.4*t4224*t4192;
  t4226 = t4224*t4192;
  t4227 = t4215 + t4226;
  t4228 = 0.8*t4227;
  p_output1[0]=var2[2];
  p_output1[1]=t4147 + t4160 + t4158*var2[2];
  p_output1[2]=(t4162 + t4163 + t4167 + t4188 + t4193 + t4197)*var2[2] + (t4162 + t4163 + t4167)*var2[3] + (0.4*t4110*t4136 - 0.4*t4137*t4173 - 0.8*(t4164 - 1.*t4137*t4173))*var2[4] + (t4188 + t4193 + t4197)*var2[5] + (-0.4*t4180*t4187 + 0.4*t4192*t4205 + 0.8*(t4194 - 1.*t4192*t4205))*var2[6];
  p_output1[3]=t4147 + t4160 + (t4150 + t4154 + t4157 + t4221 + t4225 + t4228)*var2[2] + (t4221 + t4225 + t4228)*var2[5] + (-0.4*t4180*t4191 + 0.4*t4187*t4192 + 0.8*(-1.*t4187*t4192 + t4215))*var2[6];
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
