/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:51:28 GMT-04:00
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
  double t87;
  double t96;
  double t77;
  double t97;
  double t35;
  double t91;
  double t100;
  double t108;
  double t117;
  double t118;
  double t123;
  double t127;
  double t139;
  double t140;
  double t141;
  double t142;
  double t145;
  double t146;
  double t149;
  double t51;
  double t73;
  double t157;
  double t158;
  double t161;
  double t154;
  double t162;
  double t2760;
  double t3058;
  double t3161;
  double t3177;
  double t4935;
  double t5803;
  double t7281;
  double t7449;
  double t7467;
  double t7476;
  double t7550;
  double t7759;
  double t7787;
  double t7808;
  double t7751;
  double t7856;
  double t7900;
  double t7903;
  double t7970;
  double t7983;
  double t7747;
  double t8052;
  double t8076;
  double t8077;
  double t109;
  double t128;
  double t131;
  double t132;
  double t135;
  double t136;
  double t150;
  double t153;
  double t3211;
  double t3357;
  double t3385;
  double t4877;
  double t4885;
  double t5751;
  double t6752;
  double t6761;
  double t7109;
  double t7217;
  double t7586;
  double t7619;
  double t7629;
  double t7735;
  double t8078;
  double t8085;
  double t8086;
  double t8165;
  double t8214;
  double t8216;
  double t8284;
  double t8288;
  double t10392;
  double t10403;
  double t10410;
  double t16547;
  double t8092;
  double t8093;
  double t8095;
  double t8096;
  double t8097;
  double t20437;
  double t21382;
  double t21439;
  double t22842;
  double t22846;
  double t22847;
  double t22848;
  double t22849;
  double t22914;
  double t22974;
  double t22975;
  double t22976;
  double t22980;
  double t22981;
  double t22982;
  double t22983;
  double t22984;
  double t22989;
  double t20515;
  double t20605;
  double t21346;
  double t21379;
  double t21418;
  double t21474;
  double t22820;
  double t22821;
  double t22840;
  double t22853;
  double t22854;
  double t22865;
  double t22876;
  double t22999;
  double t23003;
  double t23004;
  double t23042;
  double t23043;
  double t23044;
  double t23045;
  t87 = Cos(var1[3]);
  t96 = Sin(var1[2]);
  t77 = Cos(var1[2]);
  t97 = Sin(var1[3]);
  t35 = Cos(var1[4]);
  t91 = t77*t87;
  t100 = -1.*t96*t97;
  t108 = t91 + t100;
  t117 = -1.*t87*t96;
  t118 = -1.*t77*t97;
  t123 = t117 + t118;
  t127 = Sin(var1[4]);
  t139 = -0.4*t35*t123;
  t140 = 0.4*t108*t127;
  t141 = t35*t123;
  t142 = -1.*t108*t127;
  t145 = t141 + t142;
  t146 = 0.8*t145;
  t149 = t139 + t140 + t146;
  t51 = -1.*t35;
  t73 = 1. + t51;
  t157 = -1.*t77*t87;
  t158 = t96*t97;
  t161 = t157 + t158;
  t154 = 0.4*t73*t123;
  t162 = -0.4*t161*t127;
  t2760 = t161*t127;
  t3058 = t141 + t2760;
  t3161 = 0.8*t3058;
  t3177 = t154 + t162 + t3161;
  t4935 = 0.4*t123*t127;
  t5803 = -1.*t123*t127;
  t7281 = -0.4*t35*t161;
  t7449 = t35*t161;
  t7467 = t7449 + t5803;
  t7476 = 0.8*t7467;
  t7550 = t7281 + t4935 + t7476;
  t7759 = t87*t96;
  t7787 = t77*t97;
  t7808 = t7759 + t7787;
  t7751 = 0.4*t73*t161;
  t7856 = -0.4*t7808*t127;
  t7900 = t7808*t127;
  t7903 = t7449 + t7900;
  t7970 = 0.8*t7903;
  t7983 = t7751 + t7856 + t7970;
  t7747 = var2[4]*t7550;
  t8052 = var2[2]*t7983;
  t8076 = var2[3]*t7983;
  t8077 = t7747 + t8052 + t8076;
  t109 = 0.4*t73*t108;
  t128 = -0.4*t123*t127;
  t131 = t35*t108;
  t132 = t123*t127;
  t135 = t131 + t132;
  t136 = 0.8*t135;
  t150 = var3[4]*t149;
  t153 = var2[4]*t149;
  t3211 = var3[2]*t3177;
  t3357 = var3[3]*t3177;
  t3385 = var2[2]*t3177;
  t4877 = var2[3]*t3177;
  t4885 = 0.4*t35*t108;
  t5751 = -1.*t35*t108;
  t6752 = t5751 + t5803;
  t6761 = 0.8*t6752;
  t7109 = t4885 + t4935 + t6761;
  t7217 = var2[4]*t7109;
  t7586 = var2[2]*t7550;
  t7619 = var2[3]*t7550;
  t7629 = t7217 + t7586 + t7619;
  t7735 = var2[4]*t7629;
  t8078 = var2[2]*t8077;
  t8085 = var2[3]*t8077;
  t8086 = t109 + t128 + t136 + t150 + t153 + t3211 + t3357 + t3385 + t4877 + t7735 + t8078 + t8085;
  t8165 = 0.4*t35*t7808;
  t8214 = -1.*t35*t7808;
  t8216 = t8214 + t142;
  t8284 = 0.8*t8216;
  t8288 = t8165 + t140 + t8284;
  t10392 = 2.*var2[4]*t149;
  t10403 = 2.*var2[2]*t3177;
  t10410 = 2.*var2[3]*t3177;
  t16547 = t109 + t128 + t136 + t10392 + t10403 + t10410;
  t8092 = -0.4*t35*t108;
  t8093 = 0.4*t7808*t127;
  t8095 = -1.*t7808*t127;
  t8096 = t131 + t8095;
  t8097 = 0.8*t8096;
  t20437 = t109 + t128 + t136;
  t21382 = 0.4*t161*t127;
  t21439 = -1.*t161*t127;
  t22842 = -0.4*t35*t7808;
  t22846 = t35*t7808;
  t22847 = t22846 + t21439;
  t22848 = 0.8*t22847;
  t22849 = t22842 + t21382 + t22848;
  t22914 = 0.4*t73*t7808;
  t22974 = -0.4*t108*t127;
  t22975 = t108*t127;
  t22976 = t22846 + t22975;
  t22980 = 0.8*t22976;
  t22981 = t22914 + t22974 + t22980;
  t22982 = var2[2]*t22981;
  t22983 = var2[3]*t22981;
  t22984 = var2[4]*t22849;
  t22989 = t22982 + t22983 + t22984;
  t20515 = var3[4]*t7550;
  t20605 = var3[2]*t7983;
  t21346 = var3[3]*t7983;
  t21379 = 0.4*t35*t123;
  t21418 = -1.*t35*t123;
  t21474 = t21418 + t21439;
  t22820 = 0.8*t21474;
  t22821 = t21379 + t21382 + t22820;
  t22840 = var2[4]*t22821;
  t22853 = var2[2]*t22849;
  t22854 = var2[3]*t22849;
  t22865 = t22840 + t22853 + t22854;
  t22876 = var2[4]*t22865;
  t22999 = var2[2]*t22989;
  t23003 = var2[3]*t22989;
  t23004 = t154 + t162 + t3161 + t20515 + t7747 + t20605 + t21346 + t8052 + t8076 + t22876 + t22999 + t23003;
  t23042 = 2.*var2[4]*t7550;
  t23043 = 2.*var2[2]*t7983;
  t23044 = 2.*var2[3]*t7983;
  t23045 = t154 + t162 + t3161 + t23042 + t23043 + t23044;
  p_output1[0]=1.;
  p_output1[1]=t8086;
  p_output1[2]=t8086;
  p_output1[3]=t8092 + t8093 + t8097 + t149*var2[2] + t7629*var2[2] + t149*var2[3] + t7629*var2[3] + t8288*var2[4] + var2[4]*(t7109*var2[2] + t7109*var2[3] + (t4885 + t7856 + 0.8*(t5751 + t7900))*var2[4]) + t149*var3[2] + t149*var3[3] + t8288*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t16547;
  p_output1[6]=t16547;
  p_output1[7]=t8092 + t8093 + t8097 + 2.*t149*var2[2] + 2.*t149*var2[3] + 2.*t8288*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t20437;
  p_output1[10]=t20437;
  p_output1[11]=t8092 + t8093 + t8097;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t23004;
  p_output1[16]=t23004;
  p_output1[17]=t139 + t140 + t146 + t7217 + t7586 + t7619 + t22865*var2[2] + t22865*var2[3] + var2[4]*(t22821*var2[2] + t22821*var2[3] + (t21379 + t22974 + 0.8*(t21418 + t22975))*var2[4]) + t7550*var3[2] + t7550*var3[3] + t7109*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t23045;
  p_output1[20]=t23045;
  p_output1[21]=t139 + t140 + t146 + 2.*t7550*var2[2] + 2.*t7550*var2[3] + 2.*t7109*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t3177;
  p_output1[24]=t3177;
  p_output1[25]=t149;
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
