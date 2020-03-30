/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:37 GMT-04:00
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
  double t6022;
  double t2961;
  double t2968;
  double t6067;
  double t6092;
  double t1512;
  double t6093;
  double t6103;
  double t6104;
  double t6167;
  double t6168;
  double t6171;
  double t6174;
  double t6175;
  double t4870;
  double t6070;
  double t6075;
  double t6091;
  double t6110;
  double t6111;
  double t6203;
  double t6197;
  double t6201;
  double t6204;
  double t6208;
  double t6209;
  double t6211;
  double t6222;
  double t6223;
  double t6224;
  double t6225;
  double t6226;
  double t6202;
  double t6205;
  double t6206;
  double t6207;
  double t6215;
  double t6216;
  double t6132;
  double t6133;
  double t6165;
  double t6244;
  double t6245;
  double t6249;
  double t6187;
  double t6179;
  double t6180;
  double t6183;
  double t6186;
  double t6188;
  double t6218;
  double t6219;
  double t6220;
  double t6263;
  double t6264;
  double t6265;
  double t6234;
  double t6230;
  double t6231;
  double t6232;
  double t6233;
  double t6235;
  double t6251;
  double t6252;
  double t6253;
  double t6256;
  double t6257;
  double t6259;
  double t6260;
  double t6261;
  double t6267;
  double t6268;
  double t6269;
  double t6271;
  double t6273;
  double t6275;
  double t6276;
  double t6282;
  double t6396;
  double t6397;
  double t6400;
  double t6402;
  double t6408;
  double t6433;
  double t12670;
  double t12671;
  double t12672;
  double t12744;
  double t12761;
  double t12772;
  double t6307;
  double t6308;
  double t6309;
  double t6300;
  double t6301;
  double t6302;
  double t6190;
  double t6191;
  double t6192;
  double t6193;
  double t6176;
  double t6177;
  double t6178;
  double t6316;
  double t6317;
  double t6338;
  double t6339;
  double t6340;
  double t6327;
  double t6331;
  double t6332;
  double t6237;
  double t6238;
  double t6239;
  double t6240;
  double t6227;
  double t6228;
  double t6229;
  double t6349;
  double t6351;
  double t6250;
  double t6266;
  double t6287;
  double t6289;
  double t6290;
  double t6298;
  double t6299;
  double t6303;
  double t6310;
  double t6312;
  double t6313;
  double t6314;
  double t6315;
  double t6321;
  double t6322;
  double t6323;
  double t6324;
  double t6325;
  double t6326;
  double t6333;
  double t6341;
  double t6342;
  double t6343;
  double t6344;
  double t6348;
  double t6356;
  double t6362;
  double t6379;
  double t6380;
  double t6381;
  double t6382;
  double t6383;
  double t6401;
  double t6434;
  double t7040;
  double t7682;
  double t7699;
  double t7710;
  double t8106;
  double t9841;
  double t10282;
  double t10919;
  double t11584;
  double t12743;
  double t12776;
  double t12777;
  double t12779;
  double t12780;
  double t12782;
  double t14748;
  double t14762;
  double t14775;
  double t14778;
  double t14782;
  double t14784;
  double t14790;
  double t14794;
  double t6364;
  double t6395;
  double t7580;
  double t7911;
  double t12470;
  double t12778;
  double t12784;
  double t12797;
  double t6166;
  double t6189;
  double t6194;
  double t6195;
  double t12802;
  double t12803;
  double t12809;
  double t12885;
  double t6221;
  double t6236;
  double t6241;
  double t6242;
  double t12986;
  double t12993;
  double t12996;
  double t13003;
  t6022 = Cos(var1[3]);
  t2961 = Cos(var1[4]);
  t2968 = Sin(var1[3]);
  t6067 = Sin(var1[4]);
  t6092 = Sin(var1[2]);
  t1512 = Cos(var1[2]);
  t6093 = t6022*t2961;
  t6103 = -1.*t2968*t6067;
  t6104 = t6093 + t6103;
  t6167 = -1.*t2961;
  t6168 = 1. + t6167;
  t6171 = 0.4*t6168;
  t6174 = 0.64*t2961;
  t6175 = t6171 + t6174;
  t4870 = -1.*t2961*t2968;
  t6070 = -1.*t6022*t6067;
  t6075 = t4870 + t6070;
  t6091 = t1512*t6075;
  t6110 = -1.*t6092*t6104;
  t6111 = t6091 + t6110;
  t6203 = Cos(var1[5]);
  t6197 = Cos(var1[6]);
  t6201 = Sin(var1[5]);
  t6204 = Sin(var1[6]);
  t6208 = t6203*t6197;
  t6209 = -1.*t6201*t6204;
  t6211 = t6208 + t6209;
  t6222 = -1.*t6197;
  t6223 = 1. + t6222;
  t6224 = 0.4*t6223;
  t6225 = 0.64*t6197;
  t6226 = t6224 + t6225;
  t6202 = -1.*t6197*t6201;
  t6205 = -1.*t6203*t6204;
  t6206 = t6202 + t6205;
  t6207 = t1512*t6206;
  t6215 = -1.*t6092*t6211;
  t6216 = t6207 + t6215;
  t6132 = -1.*t6022*t6092;
  t6133 = -1.*t1512*t2968;
  t6165 = t6132 + t6133;
  t6244 = t1512*t6022;
  t6245 = -1.*t6092*t2968;
  t6249 = t6244 + t6245;
  t6187 = t1512*t6104;
  t6179 = t2961*t2968;
  t6180 = t6022*t6067;
  t6183 = t6179 + t6180;
  t6186 = -1.*t6092*t6183;
  t6188 = t6186 + t6187;
  t6218 = -1.*t6203*t6092;
  t6219 = -1.*t1512*t6201;
  t6220 = t6218 + t6219;
  t6263 = t1512*t6203;
  t6264 = -1.*t6092*t6201;
  t6265 = t6263 + t6264;
  t6234 = t1512*t6211;
  t6230 = t6197*t6201;
  t6231 = t6203*t6204;
  t6232 = t6230 + t6231;
  t6233 = -1.*t6092*t6232;
  t6235 = t6233 + t6234;
  t6251 = t6022*t6092;
  t6252 = t1512*t2968;
  t6253 = t6251 + t6252;
  t6256 = t6092*t6075;
  t6257 = t6256 + t6187;
  t6259 = t1512*t6183;
  t6260 = t6092*t6104;
  t6261 = t6259 + t6260;
  t6267 = t6203*t6092;
  t6268 = t1512*t6201;
  t6269 = t6267 + t6268;
  t6271 = t6092*t6206;
  t6273 = t6271 + t6234;
  t6275 = t1512*t6232;
  t6276 = t6092*t6211;
  t6282 = t6275 + t6276;
  t6396 = t6175*t2968;
  t6397 = 0.24*t6022*t6067;
  t6400 = t6396 + t6397;
  t6402 = t6022*t6175;
  t6408 = -0.24*t2968*t6067;
  t6433 = t6402 + t6408;
  t12670 = t6226*t6201;
  t12671 = 0.24*t6203*t6204;
  t12672 = t12670 + t12671;
  t12744 = t6203*t6226;
  t12761 = -0.24*t6201*t6204;
  t12772 = t12744 + t12761;
  t6307 = -1.*t6092*t6075;
  t6308 = -1.*t1512*t6104;
  t6309 = t6307 + t6308;
  t6300 = -1.*t1512*t6022;
  t6301 = t6092*t2968;
  t6302 = t6300 + t6301;
  t6190 = t6175*t2961;
  t6191 = Power(t6067,2);
  t6192 = 0.24*t6191;
  t6193 = t6190 + t6192;
  t6176 = t6175*t6067;
  t6177 = -0.24*t2961*t6067;
  t6178 = t6176 + t6177;
  t6316 = -1.*t1512*t6183;
  t6317 = t6316 + t6110;
  t6338 = -1.*t6092*t6206;
  t6339 = -1.*t1512*t6211;
  t6340 = t6338 + t6339;
  t6327 = -1.*t1512*t6203;
  t6331 = t6092*t6201;
  t6332 = t6327 + t6331;
  t6237 = t6226*t6197;
  t6238 = Power(t6204,2);
  t6239 = 0.24*t6238;
  t6240 = t6237 + t6239;
  t6227 = t6226*t6204;
  t6228 = -0.24*t6197*t6204;
  t6229 = t6227 + t6228;
  t6349 = -1.*t1512*t6232;
  t6351 = t6349 + t6215;
  t6250 = 13.6*t6165*t6249;
  t6266 = 13.6*t6220*t6265;
  t6287 = Power(t6165,2);
  t6289 = 6.8*t6287;
  t6290 = 6.8*t6165*t6253;
  t6298 = Power(t6249,2);
  t6299 = 6.8*t6298;
  t6303 = 6.8*t6249*t6302;
  t6310 = 3.2*t6309*t6257;
  t6312 = Power(t6188,2);
  t6313 = 3.2*t6312;
  t6314 = Power(t6111,2);
  t6315 = 3.2*t6314;
  t6321 = 3.2*t6317*t6261;
  t6322 = Power(t6220,2);
  t6323 = 6.8*t6322;
  t6324 = 6.8*t6220*t6269;
  t6325 = Power(t6265,2);
  t6326 = 6.8*t6325;
  t6333 = 6.8*t6265*t6332;
  t6341 = 3.2*t6340*t6273;
  t6342 = Power(t6235,2);
  t6343 = 3.2*t6342;
  t6344 = Power(t6216,2);
  t6348 = 3.2*t6344;
  t6356 = 3.2*t6351*t6282;
  t6362 = t6289 + t6290 + t6299 + t6303 + t6310 + t6313 + t6315 + t6321 + t6323 + t6324 + t6326 + t6333 + t6341 + t6343 + t6348 + t6356;
  t6379 = Power(t6022,2);
  t6380 = 0.11*t6379;
  t6381 = Power(t2968,2);
  t6382 = 0.11*t6381;
  t6383 = t6380 + t6382;
  t6401 = -1.*t6400*t6104;
  t6434 = -1.*t6075*t6433;
  t7040 = t6401 + t6434;
  t7682 = t6400*t6183;
  t7699 = t6104*t6433;
  t7710 = t7682 + t7699;
  t8106 = Power(t6203,2);
  t9841 = 0.11*t8106;
  t10282 = Power(t6201,2);
  t10919 = 0.11*t10282;
  t11584 = t9841 + t10919;
  t12743 = -1.*t12672*t6211;
  t12776 = -1.*t6206*t12772;
  t12777 = t12743 + t12776;
  t12779 = t12672*t6232;
  t12780 = t6211*t12772;
  t12782 = t12779 + t12780;
  t14748 = -2.88*t1512;
  t14762 = 6.8*t6302*t6383;
  t14775 = 3.2*t6317*t7040;
  t14778 = 3.2*t6309*t7710;
  t14782 = 6.8*t6332*t11584;
  t14784 = 3.2*t6351*t12777;
  t14790 = 3.2*t6340*t12782;
  t14794 = t14748 + t14762 + t14775 + t14778 + t14782 + t14784 + t14790;
  t6364 = -2.88*t6092;
  t6395 = 6.8*t6165*t6383;
  t7580 = 3.2*t6188*t7040;
  t7911 = 3.2*t6111*t7710;
  t12470 = 6.8*t6220*t11584;
  t12778 = 3.2*t6235*t12777;
  t12784 = 3.2*t6216*t12782;
  t12797 = t6364 + t6395 + t7580 + t7911 + t12470 + t12778 + t12784;
  t6166 = 0.748*t6165;
  t6189 = 3.2*t6178*t6188;
  t6194 = 3.2*t6193*t6111;
  t6195 = t6166 + t6189 + t6194;
  t12802 = 0.748*t6302;
  t12803 = 3.2*t6193*t6309;
  t12809 = 3.2*t6178*t6317;
  t12885 = t12802 + t12803 + t12809;
  t6221 = 0.748*t6220;
  t6236 = 3.2*t6229*t6235;
  t6241 = 3.2*t6240*t6216;
  t6242 = t6221 + t6236 + t6241;
  t12986 = 0.748*t6332;
  t12993 = 3.2*t6240*t6340;
  t12996 = 3.2*t6229*t6351;
  t13003 = t12986 + t12993 + t12996;
  p_output1[0]=var2[2]*(-0.5*(t6250 + 13.6*t6249*t6253 + 6.4*t6111*t6257 + 6.4*t6188*t6261 + t6266 + 13.6*t6265*t6269 + 6.4*t6216*t6273 + 6.4*t6235*t6282)*var2[0] - 0.5*t6362*var2[1] - 0.5*t12797*var2[2] - 0.5*t6195*var2[3] - 0.384*t6111*var2[4] - 0.5*t6242*var2[5] - 0.384*t6216*var2[6]);
  p_output1[1]=var2[2]*(-0.5*t6362*var2[0] - 0.5*(t6250 + t6266 + 13.6*t6165*t6302 + 6.4*t6111*t6309 + 6.4*t6188*t6317 + 13.6*t6220*t6332 + 6.4*t6216*t6340 + 6.4*t6235*t6351)*var2[1] - 0.5*t14794*var2[2] - 0.5*t12885*var2[3] - 0.384*t6309*var2[4] - 0.5*t13003*var2[5] - 0.384*t6340*var2[6]);
  p_output1[2]=(-0.5*t12797*var2[0] - 0.5*t14794*var2[1])*var2[2];
  p_output1[3]=(-0.5*t6195*var2[0] - 0.5*t12885*var2[1])*var2[2];
  p_output1[4]=(-0.384*t6111*var2[0] - 0.384*t6309*var2[1])*var2[2];
  p_output1[5]=(-0.5*t6242*var2[0] - 0.5*t13003*var2[1])*var2[2];
  p_output1[6]=(-0.384*t6216*var2[0] - 0.384*t6340*var2[1])*var2[2];
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

#include "Ce2_vec3_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
