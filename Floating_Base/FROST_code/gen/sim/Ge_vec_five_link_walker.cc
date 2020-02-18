/*
 * Automatically Generated from Mathematica.
 * Wed 11 Dec 2019 12:20:44 GMT-05:00
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
  double t10;
  double t14;
  double t15;
  double t16;
  double t26;
  double t27;
  double t30;
  double t33;
  double t38;
  double t40;
  double t41;
  double t43;
  double t65;
  double t66;
  double t67;
  double t68;
  double t70;
  double t73;
  double t93;
  double t100;
  double t112;
  double t113;
  double t32;
  double t34;
  double t35;
  double t37;
  double t45;
  double t47;
  double t48;
  double t49;
  double t59;
  double t60;
  double t63;
  double t159;
  double t163;
  double t166;
  double t71;
  double t74;
  double t75;
  double t81;
  double t117;
  double t123;
  double t124;
  double t137;
  double t138;
  double t142;
  double t148;
  double t183;
  double t184;
  double t185;
  t10 = Sin(var1[2]);
  t14 = Cos(var1[3]);
  t15 = -1.*t14*t10;
  t16 = Cos(var1[2]);
  t26 = Sin(var1[3]);
  t27 = -1.*t16*t26;
  t30 = t15 + t27;
  t33 = Cos(var1[4]);
  t38 = -1.*t16*t14;
  t40 = t10*t26;
  t41 = t38 + t40;
  t43 = Sin(var1[4]);
  t65 = Cos(var1[5]);
  t66 = -1.*t65*t10;
  t67 = Sin(var1[5]);
  t68 = -1.*t16*t67;
  t70 = t66 + t68;
  t73 = Cos(var1[6]);
  t93 = -1.*t16*t65;
  t100 = t10*t67;
  t112 = t93 + t100;
  t113 = Sin(var1[6]);
  t32 = -7.33788*t30;
  t34 = -1.*t33;
  t35 = 1. + t34;
  t37 = 0.4*t35*t30;
  t45 = -0.4*t41*t43;
  t47 = t33*t30;
  t48 = t41*t43;
  t49 = t47 + t48;
  t59 = 0.64*t49;
  t60 = t37 + t45 + t59;
  t63 = -31.392000000000003*t60;
  t159 = t16*t14;
  t163 = -1.*t10*t26;
  t166 = t159 + t163;
  t71 = -7.33788*t70;
  t74 = -1.*t73;
  t75 = 1. + t74;
  t81 = 0.4*t75*t70;
  t117 = -0.4*t112*t113;
  t123 = t73*t70;
  t124 = t112*t113;
  t137 = t123 + t124;
  t138 = 0.64*t137;
  t142 = t81 + t117 + t138;
  t148 = -31.392000000000003*t142;
  t183 = t16*t65;
  t184 = -1.*t10*t67;
  t185 = t183 + t184;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=28.252799999999997*t10 + t148 + t32 + t63 + t71;
  p_output1[3]=t32 + t63;
  p_output1[4]=-31.392000000000003*(-0.4*t30*t33 + 0.4*t166*t43 + 0.64*(-1.*t166*t43 + t47));
  p_output1[5]=t148 + t71;
  p_output1[6]=-31.392000000000003*(0.4*t113*t185 + 0.64*(t123 - 1.*t113*t185) - 0.4*t70*t73);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_five_link_walker.hh"

namespace SymFunction
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
