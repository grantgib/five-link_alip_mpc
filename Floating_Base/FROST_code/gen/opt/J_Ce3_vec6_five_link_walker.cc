/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:22:51 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t7940;
  double t1773;
  double t2056;
  double t1018;
  double t8028;
  double t1002;
  double t7941;
  double t7942;
  double t8020;
  double t8024;
  double t8025;
  double t8202;
  double t8203;
  double t8204;
  double t8246;
  double t8247;
  double t8248;
  double t8249;
  double t8250;
  double t8251;
  double t8241;
  double t8026;
  double t8178;
  double t8183;
  double t8188;
  double t8189;
  double t8191;
  double t8194;
  double t1153;
  double t7814;
  double t7821;
  double t7939;
  double t8253;
  double t8201;
  double t8264;
  double t8265;
  double t8266;
  double t8267;
  double t8242;
  double t8271;
  double t8282;
  double t8283;
  double t8284;
  double t8279;
  double t8280;
  double t8281;
  double t8285;
  double t8286;
  double t8287;
  double t8290;
  double t8305;
  double t8306;
  double t8307;
  double t8298;
  double t8299;
  double t8300;
  double t8252;
  double t8254;
  double t8291;
  double t8292;
  double t8293;
  double t8301;
  double t8302;
  double t8303;
  double t8245;
  double t8255;
  double t8256;
  double t8317;
  double t8318;
  double t8319;
  double t8320;
  double t8321;
  double t8322;
  double t8323;
  double t8288;
  double t8289;
  double t8294;
  double t8295;
  double t8296;
  double t8297;
  double t8268;
  double t8346;
  double t8347;
  double t8348;
  double t8342;
  double t8343;
  double t8344;
  double t8356;
  double t8357;
  double t8358;
  double t8351;
  double t8352;
  double t8353;
  double t8329;
  double t8330;
  double t8331;
  double t8332;
  double t8335;
  double t8336;
  double t8337;
  double t8338;
  double t8339;
  double t8350;
  double t8390;
  double t8391;
  double t8359;
  double t8363;
  double t8394;
  double t8395;
  double t8397;
  double t8398;
  double t8367;
  double t8378;
  double t8379;
  double t8384;
  double t8385;
  double t8386;
  double t8387;
  double t8388;
  double t8404;
  double t8405;
  double t8406;
  double t8407;
  double t8408;
  double t8422;
  double t8423;
  double t8424;
  double t8427;
  double t8428;
  double t8429;
  double t8304;
  double t8308;
  double t8309;
  double t8310;
  double t8311;
  double t8312;
  double t8313;
  double t8314;
  double t8315;
  double t8316;
  double t8374;
  double t8375;
  double t8376;
  double t8377;
  double t8380;
  double t8381;
  double t8382;
  double t8383;
  double t8389;
  double t8392;
  double t8393;
  double t8396;
  double t8399;
  double t8400;
  double t8401;
  double t8402;
  double t8403;
  double t8409;
  double t8410;
  double t8411;
  double t8412;
  double t8413;
  double t8414;
  double t8415;
  double t8416;
  double t8417;
  double t8418;
  double t8419;
  double t8420;
  double t8421;
  double t8435;
  double t8436;
  double t8437;
  double t8272;
  double t8455;
  double t8460;
  double t8461;
  double t8463;
  double t8464;
  double t8466;
  double t8467;
  double t8468;
  double t8474;
  double t8475;
  double t8476;
  double t8486;
  double t8487;
  double t8488;
  double t8491;
  double t8492;
  double t8493;
  double t8494;
  double t8495;
  t7940 = Cos(var1[6]);
  t1773 = Sin(var1[2]);
  t2056 = Sin(var1[5]);
  t1018 = Cos(var1[5]);
  t8028 = Sin(var1[6]);
  t1002 = Cos(var1[2]);
  t7941 = -1.*t7940;
  t7942 = 1. + t7941;
  t8020 = 0.4*t7942;
  t8024 = 0.64*t7940;
  t8025 = t8020 + t8024;
  t8202 = t1018*t7940;
  t8203 = -1.*t2056*t8028;
  t8204 = t8202 + t8203;
  t8246 = t8025*t8028;
  t8247 = -0.24*t7940*t8028;
  t8248 = t8246 + t8247;
  t8249 = t7940*t2056;
  t8250 = t1018*t8028;
  t8251 = t8249 + t8250;
  t8241 = -1.*t1002*t8204;
  t8026 = t8025*t7940;
  t8178 = Power(t8028,2);
  t8183 = 0.24*t8178;
  t8188 = t8026 + t8183;
  t8189 = -1.*t7940*t2056;
  t8191 = -1.*t1018*t8028;
  t8194 = t8189 + t8191;
  t1153 = -1.*t1002*t1018;
  t7814 = t1773*t2056;
  t7821 = t1153 + t7814;
  t7939 = -0.748*t7821;
  t8253 = -1.*t1773*t8204;
  t8201 = -1.*t1773*t8194;
  t8264 = t1018*t1773;
  t8265 = t1002*t2056;
  t8266 = t8264 + t8265;
  t8267 = -0.748*t8266;
  t8242 = t8201 + t8241;
  t8271 = -1.*t1002*t8194;
  t8282 = -1.*t1018*t7940;
  t8283 = t2056*t8028;
  t8284 = t8282 + t8283;
  t8279 = t1002*t8194;
  t8280 = t8279 + t8253;
  t8281 = -3.2*t8248*t8280;
  t8285 = t1002*t8284;
  t8286 = t8201 + t8285;
  t8287 = -3.2*t8188*t8286;
  t8290 = -3.2*t8248*t8242;
  t8305 = -1.*t8025*t8028;
  t8306 = 0.24*t7940*t8028;
  t8307 = t8305 + t8306;
  t8298 = Power(t7940,2);
  t8299 = -0.24*t8298;
  t8300 = t8026 + t8299;
  t8252 = -1.*t1002*t8251;
  t8254 = t8252 + t8253;
  t8291 = -1.*t1773*t8284;
  t8292 = t8271 + t8291;
  t8293 = -3.2*t8188*t8292;
  t8301 = -1.*t1773*t8251;
  t8302 = t1002*t8204;
  t8303 = t8301 + t8302;
  t8245 = -3.2*t8188*t8242;
  t8255 = -3.2*t8248*t8254;
  t8256 = t7939 + t8245 + t8255;
  t8317 = -1.*t1018*t1773;
  t8318 = -1.*t1002*t2056;
  t8319 = t8317 + t8318;
  t8320 = -0.748*t8319;
  t8321 = -3.2*t8248*t8303;
  t8322 = -3.2*t8188*t8280;
  t8323 = t8320 + t8321 + t8322;
  t8288 = t7939 + t8281 + t8287;
  t8289 = -0.5*var2[0]*t8288;
  t8294 = t8267 + t8290 + t8293;
  t8295 = -0.5*var2[1]*t8294;
  t8296 = t8289 + t8295;
  t8297 = var2[5]*t8296;
  t8268 = t1773*t8251;
  t8346 = t1018*t8025;
  t8347 = -0.24*t2056*t8028;
  t8348 = t8346 + t8347;
  t8342 = -1.*t8025*t2056;
  t8343 = -0.24*t1018*t8028;
  t8344 = t8342 + t8343;
  t8356 = t8025*t2056;
  t8357 = 0.24*t1018*t8028;
  t8358 = t8356 + t8357;
  t8351 = -1.*t1018*t8025;
  t8352 = 0.24*t2056*t8028;
  t8353 = t8351 + t8352;
  t8329 = -3.2*t8248*t8286;
  t8330 = t1002*t8251;
  t8331 = t8330 + t8291;
  t8332 = -3.2*t8188*t8331;
  t8335 = t8268 + t8285;
  t8336 = -3.2*t8188*t8335;
  t8337 = t1773*t8284;
  t8338 = t8279 + t8337;
  t8339 = -3.2*t8248*t8338;
  t8350 = -1.*t8251*t8348;
  t8390 = -0.24*t7940*t2056;
  t8391 = t8390 + t8343;
  t8359 = -1.*t8358*t8284;
  t8363 = t8194*t8358;
  t8394 = 0.24*t1018*t7940;
  t8395 = t8394 + t8347;
  t8397 = -0.24*t1018*t7940;
  t8398 = t8397 + t8352;
  t8367 = t8348*t8284;
  t8378 = t1773*t8194;
  t8379 = t8378 + t8302;
  t8384 = t8344*t8204;
  t8385 = t8358*t8204;
  t8386 = t8194*t8348;
  t8387 = t8251*t8348;
  t8388 = t8384 + t8385 + t8386 + t8387;
  t8404 = -1.*t8194*t8344;
  t8405 = -1.*t8194*t8358;
  t8406 = -1.*t8204*t8348;
  t8407 = -1.*t8348*t8284;
  t8408 = t8404 + t8405 + t8406 + t8407;
  t8422 = -3.2*t8248*t8379;
  t8423 = -3.2*t8188*t8338;
  t8424 = t8320 + t8422 + t8423;
  t8427 = -3.2*t8188*t8388;
  t8428 = -3.2*t8248*t8408;
  t8429 = t8427 + t8428;
  t8304 = -3.2*t8300*t8303;
  t8308 = -3.2*t8307*t8280;
  t8309 = t8304 + t8281 + t8308 + t8287;
  t8310 = -0.5*var2[0]*t8309;
  t8311 = -3.2*t8307*t8242;
  t8312 = -3.2*t8300*t8254;
  t8313 = t8290 + t8311 + t8312 + t8293;
  t8314 = -0.5*var2[1]*t8313;
  t8315 = t8310 + t8314;
  t8316 = var2[5]*t8315;
  t8374 = -3.2*t8300*t8280;
  t8375 = -3.2*t8307*t8286;
  t8376 = t8374 + t8329 + t8375 + t8332;
  t8377 = -0.5*var2[1]*t8376;
  t8380 = -3.2*t8300*t8379;
  t8381 = -3.2*t8307*t8338;
  t8382 = t8380 + t8336 + t8339 + t8381;
  t8383 = -0.5*var2[0]*t8382;
  t8389 = -3.2*t8307*t8388;
  t8392 = -1.*t8391*t8204;
  t8393 = -1.*t8194*t8348;
  t8396 = -1.*t8194*t8395;
  t8399 = -1.*t8194*t8398;
  t8400 = -1.*t8344*t8284;
  t8401 = -1.*t8391*t8284;
  t8402 = t8392 + t8393 + t8350 + t8396 + t8399 + t8400 + t8401 + t8359;
  t8403 = -3.2*t8248*t8402;
  t8409 = -3.2*t8300*t8408;
  t8410 = t8194*t8344;
  t8411 = t8194*t8391;
  t8412 = t8391*t8251;
  t8413 = t8204*t8348;
  t8414 = t8204*t8395;
  t8415 = t8204*t8398;
  t8416 = t8410 + t8411 + t8363 + t8412 + t8413 + t8414 + t8415 + t8367;
  t8417 = -3.2*t8188*t8416;
  t8418 = t8389 + t8403 + t8409 + t8417;
  t8419 = -0.5*var2[2]*t8418;
  t8420 = t8377 + t8383 + t8419;
  t8421 = var2[5]*t8420;
  t8435 = -1.*t8025*t7940;
  t8436 = 0.24*t8298;
  t8437 = t8435 + t8436;
  t8272 = t1773*t8204;
  t8455 = t8330 + t8272;
  t8460 = -1.*t8358*t8204;
  t8461 = t8460 + t8393;
  t8463 = t8358*t8251;
  t8464 = t8463 + t8413;
  t8466 = t8391*t8204;
  t8467 = t8251*t8395;
  t8468 = t8466 + t8385 + t8386 + t8467;
  t8474 = -1.*t8194*t8391;
  t8475 = -1.*t8204*t8395;
  t8476 = t8474 + t8405 + t8475 + t8407;
  t8486 = -3.2*t8307*t8379;
  t8487 = -3.2*t8300*t8455;
  t8488 = t8422 + t8486 + t8487 + t8423;
  t8491 = -3.2*t8300*t8461;
  t8492 = -3.2*t8307*t8464;
  t8493 = -3.2*t8188*t8468;
  t8494 = -3.2*t8248*t8476;
  t8495 = t8491 + t8492 + t8493 + t8494;
  p_output1[0]=(-0.5*t8256*var2[0] - 0.5*(t8267 - 3.2*t8248*(t8241 + t8268) - 3.2*t8188*(t8271 + t8272))*var2[1])*var2[5];
  p_output1[1]=t8297;
  p_output1[2]=t8316;
  p_output1[3]=-0.5*t8323*var2[5];
  p_output1[4]=-0.5*t8256*var2[5];
  p_output1[5]=-0.5*t8323*var2[0] - 0.5*t8256*var2[1];
  p_output1[6]=t8297;
  p_output1[7]=(-0.5*(t7939 + t8336 + t8339)*var2[0] - 0.5*(t8267 + t8329 + t8332)*var2[1] - 0.5*(-3.2*t8248*(-1.*t8204*t8344 - 2.*t8284*t8344 - 2.*t8194*t8348 + t8350 - 1.*t8194*t8353 + t8359) - 3.2*t8188*(2.*t8194*t8344 + t8251*t8344 + 2.*t8204*t8348 + t8204*t8353 + t8363 + t8367))*var2[2])*var2[5];
  p_output1[8]=t8421;
  p_output1[9]=-0.5*t8424*var2[5];
  p_output1[10]=-0.5*t8288*var2[5];
  p_output1[11]=-0.5*t8429*var2[5];
  p_output1[12]=-0.5*t8424*var2[0] - 0.5*t8288*var2[1] - 0.5*t8429*var2[2];
  p_output1[13]=t8316;
  p_output1[14]=t8421;
  p_output1[15]=var2[5]*(-0.5*(t8336 - 6.4*t8307*t8338 + t8339 - 6.4*t8300*t8379 - 3.2*t8379*t8437 - 3.2*t8307*t8455)*var2[0] - 0.5*(-6.4*t8280*t8300 - 6.4*t8286*t8307 - 3.2*t8303*t8307 + t8329 + t8332 - 3.2*t8280*t8437)*var2[1] - 0.5*(-3.2*t8248*(t8350 + t8359 - 2.*t8284*t8391 + t8392 - 2.*t8194*t8395 + t8399) - 3.2*t8188*(t8363 + t8367 + 2.*t8194*t8391 + 2.*t8204*t8395 + t8412 + t8415) - 3.2*t8307*t8461 - 3.2*t8437*t8464 - 6.4*t8307*t8468 - 6.4*t8300*t8476)*var2[2] - 0.5*(-6.4*Power(t8300,2) - 6.4*t8248*t8307 - 6.4*Power(t8307,2) - 6.4*t8188*t8437)*var2[5] + 0.384*t8437*var2[6]);
  p_output1[16]=-0.5*t8488*var2[5];
  p_output1[17]=-0.5*t8309*var2[5];
  p_output1[18]=-0.5*t8495*var2[5];
  p_output1[19]=-0.5*t8488*var2[0] - 0.5*t8309*var2[1] - 0.5*t8495*var2[2] - 1.*(-6.4*t8248*t8300 - 6.4*t8188*t8307)*var2[5] + 0.384*t8307*var2[6];
  p_output1[20]=0.384*t8307*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec6_five_link_walker.hh"

namespace RightStance
{

void J_Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
