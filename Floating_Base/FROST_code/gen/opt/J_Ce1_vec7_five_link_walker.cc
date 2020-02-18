/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:22:11 GMT-05:00
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
  double t4904;
  double t4895;
  double t4896;
  double t4905;
  double t4881;
  double t4897;
  double t4911;
  double t4912;
  double t4913;
  double t4914;
  double t4927;
  double t4928;
  double t4929;
  double t4937;
  double t4938;
  double t4953;
  double t4954;
  double t4956;
  double t4957;
  double t4958;
  double t4948;
  double t4959;
  double t4965;
  double t4969;
  double t4970;
  double t4915;
  double t4916;
  double t4920;
  double t4971;
  double t4972;
  double t4976;
  double t4981;
  double t4982;
  double t4988;
  double t4992;
  double t4993;
  double t5005;
  double t5010;
  double t5001;
  double t5011;
  double t5016;
  double t5017;
  double t5018;
  double t4924;
  double t4925;
  double t4942;
  double t4926;
  double t4941;
  double t5024;
  double t5025;
  double t5026;
  double t5027;
  double t5063;
  double t5064;
  double t5065;
  double t5066;
  double t5080;
  double t5084;
  double t5085;
  double t5072;
  double t5076;
  double t5077;
  double t5078;
  double t5095;
  double t5096;
  double t5088;
  double t5091;
  double t5094;
  double t5102;
  double t5103;
  double t5104;
  double t5105;
  double t5106;
  double t5107;
  double t5108;
  double t5109;
  double t5110;
  double t5111;
  double t5125;
  double t5126;
  double t5127;
  double t5128;
  double t5129;
  t4904 = Cos(var1[5]);
  t4895 = Cos(var1[6]);
  t4896 = Sin(var1[5]);
  t4905 = Sin(var1[6]);
  t4881 = Sin(var1[2]);
  t4897 = -1.*t4895*t4896;
  t4911 = -1.*t4904*t4905;
  t4912 = t4897 + t4911;
  t4913 = -1.*t4881*t4912;
  t4914 = Cos(var1[2]);
  t4927 = -1.*t4904*t4895;
  t4928 = t4896*t4905;
  t4929 = t4927 + t4928;
  t4937 = t4914*t4929;
  t4938 = t4913 + t4937;
  t4953 = t4895*t4896;
  t4954 = t4904*t4905;
  t4956 = t4953 + t4954;
  t4957 = t4881*t4956;
  t4958 = t4957 + t4937;
  t4948 = -0.384*var2[2]*t4938;
  t4959 = -0.384*var2[5]*t4958;
  t4965 = -0.384*var2[6]*t4958;
  t4969 = t4948 + t4959 + t4965;
  t4970 = var2[6]*t4969;
  t4915 = t4904*t4895;
  t4916 = -1.*t4896*t4905;
  t4920 = t4915 + t4916;
  t4971 = t4914*t4912;
  t4972 = -1.*t4881*t4920;
  t4976 = t4971 + t4972;
  t4981 = t4881*t4929;
  t4982 = t4971 + t4981;
  t4988 = -1.*t4914*t4912;
  t4992 = -1.*t4881*t4929;
  t4993 = t4988 + t4992;
  t5005 = t4914*t4956;
  t5010 = t5005 + t4992;
  t5001 = -0.384*var2[2]*t4993;
  t5011 = -0.384*var2[5]*t5010;
  t5016 = -0.384*var2[6]*t5010;
  t5017 = t5001 + t5011 + t5016;
  t5018 = var2[6]*t5017;
  t4924 = -1.*t4914*t4920;
  t4925 = t4913 + t4924;
  t4942 = -0.384*var2[6]*t4938;
  t4926 = -0.384*var2[2]*t4925;
  t4941 = -0.384*var2[5]*t4938;
  t5024 = -1.*t4895;
  t5025 = 1. + t5024;
  t5026 = 0.4*t5025;
  t5027 = 0.64*t4895;
  t5063 = t5026 + t5027;
  t5064 = -1.*t5063*t4896;
  t5065 = -0.24*t4904*t4905;
  t5066 = t5064 + t5065;
  t5080 = t4904*t5063;
  t5084 = -0.24*t4896*t4905;
  t5085 = t5080 + t5084;
  t5072 = t5063*t4896;
  t5076 = 0.24*t4904*t4905;
  t5077 = t5072 + t5076;
  t5078 = t4912*t5077;
  t5095 = -0.24*t4895*t4896;
  t5096 = t5095 + t5065;
  t5088 = 0.24*t4896*t4905;
  t5091 = t5085*t4929;
  t5094 = t4912*t5066;
  t5102 = t4912*t5096;
  t5103 = t5096*t4956;
  t5104 = t4920*t5085;
  t5105 = 0.24*t4904*t4895;
  t5106 = t5105 + t5084;
  t5107 = t4920*t5106;
  t5108 = -0.24*t4904*t4895;
  t5109 = t5108 + t5088;
  t5110 = t4920*t5109;
  t5111 = t5094 + t5102 + t5078 + t5103 + t5104 + t5107 + t5110 + t5091;
  t5125 = t5066*t4920;
  t5126 = t5077*t4920;
  t5127 = t4912*t5085;
  t5128 = t4956*t5085;
  t5129 = t5125 + t5126 + t5127 + t5128;
  p_output1[0]=(t4926 + t4941 + t4942)*var2[6];
  p_output1[1]=t4970;
  p_output1[2]=t4970;
  p_output1[3]=-0.384*t4976*var2[6];
  p_output1[4]=-0.384*t4982*var2[6];
  p_output1[5]=-0.384*t4976*var2[2] - 0.384*t4982*var2[5] - 0.768*t4982*var2[6];
  p_output1[6]=var2[6]*(-0.384*(t4881*t4920 + t4988)*var2[2] - 0.384*t4993*var2[5] - 0.384*t4993*var2[6]);
  p_output1[7]=t5018;
  p_output1[8]=t5018;
  p_output1[9]=-0.384*t4925*var2[6];
  p_output1[10]=t4942;
  p_output1[11]=t4926 + t4941 - 0.768*t4938*var2[6];
  p_output1[12]=var2[6]*(-0.384*(2.*t4912*t5066 + t4956*t5066 + t5078 + 2.*t4920*t5085 + t4920*(-1.*t4904*t5063 + t5088) + t5091)*var2[5] - 0.384*t5111*var2[6]);
  p_output1[13]=var2[6]*(-0.384*t5111*var2[5] - 0.384*(t5078 + t5091 + 2.*t4912*t5096 + t5103 + 2.*t4920*t5106 + t5110)*var2[6]);
  p_output1[14]=-0.384*t5129*var2[6];
  p_output1[15]=-0.384*t5129*var2[5] - 0.768*(t4920*t5096 + t4956*t5106 + t5126 + t5127)*var2[6];
  p_output1[16]=-0.384*(0.24*Power(t4895,2) - 1.*t4895*t5063)*Power(var2[6],2);
  p_output1[17]=-0.768*(0.24*t4895*t4905 - 1.*t4905*t5063)*var2[6];
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
