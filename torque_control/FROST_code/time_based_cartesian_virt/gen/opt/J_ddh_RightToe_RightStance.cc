/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:37 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t636;
  double t907;
  double t466;
  double t1004;
  double t157;
  double t906;
  double t1022;
  double t1138;
  double t1227;
  double t1271;
  double t1525;
  double t1575;
  double t1685;
  double t1693;
  double t1729;
  double t1814;
  double t1823;
  double t1852;
  double t1890;
  double t209;
  double t279;
  double t2130;
  double t2208;
  double t2220;
  double t2116;
  double t2379;
  double t2434;
  double t2516;
  double t2517;
  double t2527;
  double t2965;
  double t2997;
  double t3200;
  double t3226;
  double t3257;
  double t3294;
  double t3300;
  double t3348;
  double t3351;
  double t3370;
  double t3335;
  double t3386;
  double t3395;
  double t3403;
  double t3411;
  double t3431;
  double t3328;
  double t3451;
  double t3605;
  double t3613;
  double t1150;
  double t1602;
  double t1613;
  double t1658;
  double t1666;
  double t1683;
  double t1984;
  double t2115;
  double t2560;
  double t2598;
  double t2898;
  double t2910;
  double t2931;
  double t2974;
  double t3112;
  double t3147;
  double t3168;
  double t3169;
  double t3305;
  double t3306;
  double t3307;
  double t3311;
  double t3617;
  double t3621;
  double t3624;
  double t3665;
  double t3809;
  double t3831;
  double t3834;
  double t3835;
  double t4131;
  double t4169;
  double t4174;
  double t4225;
  double t3630;
  double t3633;
  double t3640;
  double t3643;
  double t3657;
  double t4240;
  double t4276;
  double t4292;
  double t4324;
  double t4334;
  double t4340;
  double t4343;
  double t4357;
  double t4425;
  double t4431;
  double t4438;
  double t4479;
  double t4486;
  double t4492;
  double t4506;
  double t4529;
  double t4570;
  double t4590;
  double t4247;
  double t4254;
  double t4266;
  double t4274;
  double t4284;
  double t4299;
  double t4300;
  double t4320;
  double t4322;
  double t4361;
  double t4372;
  double t4412;
  double t4414;
  double t4598;
  double t4602;
  double t4640;
  double t4838;
  double t4848;
  double t4864;
  double t4868;
  t636 = Cos(var1[3]);
  t907 = Sin(var1[2]);
  t466 = Cos(var1[2]);
  t1004 = Sin(var1[3]);
  t157 = Cos(var1[4]);
  t906 = t466*t636;
  t1022 = -1.*t907*t1004;
  t1138 = t906 + t1022;
  t1227 = -1.*t636*t907;
  t1271 = -1.*t466*t1004;
  t1525 = t1227 + t1271;
  t1575 = Sin(var1[4]);
  t1685 = -0.4*t157*t1525;
  t1693 = 0.4*t1138*t1575;
  t1729 = t157*t1525;
  t1814 = -1.*t1138*t1575;
  t1823 = t1729 + t1814;
  t1852 = 0.8*t1823;
  t1890 = t1685 + t1693 + t1852;
  t209 = -1.*t157;
  t279 = 1. + t209;
  t2130 = -1.*t466*t636;
  t2208 = t907*t1004;
  t2220 = t2130 + t2208;
  t2116 = 0.4*t279*t1525;
  t2379 = -0.4*t2220*t1575;
  t2434 = t2220*t1575;
  t2516 = t1729 + t2434;
  t2517 = 0.8*t2516;
  t2527 = t2116 + t2379 + t2517;
  t2965 = 0.4*t1525*t1575;
  t2997 = -1.*t1525*t1575;
  t3200 = -0.4*t157*t2220;
  t3226 = t157*t2220;
  t3257 = t3226 + t2997;
  t3294 = 0.8*t3257;
  t3300 = t3200 + t2965 + t3294;
  t3348 = t636*t907;
  t3351 = t466*t1004;
  t3370 = t3348 + t3351;
  t3335 = 0.4*t279*t2220;
  t3386 = -0.4*t3370*t1575;
  t3395 = t3370*t1575;
  t3403 = t3226 + t3395;
  t3411 = 0.8*t3403;
  t3431 = t3335 + t3386 + t3411;
  t3328 = var2[4]*t3300;
  t3451 = var2[2]*t3431;
  t3605 = var2[3]*t3431;
  t3613 = t3328 + t3451 + t3605;
  t1150 = 0.4*t279*t1138;
  t1602 = -0.4*t1525*t1575;
  t1613 = t157*t1138;
  t1658 = t1525*t1575;
  t1666 = t1613 + t1658;
  t1683 = 0.8*t1666;
  t1984 = var3[4]*t1890;
  t2115 = var2[4]*t1890;
  t2560 = var3[2]*t2527;
  t2598 = var3[3]*t2527;
  t2898 = var2[2]*t2527;
  t2910 = var2[3]*t2527;
  t2931 = 0.4*t157*t1138;
  t2974 = -1.*t157*t1138;
  t3112 = t2974 + t2997;
  t3147 = 0.8*t3112;
  t3168 = t2931 + t2965 + t3147;
  t3169 = var2[4]*t3168;
  t3305 = var2[2]*t3300;
  t3306 = var2[3]*t3300;
  t3307 = t3169 + t3305 + t3306;
  t3311 = var2[4]*t3307;
  t3617 = var2[2]*t3613;
  t3621 = var2[3]*t3613;
  t3624 = t1150 + t1602 + t1683 + t1984 + t2115 + t2560 + t2598 + t2898 + t2910 + t3311 + t3617 + t3621;
  t3665 = 0.4*t157*t3370;
  t3809 = -1.*t157*t3370;
  t3831 = t3809 + t1814;
  t3834 = 0.8*t3831;
  t3835 = t3665 + t1693 + t3834;
  t4131 = 2.*var2[4]*t1890;
  t4169 = 2.*var2[2]*t2527;
  t4174 = 2.*var2[3]*t2527;
  t4225 = t1150 + t1602 + t1683 + t4131 + t4169 + t4174;
  t3630 = -0.4*t157*t1138;
  t3633 = 0.4*t3370*t1575;
  t3640 = -1.*t3370*t1575;
  t3643 = t1613 + t3640;
  t3657 = 0.8*t3643;
  t4240 = t1150 + t1602 + t1683;
  t4276 = 0.4*t2220*t1575;
  t4292 = -1.*t2220*t1575;
  t4324 = -0.4*t157*t3370;
  t4334 = t157*t3370;
  t4340 = t4334 + t4292;
  t4343 = 0.8*t4340;
  t4357 = t4324 + t4276 + t4343;
  t4425 = 0.4*t279*t3370;
  t4431 = -0.4*t1138*t1575;
  t4438 = t1138*t1575;
  t4479 = t4334 + t4438;
  t4486 = 0.8*t4479;
  t4492 = t4425 + t4431 + t4486;
  t4506 = var2[2]*t4492;
  t4529 = var2[3]*t4492;
  t4570 = var2[4]*t4357;
  t4590 = t4506 + t4529 + t4570;
  t4247 = var3[4]*t3300;
  t4254 = var3[2]*t3431;
  t4266 = var3[3]*t3431;
  t4274 = 0.4*t157*t1525;
  t4284 = -1.*t157*t1525;
  t4299 = t4284 + t4292;
  t4300 = 0.8*t4299;
  t4320 = t4274 + t4276 + t4300;
  t4322 = var2[4]*t4320;
  t4361 = var2[2]*t4357;
  t4372 = var2[3]*t4357;
  t4412 = t4322 + t4361 + t4372;
  t4414 = var2[4]*t4412;
  t4598 = var2[2]*t4590;
  t4602 = var2[3]*t4590;
  t4640 = t2116 + t2379 + t2517 + t4247 + t3328 + t4254 + t4266 + t3451 + t3605 + t4414 + t4598 + t4602;
  t4838 = 2.*var2[4]*t3300;
  t4848 = 2.*var2[2]*t3431;
  t4864 = 2.*var2[3]*t3431;
  t4868 = t2116 + t2379 + t2517 + t4838 + t4848 + t4864;
  p_output1[0]=1.;
  p_output1[1]=t3624;
  p_output1[2]=t3624;
  p_output1[3]=t3630 + t3633 + t3657 + t1890*var2[2] + t3307*var2[2] + t1890*var2[3] + t3307*var2[3] + t3835*var2[4] + var2[4]*(t3168*var2[2] + t3168*var2[3] + (t2931 + t3386 + 0.8*(t2974 + t3395))*var2[4]) + t1890*var3[2] + t1890*var3[3] + t3835*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t4225;
  p_output1[6]=t4225;
  p_output1[7]=t3630 + t3633 + t3657 + 2.*t1890*var2[2] + 2.*t1890*var2[3] + 2.*t3835*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t4240;
  p_output1[10]=t4240;
  p_output1[11]=t3630 + t3633 + t3657;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t4640;
  p_output1[16]=t4640;
  p_output1[17]=t1685 + t1693 + t1852 + t3169 + t3305 + t3306 + t4412*var2[2] + t4412*var2[3] + var2[4]*(t4320*var2[2] + t4320*var2[3] + (t4274 + t4431 + 0.8*(t4284 + t4438))*var2[4]) + t3300*var3[2] + t3300*var3[3] + t3168*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t4868;
  p_output1[20]=t4868;
  p_output1[21]=t1685 + t1693 + t1852 + 2.*t3300*var2[2] + 2.*t3300*var2[3] + 2.*t3168*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t2527;
  p_output1[24]=t2527;
  p_output1[25]=t1890;
  p_output1[26]=-1.;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightToe_RightStance.hh"

namespace RightStance
{

void J_ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
