/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:08:00 GMT-05:00
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
  double t181;
  double t211;
  double t222;
  double t808;
  double t1128;
  double t1320;
  double t1321;
  double t1536;
  double t1592;
  double t1635;
  double t1645;
  double t2023;
  double t2042;
  double t2235;
  double t2236;
  double t2293;
  double t2457;
  double t2706;
  double t2726;
  double t2769;
  double t2770;
  double t2846;
  double t4258;
  double t4323;
  double t4234;
  double t4331;
  double t4198;
  double t4307;
  double t4343;
  double t4345;
  double t4357;
  double t4363;
  double t4425;
  double t4440;
  double t4203;
  double t4214;
  double t4351;
  double t4457;
  double t4460;
  double t4462;
  double t4473;
  double t4559;
  double t4595;
  double t4646;
  double t4748;
  double t4796;
  double t5560;
  double t6015;
  double t6026;
  double t6027;
  double t5891;
  double t6155;
  double t6227;
  double t6234;
  double t6246;
  double t6247;
  t181 = -1.*var5[1];
  t211 = var5[0] + t181;
  t222 = Power(t211,-5);
  t808 = -1. + var6[0];
  t1128 = -1. + var7[0];
  t1320 = 1/t1128;
  t1321 = -1.*var1[0];
  t1536 = t1321 + var1[1];
  t1592 = t808*t1320*t1536;
  t1635 = t181 + var1[0] + t1592;
  t1645 = Power(t1635,4);
  t2023 = Power(t211,-4);
  t2042 = Power(t1635,3);
  t2235 = 1/t211;
  t2236 = -1.*t2235*t1635;
  t2293 = 1. + t2236;
  t2457 = Power(t211,-3);
  t2706 = Power(t1635,2);
  t2726 = Power(t2293,2);
  t2769 = Power(t211,-2);
  t2770 = Power(t2293,3);
  t2846 = Power(t2293,4);
  t4258 = Cos(var2[5]);
  t4323 = Sin(var2[2]);
  t4234 = Cos(var2[2]);
  t4331 = Sin(var2[5]);
  t4198 = Cos(var2[6]);
  t4307 = t4234*t4258;
  t4343 = -1.*t4323*t4331;
  t4345 = t4307 + t4343;
  t4357 = -1.*t4258*t4323;
  t4363 = -1.*t4234*t4331;
  t4425 = t4357 + t4363;
  t4440 = Sin(var2[6]);
  t4203 = -1.*t4198;
  t4214 = 1. + t4203;
  t4351 = 0.4*t4214*t4345;
  t4457 = -0.4*t4425*t4440;
  t4460 = t4198*t4345;
  t4462 = t4425*t4440;
  t4473 = t4460 + t4462;
  t4559 = 0.8*t4473;
  t4595 = t4351 + t4457 + t4559;
  t4646 = t4258*t4323;
  t4748 = t4234*t4331;
  t4796 = t4646 + t4748;
  t5560 = t4198*t4425;
  t6015 = -1.*t4234*t4258;
  t6026 = t4323*t4331;
  t6027 = t6015 + t6026;
  t5891 = 0.4*t4214*t4425;
  t6155 = -0.4*t6027*t4440;
  t6227 = t6027*t4440;
  t6234 = t5560 + t6227;
  t6246 = 0.8*t6234;
  t6247 = t5891 + t6155 + t6246;
  p_output1[0]=var3[2] + 5.*t2235*t2846*var4[0] + 20.*t1635*t2769*t2770*var4[4] - 5.*t2235*t2846*var4[4] + 30.*t2457*t2706*t2726*var4[8] - 20.*t1635*t2769*t2770*var4[8] + 20.*t2023*t2042*t2293*var4[12] - 30.*t2457*t2706*t2726*var4[12] + 5.*t1645*t222*var4[16] - 20.*t2023*t2042*t2293*var4[16] - 5.*t1645*t222*var4[20];
  p_output1[1]=var3[1] + 5.*t2235*t2846*var4[1] + 20.*t1635*t2769*t2770*var4[5] - 5.*t2235*t2846*var4[5] + 30.*t2457*t2706*t2726*var4[9] - 20.*t1635*t2769*t2770*var4[9] + 20.*t2023*t2042*t2293*var4[13] - 30.*t2457*t2706*t2726*var4[13] + 5.*t1645*t222*var4[17] - 20.*t2023*t2042*t2293*var4[17] - 5.*t1645*t222*var4[21];
  p_output1[2]=var3[0] + t4595*var3[2] + t4595*var3[5] + (-0.4*t4198*t4345 + 0.4*t4440*t4796 + 0.8*(t4460 - 1.*t4440*t4796))*var3[6] + 5.*t2235*t2846*var4[2] + 20.*t1635*t2769*t2770*var4[6] - 5.*t2235*t2846*var4[6] + 30.*t2457*t2706*t2726*var4[10] - 20.*t1635*t2769*t2770*var4[10] + 20.*t2023*t2042*t2293*var4[14] - 30.*t2457*t2706*t2726*var4[14] + 5.*t1645*t222*var4[18] - 20.*t2023*t2042*t2293*var4[18] - 5.*t1645*t222*var4[22];
  p_output1[3]=var3[1] + t6247*var3[2] + t6247*var3[5] + (-0.4*t4198*t4425 + 0.4*t4345*t4440 + 0.8*(-1.*t4345*t4440 + t5560))*var3[6] + 5.*t2235*t2846*var4[3] + 20.*t1635*t2769*t2770*var4[7] - 5.*t2235*t2846*var4[7] + 30.*t2457*t2706*t2726*var4[11] - 20.*t1635*t2769*t2770*var4[11] + 20.*t2023*t2042*t2293*var4[15] - 30.*t2457*t2706*t2726*var4[15] + 5.*t1645*t222*var4[19] - 20.*t2023*t2042*t2293*var4[19] - 5.*t1645*t222*var4[23];
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
