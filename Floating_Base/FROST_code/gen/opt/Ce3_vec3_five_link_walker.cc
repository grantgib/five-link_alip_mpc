/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:59 GMT-04:00
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
  double t3206;
  double t6733;
  double t9770;
  double t9472;
  double t15071;
  double t15223;
  double t15949;
  double t15969;
  double t16049;
  double t17534;
  double t17686;
  double t17735;
  double t17739;
  double t17740;
  double t18359;
  double t18388;
  double t18392;
  double t17749;
  double t18146;
  double t18274;
  double t15221;
  double t15334;
  double t15751;
  double t18396;
  double t18455;
  double t18456;
  double t18528;
  double t18537;
  double t18695;
  double t18699;
  double t18736;
  double t18740;
  double t18741;
  double t18755;
  double t18762;
  double t18763;
  double t18764;
  double t18765;
  double t18771;
  double t18773;
  double t18775;
  double t18766;
  double t18768;
  double t18769;
  double t18696;
  double t18700;
  double t18713;
  double t18776;
  double t18777;
  double t18778;
  double t9878;
  double t9882;
  double t9941;
  double t10252;
  double t10411;
  double t18343;
  double t18457;
  double t18458;
  double t16141;
  double t18512;
  double t18514;
  double t18517;
  double t18660;
  double t18665;
  double t18666;
  double t18668;
  double t18669;
  double t18770;
  double t18779;
  double t18780;
  double t18745;
  double t18787;
  double t18792;
  double t18793;
  double t19106;
  double t19107;
  double t19119;
  double t19120;
  double t19135;
  double t19138;
  double t19150;
  double t19153;
  double t9217;
  double t9831;
  double t9868;
  double t11134;
  double t18914;
  double t18969;
  double t18484;
  double t19186;
  double t19187;
  double t19188;
  double t18821;
  double t18841;
  double t18847;
  double t19173;
  double t19176;
  double t19181;
  double t19191;
  double t19192;
  double t18816;
  double t18817;
  double t18818;
  double t18820;
  double t19288;
  double t19302;
  double t19158;
  double t19161;
  double t19162;
  double t19164;
  double t20435;
  double t20439;
  double t20440;
  double t20448;
  double t20457;
  double t20460;
  double t20461;
  double t19168;
  double t19170;
  double t19171;
  double t19214;
  double t19230;
  double t19231;
  double t19234;
  double t20477;
  double t20479;
  double t20480;
  double t19303;
  double t19711;
  double t20244;
  double t20260;
  double t20267;
  double t20294;
  double t20295;
  double t20527;
  double t20529;
  double t20533;
  double t20534;
  double t20539;
  double t20540;
  double t20543;
  double t20544;
  double t18532;
  double t18557;
  double t18608;
  double t18670;
  double t19080;
  double t19084;
  double t18782;
  double t20564;
  double t20565;
  double t20568;
  double t19067;
  double t19070;
  double t19072;
  double t20559;
  double t20562;
  double t20563;
  double t20571;
  double t20574;
  double t19003;
  double t19020;
  double t19026;
  double t19050;
  double t20588;
  double t20589;
  double t20548;
  double t20549;
  double t20550;
  double t20552;
  double t20635;
  double t20636;
  double t20641;
  double t20643;
  double t20644;
  double t20645;
  double t20647;
  double t20555;
  double t20556;
  double t20558;
  double t20580;
  double t20582;
  double t20583;
  double t20584;
  double t20865;
  double t20869;
  double t20871;
  double t20591;
  double t20596;
  double t20597;
  double t20598;
  double t20600;
  double t20601;
  double t20603;
  t3206 = Cos(var1[2]);
  t6733 = Cos(var1[3]);
  t9770 = Sin(var1[3]);
  t9472 = Sin(var1[2]);
  t15071 = Cos(var1[4]);
  t15223 = Sin(var1[4]);
  t15949 = t6733*t15071;
  t15969 = -1.*t9770*t15223;
  t16049 = t15949 + t15969;
  t17534 = -1.*t15071;
  t17686 = 1. + t17534;
  t17735 = 0.4*t17686;
  t17739 = 0.64*t15071;
  t17740 = t17735 + t17739;
  t18359 = -1.*t15071*t9770;
  t18388 = -1.*t6733*t15223;
  t18392 = t18359 + t18388;
  t17749 = t17740*t9770;
  t18146 = 0.24*t6733*t15223;
  t18274 = t17749 + t18146;
  t15221 = t15071*t9770;
  t15334 = t6733*t15223;
  t15751 = t15221 + t15334;
  t18396 = t6733*t17740;
  t18455 = -0.24*t9770*t15223;
  t18456 = t18396 + t18455;
  t18528 = Cos(var1[5]);
  t18537 = Sin(var1[5]);
  t18695 = Cos(var1[6]);
  t18699 = Sin(var1[6]);
  t18736 = t18528*t18695;
  t18740 = -1.*t18537*t18699;
  t18741 = t18736 + t18740;
  t18755 = -1.*t18695;
  t18762 = 1. + t18755;
  t18763 = 0.4*t18762;
  t18764 = 0.64*t18695;
  t18765 = t18763 + t18764;
  t18771 = -1.*t18695*t18537;
  t18773 = -1.*t18528*t18699;
  t18775 = t18771 + t18773;
  t18766 = t18765*t18537;
  t18768 = 0.24*t18528*t18699;
  t18769 = t18766 + t18768;
  t18696 = t18695*t18537;
  t18700 = t18528*t18699;
  t18713 = t18696 + t18700;
  t18776 = t18528*t18765;
  t18777 = -0.24*t18537*t18699;
  t18778 = t18776 + t18777;
  t9878 = Power(t6733,2);
  t9882 = 0.11*t9878;
  t9941 = Power(t9770,2);
  t10252 = 0.11*t9941;
  t10411 = t9882 + t10252;
  t18343 = -1.*t18274*t16049;
  t18457 = -1.*t18392*t18456;
  t18458 = t18343 + t18457;
  t16141 = -1.*t9472*t16049;
  t18512 = t18274*t15751;
  t18514 = t16049*t18456;
  t18517 = t18512 + t18514;
  t18660 = Power(t18528,2);
  t18665 = 0.11*t18660;
  t18666 = Power(t18537,2);
  t18668 = 0.11*t18666;
  t18669 = t18665 + t18668;
  t18770 = -1.*t18769*t18741;
  t18779 = -1.*t18775*t18778;
  t18780 = t18770 + t18779;
  t18745 = -1.*t9472*t18741;
  t18787 = t18769*t18713;
  t18792 = t18741*t18778;
  t18793 = t18787 + t18792;
  t19106 = -1.*t17740*t9770;
  t19107 = -0.24*t6733*t15223;
  t19119 = t19106 + t19107;
  t19120 = t19119*t16049;
  t19135 = t18274*t16049;
  t19138 = t18392*t18456;
  t19150 = t15751*t18456;
  t19153 = t19120 + t19135 + t19138 + t19150;
  t9217 = -1.*t3206*t6733;
  t9831 = t9472*t9770;
  t9868 = t9217 + t9831;
  t11134 = -6.8*t9868*t10411;
  t18914 = t3206*t18392;
  t18969 = t18914 + t16141;
  t18484 = -1.*t9472*t18392;
  t19186 = -1.*t6733*t15071;
  t19187 = t9770*t15223;
  t19188 = t19186 + t19187;
  t18821 = -1.*t9472*t15751;
  t18841 = t3206*t16049;
  t18847 = t18821 + t18841;
  t19173 = -1.*t18392*t19119;
  t19176 = -1.*t18392*t18274;
  t19181 = -1.*t16049*t18456;
  t19191 = -1.*t18456*t19188;
  t19192 = t19173 + t19176 + t19181 + t19191;
  t18816 = -1.*t6733*t9472;
  t18817 = -1.*t3206*t9770;
  t18818 = t18816 + t18817;
  t18820 = -6.8*t18818*t10411;
  t19288 = t9472*t18392;
  t19302 = t19288 + t18841;
  t19158 = t17740*t15071;
  t19161 = Power(t15223,2);
  t19162 = 0.24*t19161;
  t19164 = t19158 + t19162;
  t20435 = -0.24*t15071*t9770;
  t20439 = t20435 + t19107;
  t20440 = t20439*t16049;
  t20448 = 0.24*t6733*t15071;
  t20457 = t20448 + t18455;
  t20460 = t15751*t20457;
  t20461 = t20440 + t19135 + t19138 + t20460;
  t19168 = t17740*t15223;
  t19170 = -0.24*t15071*t15223;
  t19171 = t19168 + t19170;
  t19214 = -3.2*t18969*t18458;
  t19230 = t3206*t19188;
  t19231 = t18484 + t19230;
  t19234 = -3.2*t18517*t19231;
  t20477 = -1.*t18392*t20439;
  t20479 = -1.*t16049*t20457;
  t20480 = t20477 + t19176 + t20479 + t19191;
  t19303 = -3.2*t19302*t18458;
  t19711 = t9472*t19188;
  t20244 = t18914 + t19711;
  t20260 = -3.2*t18517*t20244;
  t20267 = t3206*t15751;
  t20294 = t9472*t16049;
  t20295 = t20267 + t20294;
  t20527 = -1.*t18765*t18537;
  t20529 = -0.24*t18528*t18699;
  t20533 = t20527 + t20529;
  t20534 = t20533*t18741;
  t20539 = t18769*t18741;
  t20540 = t18775*t18778;
  t20543 = t18713*t18778;
  t20544 = t20534 + t20539 + t20540 + t20543;
  t18532 = -1.*t3206*t18528;
  t18557 = t9472*t18537;
  t18608 = t18532 + t18557;
  t18670 = -6.8*t18608*t18669;
  t19080 = t3206*t18775;
  t19084 = t19080 + t18745;
  t18782 = -1.*t9472*t18775;
  t20564 = -1.*t18528*t18695;
  t20565 = t18537*t18699;
  t20568 = t20564 + t20565;
  t19067 = -1.*t9472*t18713;
  t19070 = t3206*t18741;
  t19072 = t19067 + t19070;
  t20559 = -1.*t18775*t20533;
  t20562 = -1.*t18775*t18769;
  t20563 = -1.*t18741*t18778;
  t20571 = -1.*t18778*t20568;
  t20574 = t20559 + t20562 + t20563 + t20571;
  t19003 = -1.*t18528*t9472;
  t19020 = -1.*t3206*t18537;
  t19026 = t19003 + t19020;
  t19050 = -6.8*t19026*t18669;
  t20588 = t9472*t18775;
  t20589 = t20588 + t19070;
  t20548 = t18765*t18695;
  t20549 = Power(t18699,2);
  t20550 = 0.24*t20549;
  t20552 = t20548 + t20550;
  t20635 = -0.24*t18695*t18537;
  t20636 = t20635 + t20529;
  t20641 = t20636*t18741;
  t20643 = 0.24*t18528*t18695;
  t20644 = t20643 + t18777;
  t20645 = t18713*t20644;
  t20647 = t20641 + t20539 + t20540 + t20645;
  t20555 = t18765*t18699;
  t20556 = -0.24*t18695*t18699;
  t20558 = t20555 + t20556;
  t20580 = -3.2*t19084*t18780;
  t20582 = t3206*t20568;
  t20583 = t18782 + t20582;
  t20584 = -3.2*t18793*t20583;
  t20865 = -1.*t18775*t20636;
  t20869 = -1.*t18741*t20644;
  t20871 = t20865 + t20562 + t20869 + t20571;
  t20591 = -3.2*t20589*t18780;
  t20596 = t9472*t20568;
  t20597 = t19080 + t20596;
  t20598 = -3.2*t18793*t20597;
  t20600 = t3206*t18713;
  t20601 = t9472*t18741;
  t20603 = t20600 + t20601;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t18820 - 3.2*t18458*t18847 - 3.2*t18517*t18969 + t19050 - 3.2*t18780*t19072 - 3.2*t18793*t19084 + 2.88*t9472)*var2[0] - 0.5*(t11134 + t18670 + 2.88*t3206 - 3.2*t18458*(t16141 - 1.*t15751*t3206) - 3.2*t18517*(t18484 - 1.*t16049*t3206) - 3.2*t18780*(t18745 - 1.*t18713*t3206) - 3.2*t18793*(t18782 - 1.*t18741*t3206))*var2[1])*var2[2];
  p_output1[3]=var2[2]*(-0.5*(t18820 - 3.2*t19153*t19302 + t19303 + t20260 - 3.2*t19192*t20295)*var2[0] - 0.5*(t11134 - 3.2*t18969*t19153 - 3.2*t18847*t19192 + t19214 + t19234)*var2[1] - 0.5*(-6.4*t18517*t19153 - 6.4*t18458*t19192)*var2[2] - 0.5*(-3.2*t19153*t19164 - 3.2*t19171*t19192)*var2[3] + 0.384*t19153*var2[4]);
  p_output1[4]=var2[2]*(-0.5*(t19303 + t20260 - 3.2*t19302*t20461 - 3.2*t20295*t20480)*var2[0] - 0.5*(t19214 + t19234 - 3.2*t18969*t20461 - 3.2*t18847*t20480)*var2[1] - 0.5*(-6.4*t18517*t20461 - 6.4*t18458*t20480)*var2[2] - 0.5*(-3.2*(0.24*t15071*t15223 - 1.*t15223*t17740)*t18517 - 3.2*t18458*(-0.24*Power(t15071,2) + t19158) - 3.2*t19164*t20461 - 3.2*t19171*t20480)*var2[3] + 0.384*t20461*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(t19050 - 3.2*t20544*t20589 + t20591 + t20598 - 3.2*t20574*t20603)*var2[0] - 0.5*(t18670 - 3.2*t19084*t20544 - 3.2*t19072*t20574 + t20580 + t20584)*var2[1] - 0.5*(-6.4*t18793*t20544 - 6.4*t18780*t20574)*var2[2] - 0.5*(-3.2*t20544*t20552 - 3.2*t20558*t20574)*var2[5] + 0.384*t20544*var2[6]);
  p_output1[6]=var2[2]*(-0.5*(t20591 + t20598 - 3.2*t20589*t20647 - 3.2*t20603*t20871)*var2[0] - 0.5*(t20580 + t20584 - 3.2*t19084*t20647 - 3.2*t19072*t20871)*var2[1] - 0.5*(-6.4*t18793*t20647 - 6.4*t18780*t20871)*var2[2] - 0.5*(-3.2*(0.24*t18695*t18699 - 1.*t18699*t18765)*t18793 - 3.2*t18780*(-0.24*Power(t18695,2) + t20548) - 3.2*t20552*t20647 - 3.2*t20558*t20871)*var2[5] + 0.384*t20647*var2[6]);
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

#include "Ce3_vec3_five_link_walker.hh"

namespace RightStance
{

void Ce3_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
