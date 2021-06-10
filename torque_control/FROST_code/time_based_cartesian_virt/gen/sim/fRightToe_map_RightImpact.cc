/*
 * Automatically Generated from Mathematica.
 * Tue 9 Feb 2021 15:59:17 GMT-05:00
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
  double t4457;
  double t4459;
  double t4456;
  double t4460;
  double t4450;
  double t4458;
  double t4461;
  double t4462;
  double t4464;
  double t4465;
  double t4466;
  double t4467;
  double t4454;
  double t4455;
  double t4463;
  double t4468;
  double t4469;
  double t4470;
  double t4471;
  double t4472;
  double t4473;
  double t4475;
  double t4476;
  double t4477;
  double t4484;
  double t4485;
  double t4486;
  double t4483;
  double t4487;
  double t4488;
  double t4489;
  double t4490;
  double t4491;
  double t4492;
  t4457 = Cos(var1[3]);
  t4459 = Sin(var1[2]);
  t4456 = Cos(var1[2]);
  t4460 = Sin(var1[3]);
  t4450 = Cos(var1[4]);
  t4458 = t4456*t4457;
  t4461 = -1.*t4459*t4460;
  t4462 = t4458 + t4461;
  t4464 = -1.*t4457*t4459;
  t4465 = -1.*t4456*t4460;
  t4466 = t4464 + t4465;
  t4467 = Sin(var1[4]);
  t4454 = -1.*t4450;
  t4455 = 1. + t4454;
  t4463 = 0.4*t4455*t4462;
  t4468 = -0.4*t4466*t4467;
  t4469 = t4450*t4462;
  t4470 = t4466*t4467;
  t4471 = t4469 + t4470;
  t4472 = 0.8*t4471;
  t4473 = t4463 + t4468 + t4472;
  t4475 = t4457*t4459;
  t4476 = t4456*t4460;
  t4477 = t4475 + t4476;
  t4484 = -1.*t4456*t4457;
  t4485 = t4459*t4460;
  t4486 = t4484 + t4485;
  t4483 = 0.4*t4455*t4466;
  t4487 = -0.4*t4486*t4467;
  t4488 = t4450*t4466;
  t4489 = t4486*t4467;
  t4490 = t4488 + t4489;
  t4491 = 0.8*t4490;
  t4492 = t4483 + t4487 + t4491;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t4473;
  p_output1[3]=t4473;
  p_output1[4]=-0.4*t4450*t4462 + 0.4*t4467*t4477 + 0.8*(t4469 - 1.*t4467*t4477);
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=1.;
  p_output1[16]=t4492;
  p_output1[17]=t4492;
  p_output1[18]=-0.4*t4450*t4466 + 0.4*t4462*t4467 + 0.8*(-1.*t4462*t4467 + t4488);
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_map_RightImpact.hh"

namespace SymFunction
{

void fRightToe_map_RightImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
