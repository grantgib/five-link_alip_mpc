/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:22:08 GMT-05:00
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
  double t4655;
  double t4645;
  double t4651;
  double t4609;
  double t4670;
  double t2820;
  double t4662;
  double t4663;
  double t4664;
  double t4667;
  double t4668;
  double t4826;
  double t4827;
  double t4829;
  double t4610;
  double t4652;
  double t4653;
  double t4654;
  double t4854;
  double t4855;
  double t4856;
  double t4798;
  double t4816;
  double t4823;
  double t4861;
  double t4669;
  double t4723;
  double t4724;
  double t4725;
  double t4824;
  double t4857;
  double t4858;
  double t4859;
  double t4871;
  double t4872;
  double t4873;
  double t4874;
  double t4875;
  double t4876;
  double t4877;
  double t4878;
  double t4879;
  double t4880;
  double t4882;
  double t4883;
  double t4884;
  double t4886;
  double t4898;
  double t4899;
  double t4900;
  double t4901;
  double t4902;
  double t4903;
  double t4889;
  double t4890;
  double t4891;
  double t4885;
  double t4887;
  double t4888;
  double t4892;
  double t4893;
  double t4906;
  double t4907;
  double t4908;
  double t4909;
  double t4910;
  double t4930;
  double t4931;
  double t4932;
  double t4933;
  double t4934;
  double t4935;
  double t4936;
  double t4939;
  double t4921;
  double t4922;
  double t4923;
  double t4940;
  double t4943;
  double t4944;
  double t4945;
  double t4830;
  double t4949;
  double t4950;
  double t4951;
  double t4952;
  double t4849;
  double t4955;
  double t4960;
  double t4860;
  double t4867;
  double t4961;
  double t4962;
  double t4963;
  double t4964;
  double t4973;
  double t4974;
  double t4975;
  double t4966;
  double t4967;
  double t4968;
  double t4978;
  double t4979;
  double t4980;
  double t4917;
  double t4918;
  double t4919;
  double t4853;
  double t4868;
  double t4869;
  double t4870;
  double t4894;
  double t5002;
  double t5003;
  double t5004;
  double t4998;
  double t4999;
  double t5000;
  double t5012;
  double t5013;
  double t5014;
  double t5007;
  double t5008;
  double t5009;
  double t5006;
  double t5034;
  double t5035;
  double t5015;
  double t5019;
  double t5038;
  double t5039;
  double t5041;
  double t5042;
  double t5023;
  double t5028;
  double t5029;
  double t5030;
  double t5031;
  double t5032;
  double t5033;
  double t5036;
  double t5037;
  double t5040;
  double t5043;
  double t5044;
  double t5045;
  double t5046;
  double t5047;
  double t5048;
  double t5049;
  double t5050;
  double t5051;
  double t5052;
  double t5053;
  double t5054;
  double t5055;
  double t5056;
  double t5057;
  double t5058;
  double t5059;
  double t5060;
  double t5061;
  double t5062;
  double t5067;
  double t5068;
  double t5070;
  double t5071;
  double t5073;
  double t5074;
  double t5075;
  double t5081;
  double t5082;
  double t5083;
  double t5097;
  double t5098;
  double t5099;
  double t5100;
  double t5101;
  double t5113;
  double t5114;
  double t5115;
  t4655 = Cos(var1[6]);
  t4645 = Sin(var1[2]);
  t4651 = Sin(var1[5]);
  t4609 = Cos(var1[5]);
  t4670 = Sin(var1[6]);
  t2820 = Cos(var1[2]);
  t4662 = -1.*t4655;
  t4663 = 1. + t4662;
  t4664 = 0.4*t4663;
  t4667 = 0.64*t4655;
  t4668 = t4664 + t4667;
  t4826 = t4609*t4655;
  t4827 = -1.*t4651*t4670;
  t4829 = t4826 + t4827;
  t4610 = -1.*t2820*t4609;
  t4652 = t4645*t4651;
  t4653 = t4610 + t4652;
  t4654 = 0.748*t4653;
  t4854 = t4668*t4670;
  t4855 = -0.24*t4655*t4670;
  t4856 = t4854 + t4855;
  t4798 = -1.*t4655*t4651;
  t4816 = -1.*t4609*t4670;
  t4823 = t4798 + t4816;
  t4861 = -1.*t4645*t4829;
  t4669 = t4668*t4655;
  t4723 = Power(t4670,2);
  t4724 = 0.24*t4723;
  t4725 = t4669 + t4724;
  t4824 = -1.*t4645*t4823;
  t4857 = t4655*t4651;
  t4858 = t4609*t4670;
  t4859 = t4857 + t4858;
  t4871 = t2820*t4823;
  t4872 = t4871 + t4861;
  t4873 = 3.2*t4856*t4872;
  t4874 = -1.*t4609*t4655;
  t4875 = t4651*t4670;
  t4876 = t4874 + t4875;
  t4877 = t2820*t4876;
  t4878 = t4824 + t4877;
  t4879 = 3.2*t4725*t4878;
  t4880 = t4654 + t4873 + t4879;
  t4882 = Power(t4655,2);
  t4883 = -0.24*t4882;
  t4884 = t4669 + t4883;
  t4886 = t2820*t4829;
  t4898 = t4645*t4859;
  t4899 = t4898 + t4877;
  t4900 = 3.2*t4725*t4899;
  t4901 = t4645*t4876;
  t4902 = t4871 + t4901;
  t4903 = 3.2*t4856*t4902;
  t4889 = -1.*t4668*t4670;
  t4890 = 0.24*t4655*t4670;
  t4891 = t4889 + t4890;
  t4885 = -1.*t4645*t4859;
  t4887 = t4885 + t4886;
  t4888 = 3.2*t4884*t4887;
  t4892 = 3.2*t4891*t4872;
  t4893 = t4888 + t4873 + t4892 + t4879;
  t4906 = t4645*t4823;
  t4907 = t4906 + t4886;
  t4908 = 3.2*t4884*t4907;
  t4909 = 3.2*t4891*t4902;
  t4910 = t4908 + t4900 + t4903 + t4909;
  t4930 = -1.*t4609*t4645;
  t4931 = -1.*t2820*t4651;
  t4932 = t4930 + t4931;
  t4933 = 0.748*t4932;
  t4934 = 3.2*t4856*t4887;
  t4935 = 3.2*t4725*t4872;
  t4936 = t4933 + t4934 + t4935;
  t4939 = 3.2*t4856*t4907;
  t4921 = t2820*t4859;
  t4922 = t4645*t4829;
  t4923 = t4921 + t4922;
  t4940 = 3.2*t4725*t4902;
  t4943 = 3.2*t4891*t4907;
  t4944 = 3.2*t4884*t4923;
  t4945 = t4939 + t4943 + t4944 + t4940;
  t4830 = -1.*t2820*t4829;
  t4949 = t4609*t4645;
  t4950 = t2820*t4651;
  t4951 = t4949 + t4950;
  t4952 = 0.748*t4951;
  t4849 = t4824 + t4830;
  t4955 = -1.*t2820*t4823;
  t4960 = 3.2*t4856*t4849;
  t4860 = -1.*t2820*t4859;
  t4867 = t4860 + t4861;
  t4961 = -1.*t4645*t4876;
  t4962 = t4955 + t4961;
  t4963 = 3.2*t4725*t4962;
  t4964 = t4952 + t4960 + t4963;
  t4973 = 3.2*t4856*t4878;
  t4974 = t4921 + t4961;
  t4975 = 3.2*t4725*t4974;
  t4966 = 3.2*t4891*t4849;
  t4967 = 3.2*t4884*t4867;
  t4968 = t4960 + t4966 + t4967 + t4963;
  t4978 = 3.2*t4884*t4872;
  t4979 = 3.2*t4891*t4878;
  t4980 = t4978 + t4973 + t4979 + t4975;
  t4917 = -1.*t4668*t4655;
  t4918 = 0.24*t4882;
  t4919 = t4917 + t4918;
  t4853 = 3.2*t4725*t4849;
  t4868 = 3.2*t4856*t4867;
  t4869 = t4654 + t4853 + t4868;
  t4870 = -0.5*var2[2]*t4869;
  t4894 = -0.5*var2[6]*t4893;
  t5002 = t4609*t4668;
  t5003 = -0.24*t4651*t4670;
  t5004 = t5002 + t5003;
  t4998 = -1.*t4668*t4651;
  t4999 = -0.24*t4609*t4670;
  t5000 = t4998 + t4999;
  t5012 = t4668*t4651;
  t5013 = 0.24*t4609*t4670;
  t5014 = t5012 + t5013;
  t5007 = -1.*t4609*t4668;
  t5008 = 0.24*t4651*t4670;
  t5009 = t5007 + t5008;
  t5006 = -1.*t4859*t5004;
  t5034 = -0.24*t4655*t4651;
  t5035 = t5034 + t4999;
  t5015 = -1.*t5014*t4876;
  t5019 = t4823*t5014;
  t5038 = 0.24*t4609*t4655;
  t5039 = t5038 + t5003;
  t5041 = -0.24*t4609*t4655;
  t5042 = t5041 + t5008;
  t5023 = t5004*t4876;
  t5028 = t5000*t4829;
  t5029 = t5014*t4829;
  t5030 = t4823*t5004;
  t5031 = t4859*t5004;
  t5032 = t5028 + t5029 + t5030 + t5031;
  t5033 = 3.2*t4891*t5032;
  t5036 = -1.*t5035*t4829;
  t5037 = -1.*t4823*t5004;
  t5040 = -1.*t4823*t5039;
  t5043 = -1.*t4823*t5042;
  t5044 = -1.*t5000*t4876;
  t5045 = -1.*t5035*t4876;
  t5046 = t5036 + t5037 + t5006 + t5040 + t5043 + t5044 + t5045 + t5015;
  t5047 = 3.2*t4856*t5046;
  t5048 = -1.*t4823*t5000;
  t5049 = -1.*t4823*t5014;
  t5050 = -1.*t4829*t5004;
  t5051 = -1.*t5004*t4876;
  t5052 = t5048 + t5049 + t5050 + t5051;
  t5053 = 3.2*t4884*t5052;
  t5054 = t4823*t5000;
  t5055 = t4823*t5035;
  t5056 = t5035*t4859;
  t5057 = t4829*t5004;
  t5058 = t4829*t5039;
  t5059 = t4829*t5042;
  t5060 = t5054 + t5055 + t5019 + t5056 + t5057 + t5058 + t5059 + t5023;
  t5061 = 3.2*t4725*t5060;
  t5062 = t5033 + t5047 + t5053 + t5061;
  t5067 = -1.*t5014*t4829;
  t5068 = t5067 + t5037;
  t5070 = t5014*t4859;
  t5071 = t5070 + t5057;
  t5073 = t5035*t4829;
  t5074 = t4859*t5039;
  t5075 = t5073 + t5029 + t5030 + t5074;
  t5081 = -1.*t4823*t5035;
  t5082 = -1.*t4829*t5039;
  t5083 = t5081 + t5049 + t5082 + t5051;
  t5097 = 3.2*t4884*t5068;
  t5098 = 3.2*t4891*t5071;
  t5099 = 3.2*t4725*t5075;
  t5100 = 3.2*t4856*t5083;
  t5101 = t5097 + t5098 + t5099 + t5100;
  t5113 = 6.4*t4884*t4856;
  t5114 = 6.4*t4891*t4725;
  t5115 = t5113 + t5114;
  p_output1[0]=var2[5]*(t4870 + t4894 - 0.5*t4880*var2[5]);
  p_output1[1]=var2[5]*(-0.5*t4880*var2[2] - 0.5*(t4654 + t4900 + t4903)*var2[5] - 0.5*t4910*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t4893*var2[2] - 0.5*t4910*var2[5] - 0.5*(t4900 + 6.4*t4891*t4902 + t4903 + 6.4*t4884*t4907 + 3.2*t4907*t4919 + 3.2*t4891*t4923)*var2[6]);
  p_output1[3]=-0.5*t4936*var2[5];
  p_output1[4]=-0.5*t4936*var2[2] - 1.*(t4933 + t4939 + t4940)*var2[5] - 0.5*t4945*var2[6];
  p_output1[5]=-0.5*t4945*var2[5];
  p_output1[6]=var2[5]*(-0.5*(3.2*t4856*(t4830 + t4898) + t4952 + 3.2*t4725*(t4922 + t4955))*var2[2] - 0.5*t4964*var2[5] - 0.5*t4968*var2[6]);
  p_output1[7]=var2[5]*(-0.5*t4964*var2[2] - 0.5*(t4952 + t4973 + t4975)*var2[5] - 0.5*t4980*var2[6]);
  p_output1[8]=var2[5]*(-0.5*t4968*var2[2] - 0.5*t4980*var2[5] - 0.5*(6.4*t4872*t4884 + 6.4*t4878*t4891 + 3.2*t4887*t4891 + 3.2*t4872*t4919 + t4973 + t4975)*var2[6]);
  p_output1[9]=-0.5*t4869*var2[5];
  p_output1[10]=t4870 + t4894 - 1.*t4880*var2[5];
  p_output1[11]=-0.5*t4893*var2[5];
  p_output1[12]=var2[5]*(-0.5*(3.2*t4856*(-1.*t4829*t5000 - 2.*t4876*t5000 - 2.*t4823*t5004 + t5006 - 1.*t4823*t5009 + t5015) + 3.2*t4725*(2.*t4823*t5000 + t4859*t5000 + 2.*t4829*t5004 + t4829*t5009 + t5019 + t5023))*var2[5] - 0.5*t5062*var2[6]);
  p_output1[13]=var2[5]*(-0.5*t5062*var2[5] - 0.5*(3.2*t4856*(t5006 + t5015 - 2.*t4876*t5035 + t5036 - 2.*t4823*t5039 + t5043) + 3.2*t4725*(t5019 + t5023 + 2.*t4823*t5035 + 2.*t4829*t5039 + t5056 + t5059) + 3.2*t4891*t5068 + 3.2*t4919*t5071 + 6.4*t4891*t5075 + 6.4*t4884*t5083)*var2[6]);
  p_output1[14]=-1.*(3.2*t4725*t5032 + 3.2*t4856*t5052)*var2[5] - 0.5*t5101*var2[6];
  p_output1[15]=-0.5*t5101*var2[5];
  p_output1[16]=-0.5*(6.4*Power(t4884,2) + 6.4*t4856*t4891 + 6.4*Power(t4891,2) + 6.4*t4725*t4919)*var2[5]*var2[6];
  p_output1[17]=-0.5*t5115*var2[6];
  p_output1[18]=-0.5*t5115*var2[5];
  p_output1[19]=-0.384*t4919*var2[5]*var2[6];
  p_output1[20]=-0.384*t4891*var2[6];
  p_output1[21]=-0.384*t4891*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec6_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
