/*
 * Automatically Generated from Mathematica.
 * Wed 26 Aug 2020 15:03:28 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t3086;
  double t3081;
  double t3082;
  double t3087;
  double t1971;
  double t3083;
  double t3088;
  double t3089;
  double t3100;
  double t3101;
  double t3102;
  double t3103;
  double t3076;
  double t3077;
  double t3131;
  double t3132;
  double t3133;
  double t3130;
  double t3134;
  double t3135;
  double t3136;
  double t3137;
  double t3138;
  double t3139;
  double t3144;
  double t3145;
  double t3146;
  double t3147;
  double t3148;
  double t3149;
  double t3152;
  double t3153;
  double t3154;
  double t3155;
  double t3156;
  double t3157;
  double t3158;
  double t3171;
  double t3172;
  double t3173;
  double t3170;
  double t3174;
  double t3175;
  double t3176;
  double t3177;
  double t3178;
  double t3169;
  double t3179;
  double t3180;
  double t3181;
  double t3191;
  double t3193;
  double t3198;
  double t3199;
  double t3200;
  double t3201;
  double t3202;
  double t3208;
  double t3209;
  double t3210;
  double t3211;
  double t3212;
  double t3213;
  double t3207;
  double t3214;
  double t3215;
  double t3216;
  t3086 = Cos(var1[2]);
  t3081 = Cos(var1[3]);
  t3082 = Sin(var1[2]);
  t3087 = Sin(var1[3]);
  t1971 = Cos(var1[4]);
  t3083 = t3081*t3082;
  t3088 = t3086*t3087;
  t3089 = t3083 + t3088;
  t3100 = t3086*t3081;
  t3101 = -1.*t3082*t3087;
  t3102 = t3100 + t3101;
  t3103 = Sin(var1[4]);
  t3076 = -1.*t1971;
  t3077 = 1. + t3076;
  t3131 = -1.*t3081*t3082;
  t3132 = -1.*t3086*t3087;
  t3133 = t3131 + t3132;
  t3130 = 0.4*t3077*t3102;
  t3134 = -0.4*t3133*t3103;
  t3135 = t1971*t3102;
  t3136 = t3133*t3103;
  t3137 = t3135 + t3136;
  t3138 = 0.8*t3137;
  t3139 = t3130 + t3134 + t3138;
  t3144 = -0.4*t1971*t3102;
  t3145 = 0.4*t3089*t3103;
  t3146 = -1.*t3089*t3103;
  t3147 = t3135 + t3146;
  t3148 = 0.8*t3147;
  t3149 = t3144 + t3145 + t3148;
  t3152 = -0.4*t1971*t3133;
  t3153 = 0.4*t3102*t3103;
  t3154 = t1971*t3133;
  t3155 = -1.*t3102*t3103;
  t3156 = t3154 + t3155;
  t3157 = 0.8*t3156;
  t3158 = t3152 + t3153 + t3157;
  t3171 = -1.*t3086*t3081;
  t3172 = t3082*t3087;
  t3173 = t3171 + t3172;
  t3170 = 0.4*t3077*t3133;
  t3174 = -0.4*t3173*t3103;
  t3175 = t3173*t3103;
  t3176 = t3154 + t3175;
  t3177 = 0.8*t3176;
  t3178 = t3170 + t3174 + t3177;
  t3169 = var2[4]*t3158;
  t3179 = var2[2]*t3178;
  t3180 = var2[3]*t3178;
  t3181 = t3169 + t3179 + t3180;
  t3191 = 0.4*t3133*t3103;
  t3193 = -1.*t3133*t3103;
  t3198 = -0.4*t1971*t3173;
  t3199 = t1971*t3173;
  t3200 = t3199 + t3193;
  t3201 = 0.8*t3200;
  t3202 = t3198 + t3191 + t3201;
  t3208 = 0.4*t3077*t3173;
  t3209 = -0.4*t3089*t3103;
  t3210 = t3089*t3103;
  t3211 = t3199 + t3210;
  t3212 = 0.8*t3211;
  t3213 = t3208 + t3209 + t3212;
  t3207 = var2[4]*t3202;
  t3214 = var2[2]*t3213;
  t3215 = var2[3]*t3213;
  t3216 = t3207 + t3214 + t3215;
  p_output1[0]=0.4*t3077*t3089 - 0.4*t3102*t3103 + 0.8*(t1971*t3089 + t3102*t3103) + var1[0] + var2[0] + t3139*var2[2] + t3181*var2[2] + t3139*var2[3] + t3181*var2[3] + t3149*var2[4] + var2[4]*(t3158*var2[2] + t3158*var2[3] + (0.4*t1971*t3089 + t3153 + 0.8*(-1.*t1971*t3089 + t3155))*var2[4]) + var3[0] + t3139*var3[2] + t3139*var3[3] + t3149*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t3130 + t3134 + t3138 + t3169 + t3179 + t3180 + var1[1] + var2[1] + t3216*var2[2] + t3216*var2[3] + var2[4]*(t3202*var2[2] + t3202*var2[3] + (0.4*t1971*t3102 + t3191 + 0.8*(-1.*t1971*t3102 + t3193))*var2[4]) + var3[1] + t3178*var3[2] + t3178*var3[3] + t3158*var3[4] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightToe_RightStance.hh"

namespace RightStance
{

void ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
