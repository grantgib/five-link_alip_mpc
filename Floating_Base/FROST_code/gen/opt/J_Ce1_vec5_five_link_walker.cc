/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:49:00 GMT-04:00
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
  double t342;
  double t303;
  double t324;
  double t547;
  double t115;
  double t338;
  double t2652;
  double t2862;
  double t3868;
  double t3872;
  double t7031;
  double t7131;
  double t7132;
  double t7189;
  double t7192;
  double t7228;
  double t7230;
  double t7231;
  double t7232;
  double t7234;
  double t7222;
  double t7236;
  double t7255;
  double t7256;
  double t7273;
  double t3913;
  double t4087;
  double t4457;
  double t7287;
  double t7335;
  double t7350;
  double t7366;
  double t7368;
  double t7418;
  double t7459;
  double t7466;
  double t7547;
  double t7548;
  double t7542;
  double t7580;
  double t7582;
  double t7584;
  double t7589;
  double t6758;
  double t6965;
  double t7197;
  double t6970;
  double t7193;
  double t7611;
  double t7612;
  double t7613;
  double t7614;
  double t7618;
  double t7638;
  double t7663;
  double t7668;
  double t7695;
  double t7947;
  double t7983;
  double t7679;
  double t7681;
  double t7686;
  double t7692;
  double t8749;
  double t8862;
  double t8444;
  double t8460;
  double t8745;
  double t8968;
  double t8982;
  double t8997;
  double t9047;
  double t9086;
  double t9100;
  double t9112;
  double t9115;
  double t9162;
  double t9175;
  double t9379;
  double t9395;
  double t9398;
  double t9410;
  double t9418;
  t342 = Cos(var1[3]);
  t303 = Cos(var1[4]);
  t324 = Sin(var1[3]);
  t547 = Sin(var1[4]);
  t115 = Sin(var1[2]);
  t338 = -1.*t303*t324;
  t2652 = -1.*t342*t547;
  t2862 = t338 + t2652;
  t3868 = -1.*t115*t2862;
  t3872 = Cos(var1[2]);
  t7031 = -1.*t342*t303;
  t7131 = t324*t547;
  t7132 = t7031 + t7131;
  t7189 = t3872*t7132;
  t7192 = t3868 + t7189;
  t7228 = t303*t324;
  t7230 = t342*t547;
  t7231 = t7228 + t7230;
  t7232 = t115*t7231;
  t7234 = t7232 + t7189;
  t7222 = -0.384*var2[2]*t7192;
  t7236 = -0.384*var2[3]*t7234;
  t7255 = -0.384*var2[4]*t7234;
  t7256 = t7222 + t7236 + t7255;
  t7273 = var2[4]*t7256;
  t3913 = t342*t303;
  t4087 = -1.*t324*t547;
  t4457 = t3913 + t4087;
  t7287 = t3872*t2862;
  t7335 = -1.*t115*t4457;
  t7350 = t7287 + t7335;
  t7366 = t115*t7132;
  t7368 = t7287 + t7366;
  t7418 = -1.*t3872*t2862;
  t7459 = -1.*t115*t7132;
  t7466 = t7418 + t7459;
  t7547 = t3872*t7231;
  t7548 = t7547 + t7459;
  t7542 = -0.384*var2[2]*t7466;
  t7580 = -0.384*var2[3]*t7548;
  t7582 = -0.384*var2[4]*t7548;
  t7584 = t7542 + t7580 + t7582;
  t7589 = var2[4]*t7584;
  t6758 = -1.*t3872*t4457;
  t6965 = t3868 + t6758;
  t7197 = -0.384*var2[4]*t7192;
  t6970 = -0.384*var2[2]*t6965;
  t7193 = -0.384*var2[3]*t7192;
  t7611 = -1.*t303;
  t7612 = 1. + t7611;
  t7613 = 0.4*t7612;
  t7614 = 0.64*t303;
  t7618 = t7613 + t7614;
  t7638 = -1.*t7618*t324;
  t7663 = -0.24*t342*t547;
  t7668 = t7638 + t7663;
  t7695 = t342*t7618;
  t7947 = -0.24*t324*t547;
  t7983 = t7695 + t7947;
  t7679 = t7618*t324;
  t7681 = 0.24*t342*t547;
  t7686 = t7679 + t7681;
  t7692 = t2862*t7686;
  t8749 = -0.24*t303*t324;
  t8862 = t8749 + t7663;
  t8444 = 0.24*t324*t547;
  t8460 = t7983*t7132;
  t8745 = t2862*t7668;
  t8968 = t2862*t8862;
  t8982 = t8862*t7231;
  t8997 = t4457*t7983;
  t9047 = 0.24*t342*t303;
  t9086 = t9047 + t7947;
  t9100 = t4457*t9086;
  t9112 = -0.24*t342*t303;
  t9115 = t9112 + t8444;
  t9162 = t4457*t9115;
  t9175 = t8745 + t8968 + t7692 + t8982 + t8997 + t9100 + t9162 + t8460;
  t9379 = t7668*t4457;
  t9395 = t7686*t4457;
  t9398 = t2862*t7983;
  t9410 = t7231*t7983;
  t9418 = t9379 + t9395 + t9398 + t9410;
  p_output1[0]=(t6970 + t7193 + t7197)*var2[4];
  p_output1[1]=t7273;
  p_output1[2]=t7273;
  p_output1[3]=-0.384*t7350*var2[4];
  p_output1[4]=-0.384*t7368*var2[4];
  p_output1[5]=-0.384*t7350*var2[2] - 0.384*t7368*var2[3] - 0.768*t7368*var2[4];
  p_output1[6]=var2[4]*(-0.384*(t115*t4457 + t7418)*var2[2] - 0.384*t7466*var2[3] - 0.384*t7466*var2[4]);
  p_output1[7]=t7589;
  p_output1[8]=t7589;
  p_output1[9]=-0.384*t6965*var2[4];
  p_output1[10]=t7197;
  p_output1[11]=t6970 + t7193 - 0.768*t7192*var2[4];
  p_output1[12]=var2[4]*(-0.384*(2.*t2862*t7668 + t7231*t7668 + t7692 + 2.*t4457*t7983 + t4457*(-1.*t342*t7618 + t8444) + t8460)*var2[3] - 0.384*t9175*var2[4]);
  p_output1[13]=var2[4]*(-0.384*t9175*var2[3] - 0.384*(t7692 + t8460 + 2.*t2862*t8862 + t8982 + 2.*t4457*t9086 + t9162)*var2[4]);
  p_output1[14]=-0.384*t9418*var2[4];
  p_output1[15]=-0.384*t9418*var2[3] - 0.768*(t4457*t8862 + t7231*t9086 + t9395 + t9398)*var2[4];
  p_output1[16]=-0.384*(0.24*Power(t303,2) - 1.*t303*t7618)*Power(var2[4],2);
  p_output1[17]=-0.768*(0.24*t303*t547 - 1.*t547*t7618)*var2[4];
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
