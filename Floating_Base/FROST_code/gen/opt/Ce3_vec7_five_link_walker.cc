/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:48:13 GMT-04:00
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
  double t8869;
  double t8866;
  double t8867;
  double t8875;
  double t8879;
  double t8868;
  double t8876;
  double t8877;
  double t26;
  double t8880;
  double t8881;
  double t8883;
  double t8933;
  double t8935;
  double t8937;
  double t9505;
  double t10092;
  double t10835;
  double t10845;
  double t10846;
  double t8878;
  double t8887;
  double t12901;
  double t12987;
  double t13024;
  double t10743;
  double t10814;
  double t10824;
  double t10827;
  double t10828;
  double t10866;
  double t10901;
  double t11185;
  double t11328;
  double t13047;
  double t13058;
  double t13086;
  double t13088;
  double t13109;
  double t13111;
  t8869 = Cos(var1[5]);
  t8866 = Cos(var1[6]);
  t8867 = Sin(var1[5]);
  t8875 = Sin(var1[6]);
  t8879 = Cos(var1[2]);
  t8868 = -1.*t8866*t8867;
  t8876 = -1.*t8869*t8875;
  t8877 = t8868 + t8876;
  t26 = Sin(var1[2]);
  t8880 = t8869*t8866;
  t8881 = -1.*t8867*t8875;
  t8883 = t8880 + t8881;
  t8933 = -1.*t8866;
  t8935 = 1. + t8933;
  t8937 = 0.4*t8935;
  t9505 = 0.64*t8866;
  t10092 = t8937 + t9505;
  t10835 = t8869*t10092;
  t10845 = -0.24*t8867*t8875;
  t10846 = t10835 + t10845;
  t8878 = -1.*t26*t8877;
  t8887 = t8879*t8877;
  t12901 = -1.*t8869*t8866;
  t12987 = t8867*t8875;
  t13024 = t12901 + t12987;
  t10743 = -0.24*t8869*t8875;
  t10814 = t10092*t8867;
  t10824 = 0.24*t8869*t8875;
  t10827 = t10814 + t10824;
  t10828 = t10827*t8883;
  t10866 = t8877*t10846;
  t10901 = t8866*t8867;
  t11185 = t8869*t8875;
  t11328 = t10901 + t11185;
  t13047 = t8879*t13024;
  t13058 = t8878 + t13047;
  t13086 = 0.384*var2[1]*t13058;
  t13088 = t26*t13024;
  t13109 = t8887 + t13088;
  t13111 = 0.384*var2[0]*t13109;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(-1.*t26*t8883 + t8887)*var2[0] + 0.384*(t8878 - 1.*t8879*t8883)*var2[1])*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(t13086 + t13111 + 0.384*(t10828 + t10866 + t10846*t11328 + (t10743 - 1.*t10092*t8867)*t8883)*var2[2])*var2[6];
  p_output1[6]=(t13086 + t13111 + 0.384*(t10828 + t10866 + t11328*(t10845 + 0.24*t8866*t8869) + (t10743 - 0.24*t8866*t8867)*t8883)*var2[2] + 0.384*(-1.*t10092*t8875 + 0.24*t8866*t8875)*var2[5])*var2[6];
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

#include "Ce3_vec7_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
