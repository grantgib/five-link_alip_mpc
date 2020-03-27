/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:46:29 GMT-04:00
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
  double t3336;
  double t167;
  double t170;
  double t3340;
  double t147;
  double t3841;
  double t3856;
  double t3869;
  double t4000;
  double t4033;
  double t194;
  double t3599;
  double t3642;
  double t4088;
  double t4094;
  double t4098;
  double t3825;
  double t4056;
  double t4475;
  double t4496;
  double t4520;
  double t4762;
  double t8259;
  double t8266;
  double t8383;
  double t8385;
  double t8386;
  double t9501;
  double t9514;
  double t9550;
  double t4263;
  double t4368;
  double t4398;
  double t4523;
  double t4569;
  double t4582;
  double t4663;
  double t4744;
  double t8324;
  double t8329;
  double t8335;
  double t8344;
  double t8358;
  double t8367;
  double t8391;
  double t8393;
  double t8396;
  double t8398;
  double t9372;
  double t9397;
  double t9560;
  double t9721;
  double t9746;
  double t9750;
  double t9763;
  double t9787;
  double t9823;
  double t9824;
  double t9825;
  double t9828;
  double t9829;
  double t9850;
  double t9851;
  double t9852;
  double t9865;
  double t9867;
  double t9866;
  double t9868;
  double t9869;
  double t9897;
  double t9898;
  double t9899;
  double t9909;
  double t9914;
  double t9917;
  double t9918;
  double t9924;
  double t9908;
  double t9910;
  double t9919;
  double t9920;
  double t9923;
  double t9925;
  double t9953;
  double t9954;
  double t9955;
  double t9894;
  double t9969;
  double t9971;
  double t9972;
  double t9830;
  double t9831;
  double t9846;
  double t9847;
  double t9848;
  double t9849;
  double t9853;
  double t9854;
  double t9855;
  double t9856;
  double t9857;
  double t9864;
  double t9965;
  double t9967;
  double t9973;
  double t9974;
  double t9977;
  double t9980;
  double t9981;
  double t9982;
  double t9989;
  double t9990;
  double t10001;
  double t10002;
  double t9791;
  double t9792;
  double t9820;
  double t9821;
  double t9904;
  double t9906;
  double t9928;
  double t9949;
  double t10009;
  double t10010;
  double t10015;
  double t10016;
  double t10039;
  double t10040;
  double t10041;
  double t10042;
  double t10043;
  double t10044;
  double t10045;
  double t10046;
  double t10048;
  double t10049;
  double t10050;
  double t10054;
  double t10055;
  double t10056;
  double t10047;
  double t10051;
  double t10052;
  double t10053;
  double t10058;
  double t10059;
  double t10063;
  double t10064;
  double t10065;
  double t10066;
  double t10075;
  double t10076;
  double t10068;
  double t10078;
  double t10079;
  double t10070;
  double t10023;
  double t10028;
  double t10033;
  double t10034;
  double t10035;
  double t10038;
  double t10098;
  double t10099;
  double t10100;
  double t10101;
  double t10102;
  double t10103;
  double t10104;
  double t10105;
  double t10107;
  double t10108;
  double t10109;
  double t10092;
  double t10093;
  double t10094;
  double t10095;
  double t10096;
  double t10097;
  double t10106;
  double t10110;
  double t10111;
  double t10113;
  double t10114;
  double t10115;
  double t10120;
  double t10121;
  double t10122;
  double t10119;
  double t10124;
  double t10125;
  double t10129;
  double t10138;
  double t10139;
  double t10131;
  double t10141;
  double t10142;
  double t10133;
  double t10154;
  double t10160;
  double t10161;
  double t10162;
  double t10155;
  double t10156;
  double t10157;
  double t10158;
  double t10166;
  double t10167;
  double t10187;
  double t10193;
  double t10194;
  double t10195;
  double t10188;
  double t10189;
  double t10190;
  double t10191;
  double t10199;
  double t10200;
  t3336 = Cos(var1[3]);
  t167 = Cos(var1[4]);
  t170 = Sin(var1[3]);
  t3340 = Sin(var1[4]);
  t147 = Sin(var1[2]);
  t3841 = Cos(var1[2]);
  t3856 = t3336*t167;
  t3869 = -1.*t170*t3340;
  t4000 = t3856 + t3869;
  t4033 = t3841*t4000;
  t194 = -1.*t167*t170;
  t3599 = -1.*t3336*t3340;
  t3642 = t194 + t3599;
  t4088 = t167*t170;
  t4094 = t3336*t3340;
  t4098 = t4088 + t4094;
  t3825 = t147*t3642;
  t4056 = t3825 + t4033;
  t4475 = t3841*t3642;
  t4496 = -1.*t147*t4000;
  t4520 = t4475 + t4496;
  t4762 = -1.*t3336*t167;
  t8259 = t170*t3340;
  t8266 = t4762 + t8259;
  t8383 = -1.*t3336*t147;
  t8385 = -1.*t3841*t170;
  t8386 = t8383 + t8385;
  t9501 = t3841*t3336;
  t9514 = -1.*t147*t170;
  t9550 = t9501 + t9514;
  t4263 = -1.*t147*t4098;
  t4368 = t4263 + t4033;
  t4398 = 3.2*t4056*t4368;
  t4523 = t3841*t4098;
  t4569 = t147*t4000;
  t4582 = t4523 + t4569;
  t4663 = 3.2*t4520*t4582;
  t4744 = -1.*t147*t3642;
  t8324 = t3841*t8266;
  t8329 = t4744 + t8324;
  t8335 = 3.2*t4056*t8329;
  t8344 = t147*t8266;
  t8358 = t4475 + t8344;
  t8367 = 3.2*t4520*t8358;
  t8391 = Power(t8386,2);
  t8393 = 6.8*t8391;
  t8396 = t3336*t147;
  t8398 = t3841*t170;
  t9372 = t8396 + t8398;
  t9397 = 6.8*t8386*t9372;
  t9560 = Power(t9550,2);
  t9721 = 6.8*t9560;
  t9746 = -1.*t3841*t3336;
  t9750 = t147*t170;
  t9763 = t9746 + t9750;
  t9787 = 6.8*t9550*t9763;
  t9823 = Cos(var1[5]);
  t9824 = -1.*t9823*t147;
  t9825 = Sin(var1[5]);
  t9828 = -1.*t3841*t9825;
  t9829 = t9824 + t9828;
  t9850 = t3841*t9823;
  t9851 = -1.*t147*t9825;
  t9852 = t9850 + t9851;
  t9865 = Cos(var1[6]);
  t9867 = Sin(var1[6]);
  t9866 = -1.*t9865*t9825;
  t9868 = -1.*t9823*t9867;
  t9869 = t9866 + t9868;
  t9897 = t9823*t9865;
  t9898 = -1.*t9825*t9867;
  t9899 = t9897 + t9898;
  t9909 = t3841*t9899;
  t9914 = t9865*t9825;
  t9917 = t9823*t9867;
  t9918 = t9914 + t9917;
  t9924 = -1.*t147*t9899;
  t9908 = t147*t9869;
  t9910 = t9908 + t9909;
  t9919 = -1.*t147*t9918;
  t9920 = t9919 + t9909;
  t9923 = t3841*t9869;
  t9925 = t9923 + t9924;
  t9953 = t3841*t9918;
  t9954 = t147*t9899;
  t9955 = t9953 + t9954;
  t9894 = -1.*t147*t9869;
  t9969 = -1.*t9823*t9865;
  t9971 = t9825*t9867;
  t9972 = t9969 + t9971;
  t9830 = Power(t9829,2);
  t9831 = 6.8*t9830;
  t9846 = t9823*t147;
  t9847 = t3841*t9825;
  t9848 = t9846 + t9847;
  t9849 = 6.8*t9829*t9848;
  t9853 = Power(t9852,2);
  t9854 = 6.8*t9853;
  t9855 = -1.*t3841*t9823;
  t9856 = t147*t9825;
  t9857 = t9855 + t9856;
  t9864 = 6.8*t9852*t9857;
  t9965 = 3.2*t9910*t9920;
  t9967 = 3.2*t9925*t9955;
  t9973 = t3841*t9972;
  t9974 = t9894 + t9973;
  t9977 = 3.2*t9910*t9974;
  t9980 = t147*t9972;
  t9981 = t9923 + t9980;
  t9982 = 3.2*t9925*t9981;
  t9989 = 6.4*t4368*t4520;
  t9990 = 6.4*t4520*t8329;
  t10001 = 13.6*t8386*t9550;
  t10002 = 13.6*t8386*t9763;
  t9791 = -1.*t3841*t4000;
  t9792 = t4744 + t9791;
  t9820 = -1.*t3841*t4098;
  t9821 = t9820 + t4496;
  t9904 = -1.*t3841*t9899;
  t9906 = t9894 + t9904;
  t9928 = -1.*t3841*t9918;
  t9949 = t9928 + t9924;
  t10009 = 13.6*t9829*t9852;
  t10010 = 13.6*t9829*t9857;
  t10015 = 6.4*t9920*t9925;
  t10016 = 6.4*t9925*t9974;
  t10039 = -1.*t167;
  t10040 = 1. + t10039;
  t10041 = 0.4*t10040;
  t10042 = 0.64*t167;
  t10043 = t10041 + t10042;
  t10044 = t10043*t170;
  t10045 = 0.24*t3336*t3340;
  t10046 = t10044 + t10045;
  t10048 = t3336*t10043;
  t10049 = -0.24*t170*t3340;
  t10050 = t10048 + t10049;
  t10054 = -1.*t10043*t170;
  t10055 = -0.24*t3336*t3340;
  t10056 = t10054 + t10055;
  t10047 = -1.*t10046*t4000;
  t10051 = -1.*t3642*t10050;
  t10052 = t10047 + t10051;
  t10053 = 3.2*t4520*t10052;
  t10058 = t10046*t4000;
  t10059 = t3642*t10050;
  t10063 = t10046*t4098;
  t10064 = t4000*t10050;
  t10065 = t10063 + t10064;
  t10066 = 3.2*t10065*t8329;
  t10075 = -0.24*t167*t170;
  t10076 = t10075 + t10055;
  t10068 = -1.*t3642*t10046;
  t10078 = 0.24*t3336*t167;
  t10079 = t10078 + t10049;
  t10070 = -1.*t10050*t8266;
  t10023 = Power(t3336,2);
  t10028 = 0.11*t10023;
  t10033 = Power(t170,2);
  t10034 = 0.11*t10033;
  t10035 = t10028 + t10034;
  t10038 = 6.8*t9763*t10035;
  t10098 = -1.*t9865;
  t10099 = 1. + t10098;
  t10100 = 0.4*t10099;
  t10101 = 0.64*t9865;
  t10102 = t10100 + t10101;
  t10103 = t10102*t9825;
  t10104 = 0.24*t9823*t9867;
  t10105 = t10103 + t10104;
  t10107 = t9823*t10102;
  t10108 = -0.24*t9825*t9867;
  t10109 = t10107 + t10108;
  t10092 = Power(t9823,2);
  t10093 = 0.11*t10092;
  t10094 = Power(t9825,2);
  t10095 = 0.11*t10094;
  t10096 = t10093 + t10095;
  t10097 = 6.8*t9857*t10096;
  t10106 = -1.*t10105*t9899;
  t10110 = -1.*t9869*t10109;
  t10111 = t10106 + t10110;
  t10113 = t10105*t9918;
  t10114 = t9899*t10109;
  t10115 = t10113 + t10114;
  t10120 = -1.*t10102*t9825;
  t10121 = -0.24*t9823*t9867;
  t10122 = t10120 + t10121;
  t10119 = 3.2*t9925*t10111;
  t10124 = t10105*t9899;
  t10125 = t9869*t10109;
  t10129 = 3.2*t10115*t9974;
  t10138 = -0.24*t9865*t9825;
  t10139 = t10138 + t10121;
  t10131 = -1.*t9869*t10105;
  t10141 = 0.24*t9823*t9865;
  t10142 = t10141 + t10108;
  t10133 = -1.*t10109*t9972;
  t10154 = 0.748*t9763;
  t10160 = t10043*t3340;
  t10161 = -0.24*t167*t3340;
  t10162 = t10160 + t10161;
  t10155 = t10043*t167;
  t10156 = Power(t3340,2);
  t10157 = 0.24*t10156;
  t10158 = t10155 + t10157;
  t10166 = 3.2*t10162*t4520;
  t10167 = 3.2*t10158*t8329;
  t10187 = 0.748*t9857;
  t10193 = t10102*t9867;
  t10194 = -0.24*t9865*t9867;
  t10195 = t10193 + t10194;
  t10188 = t10102*t9865;
  t10189 = Power(t9867,2);
  t10190 = 0.24*t10189;
  t10191 = t10188 + t10190;
  t10199 = 3.2*t10195*t9925;
  t10200 = 3.2*t10191*t9974;
  p_output1[0]=var2[1]*(-0.5*(3.2*Power(t4368,2) + 3.2*Power(t4520,2) + t8393 + t9397 + t9721 + t9787 + 3.2*t4056*t9792 + 3.2*t4582*t9821 + t9831 + t9849 + t9854 + t9864 + 3.2*t9906*t9910 + 3.2*Power(t9920,2) + 3.2*Power(t9925,2) + 3.2*t9949*t9955)*var2[2] - 0.5*(t4398 + t4663 + t8335 + t8367 + t8393 + t9397 + t9721 + t9787)*var2[3] - 0.5*(t4398 + t4663 + t8335 + t8367)*var2[4] - 0.5*(t9831 + t9849 + t9854 + t9864 + t9965 + t9967 + t9977 + t9982)*var2[5] - 0.5*(t9965 + t9967 + t9977 + t9982)*var2[6]);
  p_output1[1]=var2[1]*(-0.5*(t10001 + t10002 + t10009 + t10010 + 6.4*t4520*t9792 + 6.4*t4368*t9821 + 6.4*t9906*t9925 + 6.4*t9920*t9949)*var2[2] - 0.5*(t10001 + t10002 + t9989 + t9990)*var2[3] - 0.5*(t9989 + t9990)*var2[4] - 0.5*(t10009 + t10010 + t10015 + t10016)*var2[5] - 0.5*(t10015 + t10016)*var2[6]);
  p_output1[2]=var2[1]*(-0.5*(t10038 + t10097 - 2.88*t3841 + 3.2*t10065*t9792 + 3.2*t10052*t9821 + 3.2*t10115*t9906 + 3.2*t10111*t9949)*var2[2] - 0.5*(t10038 + t10053 + t10066 + 3.2*(t10068 + t10070 - 1.*t10056*t3642 - 1.*t10050*t4000)*t4368 + 3.2*(t10058 + t10059 + t10056*t4000 + t10050*t4098)*t4520)*var2[3] - 0.5*(t10053 + t10066 + 3.2*(t10068 + t10070 - 1.*t10076*t3642 - 1.*t10079*t4000)*t4368 + 3.2*(t10058 + t10059 + t10076*t4000 + t10079*t4098)*t4520)*var2[4] - 0.5*(t10097 + t10119 + t10129 + 3.2*(t10131 + t10133 - 1.*t10122*t9869 - 1.*t10109*t9899)*t9920 + 3.2*(t10124 + t10125 + t10122*t9899 + t10109*t9918)*t9925)*var2[5] - 0.5*(t10119 + t10129 + 3.2*(t10131 + t10133 - 1.*t10139*t9869 - 1.*t10142*t9899)*t9920 + 3.2*(t10124 + t10125 + t10139*t9899 + t10142*t9918)*t9925)*var2[6]);
  p_output1[3]=var2[1]*(-0.5*(t10154 + 3.2*t10158*t9792 + 3.2*t10162*t9821)*var2[2] - 0.5*(t10154 + t10166 + t10167)*var2[3] - 0.5*(t10166 + t10167 + 3.2*(t10155 - 0.24*Power(t167,2))*t4368 + 3.2*(-1.*t10043*t3340 + 0.24*t167*t3340)*t4520)*var2[4]);
  p_output1[4]=var2[1]*(-0.384*t9792*var2[2] - 0.384*t8329*var2[3] - 0.384*t8329*var2[4]);
  p_output1[5]=var2[1]*(-0.5*(t10187 + 3.2*t10191*t9906 + 3.2*t10195*t9949)*var2[2] - 0.5*(t10187 + t10199 + t10200)*var2[5] - 0.5*(t10199 + t10200 + 3.2*(t10188 - 0.24*Power(t9865,2))*t9920 + 3.2*(-1.*t10102*t9867 + 0.24*t9865*t9867)*t9925)*var2[6]);
  p_output1[6]=var2[1]*(-0.384*t9906*var2[2] - 0.384*t9974*var2[5] - 0.384*t9974*var2[6]);
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

#include "Ce1_vec2_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
