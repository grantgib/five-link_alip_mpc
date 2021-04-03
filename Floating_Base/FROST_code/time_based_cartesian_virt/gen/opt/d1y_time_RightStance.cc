/*
 * Automatically Generated from Mathematica.
 * Mon 8 Feb 2021 04:15:47 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t138;
  double t184;
  double t255;
  double t314;
  double t341;
  double t631;
  double t831;
  double t1062;
  double t1087;
  double t1095;
  double t1097;
  double t1327;
  double t1383;
  double t1704;
  double t1752;
  double t1780;
  double t1962;
  double t1963;
  double t1988;
  double t2011;
  double t2021;
  double t2135;
  double t2508;
  double t2484;
  double t2486;
  double t2512;
  double t2366;
  double t2502;
  double t2515;
  double t2528;
  double t2545;
  double t2617;
  double t2618;
  double t2621;
  double t2667;
  double t2771;
  double t2777;
  double t2781;
  double t2700;
  double t2702;
  double t2739;
  double t2804;
  double t2807;
  double t2902;
  double t2990;
  double t3001;
  double t3987;
  double t4337;
  double t4701;
  double t4710;
  double t4878;
  double t5020;
  double t4814;
  double t4980;
  double t5037;
  double t5051;
  double t5085;
  double t5090;
  double t5100;
  double t5103;
  double t3958;
  double t3980;
  double t3995;
  double t3998;
  double t4045;
  double t4867;
  double t4873;
  double t5082;
  double t5120;
  double t5152;
  double t5157;
  double t5189;
  double t5225;
  double t5309;
  double t5319;
  double t5323;
  double t2529;
  double t2649;
  double t2676;
  double t2680;
  double t2684;
  double t2686;
  double t2690;
  double t3034;
  double t5851;
  double t5924;
  double t5958;
  double t5963;
  double t5917;
  double t5980;
  double t5982;
  double t5985;
  double t5995;
  t138 = -1.*var5[1];
  t184 = var5[0] + t138;
  t255 = Power(t184,-5);
  t314 = -1. + var6[0];
  t341 = -1. + var7[0];
  t631 = 1/t341;
  t831 = -1.*var1[0];
  t1062 = t831 + var1[1];
  t1087 = t314*t631*t1062;
  t1095 = t138 + var1[0] + t1087;
  t1097 = Power(t1095,4);
  t1327 = Power(t184,-4);
  t1383 = Power(t1095,3);
  t1704 = 1/t184;
  t1752 = -1.*t1704*t1095;
  t1780 = 1. + t1752;
  t1962 = Power(t184,-3);
  t1963 = Power(t1095,2);
  t1988 = Power(t1780,2);
  t2011 = Power(t184,-2);
  t2021 = Power(t1780,3);
  t2135 = Power(t1780,4);
  t2508 = Cos(var2[2]);
  t2484 = Cos(var2[3]);
  t2486 = Sin(var2[2]);
  t2512 = Sin(var2[3]);
  t2366 = Cos(var2[4]);
  t2502 = -1.*t2484*t2486;
  t2515 = -1.*t2508*t2512;
  t2528 = t2502 + t2515;
  t2545 = t2508*t2484;
  t2617 = -1.*t2486*t2512;
  t2618 = t2545 + t2617;
  t2621 = Sin(var2[4]);
  t2667 = t2366*t2528;
  t2771 = -1.*t2508*t2484;
  t2777 = t2486*t2512;
  t2781 = t2771 + t2777;
  t2700 = -1.*t2366;
  t2702 = 1. + t2700;
  t2739 = -0.4*t2702*t2528;
  t2804 = 0.4*t2781*t2621;
  t2807 = t2781*t2621;
  t2902 = t2667 + t2807;
  t2990 = -0.8*t2902;
  t3001 = t2739 + t2804 + t2990;
  t3987 = t2366*t2618;
  t4337 = t2484*t2486;
  t4701 = t2508*t2512;
  t4710 = t4337 + t4701;
  t4878 = Cos(var2[5]);
  t5020 = Sin(var2[5]);
  t4814 = Cos(var2[6]);
  t4980 = t2508*t4878;
  t5037 = -1.*t2486*t5020;
  t5051 = t4980 + t5037;
  t5085 = -1.*t4878*t2486;
  t5090 = -1.*t2508*t5020;
  t5100 = t5085 + t5090;
  t5103 = Sin(var2[6]);
  t3958 = -0.4*t2702*t2618;
  t3980 = 0.4*t2528*t2621;
  t3995 = t2528*t2621;
  t3998 = t3987 + t3995;
  t4045 = -0.8*t3998;
  t4867 = -1.*t4814;
  t4873 = 1. + t4867;
  t5082 = 0.4*t4873*t5051;
  t5120 = -0.4*t5100*t5103;
  t5152 = t4814*t5051;
  t5157 = t5100*t5103;
  t5189 = t5152 + t5157;
  t5225 = 0.8*t5189;
  t5309 = t4878*t2486;
  t5319 = t2508*t5020;
  t5323 = t5309 + t5319;
  t2529 = 0.4*t2366*t2528;
  t2649 = -0.4*t2618*t2621;
  t2676 = -1.*t2618*t2621;
  t2680 = t2667 + t2676;
  t2684 = -0.8*t2680;
  t2686 = t2529 + t2649 + t2684;
  t2690 = var3[4]*t2686;
  t3034 = var3[3]*t3001;
  t5851 = t4814*t5100;
  t5924 = -1.*t2508*t4878;
  t5958 = t2486*t5020;
  t5963 = t5924 + t5958;
  t5917 = 0.4*t4873*t5100;
  t5980 = -0.4*t5963*t5103;
  t5982 = t5963*t5103;
  t5985 = t5851 + t5982;
  t5995 = 0.8*t5985;
  p_output1[0]=var3[2] + 5.*t1704*t2135*var4[0] + 20.*t1095*t2011*t2021*var4[4] - 5.*t1704*t2135*var4[4] + 30.*t1962*t1963*t1988*var4[8] - 20.*t1095*t2011*t2021*var4[8] + 20.*t1327*t1383*t1780*var4[12] - 30.*t1962*t1963*t1988*var4[12] - 20.*t1327*t1383*t1780*var4[16] + 5.*t1097*t255*var4[16] - 5.*t1097*t255*var4[20];
  p_output1[1]=t2690 + t3034 + t3001*var3[2] + 5.*t1704*t2135*var4[1] + 20.*t1095*t2011*t2021*var4[5] - 5.*t1704*t2135*var4[5] + 30.*t1962*t1963*t1988*var4[9] - 20.*t1095*t2011*t2021*var4[9] + 20.*t1327*t1383*t1780*var4[13] - 30.*t1962*t1963*t1988*var4[13] - 20.*t1327*t1383*t1780*var4[17] + 5.*t1097*t255*var4[17] - 5.*t1097*t255*var4[21];
  p_output1[2]=(t3958 + t3980 + t4045 + t5082 + t5120 + t5225)*var3[2] + (t3958 + t3980 + t4045)*var3[3] + (0.4*t2366*t2618 - 0.4*t2621*t4710 - 0.8*(t3987 - 1.*t2621*t4710))*var3[4] + (t5082 + t5120 + t5225)*var3[5] + (-0.4*t4814*t5051 + 0.4*t5103*t5323 + 0.8*(t5152 - 1.*t5103*t5323))*var3[6] + 5.*t1704*t2135*var4[2] + 20.*t1095*t2011*t2021*var4[6] - 5.*t1704*t2135*var4[6] + 30.*t1962*t1963*t1988*var4[10] - 20.*t1095*t2011*t2021*var4[10] + 20.*t1327*t1383*t1780*var4[14] - 30.*t1962*t1963*t1988*var4[14] - 20.*t1327*t1383*t1780*var4[18] + 5.*t1097*t255*var4[18] - 5.*t1097*t255*var4[22];
  p_output1[3]=t2690 + t3034 + (t2739 + t2804 + t2990 + t5917 + t5980 + t5995)*var3[2] + (t5917 + t5980 + t5995)*var3[5] + (-0.4*t4814*t5100 + 0.4*t5051*t5103 + 0.8*(-1.*t5051*t5103 + t5851))*var3[6] + 5.*t1704*t2135*var4[3] + 20.*t1095*t2011*t2021*var4[7] - 5.*t1704*t2135*var4[7] + 30.*t1962*t1963*t1988*var4[11] - 20.*t1095*t2011*t2021*var4[11] + 20.*t1327*t1383*t1780*var4[15] - 30.*t1962*t1963*t1988*var4[15] - 20.*t1327*t1383*t1780*var4[19] + 5.*t1097*t255*var4[19] - 5.*t1097*t255*var4[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "d1y_time_RightStance.hh"

namespace RightStance
{

void d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
