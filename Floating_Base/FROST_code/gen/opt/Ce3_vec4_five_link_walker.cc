/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:05 GMT-04:00
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
  double t4437;
  double t4984;
  double t2602;
  double t3998;
  double t310;
  double t2746;
  double t4564;
  double t4619;
  double t4705;
  double t4798;
  double t4834;
  double t7831;
  double t7834;
  double t7946;
  double t7958;
  double t7961;
  double t7980;
  double t7981;
  double t7982;
  double t7997;
  double t8008;
  double t4994;
  double t4998;
  double t5012;
  double t7787;
  double t7812;
  double t7818;
  double t8032;
  double t8044;
  double t8045;
  double t8047;
  double t8048;
  double t8028;
  double t8035;
  double t8049;
  double t2745;
  double t4299;
  double t4410;
  double t4426;
  double t7954;
  double t8138;
  double t8139;
  double t8147;
  double t8234;
  double t8235;
  double t8236;
  double t8212;
  double t8218;
  double t8222;
  double t8228;
  double t8230;
  double t8231;
  double t8319;
  double t8365;
  double t8368;
  double t8381;
  double t8480;
  double t8492;
  double t7828;
  double t7955;
  double t8137;
  double t8154;
  double t8160;
  double t8166;
  double t8199;
  double t8201;
  double t8202;
  double t8203;
  double t8206;
  double t8209;
  double t8232;
  double t8238;
  double t11481;
  double t11482;
  double t8285;
  double t11496;
  double t11508;
  double t8291;
  t4437 = Cos(var1[4]);
  t4984 = Sin(var1[4]);
  t2602 = Sin(var1[2]);
  t3998 = Sin(var1[3]);
  t310 = Cos(var1[3]);
  t2746 = Cos(var1[2]);
  t4564 = -1.*t4437;
  t4619 = 1. + t4564;
  t4705 = 0.4*t4619;
  t4798 = 0.64*t4437;
  t4834 = t4705 + t4798;
  t7831 = t310*t4437;
  t7834 = -1.*t3998*t4984;
  t7946 = t7831 + t7834;
  t7958 = t4834*t4437;
  t7961 = Power(t4984,2);
  t7980 = 0.24*t7961;
  t7981 = t7958 + t7980;
  t7982 = -1.*t4437*t3998;
  t7997 = -1.*t310*t4984;
  t8008 = t7982 + t7997;
  t4994 = t4834*t4984;
  t4998 = -0.24*t4437*t4984;
  t5012 = t4994 + t4998;
  t7787 = t4437*t3998;
  t7812 = t310*t4984;
  t7818 = t7787 + t7812;
  t8032 = -1.*t2602*t7946;
  t8044 = -1.*t2746*t310;
  t8045 = t2602*t3998;
  t8047 = t8044 + t8045;
  t8048 = -0.748*t8047;
  t8028 = t2746*t8008;
  t8035 = t8028 + t8032;
  t8049 = -1.*t2602*t8008;
  t2745 = -1.*t310*t2602;
  t4299 = -1.*t2746*t3998;
  t4410 = t2745 + t4299;
  t4426 = -0.748*t4410;
  t7954 = t2746*t7946;
  t8138 = -1.*t310*t4437;
  t8139 = t3998*t4984;
  t8147 = t8138 + t8139;
  t8234 = t310*t4834;
  t8235 = -0.24*t3998*t4984;
  t8236 = t8234 + t8235;
  t8212 = -1.*t4834*t3998;
  t8218 = -0.24*t310*t4984;
  t8222 = t8212 + t8218;
  t8228 = t4834*t3998;
  t8230 = 0.24*t310*t4984;
  t8231 = t8228 + t8230;
  t8319 = -1.*t4834*t4984;
  t8365 = 0.24*t4437*t4984;
  t8368 = t8319 + t8365;
  t8381 = Power(t4437,2);
  t8480 = -0.24*t8381;
  t8492 = t7958 + t8480;
  t7828 = -1.*t2602*t7818;
  t7955 = t7828 + t7954;
  t8137 = -3.2*t5012*t8035;
  t8154 = t2746*t8147;
  t8160 = t8049 + t8154;
  t8166 = -3.2*t7981*t8160;
  t8199 = t2602*t8008;
  t8201 = t8199 + t7954;
  t8202 = -3.2*t5012*t8201;
  t8203 = t2602*t8147;
  t8206 = t8028 + t8203;
  t8209 = -3.2*t7981*t8206;
  t8232 = t8231*t7946;
  t8238 = t8008*t8236;
  t11481 = -0.24*t4437*t3998;
  t11482 = t11481 + t8218;
  t8285 = -1.*t8008*t8231;
  t11496 = 0.24*t310*t4437;
  t11508 = t11496 + t8235;
  t8291 = -1.*t8236*t8147;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t4426 - 3.2*t5012*t7955 - 3.2*t7981*t8035)*var2[0] - 0.5*(-3.2*t5012*(-1.*t2746*t7818 + t8032) + t8048 - 3.2*t7981*(-1.*t2746*t7946 + t8049))*var2[1])*var2[3];
  p_output1[3]=(-0.5*(t4426 + t8202 + t8209)*var2[0] - 0.5*(t8048 + t8137 + t8166)*var2[1] - 0.5*(-3.2*t7981*(t7946*t8222 + t8232 + t7818*t8236 + t8238) - 3.2*t5012*(-1.*t8008*t8222 - 1.*t7946*t8236 + t8285 + t8291))*var2[2])*var2[3];
  p_output1[4]=var2[3]*(-0.5*(t8202 + t8209 - 3.2*t8201*t8368 - 3.2*(t2746*t7818 + t2602*t7946)*t8492)*var2[0] - 0.5*(t8137 + t8166 - 3.2*t8035*t8368 - 3.2*t7955*t8492)*var2[1] - 0.5*(-3.2*t7981*(t11508*t7818 + t11482*t7946 + t8232 + t8238) - 3.2*t5012*(-1.*t11508*t7946 - 1.*t11482*t8008 + t8285 + t8291) - 3.2*(t7818*t8231 + t7946*t8236)*t8368 - 3.2*(-1.*t7946*t8231 - 1.*t8008*t8236)*t8492)*var2[2] - 0.5*(-6.4*t7981*t8368 - 6.4*t5012*t8492)*var2[3] + 0.384*t8368*var2[4]);
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
