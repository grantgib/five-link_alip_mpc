/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:55:39 GMT-04:00
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
  double t9993;
  double t9948;
  double t9958;
  double t9994;
  double t10004;
  double t9916;
  double t9991;
  double t9996;
  double t9999;
  double t10003;
  double t10211;
  double t10225;
  double t10227;
  double t10229;
  double t10238;
  double t10294;
  double t10295;
  double t10298;
  double t10306;
  double t10307;
  double t10369;
  double t10365;
  double t10367;
  double t10379;
  double t10368;
  double t10383;
  double t10387;
  double t10390;
  double t10395;
  double t10396;
  double t10397;
  double t10398;
  double t10401;
  double t10428;
  double t10429;
  double t10430;
  double t10432;
  double t10433;
  double t10285;
  double t10287;
  double t10292;
  double t10333;
  double t10334;
  double t10336;
  double t10343;
  double t10344;
  double t10347;
  double t10409;
  double t10415;
  double t10421;
  double t10469;
  double t10488;
  double t11208;
  double t11316;
  double t11370;
  double t11385;
  double t11860;
  double t11864;
  double t11871;
  double t12098;
  double t12103;
  double t12122;
  double t13011;
  double t13018;
  double t13058;
  double t13062;
  double t13065;
  double t13066;
  double t13129;
  double t13130;
  double t13140;
  double t13155;
  double t13159;
  double t13164;
  double t9905;
  double t9913;
  double t11883;
  double t11962;
  double t11986;
  double t10281;
  double t10282;
  double t11497;
  double t11785;
  double t11852;
  double t10327;
  double t10329;
  double t10332;
  double t11988;
  double t12012;
  double t10310;
  double t10313;
  double t10321;
  double t10324;
  double t10359;
  double t10362;
  double t12136;
  double t12137;
  double t12141;
  double t10403;
  double t10407;
  double t12058;
  double t12075;
  double t12092;
  double t10461;
  double t10464;
  double t10468;
  double t12170;
  double t12172;
  double t10435;
  double t10438;
  double t10444;
  double t10448;
  double t11446;
  double t11450;
  double t12259;
  double t12262;
  double t12265;
  double t12270;
  double t12297;
  double t12298;
  double t12706;
  double t12708;
  double t12254;
  double t12255;
  double t11855;
  double t11876;
  double t11987;
  double t12039;
  double t12094;
  double t12132;
  double t12164;
  double t12226;
  double t12233;
  double t12987;
  double t12988;
  double t12990;
  double t13000;
  double t13002;
  double t13003;
  double t13009;
  double t13059;
  double t13072;
  double t13074;
  double t13077;
  double t13078;
  double t13079;
  double t13083;
  double t13094;
  double t13107;
  double t13114;
  double t13126;
  double t13146;
  double t13171;
  double t13172;
  double t13175;
  double t13181;
  double t13184;
  double t14999;
  double t15000;
  double t15001;
  double t12989;
  double t13010;
  double t13076;
  double t13080;
  double t13127;
  double t13173;
  double t13196;
  double t13213;
  double t14978;
  double t14979;
  double t14980;
  double t14981;
  double t14982;
  double t14983;
  double t14984;
  double t14985;
  double t14988;
  double t14989;
  double t14990;
  double t14991;
  double t14992;
  double t14995;
  double t14996;
  double t14997;
  double t14998;
  double t15002;
  double t15003;
  double t15004;
  double t15005;
  double t15006;
  double t15007;
  double t15008;
  double t13241;
  double t14858;
  double t14864;
  double t14865;
  double t10293;
  double t10325;
  double t10350;
  double t10354;
  double t15012;
  double t15013;
  double t15014;
  double t15015;
  double t15083;
  double t15084;
  double t15009;
  double t15010;
  double t14920;
  double t14921;
  double t14930;
  double t14931;
  double t10425;
  double t10449;
  double t11398;
  double t11417;
  double t15061;
  double t15062;
  double t15063;
  double t15064;
  double t15118;
  double t15119;
  double t15017;
  double t15018;
  t9993 = Cos(var2[3]);
  t9948 = Cos(var2[4]);
  t9958 = Sin(var2[3]);
  t9994 = Sin(var2[4]);
  t10004 = Cos(var2[2]);
  t9916 = Sin(var2[2]);
  t9991 = -1.*t9948*t9958;
  t9996 = -1.*t9993*t9994;
  t9999 = t9991 + t9996;
  t10003 = t9916*t9999;
  t10211 = t9993*t9948;
  t10225 = -1.*t9958*t9994;
  t10227 = t10211 + t10225;
  t10229 = t10004*t10227;
  t10238 = t10003 + t10229;
  t10294 = -1.*t9948;
  t10295 = 1. + t10294;
  t10298 = 0.4*t10295;
  t10306 = 0.64*t9948;
  t10307 = t10298 + t10306;
  t10369 = Cos(var2[5]);
  t10365 = Cos(var2[6]);
  t10367 = Sin(var2[5]);
  t10379 = Sin(var2[6]);
  t10368 = -1.*t10365*t10367;
  t10383 = -1.*t10369*t10379;
  t10387 = t10368 + t10383;
  t10390 = t9916*t10387;
  t10395 = t10369*t10365;
  t10396 = -1.*t10367*t10379;
  t10397 = t10395 + t10396;
  t10398 = t10004*t10397;
  t10401 = t10390 + t10398;
  t10428 = -1.*t10365;
  t10429 = 1. + t10428;
  t10430 = 0.4*t10429;
  t10432 = 0.64*t10365;
  t10433 = t10430 + t10432;
  t10285 = t10004*t9993;
  t10287 = -1.*t9916*t9958;
  t10292 = t10285 + t10287;
  t10333 = t9948*t9958;
  t10334 = t9993*t9994;
  t10336 = t10333 + t10334;
  t10343 = t10004*t10336;
  t10344 = t9916*t10227;
  t10347 = t10343 + t10344;
  t10409 = t10004*t10369;
  t10415 = -1.*t9916*t10367;
  t10421 = t10409 + t10415;
  t10469 = t10365*t10367;
  t10488 = t10369*t10379;
  t11208 = t10469 + t10488;
  t11316 = t10004*t11208;
  t11370 = t9916*t10397;
  t11385 = t11316 + t11370;
  t11860 = t9993*t9916;
  t11864 = t10004*t9958;
  t11871 = t11860 + t11864;
  t12098 = t10369*t9916;
  t12103 = t10004*t10367;
  t12122 = t12098 + t12103;
  t13011 = t10307*t9958;
  t13018 = 0.24*t9993*t9994;
  t13058 = t13011 + t13018;
  t13062 = t9993*t10307;
  t13065 = -0.24*t9958*t9994;
  t13066 = t13062 + t13065;
  t13129 = t10433*t10367;
  t13130 = 0.24*t10369*t10379;
  t13140 = t13129 + t13130;
  t13155 = t10369*t10433;
  t13159 = -0.24*t10367*t10379;
  t13164 = t13155 + t13159;
  t9905 = -1.*var1[4];
  t9913 = var3[4] + t9905;
  t11883 = t10004*t9999;
  t11962 = -1.*t9916*t10227;
  t11986 = t11883 + t11962;
  t10281 = -1.*var1[3];
  t10282 = var3[3] + t10281;
  t11497 = -1.*t9993*t9916;
  t11785 = -1.*t10004*t9958;
  t11852 = t11497 + t11785;
  t10327 = t10307*t9994;
  t10329 = -0.24*t9948*t9994;
  t10332 = t10327 + t10329;
  t11988 = -1.*t9916*t10336;
  t12012 = t11988 + t10229;
  t10310 = t10307*t9948;
  t10313 = Power(t9994,2);
  t10321 = 0.24*t10313;
  t10324 = t10310 + t10321;
  t10359 = -1.*var1[6];
  t10362 = var3[6] + t10359;
  t12136 = t10004*t10387;
  t12137 = -1.*t9916*t10397;
  t12141 = t12136 + t12137;
  t10403 = -1.*var1[5];
  t10407 = var3[5] + t10403;
  t12058 = -1.*t10369*t9916;
  t12075 = -1.*t10004*t10367;
  t12092 = t12058 + t12075;
  t10461 = t10433*t10379;
  t10464 = -0.24*t10365*t10379;
  t10468 = t10461 + t10464;
  t12170 = -1.*t9916*t11208;
  t12172 = t12170 + t10398;
  t10435 = t10433*t10365;
  t10438 = Power(t10379,2);
  t10444 = 0.24*t10438;
  t10448 = t10435 + t10444;
  t11446 = -1.*var1[1];
  t11450 = var3[1] + t11446;
  t12259 = Power(t10004,2);
  t12262 = 12.*t12259;
  t12265 = Power(t9916,2);
  t12270 = 12.*t12265;
  t12297 = Power(t10292,2);
  t12298 = 6.8*t12297;
  t12706 = Power(t10421,2);
  t12708 = 6.8*t12706;
  t12254 = -1.*var1[0];
  t12255 = var3[0] + t12254;
  t11855 = 6.8*t11852*t10292;
  t11876 = 6.8*t11871*t10292;
  t11987 = 3.2*t10238*t11986;
  t12039 = 3.2*t12012*t10347;
  t12094 = 6.8*t12092*t10421;
  t12132 = 6.8*t12122*t10421;
  t12164 = 3.2*t10401*t12141;
  t12226 = 3.2*t12172*t11385;
  t12233 = t11855 + t11876 + t11987 + t12039 + t12094 + t12132 + t12164 + t12226;
  t12987 = -1.*var1[2];
  t12988 = var3[2] + t12987;
  t12990 = Power(t9993,2);
  t13000 = 0.11*t12990;
  t13002 = Power(t9958,2);
  t13003 = 0.11*t13002;
  t13009 = t13000 + t13003;
  t13059 = -1.*t13058*t10227;
  t13072 = -1.*t9999*t13066;
  t13074 = t13059 + t13072;
  t13077 = t13058*t10336;
  t13078 = t10227*t13066;
  t13079 = t13077 + t13078;
  t13083 = Power(t10369,2);
  t13094 = 0.11*t13083;
  t13107 = Power(t10367,2);
  t13114 = 0.11*t13107;
  t13126 = t13094 + t13114;
  t13146 = -1.*t13140*t10397;
  t13171 = -1.*t10387*t13164;
  t13172 = t13146 + t13171;
  t13175 = t13140*t11208;
  t13181 = t10397*t13164;
  t13184 = t13175 + t13181;
  t14999 = -1.*t10004*t9993;
  t15000 = t9916*t9958;
  t15001 = t14999 + t15000;
  t12989 = 2.88*t10004;
  t13010 = 6.8*t10292*t13009;
  t13076 = 3.2*t10347*t13074;
  t13080 = 3.2*t10238*t13079;
  t13127 = 6.8*t10421*t13126;
  t13173 = 3.2*t11385*t13172;
  t13196 = 3.2*t10401*t13184;
  t13213 = t12989 + t13010 + t13076 + t13080 + t13127 + t13173 + t13196;
  t14978 = -2.88*t9916;
  t14979 = 6.8*t11852*t13009;
  t14980 = 3.2*t12012*t13074;
  t14981 = 3.2*t11986*t13079;
  t14982 = 6.8*t12092*t13126;
  t14983 = 3.2*t12172*t13172;
  t14984 = 3.2*t12141*t13184;
  t14985 = t14978 + t14979 + t14980 + t14981 + t14982 + t14983 + t14984;
  t14988 = 0.4*t10295*t10292;
  t14989 = -0.4*t11852*t9994;
  t14990 = t9948*t10292;
  t14991 = t11852*t9994;
  t14992 = t14990 + t14991;
  t14995 = 0.8*t14992;
  t14996 = t14988 + t14989 + t14995;
  t14997 = -1.*var4[0]*t14996;
  t14998 = 0.4*t10295*t11852;
  t15002 = -0.4*t15001*t9994;
  t15003 = t9948*t11852;
  t15004 = t15001*t9994;
  t15005 = t15003 + t15004;
  t15006 = 0.8*t15005;
  t15007 = t14998 + t15002 + t15006;
  t15008 = -1.*var4[2]*t15007;
  t13241 = 0.748*t11852;
  t14858 = 3.2*t10332*t12012;
  t14864 = 3.2*t10324*t11986;
  t14865 = t13241 + t14858 + t14864;
  t10293 = 0.748*t10292;
  t10325 = 3.2*t10324*t10238;
  t10350 = 3.2*t10332*t10347;
  t10354 = t10293 + t10325 + t10350;
  t15012 = 0.748*t13009;
  t15013 = 3.2*t10332*t13074;
  t15014 = 3.2*t10324*t13079;
  t15015 = 0.67 + t15012 + t15013 + t15014;
  t15083 = 0.768*t10324;
  t15084 = 0.2 + t15083;
  t15009 = 0.768*t13079;
  t15010 = 0.2 + t15009;
  t14920 = 0.748*t12092;
  t14921 = 3.2*t10468*t12172;
  t14930 = 3.2*t10448*t12141;
  t14931 = t14920 + t14921 + t14930;
  t10425 = 0.748*t10421;
  t10449 = 3.2*t10448*t10401;
  t11398 = 3.2*t10468*t11385;
  t11417 = t10425 + t10449 + t11398;
  t15061 = 0.748*t13126;
  t15062 = 3.2*t10468*t13172;
  t15063 = 3.2*t10448*t13184;
  t15064 = 0.67 + t15061 + t15062 + t15063;
  t15118 = 0.768*t10448;
  t15119 = 0.2 + t15118;
  t15017 = 0.768*t13184;
  t15018 = 0.2 + t15017;
  p_output1[0]=t10282*t10354 + 0.768*t10362*t10401 + t10407*t11417 + t11450*t12233 + t12255*(3.2*Power(t10238,2) + 3.2*Power(t10347,2) + 3.2*Power(t10401,2) + 3.2*Power(t11385,2) + 6.8*Power(t11871,2) + 6.8*Power(t12122,2) + t12262 + t12270 + t12298 + t12708) + t12988*t13213 + 0.768*t10238*t9913 - 1.*var4[0];
  p_output1[1]=0.768*t10362*t12141 + t12233*t12255 + t11450*(6.8*Power(t11852,2) + 3.2*Power(t11986,2) + 3.2*Power(t12012,2) + 6.8*Power(t12092,2) + 3.2*Power(t12141,2) + 3.2*Power(t12172,2) + t12262 + t12270 + t12298 + t12708) + t10282*t14865 + t10407*t14931 + t12988*t14985 + 0.768*t11986*t9913 - 1.*var4[2];
  p_output1[2]=t12988*(3.3612 + 6.8*Power(t13009,2) + 3.2*Power(t13074,2) + 3.2*Power(t13079,2) + 6.8*Power(t13126,2) + 3.2*Power(t13172,2) + 3.2*Power(t13184,2)) + t12255*t13213 + t11450*t14985 + t14997 + t15008 + t10282*t15015 + t10362*t15018 + t10407*t15064 + t15010*t9913;
  p_output1[3]=t10282*(1.58228 + 3.2*Power(t10324,2) + 3.2*Power(t10332,2)) + t10354*t12255 + t11450*t14865 + t14997 + t15008 + t12988*t15015 + t15084*t9913;
  p_output1[4]=0.768*t11450*t11986 + 0.768*t10238*t12255 + t12988*t15010 + t10282*t15084 + 1.2143199999999998*t9913 - 1.*(-0.4*t10292*t9948 + 0.4*t11871*t9994 + 0.8*(t14990 - 1.*t11871*t9994))*var4[0] - 1.*(-0.4*t11852*t9948 + 0.4*t10292*t9994 + 0.8*(t15003 - 1.*t10292*t9994))*var4[2];
  p_output1[5]=t10407*(1.58228 + 3.2*Power(t10448,2) + 3.2*Power(t10468,2)) + t11417*t12255 + t11450*t14931 + t12988*t15064 + t10362*t15119;
  p_output1[6]=1.2143199999999998*t10362 + 0.768*t11450*t12141 + 0.768*t10401*t12255 + t12988*t15018 + t10407*t15119;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMapRightImpact.hh"

namespace RightImpact
{

void dxDiscreteMapRightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
