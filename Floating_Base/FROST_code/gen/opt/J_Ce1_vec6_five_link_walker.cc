/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:49:03 GMT-04:00
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
  double t9229;
  double t6664;
  double t7805;
  double t4931;
  double t9565;
  double t4724;
  double t9254;
  double t9331;
  double t9350;
  double t9524;
  double t9538;
  double t10109;
  double t10115;
  double t10189;
  double t5347;
  double t7806;
  double t8972;
  double t9099;
  double t15663;
  double t15665;
  double t15666;
  double t9642;
  double t9785;
  double t9786;
  double t15720;
  double t9551;
  double t9617;
  double t9634;
  double t9640;
  double t10087;
  double t15672;
  double t15705;
  double t15706;
  double t15725;
  double t15726;
  double t15727;
  double t15728;
  double t15729;
  double t15730;
  double t15731;
  double t15732;
  double t15733;
  double t15734;
  double t15736;
  double t15737;
  double t15739;
  double t15741;
  double t18589;
  double t18796;
  double t18797;
  double t18861;
  double t19068;
  double t19069;
  double t16688;
  double t16721;
  double t16999;
  double t15740;
  double t15818;
  double t16687;
  double t17000;
  double t17001;
  double t19087;
  double t19089;
  double t19122;
  double t19125;
  double t19126;
  double t20522;
  double t20525;
  double t20530;
  double t20531;
  double t20532;
  double t20535;
  double t20536;
  double t20547;
  double t20482;
  double t20494;
  double t20497;
  double t20551;
  double t20567;
  double t20572;
  double t20594;
  double t11472;
  double t20607;
  double t20608;
  double t20609;
  double t20617;
  double t14510;
  double t20638;
  double t20670;
  double t15715;
  double t15721;
  double t20673;
  double t20735;
  double t20737;
  double t20740;
  double t20816;
  double t20818;
  double t20819;
  double t20759;
  double t20810;
  double t20811;
  double t20826;
  double t20827;
  double t20828;
  double t20469;
  double t20474;
  double t20475;
  double t14546;
  double t15722;
  double t15723;
  double t15724;
  double t17241;
  double t20860;
  double t20861;
  double t20862;
  double t20856;
  double t20857;
  double t20858;
  double t21051;
  double t21058;
  double t21068;
  double t20870;
  double t20880;
  double t20890;
  double t20868;
  double t21143;
  double t21146;
  double t21079;
  double t21098;
  double t21178;
  double t21187;
  double t21199;
  double t21225;
  double t21111;
  double t21126;
  double t21129;
  double t21132;
  double t21134;
  double t21138;
  double t21139;
  double t21166;
  double t21167;
  double t21197;
  double t21263;
  double t21264;
  double t21271;
  double t21272;
  double t21287;
  double t21290;
  double t21293;
  double t21294;
  double t21335;
  double t21337;
  double t21339;
  double t21341;
  double t21361;
  double t21362;
  double t21365;
  double t21366;
  double t21376;
  double t21377;
  double t21381;
  double t21383;
  double t21426;
  double t21429;
  double t21432;
  double t21436;
  double t21441;
  double t21447;
  double t21454;
  double t21513;
  double t21515;
  double t21516;
  double t21635;
  double t21654;
  double t21668;
  double t21669;
  double t21670;
  double t21690;
  double t21691;
  double t21693;
  t9229 = Cos(var1[6]);
  t6664 = Sin(var1[2]);
  t7805 = Sin(var1[5]);
  t4931 = Cos(var1[5]);
  t9565 = Sin(var1[6]);
  t4724 = Cos(var1[2]);
  t9254 = -1.*t9229;
  t9331 = 1. + t9254;
  t9350 = 0.4*t9331;
  t9524 = 0.64*t9229;
  t9538 = t9350 + t9524;
  t10109 = t4931*t9229;
  t10115 = -1.*t7805*t9565;
  t10189 = t10109 + t10115;
  t5347 = -1.*t4724*t4931;
  t7806 = t6664*t7805;
  t8972 = t5347 + t7806;
  t9099 = 0.748*t8972;
  t15663 = t9538*t9565;
  t15665 = -0.24*t9229*t9565;
  t15666 = t15663 + t15665;
  t9642 = -1.*t9229*t7805;
  t9785 = -1.*t4931*t9565;
  t9786 = t9642 + t9785;
  t15720 = -1.*t6664*t10189;
  t9551 = t9538*t9229;
  t9617 = Power(t9565,2);
  t9634 = 0.24*t9617;
  t9640 = t9551 + t9634;
  t10087 = -1.*t6664*t9786;
  t15672 = t9229*t7805;
  t15705 = t4931*t9565;
  t15706 = t15672 + t15705;
  t15725 = t4724*t9786;
  t15726 = t15725 + t15720;
  t15727 = 3.2*t15666*t15726;
  t15728 = -1.*t4931*t9229;
  t15729 = t7805*t9565;
  t15730 = t15728 + t15729;
  t15731 = t4724*t15730;
  t15732 = t10087 + t15731;
  t15733 = 3.2*t9640*t15732;
  t15734 = t9099 + t15727 + t15733;
  t15736 = Power(t9229,2);
  t15737 = -0.24*t15736;
  t15739 = t9551 + t15737;
  t15741 = t4724*t10189;
  t18589 = t6664*t15706;
  t18796 = t18589 + t15731;
  t18797 = 3.2*t9640*t18796;
  t18861 = t6664*t15730;
  t19068 = t15725 + t18861;
  t19069 = 3.2*t15666*t19068;
  t16688 = -1.*t9538*t9565;
  t16721 = 0.24*t9229*t9565;
  t16999 = t16688 + t16721;
  t15740 = -1.*t6664*t15706;
  t15818 = t15740 + t15741;
  t16687 = 3.2*t15739*t15818;
  t17000 = 3.2*t16999*t15726;
  t17001 = t16687 + t15727 + t17000 + t15733;
  t19087 = t6664*t9786;
  t19089 = t19087 + t15741;
  t19122 = 3.2*t15739*t19089;
  t19125 = 3.2*t16999*t19068;
  t19126 = t19122 + t18797 + t19069 + t19125;
  t20522 = -1.*t4931*t6664;
  t20525 = -1.*t4724*t7805;
  t20530 = t20522 + t20525;
  t20531 = 0.748*t20530;
  t20532 = 3.2*t15666*t15818;
  t20535 = 3.2*t9640*t15726;
  t20536 = t20531 + t20532 + t20535;
  t20547 = 3.2*t15666*t19089;
  t20482 = t4724*t15706;
  t20494 = t6664*t10189;
  t20497 = t20482 + t20494;
  t20551 = 3.2*t9640*t19068;
  t20567 = 3.2*t16999*t19089;
  t20572 = 3.2*t15739*t20497;
  t20594 = t20547 + t20567 + t20572 + t20551;
  t11472 = -1.*t4724*t10189;
  t20607 = t4931*t6664;
  t20608 = t4724*t7805;
  t20609 = t20607 + t20608;
  t20617 = 0.748*t20609;
  t14510 = t10087 + t11472;
  t20638 = -1.*t4724*t9786;
  t20670 = 3.2*t15666*t14510;
  t15715 = -1.*t4724*t15706;
  t15721 = t15715 + t15720;
  t20673 = -1.*t6664*t15730;
  t20735 = t20638 + t20673;
  t20737 = 3.2*t9640*t20735;
  t20740 = t20617 + t20670 + t20737;
  t20816 = 3.2*t15666*t15732;
  t20818 = t20482 + t20673;
  t20819 = 3.2*t9640*t20818;
  t20759 = 3.2*t16999*t14510;
  t20810 = 3.2*t15739*t15721;
  t20811 = t20670 + t20759 + t20810 + t20737;
  t20826 = 3.2*t15739*t15726;
  t20827 = 3.2*t16999*t15732;
  t20828 = t20826 + t20816 + t20827 + t20819;
  t20469 = -1.*t9538*t9229;
  t20474 = 0.24*t15736;
  t20475 = t20469 + t20474;
  t14546 = 3.2*t9640*t14510;
  t15722 = 3.2*t15666*t15721;
  t15723 = t9099 + t14546 + t15722;
  t15724 = -0.5*var2[2]*t15723;
  t17241 = -0.5*var2[6]*t17001;
  t20860 = t4931*t9538;
  t20861 = -0.24*t7805*t9565;
  t20862 = t20860 + t20861;
  t20856 = -1.*t9538*t7805;
  t20857 = -0.24*t4931*t9565;
  t20858 = t20856 + t20857;
  t21051 = t9538*t7805;
  t21058 = 0.24*t4931*t9565;
  t21068 = t21051 + t21058;
  t20870 = -1.*t4931*t9538;
  t20880 = 0.24*t7805*t9565;
  t20890 = t20870 + t20880;
  t20868 = -1.*t15706*t20862;
  t21143 = -0.24*t9229*t7805;
  t21146 = t21143 + t20857;
  t21079 = -1.*t21068*t15730;
  t21098 = t9786*t21068;
  t21178 = 0.24*t4931*t9229;
  t21187 = t21178 + t20861;
  t21199 = -0.24*t4931*t9229;
  t21225 = t21199 + t20880;
  t21111 = t20862*t15730;
  t21126 = t20858*t10189;
  t21129 = t21068*t10189;
  t21132 = t9786*t20862;
  t21134 = t15706*t20862;
  t21138 = t21126 + t21129 + t21132 + t21134;
  t21139 = 3.2*t16999*t21138;
  t21166 = -1.*t21146*t10189;
  t21167 = -1.*t9786*t20862;
  t21197 = -1.*t9786*t21187;
  t21263 = -1.*t9786*t21225;
  t21264 = -1.*t20858*t15730;
  t21271 = -1.*t21146*t15730;
  t21272 = t21166 + t21167 + t20868 + t21197 + t21263 + t21264 + t21271 + t21079;
  t21287 = 3.2*t15666*t21272;
  t21290 = -1.*t9786*t20858;
  t21293 = -1.*t9786*t21068;
  t21294 = -1.*t10189*t20862;
  t21335 = -1.*t20862*t15730;
  t21337 = t21290 + t21293 + t21294 + t21335;
  t21339 = 3.2*t15739*t21337;
  t21341 = t9786*t20858;
  t21361 = t9786*t21146;
  t21362 = t21146*t15706;
  t21365 = t10189*t20862;
  t21366 = t10189*t21187;
  t21376 = t10189*t21225;
  t21377 = t21341 + t21361 + t21098 + t21362 + t21365 + t21366 + t21376 + t21111;
  t21381 = 3.2*t9640*t21377;
  t21383 = t21139 + t21287 + t21339 + t21381;
  t21426 = -1.*t21068*t10189;
  t21429 = t21426 + t21167;
  t21432 = t21068*t15706;
  t21436 = t21432 + t21365;
  t21441 = t21146*t10189;
  t21447 = t15706*t21187;
  t21454 = t21441 + t21129 + t21132 + t21447;
  t21513 = -1.*t9786*t21146;
  t21515 = -1.*t10189*t21187;
  t21516 = t21513 + t21293 + t21515 + t21335;
  t21635 = 3.2*t15739*t21429;
  t21654 = 3.2*t16999*t21436;
  t21668 = 3.2*t9640*t21454;
  t21669 = 3.2*t15666*t21516;
  t21670 = t21635 + t21654 + t21668 + t21669;
  t21690 = 6.4*t15739*t15666;
  t21691 = 6.4*t16999*t9640;
  t21693 = t21690 + t21691;
  p_output1[0]=var2[5]*(t15724 + t17241 - 0.5*t15734*var2[5]);
  p_output1[1]=var2[5]*(-0.5*t15734*var2[2] - 0.5*(t18797 + t19069 + t9099)*var2[5] - 0.5*t19126*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t17001*var2[2] - 0.5*t19126*var2[5] - 0.5*(t18797 + 6.4*t16999*t19068 + t19069 + 6.4*t15739*t19089 + 3.2*t19089*t20475 + 3.2*t16999*t20497)*var2[6]);
  p_output1[3]=-0.5*t20536*var2[5];
  p_output1[4]=-0.5*t20536*var2[2] - 1.*(t20531 + t20547 + t20551)*var2[5] - 0.5*t20594*var2[6];
  p_output1[5]=-0.5*t20594*var2[5];
  p_output1[6]=var2[5]*(-0.5*(3.2*t15666*(t11472 + t18589) + t20617 + 3.2*(t20494 + t20638)*t9640)*var2[2] - 0.5*t20740*var2[5] - 0.5*t20811*var2[6]);
  p_output1[7]=var2[5]*(-0.5*t20740*var2[2] - 0.5*(t20617 + t20816 + t20819)*var2[5] - 0.5*t20828*var2[6]);
  p_output1[8]=var2[5]*(-0.5*t20811*var2[2] - 0.5*t20828*var2[5] - 0.5*(6.4*t15726*t15739 + 6.4*t15732*t16999 + 3.2*t15818*t16999 + 3.2*t15726*t20475 + t20816 + t20819)*var2[6]);
  p_output1[9]=-0.5*t15723*var2[5];
  p_output1[10]=t15724 + t17241 - 1.*t15734*var2[5];
  p_output1[11]=-0.5*t17001*var2[5];
  p_output1[12]=var2[5]*(-0.5*(3.2*t9640*(t15706*t20858 + 2.*t10189*t20862 + t10189*t20890 + t21098 + t21111 + 2.*t20858*t9786) + 3.2*t15666*(-1.*t10189*t20858 - 2.*t15730*t20858 + t20868 + t21079 - 2.*t20862*t9786 - 1.*t20890*t9786))*var2[5] - 0.5*t21383*var2[6]);
  p_output1[13]=var2[5]*(-0.5*t21383*var2[5] - 0.5*(3.2*t16999*t21429 + 3.2*t20475*t21436 + 6.4*t16999*t21454 + 6.4*t15739*t21516 + 3.2*t9640*(t21098 + t21111 + 2.*t10189*t21187 + t21362 + t21376 + 2.*t21146*t9786) + 3.2*t15666*(t20868 + t21079 - 2.*t15730*t21146 + t21166 + t21263 - 2.*t21187*t9786))*var2[6]);
  p_output1[14]=-1.*(3.2*t15666*t21337 + 3.2*t21138*t9640)*var2[5] - 0.5*t21670*var2[6];
  p_output1[15]=-0.5*t21670*var2[5];
  p_output1[16]=-0.5*(6.4*Power(t15739,2) + 6.4*t15666*t16999 + 6.4*Power(t16999,2) + 6.4*t20475*t9640)*var2[5]*var2[6];
  p_output1[17]=-0.5*t21693*var2[6];
  p_output1[18]=-0.5*t21693*var2[5];
  p_output1[19]=-0.384*t20475*var2[5]*var2[6];
  p_output1[20]=-0.384*t16999*var2[6];
  p_output1[21]=-0.384*t16999*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec6_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
