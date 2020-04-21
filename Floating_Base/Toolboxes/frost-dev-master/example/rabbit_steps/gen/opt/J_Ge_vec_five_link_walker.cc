/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:52:45 GMT-04:00
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
  double t46;
  double t52;
  double t113;
  double t171;
  double t193;
  double t199;
  double t218;
  double t301;
  double t380;
  double t414;
  double t557;
  double t567;
  double t746;
  double t789;
  double t916;
  double t986;
  double t1057;
  double t1113;
  double t1306;
  double t1308;
  double t1316;
  double t1380;
  double t248;
  double t342;
  double t347;
  double t349;
  double t572;
  double t632;
  double t634;
  double t642;
  double t657;
  double t715;
  double t744;
  double t2001;
  double t2003;
  double t2037;
  double t1107;
  double t1150;
  double t1198;
  double t1205;
  double t1425;
  double t1518;
  double t1521;
  double t1596;
  double t1665;
  double t1715;
  double t1737;
  double t2669;
  double t2695;
  double t2700;
  double t1787;
  double t1978;
  double t2113;
  double t2181;
  double t2262;
  double t2369;
  double t2501;
  double t2581;
  double t3062;
  double t3104;
  double t3108;
  double t2603;
  double t2644;
  double t2762;
  double t2899;
  double t2938;
  double t2950;
  double t2988;
  double t3039;
  double t3307;
  double t3381;
  double t3412;
  t46 = Cos(var1[2]);
  t52 = Cos(var1[3]);
  t113 = -1.*t46*t52;
  t171 = Sin(var1[2]);
  t193 = Sin(var1[3]);
  t199 = t171*t193;
  t218 = t113 + t199;
  t301 = Cos(var1[4]);
  t380 = t52*t171;
  t414 = t46*t193;
  t557 = t380 + t414;
  t567 = Sin(var1[4]);
  t746 = Cos(var1[5]);
  t789 = -1.*t46*t746;
  t916 = Sin(var1[5]);
  t986 = t171*t916;
  t1057 = t789 + t986;
  t1113 = Cos(var1[6]);
  t1306 = t746*t171;
  t1308 = t46*t916;
  t1316 = t1306 + t1308;
  t1380 = Sin(var1[6]);
  t248 = -7.33788*t218;
  t342 = -1.*t301;
  t347 = 1. + t342;
  t349 = 0.4*t347*t218;
  t572 = -0.4*t557*t567;
  t632 = t301*t218;
  t634 = t557*t567;
  t642 = t632 + t634;
  t657 = 0.64*t642;
  t715 = t349 + t572 + t657;
  t744 = -31.392000000000003*t715;
  t2001 = -1.*t52*t171;
  t2003 = -1.*t46*t193;
  t2037 = t2001 + t2003;
  t1107 = -7.33788*t1057;
  t1150 = -1.*t1113;
  t1198 = 1. + t1150;
  t1205 = 0.4*t1198*t1057;
  t1425 = -0.4*t1316*t1380;
  t1518 = t1113*t1057;
  t1521 = t1316*t1380;
  t1596 = t1518 + t1521;
  t1665 = 0.64*t1596;
  t1715 = t1205 + t1425 + t1665;
  t1737 = -31.392000000000003*t1715;
  t2669 = -1.*t746*t171;
  t2695 = -1.*t46*t916;
  t2700 = t2669 + t2695;
  t1787 = t248 + t744;
  t1978 = -0.4*t301*t218;
  t2113 = 0.4*t2037*t567;
  t2181 = -1.*t2037*t567;
  t2262 = t632 + t2181;
  t2369 = 0.64*t2262;
  t2501 = t1978 + t2113 + t2369;
  t2581 = -31.392000000000003*t2501;
  t3062 = t46*t52;
  t3104 = -1.*t171*t193;
  t3108 = t3062 + t3104;
  t2603 = t1107 + t1737;
  t2644 = -0.4*t1113*t1057;
  t2762 = 0.4*t2700*t1380;
  t2899 = -1.*t2700*t1380;
  t2938 = t1518 + t2899;
  t2950 = 0.64*t2938;
  t2988 = t2644 + t2762 + t2950;
  t3039 = -31.392000000000003*t2988;
  t3307 = t46*t746;
  t3381 = -1.*t171*t916;
  t3412 = t3307 + t3381;
  p_output1[0]=t1107 + t1737 + t248 + 28.252799999999997*t46 + t744;
  p_output1[1]=t1787;
  p_output1[2]=t2581;
  p_output1[3]=t2603;
  p_output1[4]=t3039;
  p_output1[5]=t1787;
  p_output1[6]=t1787;
  p_output1[7]=t2581;
  p_output1[8]=t2581;
  p_output1[9]=t2581;
  p_output1[10]=-31.392000000000003*(t2113 + 0.4*t301*t3108 + 0.64*(t2181 - 1.*t301*t3108));
  p_output1[11]=t2603;
  p_output1[12]=t2603;
  p_output1[13]=t3039;
  p_output1[14]=t3039;
  p_output1[15]=t3039;
  p_output1[16]=-31.392000000000003*(t2762 + 0.4*t1113*t3412 + 0.64*(t2899 - 1.*t1113*t3412));
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
