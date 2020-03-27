/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:52:23 GMT-04:00
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
  double t6772;
  double t489;
  double t2127;
  double t6773;
  double t7213;
  double t6597;
  double t6774;
  double t6917;
  double t371;
  double t7286;
  double t7292;
  double t7332;
  double t7002;
  double t7409;
  double t8225;
  double t8249;
  double t8330;
  double t8356;
  double t8437;
  double t8459;
  double t8977;
  double t9015;
  double t9469;
  double t9567;
  double t9752;
  double t7390;
  double t7391;
  double t9872;
  double t9873;
  double t11345;
  double t11772;
  double t11774;
  double t11824;
  double t11951;
  double t12024;
  double t12025;
  double t12034;
  double t12048;
  double t12068;
  double t12071;
  double t12072;
  double t12097;
  double t12138;
  double t12142;
  double t11826;
  double t11851;
  double t11885;
  double t11918;
  double t11921;
  double t11936;
  double t12089;
  double t12090;
  double t12091;
  double t12095;
  double t12422;
  double t12423;
  double t12289;
  double t12295;
  double t12579;
  double t12580;
  double t12589;
  double t13440;
  double t13518;
  double t12564;
  double t12566;
  double t12402;
  double t12434;
  double t12441;
  double t12455;
  double t12521;
  double t12526;
  double t12528;
  double t12534;
  double t12538;
  double t12539;
  double t12559;
  double t12560;
  double t12562;
  double t12563;
  double t12567;
  double t12568;
  double t14233;
  double t14234;
  double t14235;
  double t14163;
  double t14173;
  double t14174;
  double t14115;
  double t14123;
  t6772 = Cos(var1[3]);
  t489 = Cos(var1[4]);
  t2127 = Sin(var1[3]);
  t6773 = Sin(var1[4]);
  t7213 = Cos(var1[2]);
  t6597 = -1.*t489*t2127;
  t6774 = -1.*t6772*t6773;
  t6917 = t6597 + t6774;
  t371 = Sin(var1[2]);
  t7286 = t6772*t489;
  t7292 = -1.*t2127*t6773;
  t7332 = t7286 + t7292;
  t7002 = -1.*t371*t6917;
  t7409 = -1.*t7213*t6917;
  t8225 = -1.*t6772*t489;
  t8249 = t2127*t6773;
  t8330 = t8225 + t8249;
  t8356 = t7213*t8330;
  t8437 = t7002 + t8356;
  t8459 = 0.384*var2[0]*t8437;
  t8977 = -1.*t371*t8330;
  t9015 = t7409 + t8977;
  t9469 = 0.384*var2[1]*t9015;
  t9567 = t8459 + t9469;
  t9752 = var2[4]*t9567;
  t7390 = -1.*t7213*t7332;
  t7391 = t7002 + t7390;
  t9872 = t7213*t6917;
  t9873 = -1.*t371*t7332;
  t11345 = t9872 + t9873;
  t11772 = t489*t2127;
  t11774 = t6772*t6773;
  t11824 = t11772 + t11774;
  t11951 = -1.*t489;
  t12024 = 1. + t11951;
  t12025 = 0.4*t12024;
  t12034 = 0.64*t489;
  t12048 = t12025 + t12034;
  t12068 = -1.*t12048*t2127;
  t12071 = -0.24*t6772*t6773;
  t12072 = t12068 + t12071;
  t12097 = t6772*t12048;
  t12138 = -0.24*t2127*t6773;
  t12142 = t12097 + t12138;
  t11826 = t371*t11824;
  t11851 = t11826 + t8356;
  t11885 = 0.384*var2[0]*t11851;
  t11918 = t7213*t11824;
  t11921 = t11918 + t8977;
  t11936 = 0.384*var2[1]*t11921;
  t12089 = t12048*t2127;
  t12090 = 0.24*t6772*t6773;
  t12091 = t12089 + t12090;
  t12095 = t6917*t12091;
  t12422 = -0.24*t489*t2127;
  t12423 = t12422 + t12071;
  t12289 = 0.24*t2127*t6773;
  t12295 = t12142*t8330;
  t12579 = t12072*t7332;
  t12580 = t12091*t7332;
  t12589 = t6917*t12142;
  t13440 = t11824*t12142;
  t13518 = t12579 + t12580 + t12589 + t13440;
  t12564 = t371*t8330;
  t12566 = t9872 + t12564;
  t12402 = t6917*t12072;
  t12434 = t6917*t12423;
  t12441 = t12423*t11824;
  t12455 = t7332*t12142;
  t12521 = 0.24*t6772*t489;
  t12526 = t12521 + t12138;
  t12528 = t7332*t12526;
  t12534 = -0.24*t6772*t489;
  t12538 = t12534 + t12289;
  t12539 = t7332*t12538;
  t12559 = t12402 + t12434 + t12095 + t12441 + t12455 + t12528 + t12539 + t12295;
  t12560 = 0.384*var2[2]*t12559;
  t12562 = t11885 + t11936 + t12560;
  t12563 = var2[4]*t12562;
  t12567 = 0.384*var2[4]*t12566;
  t12568 = 0.384*var2[4]*t8437;
  t14233 = -1.*t12048*t6773;
  t14234 = 0.24*t489*t6773;
  t14235 = t14233 + t14234;
  t14163 = t12423*t7332;
  t14173 = t11824*t12526;
  t14174 = t14163 + t12580 + t12589 + t14173;
  t14115 = 0.384*var2[1]*t8437;
  t14123 = 0.384*var2[0]*t12566;
  p_output1[0]=(0.384*t7391*var2[0] + 0.384*(t371*t7332 + t7409)*var2[1])*var2[4];
  p_output1[1]=t9752;
  p_output1[2]=t9752;
  p_output1[3]=0.384*t11345*var2[4];
  p_output1[4]=0.384*t7391*var2[4];
  p_output1[5]=0.384*t11345*var2[0] + 0.384*t7391*var2[1];
  p_output1[6]=t9752;
  p_output1[7]=(t11885 + t11936 + 0.384*(t11824*t12072 + t12095 + t12295 + 2.*t12072*t6917 + 2.*t12142*t7332 + (t12289 - 1.*t12048*t6772)*t7332)*var2[2])*var2[4];
  p_output1[8]=t12563;
  p_output1[9]=t12567;
  p_output1[10]=t12568;
  p_output1[11]=0.384*t13518*var2[4];
  p_output1[12]=t14115 + t14123 + 0.384*t13518*var2[2];
  p_output1[13]=t9752;
  p_output1[14]=t12563;
  p_output1[15]=(t11885 + t11936 + 0.384*(t12095 + t12295 + t12441 + t12539 + 2.*t12423*t6917 + 2.*t12526*t7332)*var2[2] + 0.384*(-1.*t12048*t489 + 0.24*Power(t489,2))*var2[3])*var2[4];
  p_output1[16]=t12567;
  p_output1[17]=t12568;
  p_output1[18]=0.384*t14174*var2[4];
  p_output1[19]=0.384*t14235*var2[4];
  p_output1[20]=t14115 + t14123 + 0.384*t14174*var2[2] + 0.384*t14235*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec5_five_link_walker.hh"

namespace RightStance
{

void J_Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
