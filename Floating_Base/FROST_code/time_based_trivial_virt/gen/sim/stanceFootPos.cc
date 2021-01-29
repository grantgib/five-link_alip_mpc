/*
 * Automatically Generated from Mathematica.
 * Fri 17 Apr 2020 16:58:31 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t4452;
  double t4449;
  double t4450;
  double t4453;
  double t4443;
  double t4451;
  double t4454;
  double t4455;
  double t4457;
  double t4458;
  double t4459;
  double t4460;
  double t4447;
  double t4448;
  double t4468;
  double t4469;
  double t4470;
  t4452 = Cos(var1[2]);
  t4449 = Cos(var1[3]);
  t4450 = Sin(var1[2]);
  t4453 = Sin(var1[3]);
  t4443 = Cos(var1[4]);
  t4451 = t4449*t4450;
  t4454 = t4452*t4453;
  t4455 = t4451 + t4454;
  t4457 = t4452*t4449;
  t4458 = -1.*t4450*t4453;
  t4459 = t4457 + t4458;
  t4460 = Sin(var1[4]);
  t4447 = -1.*t4443;
  t4448 = 1. + t4447;
  t4468 = -1.*t4449*t4450;
  t4469 = -1.*t4452*t4453;
  t4470 = t4468 + t4469;
  p_output1[0]=0.4*t4448*t4455 - 0.4*t4459*t4460 + 0.8*(t4443*t4455 + t4459*t4460) + var1[0];
  p_output1[1]=0;
  p_output1[2]=0.4*t4448*t4459 - 0.4*t4460*t4470 + 0.8*(t4443*t4459 + t4460*t4470) + var1[1];
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "stanceFootPos.hh"

namespace SymExpression
{

void stanceFootPos_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
