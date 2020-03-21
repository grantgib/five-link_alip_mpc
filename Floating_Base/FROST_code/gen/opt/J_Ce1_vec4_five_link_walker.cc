/*
 * Automatically Generated from Mathematica.
 * Tue 17 Mar 2020 21:35:25 GMT-04:00
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
  double t4127;
  double t3014;
  double t3026;
  double t455;
  double t4450;
  double t193;
  double t4246;
  double t4269;
  double t4286;
  double t4367;
  double t4371;
  double t5121;
  double t5129;
  double t5184;
  double t580;
  double t3027;
  double t3830;
  double t4104;
  double t5406;
  double t8029;
  double t8038;
  double t4845;
  double t4855;
  double t4869;
  double t8237;
  double t4417;
  double t4457;
  double t4576;
  double t4719;
  double t5111;
  double t8108;
  double t8155;
  double t8204;
  double t8286;
  double t8289;
  double t8293;
  double t8301;
  double t8328;
  double t8347;
  double t8441;
  double t8443;
  double t8444;
  double t8673;
  double t9052;
  double t9363;
  double t9546;
  double t9585;
  double t12306;
  double t12310;
  double t12311;
  double t12320;
  double t12321;
  double t12326;
  double t9750;
  double t11722;
  double t12235;
  double t9582;
  double t9610;
  double t9748;
  double t12242;
  double t12258;
  double t12330;
  double t12331;
  double t12360;
  double t12390;
  double t12401;
  double t12534;
  double t12539;
  double t12540;
  double t12541;
  double t12542;
  double t12558;
  double t12562;
  double t12565;
  double t12487;
  double t12488;
  double t12489;
  double t12571;
  double t12590;
  double t12591;
  double t12592;
  double t5266;
  double t12600;
  double t12601;
  double t12603;
  double t12604;
  double t5274;
  double t12614;
  double t12623;
  double t8219;
  double t8240;
  double t12626;
  double t12627;
  double t12628;
  double t12629;
  double t12645;
  double t12646;
  double t12647;
  double t12638;
  double t12639;
  double t12640;
  double t12650;
  double t12651;
  double t12653;
  double t12472;
  double t12473;
  double t12477;
  double t5373;
  double t8262;
  double t8270;
  double t8280;
  double t12259;
  double t12684;
  double t12685;
  double t12686;
  double t12680;
  double t12681;
  double t12682;
  double t12699;
  double t12700;
  double t12701;
  double t12689;
  double t12690;
  double t12696;
  double t12688;
  double t12726;
  double t12727;
  double t12702;
  double t12706;
  double t12730;
  double t12731;
  double t12733;
  double t12734;
  double t12710;
  double t12715;
  double t12716;
  double t12717;
  double t12723;
  double t12724;
  double t12725;
  double t12728;
  double t12729;
  double t12732;
  double t12735;
  double t12736;
  double t12740;
  double t12744;
  double t12748;
  double t12752;
  double t12753;
  double t12754;
  double t12755;
  double t12756;
  double t12757;
  double t12761;
  double t12766;
  double t12767;
  double t12768;
  double t12780;
  double t12781;
  double t12782;
  double t12783;
  double t12784;
  double t12789;
  double t12790;
  double t12792;
  double t12793;
  double t12795;
  double t12796;
  double t12800;
  double t12811;
  double t12812;
  double t12813;
  double t12845;
  double t12846;
  double t12847;
  double t12848;
  double t12849;
  double t12861;
  double t12865;
  double t12871;
  t4127 = Cos(var1[4]);
  t3014 = Sin(var1[2]);
  t3026 = Sin(var1[3]);
  t455 = Cos(var1[3]);
  t4450 = Sin(var1[4]);
  t193 = Cos(var1[2]);
  t4246 = -1.*t4127;
  t4269 = 1. + t4246;
  t4286 = 0.4*t4269;
  t4367 = 0.64*t4127;
  t4371 = t4286 + t4367;
  t5121 = t455*t4127;
  t5129 = -1.*t3026*t4450;
  t5184 = t5121 + t5129;
  t580 = -1.*t193*t455;
  t3027 = t3014*t3026;
  t3830 = t580 + t3027;
  t4104 = 0.748*t3830;
  t5406 = t4371*t4450;
  t8029 = -0.24*t4127*t4450;
  t8038 = t5406 + t8029;
  t4845 = -1.*t4127*t3026;
  t4855 = -1.*t455*t4450;
  t4869 = t4845 + t4855;
  t8237 = -1.*t3014*t5184;
  t4417 = t4371*t4127;
  t4457 = Power(t4450,2);
  t4576 = 0.24*t4457;
  t4719 = t4417 + t4576;
  t5111 = -1.*t3014*t4869;
  t8108 = t4127*t3026;
  t8155 = t455*t4450;
  t8204 = t8108 + t8155;
  t8286 = t193*t4869;
  t8289 = t8286 + t8237;
  t8293 = 3.2*t8038*t8289;
  t8301 = -1.*t455*t4127;
  t8328 = t3026*t4450;
  t8347 = t8301 + t8328;
  t8441 = t193*t8347;
  t8443 = t5111 + t8441;
  t8444 = 3.2*t4719*t8443;
  t8673 = t4104 + t8293 + t8444;
  t9052 = Power(t4127,2);
  t9363 = -0.24*t9052;
  t9546 = t4417 + t9363;
  t9585 = t193*t5184;
  t12306 = t3014*t8204;
  t12310 = t12306 + t8441;
  t12311 = 3.2*t4719*t12310;
  t12320 = t3014*t8347;
  t12321 = t8286 + t12320;
  t12326 = 3.2*t8038*t12321;
  t9750 = -1.*t4371*t4450;
  t11722 = 0.24*t4127*t4450;
  t12235 = t9750 + t11722;
  t9582 = -1.*t3014*t8204;
  t9610 = t9582 + t9585;
  t9748 = 3.2*t9546*t9610;
  t12242 = 3.2*t12235*t8289;
  t12258 = t9748 + t8293 + t12242 + t8444;
  t12330 = t3014*t4869;
  t12331 = t12330 + t9585;
  t12360 = 3.2*t9546*t12331;
  t12390 = 3.2*t12235*t12321;
  t12401 = t12360 + t12311 + t12326 + t12390;
  t12534 = -1.*t455*t3014;
  t12539 = -1.*t193*t3026;
  t12540 = t12534 + t12539;
  t12541 = 0.748*t12540;
  t12542 = 3.2*t8038*t9610;
  t12558 = 3.2*t4719*t8289;
  t12562 = t12541 + t12542 + t12558;
  t12565 = 3.2*t8038*t12331;
  t12487 = t193*t8204;
  t12488 = t3014*t5184;
  t12489 = t12487 + t12488;
  t12571 = 3.2*t4719*t12321;
  t12590 = 3.2*t12235*t12331;
  t12591 = 3.2*t9546*t12489;
  t12592 = t12565 + t12590 + t12591 + t12571;
  t5266 = -1.*t193*t5184;
  t12600 = t455*t3014;
  t12601 = t193*t3026;
  t12603 = t12600 + t12601;
  t12604 = 0.748*t12603;
  t5274 = t5111 + t5266;
  t12614 = -1.*t193*t4869;
  t12623 = 3.2*t8038*t5274;
  t8219 = -1.*t193*t8204;
  t8240 = t8219 + t8237;
  t12626 = -1.*t3014*t8347;
  t12627 = t12614 + t12626;
  t12628 = 3.2*t4719*t12627;
  t12629 = t12604 + t12623 + t12628;
  t12645 = 3.2*t8038*t8443;
  t12646 = t12487 + t12626;
  t12647 = 3.2*t4719*t12646;
  t12638 = 3.2*t12235*t5274;
  t12639 = 3.2*t9546*t8240;
  t12640 = t12623 + t12638 + t12639 + t12628;
  t12650 = 3.2*t9546*t8289;
  t12651 = 3.2*t12235*t8443;
  t12653 = t12650 + t12645 + t12651 + t12647;
  t12472 = -1.*t4371*t4127;
  t12473 = 0.24*t9052;
  t12477 = t12472 + t12473;
  t5373 = 3.2*t4719*t5274;
  t8262 = 3.2*t8038*t8240;
  t8270 = t4104 + t5373 + t8262;
  t8280 = -0.5*var2[2]*t8270;
  t12259 = -0.5*var2[4]*t12258;
  t12684 = t455*t4371;
  t12685 = -0.24*t3026*t4450;
  t12686 = t12684 + t12685;
  t12680 = -1.*t4371*t3026;
  t12681 = -0.24*t455*t4450;
  t12682 = t12680 + t12681;
  t12699 = t4371*t3026;
  t12700 = 0.24*t455*t4450;
  t12701 = t12699 + t12700;
  t12689 = -1.*t455*t4371;
  t12690 = 0.24*t3026*t4450;
  t12696 = t12689 + t12690;
  t12688 = -1.*t8204*t12686;
  t12726 = -0.24*t4127*t3026;
  t12727 = t12726 + t12681;
  t12702 = -1.*t12701*t8347;
  t12706 = t4869*t12701;
  t12730 = 0.24*t455*t4127;
  t12731 = t12730 + t12685;
  t12733 = -0.24*t455*t4127;
  t12734 = t12733 + t12690;
  t12710 = t12686*t8347;
  t12715 = t12682*t5184;
  t12716 = t12701*t5184;
  t12717 = t4869*t12686;
  t12723 = t8204*t12686;
  t12724 = t12715 + t12716 + t12717 + t12723;
  t12725 = 3.2*t12235*t12724;
  t12728 = -1.*t12727*t5184;
  t12729 = -1.*t4869*t12686;
  t12732 = -1.*t4869*t12731;
  t12735 = -1.*t4869*t12734;
  t12736 = -1.*t12682*t8347;
  t12740 = -1.*t12727*t8347;
  t12744 = t12728 + t12729 + t12688 + t12732 + t12735 + t12736 + t12740 + t12702;
  t12748 = 3.2*t8038*t12744;
  t12752 = -1.*t4869*t12682;
  t12753 = -1.*t4869*t12701;
  t12754 = -1.*t5184*t12686;
  t12755 = -1.*t12686*t8347;
  t12756 = t12752 + t12753 + t12754 + t12755;
  t12757 = 3.2*t9546*t12756;
  t12761 = t4869*t12682;
  t12766 = t4869*t12727;
  t12767 = t12727*t8204;
  t12768 = t5184*t12686;
  t12780 = t5184*t12731;
  t12781 = t5184*t12734;
  t12782 = t12761 + t12766 + t12706 + t12767 + t12768 + t12780 + t12781 + t12710;
  t12783 = 3.2*t4719*t12782;
  t12784 = t12725 + t12748 + t12757 + t12783;
  t12789 = -1.*t12701*t5184;
  t12790 = t12789 + t12729;
  t12792 = t12701*t8204;
  t12793 = t12792 + t12768;
  t12795 = t12727*t5184;
  t12796 = t8204*t12731;
  t12800 = t12795 + t12716 + t12717 + t12796;
  t12811 = -1.*t4869*t12727;
  t12812 = -1.*t5184*t12731;
  t12813 = t12811 + t12753 + t12812 + t12755;
  t12845 = 3.2*t9546*t12790;
  t12846 = 3.2*t12235*t12793;
  t12847 = 3.2*t4719*t12800;
  t12848 = 3.2*t8038*t12813;
  t12849 = t12845 + t12846 + t12847 + t12848;
  t12861 = 6.4*t9546*t8038;
  t12865 = 6.4*t12235*t4719;
  t12871 = t12861 + t12865;
  p_output1[0]=var2[3]*(t12259 + t8280 - 0.5*t8673*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t8673*var2[2] - 0.5*(t12311 + t12326 + t4104)*var2[3] - 0.5*t12401*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t12258*var2[2] - 0.5*t12401*var2[3] - 0.5*(t12311 + 6.4*t12235*t12321 + t12326 + 3.2*t12331*t12477 + 3.2*t12235*t12489 + 6.4*t12331*t9546)*var2[4]);
  p_output1[3]=-0.5*t12562*var2[3];
  p_output1[4]=-0.5*t12562*var2[2] - 1.*(t12541 + t12565 + t12571)*var2[3] - 0.5*t12592*var2[4];
  p_output1[5]=-0.5*t12592*var2[3];
  p_output1[6]=var2[3]*(-0.5*(t12604 + 3.2*(t12488 + t12614)*t4719 + 3.2*(t12306 + t5266)*t8038)*var2[2] - 0.5*t12629*var2[3] - 0.5*t12640*var2[4]);
  p_output1[7]=var2[3]*(-0.5*t12629*var2[2] - 0.5*(t12604 + t12645 + t12647)*var2[3] - 0.5*t12653*var2[4]);
  p_output1[8]=var2[3]*(-0.5*t12640*var2[2] - 0.5*t12653*var2[3] - 0.5*(t12645 + t12647 + 3.2*t12477*t8289 + 6.4*t12235*t8443 + 6.4*t8289*t9546 + 3.2*t12235*t9610)*var2[4]);
  p_output1[9]=-0.5*t8270*var2[3];
  p_output1[10]=t12259 + t8280 - 1.*t8673*var2[3];
  p_output1[11]=-0.5*t12258*var2[3];
  p_output1[12]=var2[3]*(-0.5*(3.2*t4719*(t12706 + t12710 + 2.*t12682*t4869 + 2.*t12686*t5184 + t12696*t5184 + t12682*t8204) + 3.2*t8038*(t12688 + t12702 - 2.*t12686*t4869 - 1.*t12696*t4869 - 1.*t12682*t5184 - 2.*t12682*t8347))*var2[3] - 0.5*t12784*var2[4]);
  p_output1[13]=var2[3]*(-0.5*t12784*var2[3] - 0.5*(3.2*t12235*t12790 + 3.2*t12477*t12793 + 6.4*t12235*t12800 + 3.2*t4719*(t12706 + t12710 + t12767 + t12781 + 2.*t12727*t4869 + 2.*t12731*t5184) + 3.2*t8038*(t12688 + t12702 + t12728 + t12735 - 2.*t12731*t4869 - 2.*t12727*t8347) + 6.4*t12813*t9546)*var2[4]);
  p_output1[14]=-1.*(3.2*t12724*t4719 + 3.2*t12756*t8038)*var2[3] - 0.5*t12849*var2[4];
  p_output1[15]=-0.5*t12849*var2[3];
  p_output1[16]=-0.5*(6.4*Power(t12235,2) + 6.4*t12477*t4719 + 6.4*t12235*t8038 + 6.4*Power(t9546,2))*var2[3]*var2[4];
  p_output1[17]=-0.5*t12871*var2[4];
  p_output1[18]=-0.5*t12871*var2[3];
  p_output1[19]=-0.384*t12477*var2[3]*var2[4];
  p_output1[20]=-0.384*t12235*var2[4];
  p_output1[21]=-0.384*t12235*var2[3];
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

#include "J_Ce1_vec4_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
