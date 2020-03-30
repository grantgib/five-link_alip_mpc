/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:18 GMT-04:00
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
  double t8420;
  double t8757;
  double t2698;
  double t7438;
  double t1028;
  double t4917;
  double t8487;
  double t8492;
  double t8493;
  double t8513;
  double t8737;
  double t11506;
  double t12099;
  double t12268;
  double t2879;
  double t8264;
  double t8265;
  double t8378;
  double t9465;
  double t9662;
  double t11015;
  double t12589;
  double t12615;
  double t12653;
  double t12349;
  double t12511;
  double t12525;
  double t12529;
  double t12532;
  double t12658;
  double t12674;
  double t12713;
  double t12714;
  double t11025;
  double t11026;
  double t11027;
  double t12715;
  double t12716;
  double t12722;
  double t12736;
  double t12737;
  double t12738;
  double t12659;
  double t12785;
  double t12786;
  double t12791;
  double t12792;
  double t12663;
  double t12793;
  double t12769;
  double t12770;
  double t12771;
  double t11063;
  double t12416;
  double t12810;
  double t12745;
  double t12755;
  double t12756;
  double t12811;
  double t12812;
  double t12859;
  double t13655;
  double t14474;
  double t14502;
  double t13012;
  double t13013;
  double t13016;
  double t13041;
  double t13045;
  double t13050;
  double t13653;
  double t14509;
  double t14812;
  double t14826;
  double t14619;
  double t14893;
  double t14894;
  double t14667;
  t8420 = Cos(var1[4]);
  t8757 = Sin(var1[4]);
  t2698 = Sin(var1[2]);
  t7438 = Sin(var1[3]);
  t1028 = Cos(var1[3]);
  t4917 = Cos(var1[2]);
  t8487 = -1.*t8420;
  t8492 = 1. + t8487;
  t8493 = 0.4*t8492;
  t8513 = 0.64*t8420;
  t8737 = t8493 + t8513;
  t11506 = t1028*t8420;
  t12099 = -1.*t7438*t8757;
  t12268 = t11506 + t12099;
  t2879 = -1.*t1028*t2698;
  t8264 = -1.*t4917*t7438;
  t8265 = t2879 + t8264;
  t8378 = 0.748*t8265;
  t9465 = t8737*t8757;
  t9662 = -0.24*t8420*t8757;
  t11015 = t9465 + t9662;
  t12589 = -1.*t8420*t7438;
  t12615 = -1.*t1028*t8757;
  t12653 = t12589 + t12615;
  t12349 = t4917*t12268;
  t12511 = t8737*t8420;
  t12525 = Power(t8757,2);
  t12529 = 0.24*t12525;
  t12532 = t12511 + t12529;
  t12658 = t4917*t12653;
  t12674 = t2698*t12653;
  t12713 = t12674 + t12349;
  t12714 = 3.2*t11015*t12713;
  t11025 = t8420*t7438;
  t11026 = t1028*t8757;
  t11027 = t11025 + t11026;
  t12715 = -1.*t1028*t8420;
  t12716 = t7438*t8757;
  t12722 = t12715 + t12716;
  t12736 = t2698*t12722;
  t12737 = t12658 + t12736;
  t12738 = 3.2*t12532*t12737;
  t12659 = -1.*t2698*t12268;
  t12785 = -1.*t4917*t1028;
  t12786 = t2698*t7438;
  t12791 = t12785 + t12786;
  t12792 = 0.748*t12791;
  t12663 = t12658 + t12659;
  t12793 = -1.*t2698*t12653;
  t12769 = Power(t8420,2);
  t12770 = -0.24*t12769;
  t12771 = t12511 + t12770;
  t11063 = -1.*t2698*t11027;
  t12416 = t11063 + t12349;
  t12810 = 3.2*t11015*t12663;
  t12745 = -1.*t8737*t8757;
  t12755 = 0.24*t8420*t8757;
  t12756 = t12745 + t12755;
  t12811 = t4917*t12722;
  t12812 = t12793 + t12811;
  t12859 = 3.2*t12532*t12812;
  t13655 = t1028*t8737;
  t14474 = -0.24*t7438*t8757;
  t14502 = t13655 + t14474;
  t13012 = -1.*t8737*t7438;
  t13013 = -0.24*t1028*t8757;
  t13016 = t13012 + t13013;
  t13041 = t8737*t7438;
  t13045 = 0.24*t1028*t8757;
  t13050 = t13041 + t13045;
  t13653 = t13050*t12268;
  t14509 = t12653*t14502;
  t14812 = -0.24*t8420*t7438;
  t14826 = t14812 + t13013;
  t14619 = -1.*t12653*t13050;
  t14893 = 0.24*t1028*t8420;
  t14894 = t14893 + t14474;
  t14667 = -1.*t14502*t12722;
  p_output1[0]=var2[3]*(-0.5*(3.2*t11015*t12416 + 3.2*t12532*t12663 + t8378)*var2[2] - 0.5*(t12714 + t12738 + t8378)*var2[3] - 0.5*(t12714 + t12738 + 3.2*t12713*t12756 + 3.2*t12771*(t12268*t2698 + t11027*t4917))*var2[4]);
  p_output1[1]=var2[3]*(-0.5*(t12792 + 3.2*t11015*(t12659 - 1.*t11027*t4917) + 3.2*t12532*(t12793 - 1.*t12268*t4917))*var2[2] - 0.5*(t12792 + t12810 + t12859)*var2[3] - 0.5*(3.2*t12663*t12756 + 3.2*t12416*t12771 + t12810 + t12859)*var2[4]);
  p_output1[2]=var2[3]*(-0.5*(3.2*t12532*(t12268*t13016 + t13653 + t11027*t14502 + t14509) + 3.2*t11015*(-1.*t12653*t13016 - 1.*t12268*t14502 + t14619 + t14667))*var2[3] - 0.5*(3.2*t12756*(t11027*t13050 + t12268*t14502) + 3.2*t12771*(-1.*t12268*t13050 - 1.*t12653*t14502) + 3.2*t12532*(t13653 + t14509 + t12268*t14826 + t11027*t14894) + 3.2*t11015*(t14619 + t14667 - 1.*t12653*t14826 - 1.*t12268*t14894))*var2[4]);
  p_output1[3]=-0.5*(6.4*t12532*t12756 + 6.4*t11015*t12771)*var2[3]*var2[4];
  p_output1[4]=-0.384*t12756*var2[3]*var2[4];
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

#include "Ce1_vec4_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
