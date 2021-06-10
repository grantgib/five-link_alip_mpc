/*
 * Automatically Generated from Mathematica.
 * Wed 3 Feb 2021 21:35:07 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t5679;
  double t5681;
  double t5672;
  double t5682;
  double t534;
  double t5680;
  double t5683;
  double t5684;
  double t5686;
  double t5687;
  double t5688;
  double t5689;
  double t2021;
  double t2075;
  double t5685;
  double t5690;
  double t5691;
  double t5692;
  double t5693;
  double t5694;
  double t5695;
  double t5697;
  double t5698;
  double t5699;
  double t5706;
  double t5707;
  double t5708;
  double t5705;
  double t5709;
  double t5710;
  double t5711;
  double t5712;
  double t5713;
  double t5714;
  t5679 = Cos(var1[3]);
  t5681 = Sin(var1[2]);
  t5672 = Cos(var1[2]);
  t5682 = Sin(var1[3]);
  t534 = Cos(var1[4]);
  t5680 = t5672*t5679;
  t5683 = -1.*t5681*t5682;
  t5684 = t5680 + t5683;
  t5686 = -1.*t5679*t5681;
  t5687 = -1.*t5672*t5682;
  t5688 = t5686 + t5687;
  t5689 = Sin(var1[4]);
  t2021 = -1.*t534;
  t2075 = 1. + t2021;
  t5685 = 0.4*t2075*t5684;
  t5690 = -0.4*t5688*t5689;
  t5691 = t534*t5684;
  t5692 = t5688*t5689;
  t5693 = t5691 + t5692;
  t5694 = 0.8*t5693;
  t5695 = t5685 + t5690 + t5694;
  t5697 = t5679*t5681;
  t5698 = t5672*t5682;
  t5699 = t5697 + t5698;
  t5706 = -1.*t5672*t5679;
  t5707 = t5681*t5682;
  t5708 = t5706 + t5707;
  t5705 = 0.4*t2075*t5688;
  t5709 = -0.4*t5708*t5689;
  t5710 = t534*t5688;
  t5711 = t5708*t5689;
  t5712 = t5710 + t5711;
  t5713 = 0.8*t5712;
  t5714 = t5705 + t5709 + t5713;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t5695;
  p_output1[3]=t5695;
  p_output1[4]=-0.4*t534*t5684 + 0.4*t5689*t5699 + 0.8*(t5691 - 1.*t5689*t5699);
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=1.;
  p_output1[16]=t5714;
  p_output1[17]=t5714;
  p_output1[18]=-0.4*t534*t5688 + 0.4*t5684*t5689 + 0.8*(-1.*t5684*t5689 + t5710);
  p_output1[19]=0;
  p_output1[20]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_map_RightStance.hh"

namespace SymFunction
{

void fRightToe_map_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
