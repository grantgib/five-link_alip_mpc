/*
 * Automatically Generated from Mathematica.
 * Sun 29 Mar 2020 00:47:56 GMT-04:00
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
  double t5549;
  double t5326;
  double t5371;
  double t5673;
  double t5804;
  double t2868;
  double t5449;
  double t5684;
  double t5709;
  double t5710;
  double t5805;
  double t5854;
  double t5856;
  double t5893;
  double t5894;
  double t7068;
  double t7069;
  double t7187;
  double t8314;
  double t9346;
  double t9903;
  double t9887;
  double t9890;
  double t9907;
  double t9891;
  double t9913;
  double t9919;
  double t9921;
  double t9922;
  double t9936;
  double t9937;
  double t9938;
  double t9939;
  double t9975;
  double t9980;
  double t9982;
  double t9983;
  double t9995;
  double t16158;
  double t16416;
  double t16596;
  double t6800;
  double t6841;
  double t6974;
  double t9864;
  double t9852;
  double t9855;
  double t9862;
  double t9863;
  double t9867;
  double t18275;
  double t18307;
  double t18319;
  double t9942;
  double t9948;
  double t9952;
  double t15837;
  double t11541;
  double t11632;
  double t14776;
  double t14888;
  double t15968;
  double t17066;
  double t17561;
  double t17567;
  double t18244;
  double t18188;
  double t18273;
  double t18091;
  double t18115;
  double t18326;
  double t18327;
  double t18328;
  double t18382;
  double t18381;
  double t18383;
  double t18341;
  double t18342;
  double t18548;
  double t18549;
  double t18550;
  double t18552;
  double t18553;
  double t18554;
  double t18647;
  double t18650;
  double t18652;
  double t18655;
  double t18656;
  double t18657;
  double t7056;
  double t9834;
  double t9837;
  double t9847;
  double t9496;
  double t9594;
  double t9605;
  double t9732;
  double t18678;
  double t18679;
  double t18680;
  double t18681;
  double t18685;
  double t18044;
  double t18045;
  double t18397;
  double t18398;
  double t18399;
  double t18400;
  double t18401;
  double t18402;
  double t18403;
  double t18425;
  double t18429;
  double t18450;
  double t18454;
  double t18470;
  double t18476;
  double t18477;
  double t18538;
  double t18539;
  double t18540;
  double t18541;
  double t18544;
  double t18547;
  double t18551;
  double t18555;
  double t18556;
  double t18603;
  double t18604;
  double t18607;
  double t18732;
  double t18733;
  double t18735;
  double t18691;
  double t18692;
  double t18694;
  double t18697;
  double t18698;
  double t18701;
  double t18702;
  double t18707;
  double t18708;
  double t18711;
  double t18712;
  double t18731;
  double t18737;
  double t18739;
  double t18752;
  double t18785;
  double t18786;
  double t18754;
  double t18788;
  double t18790;
  double t18756;
  double t9954;
  double t10850;
  double t10867;
  double t10869;
  double t9996;
  double t9997;
  double t10000;
  double t10309;
  double t18822;
  double t18824;
  double t18825;
  double t18826;
  double t18837;
  double t18330;
  double t18337;
  double t18485;
  double t18490;
  double t18493;
  double t18495;
  double t18496;
  double t18498;
  double t18500;
  double t18502;
  double t18503;
  double t18504;
  double t18505;
  double t18518;
  double t18519;
  double t18520;
  double t18615;
  double t18616;
  double t18621;
  double t18643;
  double t18644;
  double t18645;
  double t18654;
  double t18658;
  double t18659;
  double t18662;
  double t18663;
  double t18664;
  double t19008;
  double t19011;
  double t19019;
  double t18838;
  double t18839;
  double t18840;
  double t18862;
  double t18869;
  double t18915;
  double t18925;
  double t18928;
  double t18961;
  double t18992;
  double t18993;
  double t19006;
  double t19049;
  double t19052;
  double t19073;
  double t19174;
  double t19175;
  double t19076;
  double t19177;
  double t19179;
  double t19081;
  t5549 = Cos(var1[3]);
  t5326 = Cos(var1[4]);
  t5371 = Sin(var1[3]);
  t5673 = Sin(var1[4]);
  t5804 = Cos(var1[2]);
  t2868 = Sin(var1[2]);
  t5449 = -1.*t5326*t5371;
  t5684 = -1.*t5549*t5673;
  t5709 = t5449 + t5684;
  t5710 = -1.*t2868*t5709;
  t5805 = t5549*t5326;
  t5854 = -1.*t5371*t5673;
  t5856 = t5805 + t5854;
  t5893 = -1.*t5804*t5856;
  t5894 = t5710 + t5893;
  t7068 = -1.*t5326;
  t7069 = 1. + t7068;
  t7187 = 0.4*t7069;
  t8314 = 0.64*t5326;
  t9346 = t7187 + t8314;
  t9903 = Cos(var1[5]);
  t9887 = Cos(var1[6]);
  t9890 = Sin(var1[5]);
  t9907 = Sin(var1[6]);
  t9891 = -1.*t9887*t9890;
  t9913 = -1.*t9903*t9907;
  t9919 = t9891 + t9913;
  t9921 = -1.*t2868*t9919;
  t9922 = t9903*t9887;
  t9936 = -1.*t9890*t9907;
  t9937 = t9922 + t9936;
  t9938 = -1.*t5804*t9937;
  t9939 = t9921 + t9938;
  t9975 = -1.*t9887;
  t9980 = 1. + t9975;
  t9982 = 0.4*t9980;
  t9983 = 0.64*t9887;
  t9995 = t9982 + t9983;
  t16158 = -1.*t5549*t2868;
  t16416 = -1.*t5804*t5371;
  t16596 = t16158 + t16416;
  t6800 = -1.*t5804*t5549;
  t6841 = t2868*t5371;
  t6974 = t6800 + t6841;
  t9864 = -1.*t2868*t5856;
  t9852 = t5326*t5371;
  t9855 = t5549*t5673;
  t9862 = t9852 + t9855;
  t9863 = -1.*t5804*t9862;
  t9867 = t9863 + t9864;
  t18275 = -1.*t9903*t2868;
  t18307 = -1.*t5804*t9890;
  t18319 = t18275 + t18307;
  t9942 = -1.*t5804*t9903;
  t9948 = t2868*t9890;
  t9952 = t9942 + t9948;
  t15837 = -1.*t2868*t9937;
  t11541 = t9887*t9890;
  t11632 = t9903*t9907;
  t14776 = t11541 + t11632;
  t14888 = -1.*t5804*t14776;
  t15968 = t14888 + t15837;
  t17066 = t5804*t5549;
  t17561 = -1.*t2868*t5371;
  t17567 = t17066 + t17561;
  t18244 = t5804*t5856;
  t18188 = -1.*t2868*t9862;
  t18273 = t18188 + t18244;
  t18091 = t5804*t5709;
  t18115 = t18091 + t9864;
  t18326 = t5804*t9903;
  t18327 = -1.*t2868*t9890;
  t18328 = t18326 + t18327;
  t18382 = t5804*t9937;
  t18381 = -1.*t2868*t14776;
  t18383 = t18381 + t18382;
  t18341 = t5804*t9919;
  t18342 = t18341 + t15837;
  t18548 = t9346*t5371;
  t18549 = 0.24*t5549*t5673;
  t18550 = t18548 + t18549;
  t18552 = t5549*t9346;
  t18553 = -0.24*t5371*t5673;
  t18554 = t18552 + t18553;
  t18647 = t9995*t9890;
  t18650 = 0.24*t9903*t9907;
  t18652 = t18647 + t18650;
  t18655 = t9903*t9995;
  t18656 = -0.24*t9890*t9907;
  t18657 = t18655 + t18656;
  t7056 = -0.748*t6974;
  t9834 = t9346*t5673;
  t9837 = -0.24*t5326*t5673;
  t9847 = t9834 + t9837;
  t9496 = t9346*t5326;
  t9594 = Power(t5673,2);
  t9605 = 0.24*t9594;
  t9732 = t9496 + t9605;
  t18678 = -1.*t5549*t5326;
  t18679 = t5371*t5673;
  t18680 = t18678 + t18679;
  t18681 = t5804*t18680;
  t18685 = t5710 + t18681;
  t18044 = -13.6*t16596*t17567;
  t18045 = -13.6*t16596*t6974;
  t18397 = Power(t16596,2);
  t18398 = -6.8*t18397;
  t18399 = t5549*t2868;
  t18400 = t5804*t5371;
  t18401 = t18399 + t18400;
  t18402 = -6.8*t16596*t18401;
  t18403 = Power(t17567,2);
  t18425 = -6.8*t18403;
  t18429 = -6.8*t17567*t6974;
  t18450 = t2868*t5709;
  t18454 = t18450 + t18244;
  t18470 = t5804*t9862;
  t18476 = t2868*t5856;
  t18477 = t18470 + t18476;
  t18538 = Power(t5549,2);
  t18539 = 0.11*t18538;
  t18540 = Power(t5371,2);
  t18541 = 0.11*t18540;
  t18544 = t18539 + t18541;
  t18547 = -6.8*t6974*t18544;
  t18551 = -1.*t18550*t5856;
  t18555 = -1.*t5709*t18554;
  t18556 = t18551 + t18555;
  t18603 = t18550*t9862;
  t18604 = t5856*t18554;
  t18607 = t18603 + t18604;
  t18732 = -1.*t9346*t5371;
  t18733 = -0.24*t5549*t5673;
  t18735 = t18732 + t18733;
  t18691 = 0.384*var2[4]*t18685;
  t18692 = -3.2*t9847*t18115;
  t18694 = -3.2*t9732*t18685;
  t18697 = -6.4*t18273*t18115;
  t18698 = -6.4*t18115*t18685;
  t18701 = -3.2*t18454*t18273;
  t18702 = -3.2*t18115*t18477;
  t18707 = -3.2*t18454*t18685;
  t18708 = t2868*t18680;
  t18711 = t18091 + t18708;
  t18712 = -3.2*t18115*t18711;
  t18731 = -3.2*t18115*t18556;
  t18737 = t18550*t5856;
  t18739 = t5709*t18554;
  t18752 = -3.2*t18607*t18685;
  t18785 = -0.24*t5326*t5371;
  t18786 = t18785 + t18733;
  t18754 = -1.*t5709*t18550;
  t18788 = 0.24*t5549*t5326;
  t18790 = t18788 + t18553;
  t18756 = -1.*t18554*t18680;
  t9954 = -0.748*t9952;
  t10850 = t9995*t9907;
  t10867 = -0.24*t9887*t9907;
  t10869 = t10850 + t10867;
  t9996 = t9995*t9887;
  t9997 = Power(t9907,2);
  t10000 = 0.24*t9997;
  t10309 = t9996 + t10000;
  t18822 = -1.*t9903*t9887;
  t18824 = t9890*t9907;
  t18825 = t18822 + t18824;
  t18826 = t5804*t18825;
  t18837 = t9921 + t18826;
  t18330 = -13.6*t18319*t18328;
  t18337 = -13.6*t18319*t9952;
  t18485 = Power(t18319,2);
  t18490 = -6.8*t18485;
  t18493 = t9903*t2868;
  t18495 = t5804*t9890;
  t18496 = t18493 + t18495;
  t18498 = -6.8*t18319*t18496;
  t18500 = Power(t18328,2);
  t18502 = -6.8*t18500;
  t18503 = -6.8*t18328*t9952;
  t18504 = t2868*t9919;
  t18505 = t18504 + t18382;
  t18518 = t5804*t14776;
  t18519 = t2868*t9937;
  t18520 = t18518 + t18519;
  t18615 = Power(t9903,2);
  t18616 = 0.11*t18615;
  t18621 = Power(t9890,2);
  t18643 = 0.11*t18621;
  t18644 = t18616 + t18643;
  t18645 = -6.8*t9952*t18644;
  t18654 = -1.*t18652*t9937;
  t18658 = -1.*t9919*t18657;
  t18659 = t18654 + t18658;
  t18662 = t18652*t14776;
  t18663 = t9937*t18657;
  t18664 = t18662 + t18663;
  t19008 = -1.*t9995*t9890;
  t19011 = -0.24*t9903*t9907;
  t19019 = t19008 + t19011;
  t18838 = 0.384*var2[6]*t18837;
  t18839 = -3.2*t10869*t18342;
  t18840 = -3.2*t10309*t18837;
  t18862 = -6.4*t18383*t18342;
  t18869 = -6.4*t18342*t18837;
  t18915 = -3.2*t18505*t18383;
  t18925 = -3.2*t18342*t18520;
  t18928 = -3.2*t18505*t18837;
  t18961 = t2868*t18825;
  t18992 = t18341 + t18961;
  t18993 = -3.2*t18342*t18992;
  t19006 = -3.2*t18342*t18659;
  t19049 = t18652*t9937;
  t19052 = t9919*t18657;
  t19073 = -3.2*t18664*t18837;
  t19174 = -0.24*t9887*t9890;
  t19175 = t19174 + t19011;
  t19076 = -1.*t9919*t18652;
  t19177 = 0.24*t9903*t9887;
  t19179 = t19177 + t18656;
  t19081 = -1.*t18657*t18825;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(-0.5*(-3.2*Power(t18115,2) - 3.2*Power(t18273,2) - 3.2*Power(t18342,2) - 3.2*Power(t18383,2) + t18398 + t18402 + t18425 + t18429 + t18490 + t18498 + t18502 + t18503 - 3.2*t15968*t18520 - 3.2*t18454*t5894 - 3.2*t18477*t9867 - 3.2*t18505*t9939)*var2[0] - 0.5*(t18044 + t18045 + t18330 + t18337 - 6.4*t15968*t18383 - 6.4*t18115*t5894 - 6.4*t18273*t9867 - 6.4*t18342*t9939)*var2[1] - 0.5*(t18547 + t18645 - 3.2*t15968*t18659 + 2.88*t5804 - 3.2*t18607*t5894 - 3.2*t18556*t9867 - 3.2*t18664*t9939)*var2[2] - 0.5*(t7056 - 3.2*t5894*t9732 - 3.2*t9847*t9867)*var2[3] + 0.384*t5894*var2[4] - 0.5*(-3.2*t10869*t15968 - 3.2*t10309*t9939 + t9954)*var2[5] + 0.384*t9939*var2[6]);
  p_output1[3]=var2[1]*(t18691 - 0.5*(t18398 + t18402 + t18425 + t18429 + t18701 + t18702 + t18707 + t18712)*var2[0] - 0.5*(t18044 + t18045 + t18697 + t18698)*var2[1] - 0.5*(t18547 + t18731 + t18752 - 3.2*t18273*(t18754 + t18756 - 1.*t18735*t5709 - 1.*t18554*t5856) - 3.2*t18115*(t18737 + t18739 + t18735*t5856 + t18554*t9862))*var2[2] - 0.5*(t18692 + t18694 + t7056)*var2[3]);
  p_output1[4]=var2[1]*(t18691 - 0.5*(t18701 + t18702 + t18707 + t18712)*var2[0] - 0.5*(t18697 + t18698)*var2[1] - 0.5*(t18731 + t18752 - 3.2*t18273*(t18754 + t18756 - 1.*t18786*t5709 - 1.*t18790*t5856) - 3.2*t18115*(t18737 + t18739 + t18786*t5856 + t18790*t9862))*var2[2] - 0.5*(t18692 + t18694 - 3.2*t18115*(0.24*t5326*t5673 - 1.*t5673*t9346) - 3.2*t18273*(-0.24*Power(t5326,2) + t9496))*var2[3]);
  p_output1[5]=var2[1]*(t18838 - 0.5*(t18490 + t18498 + t18502 + t18503 + t18915 + t18925 + t18928 + t18993)*var2[0] - 0.5*(t18330 + t18337 + t18862 + t18869)*var2[1] - 0.5*(t18645 + t19006 + t19073 - 3.2*t18383*(t19076 + t19081 - 1.*t19019*t9919 - 1.*t18657*t9937) - 3.2*t18342*(t14776*t18657 + t19049 + t19052 + t19019*t9937))*var2[2] - 0.5*(t18839 + t18840 + t9954)*var2[5]);
  p_output1[6]=var2[1]*(t18838 - 0.5*(t18915 + t18925 + t18928 + t18993)*var2[0] - 0.5*(t18862 + t18869)*var2[1] - 0.5*(t19006 + t19073 - 3.2*t18342*(t19049 + t19052 + t14776*t19179 + t19175*t9937) - 3.2*t18383*(t19076 + t19081 - 1.*t19175*t9919 - 1.*t19179*t9937))*var2[2] - 0.5*(t18839 + t18840 - 3.2*t18342*(0.24*t9887*t9907 - 1.*t9907*t9995) - 3.2*t18383*(-0.24*Power(t9887,2) + t9996))*var2[5]);
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
