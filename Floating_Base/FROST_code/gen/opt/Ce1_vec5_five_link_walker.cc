/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:22 GMT-04:00
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
  double t1030;
  double t996;
  double t1019;
  double t1048;
  double t972;
  double t1020;
  double t1049;
  double t1052;
  double t1053;
  double t1055;
  double t1077;
  double t1082;
  double t1086;
  double t1087;
  double t1097;
  double t1058;
  double t1065;
  double t1071;
  double t1123;
  double t1156;
  double t2068;
  double t2785;
  double t2786;
  double t3008;
  double t3171;
  double t4669;
  double t5609;
  double t5610;
  double t5616;
  double t4939;
  double t5585;
  double t5598;
  double t5603;
  double t5608;
  double t5836;
  double t5837;
  double t5866;
  double t5946;
  t1030 = Cos(var1[3]);
  t996 = Cos(var1[4]);
  t1019 = Sin(var1[3]);
  t1048 = Sin(var1[4]);
  t972 = Cos(var1[2]);
  t1020 = -1.*t996*t1019;
  t1049 = -1.*t1030*t1048;
  t1052 = t1020 + t1049;
  t1053 = t972*t1052;
  t1055 = Sin(var1[2]);
  t1077 = -1.*t1030*t996;
  t1082 = t1019*t1048;
  t1086 = t1077 + t1082;
  t1087 = t1055*t1086;
  t1097 = t1053 + t1087;
  t1058 = t1030*t996;
  t1065 = -1.*t1019*t1048;
  t1071 = t1058 + t1065;
  t1123 = -1.*t1055*t1052;
  t1156 = t972*t1086;
  t2068 = t1123 + t1156;
  t2785 = -1.*t996;
  t2786 = 1. + t2785;
  t3008 = 0.4*t2786;
  t3171 = 0.64*t996;
  t4669 = t3008 + t3171;
  t5609 = t1030*t4669;
  t5610 = -0.24*t1019*t1048;
  t5616 = t5609 + t5610;
  t4939 = -0.24*t1030*t1048;
  t5585 = t4669*t1019;
  t5598 = 0.24*t1030*t1048;
  t5603 = t5585 + t5598;
  t5608 = t5603*t1071;
  t5836 = t1052*t5616;
  t5837 = t996*t1019;
  t5866 = t1030*t1048;
  t5946 = t5837 + t5866;
  p_output1[0]=var2[4]*(-0.384*(t1053 - 1.*t1055*t1071)*var2[2] - 0.384*t1097*var2[3] - 0.384*t1097*var2[4]);
  p_output1[1]=var2[4]*(-0.384*(t1123 - 1.*t1071*t972)*var2[2] - 0.384*t2068*var2[3] - 0.384*t2068*var2[4]);
  p_output1[2]=var2[4]*(-0.384*(t1071*(-1.*t1019*t4669 + t4939) + t5608 + t5836 + t5616*t5946)*var2[3] - 0.384*(t5608 + t5836 + t1071*(t4939 - 0.24*t1019*t996) + t5946*(t5610 + 0.24*t1030*t996))*var2[4]);
  p_output1[3]=-0.384*(-1.*t1048*t4669 + 0.24*t1048*t996)*Power(var2[4],2);
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
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

#include "Ce1_vec5_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
