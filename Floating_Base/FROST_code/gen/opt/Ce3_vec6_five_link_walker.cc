/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:48:10 GMT-04:00
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
  double t7478;
  double t9300;
  double t5739;
  double t7029;
  double t5734;
  double t6996;
  double t7566;
  double t7600;
  double t7744;
  double t9196;
  double t9299;
  double t9931;
  double t9947;
  double t10038;
  double t10094;
  double t10096;
  double t10130;
  double t10135;
  double t10348;
  double t10352;
  double t10688;
  double t9577;
  double t9603;
  double t9608;
  double t9635;
  double t9643;
  double t9714;
  double t10706;
  double t10745;
  double t10762;
  double t10763;
  double t10790;
  double t10695;
  double t10721;
  double t10806;
  double t6581;
  double t7039;
  double t7164;
  double t7417;
  double t10084;
  double t10926;
  double t10928;
  double t10930;
  double t12963;
  double t12964;
  double t12982;
  double t12317;
  double t12339;
  double t12340;
  double t12902;
  double t12903;
  double t12938;
  double t13129;
  double t13130;
  double t13144;
  double t13207;
  double t13237;
  double t14056;
  double t9752;
  double t10085;
  double t10914;
  double t10975;
  double t11142;
  double t11151;
  double t11558;
  double t12165;
  double t12167;
  double t12170;
  double t12171;
  double t12179;
  double t12956;
  double t12983;
  double t14743;
  double t14744;
  double t13060;
  double t14777;
  double t14810;
  double t13087;
  t7478 = Cos(var1[6]);
  t9300 = Sin(var1[6]);
  t5739 = Sin(var1[2]);
  t7029 = Sin(var1[5]);
  t5734 = Cos(var1[5]);
  t6996 = Cos(var1[2]);
  t7566 = -1.*t7478;
  t7600 = 1. + t7566;
  t7744 = 0.4*t7600;
  t9196 = 0.64*t7478;
  t9299 = t7744 + t9196;
  t9931 = t5734*t7478;
  t9947 = -1.*t7029*t9300;
  t10038 = t9931 + t9947;
  t10094 = t9299*t7478;
  t10096 = Power(t9300,2);
  t10130 = 0.24*t10096;
  t10135 = t10094 + t10130;
  t10348 = -1.*t7478*t7029;
  t10352 = -1.*t5734*t9300;
  t10688 = t10348 + t10352;
  t9577 = t9299*t9300;
  t9603 = -0.24*t7478*t9300;
  t9608 = t9577 + t9603;
  t9635 = t7478*t7029;
  t9643 = t5734*t9300;
  t9714 = t9635 + t9643;
  t10706 = -1.*t5739*t10038;
  t10745 = -1.*t6996*t5734;
  t10762 = t5739*t7029;
  t10763 = t10745 + t10762;
  t10790 = -0.748*t10763;
  t10695 = t6996*t10688;
  t10721 = t10695 + t10706;
  t10806 = -1.*t5739*t10688;
  t6581 = -1.*t5734*t5739;
  t7039 = -1.*t6996*t7029;
  t7164 = t6581 + t7039;
  t7417 = -0.748*t7164;
  t10084 = t6996*t10038;
  t10926 = -1.*t5734*t7478;
  t10928 = t7029*t9300;
  t10930 = t10926 + t10928;
  t12963 = t5734*t9299;
  t12964 = -0.24*t7029*t9300;
  t12982 = t12963 + t12964;
  t12317 = -1.*t9299*t7029;
  t12339 = -0.24*t5734*t9300;
  t12340 = t12317 + t12339;
  t12902 = t9299*t7029;
  t12903 = 0.24*t5734*t9300;
  t12938 = t12902 + t12903;
  t13129 = -1.*t9299*t9300;
  t13130 = 0.24*t7478*t9300;
  t13144 = t13129 + t13130;
  t13207 = Power(t7478,2);
  t13237 = -0.24*t13207;
  t14056 = t10094 + t13237;
  t9752 = -1.*t5739*t9714;
  t10085 = t9752 + t10084;
  t10914 = -3.2*t9608*t10721;
  t10975 = t6996*t10930;
  t11142 = t10806 + t10975;
  t11151 = -3.2*t10135*t11142;
  t11558 = t5739*t10688;
  t12165 = t11558 + t10084;
  t12167 = -3.2*t9608*t12165;
  t12170 = t5739*t10930;
  t12171 = t10695 + t12170;
  t12179 = -3.2*t10135*t12171;
  t12956 = t12938*t10038;
  t12983 = t10688*t12982;
  t14743 = -0.24*t7478*t7029;
  t14744 = t14743 + t12339;
  t13060 = -1.*t10688*t12938;
  t14777 = 0.24*t5734*t7478;
  t14810 = t14777 + t12964;
  t13087 = -1.*t12982*t10930;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(-3.2*t10135*t10721 + t7417 - 3.2*t10085*t9608)*var2[0] - 0.5*(t10790 - 3.2*t10135*(t10806 - 1.*t10038*t6996) - 3.2*t9608*(t10706 - 1.*t6996*t9714))*var2[1])*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*(t12167 + t12179 + t7417)*var2[0] - 0.5*(t10790 + t10914 + t11151)*var2[1] - 0.5*(-3.2*(-1.*t10688*t12340 - 1.*t10038*t12982 + t13060 + t13087)*t9608 - 3.2*t10135*(t10038*t12340 + t12956 + t12983 + t12982*t9714))*var2[2])*var2[5];
  p_output1[6]=var2[5]*(-0.5*(t12167 + t12179 - 3.2*t12165*t13144 - 3.2*t14056*(t10038*t5739 + t6996*t9714))*var2[0] - 0.5*(t10914 + t11151 - 3.2*t10721*t13144 - 3.2*t10085*t14056)*var2[1] - 0.5*(-3.2*(-1.*t10038*t12938 - 1.*t10688*t12982)*t14056 - 3.2*(t13060 + t13087 - 1.*t10688*t14744 - 1.*t10038*t14810)*t9608 - 3.2*t13144*(t10038*t12982 + t12938*t9714) - 3.2*t10135*(t12956 + t12983 + t10038*t14744 + t14810*t9714))*var2[2] - 0.5*(-6.4*t10135*t13144 - 6.4*t14056*t9608)*var2[5] + 0.384*t13144*var2[6]);
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

#include "Ce3_vec6_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
