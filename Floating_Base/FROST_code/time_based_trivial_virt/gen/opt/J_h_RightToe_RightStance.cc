/*
 * Automatically Generated from Mathematica.
 * Sun 19 Apr 2020 10:57:34 GMT-04:00
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
  double t742;
  double t747;
  double t733;
  double t748;
  double t683;
  double t743;
  double t751;
  double t752;
  double t765;
  double t766;
  double t767;
  double t771;
  double t726;
  double t732;
  double t753;
  double t772;
  double t776;
  double t777;
  double t780;
  double t781;
  double t782;
  double t789;
  double t793;
  double t794;
  double t806;
  double t807;
  double t808;
  double t805;
  double t812;
  double t813;
  double t814;
  double t815;
  double t816;
  double t817;
  t742 = Cos(var1[3]);
  t747 = Sin(var1[2]);
  t733 = Cos(var1[2]);
  t748 = Sin(var1[3]);
  t683 = Cos(var1[4]);
  t743 = t733*t742;
  t751 = -1.*t747*t748;
  t752 = t743 + t751;
  t765 = -1.*t742*t747;
  t766 = -1.*t733*t748;
  t767 = t765 + t766;
  t771 = Sin(var1[4]);
  t726 = -1.*t683;
  t732 = 1. + t726;
  t753 = 0.4*t732*t752;
  t772 = -0.4*t767*t771;
  t776 = t683*t752;
  t777 = t767*t771;
  t780 = t776 + t777;
  t781 = 0.8*t780;
  t782 = t753 + t772 + t781;
  t789 = t742*t747;
  t793 = t733*t748;
  t794 = t789 + t793;
  t806 = -1.*t733*t742;
  t807 = t747*t748;
  t808 = t806 + t807;
  t805 = 0.4*t732*t767;
  t812 = -0.4*t808*t771;
  t813 = t683*t767;
  t814 = t808*t771;
  t815 = t813 + t814;
  t816 = 0.8*t815;
  t817 = t805 + t812 + t816;
  p_output1[0]=1.;
  p_output1[1]=t782;
  p_output1[2]=t782;
  p_output1[3]=-0.4*t683*t752 + 0.4*t771*t794 + 0.8*(t776 - 1.*t771*t794);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t817;
  p_output1[8]=t817;
  p_output1[9]=-0.4*t683*t767 + 0.4*t752*t771 + 0.8*(-1.*t752*t771 + t813);
  p_output1[10]=-1.;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightToe_RightStance.hh"

namespace RightStance
{

void J_h_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
