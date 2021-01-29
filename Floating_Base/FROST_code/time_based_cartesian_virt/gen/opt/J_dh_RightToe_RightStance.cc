/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:44 GMT-05:00
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
  double t340;
  double t286;
  double t287;
  double t341;
  double t280;
  double t334;
  double t399;
  double t496;
  double t520;
  double t550;
  double t551;
  double t563;
  double t611;
  double t1252;
  double t1278;
  double t1294;
  double t1104;
  double t1108;
  double t1238;
  double t1306;
  double t1307;
  double t1332;
  double t1351;
  double t1403;
  double t497;
  double t609;
  double t681;
  double t738;
  double t780;
  double t831;
  double t881;
  double t1407;
  double t1526;
  double t1703;
  double t1995;
  double t1996;
  double t2017;
  double t3713;
  double t3730;
  double t3761;
  double t3783;
  double t3799;
  double t3833;
  double t3948;
  double t4408;
  double t4719;
  double t4791;
  double t5056;
  double t5064;
  double t5401;
  double t5419;
  double t4222;
  double t4262;
  double t4447;
  double t4452;
  double t4615;
  double t4632;
  double t4661;
  double t5437;
  double t5492;
  double t5658;
  t340 = Cos(var1[2]);
  t286 = Cos(var1[3]);
  t287 = Sin(var1[2]);
  t341 = Sin(var1[3]);
  t280 = Cos(var1[4]);
  t334 = -1.*t286*t287;
  t399 = -1.*t340*t341;
  t496 = t334 + t399;
  t520 = t340*t286;
  t550 = -1.*t287*t341;
  t551 = t520 + t550;
  t563 = Sin(var1[4]);
  t611 = t280*t496;
  t1252 = -1.*t340*t286;
  t1278 = t287*t341;
  t1294 = t1252 + t1278;
  t1104 = -1.*t280;
  t1108 = 1. + t1104;
  t1238 = 0.4*t1108*t496;
  t1306 = -0.4*t1294*t563;
  t1307 = t1294*t563;
  t1332 = t611 + t1307;
  t1351 = 0.8*t1332;
  t1403 = t1238 + t1306 + t1351;
  t497 = -0.4*t280*t496;
  t609 = 0.4*t551*t563;
  t681 = -1.*t551*t563;
  t738 = t611 + t681;
  t780 = 0.8*t738;
  t831 = t497 + t609 + t780;
  t881 = var2[4]*t831;
  t1407 = var2[2]*t1403;
  t1526 = var2[3]*t1403;
  t1703 = t881 + t1407 + t1526;
  t1995 = t286*t287;
  t1996 = t340*t341;
  t2017 = t1995 + t1996;
  t3713 = 0.4*t1108*t551;
  t3730 = -0.4*t496*t563;
  t3761 = t280*t551;
  t3783 = t496*t563;
  t3799 = t3761 + t3783;
  t3833 = 0.8*t3799;
  t3948 = t3713 + t3730 + t3833;
  t4408 = t280*t1294;
  t4719 = 0.4*t1108*t1294;
  t4791 = -0.4*t2017*t563;
  t5056 = t2017*t563;
  t5064 = t4408 + t5056;
  t5401 = 0.8*t5064;
  t5419 = t4719 + t4791 + t5401;
  t4222 = -0.4*t280*t1294;
  t4262 = 0.4*t496*t563;
  t4447 = -1.*t496*t563;
  t4452 = t4408 + t4447;
  t4615 = 0.8*t4452;
  t4632 = t4222 + t4262 + t4615;
  t4661 = var2[4]*t4632;
  t5437 = var2[2]*t5419;
  t5492 = var2[3]*t5419;
  t5658 = t4661 + t5437 + t5492;
  p_output1[0]=t1703;
  p_output1[1]=t1703;
  p_output1[2]=t831*var2[2] + t831*var2[3] + (0.4*t2017*t280 + t609 + 0.8*(-1.*t2017*t280 + t681))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t3948;
  p_output1[5]=t3948;
  p_output1[6]=-0.4*t280*t551 + 0.4*t2017*t563 + 0.8*(t3761 - 1.*t2017*t563);
  p_output1[7]=t5658;
  p_output1[8]=t5658;
  p_output1[9]=t4632*var2[2] + t4632*var2[3] + (t4262 + 0.4*t280*t551 + 0.8*(t4447 - 1.*t280*t551))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t1403;
  p_output1[12]=t1403;
  p_output1[13]=t831;
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
