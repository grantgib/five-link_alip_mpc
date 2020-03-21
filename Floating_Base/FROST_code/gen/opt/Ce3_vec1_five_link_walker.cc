/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:02 GMT-04:00
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
  double t4734;
  double t3874;
  double t4631;
  double t4831;
  double t10868;
  double t2485;
  double t10890;
  double t10927;
  double t10928;
  double t10998;
  double t10999;
  double t11000;
  double t11001;
  double t11002;
  double t4655;
  double t4853;
  double t5023;
  double t9403;
  double t10929;
  double t10955;
  double t11033;
  double t11030;
  double t11031;
  double t11034;
  double t11038;
  double t11039;
  double t11040;
  double t11048;
  double t11049;
  double t11050;
  double t11051;
  double t11052;
  double t11032;
  double t11035;
  double t11036;
  double t11037;
  double t11041;
  double t11042;
  double t10989;
  double t10990;
  double t10991;
  double t11070;
  double t11071;
  double t11072;
  double t11020;
  double t11011;
  double t11017;
  double t11018;
  double t11019;
  double t11021;
  double t11044;
  double t11045;
  double t11046;
  double t11085;
  double t11086;
  double t11087;
  double t11060;
  double t11056;
  double t11057;
  double t11058;
  double t11059;
  double t11061;
  double t11074;
  double t11075;
  double t11076;
  double t11078;
  double t11079;
  double t11081;
  double t11082;
  double t11083;
  double t11089;
  double t11090;
  double t11091;
  double t11093;
  double t11094;
  double t11096;
  double t11097;
  double t11098;
  double t11151;
  double t11152;
  double t11153;
  double t11155;
  double t11156;
  double t11157;
  double t11171;
  double t11172;
  double t11173;
  double t11175;
  double t11176;
  double t11177;
  double t10997;
  double t11008;
  double t11009;
  double t11010;
  double t11023;
  double t11024;
  double t11025;
  double t11026;
  double t11189;
  double t11190;
  double t11191;
  double t11192;
  double t11193;
  double t11073;
  double t11077;
  double t11102;
  double t11103;
  double t11104;
  double t11105;
  double t11106;
  double t11107;
  double t11108;
  double t11109;
  double t11110;
  double t11111;
  double t11145;
  double t11146;
  double t11147;
  double t11148;
  double t11149;
  double t11150;
  double t11154;
  double t11158;
  double t11159;
  double t11161;
  double t11162;
  double t11163;
  double t11212;
  double t11213;
  double t11214;
  double t11194;
  double t11195;
  double t11196;
  double t11199;
  double t11200;
  double t11203;
  double t11204;
  double t11205;
  double t11206;
  double t11207;
  double t11208;
  double t11211;
  double t11216;
  double t11217;
  double t11221;
  double t11246;
  double t11247;
  double t11223;
  double t11249;
  double t11250;
  double t11225;
  double t11047;
  double t11053;
  double t11054;
  double t11055;
  double t11063;
  double t11064;
  double t11065;
  double t11066;
  double t11262;
  double t11263;
  double t11264;
  double t11265;
  double t11266;
  double t11088;
  double t11092;
  double t11122;
  double t11123;
  double t11124;
  double t11125;
  double t11126;
  double t11127;
  double t11128;
  double t11129;
  double t11130;
  double t11131;
  double t11165;
  double t11166;
  double t11167;
  double t11168;
  double t11169;
  double t11170;
  double t11174;
  double t11178;
  double t11179;
  double t11181;
  double t11182;
  double t11183;
  double t11285;
  double t11286;
  double t11287;
  double t11267;
  double t11268;
  double t11269;
  double t11272;
  double t11273;
  double t11276;
  double t11277;
  double t11278;
  double t11279;
  double t11280;
  double t11281;
  double t11284;
  double t11289;
  double t11290;
  double t11294;
  double t11319;
  double t11320;
  double t11296;
  double t11322;
  double t11323;
  double t11298;
  t4734 = Cos(var1[3]);
  t3874 = Cos(var1[4]);
  t4631 = Sin(var1[3]);
  t4831 = Sin(var1[4]);
  t10868 = Sin(var1[2]);
  t2485 = Cos(var1[2]);
  t10890 = t4734*t3874;
  t10927 = -1.*t4631*t4831;
  t10928 = t10890 + t10927;
  t10998 = -1.*t3874;
  t10999 = 1. + t10998;
  t11000 = 0.4*t10999;
  t11001 = 0.64*t3874;
  t11002 = t11000 + t11001;
  t4655 = -1.*t3874*t4631;
  t4853 = -1.*t4734*t4831;
  t5023 = t4655 + t4853;
  t9403 = t2485*t5023;
  t10929 = -1.*t10868*t10928;
  t10955 = t9403 + t10929;
  t11033 = Cos(var1[5]);
  t11030 = Cos(var1[6]);
  t11031 = Sin(var1[5]);
  t11034 = Sin(var1[6]);
  t11038 = t11033*t11030;
  t11039 = -1.*t11031*t11034;
  t11040 = t11038 + t11039;
  t11048 = -1.*t11030;
  t11049 = 1. + t11048;
  t11050 = 0.4*t11049;
  t11051 = 0.64*t11030;
  t11052 = t11050 + t11051;
  t11032 = -1.*t11030*t11031;
  t11035 = -1.*t11033*t11034;
  t11036 = t11032 + t11035;
  t11037 = t2485*t11036;
  t11041 = -1.*t10868*t11040;
  t11042 = t11037 + t11041;
  t10989 = -1.*t4734*t10868;
  t10990 = -1.*t2485*t4631;
  t10991 = t10989 + t10990;
  t11070 = t2485*t4734;
  t11071 = -1.*t10868*t4631;
  t11072 = t11070 + t11071;
  t11020 = t2485*t10928;
  t11011 = t3874*t4631;
  t11017 = t4734*t4831;
  t11018 = t11011 + t11017;
  t11019 = -1.*t10868*t11018;
  t11021 = t11019 + t11020;
  t11044 = -1.*t11033*t10868;
  t11045 = -1.*t2485*t11031;
  t11046 = t11044 + t11045;
  t11085 = t2485*t11033;
  t11086 = -1.*t10868*t11031;
  t11087 = t11085 + t11086;
  t11060 = t2485*t11040;
  t11056 = t11030*t11031;
  t11057 = t11033*t11034;
  t11058 = t11056 + t11057;
  t11059 = -1.*t10868*t11058;
  t11061 = t11059 + t11060;
  t11074 = t4734*t10868;
  t11075 = t2485*t4631;
  t11076 = t11074 + t11075;
  t11078 = t10868*t5023;
  t11079 = t11078 + t11020;
  t11081 = t2485*t11018;
  t11082 = t10868*t10928;
  t11083 = t11081 + t11082;
  t11089 = t11033*t10868;
  t11090 = t2485*t11031;
  t11091 = t11089 + t11090;
  t11093 = t10868*t11036;
  t11094 = t11093 + t11060;
  t11096 = t2485*t11058;
  t11097 = t10868*t11040;
  t11098 = t11096 + t11097;
  t11151 = t11002*t4631;
  t11152 = 0.24*t4734*t4831;
  t11153 = t11151 + t11152;
  t11155 = t4734*t11002;
  t11156 = -0.24*t4631*t4831;
  t11157 = t11155 + t11156;
  t11171 = t11052*t11031;
  t11172 = 0.24*t11033*t11034;
  t11173 = t11171 + t11172;
  t11175 = t11033*t11052;
  t11176 = -0.24*t11031*t11034;
  t11177 = t11175 + t11176;
  t10997 = -0.748*t10991;
  t11008 = t11002*t4831;
  t11009 = -0.24*t3874*t4831;
  t11010 = t11008 + t11009;
  t11023 = t11002*t3874;
  t11024 = Power(t4831,2);
  t11025 = 0.24*t11024;
  t11026 = t11023 + t11025;
  t11189 = -1.*t4734*t3874;
  t11190 = t4631*t4831;
  t11191 = t11189 + t11190;
  t11192 = t10868*t11191;
  t11193 = t9403 + t11192;
  t11073 = -13.6*t10991*t11072;
  t11077 = -13.6*t11076*t11072;
  t11102 = Power(t10991,2);
  t11103 = -6.8*t11102;
  t11104 = -6.8*t10991*t11076;
  t11105 = Power(t11072,2);
  t11106 = -6.8*t11105;
  t11107 = -1.*t2485*t4734;
  t11108 = t10868*t4631;
  t11109 = t11107 + t11108;
  t11110 = -6.8*t11072*t11109;
  t11111 = -1.*t10868*t5023;
  t11145 = Power(t4734,2);
  t11146 = 0.11*t11145;
  t11147 = Power(t4631,2);
  t11148 = 0.11*t11147;
  t11149 = t11146 + t11148;
  t11150 = -6.8*t10991*t11149;
  t11154 = -1.*t11153*t10928;
  t11158 = -1.*t5023*t11157;
  t11159 = t11154 + t11158;
  t11161 = t11153*t11018;
  t11162 = t10928*t11157;
  t11163 = t11161 + t11162;
  t11212 = -1.*t11002*t4631;
  t11213 = -0.24*t4734*t4831;
  t11214 = t11212 + t11213;
  t11194 = 0.384*var2[4]*t11193;
  t11195 = -3.2*t11010*t11079;
  t11196 = -3.2*t11026*t11193;
  t11199 = -6.4*t11079*t11083;
  t11200 = -6.4*t11079*t11193;
  t11203 = -3.2*t11079*t11021;
  t11204 = -3.2*t10955*t11083;
  t11205 = t2485*t11191;
  t11206 = t11111 + t11205;
  t11207 = -3.2*t11079*t11206;
  t11208 = -3.2*t10955*t11193;
  t11211 = -3.2*t11079*t11159;
  t11216 = t11153*t10928;
  t11217 = t5023*t11157;
  t11221 = -3.2*t11163*t11193;
  t11246 = -0.24*t3874*t4631;
  t11247 = t11246 + t11213;
  t11223 = -1.*t5023*t11153;
  t11249 = 0.24*t4734*t3874;
  t11250 = t11249 + t11156;
  t11225 = -1.*t11157*t11191;
  t11047 = -0.748*t11046;
  t11053 = t11052*t11034;
  t11054 = -0.24*t11030*t11034;
  t11055 = t11053 + t11054;
  t11063 = t11052*t11030;
  t11064 = Power(t11034,2);
  t11065 = 0.24*t11064;
  t11066 = t11063 + t11065;
  t11262 = -1.*t11033*t11030;
  t11263 = t11031*t11034;
  t11264 = t11262 + t11263;
  t11265 = t10868*t11264;
  t11266 = t11037 + t11265;
  t11088 = -13.6*t11046*t11087;
  t11092 = -13.6*t11091*t11087;
  t11122 = Power(t11046,2);
  t11123 = -6.8*t11122;
  t11124 = -6.8*t11046*t11091;
  t11125 = Power(t11087,2);
  t11126 = -6.8*t11125;
  t11127 = -1.*t2485*t11033;
  t11128 = t10868*t11031;
  t11129 = t11127 + t11128;
  t11130 = -6.8*t11087*t11129;
  t11131 = -1.*t10868*t11036;
  t11165 = Power(t11033,2);
  t11166 = 0.11*t11165;
  t11167 = Power(t11031,2);
  t11168 = 0.11*t11167;
  t11169 = t11166 + t11168;
  t11170 = -6.8*t11046*t11169;
  t11174 = -1.*t11173*t11040;
  t11178 = -1.*t11036*t11177;
  t11179 = t11174 + t11178;
  t11181 = t11173*t11058;
  t11182 = t11040*t11177;
  t11183 = t11181 + t11182;
  t11285 = -1.*t11052*t11031;
  t11286 = -0.24*t11033*t11034;
  t11287 = t11285 + t11286;
  t11267 = 0.384*var2[6]*t11266;
  t11268 = -3.2*t11055*t11094;
  t11269 = -3.2*t11066*t11266;
  t11272 = -6.4*t11094*t11098;
  t11273 = -6.4*t11094*t11266;
  t11276 = -3.2*t11094*t11061;
  t11277 = -3.2*t11042*t11098;
  t11278 = t2485*t11264;
  t11279 = t11131 + t11278;
  t11280 = -3.2*t11094*t11279;
  t11281 = -3.2*t11042*t11266;
  t11284 = -3.2*t11094*t11179;
  t11289 = t11173*t11040;
  t11290 = t11036*t11177;
  t11294 = -3.2*t11183*t11266;
  t11319 = -0.24*t11030*t11031;
  t11320 = t11319 + t11286;
  t11296 = -1.*t11036*t11173;
  t11322 = 0.24*t11033*t11030;
  t11323 = t11322 + t11176;
  t11298 = -1.*t11177*t11264;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(-0.5*(t11073 + t11077 - 6.4*t10955*t11079 - 6.4*t11021*t11083 + t11088 + t11092 - 6.4*t11042*t11094 - 6.4*t11061*t11098)*var2[0] - 0.5*(-3.2*Power(t10955,2) - 3.2*Power(t11021,2) - 3.2*Power(t11042,2) - 3.2*Power(t11061,2) + t11103 + t11104 + t11106 + t11110 + t11123 + t11124 + t11126 + t11130 - 3.2*t11079*(t11111 - 1.*t10928*t2485) - 3.2*t11083*(t10929 - 1.*t11018*t2485) - 3.2*t11094*(t11131 - 1.*t11040*t2485) - 3.2*t11098*(t11041 - 1.*t11058*t2485))*var2[1] - 0.5*(2.88*t10868 + t11150 - 3.2*t11021*t11159 - 3.2*t10955*t11163 + t11170 - 3.2*t11061*t11179 - 3.2*t11042*t11183)*var2[2] - 0.5*(t10997 - 3.2*t11010*t11021 - 3.2*t10955*t11026)*var2[3] + 0.384*t10955*var2[4] - 0.5*(t11047 - 3.2*t11055*t11061 - 3.2*t11042*t11066)*var2[5] + 0.384*t11042*var2[6]);
  p_output1[3]=var2[0]*(t11194 - 0.5*(t11073 + t11077 + t11199 + t11200)*var2[0] - 0.5*(t11103 + t11104 + t11106 + t11110 + t11203 + t11204 + t11207 + t11208)*var2[1] - 0.5*(t11150 + t11211 - 3.2*t11079*(t11018*t11157 + t10928*t11214 + t11216 + t11217) + t11221 - 3.2*t11083*(-1.*t10928*t11157 + t11223 + t11225 - 1.*t11214*t5023))*var2[2] - 0.5*(t10997 + t11195 + t11196)*var2[3]);
  p_output1[4]=var2[0]*(t11194 - 0.5*(t11199 + t11200)*var2[0] - 0.5*(t11203 + t11204 + t11207 + t11208)*var2[1] - 0.5*(t11211 + t11221 - 3.2*t11079*(t11216 + t11217 + t10928*t11247 + t11018*t11250) - 3.2*t11083*(t11223 + t11225 - 1.*t10928*t11250 - 1.*t11247*t5023))*var2[2] - 0.5*(t11195 + t11196 - 3.2*t11083*(t11023 - 0.24*Power(t3874,2)) - 3.2*t11079*(-1.*t11002*t4831 + 0.24*t3874*t4831))*var2[3]);
  p_output1[5]=var2[0]*(t11267 - 0.5*(t11088 + t11092 + t11272 + t11273)*var2[0] - 0.5*(t11123 + t11124 + t11126 + t11130 + t11276 + t11277 + t11280 + t11281)*var2[1] - 0.5*(t11170 + t11284 - 3.2*t11094*(t11058*t11177 + t11040*t11287 + t11289 + t11290) + t11294 - 3.2*t11098*(-1.*t11040*t11177 - 1.*t11036*t11287 + t11296 + t11298))*var2[2] - 0.5*(t11047 + t11268 + t11269)*var2[5]);
  p_output1[6]=var2[0]*(t11267 - 0.5*(t11272 + t11273)*var2[0] - 0.5*(t11276 + t11277 + t11280 + t11281)*var2[1] - 0.5*(t11284 + t11294 - 3.2*t11098*(t11296 + t11298 - 1.*t11036*t11320 - 1.*t11040*t11323) - 3.2*t11094*(t11289 + t11290 + t11040*t11320 + t11058*t11323))*var2[2] - 0.5*(-3.2*(0.24*t11030*t11034 - 1.*t11034*t11052)*t11094 - 3.2*(-0.24*Power(t11030,2) + t11063)*t11098 + t11268 + t11269)*var2[5]);
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

#include "Ce3_vec1_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
