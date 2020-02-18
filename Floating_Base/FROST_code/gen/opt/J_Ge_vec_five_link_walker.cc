/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:22:57 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t986;
  double t1062;
  double t2008;
  double t2596;
  double t2644;
  double t2646;
  double t8325;
  double t8328;
  double t8371;
  double t8372;
  double t8373;
  double t8425;
  double t8473;
  double t8477;
  double t8478;
  double t8479;
  double t8513;
  double t8517;
  double t8521;
  double t8522;
  double t8523;
  double t8524;
  double t8327;
  double t8333;
  double t8334;
  double t8340;
  double t8426;
  double t8450;
  double t8456;
  double t8462;
  double t8465;
  double t8470;
  double t8471;
  double t8541;
  double t8542;
  double t8543;
  double t8514;
  double t8518;
  double t8519;
  double t8520;
  double t8525;
  double t8526;
  double t8527;
  double t8528;
  double t8532;
  double t8536;
  double t8537;
  double t8552;
  double t8553;
  double t8554;
  double t8539;
  double t8540;
  double t8544;
  double t8545;
  double t8546;
  double t8547;
  double t8548;
  double t8549;
  double t8561;
  double t8562;
  double t8563;
  double t8550;
  double t8551;
  double t8555;
  double t8556;
  double t8557;
  double t8558;
  double t8559;
  double t8560;
  double t8570;
  double t8571;
  double t8572;
  t986 = Cos(var1[2]);
  t1062 = Cos(var1[3]);
  t2008 = -1.*t986*t1062;
  t2596 = Sin(var1[2]);
  t2644 = Sin(var1[3]);
  t2646 = t2596*t2644;
  t8325 = t2008 + t2646;
  t8328 = Cos(var1[4]);
  t8371 = t1062*t2596;
  t8372 = t986*t2644;
  t8373 = t8371 + t8372;
  t8425 = Sin(var1[4]);
  t8473 = Cos(var1[5]);
  t8477 = -1.*t986*t8473;
  t8478 = Sin(var1[5]);
  t8479 = t2596*t8478;
  t8513 = t8477 + t8479;
  t8517 = Cos(var1[6]);
  t8521 = t8473*t2596;
  t8522 = t986*t8478;
  t8523 = t8521 + t8522;
  t8524 = Sin(var1[6]);
  t8327 = -7.33788*t8325;
  t8333 = -1.*t8328;
  t8334 = 1. + t8333;
  t8340 = 0.4*t8334*t8325;
  t8426 = -0.4*t8373*t8425;
  t8450 = t8328*t8325;
  t8456 = t8373*t8425;
  t8462 = t8450 + t8456;
  t8465 = 0.64*t8462;
  t8470 = t8340 + t8426 + t8465;
  t8471 = -31.392000000000003*t8470;
  t8541 = -1.*t1062*t2596;
  t8542 = -1.*t986*t2644;
  t8543 = t8541 + t8542;
  t8514 = -7.33788*t8513;
  t8518 = -1.*t8517;
  t8519 = 1. + t8518;
  t8520 = 0.4*t8519*t8513;
  t8525 = -0.4*t8523*t8524;
  t8526 = t8517*t8513;
  t8527 = t8523*t8524;
  t8528 = t8526 + t8527;
  t8532 = 0.64*t8528;
  t8536 = t8520 + t8525 + t8532;
  t8537 = -31.392000000000003*t8536;
  t8552 = -1.*t8473*t2596;
  t8553 = -1.*t986*t8478;
  t8554 = t8552 + t8553;
  t8539 = t8327 + t8471;
  t8540 = -0.4*t8328*t8325;
  t8544 = 0.4*t8543*t8425;
  t8545 = -1.*t8543*t8425;
  t8546 = t8450 + t8545;
  t8547 = 0.64*t8546;
  t8548 = t8540 + t8544 + t8547;
  t8549 = -31.392000000000003*t8548;
  t8561 = t986*t1062;
  t8562 = -1.*t2596*t2644;
  t8563 = t8561 + t8562;
  t8550 = t8514 + t8537;
  t8551 = -0.4*t8517*t8513;
  t8555 = 0.4*t8554*t8524;
  t8556 = -1.*t8554*t8524;
  t8557 = t8526 + t8556;
  t8558 = 0.64*t8557;
  t8559 = t8551 + t8555 + t8558;
  t8560 = -31.392000000000003*t8559;
  t8570 = t986*t8473;
  t8571 = -1.*t2596*t8478;
  t8572 = t8570 + t8571;
  p_output1[0]=t8327 + t8471 + t8514 + t8537 + 28.252799999999997*t986;
  p_output1[1]=t8539;
  p_output1[2]=t8549;
  p_output1[3]=t8550;
  p_output1[4]=t8560;
  p_output1[5]=t8539;
  p_output1[6]=t8539;
  p_output1[7]=t8549;
  p_output1[8]=t8549;
  p_output1[9]=t8549;
  p_output1[10]=-31.392000000000003*(t8544 + 0.4*t8328*t8563 + 0.64*(t8545 - 1.*t8328*t8563));
  p_output1[11]=t8550;
  p_output1[12]=t8550;
  p_output1[13]=t8560;
  p_output1[14]=t8560;
  p_output1[15]=t8560;
  p_output1[16]=-31.392000000000003*(t8555 + 0.4*t8517*t8572 + 0.64*(t8556 - 1.*t8517*t8572));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_five_link_walker.hh"

namespace RightStance
{

void J_Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
