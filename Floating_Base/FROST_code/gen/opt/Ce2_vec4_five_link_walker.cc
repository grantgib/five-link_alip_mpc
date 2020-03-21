/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:57 GMT-04:00
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
  double t4094;
  double t3825;
  double t3886;
  double t4098;
  double t4335;
  double t3003;
  double t3890;
  double t4202;
  double t4218;
  double t4654;
  double t4659;
  double t4706;
  double t4707;
  double t4782;
  double t4330;
  double t4356;
  double t4583;
  double t4624;
  double t4630;
  double t4632;
  double t4634;
  double t4646;
  double t4650;
  double t4850;
  double t4852;
  double t4854;
  double t4823;
  double t4829;
  double t4830;
  double t4832;
  double t4833;
  double t4835;
  double t4858;
  double t4859;
  double t4860;
  double t4862;
  double t4863;
  double t4864;
  double t4865;
  double t4867;
  double t4868;
  double t4898;
  double t4905;
  double t4927;
  double t4930;
  double t4935;
  double t4937;
  double t4938;
  double t4939;
  double t4949;
  double t4950;
  double t4953;
  double t4907;
  double t4908;
  double t4909;
  double t4884;
  double t4885;
  double t4892;
  double t4790;
  double t4800;
  double t4801;
  double t4842;
  double t4843;
  double t4844;
  double t4846;
  double t4857;
  double t4894;
  double t4896;
  double t4877;
  double t4878;
  double t4881;
  double t4882;
  double t4883;
  double t4893;
  double t4897;
  double t4906;
  double t4910;
  double t4911;
  double t4914;
  double t4918;
  double t4919;
  double t4920;
  double t4924;
  double t4925;
  double t4936;
  double t4941;
  double t4942;
  double t4954;
  double t4973;
  double t4974;
  double t4977;
  double t4978;
  double t4982;
  double t4983;
  double t4987;
  double t4989;
  double t4990;
  double t5003;
  double t5004;
  double t5005;
  double t5028;
  double t5029;
  double t5030;
  double t5031;
  double t5032;
  double t5033;
  double t4926;
  double t4943;
  double t4981;
  double t4988;
  double t5006;
  double t5007;
  double t5013;
  double t5015;
  double t5016;
  double t5017;
  double t4653;
  double t4841;
  double t4847;
  double t4848;
  double t5042;
  double t5043;
  double t5045;
  t4094 = Cos(var1[3]);
  t3825 = Cos(var1[4]);
  t3886 = Sin(var1[3]);
  t4098 = Sin(var1[4]);
  t4335 = Sin(var1[2]);
  t3003 = Cos(var1[2]);
  t3890 = -1.*t3825*t3886;
  t4202 = -1.*t4094*t4098;
  t4218 = t3890 + t4202;
  t4654 = -1.*t3825;
  t4659 = 1. + t4654;
  t4706 = 0.4*t4659;
  t4707 = 0.64*t3825;
  t4782 = t4706 + t4707;
  t4330 = t3003*t4218;
  t4356 = -1.*t4094*t3825;
  t4583 = t3886*t4098;
  t4624 = t4356 + t4583;
  t4630 = t4335*t4624;
  t4632 = t4330 + t4630;
  t4634 = -1.*t4094*t4335;
  t4646 = -1.*t3003*t3886;
  t4650 = t4634 + t4646;
  t4850 = t3003*t4094;
  t4852 = -1.*t4335*t3886;
  t4854 = t4850 + t4852;
  t4823 = t4335*t4218;
  t4829 = t4094*t3825;
  t4830 = -1.*t3886*t4098;
  t4832 = t4829 + t4830;
  t4833 = t3003*t4832;
  t4835 = t4823 + t4833;
  t4858 = t4094*t4335;
  t4859 = t3003*t3886;
  t4860 = t4858 + t4859;
  t4862 = t3825*t3886;
  t4863 = t4094*t4098;
  t4864 = t4862 + t4863;
  t4865 = t3003*t4864;
  t4867 = t4335*t4832;
  t4868 = t4865 + t4867;
  t4898 = -1.*t4335*t4832;
  t4905 = t4330 + t4898;
  t4927 = t4782*t3886;
  t4930 = 0.24*t4094*t4098;
  t4935 = t4927 + t4930;
  t4937 = t4094*t4782;
  t4938 = -0.24*t3886*t4098;
  t4939 = t4937 + t4938;
  t4949 = -1.*t4782*t3886;
  t4950 = -0.24*t4094*t4098;
  t4953 = t4949 + t4950;
  t4907 = -1.*t4335*t4218;
  t4908 = t3003*t4624;
  t4909 = t4907 + t4908;
  t4884 = -1.*t3003*t4094;
  t4885 = t4335*t3886;
  t4892 = t4884 + t4885;
  t4790 = t4782*t4098;
  t4800 = -0.24*t3825*t4098;
  t4801 = t4790 + t4800;
  t4842 = t4782*t3825;
  t4843 = Power(t4098,2);
  t4844 = 0.24*t4843;
  t4846 = t4842 + t4844;
  t4857 = 13.6*t4650*t4854;
  t4894 = -1.*t4335*t4864;
  t4896 = t4894 + t4833;
  t4877 = Power(t4650,2);
  t4878 = 6.8*t4877;
  t4881 = 6.8*t4650*t4860;
  t4882 = Power(t4854,2);
  t4883 = 6.8*t4882;
  t4893 = 6.8*t4854*t4892;
  t4897 = 3.2*t4835*t4896;
  t4906 = 3.2*t4905*t4868;
  t4910 = 3.2*t4835*t4909;
  t4911 = 3.2*t4905*t4632;
  t4914 = t4878 + t4881 + t4883 + t4893 + t4897 + t4906 + t4910 + t4911;
  t4918 = Power(t4094,2);
  t4919 = 0.11*t4918;
  t4920 = Power(t3886,2);
  t4924 = 0.11*t4920;
  t4925 = t4919 + t4924;
  t4936 = -1.*t4935*t4832;
  t4941 = -1.*t4218*t4939;
  t4942 = t4936 + t4941;
  t4954 = t4953*t4832;
  t4973 = t4935*t4832;
  t4974 = t4218*t4939;
  t4977 = t4864*t4939;
  t4978 = t4954 + t4973 + t4974 + t4977;
  t4982 = t4935*t4864;
  t4983 = t4832*t4939;
  t4987 = t4982 + t4983;
  t4989 = -1.*t4218*t4953;
  t4990 = -1.*t4218*t4935;
  t5003 = -1.*t4832*t4939;
  t5004 = -1.*t4939*t4624;
  t5005 = t4989 + t4990 + t5003 + t5004;
  t5028 = 6.8*t4892*t4925;
  t5029 = 3.2*t4905*t4942;
  t5030 = 3.2*t4905*t4978;
  t5031 = 3.2*t4987*t4909;
  t5032 = 3.2*t4896*t5005;
  t5033 = t5028 + t5029 + t5030 + t5031 + t5032;
  t4926 = 6.8*t4650*t4925;
  t4943 = 3.2*t4835*t4942;
  t4981 = 3.2*t4835*t4978;
  t4988 = 3.2*t4987*t4632;
  t5006 = 3.2*t4868*t5005;
  t5007 = t4926 + t4943 + t4981 + t4988 + t5006;
  t5013 = 0.748*t4892;
  t5015 = 3.2*t4801*t4905;
  t5016 = 3.2*t4846*t4909;
  t5017 = t5013 + t5015 + t5016;
  t4653 = 0.748*t4650;
  t4841 = 3.2*t4801*t4835;
  t4847 = 3.2*t4846*t4632;
  t4848 = t4653 + t4841 + t4847;
  t5042 = 3.2*t4846*t4978;
  t5043 = 3.2*t4801*t5005;
  t5045 = t5042 + t5043;
  p_output1[0]=var2[3]*(-0.5*(6.4*t4632*t4835 + t4857 + 13.6*t4854*t4860 + 6.4*t4835*t4868)*var2[0] - 0.5*t4914*var2[1] - 0.5*t5007*var2[2] - 0.5*t4848*var2[3] - 0.384*t4632*var2[4]);
  p_output1[1]=var2[3]*(-0.5*t4914*var2[0] - 0.5*(t4857 + 13.6*t4650*t4892 + 6.4*t4896*t4905 + 6.4*t4905*t4909)*var2[1] - 0.5*t5033*var2[2] - 0.5*t5017*var2[3] - 0.384*t4909*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t5007*var2[0] - 0.5*t5033*var2[1] - 0.5*(6.4*t4978*t4987 + 6.4*t4942*t5005)*var2[2] - 0.5*t5045*var2[3] - 0.384*t4978*var2[4]);
  p_output1[3]=(-0.5*t4848*var2[0] - 0.5*t5017*var2[1] - 0.5*t5045*var2[2])*var2[3];
  p_output1[4]=(-0.384*t4632*var2[0] - 0.384*t4909*var2[1] - 0.384*t4978*var2[2])*var2[3];
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

#include "Ce2_vec4_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
