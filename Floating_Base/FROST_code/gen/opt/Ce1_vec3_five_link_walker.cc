/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:15 GMT-04:00
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
  double t11;
  double t68;
  double t48;
  double t67;
  double t1955;
  double t4886;
  double t5125;
  double t5126;
  double t5471;
  double t3244;
  double t4929;
  double t5083;
  double t5480;
  double t5520;
  double t5523;
  double t5532;
  double t5536;
  double t5104;
  double t5472;
  double t5475;
  double t6659;
  double t6668;
  double t6734;
  double t6879;
  double t6882;
  double t6951;
  double t7134;
  double t7233;
  double t7247;
  double t7025;
  double t7038;
  double t7073;
  double t7814;
  double t7991;
  double t7992;
  double t6735;
  double t6960;
  double t6963;
  double t7022;
  double t7083;
  double t7095;
  double t7536;
  double t7569;
  double t7770;
  double t7781;
  double t8005;
  double t8008;
  double t8026;
  double t8030;
  double t8189;
  double t8191;
  double t8382;
  double t8383;
  double t8250;
  double t8410;
  double t8413;
  double t8253;
  double t63;
  double t72;
  double t78;
  double t90;
  double t101;
  double t112;
  double t119;
  double t124;
  double t1763;
  double t8760;
  double t9454;
  double t10740;
  double t10759;
  double t10856;
  double t10860;
  double t10863;
  double t10925;
  double t10927;
  double t10929;
  double t10931;
  double t10932;
  double t10991;
  double t11001;
  double t11004;
  double t10933;
  double t10944;
  double t10947;
  double t10747;
  double t10769;
  double t10812;
  double t11006;
  double t11011;
  double t11012;
  double t9408;
  double t9636;
  double t9884;
  double t9885;
  double t9999;
  double t10134;
  double t10147;
  double t10710;
  double t10739;
  double t10921;
  double t10950;
  double t11013;
  double t11014;
  double t11030;
  double t11033;
  double t11019;
  double t11020;
  double t11021;
  double t11016;
  double t11037;
  double t11038;
  double t11045;
  double t11073;
  double t11074;
  double t11075;
  double t11036;
  double t11057;
  double t11058;
  double t11103;
  double t11105;
  double t11279;
  double t11305;
  double t11354;
  double t11430;
  double t12350;
  double t12361;
  double t11605;
  double t12402;
  double t12403;
  double t11962;
  double t8738;
  double t8746;
  double t7076;
  double t7421;
  double t7424;
  double t8694;
  double t8730;
  double t8202;
  double t8252;
  double t8255;
  double t12585;
  double t8384;
  double t8416;
  double t8417;
  double t12590;
  double t12598;
  double t12607;
  double t12614;
  double t8428;
  double t8455;
  double t8467;
  double t12533;
  double t12546;
  double t12555;
  double t12579;
  double t11017;
  double t12726;
  double t12727;
  double t12728;
  double t12735;
  double t11018;
  double t11056;
  double t11061;
  double t11062;
  double t12739;
  double t10823;
  double t10923;
  double t11456;
  double t11613;
  double t11971;
  double t12757;
  double t12369;
  double t12404;
  double t12412;
  double t12762;
  double t12766;
  double t12767;
  double t12444;
  double t12449;
  double t12456;
  double t12814;
  double t12856;
  double t12857;
  double t12858;
  double t12882;
  double t12883;
  double t12884;
  double t14518;
  double t14521;
  double t14524;
  double t14544;
  double t14584;
  double t14589;
  double t14591;
  t11 = Cos(var1[3]);
  t68 = Sin(var1[3]);
  t48 = Sin(var1[2]);
  t67 = Cos(var1[2]);
  t1955 = Cos(var1[4]);
  t4886 = Sin(var1[4]);
  t5125 = t11*t1955;
  t5126 = -1.*t68*t4886;
  t5471 = t5125 + t5126;
  t3244 = -1.*t1955*t68;
  t4929 = -1.*t11*t4886;
  t5083 = t3244 + t4929;
  t5480 = -1.*t1955;
  t5520 = 1. + t5480;
  t5523 = 0.4*t5520;
  t5532 = 0.64*t1955;
  t5536 = t5523 + t5532;
  t5104 = t48*t5083;
  t5472 = t67*t5471;
  t5475 = t5104 + t5472;
  t6659 = t5536*t68;
  t6668 = 0.24*t11*t4886;
  t6734 = t6659 + t6668;
  t6879 = t11*t5536;
  t6882 = -0.24*t68*t4886;
  t6951 = t6879 + t6882;
  t7134 = t1955*t68;
  t7233 = t11*t4886;
  t7247 = t7134 + t7233;
  t7025 = -1.*t5536*t68;
  t7038 = -0.24*t11*t4886;
  t7073 = t7025 + t7038;
  t7814 = -1.*t11*t1955;
  t7991 = t68*t4886;
  t7992 = t7814 + t7991;
  t6735 = -1.*t6734*t5471;
  t6960 = -1.*t5083*t6951;
  t6963 = t6735 + t6960;
  t7022 = 3.2*t5475*t6963;
  t7083 = t6734*t5471;
  t7095 = t5083*t6951;
  t7536 = t6734*t7247;
  t7569 = t5471*t6951;
  t7770 = t7536 + t7569;
  t7781 = t67*t5083;
  t8005 = t48*t7992;
  t8008 = t7781 + t8005;
  t8026 = 3.2*t7770*t8008;
  t8030 = t67*t7247;
  t8189 = t48*t5471;
  t8191 = t8030 + t8189;
  t8382 = -0.24*t1955*t68;
  t8383 = t8382 + t7038;
  t8250 = -1.*t5083*t6734;
  t8410 = 0.24*t11*t1955;
  t8413 = t8410 + t6882;
  t8253 = -1.*t6951*t7992;
  t63 = -1.*t11*t48;
  t72 = -1.*t67*t68;
  t78 = t63 + t72;
  t90 = Power(t11,2);
  t101 = 0.11*t90;
  t112 = Power(t68,2);
  t119 = 0.11*t112;
  t124 = t101 + t119;
  t1763 = 6.8*t78*t124;
  t8760 = Cos(var1[5]);
  t9454 = Sin(var1[5]);
  t10740 = Cos(var1[6]);
  t10759 = Sin(var1[6]);
  t10856 = t8760*t10740;
  t10860 = -1.*t9454*t10759;
  t10863 = t10856 + t10860;
  t10925 = -1.*t10740;
  t10927 = 1. + t10925;
  t10929 = 0.4*t10927;
  t10931 = 0.64*t10740;
  t10932 = t10929 + t10931;
  t10991 = -1.*t10740*t9454;
  t11001 = -1.*t8760*t10759;
  t11004 = t10991 + t11001;
  t10933 = t10932*t9454;
  t10944 = 0.24*t8760*t10759;
  t10947 = t10933 + t10944;
  t10747 = t10740*t9454;
  t10769 = t8760*t10759;
  t10812 = t10747 + t10769;
  t11006 = t8760*t10932;
  t11011 = -0.24*t9454*t10759;
  t11012 = t11006 + t11011;
  t9408 = -1.*t8760*t48;
  t9636 = -1.*t67*t9454;
  t9884 = t9408 + t9636;
  t9885 = Power(t8760,2);
  t9999 = 0.11*t9885;
  t10134 = Power(t9454,2);
  t10147 = 0.11*t10134;
  t10710 = t9999 + t10147;
  t10739 = 6.8*t9884*t10710;
  t10921 = t67*t10863;
  t10950 = -1.*t10947*t10863;
  t11013 = -1.*t11004*t11012;
  t11014 = t10950 + t11013;
  t11030 = t48*t11004;
  t11033 = t11030 + t10921;
  t11019 = t10947*t10812;
  t11020 = t10863*t11012;
  t11021 = t11019 + t11020;
  t11016 = t67*t11004;
  t11037 = -1.*t10932*t9454;
  t11038 = -0.24*t8760*t10759;
  t11045 = t11037 + t11038;
  t11073 = -1.*t8760*t10740;
  t11074 = t9454*t10759;
  t11075 = t11073 + t11074;
  t11036 = 3.2*t11033*t11014;
  t11057 = t10947*t10863;
  t11058 = t11004*t11012;
  t11103 = t48*t11075;
  t11105 = t11016 + t11103;
  t11279 = 3.2*t11021*t11105;
  t11305 = t67*t10812;
  t11354 = t48*t10863;
  t11430 = t11305 + t11354;
  t12350 = -0.24*t10740*t9454;
  t12361 = t12350 + t11038;
  t11605 = -1.*t11004*t10947;
  t12402 = 0.24*t8760*t10740;
  t12403 = t12402 + t11011;
  t11962 = -1.*t11012*t11075;
  t8738 = -1.*t48*t5471;
  t8746 = t7781 + t8738;
  t7076 = t7073*t5471;
  t7421 = t7247*t6951;
  t7424 = t7076 + t7083 + t7095 + t7421;
  t8694 = -1.*t48*t7247;
  t8730 = t8694 + t5472;
  t8202 = -1.*t5083*t7073;
  t8252 = -1.*t5471*t6951;
  t8255 = t8202 + t8250 + t8252 + t8253;
  t12585 = 3.2*t8746*t6963;
  t8384 = t8383*t5471;
  t8416 = t7247*t8413;
  t8417 = t8384 + t7083 + t7095 + t8416;
  t12590 = -1.*t48*t5083;
  t12598 = t67*t7992;
  t12607 = t12590 + t12598;
  t12614 = 3.2*t7770*t12607;
  t8428 = -1.*t5083*t8383;
  t8455 = -1.*t5471*t8413;
  t8467 = t8428 + t8250 + t8455 + t8253;
  t12533 = -1.*t67*t11;
  t12546 = t48*t68;
  t12555 = t12533 + t12546;
  t12579 = 6.8*t12555*t124;
  t11017 = -1.*t48*t10863;
  t12726 = -1.*t67*t8760;
  t12727 = t48*t9454;
  t12728 = t12726 + t12727;
  t12735 = 6.8*t12728*t10710;
  t11018 = t11016 + t11017;
  t11056 = t11045*t10863;
  t11061 = t10812*t11012;
  t11062 = t11056 + t11057 + t11058 + t11061;
  t12739 = -1.*t48*t11004;
  t10823 = -1.*t48*t10812;
  t10923 = t10823 + t10921;
  t11456 = -1.*t11004*t11045;
  t11613 = -1.*t10863*t11012;
  t11971 = t11456 + t11605 + t11613 + t11962;
  t12757 = 3.2*t11018*t11014;
  t12369 = t12361*t10863;
  t12404 = t10812*t12403;
  t12412 = t12369 + t11057 + t11058 + t12404;
  t12762 = t67*t11075;
  t12766 = t12739 + t12762;
  t12767 = 3.2*t11021*t12766;
  t12444 = -1.*t11004*t12361;
  t12449 = -1.*t10863*t12403;
  t12456 = t12444 + t11605 + t12449 + t11962;
  t12814 = t5536*t1955;
  t12856 = Power(t4886,2);
  t12857 = 0.24*t12856;
  t12858 = t12814 + t12857;
  t12882 = t5536*t4886;
  t12883 = -0.24*t1955*t4886;
  t12884 = t12882 + t12883;
  t14518 = t10932*t10740;
  t14521 = Power(t10759,2);
  t14524 = 0.24*t14521;
  t14544 = t14518 + t14524;
  t14584 = t10932*t10759;
  t14589 = -0.24*t10740*t10759;
  t14591 = t14584 + t14589;
  p_output1[0]=var2[2]*(-0.5*(t10739 + 3.2*t10923*t11014 + 3.2*t11018*t11021 + t1763 - 2.88*t48 + 3.2*t6963*t8730 + 3.2*t7770*t8746)*var2[2] - 0.5*(t1763 + t7022 + 3.2*t5475*t7424 + t8026 + 3.2*t8191*t8255)*var2[3] - 0.5*(t7022 + t8026 + 3.2*t5475*t8417 + 3.2*t8191*t8467)*var2[4] - 0.5*(t10739 + t11036 + 3.2*t11033*t11062 + t11279 + 3.2*t11430*t11971)*var2[5] - 0.5*(t11036 + t11279 + 3.2*t11033*t12412 + 3.2*t11430*t12456)*var2[6]);
  p_output1[1]=var2[2]*(-0.5*(t12579 + t12735 - 2.88*t67 + 3.2*t11014*(t11017 - 1.*t10812*t67) + 3.2*t11021*(t12739 - 1.*t10863*t67) + 3.2*(t12590 - 1.*t5471*t67)*t7770 + 3.2*t6963*(-1.*t67*t7247 + t8738))*var2[2] - 0.5*(t12579 + t12585 + t12614 + 3.2*t8255*t8730 + 3.2*t7424*t8746)*var2[3] - 0.5*(t12585 + t12614 + 3.2*t8467*t8730 + 3.2*t8417*t8746)*var2[4] - 0.5*(3.2*t11018*t11062 + 3.2*t10923*t11971 + t12735 + t12757 + t12767)*var2[5] - 0.5*(3.2*t11018*t12412 + 3.2*t10923*t12456 + t12757 + t12767)*var2[6]);
  p_output1[2]=var2[2]*(-0.5*(6.4*t7424*t7770 + 6.4*t6963*t8255)*var2[3] - 0.5*(6.4*t7770*t8417 + 6.4*t6963*t8467)*var2[4] - 0.5*(6.4*t11021*t11062 + 6.4*t11014*t11971)*var2[5] - 0.5*(6.4*t11021*t12412 + 6.4*t11014*t12456)*var2[6]);
  p_output1[3]=var2[2]*(-0.5*(3.2*t12858*t7424 + 3.2*t12884*t8255)*var2[3] - 0.5*(3.2*(t12814 - 0.24*Power(t1955,2))*t6963 + 3.2*(0.24*t1955*t4886 - 1.*t4886*t5536)*t7770 + 3.2*t12858*t8417 + 3.2*t12884*t8467)*var2[4]);
  p_output1[4]=var2[2]*(-0.384*t7424*var2[3] - 0.384*t8417*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(3.2*t11062*t14544 + 3.2*t11971*t14591)*var2[5] - 0.5*(3.2*(0.24*t10740*t10759 - 1.*t10759*t10932)*t11021 + 3.2*t11014*(-0.24*Power(t10740,2) + t14518) + 3.2*t12412*t14544 + 3.2*t12456*t14591)*var2[6]);
  p_output1[6]=var2[2]*(-0.384*t11062*var2[5] - 0.384*t12412*var2[6]);
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

#include "Ce1_vec3_five_link_walker.hh"

namespace RightStance
{

void Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
