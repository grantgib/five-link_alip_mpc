/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:16:26 GMT-05:00
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
  double t4613;
  double t4451;
  double t4552;
  double t4673;
  double t1088;
  double t4578;
  double t4679;
  double t4683;
  double t4799;
  double t4908;
  double t5011;
  double t5055;
  double t5060;
  double t5211;
  double t5212;
  double t5214;
  double t5328;
  double t5346;
  double t5326;
  double t5334;
  double t5350;
  double t5358;
  double t5402;
  double t5407;
  double t5409;
  double t5415;
  double t5434;
  double t5613;
  double t5654;
  double t5659;
  double t5201;
  double t5202;
  double t5207;
  double t5210;
  double t5252;
  double t5258;
  double t5268;
  double t5304;
  double t5306;
  double t5314;
  double t5486;
  double t5491;
  double t5520;
  double t5599;
  double t5666;
  double t5701;
  double t5712;
  double t5727;
  double t5801;
  double t5804;
  double t4795;
  double t5058;
  double t5065;
  double t5080;
  double t5188;
  double t5192;
  double t5195;
  double t5321;
  double t5322;
  double t5919;
  double t5931;
  double t5951;
  double t5381;
  double t5432;
  double t5440;
  double t5450;
  double t5462;
  double t5473;
  double t5474;
  double t5805;
  double t5810;
  double t6025;
  double t6046;
  double t6048;
  double t6154;
  double t6158;
  double t6175;
  double t6176;
  double t6192;
  double t6195;
  double t6198;
  double t6216;
  double t6226;
  double t6229;
  double t6231;
  double t6246;
  double t6248;
  double t6252;
  double t6254;
  double t6258;
  double t6263;
  double t6264;
  t4613 = Cos(var1[2]);
  t4451 = Cos(var1[3]);
  t4552 = Sin(var1[2]);
  t4673 = Sin(var1[3]);
  t1088 = Cos(var1[4]);
  t4578 = -1.*t4451*t4552;
  t4679 = -1.*t4613*t4673;
  t4683 = t4578 + t4679;
  t4799 = t4613*t4451;
  t4908 = -1.*t4552*t4673;
  t5011 = t4799 + t4908;
  t5055 = Sin(var1[4]);
  t5060 = t1088*t4683;
  t5211 = -1.*t4613*t4451;
  t5212 = t4552*t4673;
  t5214 = t5211 + t5212;
  t5328 = Cos(var1[5]);
  t5346 = Sin(var1[5]);
  t5326 = Cos(var1[6]);
  t5334 = -1.*t5328*t4552;
  t5350 = -1.*t4613*t5346;
  t5358 = t5334 + t5350;
  t5402 = t4613*t5328;
  t5407 = -1.*t4552*t5346;
  t5409 = t5402 + t5407;
  t5415 = Sin(var1[6]);
  t5434 = t5326*t5358;
  t5613 = -1.*t4613*t5328;
  t5654 = t4552*t5346;
  t5659 = t5613 + t5654;
  t5201 = 0.748*t4683;
  t5202 = -1.*t1088;
  t5207 = 1. + t5202;
  t5210 = 0.4*t5207*t4683;
  t5252 = -0.4*t5214*t5055;
  t5258 = t5214*t5055;
  t5268 = t5060 + t5258;
  t5304 = 0.64*t5268;
  t5306 = t5210 + t5252 + t5304;
  t5314 = 3.2*t5306;
  t5486 = 0.748*t5358;
  t5491 = -1.*t5326;
  t5520 = 1. + t5491;
  t5599 = 0.4*t5520*t5358;
  t5666 = -0.4*t5659*t5415;
  t5701 = t5659*t5415;
  t5712 = t5434 + t5701;
  t5727 = 0.64*t5712;
  t5801 = t5599 + t5666 + t5727;
  t5804 = 3.2*t5801;
  t4795 = -0.4*t1088*t4683;
  t5058 = 0.4*t5011*t5055;
  t5065 = -1.*t5011*t5055;
  t5080 = t5060 + t5065;
  t5188 = 0.64*t5080;
  t5192 = t4795 + t5058 + t5188;
  t5195 = 0.1*var2[4]*t5192;
  t5321 = t5201 + t5314;
  t5322 = 0.03125*var2[3]*t5321;
  t5919 = t4451*t4552;
  t5931 = t4613*t4673;
  t5951 = t5919 + t5931;
  t5381 = -0.4*t5326*t5358;
  t5432 = 0.4*t5409*t5415;
  t5440 = -1.*t5409*t5415;
  t5450 = t5434 + t5440;
  t5462 = 0.64*t5450;
  t5473 = t5381 + t5432 + t5462;
  t5474 = 0.1*var2[6]*t5473;
  t5805 = t5486 + t5804;
  t5810 = 0.03125*var2[5]*t5805;
  t6025 = t5328*t4552;
  t6046 = t4613*t5346;
  t6048 = t6025 + t6046;
  t6154 = 0.748*t5011;
  t6158 = 0.4*t5207*t5011;
  t6175 = -0.4*t4683*t5055;
  t6176 = t1088*t5011;
  t6192 = t4683*t5055;
  t6195 = t6176 + t6192;
  t6198 = 0.64*t6195;
  t6216 = t6158 + t6175 + t6198;
  t6226 = 3.2*t6216;
  t6229 = 0.748*t5409;
  t6231 = 0.4*t5520*t5409;
  t6246 = -0.4*t5358*t5415;
  t6248 = t5326*t5409;
  t6252 = t5358*t5415;
  t6254 = t6248 + t6252;
  t6258 = 0.64*t6254;
  t6263 = t6231 + t6246 + t6258;
  t6264 = 3.2*t6263;
  p_output1[0]=t5195 + t5322 + t5474 + t5810 + 0.03125*(-2.88*t4552 + t5201 + t5314 + t5486 + t5804)*var2[2];
  p_output1[1]=t5195 + t5322 + 0.03125*t5321*var2[2];
  p_output1[2]=0.1*t5192*var2[2] + 0.1*t5192*var2[3] + 0.1*(t5058 + 0.4*t1088*t5951 + 0.64*(t5065 - 1.*t1088*t5951))*var2[4];
  p_output1[3]=t5474 + t5810 + 0.03125*t5805*var2[2];
  p_output1[4]=0.1*t5473*var2[2] + 0.1*t5473*var2[5] + 0.1*(t5432 + 0.4*t5326*t6048 + 0.64*(t5440 - 1.*t5326*t6048))*var2[6];
  p_output1[5]=1.;
  p_output1[6]=0.03125*(2.88*t4613 + t6154 + t6226 + t6229 + t6264);
  p_output1[7]=0.03125*(t6154 + t6226);
  p_output1[8]=0.1*(-0.4*t1088*t5011 + 0.4*t5055*t5951 + 0.64*(-1.*t5055*t5951 + t6176));
  p_output1[9]=0.03125*(t6229 + t6264);
  p_output1[10]=0.1*(-0.4*t5326*t5409 + 0.4*t5415*t6048 + 0.64*(-1.*t5415*t6048 + t6248));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_vel_com_x.hh"

namespace RightStance
{

void J_vel_com_x_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
