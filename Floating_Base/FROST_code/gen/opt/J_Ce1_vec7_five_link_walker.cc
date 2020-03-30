/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:49:10 GMT-04:00
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
  double t442;
  double t233;
  double t307;
  double t443;
  double t204;
  double t358;
  double t502;
  double t505;
  double t508;
  double t509;
  double t603;
  double t607;
  double t608;
  double t622;
  double t623;
  double t642;
  double t643;
  double t646;
  double t647;
  double t651;
  double t641;
  double t652;
  double t653;
  double t656;
  double t657;
  double t510;
  double t511;
  double t512;
  double t658;
  double t659;
  double t662;
  double t664;
  double t692;
  double t706;
  double t717;
  double t718;
  double t767;
  double t769;
  double t761;
  double t770;
  double t788;
  double t798;
  double t799;
  double t515;
  double t596;
  double t638;
  double t602;
  double t626;
  double t814;
  double t816;
  double t817;
  double t818;
  double t819;
  double t820;
  double t821;
  double t827;
  double t858;
  double t2160;
  double t3127;
  double t838;
  double t840;
  double t854;
  double t855;
  double t4557;
  double t4558;
  double t4509;
  double t4533;
  double t4556;
  double t4559;
  double t4566;
  double t4577;
  double t4578;
  double t4580;
  double t4581;
  double t4591;
  double t4594;
  double t4597;
  double t4616;
  double t4665;
  double t4666;
  double t4793;
  double t4794;
  double t4795;
  t442 = Cos(var1[5]);
  t233 = Cos(var1[6]);
  t307 = Sin(var1[5]);
  t443 = Sin(var1[6]);
  t204 = Sin(var1[2]);
  t358 = -1.*t233*t307;
  t502 = -1.*t442*t443;
  t505 = t358 + t502;
  t508 = -1.*t204*t505;
  t509 = Cos(var1[2]);
  t603 = -1.*t442*t233;
  t607 = t307*t443;
  t608 = t603 + t607;
  t622 = t509*t608;
  t623 = t508 + t622;
  t642 = t233*t307;
  t643 = t442*t443;
  t646 = t642 + t643;
  t647 = t204*t646;
  t651 = t647 + t622;
  t641 = -0.384*var2[2]*t623;
  t652 = -0.384*var2[5]*t651;
  t653 = -0.384*var2[6]*t651;
  t656 = t641 + t652 + t653;
  t657 = var2[6]*t656;
  t510 = t442*t233;
  t511 = -1.*t307*t443;
  t512 = t510 + t511;
  t658 = t509*t505;
  t659 = -1.*t204*t512;
  t662 = t658 + t659;
  t664 = t204*t608;
  t692 = t658 + t664;
  t706 = -1.*t509*t505;
  t717 = -1.*t204*t608;
  t718 = t706 + t717;
  t767 = t509*t646;
  t769 = t767 + t717;
  t761 = -0.384*var2[2]*t718;
  t770 = -0.384*var2[5]*t769;
  t788 = -0.384*var2[6]*t769;
  t798 = t761 + t770 + t788;
  t799 = var2[6]*t798;
  t515 = -1.*t509*t512;
  t596 = t508 + t515;
  t638 = -0.384*var2[6]*t623;
  t602 = -0.384*var2[2]*t596;
  t626 = -0.384*var2[5]*t623;
  t814 = -1.*t233;
  t816 = 1. + t814;
  t817 = 0.4*t816;
  t818 = 0.64*t233;
  t819 = t817 + t818;
  t820 = -1.*t819*t307;
  t821 = -0.24*t442*t443;
  t827 = t820 + t821;
  t858 = t442*t819;
  t2160 = -0.24*t307*t443;
  t3127 = t858 + t2160;
  t838 = t819*t307;
  t840 = 0.24*t442*t443;
  t854 = t838 + t840;
  t855 = t505*t854;
  t4557 = -0.24*t233*t307;
  t4558 = t4557 + t821;
  t4509 = 0.24*t307*t443;
  t4533 = t3127*t608;
  t4556 = t505*t827;
  t4559 = t505*t4558;
  t4566 = t4558*t646;
  t4577 = t512*t3127;
  t4578 = 0.24*t442*t233;
  t4580 = t4578 + t2160;
  t4581 = t512*t4580;
  t4591 = -0.24*t442*t233;
  t4594 = t4591 + t4509;
  t4597 = t512*t4594;
  t4616 = t4556 + t4559 + t855 + t4566 + t4577 + t4581 + t4597 + t4533;
  t4665 = t827*t512;
  t4666 = t854*t512;
  t4793 = t505*t3127;
  t4794 = t646*t3127;
  t4795 = t4665 + t4666 + t4793 + t4794;
  p_output1[0]=(t602 + t626 + t638)*var2[6];
  p_output1[1]=t657;
  p_output1[2]=t657;
  p_output1[3]=-0.384*t662*var2[6];
  p_output1[4]=-0.384*t692*var2[6];
  p_output1[5]=-0.384*t662*var2[2] - 0.384*t692*var2[5] - 0.768*t692*var2[6];
  p_output1[6]=var2[6]*(-0.384*(t204*t512 + t706)*var2[2] - 0.384*t718*var2[5] - 0.384*t718*var2[6]);
  p_output1[7]=t799;
  p_output1[8]=t799;
  p_output1[9]=-0.384*t596*var2[6];
  p_output1[10]=t638;
  p_output1[11]=t602 + t626 - 0.768*t623*var2[6];
  p_output1[12]=var2[6]*(-0.384*(t4533 + 2.*t3127*t512 + t512*(t4509 - 1.*t442*t819) + 2.*t505*t827 + t646*t827 + t855)*var2[5] - 0.384*t4616*var2[6]);
  p_output1[13]=var2[6]*(-0.384*t4616*var2[5] - 0.384*(t4533 + t4566 + t4597 + 2.*t4558*t505 + 2.*t4580*t512 + t855)*var2[6]);
  p_output1[14]=-0.384*t4795*var2[6];
  p_output1[15]=-0.384*t4795*var2[5] - 0.768*(t4666 + t4793 + t4558*t512 + t4580*t646)*var2[6];
  p_output1[16]=-0.384*(0.24*Power(t233,2) - 1.*t233*t819)*Power(var2[6],2);
  p_output1[17]=-0.768*(0.24*t233*t443 - 1.*t443*t819)*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec7_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
