/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:26:51 GMT-05:00
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
  double t15;
  double t16;
  double t26;
  double t27;
  double t30;
  double t32;
  double t34;
  double t40;
  double t41;
  double t43;
  double t45;
  double t66;
  double t67;
  double t68;
  double t70;
  double t71;
  double t74;
  double t100;
  double t112;
  double t113;
  double t117;
  double t33;
  double t35;
  double t37;
  double t38;
  double t47;
  double t48;
  double t49;
  double t59;
  double t60;
  double t63;
  double t65;
  double t163;
  double t166;
  double t171;
  double t73;
  double t75;
  double t81;
  double t93;
  double t123;
  double t124;
  double t137;
  double t138;
  double t142;
  double t148;
  double t149;
  double t184;
  double t185;
  double t186;
  t10 = Sin(var1[2]);
  t15 = Cos(var1[3]);
  t16 = -1.*t15*t10;
  t26 = Cos(var1[2]);
  t27 = Sin(var1[3]);
  t30 = -1.*t26*t27;
  t32 = t16 + t30;
  t34 = Cos(var1[4]);
  t40 = -1.*t26*t15;
  t41 = t10*t27;
  t43 = t40 + t41;
  t45 = Sin(var1[4]);
  t66 = Cos(var1[5]);
  t67 = -1.*t66*t10;
  t68 = Sin(var1[5]);
  t70 = -1.*t26*t68;
  t71 = t67 + t70;
  t74 = Cos(var1[6]);
  t100 = -1.*t26*t66;
  t112 = t10*t68;
  t113 = t100 + t112;
  t117 = Sin(var1[6]);
  t33 = -7.33788*t32;
  t35 = -1.*t34;
  t37 = 1. + t35;
  t38 = 0.4*t37*t32;
  t47 = -0.4*t43*t45;
  t48 = t34*t32;
  t49 = t43*t45;
  t59 = t48 + t49;
  t60 = 0.64*t59;
  t63 = t38 + t47 + t60;
  t65 = -31.392000000000003*t63;
  t163 = t26*t15;
  t166 = -1.*t10*t27;
  t171 = t163 + t166;
  t73 = -7.33788*t71;
  t75 = -1.*t74;
  t81 = 1. + t75;
  t93 = 0.4*t81*t71;
  t123 = -0.4*t113*t117;
  t124 = t74*t71;
  t137 = t113*t117;
  t138 = t124 + t137;
  t142 = 0.64*t138;
  t148 = t93 + t123 + t142;
  t149 = -31.392000000000003*t148;
  t184 = t26*t66;
  t185 = -1.*t10*t68;
  t186 = t184 + t185;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=28.252799999999997*t10 + t149 + t33 + t65 + t73;
  p_output1[3]=t33 + t65;
  p_output1[4]=-31.392000000000003*(-0.4*t32*t34 + 0.4*t171*t45 + 0.64*(-1.*t171*t45 + t48));
  p_output1[5]=t149 + t73;
  p_output1[6]=-31.392000000000003*(0.4*t117*t186 + 0.64*(t124 - 1.*t117*t186) - 0.4*t71*t74);
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
