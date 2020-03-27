/*
 * Automatically Generated from Mathematica.
 * Wed 25 Mar 2020 22:47:14 GMT-04:00
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
  double t4828;
  double t4356;
  double t4655;
  double t7831;
  double t8244;
  double t3874;
  double t4827;
  double t8131;
  double t8136;
  double t8138;
  double t8359;
  double t8384;
  double t9099;
  double t10816;
  double t10894;
  double t10939;
  double t10940;
  double t10941;
  double t10952;
  double t10956;
  double t11010;
  double t11007;
  double t11008;
  double t11011;
  double t11009;
  double t11012;
  double t11013;
  double t11014;
  double t11015;
  double t11016;
  double t11032;
  double t11036;
  double t11052;
  double t11069;
  double t11070;
  double t11073;
  double t11074;
  double t11081;
  double t11108;
  double t11109;
  double t11110;
  double t10900;
  double t10901;
  double t10915;
  double t10992;
  double t10988;
  double t10989;
  double t10990;
  double t10991;
  double t10993;
  double t11127;
  double t11128;
  double t11129;
  double t11057;
  double t11058;
  double t11059;
  double t11103;
  double t11099;
  double t11100;
  double t11101;
  double t11102;
  double t11104;
  double t11111;
  double t11112;
  double t11113;
  double t11124;
  double t11123;
  double t11125;
  double t11116;
  double t11117;
  double t11130;
  double t11131;
  double t11132;
  double t11155;
  double t11154;
  double t11160;
  double t11143;
  double t11146;
  double t11222;
  double t11223;
  double t11224;
  double t11226;
  double t11227;
  double t11228;
  double t11242;
  double t11243;
  double t11244;
  double t11246;
  double t11247;
  double t11248;
  double t10934;
  double t10985;
  double t10986;
  double t10987;
  double t10967;
  double t10971;
  double t10972;
  double t10973;
  double t11260;
  double t11261;
  double t11262;
  double t11263;
  double t11264;
  double t11114;
  double t11115;
  double t11167;
  double t11169;
  double t11171;
  double t11172;
  double t11173;
  double t11174;
  double t11175;
  double t11176;
  double t11177;
  double t11178;
  double t11179;
  double t11185;
  double t11186;
  double t11187;
  double t11216;
  double t11217;
  double t11218;
  double t11219;
  double t11220;
  double t11221;
  double t11225;
  double t11229;
  double t11230;
  double t11232;
  double t11233;
  double t11234;
  double t11283;
  double t11284;
  double t11285;
  double t11265;
  double t11266;
  double t11267;
  double t11270;
  double t11271;
  double t11274;
  double t11275;
  double t11276;
  double t11277;
  double t11278;
  double t11279;
  double t11282;
  double t11287;
  double t11288;
  double t11292;
  double t11317;
  double t11318;
  double t11294;
  double t11320;
  double t11321;
  double t11296;
  double t11060;
  double t11094;
  double t11096;
  double t11098;
  double t11082;
  double t11087;
  double t11090;
  double t11091;
  double t11333;
  double t11334;
  double t11335;
  double t11336;
  double t11337;
  double t11133;
  double t11142;
  double t11189;
  double t11190;
  double t11193;
  double t11196;
  double t11197;
  double t11198;
  double t11199;
  double t11200;
  double t11201;
  double t11202;
  double t11203;
  double t11209;
  double t11210;
  double t11211;
  double t11236;
  double t11237;
  double t11238;
  double t11239;
  double t11240;
  double t11241;
  double t11245;
  double t11249;
  double t11250;
  double t11252;
  double t11253;
  double t11254;
  double t11356;
  double t11357;
  double t11358;
  double t11338;
  double t11339;
  double t11340;
  double t11343;
  double t11344;
  double t11347;
  double t11348;
  double t11349;
  double t11350;
  double t11351;
  double t11352;
  double t11355;
  double t11360;
  double t11361;
  double t11365;
  double t11390;
  double t11391;
  double t11367;
  double t11393;
  double t11394;
  double t11369;
  t4828 = Cos(var1[3]);
  t4356 = Cos(var1[4]);
  t4655 = Sin(var1[3]);
  t7831 = Sin(var1[4]);
  t8244 = Cos(var1[2]);
  t3874 = Sin(var1[2]);
  t4827 = -1.*t4356*t4655;
  t8131 = -1.*t4828*t7831;
  t8136 = t4827 + t8131;
  t8138 = -1.*t3874*t8136;
  t8359 = t4828*t4356;
  t8384 = -1.*t4655*t7831;
  t9099 = t8359 + t8384;
  t10816 = -1.*t8244*t9099;
  t10894 = t8138 + t10816;
  t10939 = -1.*t4356;
  t10940 = 1. + t10939;
  t10941 = 0.4*t10940;
  t10952 = 0.64*t4356;
  t10956 = t10941 + t10952;
  t11010 = Cos(var1[5]);
  t11007 = Cos(var1[6]);
  t11008 = Sin(var1[5]);
  t11011 = Sin(var1[6]);
  t11009 = -1.*t11007*t11008;
  t11012 = -1.*t11010*t11011;
  t11013 = t11009 + t11012;
  t11014 = -1.*t3874*t11013;
  t11015 = t11010*t11007;
  t11016 = -1.*t11008*t11011;
  t11032 = t11015 + t11016;
  t11036 = -1.*t8244*t11032;
  t11052 = t11014 + t11036;
  t11069 = -1.*t11007;
  t11070 = 1. + t11069;
  t11073 = 0.4*t11070;
  t11074 = 0.64*t11007;
  t11081 = t11073 + t11074;
  t11108 = -1.*t4828*t3874;
  t11109 = -1.*t8244*t4655;
  t11110 = t11108 + t11109;
  t10900 = -1.*t8244*t4828;
  t10901 = t3874*t4655;
  t10915 = t10900 + t10901;
  t10992 = -1.*t3874*t9099;
  t10988 = t4356*t4655;
  t10989 = t4828*t7831;
  t10990 = t10988 + t10989;
  t10991 = -1.*t8244*t10990;
  t10993 = t10991 + t10992;
  t11127 = -1.*t11010*t3874;
  t11128 = -1.*t8244*t11008;
  t11129 = t11127 + t11128;
  t11057 = -1.*t8244*t11010;
  t11058 = t3874*t11008;
  t11059 = t11057 + t11058;
  t11103 = -1.*t3874*t11032;
  t11099 = t11007*t11008;
  t11100 = t11010*t11011;
  t11101 = t11099 + t11100;
  t11102 = -1.*t8244*t11101;
  t11104 = t11102 + t11103;
  t11111 = t8244*t4828;
  t11112 = -1.*t3874*t4655;
  t11113 = t11111 + t11112;
  t11124 = t8244*t9099;
  t11123 = -1.*t3874*t10990;
  t11125 = t11123 + t11124;
  t11116 = t8244*t8136;
  t11117 = t11116 + t10992;
  t11130 = t8244*t11010;
  t11131 = -1.*t3874*t11008;
  t11132 = t11130 + t11131;
  t11155 = t8244*t11032;
  t11154 = -1.*t3874*t11101;
  t11160 = t11154 + t11155;
  t11143 = t8244*t11013;
  t11146 = t11143 + t11103;
  t11222 = t10956*t4655;
  t11223 = 0.24*t4828*t7831;
  t11224 = t11222 + t11223;
  t11226 = t4828*t10956;
  t11227 = -0.24*t4655*t7831;
  t11228 = t11226 + t11227;
  t11242 = t11081*t11008;
  t11243 = 0.24*t11010*t11011;
  t11244 = t11242 + t11243;
  t11246 = t11010*t11081;
  t11247 = -0.24*t11008*t11011;
  t11248 = t11246 + t11247;
  t10934 = -0.748*t10915;
  t10985 = t10956*t7831;
  t10986 = -0.24*t4356*t7831;
  t10987 = t10985 + t10986;
  t10967 = t10956*t4356;
  t10971 = Power(t7831,2);
  t10972 = 0.24*t10971;
  t10973 = t10967 + t10972;
  t11260 = -1.*t4828*t4356;
  t11261 = t4655*t7831;
  t11262 = t11260 + t11261;
  t11263 = t8244*t11262;
  t11264 = t8138 + t11263;
  t11114 = -13.6*t11110*t11113;
  t11115 = -13.6*t11110*t10915;
  t11167 = Power(t11110,2);
  t11169 = -6.8*t11167;
  t11171 = t4828*t3874;
  t11172 = t8244*t4655;
  t11173 = t11171 + t11172;
  t11174 = -6.8*t11110*t11173;
  t11175 = Power(t11113,2);
  t11176 = -6.8*t11175;
  t11177 = -6.8*t11113*t10915;
  t11178 = t3874*t8136;
  t11179 = t11178 + t11124;
  t11185 = t8244*t10990;
  t11186 = t3874*t9099;
  t11187 = t11185 + t11186;
  t11216 = Power(t4828,2);
  t11217 = 0.11*t11216;
  t11218 = Power(t4655,2);
  t11219 = 0.11*t11218;
  t11220 = t11217 + t11219;
  t11221 = -6.8*t10915*t11220;
  t11225 = -1.*t11224*t9099;
  t11229 = -1.*t8136*t11228;
  t11230 = t11225 + t11229;
  t11232 = t11224*t10990;
  t11233 = t9099*t11228;
  t11234 = t11232 + t11233;
  t11283 = -1.*t10956*t4655;
  t11284 = -0.24*t4828*t7831;
  t11285 = t11283 + t11284;
  t11265 = 0.384*var2[4]*t11264;
  t11266 = -3.2*t10987*t11117;
  t11267 = -3.2*t10973*t11264;
  t11270 = -6.4*t11125*t11117;
  t11271 = -6.4*t11117*t11264;
  t11274 = -3.2*t11179*t11125;
  t11275 = -3.2*t11117*t11187;
  t11276 = -3.2*t11179*t11264;
  t11277 = t3874*t11262;
  t11278 = t11116 + t11277;
  t11279 = -3.2*t11117*t11278;
  t11282 = -3.2*t11117*t11230;
  t11287 = t11224*t9099;
  t11288 = t8136*t11228;
  t11292 = -3.2*t11234*t11264;
  t11317 = -0.24*t4356*t4655;
  t11318 = t11317 + t11284;
  t11294 = -1.*t8136*t11224;
  t11320 = 0.24*t4828*t4356;
  t11321 = t11320 + t11227;
  t11296 = -1.*t11228*t11262;
  t11060 = -0.748*t11059;
  t11094 = t11081*t11011;
  t11096 = -0.24*t11007*t11011;
  t11098 = t11094 + t11096;
  t11082 = t11081*t11007;
  t11087 = Power(t11011,2);
  t11090 = 0.24*t11087;
  t11091 = t11082 + t11090;
  t11333 = -1.*t11010*t11007;
  t11334 = t11008*t11011;
  t11335 = t11333 + t11334;
  t11336 = t8244*t11335;
  t11337 = t11014 + t11336;
  t11133 = -13.6*t11129*t11132;
  t11142 = -13.6*t11129*t11059;
  t11189 = Power(t11129,2);
  t11190 = -6.8*t11189;
  t11193 = t11010*t3874;
  t11196 = t8244*t11008;
  t11197 = t11193 + t11196;
  t11198 = -6.8*t11129*t11197;
  t11199 = Power(t11132,2);
  t11200 = -6.8*t11199;
  t11201 = -6.8*t11132*t11059;
  t11202 = t3874*t11013;
  t11203 = t11202 + t11155;
  t11209 = t8244*t11101;
  t11210 = t3874*t11032;
  t11211 = t11209 + t11210;
  t11236 = Power(t11010,2);
  t11237 = 0.11*t11236;
  t11238 = Power(t11008,2);
  t11239 = 0.11*t11238;
  t11240 = t11237 + t11239;
  t11241 = -6.8*t11059*t11240;
  t11245 = -1.*t11244*t11032;
  t11249 = -1.*t11013*t11248;
  t11250 = t11245 + t11249;
  t11252 = t11244*t11101;
  t11253 = t11032*t11248;
  t11254 = t11252 + t11253;
  t11356 = -1.*t11081*t11008;
  t11357 = -0.24*t11010*t11011;
  t11358 = t11356 + t11357;
  t11338 = 0.384*var2[6]*t11337;
  t11339 = -3.2*t11098*t11146;
  t11340 = -3.2*t11091*t11337;
  t11343 = -6.4*t11160*t11146;
  t11344 = -6.4*t11146*t11337;
  t11347 = -3.2*t11203*t11160;
  t11348 = -3.2*t11146*t11211;
  t11349 = -3.2*t11203*t11337;
  t11350 = t3874*t11335;
  t11351 = t11143 + t11350;
  t11352 = -3.2*t11146*t11351;
  t11355 = -3.2*t11146*t11250;
  t11360 = t11244*t11032;
  t11361 = t11013*t11248;
  t11365 = -3.2*t11254*t11337;
  t11390 = -0.24*t11007*t11008;
  t11391 = t11390 + t11357;
  t11367 = -1.*t11013*t11244;
  t11393 = 0.24*t11010*t11007;
  t11394 = t11393 + t11247;
  t11369 = -1.*t11248*t11335;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(-0.5*(-3.2*Power(t11117,2) - 3.2*Power(t11125,2) - 3.2*Power(t11146,2) - 3.2*Power(t11160,2) + t11169 + t11174 + t11176 + t11177 - 3.2*t10894*t11179 - 3.2*t10993*t11187 + t11190 + t11198 + t11200 + t11201 - 3.2*t11052*t11203 - 3.2*t11104*t11211)*var2[0] - 0.5*(t11114 + t11115 - 6.4*t10894*t11117 - 6.4*t10993*t11125 + t11133 + t11142 - 6.4*t11052*t11146 - 6.4*t11104*t11160)*var2[1] - 0.5*(t11221 - 3.2*t10993*t11230 - 3.2*t10894*t11234 + t11241 - 3.2*t11104*t11250 - 3.2*t11052*t11254 + 2.88*t8244)*var2[2] - 0.5*(t10934 - 3.2*t10894*t10973 - 3.2*t10987*t10993)*var2[3] + 0.384*t10894*var2[4] - 0.5*(t11060 - 3.2*t11052*t11091 - 3.2*t11098*t11104)*var2[5] + 0.384*t11052*var2[6]);
  p_output1[3]=var2[1]*(t11265 - 0.5*(t11169 + t11174 + t11176 + t11177 + t11274 + t11275 + t11276 + t11279)*var2[0] - 0.5*(t11114 + t11115 + t11270 + t11271)*var2[1] - 0.5*(t11221 + t11282 + t11292 - 3.2*t11125*(t11294 + t11296 - 1.*t11285*t8136 - 1.*t11228*t9099) - 3.2*t11117*(t10990*t11228 + t11287 + t11288 + t11285*t9099))*var2[2] - 0.5*(t10934 + t11266 + t11267)*var2[3]);
  p_output1[4]=var2[1]*(t11265 - 0.5*(t11274 + t11275 + t11276 + t11279)*var2[0] - 0.5*(t11270 + t11271)*var2[1] - 0.5*(t11282 + t11292 - 3.2*t11117*(t11287 + t11288 + t10990*t11321 + t11318*t9099) - 3.2*t11125*(t11294 + t11296 - 1.*t11318*t8136 - 1.*t11321*t9099))*var2[2] - 0.5*(t11266 + t11267 - 3.2*t11125*(t10967 - 0.24*Power(t4356,2)) - 3.2*t11117*(-1.*t10956*t7831 + 0.24*t4356*t7831))*var2[3]);
  p_output1[5]=var2[1]*(t11338 - 0.5*(t11190 + t11198 + t11200 + t11201 + t11347 + t11348 + t11349 + t11352)*var2[0] - 0.5*(t11133 + t11142 + t11343 + t11344)*var2[1] - 0.5*(t11241 + t11355 - 3.2*t11146*(t11101*t11248 + t11032*t11358 + t11360 + t11361) + t11365 - 3.2*t11160*(-1.*t11032*t11248 - 1.*t11013*t11358 + t11367 + t11369))*var2[2] - 0.5*(t11060 + t11339 + t11340)*var2[5]);
  p_output1[6]=var2[1]*(t11338 - 0.5*(t11347 + t11348 + t11349 + t11352)*var2[0] - 0.5*(t11343 + t11344)*var2[1] - 0.5*(t11355 + t11365 - 3.2*t11160*(t11367 + t11369 - 1.*t11013*t11391 - 1.*t11032*t11394) - 3.2*t11146*(t11360 + t11361 + t11032*t11391 + t11101*t11394))*var2[2] - 0.5*(-3.2*(0.24*t11007*t11011 - 1.*t11011*t11081)*t11146 - 3.2*(-0.24*Power(t11007,2) + t11082)*t11160 + t11339 + t11340)*var2[5]);
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

#include "Ce3_vec2_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
