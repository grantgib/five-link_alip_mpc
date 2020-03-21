/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:32 GMT-04:00
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
  double t266;
  double t168;
  double t234;
  double t267;
  double t145;
  double t235;
  double t3678;
  double t3906;
  double t4000;
  double t4159;
  double t4443;
  double t4759;
  double t4851;
  double t4979;
  double t5026;
  double t8156;
  double t8178;
  double t8188;
  double t8192;
  double t8229;
  double t8153;
  double t8349;
  double t8846;
  double t8968;
  double t8969;
  double t4197;
  double t4245;
  double t4297;
  double t9198;
  double t9332;
  double t9551;
  double t10144;
  double t10145;
  double t10337;
  double t10368;
  double t10373;
  double t10437;
  double t12794;
  double t10433;
  double t12822;
  double t12826;
  double t12831;
  double t12854;
  double t4384;
  double t4392;
  double t8043;
  double t4394;
  double t7983;
  double t12874;
  double t12875;
  double t12876;
  double t12877;
  double t12881;
  double t12885;
  double t12886;
  double t12887;
  double t12903;
  double t12907;
  double t12908;
  double t12889;
  double t12890;
  double t12898;
  double t12899;
  double t12931;
  double t12932;
  double t12915;
  double t12919;
  double t12930;
  double t12933;
  double t12937;
  double t12938;
  double t12942;
  double t12943;
  double t12944;
  double t12945;
  double t12946;
  double t12947;
  double t12948;
  double t12962;
  double t12966;
  double t12971;
  double t12972;
  double t12977;
  t266 = Cos(var1[5]);
  t168 = Cos(var1[6]);
  t234 = Sin(var1[5]);
  t267 = Sin(var1[6]);
  t145 = Sin(var1[2]);
  t235 = -1.*t168*t234;
  t3678 = -1.*t266*t267;
  t3906 = t235 + t3678;
  t4000 = -1.*t145*t3906;
  t4159 = Cos(var1[2]);
  t4443 = -1.*t266*t168;
  t4759 = t234*t267;
  t4851 = t4443 + t4759;
  t4979 = t4159*t4851;
  t5026 = t4000 + t4979;
  t8156 = t168*t234;
  t8178 = t266*t267;
  t8188 = t8156 + t8178;
  t8192 = t145*t8188;
  t8229 = t8192 + t4979;
  t8153 = -0.384*var2[2]*t5026;
  t8349 = -0.384*var2[5]*t8229;
  t8846 = -0.384*var2[6]*t8229;
  t8968 = t8153 + t8349 + t8846;
  t8969 = var2[6]*t8968;
  t4197 = t266*t168;
  t4245 = -1.*t234*t267;
  t4297 = t4197 + t4245;
  t9198 = t4159*t3906;
  t9332 = -1.*t145*t4297;
  t9551 = t9198 + t9332;
  t10144 = t145*t4851;
  t10145 = t9198 + t10144;
  t10337 = -1.*t4159*t3906;
  t10368 = -1.*t145*t4851;
  t10373 = t10337 + t10368;
  t10437 = t4159*t8188;
  t12794 = t10437 + t10368;
  t10433 = -0.384*var2[2]*t10373;
  t12822 = -0.384*var2[5]*t12794;
  t12826 = -0.384*var2[6]*t12794;
  t12831 = t10433 + t12822 + t12826;
  t12854 = var2[6]*t12831;
  t4384 = -1.*t4159*t4297;
  t4392 = t4000 + t4384;
  t8043 = -0.384*var2[6]*t5026;
  t4394 = -0.384*var2[2]*t4392;
  t7983 = -0.384*var2[5]*t5026;
  t12874 = -1.*t168;
  t12875 = 1. + t12874;
  t12876 = 0.4*t12875;
  t12877 = 0.64*t168;
  t12881 = t12876 + t12877;
  t12885 = -1.*t12881*t234;
  t12886 = -0.24*t266*t267;
  t12887 = t12885 + t12886;
  t12903 = t266*t12881;
  t12907 = -0.24*t234*t267;
  t12908 = t12903 + t12907;
  t12889 = t12881*t234;
  t12890 = 0.24*t266*t267;
  t12898 = t12889 + t12890;
  t12899 = t3906*t12898;
  t12931 = -0.24*t168*t234;
  t12932 = t12931 + t12886;
  t12915 = 0.24*t234*t267;
  t12919 = t12908*t4851;
  t12930 = t3906*t12887;
  t12933 = t3906*t12932;
  t12937 = t12932*t8188;
  t12938 = t4297*t12908;
  t12942 = 0.24*t266*t168;
  t12943 = t12942 + t12907;
  t12944 = t4297*t12943;
  t12945 = -0.24*t266*t168;
  t12946 = t12945 + t12915;
  t12947 = t4297*t12946;
  t12948 = t12930 + t12933 + t12899 + t12937 + t12938 + t12944 + t12947 + t12919;
  t12962 = t12887*t4297;
  t12966 = t12898*t4297;
  t12971 = t3906*t12908;
  t12972 = t8188*t12908;
  t12977 = t12962 + t12966 + t12971 + t12972;
  p_output1[0]=(t4394 + t7983 + t8043)*var2[6];
  p_output1[1]=t8969;
  p_output1[2]=t8969;
  p_output1[3]=-0.384*t9551*var2[6];
  p_output1[4]=-0.384*t10145*var2[6];
  p_output1[5]=-0.384*t9551*var2[2] - 0.384*t10145*var2[5] - 0.768*t10145*var2[6];
  p_output1[6]=var2[6]*(-0.384*(t10337 + t145*t4297)*var2[2] - 0.384*t10373*var2[5] - 0.384*t10373*var2[6]);
  p_output1[7]=t12854;
  p_output1[8]=t12854;
  p_output1[9]=-0.384*t4392*var2[6];
  p_output1[10]=t8043;
  p_output1[11]=t4394 + t7983 - 0.768*t5026*var2[6];
  p_output1[12]=var2[6]*(-0.384*(t12899 + t12919 + 2.*t12887*t3906 + 2.*t12908*t4297 + (t12915 - 1.*t12881*t266)*t4297 + t12887*t8188)*var2[5] - 0.384*t12948*var2[6]);
  p_output1[13]=var2[6]*(-0.384*t12948*var2[5] - 0.384*(t12899 + t12919 + t12937 + t12947 + 2.*t12932*t3906 + 2.*t12943*t4297)*var2[6]);
  p_output1[14]=-0.384*t12977*var2[6];
  p_output1[15]=-0.384*t12977*var2[5] - 0.768*(t12966 + t12971 + t12932*t4297 + t12943*t8188)*var2[6];
  p_output1[16]=-0.384*(-1.*t12881*t168 + 0.24*Power(t168,2))*Power(var2[6],2);
  p_output1[17]=-0.768*(-1.*t12881*t267 + 0.24*t168*t267)*var2[6];
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
