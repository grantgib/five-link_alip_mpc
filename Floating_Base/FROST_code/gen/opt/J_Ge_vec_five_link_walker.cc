/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:52:43 GMT-04:00
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
  double t6872;
  double t8368;
  double t9585;
  double t11715;
  double t11811;
  double t12180;
  double t12231;
  double t12478;
  double t14396;
  double t14400;
  double t14404;
  double t14409;
  double t14513;
  double t14514;
  double t14515;
  double t14560;
  double t14561;
  double t14565;
  double t14569;
  double t14570;
  double t14571;
  double t14572;
  double t12473;
  double t14154;
  double t14244;
  double t14395;
  double t14494;
  double t14502;
  double t14506;
  double t14507;
  double t14509;
  double t14510;
  double t14512;
  double t14589;
  double t14590;
  double t14591;
  double t14564;
  double t14566;
  double t14567;
  double t14568;
  double t14573;
  double t14574;
  double t14575;
  double t14579;
  double t14583;
  double t14584;
  double t14585;
  double t14600;
  double t14601;
  double t14602;
  double t14587;
  double t14588;
  double t14592;
  double t14593;
  double t14594;
  double t14595;
  double t14596;
  double t14597;
  double t14609;
  double t14610;
  double t14611;
  double t14598;
  double t14599;
  double t14603;
  double t14604;
  double t14605;
  double t14606;
  double t14607;
  double t14608;
  double t14618;
  double t14619;
  double t14620;
  t6872 = Cos(var1[2]);
  t8368 = Cos(var1[3]);
  t9585 = -1.*t6872*t8368;
  t11715 = Sin(var1[2]);
  t11811 = Sin(var1[3]);
  t12180 = t11715*t11811;
  t12231 = t9585 + t12180;
  t12478 = Cos(var1[4]);
  t14396 = t8368*t11715;
  t14400 = t6872*t11811;
  t14404 = t14396 + t14400;
  t14409 = Sin(var1[4]);
  t14513 = Cos(var1[5]);
  t14514 = -1.*t6872*t14513;
  t14515 = Sin(var1[5]);
  t14560 = t11715*t14515;
  t14561 = t14514 + t14560;
  t14565 = Cos(var1[6]);
  t14569 = t14513*t11715;
  t14570 = t6872*t14515;
  t14571 = t14569 + t14570;
  t14572 = Sin(var1[6]);
  t12473 = -7.33788*t12231;
  t14154 = -1.*t12478;
  t14244 = 1. + t14154;
  t14395 = 0.4*t14244*t12231;
  t14494 = -0.4*t14404*t14409;
  t14502 = t12478*t12231;
  t14506 = t14404*t14409;
  t14507 = t14502 + t14506;
  t14509 = 0.64*t14507;
  t14510 = t14395 + t14494 + t14509;
  t14512 = -31.392000000000003*t14510;
  t14589 = -1.*t8368*t11715;
  t14590 = -1.*t6872*t11811;
  t14591 = t14589 + t14590;
  t14564 = -7.33788*t14561;
  t14566 = -1.*t14565;
  t14567 = 1. + t14566;
  t14568 = 0.4*t14567*t14561;
  t14573 = -0.4*t14571*t14572;
  t14574 = t14565*t14561;
  t14575 = t14571*t14572;
  t14579 = t14574 + t14575;
  t14583 = 0.64*t14579;
  t14584 = t14568 + t14573 + t14583;
  t14585 = -31.392000000000003*t14584;
  t14600 = -1.*t14513*t11715;
  t14601 = -1.*t6872*t14515;
  t14602 = t14600 + t14601;
  t14587 = t12473 + t14512;
  t14588 = -0.4*t12478*t12231;
  t14592 = 0.4*t14591*t14409;
  t14593 = -1.*t14591*t14409;
  t14594 = t14502 + t14593;
  t14595 = 0.64*t14594;
  t14596 = t14588 + t14592 + t14595;
  t14597 = -31.392000000000003*t14596;
  t14609 = t6872*t8368;
  t14610 = -1.*t11715*t11811;
  t14611 = t14609 + t14610;
  t14598 = t14564 + t14585;
  t14599 = -0.4*t14565*t14561;
  t14603 = 0.4*t14602*t14572;
  t14604 = -1.*t14602*t14572;
  t14605 = t14574 + t14604;
  t14606 = 0.64*t14605;
  t14607 = t14599 + t14603 + t14606;
  t14608 = -31.392000000000003*t14607;
  t14618 = t6872*t14513;
  t14619 = -1.*t11715*t14515;
  t14620 = t14618 + t14619;
  p_output1[0]=t12473 + t14512 + t14564 + t14585 + 28.252799999999997*t6872;
  p_output1[1]=t14587;
  p_output1[2]=t14597;
  p_output1[3]=t14598;
  p_output1[4]=t14608;
  p_output1[5]=t14587;
  p_output1[6]=t14587;
  p_output1[7]=t14597;
  p_output1[8]=t14597;
  p_output1[9]=t14597;
  p_output1[10]=-31.392000000000003*(t14592 + 0.4*t12478*t14611 + 0.64*(t14593 - 1.*t12478*t14611));
  p_output1[11]=t14598;
  p_output1[12]=t14598;
  p_output1[13]=t14608;
  p_output1[14]=t14608;
  p_output1[15]=t14608;
  p_output1[16]=-31.392000000000003*(t14603 + 0.4*t14565*t14620 + 0.64*(t14604 - 1.*t14565*t14620));
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
