/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:22:05 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t4532;
  double t4508;
  double t4509;
  double t4533;
  double t4470;
  double t4510;
  double t4544;
  double t4552;
  double t4556;
  double t4557;
  double t4580;
  double t4581;
  double t4582;
  double t4591;
  double t4594;
  double t4616;
  double t4617;
  double t4619;
  double t4620;
  double t4621;
  double t4611;
  double t4622;
  double t4628;
  double t4637;
  double t4638;
  double t4558;
  double t4559;
  double t4566;
  double t4639;
  double t4640;
  double t4644;
  double t4649;
  double t4650;
  double t4661;
  double t4665;
  double t4666;
  double t4690;
  double t4695;
  double t4674;
  double t4699;
  double t4719;
  double t4720;
  double t4721;
  double t4577;
  double t4578;
  double t4598;
  double t4579;
  double t4597;
  double t4727;
  double t4728;
  double t4729;
  double t4730;
  double t4792;
  double t4793;
  double t4794;
  double t4795;
  double t4817;
  double t4821;
  double t4822;
  double t4809;
  double t4813;
  double t4814;
  double t4815;
  double t4832;
  double t4833;
  double t4825;
  double t4828;
  double t4831;
  double t4839;
  double t4840;
  double t4841;
  double t4842;
  double t4843;
  double t4844;
  double t4845;
  double t4846;
  double t4847;
  double t4848;
  double t4862;
  double t4863;
  double t4864;
  double t4865;
  double t4866;
  t4532 = Cos(var1[3]);
  t4508 = Cos(var1[4]);
  t4509 = Sin(var1[3]);
  t4533 = Sin(var1[4]);
  t4470 = Sin(var1[2]);
  t4510 = -1.*t4508*t4509;
  t4544 = -1.*t4532*t4533;
  t4552 = t4510 + t4544;
  t4556 = -1.*t4470*t4552;
  t4557 = Cos(var1[2]);
  t4580 = -1.*t4532*t4508;
  t4581 = t4509*t4533;
  t4582 = t4580 + t4581;
  t4591 = t4557*t4582;
  t4594 = t4556 + t4591;
  t4616 = t4508*t4509;
  t4617 = t4532*t4533;
  t4619 = t4616 + t4617;
  t4620 = t4470*t4619;
  t4621 = t4620 + t4591;
  t4611 = -0.384*var2[2]*t4594;
  t4622 = -0.384*var2[3]*t4621;
  t4628 = -0.384*var2[4]*t4621;
  t4637 = t4611 + t4622 + t4628;
  t4638 = var2[4]*t4637;
  t4558 = t4532*t4508;
  t4559 = -1.*t4509*t4533;
  t4566 = t4558 + t4559;
  t4639 = t4557*t4552;
  t4640 = -1.*t4470*t4566;
  t4644 = t4639 + t4640;
  t4649 = t4470*t4582;
  t4650 = t4639 + t4649;
  t4661 = -1.*t4557*t4552;
  t4665 = -1.*t4470*t4582;
  t4666 = t4661 + t4665;
  t4690 = t4557*t4619;
  t4695 = t4690 + t4665;
  t4674 = -0.384*var2[2]*t4666;
  t4699 = -0.384*var2[3]*t4695;
  t4719 = -0.384*var2[4]*t4695;
  t4720 = t4674 + t4699 + t4719;
  t4721 = var2[4]*t4720;
  t4577 = -1.*t4557*t4566;
  t4578 = t4556 + t4577;
  t4598 = -0.384*var2[4]*t4594;
  t4579 = -0.384*var2[2]*t4578;
  t4597 = -0.384*var2[3]*t4594;
  t4727 = -1.*t4508;
  t4728 = 1. + t4727;
  t4729 = 0.4*t4728;
  t4730 = 0.64*t4508;
  t4792 = t4729 + t4730;
  t4793 = -1.*t4792*t4509;
  t4794 = -0.24*t4532*t4533;
  t4795 = t4793 + t4794;
  t4817 = t4532*t4792;
  t4821 = -0.24*t4509*t4533;
  t4822 = t4817 + t4821;
  t4809 = t4792*t4509;
  t4813 = 0.24*t4532*t4533;
  t4814 = t4809 + t4813;
  t4815 = t4552*t4814;
  t4832 = -0.24*t4508*t4509;
  t4833 = t4832 + t4794;
  t4825 = 0.24*t4509*t4533;
  t4828 = t4822*t4582;
  t4831 = t4552*t4795;
  t4839 = t4552*t4833;
  t4840 = t4833*t4619;
  t4841 = t4566*t4822;
  t4842 = 0.24*t4532*t4508;
  t4843 = t4842 + t4821;
  t4844 = t4566*t4843;
  t4845 = -0.24*t4532*t4508;
  t4846 = t4845 + t4825;
  t4847 = t4566*t4846;
  t4848 = t4831 + t4839 + t4815 + t4840 + t4841 + t4844 + t4847 + t4828;
  t4862 = t4795*t4566;
  t4863 = t4814*t4566;
  t4864 = t4552*t4822;
  t4865 = t4619*t4822;
  t4866 = t4862 + t4863 + t4864 + t4865;
  p_output1[0]=(t4579 + t4597 + t4598)*var2[4];
  p_output1[1]=t4638;
  p_output1[2]=t4638;
  p_output1[3]=-0.384*t4644*var2[4];
  p_output1[4]=-0.384*t4650*var2[4];
  p_output1[5]=-0.384*t4644*var2[2] - 0.384*t4650*var2[3] - 0.768*t4650*var2[4];
  p_output1[6]=var2[4]*(-0.384*(t4470*t4566 + t4661)*var2[2] - 0.384*t4666*var2[3] - 0.384*t4666*var2[4]);
  p_output1[7]=t4721;
  p_output1[8]=t4721;
  p_output1[9]=-0.384*t4578*var2[4];
  p_output1[10]=t4598;
  p_output1[11]=t4579 + t4597 - 0.768*t4594*var2[4];
  p_output1[12]=var2[4]*(-0.384*(2.*t4552*t4795 + t4619*t4795 + t4815 + 2.*t4566*t4822 + t4566*(-1.*t4532*t4792 + t4825) + t4828)*var2[3] - 0.384*t4848*var2[4]);
  p_output1[13]=var2[4]*(-0.384*t4848*var2[3] - 0.384*(t4815 + t4828 + 2.*t4552*t4833 + t4840 + 2.*t4566*t4843 + t4847)*var2[4]);
  p_output1[14]=-0.384*t4866*var2[4];
  p_output1[15]=-0.384*t4866*var2[3] - 0.768*(t4566*t4833 + t4619*t4843 + t4863 + t4864)*var2[4];
  p_output1[16]=-0.384*(0.24*Power(t4508,2) - 1.*t4508*t4792)*Power(var2[4],2);
  p_output1[17]=-0.768*(0.24*t4508*t4533 - 1.*t4533*t4792)*var2[4];
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

#include "J_Ce1_vec5_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
