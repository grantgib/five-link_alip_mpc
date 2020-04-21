/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 19:53:14 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t1602;
  double t1564;
  double t1569;
  double t1657;
  double t1181;
  double t1593;
  double t1659;
  double t1668;
  double t1687;
  double t1697;
  double t1727;
  double t1931;
  double t1412;
  double t1545;
  double t4398;
  double t4491;
  double t4549;
  double t4386;
  double t4553;
  double t4769;
  double t4788;
  double t4792;
  double t4803;
  double t4804;
  double t5662;
  double t5670;
  double t5677;
  double t5735;
  double t5750;
  double t5753;
  double t5775;
  double t5790;
  double t5892;
  double t5906;
  double t5916;
  double t5922;
  double t5928;
  double t6404;
  double t6410;
  double t6439;
  double t6393;
  double t6449;
  double t6474;
  double t6497;
  double t6514;
  double t6558;
  double t6390;
  double t6592;
  double t6598;
  double t6604;
  double t6670;
  double t6710;
  double t6771;
  double t6777;
  double t6779;
  double t6782;
  double t6784;
  double t6882;
  double t6903;
  double t6905;
  double t6926;
  double t6932;
  double t6937;
  double t6881;
  double t6949;
  double t6965;
  double t6967;
  t1602 = Cos(var1[2]);
  t1564 = Cos(var1[3]);
  t1569 = Sin(var1[2]);
  t1657 = Sin(var1[3]);
  t1181 = Cos(var1[4]);
  t1593 = t1564*t1569;
  t1659 = t1602*t1657;
  t1668 = t1593 + t1659;
  t1687 = t1602*t1564;
  t1697 = -1.*t1569*t1657;
  t1727 = t1687 + t1697;
  t1931 = Sin(var1[4]);
  t1412 = -1.*t1181;
  t1545 = 1. + t1412;
  t4398 = -1.*t1564*t1569;
  t4491 = -1.*t1602*t1657;
  t4549 = t4398 + t4491;
  t4386 = 0.4*t1545*t1727;
  t4553 = -0.4*t4549*t1931;
  t4769 = t1181*t1727;
  t4788 = t4549*t1931;
  t4792 = t4769 + t4788;
  t4803 = 0.8*t4792;
  t4804 = t4386 + t4553 + t4803;
  t5662 = -0.4*t1181*t1727;
  t5670 = 0.4*t1668*t1931;
  t5677 = -1.*t1668*t1931;
  t5735 = t4769 + t5677;
  t5750 = 0.8*t5735;
  t5753 = t5662 + t5670 + t5750;
  t5775 = -0.4*t1181*t4549;
  t5790 = 0.4*t1727*t1931;
  t5892 = t1181*t4549;
  t5906 = -1.*t1727*t1931;
  t5916 = t5892 + t5906;
  t5922 = 0.8*t5916;
  t5928 = t5775 + t5790 + t5922;
  t6404 = -1.*t1602*t1564;
  t6410 = t1569*t1657;
  t6439 = t6404 + t6410;
  t6393 = 0.4*t1545*t4549;
  t6449 = -0.4*t6439*t1931;
  t6474 = t6439*t1931;
  t6497 = t5892 + t6474;
  t6514 = 0.8*t6497;
  t6558 = t6393 + t6449 + t6514;
  t6390 = var2[4]*t5928;
  t6592 = var2[2]*t6558;
  t6598 = var2[3]*t6558;
  t6604 = t6390 + t6592 + t6598;
  t6670 = 0.4*t4549*t1931;
  t6710 = -1.*t4549*t1931;
  t6771 = -0.4*t1181*t6439;
  t6777 = t1181*t6439;
  t6779 = t6777 + t6710;
  t6782 = 0.8*t6779;
  t6784 = t6771 + t6670 + t6782;
  t6882 = 0.4*t1545*t6439;
  t6903 = -0.4*t1668*t1931;
  t6905 = t1668*t1931;
  t6926 = t6777 + t6905;
  t6932 = 0.8*t6926;
  t6937 = t6882 + t6903 + t6932;
  t6881 = var2[4]*t6784;
  t6949 = var2[2]*t6937;
  t6965 = var2[3]*t6937;
  t6967 = t6881 + t6949 + t6965;
  p_output1[0]=0.4*t1545*t1668 - 0.4*t1727*t1931 + 0.8*(t1181*t1668 + t1727*t1931) + var1[0] + var2[0] + t4804*var2[2] + t6604*var2[2] + t4804*var2[3] + t6604*var2[3] + t5753*var2[4] + var2[4]*(t5928*var2[2] + t5928*var2[3] + (0.4*t1181*t1668 + t5790 + 0.8*(-1.*t1181*t1668 + t5906))*var2[4]) + var3[0] + t4804*var3[2] + t4804*var3[3] + t5753*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t4386 + t4553 + t4803 + t6390 + t6592 + t6598 + var1[1] + var2[1] + t6967*var2[2] + t6967*var2[3] + var2[4]*(t6784*var2[2] + t6784*var2[3] + (0.4*t1181*t1727 + t6670 + 0.8*(-1.*t1181*t1727 + t6710))*var2[4]) + var3[1] + t6558*var3[2] + t6558*var3[3] + t5928*var3[4] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightToe_RightStance.hh"

namespace RightStance
{

void ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
