/*
 * Automatically Generated from Mathematica.
 * Tue 7 Apr 2020 01:53:28 GMT-04:00
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
  double t1437;
  double t1434;
  double t1435;
  double t1438;
  double t1318;
  double t1436;
  double t1439;
  double t1440;
  double t1442;
  double t1443;
  double t1444;
  double t1445;
  double t1322;
  double t1428;
  double t1441;
  double t1446;
  double t1447;
  double t1448;
  double t1449;
  double t1450;
  double t1451;
  double t1453;
  double t1455;
  double t1457;
  t1437 = Cos(var1[2]);
  t1434 = Cos(var1[5]);
  t1435 = Sin(var1[2]);
  t1438 = Sin(var1[5]);
  t1318 = Cos(var1[6]);
  t1436 = -1.*t1434*t1435;
  t1439 = -1.*t1437*t1438;
  t1440 = t1436 + t1439;
  t1442 = -1.*t1437*t1434;
  t1443 = t1435*t1438;
  t1444 = t1442 + t1443;
  t1445 = Sin(var1[6]);
  t1322 = -1.*t1318;
  t1428 = 1. + t1322;
  t1441 = 0.4*t1428*t1440;
  t1446 = -0.4*t1444*t1445;
  t1447 = t1318*t1440;
  t1448 = t1444*t1445;
  t1449 = t1447 + t1448;
  t1450 = 0.8*t1449;
  t1451 = t1441 + t1446 + t1450;
  t1453 = t1437*t1434;
  t1455 = -1.*t1435*t1438;
  t1457 = t1453 + t1455;
  p_output1[0]=1.;
  p_output1[1]=t1451;
  p_output1[2]=t1451;
  p_output1[3]=-0.4*t1318*t1440 + 0.4*t1445*t1457 + 0.8*(t1447 - 1.*t1445*t1457);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_leftFootHeight_RightStance.hh"

namespace RightStance
{

void J_u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
