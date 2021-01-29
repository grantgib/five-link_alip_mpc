/*
 * Automatically Generated from Mathematica.
 * Thu 28 Jan 2021 16:07:49 GMT-05:00
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
  double t1718;
  double t2048;
  double t1704;
  double t2298;
  double t59;
  double t1836;
  double t2564;
  double t2639;
  double t2864;
  double t2866;
  double t3013;
  double t3018;
  double t4220;
  double t4221;
  double t4326;
  double t4744;
  double t5830;
  double t5836;
  double t5841;
  double t762;
  double t1507;
  double t6102;
  double t6177;
  double t6181;
  double t6073;
  double t6182;
  double t6183;
  double t6184;
  double t6185;
  double t6197;
  double t6501;
  double t6514;
  double t6605;
  double t6616;
  double t6641;
  double t6642;
  double t6643;
  double t6783;
  double t6784;
  double t6785;
  double t6782;
  double t6786;
  double t6787;
  double t6788;
  double t6789;
  double t6790;
  double t6781;
  double t6791;
  double t6792;
  double t6793;
  double t2667;
  double t3527;
  double t3541;
  double t4065;
  double t4066;
  double t4106;
  double t5846;
  double t5903;
  double t6198;
  double t6202;
  double t6219;
  double t6463;
  double t6496;
  double t6504;
  double t6532;
  double t6552;
  double t6595;
  double t6596;
  double t6744;
  double t6745;
  double t6766;
  double t6767;
  double t6794;
  double t6795;
  double t6796;
  double t6815;
  double t6816;
  double t6817;
  double t6818;
  double t6819;
  double t7005;
  double t7015;
  double t7020;
  double t7027;
  double t6797;
  double t6798;
  double t6799;
  double t6800;
  double t6801;
  double t7036;
  double t7089;
  double t7122;
  double t7135;
  double t7136;
  double t7141;
  double t7144;
  double t7148;
  double t7169;
  double t7170;
  double t7171;
  double t7174;
  double t7186;
  double t7191;
  double t7193;
  double t7196;
  double t7200;
  double t7202;
  double t7047;
  double t7050;
  double t7055;
  double t7088;
  double t7121;
  double t7123;
  double t7124;
  double t7130;
  double t7134;
  double t7153;
  double t7161;
  double t7164;
  double t7166;
  double t7208;
  double t7209;
  double t7265;
  double t7413;
  double t7423;
  double t7426;
  double t7439;
  t1718 = Cos(var1[3]);
  t2048 = Sin(var1[2]);
  t1704 = Cos(var1[2]);
  t2298 = Sin(var1[3]);
  t59 = Cos(var1[4]);
  t1836 = t1704*t1718;
  t2564 = -1.*t2048*t2298;
  t2639 = t1836 + t2564;
  t2864 = -1.*t1718*t2048;
  t2866 = -1.*t1704*t2298;
  t3013 = t2864 + t2866;
  t3018 = Sin(var1[4]);
  t4220 = -0.4*t59*t3013;
  t4221 = 0.4*t2639*t3018;
  t4326 = t59*t3013;
  t4744 = -1.*t2639*t3018;
  t5830 = t4326 + t4744;
  t5836 = 0.8*t5830;
  t5841 = t4220 + t4221 + t5836;
  t762 = -1.*t59;
  t1507 = 1. + t762;
  t6102 = -1.*t1704*t1718;
  t6177 = t2048*t2298;
  t6181 = t6102 + t6177;
  t6073 = 0.4*t1507*t3013;
  t6182 = -0.4*t6181*t3018;
  t6183 = t6181*t3018;
  t6184 = t4326 + t6183;
  t6185 = 0.8*t6184;
  t6197 = t6073 + t6182 + t6185;
  t6501 = 0.4*t3013*t3018;
  t6514 = -1.*t3013*t3018;
  t6605 = -0.4*t59*t6181;
  t6616 = t59*t6181;
  t6641 = t6616 + t6514;
  t6642 = 0.8*t6641;
  t6643 = t6605 + t6501 + t6642;
  t6783 = t1718*t2048;
  t6784 = t1704*t2298;
  t6785 = t6783 + t6784;
  t6782 = 0.4*t1507*t6181;
  t6786 = -0.4*t6785*t3018;
  t6787 = t6785*t3018;
  t6788 = t6616 + t6787;
  t6789 = 0.8*t6788;
  t6790 = t6782 + t6786 + t6789;
  t6781 = var2[4]*t6643;
  t6791 = var2[2]*t6790;
  t6792 = var2[3]*t6790;
  t6793 = t6781 + t6791 + t6792;
  t2667 = 0.4*t1507*t2639;
  t3527 = -0.4*t3013*t3018;
  t3541 = t59*t2639;
  t4065 = t3013*t3018;
  t4066 = t3541 + t4065;
  t4106 = 0.8*t4066;
  t5846 = var3[4]*t5841;
  t5903 = var2[4]*t5841;
  t6198 = var3[2]*t6197;
  t6202 = var3[3]*t6197;
  t6219 = var2[2]*t6197;
  t6463 = var2[3]*t6197;
  t6496 = 0.4*t59*t2639;
  t6504 = -1.*t59*t2639;
  t6532 = t6504 + t6514;
  t6552 = 0.8*t6532;
  t6595 = t6496 + t6501 + t6552;
  t6596 = var2[4]*t6595;
  t6744 = var2[2]*t6643;
  t6745 = var2[3]*t6643;
  t6766 = t6596 + t6744 + t6745;
  t6767 = var2[4]*t6766;
  t6794 = var2[2]*t6793;
  t6795 = var2[3]*t6793;
  t6796 = t2667 + t3527 + t4106 + t5846 + t5903 + t6198 + t6202 + t6219 + t6463 + t6767 + t6794 + t6795;
  t6815 = 0.4*t59*t6785;
  t6816 = -1.*t59*t6785;
  t6817 = t6816 + t4744;
  t6818 = 0.8*t6817;
  t6819 = t6815 + t4221 + t6818;
  t7005 = 2.*var2[4]*t5841;
  t7015 = 2.*var2[2]*t6197;
  t7020 = 2.*var2[3]*t6197;
  t7027 = t2667 + t3527 + t4106 + t7005 + t7015 + t7020;
  t6797 = -0.4*t59*t2639;
  t6798 = 0.4*t6785*t3018;
  t6799 = -1.*t6785*t3018;
  t6800 = t3541 + t6799;
  t6801 = 0.8*t6800;
  t7036 = t2667 + t3527 + t4106;
  t7089 = 0.4*t6181*t3018;
  t7122 = -1.*t6181*t3018;
  t7135 = -0.4*t59*t6785;
  t7136 = t59*t6785;
  t7141 = t7136 + t7122;
  t7144 = 0.8*t7141;
  t7148 = t7135 + t7089 + t7144;
  t7169 = 0.4*t1507*t6785;
  t7170 = -0.4*t2639*t3018;
  t7171 = t2639*t3018;
  t7174 = t7136 + t7171;
  t7186 = 0.8*t7174;
  t7191 = t7169 + t7170 + t7186;
  t7193 = var2[2]*t7191;
  t7196 = var2[3]*t7191;
  t7200 = var2[4]*t7148;
  t7202 = t7193 + t7196 + t7200;
  t7047 = var3[4]*t6643;
  t7050 = var3[2]*t6790;
  t7055 = var3[3]*t6790;
  t7088 = 0.4*t59*t3013;
  t7121 = -1.*t59*t3013;
  t7123 = t7121 + t7122;
  t7124 = 0.8*t7123;
  t7130 = t7088 + t7089 + t7124;
  t7134 = var2[4]*t7130;
  t7153 = var2[2]*t7148;
  t7161 = var2[3]*t7148;
  t7164 = t7134 + t7153 + t7161;
  t7166 = var2[4]*t7164;
  t7208 = var2[2]*t7202;
  t7209 = var2[3]*t7202;
  t7265 = t6073 + t6182 + t6185 + t7047 + t6781 + t7050 + t7055 + t6791 + t6792 + t7166 + t7208 + t7209;
  t7413 = 2.*var2[4]*t6643;
  t7423 = 2.*var2[2]*t6790;
  t7426 = 2.*var2[3]*t6790;
  t7439 = t6073 + t6182 + t6185 + t7413 + t7423 + t7426;
  p_output1[0]=1.;
  p_output1[1]=t6796;
  p_output1[2]=t6796;
  p_output1[3]=t6797 + t6798 + t6801 + t5841*var2[2] + t6766*var2[2] + t5841*var2[3] + t6766*var2[3] + t6819*var2[4] + var2[4]*(t6595*var2[2] + t6595*var2[3] + (t6496 + t6786 + 0.8*(t6504 + t6787))*var2[4]) + t5841*var3[2] + t5841*var3[3] + t6819*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t7027;
  p_output1[6]=t7027;
  p_output1[7]=t6797 + t6798 + t6801 + 2.*t5841*var2[2] + 2.*t5841*var2[3] + 2.*t6819*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t7036;
  p_output1[10]=t7036;
  p_output1[11]=t6797 + t6798 + t6801;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t7265;
  p_output1[16]=t7265;
  p_output1[17]=t4220 + t4221 + t5836 + t6596 + t6744 + t6745 + t7164*var2[2] + t7164*var2[3] + var2[4]*(t7130*var2[2] + t7130*var2[3] + (t7088 + t7170 + 0.8*(t7121 + t7171))*var2[4]) + t6643*var3[2] + t6643*var3[3] + t6595*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t7439;
  p_output1[20]=t7439;
  p_output1[21]=t4220 + t4221 + t5836 + 2.*t6643*var2[2] + 2.*t6643*var2[3] + 2.*t6595*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t6197;
  p_output1[24]=t6197;
  p_output1[25]=t5841;
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
