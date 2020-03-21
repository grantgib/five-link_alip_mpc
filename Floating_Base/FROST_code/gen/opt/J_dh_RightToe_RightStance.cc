/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:36:23 GMT-04:00
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
  double t15436;
  double t15430;
  double t15431;
  double t15437;
  double t15429;
  double t15435;
  double t15438;
  double t15439;
  double t15441;
  double t15442;
  double t15443;
  double t15445;
  double t15447;
  double t15465;
  double t15466;
  double t15467;
  double t15462;
  double t15463;
  double t15464;
  double t15468;
  double t15469;
  double t15470;
  double t15471;
  double t15472;
  double t15440;
  double t15446;
  double t15448;
  double t15449;
  double t15459;
  double t15460;
  double t15461;
  double t15473;
  double t15474;
  double t15475;
  double t15478;
  double t15479;
  double t15480;
  double t15488;
  double t15489;
  double t15490;
  double t15491;
  double t15492;
  double t15493;
  double t15494;
  double t15503;
  double t15509;
  double t15510;
  double t15511;
  double t15512;
  double t15513;
  double t15514;
  double t15501;
  double t15502;
  double t15504;
  double t15505;
  double t15506;
  double t15507;
  double t15508;
  double t15515;
  double t15516;
  double t15517;
  t15436 = Cos(var1[2]);
  t15430 = Cos(var1[3]);
  t15431 = Sin(var1[2]);
  t15437 = Sin(var1[3]);
  t15429 = Cos(var1[4]);
  t15435 = -1.*t15430*t15431;
  t15438 = -1.*t15436*t15437;
  t15439 = t15435 + t15438;
  t15441 = t15436*t15430;
  t15442 = -1.*t15431*t15437;
  t15443 = t15441 + t15442;
  t15445 = Sin(var1[4]);
  t15447 = t15429*t15439;
  t15465 = -1.*t15436*t15430;
  t15466 = t15431*t15437;
  t15467 = t15465 + t15466;
  t15462 = -1.*t15429;
  t15463 = 1. + t15462;
  t15464 = 0.4*t15463*t15439;
  t15468 = -0.4*t15467*t15445;
  t15469 = t15467*t15445;
  t15470 = t15447 + t15469;
  t15471 = 0.8*t15470;
  t15472 = t15464 + t15468 + t15471;
  t15440 = -0.4*t15429*t15439;
  t15446 = 0.4*t15443*t15445;
  t15448 = -1.*t15443*t15445;
  t15449 = t15447 + t15448;
  t15459 = 0.8*t15449;
  t15460 = t15440 + t15446 + t15459;
  t15461 = var2[4]*t15460;
  t15473 = var2[2]*t15472;
  t15474 = var2[3]*t15472;
  t15475 = t15461 + t15473 + t15474;
  t15478 = t15430*t15431;
  t15479 = t15436*t15437;
  t15480 = t15478 + t15479;
  t15488 = 0.4*t15463*t15443;
  t15489 = -0.4*t15439*t15445;
  t15490 = t15429*t15443;
  t15491 = t15439*t15445;
  t15492 = t15490 + t15491;
  t15493 = 0.8*t15492;
  t15494 = t15488 + t15489 + t15493;
  t15503 = t15429*t15467;
  t15509 = 0.4*t15463*t15467;
  t15510 = -0.4*t15480*t15445;
  t15511 = t15480*t15445;
  t15512 = t15503 + t15511;
  t15513 = 0.8*t15512;
  t15514 = t15509 + t15510 + t15513;
  t15501 = -0.4*t15429*t15467;
  t15502 = 0.4*t15439*t15445;
  t15504 = -1.*t15439*t15445;
  t15505 = t15503 + t15504;
  t15506 = 0.8*t15505;
  t15507 = t15501 + t15502 + t15506;
  t15508 = var2[4]*t15507;
  t15515 = var2[2]*t15514;
  t15516 = var2[3]*t15514;
  t15517 = t15508 + t15515 + t15516;
  p_output1[0]=t15475;
  p_output1[1]=t15475;
  p_output1[2]=t15460*var2[2] + t15460*var2[3] + (t15446 + 0.4*t15429*t15480 + 0.8*(t15448 - 1.*t15429*t15480))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t15494;
  p_output1[5]=t15494;
  p_output1[6]=-0.4*t15429*t15443 + 0.4*t15445*t15480 + 0.8*(-1.*t15445*t15480 + t15490);
  p_output1[7]=t15517;
  p_output1[8]=t15517;
  p_output1[9]=t15507*var2[2] + t15507*var2[3] + (0.4*t15429*t15443 + t15502 + 0.8*(-1.*t15429*t15443 + t15504))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t15472;
  p_output1[12]=t15472;
  p_output1[13]=t15460;
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
