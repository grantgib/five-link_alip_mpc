/*
 * Automatically Generated from Mathematica.
 * Mon 6 Apr 2020 23:57:38 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t1213;
  double t1214;
  double t1220;
  double t1221;
  double t1225;
  double t1226;
  double t1229;
  double t1230;
  double t1232;
  double t1233;
  double t1234;
  double t1237;
  double t1238;
  double t1239;
  double t1240;
  double t1241;
  double t1244;
  double t1245;
  double t1255;
  double t1258;
  double t1259;
  double t1262;
  t1213 = -1.*var5[1];
  t1214 = var5[0] + t1213;
  t1220 = Power(t1214,-5);
  t1221 = -1. + var6[0];
  t1225 = -1. + var7[0];
  t1226 = 1/t1225;
  t1229 = -1.*var1[0];
  t1230 = t1229 + var1[1];
  t1232 = t1221*t1226*t1230;
  t1233 = t1213 + var1[0] + t1232;
  t1234 = Power(t1233,4);
  t1237 = Power(t1214,-4);
  t1238 = Power(t1233,3);
  t1239 = 1/t1214;
  t1240 = -1.*t1239*t1233;
  t1241 = 1. + t1240;
  t1244 = Power(t1214,-3);
  t1245 = Power(t1233,2);
  t1255 = Power(t1241,2);
  t1258 = Power(t1214,-2);
  t1259 = Power(t1241,3);
  t1262 = Power(t1241,4);
  p_output1[0]=var3[3] + 5.*t1239*t1262*var4[0] + 20.*t1233*t1258*t1259*var4[4] - 5.*t1239*t1262*var4[4] + 30.*t1244*t1245*t1255*var4[8] - 20.*t1233*t1258*t1259*var4[8] + 20.*t1237*t1238*t1241*var4[12] - 30.*t1244*t1245*t1255*var4[12] + 5.*t1220*t1234*var4[16] - 20.*t1237*t1238*t1241*var4[16] - 5.*t1220*t1234*var4[20];
  p_output1[1]=var3[4] + 5.*t1239*t1262*var4[1] + 20.*t1233*t1258*t1259*var4[5] - 5.*t1239*t1262*var4[5] + 30.*t1244*t1245*t1255*var4[9] - 20.*t1233*t1258*t1259*var4[9] + 20.*t1237*t1238*t1241*var4[13] - 30.*t1244*t1245*t1255*var4[13] + 5.*t1220*t1234*var4[17] - 20.*t1237*t1238*t1241*var4[17] - 5.*t1220*t1234*var4[21];
  p_output1[2]=var3[5] + 5.*t1239*t1262*var4[2] + 20.*t1233*t1258*t1259*var4[6] - 5.*t1239*t1262*var4[6] + 30.*t1244*t1245*t1255*var4[10] - 20.*t1233*t1258*t1259*var4[10] + 20.*t1237*t1238*t1241*var4[14] - 30.*t1244*t1245*t1255*var4[14] + 5.*t1220*t1234*var4[18] - 20.*t1237*t1238*t1241*var4[18] - 5.*t1220*t1234*var4[22];
  p_output1[3]=var3[6] + 5.*t1239*t1262*var4[3] + 20.*t1233*t1258*t1259*var4[7] - 5.*t1239*t1262*var4[7] + 30.*t1244*t1245*t1255*var4[11] - 20.*t1233*t1258*t1259*var4[11] + 20.*t1237*t1238*t1241*var4[15] - 30.*t1244*t1245*t1255*var4[15] + 5.*t1220*t1234*var4[19] - 20.*t1237*t1238*t1241*var4[19] - 5.*t1220*t1234*var4[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "d1y_time_RightStance.hh"

namespace RightStance
{

void d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
