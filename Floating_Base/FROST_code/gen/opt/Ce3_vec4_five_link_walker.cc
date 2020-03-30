/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:48:02 GMT-04:00
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
  double t2679;
  double t3182;
  double t966;
  double t1786;
  double t345;
  double t1765;
  double t2832;
  double t2841;
  double t2885;
  double t3059;
  double t3181;
  double t5037;
  double t5091;
  double t5613;
  double t6595;
  double t6669;
  double t6676;
  double t6697;
  double t6742;
  double t6780;
  double t6891;
  double t3209;
  double t3259;
  double t4875;
  double t4876;
  double t4911;
  double t4930;
  double t6953;
  double t7072;
  double t7111;
  double t7127;
  double t7216;
  double t6899;
  double t6958;
  double t7411;
  double t1051;
  double t1821;
  double t2193;
  double t2648;
  double t6020;
  double t7623;
  double t7632;
  double t7636;
  double t8543;
  double t8544;
  double t9500;
  double t7717;
  double t7721;
  double t7722;
  double t7724;
  double t7775;
  double t7776;
  double t18506;
  double t18507;
  double t18523;
  double t18753;
  double t18781;
  double t18783;
  double t4958;
  double t6543;
  double t7609;
  double t7681;
  double t7689;
  double t7693;
  double t7697;
  double t7698;
  double t7705;
  double t7707;
  double t7711;
  double t7713;
  double t8425;
  double t9532;
  double t19257;
  double t19258;
  double t11281;
  double t19702;
  double t20412;
  double t15856;
  t2679 = Cos(var1[4]);
  t3182 = Sin(var1[4]);
  t966 = Sin(var1[2]);
  t1786 = Sin(var1[3]);
  t345 = Cos(var1[3]);
  t1765 = Cos(var1[2]);
  t2832 = -1.*t2679;
  t2841 = 1. + t2832;
  t2885 = 0.4*t2841;
  t3059 = 0.64*t2679;
  t3181 = t2885 + t3059;
  t5037 = t345*t2679;
  t5091 = -1.*t1786*t3182;
  t5613 = t5037 + t5091;
  t6595 = t3181*t2679;
  t6669 = Power(t3182,2);
  t6676 = 0.24*t6669;
  t6697 = t6595 + t6676;
  t6742 = -1.*t2679*t1786;
  t6780 = -1.*t345*t3182;
  t6891 = t6742 + t6780;
  t3209 = t3181*t3182;
  t3259 = -0.24*t2679*t3182;
  t4875 = t3209 + t3259;
  t4876 = t2679*t1786;
  t4911 = t345*t3182;
  t4930 = t4876 + t4911;
  t6953 = -1.*t966*t5613;
  t7072 = -1.*t1765*t345;
  t7111 = t966*t1786;
  t7127 = t7072 + t7111;
  t7216 = -0.748*t7127;
  t6899 = t1765*t6891;
  t6958 = t6899 + t6953;
  t7411 = -1.*t966*t6891;
  t1051 = -1.*t345*t966;
  t1821 = -1.*t1765*t1786;
  t2193 = t1051 + t1821;
  t2648 = -0.748*t2193;
  t6020 = t1765*t5613;
  t7623 = -1.*t345*t2679;
  t7632 = t1786*t3182;
  t7636 = t7623 + t7632;
  t8543 = t345*t3181;
  t8544 = -0.24*t1786*t3182;
  t9500 = t8543 + t8544;
  t7717 = -1.*t3181*t1786;
  t7721 = -0.24*t345*t3182;
  t7722 = t7717 + t7721;
  t7724 = t3181*t1786;
  t7775 = 0.24*t345*t3182;
  t7776 = t7724 + t7775;
  t18506 = -1.*t3181*t3182;
  t18507 = 0.24*t2679*t3182;
  t18523 = t18506 + t18507;
  t18753 = Power(t2679,2);
  t18781 = -0.24*t18753;
  t18783 = t6595 + t18781;
  t4958 = -1.*t966*t4930;
  t6543 = t4958 + t6020;
  t7609 = -3.2*t4875*t6958;
  t7681 = t1765*t7636;
  t7689 = t7411 + t7681;
  t7693 = -3.2*t6697*t7689;
  t7697 = t966*t6891;
  t7698 = t7697 + t6020;
  t7705 = -3.2*t4875*t7698;
  t7707 = t966*t7636;
  t7711 = t6899 + t7707;
  t7713 = -3.2*t6697*t7711;
  t8425 = t7776*t5613;
  t9532 = t6891*t9500;
  t19257 = -0.24*t2679*t1786;
  t19258 = t19257 + t7721;
  t11281 = -1.*t6891*t7776;
  t19702 = 0.24*t345*t2679;
  t20412 = t19702 + t8544;
  t15856 = -1.*t9500*t7636;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t2648 - 3.2*t4875*t6543 - 3.2*t6697*t6958)*var2[0] - 0.5*(-3.2*t4875*(-1.*t1765*t4930 + t6953) + t7216 - 3.2*t6697*(-1.*t1765*t5613 + t7411))*var2[1])*var2[3];
  p_output1[3]=(-0.5*(t2648 + t7705 + t7713)*var2[0] - 0.5*(t7216 + t7609 + t7693)*var2[1] - 0.5*(-3.2*t4875*(t11281 + t15856 - 1.*t6891*t7722 - 1.*t5613*t9500) - 3.2*t6697*(t5613*t7722 + t8425 + t4930*t9500 + t9532))*var2[2])*var2[3];
  p_output1[4]=var2[3]*(-0.5*(-3.2*t18523*t7698 + t7705 + t7713 - 3.2*t18783*(t1765*t4930 + t5613*t966))*var2[0] - 0.5*(-3.2*t18783*t6543 - 3.2*t18523*t6958 + t7609 + t7693)*var2[1] - 0.5*(-3.2*t4875*(t11281 + t15856 - 1.*t20412*t5613 - 1.*t19258*t6891) - 3.2*t18523*(t4930*t7776 + t5613*t9500) - 3.2*t18783*(-1.*t5613*t7776 - 1.*t6891*t9500) - 3.2*t6697*(t20412*t4930 + t19258*t5613 + t8425 + t9532))*var2[2] - 0.5*(-6.4*t18783*t4875 - 6.4*t18523*t6697)*var2[3] + 0.384*t18523*var2[4]);
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

#include "Ce3_vec4_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
