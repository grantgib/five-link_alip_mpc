/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:48:51 GMT-04:00
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
  double t3933;
  double t2985;
  double t3013;
  double t2939;
  double t4184;
  double t2723;
  double t4048;
  double t4049;
  double t4057;
  double t4116;
  double t4119;
  double t4278;
  double t4319;
  double t4320;
  double t2951;
  double t3065;
  double t3112;
  double t3355;
  double t4380;
  double t4798;
  double t4855;
  double t4259;
  double t4261;
  double t4262;
  double t5278;
  double t4183;
  double t4187;
  double t4256;
  double t4257;
  double t4277;
  double t4909;
  double t4932;
  double t5002;
  double t5565;
  double t5576;
  double t5629;
  double t5630;
  double t5649;
  double t5653;
  double t5658;
  double t5659;
  double t5660;
  double t5662;
  double t5712;
  double t5721;
  double t5727;
  double t5736;
  double t5806;
  double t5864;
  double t5968;
  double t6262;
  double t6363;
  double t6796;
  double t5760;
  double t5761;
  double t5768;
  double t5732;
  double t5737;
  double t5759;
  double t5775;
  double t5795;
  double t6861;
  double t6884;
  double t6897;
  double t6932;
  double t6943;
  double t7748;
  double t7778;
  double t7779;
  double t7784;
  double t7790;
  double t7792;
  double t7799;
  double t7834;
  double t7599;
  double t7680;
  double t7690;
  double t7850;
  double t7877;
  double t7902;
  double t8001;
  double t4321;
  double t8552;
  double t8556;
  double t8614;
  double t8620;
  double t4330;
  double t8648;
  double t8974;
  double t5262;
  double t5289;
  double t8978;
  double t8992;
  double t9001;
  double t9007;
  double t9273;
  double t9301;
  double t9302;
  double t9014;
  double t9015;
  double t9017;
  double t9361;
  double t9419;
  double t9467;
  double t7440;
  double t7441;
  double t7487;
  double t4345;
  double t5309;
  double t5462;
  double t5542;
  double t5797;
  double t10116;
  double t10117;
  double t10152;
  double t9795;
  double t9858;
  double t10112;
  double t10169;
  double t10170;
  double t10171;
  double t10161;
  double t10162;
  double t10163;
  double t10156;
  double t10978;
  double t11010;
  double t10173;
  double t10177;
  double t11094;
  double t11225;
  double t11501;
  double t11542;
  double t10190;
  double t10264;
  double t10272;
  double t10281;
  double t10810;
  double t10939;
  double t10965;
  double t11080;
  double t11082;
  double t11319;
  double t11620;
  double t11644;
  double t11747;
  double t14029;
  double t14646;
  double t14937;
  double t14961;
  double t15301;
  double t15361;
  double t15364;
  double t15581;
  double t15582;
  double t15594;
  double t15595;
  double t15599;
  double t15606;
  double t15623;
  double t15624;
  double t15625;
  double t15662;
  double t15667;
  double t15668;
  double t15670;
  double t15671;
  double t15673;
  double t15693;
  double t15694;
  double t16213;
  double t16262;
  double t16314;
  double t17029;
  double t17030;
  double t17081;
  double t17242;
  double t17547;
  double t18913;
  double t19010;
  double t19045;
  t3933 = Cos(var1[4]);
  t2985 = Sin(var1[2]);
  t3013 = Sin(var1[3]);
  t2939 = Cos(var1[3]);
  t4184 = Sin(var1[4]);
  t2723 = Cos(var1[2]);
  t4048 = -1.*t3933;
  t4049 = 1. + t4048;
  t4057 = 0.4*t4049;
  t4116 = 0.64*t3933;
  t4119 = t4057 + t4116;
  t4278 = t2939*t3933;
  t4319 = -1.*t3013*t4184;
  t4320 = t4278 + t4319;
  t2951 = -1.*t2723*t2939;
  t3065 = t2985*t3013;
  t3112 = t2951 + t3065;
  t3355 = 0.748*t3112;
  t4380 = t4119*t4184;
  t4798 = -0.24*t3933*t4184;
  t4855 = t4380 + t4798;
  t4259 = -1.*t3933*t3013;
  t4261 = -1.*t2939*t4184;
  t4262 = t4259 + t4261;
  t5278 = -1.*t2985*t4320;
  t4183 = t4119*t3933;
  t4187 = Power(t4184,2);
  t4256 = 0.24*t4187;
  t4257 = t4183 + t4256;
  t4277 = -1.*t2985*t4262;
  t4909 = t3933*t3013;
  t4932 = t2939*t4184;
  t5002 = t4909 + t4932;
  t5565 = t2723*t4262;
  t5576 = t5565 + t5278;
  t5629 = 3.2*t4855*t5576;
  t5630 = -1.*t2939*t3933;
  t5649 = t3013*t4184;
  t5653 = t5630 + t5649;
  t5658 = t2723*t5653;
  t5659 = t4277 + t5658;
  t5660 = 3.2*t4257*t5659;
  t5662 = t3355 + t5629 + t5660;
  t5712 = Power(t3933,2);
  t5721 = -0.24*t5712;
  t5727 = t4183 + t5721;
  t5736 = t2723*t4320;
  t5806 = t2985*t5002;
  t5864 = t5806 + t5658;
  t5968 = 3.2*t4257*t5864;
  t6262 = t2985*t5653;
  t6363 = t5565 + t6262;
  t6796 = 3.2*t4855*t6363;
  t5760 = -1.*t4119*t4184;
  t5761 = 0.24*t3933*t4184;
  t5768 = t5760 + t5761;
  t5732 = -1.*t2985*t5002;
  t5737 = t5732 + t5736;
  t5759 = 3.2*t5727*t5737;
  t5775 = 3.2*t5768*t5576;
  t5795 = t5759 + t5629 + t5775 + t5660;
  t6861 = t2985*t4262;
  t6884 = t6861 + t5736;
  t6897 = 3.2*t5727*t6884;
  t6932 = 3.2*t5768*t6363;
  t6943 = t6897 + t5968 + t6796 + t6932;
  t7748 = -1.*t2939*t2985;
  t7778 = -1.*t2723*t3013;
  t7779 = t7748 + t7778;
  t7784 = 0.748*t7779;
  t7790 = 3.2*t4855*t5737;
  t7792 = 3.2*t4257*t5576;
  t7799 = t7784 + t7790 + t7792;
  t7834 = 3.2*t4855*t6884;
  t7599 = t2723*t5002;
  t7680 = t2985*t4320;
  t7690 = t7599 + t7680;
  t7850 = 3.2*t4257*t6363;
  t7877 = 3.2*t5768*t6884;
  t7902 = 3.2*t5727*t7690;
  t8001 = t7834 + t7877 + t7902 + t7850;
  t4321 = -1.*t2723*t4320;
  t8552 = t2939*t2985;
  t8556 = t2723*t3013;
  t8614 = t8552 + t8556;
  t8620 = 0.748*t8614;
  t4330 = t4277 + t4321;
  t8648 = -1.*t2723*t4262;
  t8974 = 3.2*t4855*t4330;
  t5262 = -1.*t2723*t5002;
  t5289 = t5262 + t5278;
  t8978 = -1.*t2985*t5653;
  t8992 = t8648 + t8978;
  t9001 = 3.2*t4257*t8992;
  t9007 = t8620 + t8974 + t9001;
  t9273 = 3.2*t4855*t5659;
  t9301 = t7599 + t8978;
  t9302 = 3.2*t4257*t9301;
  t9014 = 3.2*t5768*t4330;
  t9015 = 3.2*t5727*t5289;
  t9017 = t8974 + t9014 + t9015 + t9001;
  t9361 = 3.2*t5727*t5576;
  t9419 = 3.2*t5768*t5659;
  t9467 = t9361 + t9273 + t9419 + t9302;
  t7440 = -1.*t4119*t3933;
  t7441 = 0.24*t5712;
  t7487 = t7440 + t7441;
  t4345 = 3.2*t4257*t4330;
  t5309 = 3.2*t4855*t5289;
  t5462 = t3355 + t4345 + t5309;
  t5542 = -0.5*var2[2]*t5462;
  t5797 = -0.5*var2[4]*t5795;
  t10116 = t2939*t4119;
  t10117 = -0.24*t3013*t4184;
  t10152 = t10116 + t10117;
  t9795 = -1.*t4119*t3013;
  t9858 = -0.24*t2939*t4184;
  t10112 = t9795 + t9858;
  t10169 = t4119*t3013;
  t10170 = 0.24*t2939*t4184;
  t10171 = t10169 + t10170;
  t10161 = -1.*t2939*t4119;
  t10162 = 0.24*t3013*t4184;
  t10163 = t10161 + t10162;
  t10156 = -1.*t5002*t10152;
  t10978 = -0.24*t3933*t3013;
  t11010 = t10978 + t9858;
  t10173 = -1.*t10171*t5653;
  t10177 = t4262*t10171;
  t11094 = 0.24*t2939*t3933;
  t11225 = t11094 + t10117;
  t11501 = -0.24*t2939*t3933;
  t11542 = t11501 + t10162;
  t10190 = t10152*t5653;
  t10264 = t10112*t4320;
  t10272 = t10171*t4320;
  t10281 = t4262*t10152;
  t10810 = t5002*t10152;
  t10939 = t10264 + t10272 + t10281 + t10810;
  t10965 = 3.2*t5768*t10939;
  t11080 = -1.*t11010*t4320;
  t11082 = -1.*t4262*t10152;
  t11319 = -1.*t4262*t11225;
  t11620 = -1.*t4262*t11542;
  t11644 = -1.*t10112*t5653;
  t11747 = -1.*t11010*t5653;
  t14029 = t11080 + t11082 + t10156 + t11319 + t11620 + t11644 + t11747 + t10173;
  t14646 = 3.2*t4855*t14029;
  t14937 = -1.*t4262*t10112;
  t14961 = -1.*t4262*t10171;
  t15301 = -1.*t4320*t10152;
  t15361 = -1.*t10152*t5653;
  t15364 = t14937 + t14961 + t15301 + t15361;
  t15581 = 3.2*t5727*t15364;
  t15582 = t4262*t10112;
  t15594 = t4262*t11010;
  t15595 = t11010*t5002;
  t15599 = t4320*t10152;
  t15606 = t4320*t11225;
  t15623 = t4320*t11542;
  t15624 = t15582 + t15594 + t10177 + t15595 + t15599 + t15606 + t15623 + t10190;
  t15625 = 3.2*t4257*t15624;
  t15662 = t10965 + t14646 + t15581 + t15625;
  t15667 = -1.*t10171*t4320;
  t15668 = t15667 + t11082;
  t15670 = t10171*t5002;
  t15671 = t15670 + t15599;
  t15673 = t11010*t4320;
  t15693 = t5002*t11225;
  t15694 = t15673 + t10272 + t10281 + t15693;
  t16213 = -1.*t4262*t11010;
  t16262 = -1.*t4320*t11225;
  t16314 = t16213 + t14961 + t16262 + t15361;
  t17029 = 3.2*t5727*t15668;
  t17030 = 3.2*t5768*t15671;
  t17081 = 3.2*t4257*t15694;
  t17242 = 3.2*t4855*t16314;
  t17547 = t17029 + t17030 + t17081 + t17242;
  t18913 = 6.4*t5727*t4855;
  t19010 = 6.4*t5768*t4257;
  t19045 = t18913 + t19010;
  p_output1[0]=var2[3]*(t5542 + t5797 - 0.5*t5662*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t5662*var2[2] - 0.5*(t3355 + t5968 + t6796)*var2[3] - 0.5*t6943*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t5795*var2[2] - 0.5*t6943*var2[3] - 0.5*(t5968 + 6.4*t5768*t6363 + t6796 + 6.4*t5727*t6884 + 3.2*t6884*t7487 + 3.2*t5768*t7690)*var2[4]);
  p_output1[3]=-0.5*t7799*var2[3];
  p_output1[4]=-0.5*t7799*var2[2] - 1.*(t7784 + t7834 + t7850)*var2[3] - 0.5*t8001*var2[4];
  p_output1[5]=-0.5*t8001*var2[3];
  p_output1[6]=var2[3]*(-0.5*(3.2*t4855*(t4321 + t5806) + t8620 + 3.2*t4257*(t7680 + t8648))*var2[2] - 0.5*t9007*var2[3] - 0.5*t9017*var2[4]);
  p_output1[7]=var2[3]*(-0.5*t9007*var2[2] - 0.5*(t8620 + t9273 + t9302)*var2[3] - 0.5*t9467*var2[4]);
  p_output1[8]=var2[3]*(-0.5*t9017*var2[2] - 0.5*t9467*var2[3] - 0.5*(6.4*t5576*t5727 + 6.4*t5659*t5768 + 3.2*t5737*t5768 + 3.2*t5576*t7487 + t9273 + t9302)*var2[4]);
  p_output1[9]=-0.5*t5462*var2[3];
  p_output1[10]=t5542 + t5797 - 1.*t5662*var2[3];
  p_output1[11]=-0.5*t5795*var2[3];
  p_output1[12]=var2[3]*(-0.5*(3.2*t4257*(t10177 + t10190 + 2.*t10112*t4262 + 2.*t10152*t4320 + t10163*t4320 + t10112*t5002) + 3.2*t4855*(t10156 + t10173 - 2.*t10152*t4262 - 1.*t10163*t4262 - 1.*t10112*t4320 - 2.*t10112*t5653))*var2[3] - 0.5*t15662*var2[4]);
  p_output1[13]=var2[3]*(-0.5*t15662*var2[3] - 0.5*(3.2*t4257*(t10177 + t10190 + t15595 + t15623 + 2.*t11010*t4262 + 2.*t11225*t4320) + 3.2*t4855*(t10156 + t10173 + t11080 + t11620 - 2.*t11225*t4262 - 2.*t11010*t5653) + 6.4*t16314*t5727 + 3.2*t15668*t5768 + 6.4*t15694*t5768 + 3.2*t15671*t7487)*var2[4]);
  p_output1[14]=-1.*(3.2*t10939*t4257 + 3.2*t15364*t4855)*var2[3] - 0.5*t17547*var2[4];
  p_output1[15]=-0.5*t17547*var2[3];
  p_output1[16]=-0.5*(6.4*Power(t5727,2) + 6.4*t4855*t5768 + 6.4*Power(t5768,2) + 6.4*t4257*t7487)*var2[3]*var2[4];
  p_output1[17]=-0.5*t19045*var2[4];
  p_output1[18]=-0.5*t19045*var2[3];
  p_output1[19]=-0.384*t7487*var2[3]*var2[4];
  p_output1[20]=-0.384*t5768*var2[4];
  p_output1[21]=-0.384*t5768*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec4_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
