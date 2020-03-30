/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:51:17 GMT-04:00
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
  double t18261;
  double t18251;
  double t18253;
  double t18263;
  double t18250;
  double t18260;
  double t18264;
  double t18265;
  double t18267;
  double t18268;
  double t18269;
  double t18271;
  double t18277;
  double t18325;
  double t18331;
  double t18332;
  double t18322;
  double t18323;
  double t18324;
  double t18333;
  double t18334;
  double t18335;
  double t18336;
  double t18338;
  double t18266;
  double t18276;
  double t18280;
  double t18281;
  double t18309;
  double t18310;
  double t18321;
  double t18339;
  double t18340;
  double t18344;
  double t18348;
  double t18349;
  double t18350;
  double t18362;
  double t18365;
  double t18366;
  double t18367;
  double t18384;
  double t18385;
  double t18386;
  double t18407;
  double t18554;
  double t18607;
  double t18656;
  double t18678;
  double t18697;
  double t18698;
  double t18395;
  double t18406;
  double t18408;
  double t18409;
  double t18410;
  double t18416;
  double t18540;
  double t18701;
  double t18702;
  double t18707;
  t18261 = Cos(var1[2]);
  t18251 = Cos(var1[3]);
  t18253 = Sin(var1[2]);
  t18263 = Sin(var1[3]);
  t18250 = Cos(var1[4]);
  t18260 = -1.*t18251*t18253;
  t18264 = -1.*t18261*t18263;
  t18265 = t18260 + t18264;
  t18267 = t18261*t18251;
  t18268 = -1.*t18253*t18263;
  t18269 = t18267 + t18268;
  t18271 = Sin(var1[4]);
  t18277 = t18250*t18265;
  t18325 = -1.*t18261*t18251;
  t18331 = t18253*t18263;
  t18332 = t18325 + t18331;
  t18322 = -1.*t18250;
  t18323 = 1. + t18322;
  t18324 = 0.4*t18323*t18265;
  t18333 = -0.4*t18332*t18271;
  t18334 = t18332*t18271;
  t18335 = t18277 + t18334;
  t18336 = 0.8*t18335;
  t18338 = t18324 + t18333 + t18336;
  t18266 = -0.4*t18250*t18265;
  t18276 = 0.4*t18269*t18271;
  t18280 = -1.*t18269*t18271;
  t18281 = t18277 + t18280;
  t18309 = 0.8*t18281;
  t18310 = t18266 + t18276 + t18309;
  t18321 = var2[4]*t18310;
  t18339 = var2[2]*t18338;
  t18340 = var2[3]*t18338;
  t18344 = t18321 + t18339 + t18340;
  t18348 = t18251*t18253;
  t18349 = t18261*t18263;
  t18350 = t18348 + t18349;
  t18362 = 0.4*t18323*t18269;
  t18365 = -0.4*t18265*t18271;
  t18366 = t18250*t18269;
  t18367 = t18265*t18271;
  t18384 = t18366 + t18367;
  t18385 = 0.8*t18384;
  t18386 = t18362 + t18365 + t18385;
  t18407 = t18250*t18332;
  t18554 = 0.4*t18323*t18332;
  t18607 = -0.4*t18350*t18271;
  t18656 = t18350*t18271;
  t18678 = t18407 + t18656;
  t18697 = 0.8*t18678;
  t18698 = t18554 + t18607 + t18697;
  t18395 = -0.4*t18250*t18332;
  t18406 = 0.4*t18265*t18271;
  t18408 = -1.*t18265*t18271;
  t18409 = t18407 + t18408;
  t18410 = 0.8*t18409;
  t18416 = t18395 + t18406 + t18410;
  t18540 = var2[4]*t18416;
  t18701 = var2[2]*t18698;
  t18702 = var2[3]*t18698;
  t18707 = t18540 + t18701 + t18702;
  p_output1[0]=t18344;
  p_output1[1]=t18344;
  p_output1[2]=t18310*var2[2] + t18310*var2[3] + (t18276 + 0.4*t18250*t18350 + 0.8*(t18280 - 1.*t18250*t18350))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t18386;
  p_output1[5]=t18386;
  p_output1[6]=-0.4*t18250*t18269 + 0.4*t18271*t18350 + 0.8*(-1.*t18271*t18350 + t18366);
  p_output1[7]=t18707;
  p_output1[8]=t18707;
  p_output1[9]=t18416*var2[2] + t18416*var2[3] + (0.4*t18250*t18269 + t18406 + 0.8*(-1.*t18250*t18269 + t18408))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t18338;
  p_output1[12]=t18338;
  p_output1[13]=t18310;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RightToe_RightStance.hh"

namespace RightStance
{

void J_dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
