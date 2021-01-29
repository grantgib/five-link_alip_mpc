/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:47 GMT-05:00
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
  double t2666;
  double t2097;
  double t2172;
  double t2696;
  double t1057;
  double t2227;
  double t2719;
  double t2794;
  double t3036;
  double t3345;
  double t3696;
  double t4041;
  double t1852;
  double t1987;
  double t5662;
  double t5680;
  double t5700;
  double t4475;
  double t5701;
  double t5715;
  double t5729;
  double t5749;
  double t5752;
  double t5808;
  double t6003;
  double t6019;
  double t6020;
  double t6025;
  double t6041;
  double t6062;
  double t6110;
  double t6157;
  double t6167;
  double t6169;
  double t6170;
  double t6171;
  double t6172;
  double t6310;
  double t6320;
  double t6327;
  double t6290;
  double t6330;
  double t6338;
  double t6379;
  double t6395;
  double t6422;
  double t6220;
  double t6423;
  double t6434;
  double t6458;
  double t6597;
  double t6606;
  double t6654;
  double t6695;
  double t6733;
  double t6736;
  double t6742;
  double t6770;
  double t6771;
  double t6772;
  double t6773;
  double t6774;
  double t6777;
  double t6769;
  double t6778;
  double t6779;
  double t6780;
  t2666 = Cos(var1[2]);
  t2097 = Cos(var1[3]);
  t2172 = Sin(var1[2]);
  t2696 = Sin(var1[3]);
  t1057 = Cos(var1[4]);
  t2227 = t2097*t2172;
  t2719 = t2666*t2696;
  t2794 = t2227 + t2719;
  t3036 = t2666*t2097;
  t3345 = -1.*t2172*t2696;
  t3696 = t3036 + t3345;
  t4041 = Sin(var1[4]);
  t1852 = -1.*t1057;
  t1987 = 1. + t1852;
  t5662 = -1.*t2097*t2172;
  t5680 = -1.*t2666*t2696;
  t5700 = t5662 + t5680;
  t4475 = 0.4*t1987*t3696;
  t5701 = -0.4*t5700*t4041;
  t5715 = t1057*t3696;
  t5729 = t5700*t4041;
  t5749 = t5715 + t5729;
  t5752 = 0.8*t5749;
  t5808 = t4475 + t5701 + t5752;
  t6003 = -0.4*t1057*t3696;
  t6019 = 0.4*t2794*t4041;
  t6020 = -1.*t2794*t4041;
  t6025 = t5715 + t6020;
  t6041 = 0.8*t6025;
  t6062 = t6003 + t6019 + t6041;
  t6110 = -0.4*t1057*t5700;
  t6157 = 0.4*t3696*t4041;
  t6167 = t1057*t5700;
  t6169 = -1.*t3696*t4041;
  t6170 = t6167 + t6169;
  t6171 = 0.8*t6170;
  t6172 = t6110 + t6157 + t6171;
  t6310 = -1.*t2666*t2097;
  t6320 = t2172*t2696;
  t6327 = t6310 + t6320;
  t6290 = 0.4*t1987*t5700;
  t6330 = -0.4*t6327*t4041;
  t6338 = t6327*t4041;
  t6379 = t6167 + t6338;
  t6395 = 0.8*t6379;
  t6422 = t6290 + t6330 + t6395;
  t6220 = var2[4]*t6172;
  t6423 = var2[2]*t6422;
  t6434 = var2[3]*t6422;
  t6458 = t6220 + t6423 + t6434;
  t6597 = 0.4*t5700*t4041;
  t6606 = -1.*t5700*t4041;
  t6654 = -0.4*t1057*t6327;
  t6695 = t1057*t6327;
  t6733 = t6695 + t6606;
  t6736 = 0.8*t6733;
  t6742 = t6654 + t6597 + t6736;
  t6770 = 0.4*t1987*t6327;
  t6771 = -0.4*t2794*t4041;
  t6772 = t2794*t4041;
  t6773 = t6695 + t6772;
  t6774 = 0.8*t6773;
  t6777 = t6770 + t6771 + t6774;
  t6769 = var2[4]*t6742;
  t6778 = var2[2]*t6777;
  t6779 = var2[3]*t6777;
  t6780 = t6769 + t6778 + t6779;
  p_output1[0]=0.4*t1987*t2794 - 0.4*t3696*t4041 + 0.8*(t1057*t2794 + t3696*t4041) + var1[0] + var2[0] + t5808*var2[2] + t6458*var2[2] + t5808*var2[3] + t6458*var2[3] + t6062*var2[4] + var2[4]*(t6172*var2[2] + t6172*var2[3] + (0.4*t1057*t2794 + t6157 + 0.8*(-1.*t1057*t2794 + t6169))*var2[4]) + var3[0] + t5808*var3[2] + t5808*var3[3] + t6062*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t4475 + t5701 + t5752 + t6220 + t6423 + t6434 + var1[1] + var2[1] + t6780*var2[2] + t6780*var2[3] + var2[4]*(t6742*var2[2] + t6742*var2[3] + (0.4*t1057*t3696 + t6597 + 0.8*(-1.*t1057*t3696 + t6606))*var2[4]) + var3[1] + t6422*var3[2] + t6422*var3[3] + t6172*var3[4] - 1.*var4[2];
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
