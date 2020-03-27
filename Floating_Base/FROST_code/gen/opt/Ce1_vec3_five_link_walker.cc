/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:46:32 GMT-04:00
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
  double t301;
  double t4102;
  double t575;
  double t3998;
  double t4553;
  double t4630;
  double t4634;
  double t4646;
  double t4650;
  double t4624;
  double t4631;
  double t4632;
  double t4659;
  double t4666;
  double t4681;
  double t4683;
  double t4686;
  double t4633;
  double t4653;
  double t4654;
  double t4692;
  double t4706;
  double t4707;
  double t4790;
  double t4800;
  double t4801;
  double t4842;
  double t4843;
  double t4846;
  double t4830;
  double t4832;
  double t4833;
  double t4859;
  double t4860;
  double t4861;
  double t4728;
  double t4803;
  double t4826;
  double t4829;
  double t4835;
  double t4841;
  double t4852;
  double t4854;
  double t4857;
  double t4858;
  double t4863;
  double t4864;
  double t4865;
  double t4867;
  double t4873;
  double t4874;
  double t4885;
  double t4892;
  double t4876;
  double t4894;
  double t4896;
  double t4878;
  double t3973;
  double t4112;
  double t4375;
  double t4427;
  double t4455;
  double t4469;
  double t4497;
  double t4545;
  double t4550;
  double t4926;
  double t4930;
  double t4950;
  double t4954;
  double t4978;
  double t4981;
  double t4982;
  double t4987;
  double t4988;
  double t4989;
  double t4990;
  double t4994;
  double t5006;
  double t5007;
  double t5008;
  double t4998;
  double t5003;
  double t5004;
  double t4953;
  double t4973;
  double t4974;
  double t5009;
  double t5010;
  double t5011;
  double t4927;
  double t4935;
  double t4936;
  double t4938;
  double t4939;
  double t4941;
  double t4942;
  double t4943;
  double t4949;
  double t4983;
  double t5005;
  double t5013;
  double t5015;
  double t5028;
  double t5029;
  double t5021;
  double t5022;
  double t5024;
  double t5017;
  double t5031;
  double t5032;
  double t5033;
  double t5045;
  double t5046;
  double t5048;
  double t5030;
  double t5035;
  double t5036;
  double t5049;
  double t5050;
  double t5056;
  double t5057;
  double t5058;
  double t5072;
  double t8382;
  double t9789;
  double t5074;
  double t9793;
  double t9801;
  double t5076;
  double t4920;
  double t4924;
  double t4834;
  double t4847;
  double t4848;
  double t4915;
  double t4918;
  double t4875;
  double t4877;
  double t4881;
  double t9986;
  double t4893;
  double t4897;
  double t4898;
  double t9988;
  double t9995;
  double t10000;
  double t10005;
  double t4906;
  double t4907;
  double t4908;
  double t9964;
  double t9983;
  double t9984;
  double t9985;
  double t5018;
  double t10060;
  double t10061;
  double t10062;
  double t10067;
  double t5020;
  double t5034;
  double t5037;
  double t5042;
  double t10073;
  double t4977;
  double t4984;
  double t5073;
  double t5075;
  double t5088;
  double t10083;
  double t9790;
  double t9802;
  double t9818;
  double t10085;
  double t10086;
  double t10087;
  double t9822;
  double t9911;
  double t9921;
  double t10151;
  double t10152;
  double t10153;
  double t10159;
  double t10164;
  double t10165;
  double t10168;
  double t10198;
  double t10201;
  double t10202;
  double t10203;
  double t10205;
  double t10206;
  double t10207;
  t301 = Cos(var1[3]);
  t4102 = Sin(var1[3]);
  t575 = Sin(var1[2]);
  t3998 = Cos(var1[2]);
  t4553 = Cos(var1[4]);
  t4630 = Sin(var1[4]);
  t4634 = t301*t4553;
  t4646 = -1.*t4102*t4630;
  t4650 = t4634 + t4646;
  t4624 = -1.*t4553*t4102;
  t4631 = -1.*t301*t4630;
  t4632 = t4624 + t4631;
  t4659 = -1.*t4553;
  t4666 = 1. + t4659;
  t4681 = 0.4*t4666;
  t4683 = 0.64*t4553;
  t4686 = t4681 + t4683;
  t4633 = t575*t4632;
  t4653 = t3998*t4650;
  t4654 = t4633 + t4653;
  t4692 = t4686*t4102;
  t4706 = 0.24*t301*t4630;
  t4707 = t4692 + t4706;
  t4790 = t301*t4686;
  t4800 = -0.24*t4102*t4630;
  t4801 = t4790 + t4800;
  t4842 = t4553*t4102;
  t4843 = t301*t4630;
  t4846 = t4842 + t4843;
  t4830 = -1.*t4686*t4102;
  t4832 = -0.24*t301*t4630;
  t4833 = t4830 + t4832;
  t4859 = -1.*t301*t4553;
  t4860 = t4102*t4630;
  t4861 = t4859 + t4860;
  t4728 = -1.*t4707*t4650;
  t4803 = -1.*t4632*t4801;
  t4826 = t4728 + t4803;
  t4829 = 3.2*t4654*t4826;
  t4835 = t4707*t4650;
  t4841 = t4632*t4801;
  t4852 = t4707*t4846;
  t4854 = t4650*t4801;
  t4857 = t4852 + t4854;
  t4858 = t3998*t4632;
  t4863 = t575*t4861;
  t4864 = t4858 + t4863;
  t4865 = 3.2*t4857*t4864;
  t4867 = t3998*t4846;
  t4873 = t575*t4650;
  t4874 = t4867 + t4873;
  t4885 = -0.24*t4553*t4102;
  t4892 = t4885 + t4832;
  t4876 = -1.*t4632*t4707;
  t4894 = 0.24*t301*t4553;
  t4896 = t4894 + t4800;
  t4878 = -1.*t4801*t4861;
  t3973 = -1.*t301*t575;
  t4112 = -1.*t3998*t4102;
  t4375 = t3973 + t4112;
  t4427 = Power(t301,2);
  t4455 = 0.11*t4427;
  t4469 = Power(t4102,2);
  t4497 = 0.11*t4469;
  t4545 = t4455 + t4497;
  t4550 = 6.8*t4375*t4545;
  t4926 = Cos(var1[5]);
  t4930 = Sin(var1[5]);
  t4950 = Cos(var1[6]);
  t4954 = Sin(var1[6]);
  t4978 = t4926*t4950;
  t4981 = -1.*t4930*t4954;
  t4982 = t4978 + t4981;
  t4987 = -1.*t4950;
  t4988 = 1. + t4987;
  t4989 = 0.4*t4988;
  t4990 = 0.64*t4950;
  t4994 = t4989 + t4990;
  t5006 = -1.*t4950*t4930;
  t5007 = -1.*t4926*t4954;
  t5008 = t5006 + t5007;
  t4998 = t4994*t4930;
  t5003 = 0.24*t4926*t4954;
  t5004 = t4998 + t5003;
  t4953 = t4950*t4930;
  t4973 = t4926*t4954;
  t4974 = t4953 + t4973;
  t5009 = t4926*t4994;
  t5010 = -0.24*t4930*t4954;
  t5011 = t5009 + t5010;
  t4927 = -1.*t4926*t575;
  t4935 = -1.*t3998*t4930;
  t4936 = t4927 + t4935;
  t4938 = Power(t4926,2);
  t4939 = 0.11*t4938;
  t4941 = Power(t4930,2);
  t4942 = 0.11*t4941;
  t4943 = t4939 + t4942;
  t4949 = 6.8*t4936*t4943;
  t4983 = t3998*t4982;
  t5005 = -1.*t5004*t4982;
  t5013 = -1.*t5008*t5011;
  t5015 = t5005 + t5013;
  t5028 = t575*t5008;
  t5029 = t5028 + t4983;
  t5021 = t5004*t4974;
  t5022 = t4982*t5011;
  t5024 = t5021 + t5022;
  t5017 = t3998*t5008;
  t5031 = -1.*t4994*t4930;
  t5032 = -0.24*t4926*t4954;
  t5033 = t5031 + t5032;
  t5045 = -1.*t4926*t4950;
  t5046 = t4930*t4954;
  t5048 = t5045 + t5046;
  t5030 = 3.2*t5029*t5015;
  t5035 = t5004*t4982;
  t5036 = t5008*t5011;
  t5049 = t575*t5048;
  t5050 = t5017 + t5049;
  t5056 = 3.2*t5024*t5050;
  t5057 = t3998*t4974;
  t5058 = t575*t4982;
  t5072 = t5057 + t5058;
  t8382 = -0.24*t4950*t4930;
  t9789 = t8382 + t5032;
  t5074 = -1.*t5008*t5004;
  t9793 = 0.24*t4926*t4950;
  t9801 = t9793 + t5010;
  t5076 = -1.*t5011*t5048;
  t4920 = -1.*t575*t4650;
  t4924 = t4858 + t4920;
  t4834 = t4833*t4650;
  t4847 = t4846*t4801;
  t4848 = t4834 + t4835 + t4841 + t4847;
  t4915 = -1.*t575*t4846;
  t4918 = t4915 + t4653;
  t4875 = -1.*t4632*t4833;
  t4877 = -1.*t4650*t4801;
  t4881 = t4875 + t4876 + t4877 + t4878;
  t9986 = 3.2*t4924*t4826;
  t4893 = t4892*t4650;
  t4897 = t4846*t4896;
  t4898 = t4893 + t4835 + t4841 + t4897;
  t9988 = -1.*t575*t4632;
  t9995 = t3998*t4861;
  t10000 = t9988 + t9995;
  t10005 = 3.2*t4857*t10000;
  t4906 = -1.*t4632*t4892;
  t4907 = -1.*t4650*t4896;
  t4908 = t4906 + t4876 + t4907 + t4878;
  t9964 = -1.*t3998*t301;
  t9983 = t575*t4102;
  t9984 = t9964 + t9983;
  t9985 = 6.8*t9984*t4545;
  t5018 = -1.*t575*t4982;
  t10060 = -1.*t3998*t4926;
  t10061 = t575*t4930;
  t10062 = t10060 + t10061;
  t10067 = 6.8*t10062*t4943;
  t5020 = t5017 + t5018;
  t5034 = t5033*t4982;
  t5037 = t4974*t5011;
  t5042 = t5034 + t5035 + t5036 + t5037;
  t10073 = -1.*t575*t5008;
  t4977 = -1.*t575*t4974;
  t4984 = t4977 + t4983;
  t5073 = -1.*t5008*t5033;
  t5075 = -1.*t4982*t5011;
  t5088 = t5073 + t5074 + t5075 + t5076;
  t10083 = 3.2*t5020*t5015;
  t9790 = t9789*t4982;
  t9802 = t4974*t9801;
  t9818 = t9790 + t5035 + t5036 + t9802;
  t10085 = t3998*t5048;
  t10086 = t10073 + t10085;
  t10087 = 3.2*t5024*t10086;
  t9822 = -1.*t5008*t9789;
  t9911 = -1.*t4982*t9801;
  t9921 = t9822 + t5074 + t9911 + t5076;
  t10151 = t4686*t4553;
  t10152 = Power(t4630,2);
  t10153 = 0.24*t10152;
  t10159 = t10151 + t10153;
  t10164 = t4686*t4630;
  t10165 = -0.24*t4553*t4630;
  t10168 = t10164 + t10165;
  t10198 = t4994*t4950;
  t10201 = Power(t4954,2);
  t10202 = 0.24*t10201;
  t10203 = t10198 + t10202;
  t10205 = t4994*t4954;
  t10206 = -0.24*t4950*t4954;
  t10207 = t10205 + t10206;
  p_output1[0]=var2[2]*(-0.5*(t4550 + 3.2*t4826*t4918 + 3.2*t4857*t4924 + t4949 + 3.2*t4984*t5015 + 3.2*t5020*t5024 - 2.88*t575)*var2[2] - 0.5*(t4550 + t4829 + 3.2*t4654*t4848 + t4865 + 3.2*t4874*t4881)*var2[3] - 0.5*(t4829 + t4865 + 3.2*t4654*t4898 + 3.2*t4874*t4908)*var2[4] - 0.5*(t4949 + t5030 + 3.2*t5029*t5042 + t5056 + 3.2*t5072*t5088)*var2[5] - 0.5*(t5030 + t5056 + 3.2*t5029*t9818 + 3.2*t5072*t9921)*var2[6]);
  p_output1[1]=var2[2]*(-0.5*(t10067 - 2.88*t3998 + 3.2*t4826*(-1.*t3998*t4846 + t4920) + 3.2*t5015*(-1.*t3998*t4974 + t5018) + 3.2*(t10073 - 1.*t3998*t4982)*t5024 + t9985 + 3.2*t4857*(-1.*t3998*t4650 + t9988))*var2[2] - 0.5*(t10005 + 3.2*t4881*t4918 + 3.2*t4848*t4924 + t9985 + t9986)*var2[3] - 0.5*(t10005 + 3.2*t4908*t4918 + 3.2*t4898*t4924 + t9986)*var2[4] - 0.5*(t10067 + t10083 + t10087 + 3.2*t5020*t5042 + 3.2*t4984*t5088)*var2[5] - 0.5*(t10083 + t10087 + 3.2*t5020*t9818 + 3.2*t4984*t9921)*var2[6]);
  p_output1[2]=var2[2]*(-0.5*(6.4*t4848*t4857 + 6.4*t4826*t4881)*var2[3] - 0.5*(6.4*t4857*t4898 + 6.4*t4826*t4908)*var2[4] - 0.5*(6.4*t5024*t5042 + 6.4*t5015*t5088)*var2[5] - 0.5*(6.4*t5024*t9818 + 6.4*t5015*t9921)*var2[6]);
  p_output1[3]=var2[2]*(-0.5*(3.2*t10159*t4848 + 3.2*t10168*t4881)*var2[3] - 0.5*(3.2*(t10151 - 0.24*Power(t4553,2))*t4826 + 3.2*(0.24*t4553*t4630 - 1.*t4630*t4686)*t4857 + 3.2*t10159*t4898 + 3.2*t10168*t4908)*var2[4]);
  p_output1[4]=var2[2]*(-0.384*t4848*var2[3] - 0.384*t4898*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(3.2*t10203*t5042 + 3.2*t10207*t5088)*var2[5] - 0.5*(3.2*(t10198 - 0.24*Power(t4950,2))*t5015 + 3.2*(0.24*t4950*t4954 - 1.*t4954*t4994)*t5024 + 3.2*t10203*t9818 + 3.2*t10207*t9921)*var2[6]);
  p_output1[6]=var2[2]*(-0.384*t5042*var2[5] - 0.384*t9818*var2[6]);
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

#include "Ce1_vec3_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
