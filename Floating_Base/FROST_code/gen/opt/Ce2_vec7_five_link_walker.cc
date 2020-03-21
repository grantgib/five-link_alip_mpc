/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:00 GMT-04:00
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
  double t2395;
  double t2380;
  double t2381;
  double t2396;
  double t2400;
  double t2382;
  double t2397;
  double t2398;
  double t2356;
  double t2487;
  double t2488;
  double t2489;
  double t2491;
  double t2503;
  double t2507;
  double t2508;
  double t2509;
  double t2510;
  double t2511;
  double t2512;
  double t2521;
  double t2399;
  double t2401;
  double t2405;
  double t2406;
  double t2435;
  double t2476;
  double t2525;
  double t3015;
  double t3683;
  double t3725;
  double t4465;
  double t9683;
  double t10937;
  double t10938;
  double t10956;
  double t10957;
  double t10958;
  double t10960;
  double t10961;
  double t10962;
  double t10966;
  double t10967;
  double t10968;
  double t10972;
  double t10973;
  double t10940;
  double t10941;
  double t10948;
  double t2522;
  double t2523;
  double t2524;
  double t10930;
  double t10935;
  double t2504;
  double t2505;
  double t2506;
  double t2517;
  double t2518;
  double t2519;
  double t10850;
  double t10858;
  double t10865;
  double t10936;
  double t10939;
  double t10949;
  double t10950;
  double t10951;
  double t10959;
  double t10963;
  double t10964;
  double t10969;
  double t10970;
  double t10971;
  double t10974;
  double t10975;
  double t10977;
  double t10978;
  double t10979;
  double t10981;
  double t10982;
  double t10983;
  double t10984;
  double t10985;
  double t11003;
  double t11004;
  double t11005;
  double t11006;
  double t11007;
  double t10965;
  double t10976;
  double t10980;
  double t10986;
  double t10987;
  double t10992;
  double t10993;
  double t10994;
  double t10995;
  double t10996;
  double t2513;
  double t2520;
  double t10809;
  double t10866;
  double t10867;
  double t11012;
  double t11013;
  double t11014;
  double t11015;
  double t11016;
  t2395 = Cos(var1[5]);
  t2380 = Cos(var1[6]);
  t2381 = Sin(var1[5]);
  t2396 = Sin(var1[6]);
  t2400 = Sin(var1[2]);
  t2382 = -1.*t2380*t2381;
  t2397 = -1.*t2395*t2396;
  t2398 = t2382 + t2397;
  t2356 = Cos(var1[2]);
  t2487 = -1.*t2380;
  t2488 = 1. + t2487;
  t2489 = 0.4*t2488;
  t2491 = 0.64*t2380;
  t2503 = t2489 + t2491;
  t2507 = t2400*t2398;
  t2508 = t2395*t2380;
  t2509 = -1.*t2381*t2396;
  t2510 = t2508 + t2509;
  t2511 = t2356*t2510;
  t2512 = t2507 + t2511;
  t2521 = t2503*t2380;
  t2399 = t2356*t2398;
  t2401 = -1.*t2395*t2380;
  t2405 = t2381*t2396;
  t2406 = t2401 + t2405;
  t2435 = t2400*t2406;
  t2476 = t2399 + t2435;
  t2525 = t2380*t2381;
  t3015 = t2395*t2396;
  t3683 = t2525 + t3015;
  t3725 = t2356*t3683;
  t4465 = t2400*t2510;
  t9683 = t3725 + t4465;
  t10937 = -1.*t2400*t2510;
  t10938 = t2399 + t10937;
  t10956 = t2503*t2381;
  t10957 = 0.24*t2395*t2396;
  t10958 = t10956 + t10957;
  t10960 = t2395*t2503;
  t10961 = -0.24*t2381*t2396;
  t10962 = t10960 + t10961;
  t10966 = -0.24*t2380*t2381;
  t10967 = -0.24*t2395*t2396;
  t10968 = t10966 + t10967;
  t10972 = 0.24*t2395*t2380;
  t10973 = t10972 + t10961;
  t10940 = -1.*t2400*t2398;
  t10941 = t2356*t2406;
  t10948 = t10940 + t10941;
  t2522 = Power(t2380,2);
  t2523 = -0.24*t2522;
  t2524 = t2521 + t2523;
  t10930 = -1.*t2400*t3683;
  t10935 = t10930 + t2511;
  t2504 = t2503*t2396;
  t2505 = -0.24*t2380*t2396;
  t2506 = t2504 + t2505;
  t2517 = -1.*t2503*t2396;
  t2518 = 0.24*t2380*t2396;
  t2519 = t2517 + t2518;
  t10850 = Power(t2396,2);
  t10858 = 0.24*t10850;
  t10865 = t2521 + t10858;
  t10936 = 3.2*t2512*t10935;
  t10939 = 3.2*t10938*t9683;
  t10949 = 3.2*t2512*t10948;
  t10950 = 3.2*t10938*t2476;
  t10951 = t10936 + t10939 + t10949 + t10950;
  t10959 = -1.*t10958*t2510;
  t10963 = -1.*t2398*t10962;
  t10964 = t10959 + t10963;
  t10969 = t10968*t2510;
  t10970 = t10958*t2510;
  t10971 = t2398*t10962;
  t10974 = t3683*t10973;
  t10975 = t10969 + t10970 + t10971 + t10974;
  t10977 = t10958*t3683;
  t10978 = t2510*t10962;
  t10979 = t10977 + t10978;
  t10981 = -1.*t2398*t10968;
  t10982 = -1.*t2398*t10958;
  t10983 = -1.*t2510*t10973;
  t10984 = -1.*t10962*t2406;
  t10985 = t10981 + t10982 + t10983 + t10984;
  t11003 = 3.2*t10938*t10964;
  t11004 = 3.2*t10938*t10975;
  t11005 = 3.2*t10979*t10948;
  t11006 = 3.2*t10935*t10985;
  t11007 = t11003 + t11004 + t11005 + t11006;
  t10965 = 3.2*t2512*t10964;
  t10976 = 3.2*t2512*t10975;
  t10980 = 3.2*t10979*t2476;
  t10986 = 3.2*t9683*t10985;
  t10987 = t10965 + t10976 + t10980 + t10986;
  t10992 = 3.2*t2524*t10935;
  t10993 = 3.2*t2506*t10938;
  t10994 = 3.2*t2519*t10938;
  t10995 = 3.2*t10865*t10948;
  t10996 = t10992 + t10993 + t10994 + t10995;
  t2513 = 3.2*t2506*t2512;
  t2520 = 3.2*t2519*t2512;
  t10809 = 3.2*t2524*t9683;
  t10866 = 3.2*t10865*t2476;
  t10867 = t2513 + t2520 + t10809 + t10866;
  t11012 = 3.2*t2524*t10964;
  t11013 = 3.2*t2519*t10979;
  t11014 = 3.2*t10865*t10975;
  t11015 = 3.2*t2506*t10985;
  t11016 = t11012 + t11013 + t11014 + t11015;
  p_output1[0]=var2[6]*(-0.5*(6.4*t2476*t2512 + 6.4*t2512*t9683)*var2[0] - 0.5*t10951*var2[1] - 0.5*t10987*var2[2] - 0.5*t10867*var2[5] - 0.384*t2476*var2[6]);
  p_output1[1]=var2[6]*(-0.5*t10951*var2[0] - 0.5*(6.4*t10935*t10938 + 6.4*t10938*t10948)*var2[1] - 0.5*t11007*var2[2] - 0.5*t10996*var2[5] - 0.384*t10948*var2[6]);
  p_output1[2]=var2[6]*(-0.5*t10987*var2[0] - 0.5*t11007*var2[1] - 0.5*(6.4*t10975*t10979 + 6.4*t10964*t10985)*var2[2] - 0.5*t11016*var2[5] - 0.384*t10975*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[6]*(-0.5*t10867*var2[0] - 0.5*t10996*var2[1] - 0.5*t11016*var2[2] - 0.5*(6.4*t10865*t2519 + 6.4*t2506*t2524)*var2[5] - 0.384*t2519*var2[6]);
  p_output1[6]=(-0.384*t2476*var2[0] - 0.384*t10948*var2[1] - 0.384*t10975*var2[2] - 0.384*t2519*var2[5])*var2[6];
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

#include "Ce2_vec7_five_link_walker.hh"

namespace RightStance
{

void Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
