/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:34:45 GMT-04:00
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
  double t4377;
  double t4319;
  double t4320;
  double t4388;
  double t4102;
  double t4550;
  double t4553;
  double t4560;
  double t4573;
  double t4610;
  double t4368;
  double t4436;
  double t4440;
  double t4771;
  double t4772;
  double t9489;
  double t4497;
  double t4620;
  double t9668;
  double t9691;
  double t9821;
  double t9862;
  double t9863;
  double t9864;
  double t9911;
  double t9912;
  double t9913;
  double t9932;
  double t9933;
  double t9934;
  double t9537;
  double t9624;
  double t9656;
  double t9850;
  double t9851;
  double t9852;
  double t9860;
  double t9861;
  double t9873;
  double t9893;
  double t9894;
  double t9904;
  double t9905;
  double t9906;
  double t9914;
  double t9915;
  double t9916;
  double t9917;
  double t9930;
  double t9931;
  double t9935;
  double t9936;
  double t9937;
  double t9938;
  double t9939;
  double t9940;
  double t9990;
  double t9992;
  double t9993;
  double t9994;
  double t9995;
  double t10006;
  double t10007;
  double t10008;
  double t10038;
  double t10044;
  double t10039;
  double t10047;
  double t10048;
  double t10051;
  double t10053;
  double t10055;
  double t10061;
  double t10066;
  double t10067;
  double t10068;
  double t10074;
  double t10058;
  double t10064;
  double t10069;
  double t10070;
  double t10073;
  double t10079;
  double t10090;
  double t10091;
  double t10092;
  double t10049;
  double t10098;
  double t10099;
  double t10100;
  double t9998;
  double t10001;
  double t10002;
  double t10003;
  double t10004;
  double t10005;
  double t10009;
  double t10010;
  double t10011;
  double t10012;
  double t10033;
  double t10037;
  double t10096;
  double t10097;
  double t10101;
  double t10102;
  double t10103;
  double t10104;
  double t10105;
  double t10106;
  double t10123;
  double t10124;
  double t10127;
  double t10128;
  double t9949;
  double t9950;
  double t9982;
  double t9983;
  double t10056;
  double t10057;
  double t10086;
  double t10089;
  double t10133;
  double t10134;
  double t10139;
  double t10140;
  double t10153;
  double t10154;
  double t10155;
  double t10156;
  double t10157;
  double t10158;
  double t10159;
  double t10160;
  double t10162;
  double t10163;
  double t10164;
  double t10168;
  double t10169;
  double t10170;
  double t10161;
  double t10165;
  double t10166;
  double t10167;
  double t10172;
  double t10173;
  double t10177;
  double t10178;
  double t10179;
  double t10180;
  double t10189;
  double t10190;
  double t10182;
  double t10192;
  double t10193;
  double t10184;
  double t10147;
  double t10148;
  double t10149;
  double t10150;
  double t10151;
  double t10152;
  double t10212;
  double t10213;
  double t10214;
  double t10215;
  double t10216;
  double t10217;
  double t10218;
  double t10219;
  double t10221;
  double t10222;
  double t10223;
  double t10206;
  double t10207;
  double t10208;
  double t10209;
  double t10210;
  double t10211;
  double t10220;
  double t10224;
  double t10225;
  double t10227;
  double t10228;
  double t10229;
  double t10234;
  double t10235;
  double t10236;
  double t10233;
  double t10238;
  double t10239;
  double t10243;
  double t10252;
  double t10253;
  double t10245;
  double t10255;
  double t10256;
  double t10247;
  double t10268;
  double t10274;
  double t10275;
  double t10276;
  double t10269;
  double t10270;
  double t10271;
  double t10272;
  double t10280;
  double t10281;
  double t10301;
  double t10307;
  double t10308;
  double t10309;
  double t10302;
  double t10303;
  double t10304;
  double t10305;
  double t10313;
  double t10314;
  t4377 = Cos(var1[3]);
  t4319 = Cos(var1[4]);
  t4320 = Sin(var1[3]);
  t4388 = Sin(var1[4]);
  t4102 = Sin(var1[2]);
  t4550 = Cos(var1[2]);
  t4553 = t4377*t4319;
  t4560 = -1.*t4320*t4388;
  t4573 = t4553 + t4560;
  t4610 = t4550*t4573;
  t4368 = -1.*t4319*t4320;
  t4436 = -1.*t4377*t4388;
  t4440 = t4368 + t4436;
  t4771 = t4319*t4320;
  t4772 = t4377*t4388;
  t9489 = t4771 + t4772;
  t4497 = t4102*t4440;
  t4620 = t4497 + t4610;
  t9668 = t4550*t4440;
  t9691 = -1.*t4102*t4573;
  t9821 = t9668 + t9691;
  t9862 = -1.*t4377*t4319;
  t9863 = t4320*t4388;
  t9864 = t9862 + t9863;
  t9911 = -1.*t4377*t4102;
  t9912 = -1.*t4550*t4320;
  t9913 = t9911 + t9912;
  t9932 = t4550*t4377;
  t9933 = -1.*t4102*t4320;
  t9934 = t9932 + t9933;
  t9537 = -1.*t4102*t9489;
  t9624 = t9537 + t4610;
  t9656 = 3.2*t4620*t9624;
  t9850 = t4550*t9489;
  t9851 = t4102*t4573;
  t9852 = t9850 + t9851;
  t9860 = 3.2*t9821*t9852;
  t9861 = -1.*t4102*t4440;
  t9873 = t4550*t9864;
  t9893 = t9861 + t9873;
  t9894 = 3.2*t4620*t9893;
  t9904 = t4102*t9864;
  t9905 = t9668 + t9904;
  t9906 = 3.2*t9821*t9905;
  t9914 = Power(t9913,2);
  t9915 = 6.8*t9914;
  t9916 = t4377*t4102;
  t9917 = t4550*t4320;
  t9930 = t9916 + t9917;
  t9931 = 6.8*t9913*t9930;
  t9935 = Power(t9934,2);
  t9936 = 6.8*t9935;
  t9937 = -1.*t4550*t4377;
  t9938 = t4102*t4320;
  t9939 = t9937 + t9938;
  t9940 = 6.8*t9934*t9939;
  t9990 = Cos(var1[5]);
  t9992 = -1.*t9990*t4102;
  t9993 = Sin(var1[5]);
  t9994 = -1.*t4550*t9993;
  t9995 = t9992 + t9994;
  t10006 = t4550*t9990;
  t10007 = -1.*t4102*t9993;
  t10008 = t10006 + t10007;
  t10038 = Cos(var1[6]);
  t10044 = Sin(var1[6]);
  t10039 = -1.*t10038*t9993;
  t10047 = -1.*t9990*t10044;
  t10048 = t10039 + t10047;
  t10051 = t9990*t10038;
  t10053 = -1.*t9993*t10044;
  t10055 = t10051 + t10053;
  t10061 = t4550*t10055;
  t10066 = t10038*t9993;
  t10067 = t9990*t10044;
  t10068 = t10066 + t10067;
  t10074 = -1.*t4102*t10055;
  t10058 = t4102*t10048;
  t10064 = t10058 + t10061;
  t10069 = -1.*t4102*t10068;
  t10070 = t10069 + t10061;
  t10073 = t4550*t10048;
  t10079 = t10073 + t10074;
  t10090 = t4550*t10068;
  t10091 = t4102*t10055;
  t10092 = t10090 + t10091;
  t10049 = -1.*t4102*t10048;
  t10098 = -1.*t9990*t10038;
  t10099 = t9993*t10044;
  t10100 = t10098 + t10099;
  t9998 = Power(t9995,2);
  t10001 = 6.8*t9998;
  t10002 = t9990*t4102;
  t10003 = t4550*t9993;
  t10004 = t10002 + t10003;
  t10005 = 6.8*t9995*t10004;
  t10009 = Power(t10008,2);
  t10010 = 6.8*t10009;
  t10011 = -1.*t4550*t9990;
  t10012 = t4102*t9993;
  t10033 = t10011 + t10012;
  t10037 = 6.8*t10008*t10033;
  t10096 = 3.2*t10064*t10070;
  t10097 = 3.2*t10079*t10092;
  t10101 = t4550*t10100;
  t10102 = t10049 + t10101;
  t10103 = 3.2*t10064*t10102;
  t10104 = t4102*t10100;
  t10105 = t10073 + t10104;
  t10106 = 3.2*t10079*t10105;
  t10123 = 6.4*t9624*t9821;
  t10124 = 6.4*t9821*t9893;
  t10127 = 13.6*t9913*t9934;
  t10128 = 13.6*t9913*t9939;
  t9949 = -1.*t4550*t4573;
  t9950 = t9861 + t9949;
  t9982 = -1.*t4550*t9489;
  t9983 = t9982 + t9691;
  t10056 = -1.*t4550*t10055;
  t10057 = t10049 + t10056;
  t10086 = -1.*t4550*t10068;
  t10089 = t10086 + t10074;
  t10133 = 13.6*t9995*t10008;
  t10134 = 13.6*t9995*t10033;
  t10139 = 6.4*t10070*t10079;
  t10140 = 6.4*t10079*t10102;
  t10153 = -1.*t4319;
  t10154 = 1. + t10153;
  t10155 = 0.4*t10154;
  t10156 = 0.64*t4319;
  t10157 = t10155 + t10156;
  t10158 = t10157*t4320;
  t10159 = 0.24*t4377*t4388;
  t10160 = t10158 + t10159;
  t10162 = t4377*t10157;
  t10163 = -0.24*t4320*t4388;
  t10164 = t10162 + t10163;
  t10168 = -1.*t10157*t4320;
  t10169 = -0.24*t4377*t4388;
  t10170 = t10168 + t10169;
  t10161 = -1.*t10160*t4573;
  t10165 = -1.*t4440*t10164;
  t10166 = t10161 + t10165;
  t10167 = 3.2*t9821*t10166;
  t10172 = t10160*t4573;
  t10173 = t4440*t10164;
  t10177 = t10160*t9489;
  t10178 = t4573*t10164;
  t10179 = t10177 + t10178;
  t10180 = 3.2*t10179*t9893;
  t10189 = -0.24*t4319*t4320;
  t10190 = t10189 + t10169;
  t10182 = -1.*t4440*t10160;
  t10192 = 0.24*t4377*t4319;
  t10193 = t10192 + t10163;
  t10184 = -1.*t10164*t9864;
  t10147 = Power(t4377,2);
  t10148 = 0.11*t10147;
  t10149 = Power(t4320,2);
  t10150 = 0.11*t10149;
  t10151 = t10148 + t10150;
  t10152 = 6.8*t9939*t10151;
  t10212 = -1.*t10038;
  t10213 = 1. + t10212;
  t10214 = 0.4*t10213;
  t10215 = 0.64*t10038;
  t10216 = t10214 + t10215;
  t10217 = t10216*t9993;
  t10218 = 0.24*t9990*t10044;
  t10219 = t10217 + t10218;
  t10221 = t9990*t10216;
  t10222 = -0.24*t9993*t10044;
  t10223 = t10221 + t10222;
  t10206 = Power(t9990,2);
  t10207 = 0.11*t10206;
  t10208 = Power(t9993,2);
  t10209 = 0.11*t10208;
  t10210 = t10207 + t10209;
  t10211 = 6.8*t10033*t10210;
  t10220 = -1.*t10219*t10055;
  t10224 = -1.*t10048*t10223;
  t10225 = t10220 + t10224;
  t10227 = t10219*t10068;
  t10228 = t10055*t10223;
  t10229 = t10227 + t10228;
  t10234 = -1.*t10216*t9993;
  t10235 = -0.24*t9990*t10044;
  t10236 = t10234 + t10235;
  t10233 = 3.2*t10079*t10225;
  t10238 = t10219*t10055;
  t10239 = t10048*t10223;
  t10243 = 3.2*t10229*t10102;
  t10252 = -0.24*t10038*t9993;
  t10253 = t10252 + t10235;
  t10245 = -1.*t10048*t10219;
  t10255 = 0.24*t9990*t10038;
  t10256 = t10255 + t10222;
  t10247 = -1.*t10223*t10100;
  t10268 = 0.748*t9939;
  t10274 = t10157*t4388;
  t10275 = -0.24*t4319*t4388;
  t10276 = t10274 + t10275;
  t10269 = t10157*t4319;
  t10270 = Power(t4388,2);
  t10271 = 0.24*t10270;
  t10272 = t10269 + t10271;
  t10280 = 3.2*t10276*t9821;
  t10281 = 3.2*t10272*t9893;
  t10301 = 0.748*t10033;
  t10307 = t10216*t10044;
  t10308 = -0.24*t10038*t10044;
  t10309 = t10307 + t10308;
  t10302 = t10216*t10038;
  t10303 = Power(t10044,2);
  t10304 = 0.24*t10303;
  t10305 = t10302 + t10304;
  t10313 = 3.2*t10309*t10079;
  t10314 = 3.2*t10305*t10102;
  p_output1[0]=var2[1]*(-0.5*(t10001 + t10005 + t10010 + t10037 + 3.2*t10057*t10064 + 3.2*Power(t10070,2) + 3.2*Power(t10079,2) + 3.2*t10089*t10092 + 3.2*Power(t9624,2) + 3.2*Power(t9821,2) + t9915 + t9931 + t9936 + t9940 + 3.2*t4620*t9950 + 3.2*t9852*t9983)*var2[2] - 0.5*(t9656 + t9860 + t9894 + t9906 + t9915 + t9931 + t9936 + t9940)*var2[3] - 0.5*(t9656 + t9860 + t9894 + t9906)*var2[4] - 0.5*(t10001 + t10005 + t10010 + t10037 + t10096 + t10097 + t10103 + t10106)*var2[5] - 0.5*(t10096 + t10097 + t10103 + t10106)*var2[6]);
  p_output1[1]=var2[1]*(-0.5*(6.4*t10057*t10079 + 6.4*t10070*t10089 + t10127 + t10128 + t10133 + t10134 + 6.4*t9821*t9950 + 6.4*t9624*t9983)*var2[2] - 0.5*(t10123 + t10124 + t10127 + t10128)*var2[3] - 0.5*(t10123 + t10124)*var2[4] - 0.5*(t10133 + t10134 + t10139 + t10140)*var2[5] - 0.5*(t10139 + t10140)*var2[6]);
  p_output1[2]=var2[1]*(-0.5*(t10152 + t10211 + 3.2*t10089*t10225 + 3.2*t10057*t10229 - 2.88*t4550 + 3.2*t10179*t9950 + 3.2*t10166*t9983)*var2[2] - 0.5*(t10152 + t10167 + t10180 + 3.2*(t10182 + t10184 - 1.*t10170*t4440 - 1.*t10164*t4573)*t9624 + 3.2*(t10172 + t10173 + t10170*t4573 + t10164*t9489)*t9821)*var2[3] - 0.5*(t10167 + t10180 + 3.2*(t10182 + t10184 - 1.*t10190*t4440 - 1.*t10193*t4573)*t9624 + 3.2*(t10172 + t10173 + t10190*t4573 + t10193*t9489)*t9821)*var2[4] - 0.5*(t10211 + t10233 + 3.2*t10079*(t10068*t10223 + t10055*t10236 + t10238 + t10239) + t10243 + 3.2*t10070*(-1.*t10055*t10223 - 1.*t10048*t10236 + t10245 + t10247))*var2[5] - 0.5*(t10233 + t10243 + 3.2*t10070*(t10245 + t10247 - 1.*t10048*t10253 - 1.*t10055*t10256) + 3.2*t10079*(t10238 + t10239 + t10055*t10253 + t10068*t10256))*var2[6]);
  p_output1[3]=var2[1]*(-0.5*(t10268 + 3.2*t10272*t9950 + 3.2*t10276*t9983)*var2[2] - 0.5*(t10268 + t10280 + t10281)*var2[3] - 0.5*(t10280 + t10281 + 3.2*(t10269 - 0.24*Power(t4319,2))*t9624 + 3.2*(-1.*t10157*t4388 + 0.24*t4319*t4388)*t9821)*var2[4]);
  p_output1[4]=var2[1]*(-0.384*t9950*var2[2] - 0.384*t9893*var2[3] - 0.384*t9893*var2[4]);
  p_output1[5]=var2[1]*(-0.5*(t10301 + 3.2*t10057*t10305 + 3.2*t10089*t10309)*var2[2] - 0.5*(t10301 + t10313 + t10314)*var2[5] - 0.5*(3.2*t10079*(0.24*t10038*t10044 - 1.*t10044*t10216) + 3.2*t10070*(-0.24*Power(t10038,2) + t10302) + t10313 + t10314)*var2[6]);
  p_output1[6]=var2[1]*(-0.384*t10057*var2[2] - 0.384*t10102*var2[5] - 0.384*t10102*var2[6]);
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
